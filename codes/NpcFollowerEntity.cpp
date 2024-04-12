void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ADAF1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42ADAF1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_42ADAE1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_42ADAE1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_1A4E618 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_42ADAEB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16788/*"battle_svt_id"*/);
    byte_42ADAEB = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_16788/*"battle_svt_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


int32_t __fastcall NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42ADAE3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18162/*"dispLimitCount"*/);
    byte_42ADAE3 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18162/*"dispLimitCount"*/, -1, v2);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42ADAED & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18604/*"eventDeckIndex"*/);
    byte_42ADAED = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18604/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42ADAEE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19564/*"imageSvtId"*/);
    byte_42ADAEE = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19564/*"imageSvtId"*/, 0, v2);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42ADAEF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22640/*"supportName"*/);
    byte_42ADAEF = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_22640/*"supportName"*/, 0LL, 0LL);
}


int32_t __fastcall NpcFollowerEntity__GetScriptInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0
  __int64 v8; // x1
  NpcFollowerEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ADAE2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&long_TypeInfo);
    byte_42ADAE2 = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B52A5C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (NpcFollowerEntity_o *)sub_B52D50(value);
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

  if ( (byte_42ADAE9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21171/*"name"*/);
    byte_42ADAE9 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_21171/*"name"*/,
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

  if ( (byte_42ADAEA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22812/*"td"*/);
    byte_42ADAEA = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22812/*"td"*/,
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

  if ( (byte_42ADAEC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22668/*"svt_voice_id"*/);
    byte_42ADAEC = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22668/*"svt_voice_id"*/,
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
  bool v3; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v5; // x11
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ADAE5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&StringLiteral_22664/*"svt_change"*/);
    byte_42ADAE5 = 1;
  }
  value = 0LL;
  v3 = NpcFollowerEntity__IsExistSvtChangeParam(this, method);
  result = 0LL;
  if ( v3 )
  {
    result = this->fields.npcScript;
    if ( result )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_22664/*"svt_change"*/,
             &value,
             (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && value
        && (v5 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
            *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
      {
        if ( (System_Collections_Generic_Dictionary_string__object__c *)value->klass->_2.typeHierarchy[v5 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  const MethodInfo *v6; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *v9; // x0
  __int64 v10; // x9
  _BOOL8 v11; // x0
  __int64 v12; // x10
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_42ADAE6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_B52984(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    byte_42ADAE6 = 1;
  }
  value = 0LL;
  memset(&v14, 0, sizeof(v14));
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v6);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v9 = value;
    if ( value )
    {
      v10 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v10 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v13,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v14 = v13;
        while ( 1 )
        {
          v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v14,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v11 )
            break;
          if ( v14.fields.current )
          {
            v12 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v14.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v12
              && (System_Collections_Generic_Dictionary_string__object__c *)v14.fields.current->klass->_2.typeHierarchy[v12 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v5 )
                sub_B52A5C(v11, v14.fields.current);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v5,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v14.fields.current,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v14,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v5 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        v9 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B52D50(value);
      }
    }
    sub_B52A5C(v9, v8);
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
  _DWORD *Item; // x0
  __int64 v10; // x1
  int v11; // w8
  _DWORD *v12; // x21
  __int64 v13; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v18; // x0

  if ( (byte_42ADAE8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&StringLiteral_21707/*"priority"*/);
    sub_B52984(&StringLiteral_23304/*"value"*/);
    byte_42ADAE8 = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    v11 = Item[6];
    v12 = Item;
    if ( v11 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( (unsigned int)v13 >= v11 )
        {
          v18 = sub_B52A88(Item);
          sub_B52A28(v18, 0LL);
        }
        v14 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v12[2 * v13 + 8];
        if ( !v14
          || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                       *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v12[2 * v13 + 8],
                       (System_Type_o *)StringLiteral_21707/*"priority"*/,
                       (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_B52A5C(Item, v10);
        }
        v15 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        Item = (_DWORD *)System_Int32__Parse(v15, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v14,
                   (System_Type_o *)StringLiteral_23304/*"value"*/,
                   (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          v16 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                     Item,
                                     *(_QWORD *)(*(_QWORD *)Item + 368LL));
          Item = (_DWORD *)System_Int32__Parse(v16, 0LL);
          defaultValue = (int)Item;
        }
        v11 = v12[6];
        ++v13;
      }
      while ( (int)v13 < v11 );
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
  System_String_o *Item; // x0
  __int64 v10; // x1
  int klass; // w8
  System_String_o *v12; // x21
  __int64 v13; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v14; // x22
  System_String_o *v15; // x0
  __int64 v17; // x0

  if ( (byte_42ADAE7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&StringLiteral_21707/*"priority"*/);
    sub_B52984(&StringLiteral_23304/*"value"*/);
    byte_42ADAE7 = 1;
  }
  Item = (System_String_o *)NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    klass = (int)Item[1].klass;
    v12 = Item;
    if ( klass >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( (unsigned int)v13 >= klass )
        {
          v17 = sub_B52A88(Item);
          sub_B52A28(v17, 0LL);
        }
        v14 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)*((_QWORD *)&v12[1].monitor + v13);
        if ( !v14
          || (Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                          *((System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v12[1].monitor
                                          + v13),
                                          (System_Type_o *)StringLiteral_21707/*"priority"*/,
                                          (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_B52A5C(Item, v10);
        }
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                   Item,
                                   Item->klass->vtable._4_CompareTo.methodPtr);
        Item = (System_String_o *)System_Int32__Parse(v15, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                      v14,
                                      (System_Type_o *)StringLiteral_23304/*"value"*/,
                                      (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          Item = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                      Item,
                                      Item->klass->vtable._4_CompareTo.methodPtr);
          defaultValue = Item;
        }
        klass = (int)v12[1].klass;
        ++v13;
      }
      while ( (int)v13 < klass );
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
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0

  if ( (byte_42ADAE4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&StringLiteral_22664/*"svt_change"*/);
    byte_42ADAE4 = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
                          (System_Xml_XmlQualifiedName_o *)StringLiteral_22664/*"svt_change"*/,
                          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_42ADAF0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22660/*"svtOverwriteTreasureDevice"*/);
    byte_42ADAF0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_22660/*"svtOverwriteTreasureDevice"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}