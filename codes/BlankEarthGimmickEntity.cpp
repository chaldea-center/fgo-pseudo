void BlankEarthGimmickEntity___ctor(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE326 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE326 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


bool BlankEarthGimmickEntity__CheckGimmickCond(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  bool v5; // w20

  if ( (byte_4CEE320 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CEE320 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (v5 = QuestTree__CheckMapGimmickCond(
               (QuestTree_o *)Instance,
               this->fields.id,
               this->fields.dispCondType,
               this->fields.dispTargetId,
               this->fields.dispTargetValue,
               0),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0) )
  {
    sub_1C7BD40(Instance, v4);
  }
  return v5
       & QuestTree__CheckMapGimmickCond(
           (QuestTree_o *)Instance,
           this->fields.id,
           this->fields.dispCondType2,
           this->fields.dispTargetId2,
           this->fields.dispTargetValue2,
           0)
       & 1;
}


int32_t BlankEarthGimmickEntity__CreatePrimaryKey(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *BlankEarthGimmickEntity__GetBlankEarthOtherObjectFromScript(
        BlankEarthGimmickEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CEE323 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17393/*"blankEarthOtherObject"*/);
    byte_4CEE323 = 1;
  }
  return BlankEarthGimmickEntity__GetStrFromScript(this, (System_String_o *)StringLiteral_17393/*"blankEarthOtherObject"*/, v2);
}


int32_t BlankEarthGimmickEntity__GetIntFromScript(
        BlankEarthGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE324 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CEE324 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v6, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_String_o *BlankEarthGimmickEntity__GetStrFromScript(
        BlankEarthGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE325 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CEE325 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      return System_Convert__ToString(v6, 0);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


int32_t BlankEarthGimmickEntity__GetUseAnimFromScript(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CEE322 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24720/*"useAnim"*/);
    byte_4CEE322 = 1;
  }
  return BlankEarthGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24720/*"useAnim"*/, v2);
}


bool BlankEarthGimmickEntity__IsEnableTime(BlankEarthGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool BlankEarthGimmickEntity__IsOpen(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4CEE321 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEE321 = 1;
  }
  if ( !BlankEarthGimmickEntity__CheckGimmickCond(this, method) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return this->fields.startedAt <= Time && this->fields.endedAt > Time;
}