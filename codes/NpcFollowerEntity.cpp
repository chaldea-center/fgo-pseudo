void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4211FEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4211FEB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4211FDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_4211FDB = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_1713A3C *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_4211FE5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16722/*"battle_svt_id"*/, *(_QWORD *)&priority);
    byte_4211FE5 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_16722/*"battle_svt_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


int32_t __fastcall NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4211FDD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18085/*"dispLimitCount"*/, method);
    byte_4211FDD = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18085/*"dispLimitCount"*/, -1, v2);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4211FE7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18527/*"eventDeckIndex"*/, method);
    byte_4211FE7 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18527/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4211FE8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19479/*"imageSvtId"*/, method);
    byte_4211FE8 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19479/*"imageSvtId"*/, 0, v2);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211FE9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22527/*"supportName"*/, method);
    byte_4211FE9 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_22527/*"supportName"*/, 0LL, 0LL);
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

  if ( (byte_4211FDC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B0D8A4(&long_TypeInfo, v7);
    byte_4211FDC = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B0D97C(0LL);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (NpcFollowerEntity_o *)sub_B0DC70(value);
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

  if ( (byte_4211FE3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21069/*"name"*/, *(_QWORD *)&priority);
    byte_4211FE3 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_21069/*"name"*/,
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

  if ( (byte_4211FE4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22698/*"td"*/, *(_QWORD *)&priority);
    byte_4211FE4 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22698/*"td"*/,
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

  if ( (byte_4211FE6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22554/*"svt_voice_id"*/, *(_QWORD *)&priority);
    byte_4211FE6 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22554/*"svt_voice_id"*/,
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

  if ( (byte_4211FDF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_22550/*"svt_change"*/, v4);
    byte_4211FDF = 1;
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
             (System_Xml_XmlQualifiedName_o *)StringLiteral_22550/*"svt_change"*/,
             &value,
             (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *v18; // x0
  __int64 v19; // x9
  _BOOL8 v20; // x0
  __int64 v21; // x10
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-40h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4211FE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v14);
    byte_4211FE0 = 1;
  }
  value = 0LL;
  memset(&v23, 0, sizeof(v23));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                                                                  key,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v16);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v18 = value;
    if ( value )
    {
      v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v19 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v22,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v23 = v22;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v23,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v20 )
            break;
          if ( v23.fields.current )
          {
            v21 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v21
              && (System_Collections_Generic_Dictionary_string__object__c *)v23.fields.current->klass->_2.typeHierarchy[v21 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v15 )
                sub_B0D97C(v20);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v15,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v23.fields.current,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v23,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v15 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        v18 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B0DC70(value);
      }
    }
    sub_B0D97C(v18);
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
  _DWORD *Item; // x0
  int v12; // w8
  _DWORD *v13; // x21
  __int64 v14; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x22
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v19; // x0

  if ( (byte_4211FE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B0D8A4(&StringLiteral_21600/*"priority"*/, v9);
    sub_B0D8A4(&StringLiteral_23190/*"value"*/, v10);
    byte_4211FE2 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    v12 = Item[6];
    v13 = Item;
    if ( v12 >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( (unsigned int)v14 >= v12 )
        {
          v19 = sub_B0D9A8(Item);
          sub_B0D948(v19, 0LL);
        }
        v15 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v13[2 * v14 + 8];
        if ( !v15
          || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                       *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v13[2 * v14 + 8],
                       (System_Type_o *)StringLiteral_21600/*"priority"*/,
                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_B0D97C(Item);
        }
        v16 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        Item = (_DWORD *)System_Int32__Parse(v16, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v15,
                   (System_Type_o *)StringLiteral_23190/*"value"*/,
                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          v17 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                     Item,
                                     *(_QWORD *)(*(_QWORD *)Item + 368LL));
          Item = (_DWORD *)System_Int32__Parse(v17, 0LL);
          defaultValue = (int)Item;
        }
        v12 = v13[6];
        ++v14;
      }
      while ( (int)v14 < v12 );
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
  System_String_o *Item; // x0
  int klass; // w8
  System_String_o *v13; // x21
  __int64 v14; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x22
  System_String_o *v16; // x0
  __int64 v18; // x0

  if ( (byte_4211FE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B0D8A4(&StringLiteral_21600/*"priority"*/, v9);
    sub_B0D8A4(&StringLiteral_23190/*"value"*/, v10);
    byte_4211FE1 = 1;
  }
  Item = (System_String_o *)NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    klass = (int)Item[1].klass;
    v13 = Item;
    if ( klass >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( (unsigned int)v14 >= klass )
        {
          v18 = sub_B0D9A8(Item);
          sub_B0D948(v18, 0LL);
        }
        v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)*((_QWORD *)&v13[1].monitor + v14);
        if ( !v15
          || (Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                          *((System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v13[1].monitor
                                          + v14),
                                          (System_Type_o *)StringLiteral_21600/*"priority"*/,
                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_B0D97C(Item);
        }
        v16 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                   Item,
                                   Item->klass->vtable._4_CompareTo.methodPtr);
        Item = (System_String_o *)System_Int32__Parse(v16, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                      v15,
                                      (System_Type_o *)StringLiteral_23190/*"value"*/,
                                      (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          Item = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                      Item,
                                      Item->klass->vtable._4_CompareTo.methodPtr);
          defaultValue = Item;
        }
        klass = (int)v13[1].klass;
        ++v14;
      }
      while ( (int)v14 < klass );
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

  if ( (byte_4211FDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B0D8A4(&StringLiteral_22550/*"svt_change"*/, v3);
    byte_4211FDE = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
                          (System_Xml_XmlQualifiedName_o *)StringLiteral_22550/*"svt_change"*/,
                          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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


bool __fastcall NpcFollowerEntity__IsOverwriteTreasureDevice(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4211FEA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22546/*"svtOverwriteTreasureDevice"*/, method);
    byte_4211FEA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_22546/*"svtOverwriteTreasureDevice"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}