void __fastcall ScriptFlagData___ctor(ScriptFlagData_o *this, System_String_o *name, const MethodInfo *method)
{
  ScriptFlagData_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.name = name;
  v4 = (ScriptFlagData_o *)((char *)v4 + 16);
  sub_B5D560((BattleServantConfConponent_o *)v4, (System_Int32_array **)name, v5, v6, v7, v8, v9, v10);
  v4->monitor = 0LL;
}


void __fastcall ScriptFlagData___ctor_34199916(
        ScriptFlagData_o *this,
        System_String_o *name,
        int64_t v,
        const MethodInfo *method)
{
  ScriptFlagData_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.name = name;
  v6 = (ScriptFlagData_o *)((char *)v6 + 16);
  sub_B5D560((BattleServantConfConponent_o *)v6, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  v6->monitor = (void *)v;
}


bool __fastcall ScriptFlagData__Comp(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  int64_t v; // x19

  v = this->fields.v;
  return v == ScriptFlagData__Conv(this, vs, method);
}


bool __fastcall ScriptFlagData__Comp_34200028(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.v != 0;
}


int64_t __fastcall ScriptFlagData__Conv(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t result; // x0
  bool v15; // w8
  bool v16; // w8

  if ( (byte_42ED1B6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21475/*"off"*/, (_DWORD)vs, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21505/*"on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18921/*"false"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23112/*"true"*/, v11, v12, v13);
    byte_42ED1B6 = 1;
  }
  if ( !vs )
    return 0LL;
  if ( System_String__op_Equality(vs, (System_String_o *)StringLiteral_23112/*"true"*/, 0LL)
    || System_String__op_Equality(vs, (System_String_o *)StringLiteral_21505/*"on"*/, 0LL) )
  {
    return 1LL;
  }
  v15 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_18921/*"false"*/, 0LL);
  result = 0LL;
  if ( !v15 )
  {
    v16 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_21475/*"off"*/, 0LL);
    result = 0LL;
    if ( !v16 )
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
  v10 = UnityEngine_Random__Range_35654020(v7, v9 + 1, 0LL);
  if ( v9 < v10 )
    v10 = v9;
  this->fields.v = v10;
}


void __fastcall ScriptFlagData__Set_34200080(ScriptFlagData_o *this, int64_t v, const MethodInfo *method)
{
  this->fields.v = v;
}


System_String_o *__fastcall ScriptFlagData__get_Name(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}