void __fastcall BlankEarthGimmickEntity___ctor(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7EC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E7EC1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BlankEarthGimmickEntity__CheckGimmickCond(BlankEarthGimmickEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  QuestTree_o *v8; // x0
  __int64 v9; // x1
  bool v10; // w20

  if ( (byte_42E7EBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v5, v6, v7);
    byte_42E7EBC = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v8 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v8
    || (v10 = QuestTree__CheckMapGimmickCond(
                v8,
                this->fields.id,
                this->fields.dispCondType,
                this->fields.dispTargetId,
                this->fields.dispTargetValue,
                0LL),
        (v8 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(v8, v9);
  }
  return v10 & QuestTree__CheckMapGimmickCond(
                 v8,
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v10; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7EC0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7, v8);
    byte_42E7EC0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v10 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v10, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7EBF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E7EBF = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v3; // x3

  if ( (byte_42E7EBE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23282/*"useAnim"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7EBE = 1;
  }
  return BlankEarthGimmickEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23282/*"useAnim"*/, v2);
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
  int v2; // w2
  __int64 v3; // x3
  int64_t Time; // x0

  if ( (byte_42E7EBD & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7EBD = 1;
  }
  if ( !BlankEarthGimmickEntity__CheckGimmickCond(this, method) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt > Time;
}