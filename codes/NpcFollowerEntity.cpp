void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F93B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F93B9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_40F93AA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_40F93AA = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_18C2718 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall NpcFollowerEntity__CreatePrimaryKey(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return NpcFollowerEntity__CreatePK(this->fields.id, this->fields.questId, this->fields.questPhase, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetBattleSvtId(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_40F93B4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16609, *(_QWORD *)&priority);
    byte_40F93B4 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_16609,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


int32_t __fastcall NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F93AC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17961, method);
    byte_40F93AC = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_17961, -1, v2);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F93B6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18401, method);
    byte_40F93B6 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18401, 0, v2);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F93B7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19343, method);
    byte_40F93B7 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19343, 0, v2);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F93B8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22359, method);
    byte_40F93B8 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_22359, 0LL, 0LL);
}


int32_t __fastcall NpcFollowerEntity__GetScriptInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0
  NpcFollowerEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F93AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40F93AB = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B170D4();
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (NpcFollowerEntity_o *)sub_B173C8(value);
  return NpcFollowerEntity__GetDispLimitCnt(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetServantName(
        NpcFollowerEntity_o *this,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_40F93B2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20914, *(_QWORD *)&priority);
    byte_40F93B2 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_20914,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetServantTd(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_40F93B3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22529, *(_QWORD *)&priority);
    byte_40F93B3 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22529,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetServantVoiceId(
        NpcFollowerEntity_o *this,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_40F93B5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22385, *(_QWORD *)&priority);
    byte_40F93B5 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22385,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall NpcFollowerEntity__GetSvtChangeData(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool v5; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v7; // x11
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F93AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_B16FFC(&StringLiteral_22381, v4);
    byte_40F93AE = 1;
  }
  value = 0LL;
  v5 = NpcFollowerEntity__IsExistSvtChangeParam(this, method);
  result = 0LL;
  if ( v5 )
  {
    result = this->fields.npcScript;
    if ( result )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_22381,
             &value,
             (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && value
        && (v7 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
            *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
      {
        if ( (System_Collections_Generic_Dictionary_string__object__c *)value->klass->_2.typeHierarchy[v7 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          return (System_Collections_Generic_Dictionary_string__object__o *)value;
        else
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_string__object__array *__fastcall NpcFollowerEntity__GetSvtChangeDataParams(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  __int64 v20; // x9
  __int64 v21; // x10
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-40h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_40F93AF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v16);
    byte_40F93AF = 1;
  }
  value = 0LL;
  memset(&v23, 0, sizeof(v23));
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                                                                  key,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v18);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    if ( value )
    {
      v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v20 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v22,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v23 = v22;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v23,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          if ( v23.fields.current )
          {
            v21 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v21
              && (System_Collections_Generic_Dictionary_string__object__c *)v23.fields.current->klass->_2.typeHierarchy[v21 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v17 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v17,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v23.fields.current,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v23,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v17 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                                                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        sub_B173C8(value);
      }
    }
    sub_B170D4();
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpcFollowerEntity__GetSvtChangeValueInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t priority,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__object__array *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v15; // x21
  __int64 v16; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v17; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v19; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v20; // x0
  System_String_o *v21; // x0

  if ( (byte_40F93B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&StringLiteral_21438, v9);
    sub_B16FFC(&StringLiteral_23020, v10);
    byte_40F93B1 = 1;
  }
  v11 = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( v11 )
  {
    max_length = v11->max_length;
    v15 = v11;
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      do
      {
        if ( (unsigned int)v16 >= max_length )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v17 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->m_Items[v16];
        if ( !v17
          || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                       (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->m_Items[v16],
                       (System_Type_o *)StringLiteral_21438,
                       (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_B170D4();
        }
        v19 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        v11 = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v19, 0LL);
        if ( (_DWORD)v11 == priority )
        {
          v20 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v17,
                  (System_Type_o *)StringLiteral_23020,
                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v20 )
            goto LABEL_14;
          v21 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v20->klass->vtable[3].method)(
                                     v20,
                                     v20->klass->vtable[4].methodPtr);
          v11 = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v21, 0LL);
          defaultValue = (int)v11;
        }
        max_length = v15->max_length;
        ++v16;
      }
      while ( (int)v16 < max_length );
    }
  }
  return defaultValue;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetSvtChangeValueString(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__object__array *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  System_Collections_Generic_Dictionary_string__object__array *v15; // x21
  __int64 v16; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v17; // x22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v19; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v20; // x0

  if ( (byte_40F93B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&StringLiteral_21438, v9);
    sub_B16FFC(&StringLiteral_23020, v10);
    byte_40F93B0 = 1;
  }
  v11 = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( v11 )
  {
    max_length = v11->max_length;
    v15 = v11;
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      do
      {
        if ( (unsigned int)v16 >= max_length )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v17 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->m_Items[v16];
        if ( !v17
          || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                       (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15->m_Items[v16],
                       (System_Type_o *)StringLiteral_21438,
                       (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_B170D4();
        }
        v19 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                   Item,
                                   Item->klass->vtable[4].methodPtr);
        v11 = (System_Collections_Generic_Dictionary_string__object__array *)System_Int32__Parse(v19, 0LL);
        if ( (_DWORD)v11 == priority )
        {
          v20 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  v17,
                  (System_Type_o *)StringLiteral_23020,
                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v20 )
            goto LABEL_14;
          v11 = (System_Collections_Generic_Dictionary_string__object__array *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v20->klass->vtable[3].method)(
                                                                                 v20,
                                                                                 v20->klass->vtable[4].methodPtr);
          defaultValue = (System_String_o *)v11;
        }
        max_length = v15->max_length;
        ++v16;
      }
      while ( (int)v16 < max_length );
    }
  }
  return defaultValue;
}


bool __fastcall NpcFollowerEntity__HasFlag(NpcFollowerEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0

  if ( (byte_40F93AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&StringLiteral_22381, v3);
    byte_40F93AD = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
                          (System_Xml_XmlQualifiedName_o *)StringLiteral_22381,
                          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)npcScript;
}


bool __fastcall NpcFollowerEntity__IsFixedNpc(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool __fastcall NpcFollowerEntity__IsMyServantOrNpc(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}