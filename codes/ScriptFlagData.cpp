void ScriptFlagData___ctor(ScriptFlagData_o *this, System_String_o *name, const MethodInfo *method)
{
  ScriptFlagData_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.name = name;
  v4 = (ScriptFlagData_o *)((char *)v4 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v4, (int32_t)name, v5, v6, v7, v8, v9, v10);
  v4->monitor = 0;
}


void ScriptFlagData___ctor_51816156(ScriptFlagData_o *this, System_String_o *name, int64_t v, const MethodInfo *method)
{
  ScriptFlagData_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.name = name;
  v6 = (ScriptFlagData_o *)((char *)v6 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)name, v7, v8, v9, v10, v11, v12);
  v6->monitor = (void *)v;
}


bool ScriptFlagData__Comp(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  int64_t v; // x19

  v = this->fields.v;
  return v == ScriptFlagData__Conv(this, vs, method);
}


bool ScriptFlagData__Comp_51816244(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.v != 0;
}


int64_t ScriptFlagData__Conv(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  int64_t result; // x0
  bool v5; // w8
  bool v6; // w8

  if ( (byte_5972831 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23498/*"off"*/);
    sub_2213A60(&StringLiteral_23525/*"on"*/);
    sub_2213A60(&StringLiteral_20307/*"false"*/);
    sub_2213A60(&StringLiteral_25526/*"true"*/);
    byte_5972831 = 1;
  }
  if ( System_String__op_Equality(vs, (System_String_o *)StringLiteral_25526/*"true"*/, 0)
    || System_String__op_Equality(vs, (System_String_o *)StringLiteral_23525/*"on"*/, 0) )
  {
    return 1;
  }
  if ( !vs )
    return 0;
  v5 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_20307/*"false"*/, 0);
  result = 0;
  if ( !v5 )
  {
    v6 = System_String__op_Equality(vs, (System_String_o *)StringLiteral_23498/*"off"*/, 0);
    result = 0;
    if ( !v6 )
      return System_Int64__Parse(vs, 0);
  }
  return result;
}


void ScriptFlagData__Set(ScriptFlagData_o *this, System_String_o *vs, const MethodInfo *method)
{
  this->fields.v = ScriptFlagData__Conv(this, vs, method);
}


void ScriptFlagData__SetRahdom(
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
  v10 = UnityEngine_Random__Range_83400680(v7, v9 + 1, 0);
  if ( v9 < v10 )
    v10 = v9;
  this->fields.v = v10;
}


void ScriptFlagData__Set_51816284(ScriptFlagData_o *this, int64_t v, const MethodInfo *method)
{
  this->fields.v = v;
}


System_String_o *ScriptFlagData__get_Name(ScriptFlagData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}