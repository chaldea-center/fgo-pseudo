void __fastcall FsmEventData___ctor(FsmEventData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C54E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22113/*"none"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C54E = 1;
  }
  v5 = StringLiteral_22113/*"none"*/;
  this->fields.eventData = (struct System_String_o *)StringLiteral_22113/*"none"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.title, v6, v7, v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FsmEventData__set_Title(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.title = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.title, (int32_t)value, (int32_t)method, v3);
}