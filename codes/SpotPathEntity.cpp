void __fastcall SpotPathEntity___ctor(SpotPathEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22A90 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C22A90 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SpotPathEntity__CreatePrimaryKey(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


int32_t __fastcall SpotPathEntity__GetMapGimmickEffectId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22A8F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21702/*"net/tcp6"*/, method);
    byte_4C22A8F = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21702/*"net/tcp6"*/, 0, v2);
}


int32_t __fastcall SpotPathEntity__GetMapGimmickId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22A8E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21703/*"net/udp"*/, method);
    byte_4C22A8E = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21703/*"net/udp"*/, 0, v2);
}


int32_t __fastcall SpotPathEntity__GetValueType(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.valueType;
}


bool __fastcall SpotPathEntity__IsStopRaidDeadTime(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22A8D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24045/*"userDelete"*/, method);
    byte_4C22A8D = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24045/*"userDelete"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SpotPathEntity__getScriptIntParam(
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
  if ( (byte_4C22A8C & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, key);
    byte_4C22A8C = 1;
  }
  ScriptObj = SpotPathEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C3BC80(ScriptObj);
  return SpotPathEntity__IsStopRaidDeadTime(v11, v12);
}


Il2CppObject *__fastcall SpotPathEntity__getScriptObj(
        SpotPathEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22A8B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4C22A8B = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}