﻿#include "GameObject.h"

GameObject::GameObject() {
    // Initialisation de sprite, texture, velocity, acceleration, etc.
}

GameObject::~GameObject() {
    // Lib�ration des ressources, si n�cessaire
}

void GameObject::draw(sf::RenderWindow& window)
{
}

void GameObject::update(float deltaTime)
{
}

void GameObject::move(float x, float y)
{
}

void GameObject::rotate(float angle)
{
}

bool GameObject::checkCollision(const GameObject& other)
{
    return false;
}

sf::Vector2f GameObject::getPosition() const {
    return sprite.getPosition();
}

void GameObject::setPosition(float x, float y) {
    sprite.setPosition(x, y);
}
