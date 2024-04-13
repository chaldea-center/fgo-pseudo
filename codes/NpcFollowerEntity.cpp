void __fastcall NpcFollowerEntity___ctor(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6288 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6288 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall NpcFollowerEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_42E6278 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, questId, questPhase, method);
    byte_42E6278 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_42E6282 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16879/*"battle_svt_id"*/, priority, defaultValue, method);
    byte_42E6282 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_16879/*"battle_svt_id"*/,
             priority,
             defaultValue,
             v7);
  else
    return defaultValue;
}


int32_t __fastcall NpcFollowerEntity__GetDispLimitCnt(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E627A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18256/*"dispLimitCount"*/, (_DWORD)method, v2, v3);
    byte_42E627A = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18256/*"dispLimitCount"*/, -1, v3);
}


int32_t __fastcall NpcFollowerEntity__GetEventDeckIndex(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E6284 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18699/*"eventDeckIndex"*/, (_DWORD)method, v2, v3);
    byte_42E6284 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_18699/*"eventDeckIndex"*/, 0, v3);
}


int32_t __fastcall NpcFollowerEntity__GetImageSvtId(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E6285 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19662/*"imageSvtId"*/, (_DWORD)method, v2, v3);
    byte_42E6285 = 1;
  }
  return NpcFollowerEntity__GetScriptInt(this, (System_String_o *)StringLiteral_19662/*"imageSvtId"*/, 0, v3);
}


System_String_o *__fastcall NpcFollowerEntity__GetOverwriteServantName(
        NpcFollowerEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6286 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22755/*"supportName"*/, (_DWORD)method, v2, v3);
    byte_42E6286 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.npcScript, (System_String_o *)StringLiteral_22755/*"supportName"*/, 0LL, 0LL);
}


int32_t __fastcall NpcFollowerEntity__GetScriptInt(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0
  __int64 v11; // x1
  NpcFollowerEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_42E6279 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42E6279 = 1;
  }
  value = 0LL;
  npcScript = this->fields.npcScript;
  if ( !npcScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_B5D69C(0LL, v11);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v13 = (NpcFollowerEntity_o *)sub_B5D990(value);
  return NpcFollowerEntity__GetDispLimitCnt(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetServantName(
        NpcFollowerEntity_o *this,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_42E6280 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21277/*"name"*/, priority, (_DWORD)defaultValue, method);
    byte_42E6280 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueString(
             this,
             (System_String_o *)StringLiteral_21277/*"name"*/,
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

  if ( (byte_42E6281 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22927/*"td"*/, priority, defaultValue, method);
    byte_42E6281 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22927/*"td"*/,
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

  if ( (byte_42E6283 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22783/*"svt_voice_id"*/, priority, defaultValue, method);
    byte_42E6283 = 1;
  }
  if ( NpcFollowerEntity__IsExistSvtChangeParam(this, *(const MethodInfo **)&priority) )
    return NpcFollowerEntity__GetSvtChangeValueInt(
             this,
             (System_String_o *)StringLiteral_22783/*"svt_voice_id"*/,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  bool v11; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v13; // x11
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E627C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22779/*"svt_change"*/, v8, v9, v10);
    byte_42E627C = 1;
  }
  value = 0LL;
  v11 = NpcFollowerEntity__IsExistSvtChangeParam(this, method);
  result = 0LL;
  if ( v11 )
  {
    result = this->fields.npcScript;
    if ( result )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_22779/*"svt_change"*/,
             &value,
             (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && value
        && (v13 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
            *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
      {
        if ( (System_Collections_Generic_Dictionary_string__object__c *)value->klass->_2.typeHierarchy[v13 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x19
  const MethodInfo *v37; // x1
  System_Collections_Generic_Dictionary_string__object__array *result; // x0
  __int64 v39; // x1
  System_Xml_Schema_XmlSchemaObject_o *v40; // x0
  __int64 v41; // x9
  _BOOL8 v42; // x0
  __int64 v43; // x10
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+20h] [xbp-40h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_42E627D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v33, v34, v35);
    byte_42E627D = 1;
  }
  value = 0LL;
  memset(&v45, 0, sizeof(v45));
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  result = (System_Collections_Generic_Dictionary_string__object__array *)NpcFollowerEntity__GetSvtChangeData(this, v37);
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    v40 = value;
    if ( value )
    {
      v41 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v41
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v41 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v44,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v45 = v44;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v45,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v42 )
            break;
          if ( v45.fields.current )
          {
            v43 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v45.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v43
              && (System_Collections_Generic_Dictionary_string__object__c *)v45.fields.current->klass->_2.typeHierarchy[v43 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              if ( !v36 )
                sub_B5D69C(v42, v45.fields.current);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v36,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v45.fields.current,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v45,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v36 )
          return (System_Collections_Generic_Dictionary_string__object__array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
      }
      else
      {
        v40 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B5D990(value);
      }
    }
    sub_B5D69C(v40, v39);
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
  int32_t v5; // w20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  _DWORD *Item; // x0
  __int64 v16; // x1
  int v17; // w8
  _DWORD *v18; // x21
  __int64 v19; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v20; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  __int64 v24; // x0

  v5 = defaultValue;
  if ( (byte_42E627F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)key,
      priority,
      *(_QWORD *)&defaultValue);
    sub_B5D5C4(&StringLiteral_21820/*"priority"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23420/*"value"*/, v12, v13, v14);
    byte_42E627F = 1;
  }
  Item = NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    v17 = Item[6];
    v18 = Item;
    if ( v17 >= 1 )
    {
      v19 = 0LL;
      do
      {
        if ( (unsigned int)v19 >= v17 )
        {
          v24 = sub_B5D6C8(Item);
          sub_B5D668(v24, 0LL);
        }
        v20 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v18[2 * v19 + 8];
        if ( !v20
          || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                       *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)&v18[2 * v19 + 8],
                       (System_Type_o *)StringLiteral_21820/*"priority"*/,
                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
        {
LABEL_14:
          sub_B5D69C(Item, v16);
        }
        v21 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        Item = (_DWORD *)System_Int32__Parse(v21, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v20,
                   (System_Type_o *)StringLiteral_23420/*"value"*/,
                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          v22 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)Item + 360LL))(
                                     Item,
                                     *(_QWORD *)(*(_QWORD *)Item + 368LL));
          Item = (_DWORD *)System_Int32__Parse(v22, 0LL);
          v5 = (int)Item;
        }
        v17 = v18[6];
        ++v19;
      }
      while ( (int)v19 < v17 );
    }
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerEntity__GetSvtChangeValueString(
        NpcFollowerEntity_o *this,
        System_String_o *key,
        int32_t priority,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 Item; // x0
  __int64 v16; // x1
  int v17; // w8
  __int64 v18; // x21
  __int64 v19; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v20; // x22
  System_String_o *v21; // x0
  __int64 v23; // x0

  v5 = defaultValue;
  if ( (byte_42E627E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)key,
      priority,
      defaultValue);
    sub_B5D5C4(&StringLiteral_21820/*"priority"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23420/*"value"*/, v12, v13, v14);
    byte_42E627E = 1;
  }
  Item = (__int64)NpcFollowerEntity__GetSvtChangeDataParams(this, key, *(const MethodInfo **)&priority);
  if ( Item )
  {
    v17 = *(_DWORD *)(Item + 24);
    v18 = Item;
    if ( v17 >= 1 )
    {
      v19 = 0LL;
      do
      {
        if ( (unsigned int)v19 >= v17 )
        {
          v23 = sub_B5D6C8(Item);
          sub_B5D668(v23, 0LL);
        }
        v20 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)(v18 + 32 + 8 * v19);
        if ( !v20
          || (Item = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)(v18 + 32 + 8 * v19),
                                (System_Type_o *)StringLiteral_21820/*"priority"*/,
                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
        {
LABEL_14:
          sub_B5D69C(Item, v16);
        }
        v21 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Item + 360LL))(
                                   Item,
                                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
        Item = System_Int32__Parse(v21, 0LL);
        if ( (_DWORD)Item == priority )
        {
          Item = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v20,
                            (System_Type_o *)StringLiteral_23420/*"value"*/,
                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !Item )
            goto LABEL_14;
          Item = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Item + 360LL))(
                   Item,
                   *(_QWORD *)(*(_QWORD *)Item + 368LL));
          v5 = (System_String_o *)Item;
        }
        v17 = *(_DWORD *)(v18 + 24);
        ++v19;
      }
      while ( (int)v19 < v17 );
    }
  }
  return v5;
}


bool __fastcall NpcFollowerEntity__HasFlag(NpcFollowerEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall NpcFollowerEntity__IsExistSvtChangeParam(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *npcScript; // x0

  if ( (byte_42E627B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22779/*"svt_change"*/, v5, v6, v7);
    byte_42E627B = 1;
  }
  npcScript = this->fields.npcScript;
  if ( npcScript )
    LOBYTE(npcScript) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)npcScript,
                          (System_Xml_XmlQualifiedName_o *)StringLiteral_22779/*"svt_change"*/,
                          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6287 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22775/*"svtOverwriteTreasureDevice"*/, (_DWORD)method, v2, v3);
    byte_42E6287 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.npcScript, (System_String_o *)StringLiteral_22775/*"svtOverwriteTreasureDevice"*/, 0, 0LL) != 0;
}


bool __fastcall NpcFollowerEntity__IsRecommendedFollower(NpcFollowerEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}