#pragma once

Person::Person() : mWeight(0), mFirstName(""), mAge(0) {}

Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) const {
    return mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return mFirstName != otherPerson.mFirstName;
}
