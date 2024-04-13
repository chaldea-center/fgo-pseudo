void __fastcall FsmEventData___ctor(FsmEventData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42EB520 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21397/*"none"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EB520 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_21397/*"none"*/;
  this->fields.eventData = (struct System_String_o *)StringLiteral_21397/*"none"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.title, v13, v14, v15, v16, v17, v18, v19);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventData = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FsmEventData__set_Title(FsmEventData_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.title = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}