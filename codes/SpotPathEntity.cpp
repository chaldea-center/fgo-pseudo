void SpotPathEntity___ctor(SpotPathEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF278 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEF278 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t SpotPathEntity__CreatePrimaryKey(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


int32_t SpotPathEntity__GetMapGimmickEffectId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF277 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21618/*"mapGimmickEffectId"*/);
    byte_4CEF277 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21618/*"mapGimmickEffectId"*/, 0, v2);
}


int32_t SpotPathEntity__GetMapGimmickId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF276 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21619/*"mapGimmickId"*/);
    byte_4CEF276 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21619/*"mapGimmickId"*/, 0, v2);
}


int32_t SpotPathEntity__GetValueType(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.valueType;
}


bool SpotPathEntity__IsStopRaidDeadTime(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF275 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23940/*"stopRaidDeadTime"*/);
    byte_4CEF275 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23940/*"stopRaidDeadTime"*/, 0, v2) != 0;
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
  __int64 v8; // x2
  __int64 v9; // x3
  SpotPathEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_4CEF274 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEF274 = 1;
  }
  ScriptObj = SpotPathEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C7C0DC(ScriptObj);
  return SpotPathEntity__IsStopRaidDeadTime(v11, v12);
}


Il2CppObject *SpotPathEntity__getScriptObj(SpotPathEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF273 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CEF273 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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