#include "delimiter.h"

Delimiter::Delimiter(b2World& world, float x_from, float y_from, float x_to, float y_to) : user_data(2, nullptr){
	b2BodyDef delimiter_body_def;
	this->body = world.CreateBody(&delimiter_body_def);
	this->body->SetUserData((void*)&this->user_data);
	
	b2FixtureDef delimiter_fixture_def;
    b2EdgeShape edge_shape;
    delimiter_fixture_def.shape = &edge_shape;
    delimiter_fixture_def.filter.groupIndex = -3;
    edge_shape.Set(b2Vec2(x_from, y_from), b2Vec2(x_to, y_to));
    this->body->CreateFixture(&delimiter_fixture_def);
}

Delimiter::~Delimiter(){
}

Delimiter::Delimiter(Delimiter&& other) : user_data(std::move(other.user_data)), body(other.body){
	this->body->SetUserData((void*)&this->user_data);
}
