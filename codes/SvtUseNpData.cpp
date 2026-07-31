void SvtUseNpData___ctor(SvtUseNpData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593C8A4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C8A4 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.ClosedMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.ClosedMessage, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}