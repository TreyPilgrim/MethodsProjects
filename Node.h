#pragma once

class Node
{
public:
    Node *next {nullptr};
    Node *prev{nullptr};

    Node(): next{nullptr}, prev {nullptr} {}

};
