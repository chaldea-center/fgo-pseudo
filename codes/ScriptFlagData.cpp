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
  sub_B52920((BattleServantConfConponent_o *)v4, (System_Int32_array **)name, v5, v6, v7, v8, v9, v10);
  v4->monitor = 0LL;
}


void __fastcall ScriptFlagData___ctor_33990992(
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
  sub_B52920((BattleServantConfConponent_o *)v6, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  v6->monitor = (void *)v;
}


bool __fastcall ScriptFlagData__Comp(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  int64_t v; // x19

  v = this->fields.v;
  return v == ScriptFlagData__Conv(this, vs, method);
}


bool __fastcall ScriptFlagData__Comp_33991104(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.v != 0;
}


int64_t __fastcall ScriptFlagData__Conv(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  int64_t result; // x0
  bool v5; // w8
  bool v6; // w8

  if ( (byte_42B4782 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21366/*"off"*/);
    sub_B52984(&StringLiteral_21396/*"on"*/);
    sub_B52984(&StringLiteral_18826/*"false"*/);
    sub_B52984(&StringLiteral_22997/*"true"*/);
    byte_42B4782 = 1;
  }
  if ( !vs )
    return 0LL;
  if ( System_String__op_Equality(vs, (System_String_o *)StringLiteral_22997/*"true"*/, 0LL)
    || System_String__op_Equality(vs, (System_String_o *)StringLiteral_21396/*"on"*/, 0LL) )
  {
    return 1LL;
  }
  v5 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_18826/*"false"*/, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    v6 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_21366/*"off"*/, 0LL);
    result = 0LL;
    if ( !v6 )
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
  v10 = UnityEngine_Random__Range_35650740(v7, v9 + 1, 0LL);
  if ( v9 < v10 )
    v10 = v9;
  this->fields.v = v10;
}


void __fastcall ScriptFlagData__Set_33991156(ScriptFlagData_o *this, int64_t v, const MethodInfo *method)
{
  this->fields.v = v;
}


System_String_o *__fastcall ScriptFlagData__get_Name(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}