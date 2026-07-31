void WarClearReward___ctor(WarClearReward_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593583B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593583B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.giftId = 0;
  this->fields.title = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.title, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.message = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.message, v10, v11, v12, v13, v14, v15, v16);
}