void SpotPathEntity___ctor(SpotPathEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593931B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_593931B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t SpotPathEntity__CreatePrimaryKey(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


int32_t SpotPathEntity__GetMapGimmickEffectId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593931A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22462/*"mapGimmickEffectId"*/);
    byte_593931A = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22462/*"mapGimmickEffectId"*/, 0, v2);
}


int32_t SpotPathEntity__GetMapGimmickId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939319 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22463/*"mapGimmickId"*/);
    byte_5939319 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22463/*"mapGimmickId"*/, 0, v2);
}


int32_t SpotPathEntity__GetValueType(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.valueType;
}


bool SpotPathEntity__IsStopRaidDeadTime(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939318 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24926/*"stopRaidDeadTime"*/);
    byte_5939318 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24926/*"stopRaidDeadTime"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t SpotPathEntity__getScriptIntParam(
        SpotPathEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v6; // x2
  SpotPathEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = defVal;
  ScriptObj = SpotPathEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v6);
  sub_220024C(ScriptObj, qword_594C090, v6);
  return SpotPathEntity__IsStopRaidDeadTime(v8, v9);
}


Il2CppObject *SpotPathEntity__getScriptObj(SpotPathEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939317 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5939317 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}