void __fastcall ScriptFlagData___ctor(ScriptFlagData_o *this, System_String_o *name, const MethodInfo *method)
{
  PartyOrganizationUtility_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v4 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)name;
  v4 = (PartyOrganizationUtility_o *)((char *)v4 + 16);
  sub_1C2E0D0(v4, (int64_t)name, v5, v6, v7, v8, v9, v10);
  v4->monitor = 0LL;
}


void __fastcall ScriptFlagData___ctor_43025304(
        ScriptFlagData_o *this,
        System_String_o *name,
        int64_t v,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)name;
  v6 = (PartyOrganizationUtility_o *)((char *)v6 + 16);
  sub_1C2E0D0(v6, (int64_t)name, v7, v8, v9, v10, v11, v12);
  v6->monitor = (void *)v;
}


bool __fastcall ScriptFlagData__Comp(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  int64_t v; // x19

  v = this->fields.v;
  return v == ScriptFlagData__Conv(this, vs, method);
}


bool __fastcall ScriptFlagData__Comp_43025392(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.v != 0;
}


int64_t __fastcall ScriptFlagData__Conv(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t result; // x0
  bool v8; // w8
  bool v9; // w8

  if ( (byte_4BFF405 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_22624/*"off"*/, vs);
    sub_1C2E12C(&StringLiteral_22654/*"on"*/, v4);
    sub_1C2E12C(&StringLiteral_19725/*"false"*/, v5);
    sub_1C2E12C(&StringLiteral_24537/*"true"*/, v6);
    byte_4BFF405 = 1;
  }
  if ( System_String__op_Equality(vs, (System_String_o *)StringLiteral_24537/*"true"*/, 0LL)
    || System_String__op_Equality(vs, (System_String_o *)StringLiteral_22654/*"on"*/, 0LL) )
  {
    return 1LL;
  }
  if ( !vs )
    return 0LL;
  v8 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_19725/*"false"*/, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    v9 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_22624/*"off"*/, 0LL);
    result = 0LL;
    if ( !v9 )
      return System_Int64__Parse(vs, 0LL);
  }
  return result;
}


void __fastcall ScriptFlagData__Set(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  this->fields.v = ScriptFlagData__Conv(this, vs, method);
}


void __fastcall ScriptFlagData__SetRahdom(
        ScriptFlagData_o *this,
        System_String_o *ss,
        System_String_o *es,
        const MethodInfo *method)
{
  ScriptFlagData_o *v6; // x0
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  int64_t v9; // x19
  int64_t v10; // x8

  v6 = (ScriptFlagData_o *)ScriptFlagData__Conv(this, ss, (const MethodInfo *)es);
  v7 = (int)v6;
  v9 = ScriptFlagData__Conv(v6, es, v8);
  v10 = UnityEngine_Random__Range_70949460(v7, v9 + 1, 0LL);
  if ( v9 < v10 )
    v10 = v9;
  this->fields.v = v10;
}


void __fastcall ScriptFlagData__Set_43025432(ScriptFlagData_o *this, int64_t v, const MethodInfo *method)
{
  this->fields.v = v;
}


System_String_o *__fastcall ScriptFlagData__get_Name(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}