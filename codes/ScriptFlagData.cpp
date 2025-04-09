void __fastcall ScriptFlagData___ctor(ScriptFlagData_o *this, System_String_o *name, const MethodInfo *method)
{
  ScriptFlagData_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.name = name;
  v4 = (ScriptFlagData_o *)((char *)v4 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)v4, (int32_t)name, v5, v6);
  v4->monitor = 0LL;
}


void __fastcall ScriptFlagData___ctor_42272792(
        ScriptFlagData_o *this,
        System_String_o *name,
        int64_t v,
        const MethodInfo *method)
{
  ScriptFlagData_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.name = name;
  v6 = (ScriptFlagData_o *)((char *)v6 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)v6, (int32_t)name, v7, v8);
  v6->monitor = (void *)v;
}


bool __fastcall ScriptFlagData__Comp(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  int64_t v; // x19

  v = this->fields.v;
  return v == ScriptFlagData__Conv(this, vs, method);
}


bool __fastcall ScriptFlagData__Comp_42272880(ScriptFlagData_o *this, const MethodInfo *method)
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

  if ( (byte_49BCB60 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21930/*"off"*/, vs);
    sub_1B4CF90(&StringLiteral_21957/*"on"*/, v4);
    sub_1B4CF90(&StringLiteral_19073/*"false"*/, v5);
    sub_1B4CF90(&StringLiteral_23794/*"true"*/, v6);
    byte_49BCB60 = 1;
  }
  if ( System_String__op_Equality(vs, (System_String_o *)StringLiteral_23794/*"true"*/, 0LL)
    || System_String__op_Equality(vs, (System_String_o *)StringLiteral_21957/*"on"*/, 0LL) )
  {
    return 1LL;
  }
  if ( !vs )
    return 0LL;
  v8 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_19073/*"false"*/, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    v9 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_21930/*"off"*/, 0LL);
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
  v10 = UnityEngine_Random__Range_68764200(v7, v9 + 1, 0LL);
  if ( v9 < v10 )
    v10 = v9;
  this->fields.v = v10;
}


void __fastcall ScriptFlagData__Set_42272920(ScriptFlagData_o *this, int64_t v, const MethodInfo *method)
{
  this->fields.v = v;
}


System_String_o *__fastcall ScriptFlagData__get_Name(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}