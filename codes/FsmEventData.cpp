void __fastcall FsmEventData___ctor(FsmEventData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  int64_t v10; // x1
  void *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BC8F40 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22497/*"none"*/, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v9);
    byte_4BC8F40 = 1;
  }
  v10 = StringLiteral_22497/*"none"*/;
  this->fields.eventData = (struct System_String_o *)StringLiteral_22497/*"none"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.title, (int64_t)v11, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventData = value;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall FsmEventData__set_Title(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.title = value;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.title, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}