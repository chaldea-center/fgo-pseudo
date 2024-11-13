void __fastcall BlankEarthGimmickEntity___ctor(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15EB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15EB7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BlankEarthGimmickEntity__CheckGimmickCond(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  bool v6; // w20

  if ( (byte_4B15EB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, method, v2);
    byte_4B15EB1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (v6 = QuestTree__CheckMapGimmickCond(
               (QuestTree_o *)Instance,
               this->fields.id,
               this->fields.dispCondType,
               this->fields.dispTargetId,
               this->fields.dispTargetValue,
               0LL),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  return v6 & QuestTree__CheckMapGimmickCond(
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


System_String_o *__fastcall BlankEarthGimmickEntity__GetBlankEarthOtherObjectFromScript(
        BlankEarthGimmickEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B15EB4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17510/*"blankEarthOtherObject"*/, method, v2);
    byte_4B15EB4 = 1;
  }
  return BlankEarthGimmickEntity__GetStrFromScript(this, (System_String_o *)StringLiteral_17510/*"blankEarthOtherObject"*/, v2);
}


int32_t __fastcall BlankEarthGimmickEntity__GetIntFromScript(
        BlankEarthGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15EB5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6);
    byte_4B15EB5 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v9 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
      LODWORD(script) = System_Convert__ToInt32(v9, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_String_o *__fastcall BlankEarthGimmickEntity__GetStrFromScript(
        BlankEarthGimmickEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *result; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15EB6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6);
    byte_4B15EB6 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v9 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
      return System_Convert__ToString(v9, 0LL);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall BlankEarthGimmickEntity__GetUseAnimFromScript(
        BlankEarthGimmickEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B15EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24605/*"useAnim"*/, method, v2);
    byte_4B15EB3 = 1;
  }
  return BlankEarthGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24605/*"useAnim"*/, v2);
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
  __int64 v2; // x2
  __int64 v4; // x1
  int64_t Time; // x0

  if ( (byte_4B15EB2 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B15EB2 = 1;
  }
  if ( !BlankEarthGimmickEntity__CheckGimmickCond(this, method) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt > Time;
}