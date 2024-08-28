void __fastcall FsmEventData___ctor(FsmEventData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0A032 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_22039/*"none"*/, method);
    sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A0A032 = 1;
  }
  v6 = StringLiteral_22039/*"none"*/;
  this->fields.eventData = (struct System_String_o *)StringLiteral_22039/*"none"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, v6, v2, v3);
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.title, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FsmEventData__Finalize(FsmEventData_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall FsmEventData__get_EventData(FsmEventData_o *this, const MethodInfo *method)
{
  return this->fields.eventData;
}


System_String_o *__fastcall FsmEventData__get_Title(FsmEventData_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


void __fastcall FsmEventData__set_EventData(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.eventData = value;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FsmEventData__set_Title(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.title = value;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)value, (int32_t)method, v3);
}