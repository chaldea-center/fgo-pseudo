void __fastcall BlankEarthGimmickEntity___ctor(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7F5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE7F5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BlankEarthGimmickEntity__CheckGimmickCond(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  bool v5; // w20

  if ( (byte_49FE7F0 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    byte_49FE7F0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (v5 = QuestTree__CheckMapGimmickCond(
               (QuestTree_o *)Instance,
               this->fields.id,
               this->fields.dispCondType,
               this->fields.dispTargetId,
               this->fields.dispTargetValue,
               0LL),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL) )
  {
    sub_1B64C5C(Instance, v4);
  }
  return v5 & QuestTree__CheckMapGimmickCond(
                (QuestTree_o *)Instance,
                this->fields.id,
                this->fields.dispCondType2,
                this->fields.dispTargetId2,
                this->fields.dispTargetValue2,
                0LL) & 1;
}


int32_t __fastcall BlankEarthGimmickEntity__CreatePrimaryKey(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BlankEarthGimmickEntity__GetIntFromScript(
        BlankEarthGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE7F4 & 1) == 0 )
  {
    sub_1B64A00(&System_Convert_TypeInfo, key);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    byte_49FE7F4 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317D4F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v7, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_String_o *__fastcall BlankEarthGimmickEntity__GetStringFromScript(
        BlankEarthGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE7F3 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B64A00(&string_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_1/*""*/, v6);
    byte_49FE7F3 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317D4F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


int32_t __fastcall BlankEarthGimmickEntity__GetUseAnimFromScript(
        BlankEarthGimmickEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FE7F2 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_24258/*"useAnim"*/, method);
    byte_49FE7F2 = 1;
  }
  return BlankEarthGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24258/*"useAnim"*/, v2);
}


bool __fastcall BlankEarthGimmickEntity__IsEnableTime(
        BlankEarthGimmickEntity_o *this,
        int64_t time,
        const MethodInfo *method)
{
  return this->fields.startedAt <= time && this->fields.endedAt > time;
}


bool __fastcall BlankEarthGimmickEntity__IsOpen(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_49FE7F1 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    byte_49FE7F1 = 1;
  }
  if ( !BlankEarthGimmickEntity__CheckGimmickCond(this, method) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt > Time;
}