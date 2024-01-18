void __fastcall FsmEventData___ctor(FsmEventData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_418A4CE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21119/*"none"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418A4CE = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_21119/*"none"*/;
  this->fields.eventData = (struct System_String_o *)StringLiteral_21119/*"none"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, v11, v12, v13, v14, v15, v16, v17);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.title,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}