#pragma once

void jankenMain();
void showHand(int hand, bool player = true);
const char* getCompareString(int hand, int oppHand, bool& drawCheck);

