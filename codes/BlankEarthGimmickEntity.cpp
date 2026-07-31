void BlankEarthGimmickEntity___ctor(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938309 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938309 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


bool BlankEarthGimmickEntity__CheckGimmickCond(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  bool v5; // w20

  if ( (byte_5938303 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5938303 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (v5 = QuestTree__CheckMapGimmickCond(
               (QuestTree_o *)Instance,
               this->fields.id,
               this->fields.dispCondType,
               this->fields.dispTargetId,
               this->fields.dispTargetValue,
               0),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v4);
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

  if ( (byte_5938306 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18010/*"blankEarthOtherObject"*/);
    byte_5938306 = 1;
  }
  return BlankEarthGimmickEntity__GetStrFromScript(this, (System_String_o *)StringLiteral_18010/*"blankEarthOtherObject"*/, v2);
}


int32_t BlankEarthGimmickEntity__GetIntFromScript(
        BlankEarthGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938307 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938307 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6);
      LODWORD(script) = System_Convert__ToInt32(v7, 0);
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
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938308 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938308 = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6);
      return System_Convert__ToString(v7, 0);
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

  if ( (byte_5938305 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25776/*"useAnim"*/);
    byte_5938305 = 1;
  }
  return BlankEarthGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_25776/*"useAnim"*/, v2);
}


bool BlankEarthGimmickEntity__IsEnableTime(BlankEarthGimmickEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool BlankEarthGimmickEntity__IsOpen(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0

  if ( (byte_5938304 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938304 = 1;
  }
  if ( !BlankEarthGimmickEntity__CheckGimmickCond(this, method) )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  Time = NetworkManager__getTime(0);
  return this->fields.startedAt <= Time && this->fields.endedAt > Time;
}