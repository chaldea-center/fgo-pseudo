void FsmEventData___ctor(FsmEventData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CEFD36 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22475/*"none"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFD36 = 1;
  }
  v9 = StringLiteral_22475/*"none"*/;
  this->fields.eventData = (struct System_String_o *)StringLiteral_22475/*"none"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.title, v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FsmEventData__Finalize(FsmEventData_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


System_String_o *FsmEventData__get_EventData(FsmEventData_o *this, const MethodInfo *method)
{
  return this->fields.eventData;
}


System_String_o *FsmEventData__get_Title(FsmEventData_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


void FsmEventData__set_EventData(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventData = value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void FsmEventData__set_Title(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.title = value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.title, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}