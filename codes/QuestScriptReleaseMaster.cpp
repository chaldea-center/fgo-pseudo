void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4EBDE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method);
    byte_4A4EBDE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptReleaseEntity_o *__fastcall QuestScriptReleaseMaster__GetEntity(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4EBDC & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId);
    byte_4A4EBDC = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3218D38 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestScriptReleaseMaster__GetScriptQuestId(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v14; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4EBE2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4EBE2 = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v11);
  }
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, questId, 0LL);
  if ( kind == 3 )
    return ScriptQuestId;
  if ( QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, phaseCnt, kind, 0, v12) )
  {
    if ( !isOpen[0] )
      return 0;
    return ScriptQuestId;
  }
  if ( !QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, 0, kind, 0, v14) )
    return ScriptQuestId;
  result = 0;
  if ( isOpen[0] )
    return ScriptQuestId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
QuestScriptReleaseEntity_o *__fastcall QuestScriptReleaseMaster__GetTargetIdEntity(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  QuestScriptReleaseEntity_o *v21; // x21
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A4EBE3 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B863B8(&System_IDisposable_TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, v7);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4A4EBE3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B86614(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v21 = (QuestScriptReleaseEntity_o *)v20;
    if ( v20
      && System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v20 + 40),
           questId,
           (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___)
      && QuestScriptReleaseEntity__IsOpen(v21, v22) )
    {
      goto LABEL_23;
    }
  }
  v21 = 0LL;
LABEL_23:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_27;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_27:
    v26 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__HasForceFalseMaterial(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v11; // x1
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x20
  DataManager_c *klass; // x8
  DataManager_o *v27; // x21
  __int64 v28; // x9
  int *p_offset; // x10
  __int64 v30; // x0
  DataManager_c *v31; // x8
  DataManager_o *v32; // x21
  __int64 v33; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v34; // x10
  __int64 v35; // x0
  int v37; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v38; // [xsp+8h] [xbp-48h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  v38 = scriptPhase;
  v39 = scriptQuestId;
  if ( (byte_4A4EBE4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&scriptQuestId);
    sub_1B863B8(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__, v5);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B863B8(&string___TypeInfo, v8);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v9);
    byte_4A4EBE4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v37 = 1,
        v12 = sub_1B86460(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v39, 0LL),
        !v12) )
  {
LABEL_29:
    sub_1B86614(Instance, v11);
  }
  v11 = Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_32;
    *(_QWORD *)(v12 + 32) = v11;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v11, v13, v14);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      goto LABEL_32;
    v17 = StringLiteral_1468/*":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_1468/*":"*/;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 40), v17, v15, v16);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v38, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u
      || (*(_QWORD *)(v12 + 48) = Instance,
          sub_1B8635C((CGThumbnailListItem_o *)(v12 + 48), (int32_t)Instance, v18, v19),
          *(_DWORD *)(v12 + 24) <= 3u)
      || (v22 = StringLiteral_1468/*":"*/,
          *(_QWORD *)(v12 + 56) = StringLiteral_1468/*":"*/,
          sub_1B8635C((CGThumbnailListItem_o *)(v12 + 56), v22, v20, v21),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v37, 0LL),
          *(_DWORD *)(v12 + 24) <= 4u) )
    {
LABEL_32:
      sub_1B8661C(Instance, v11);
    }
    *(_QWORD *)(v12 + 64) = Instance;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 64), (int32_t)Instance, v23, v24);
    v25 = System_String__Concat_61685692((System_String_array *)v12, 0LL);
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    klass = Instance->klass;
    v27 = Instance;
    v28 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_16:
      v30 = sub_1BD6B4C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v30)(v27, v25, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    v31 = Instance->klass;
    v32 = Instance;
    v33 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v34 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_24;
      }
      v35 = (__int64)(&v31->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v34);
    }
    else
    {
LABEL_24:
      v35 = sub_1BD6B4C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v35)(
                                  v32,
                                  v25,
                                  *(_QWORD *)(v35 + 8));
    if ( !Instance )
      goto LABEL_29;
    if ( (BYTE4(Instance->fields.m_CancellationTokenSource) & 8) != 0 )
      return *(_DWORD *)&Instance->fields._DispLog == 92;
    ++v37;
    v12 = sub_1B86460(string___TypeInfo, 5LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v39, 0LL);
    v11 = Instance;
    if ( !v12 )
      goto LABEL_29;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__IsMaterialCondTypeQuestClearOnly(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        bool isMainInterlude,
        System_Collections_Generic_List_QuestScriptReleaseEntity__o **questScriptReleaseEnt,
        int32_t *checkCnt,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool v19; // w20
  __int64 v20; // x23
  Il2CppObject *lookup; // x0
  Il2CppObject *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *v37; // x24
  __int64 v38; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v41; // x8
  Il2CppObject *v42; // x24
  __int64 v43; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v44; // x10
  __int64 v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int monitor_high; // w8
  Il2CppClass *v49; // x8
  _QWORD *v50; // x9
  __int64 monitor_low; // x10
  __int64 v52; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v56; // [xsp+18h] [xbp-68h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-64h] BYREF

  v56 = scriptPhase;
  v57 = scriptQuestId;
  if ( (byte_4A4EBDF & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__,
      *(_QWORD *)&scriptQuestId);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v13);
    sub_1B863B8(&string___TypeInfo, v14);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v15);
    byte_4A4EBDF = 1;
  }
  *checkCnt = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)questScriptReleaseEnt, (int32_t)v16, v17, v18);
  v19 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v20 = sub_1B86460(string___TypeInfo, 5LL);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v57, 0LL);
    if ( !v20 )
      goto LABEL_43;
    if ( !*(_DWORD *)(v20 + 24) )
      goto LABEL_42;
    *(_QWORD *)(v20 + 32) = lookup;
    sub_1B8635C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)lookup, v23, v24);
    if ( *(_DWORD *)(v20 + 24) <= 1u )
      goto LABEL_42;
    v27 = StringLiteral_1468/*":"*/;
    *(_QWORD *)(v20 + 40) = StringLiteral_1468/*":"*/;
    sub_1B8635C((CGThumbnailListItem_o *)(v20 + 40), v27, v25, v26);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v56, 0LL);
    if ( *(_DWORD *)(v20 + 24) <= 2u
      || (*(_QWORD *)(v20 + 48) = lookup,
          sub_1B8635C((CGThumbnailListItem_o *)(v20 + 48), (int32_t)lookup, v28, v29),
          *(_DWORD *)(v20 + 24) <= 3u)
      || (v32 = StringLiteral_1468/*":"*/,
          *(_QWORD *)(v20 + 56) = StringLiteral_1468/*":"*/,
          sub_1B8635C((CGThumbnailListItem_o *)(v20 + 56), v32, v30, v31),
          lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&i, 0LL),
          *(_DWORD *)(v20 + 24) <= 4u) )
    {
LABEL_42:
      sub_1B8661C(lookup, v22);
    }
    *(_QWORD *)(v20 + 64) = lookup;
    sub_1B8635C((CGThumbnailListItem_o *)(v20 + 64), (int32_t)lookup, v33, v34);
    v35 = System_String__Concat_61685692((System_String_array *)v20, 0LL);
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_43:
      sub_1B86614(lookup, v22);
    klass = lookup->klass;
    v37 = lookup;
    v38 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1BD6B4C(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))p_method)(
            v37,
            v35,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_43;
    v41 = lookup->klass;
    v42 = lookup;
    v43 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v44 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v41->_1.interfaceOffsets->offset;
      while ( *(v44 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v43;
        v44 += 2;
        if ( !v43 )
          goto LABEL_23;
      }
      v45 = (__int64)&v41->vtable[*(_DWORD *)v44 + 2].method;
    }
    else
    {
LABEL_23:
      v45 = sub_1BD6B4C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2LL);
    }
    lookup = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v45)(
                               v42,
                               v35,
                               *(_QWORD *)(v45 + 8));
    v22 = lookup;
    if ( isMainInterlude )
    {
      if ( !lookup )
        goto LABEL_43;
      if ( (BYTE4(lookup[1].monitor) & 0x20) == 0 )
        continue;
    }
    else
    {
      if ( !lookup )
        goto LABEL_43;
      if ( (BYTE4(lookup[1].monitor) & 0x20) != 0 )
        continue;
    }
    ++*checkCnt;
    monitor_high = HIDWORD(lookup[1].monitor);
    if ( (monitor_high & 8) != 0 )
    {
      v19 = 0;
      if ( (monitor_high & 0x10) == 0 && LODWORD(lookup[2].klass) == 1 )
      {
        lookup = (Il2CppObject *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_43;
        v49 = lookup[1].klass;
        v50 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++HIDWORD(lookup[1].monitor);
        if ( !v49 )
          goto LABEL_43;
        monitor_low = SLODWORD(lookup[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(v49->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)lookup,
            v22,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = (__int64)v49 + 8 * monitor_low;
          LODWORD(lookup[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v52 + 32) = v22;
          sub_1B8635C((CGThumbnailListItem_o *)(v52 + 32), (int32_t)v22, v46, v47);
        }
        v19 = 1;
      }
    }
  }
  return v19;
}


bool __fastcall QuestScriptReleaseMaster__IsOpenMaterial(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        bool isMainInterlude,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, scriptQuestId, 0, 3, isMainInterlude, v5);
}


bool __fastcall QuestScriptReleaseMaster__IsOpenPhase(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        bool isMainInterlude,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Array_o *v22; // x0
  System_Int32_array *v23; // x25
  const MethodInfo *v24; // x5
  bool v25; // w21
  __int64 v26; // x22
  MethodInfo *lookup; // x0
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _BOOL4 v31; // w29
  bool v32; // w24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_String_o *v43; // x22
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v45; // x23
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  Il2CppMethodPointer v49; // x8
  MethodInfo *v50; // x23
  __int64 v51; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v52; // x10
  __int64 v53; // x0
  QuestScriptReleaseEntity_o *v54; // x22
  UserQuestMaster_o *v55; // x23
  int v57; // [xsp+0h] [xbp-70h]
  int v58; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v59; // [xsp+8h] [xbp-68h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v61; // 0:w1.4

  v59 = scriptPhase;
  v60 = scriptQuestId;
  if ( (byte_4A4EBE0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, isOpen);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_1B863B8(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__, v14);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v15);
    sub_1B863B8(&int___TypeInfo, v16);
    sub_1B863B8(&NetworkManager_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B863B8(&string___TypeInfo, v19);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v20);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v21);
    byte_4A4EBE0 = 1;
  }
  v22 = (System_Array_o *)sub_1B86460(int___TypeInfo, 7LL);
  v61.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v23 = (System_Int32_array *)v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v22, v61, 0LL);
  if ( (System_Array__IndexOf_int_(v23, scriptQuestId, (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v58 = 1;
    v26 = sub_1B86460(string___TypeInfo, 5LL);
    lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v60, 0LL);
    if ( !v26 )
      goto LABEL_54;
    v57 = 1 << kind;
    v28 = lookup;
    v25 = 0;
    v31 = kind == 3 && isMainInterlude;
    v32 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_53;
      *(_QWORD *)(v26 + 32) = v28;
      sub_1B8635C((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v28, v29, v30);
      if ( *(_DWORD *)(v26 + 24) <= 1u )
        goto LABEL_53;
      v35 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v26 + 40) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v26 + 40), v35, v33, v34);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v59, 0LL);
      if ( *(_DWORD *)(v26 + 24) <= 2u
        || (*(_QWORD *)(v26 + 48) = lookup,
            sub_1B8635C((CGThumbnailListItem_o *)(v26 + 48), (int32_t)lookup, v36, v37),
            *(_DWORD *)(v26 + 24) <= 3u)
        || (v40 = StringLiteral_1468/*":"*/,
            *(_QWORD *)(v26 + 56) = StringLiteral_1468/*":"*/,
            sub_1B8635C((CGThumbnailListItem_o *)(v26 + 56), v40, v38, v39),
            lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v58, 0LL),
            *(_DWORD *)(v26 + 24) <= 4u) )
      {
LABEL_53:
        sub_1B8661C(lookup, v28);
      }
      *(_QWORD *)(v26 + 64) = lookup;
      sub_1B8635C((CGThumbnailListItem_o *)(v26 + 64), (int32_t)lookup, v41, v42);
      v43 = System_String__Concat_61685692((System_String_array *)v26, 0LL);
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      methodPointer = lookup->methodPointer;
      v45 = lookup;
      v46 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v47 = (int *)(*((_QWORD *)methodPointer + 22) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)v47 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_17;
        }
        v48 = (__int64)methodPointer + 16 * *v47 + 312;
      }
      else
      {
LABEL_17:
        v48 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v48)(v45, v43, *(_QWORD *)(v48 + 8)) & 1) == 0 )
        break;
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      v49 = lookup->methodPointer;
      v50 = lookup;
      v51 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v52 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)(*((_QWORD *)v49 + 22) + 8LL);
        while ( *(v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v51;
          v52 += 2;
          if ( !v51 )
            goto LABEL_25;
        }
        v53 = (__int64)v49 + 16 * *(_DWORD *)v52 + 344;
      }
      else
      {
LABEL_25:
        v53 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                2LL);
      }
      lookup = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v53)(
                               v50,
                               v43,
                               *(_QWORD *)(v53 + 8));
      v54 = (QuestScriptReleaseEntity_o *)lookup;
      if ( !v31 )
        goto LABEL_32;
      if ( !lookup )
        goto LABEL_54;
      if ( (BYTE4(lookup->name) & 0x20) != 0 )
      {
LABEL_32:
        if ( v32 )
          goto LABEL_35;
        if ( !lookup )
          goto LABEL_54;
        if ( (BYTE4(lookup->name) & 0x20) == 0 )
        {
LABEL_35:
          lookup = (MethodInfo *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !lookup )
            goto LABEL_54;
          lookup = (MethodInfo *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)lookup,
                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !v54 )
            goto LABEL_54;
          if ( (v54->fields.flag & v57) != 0 )
          {
            v55 = (UserQuestMaster_o *)lookup;
            if ( !QuestScriptReleaseEntity__IsOpen(v54, v28) )
            {
              if ( v54->fields.condType != 1 )
                goto LABEL_52;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4A48C25 )
              {
                sub_1B863B8(&NetworkManager_TypeInfo, v28);
                byte_4A48C25 = 1;
              }
              lookup = (MethodInfo *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                lookup = (MethodInfo *)NetworkManager_TypeInfo;
              }
              if ( v55 )
              {
                if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                       v55,
                       *((_QWORD *)lookup[2].virtualMethodPointer + 8),
                       v54->fields.targetIds,
                       0LL) )
                {
                  v25 = 1;
                  *isOpen = 1;
                  return v25;
                }
LABEL_52:
                v25 = 1;
                *isOpen = 0;
                return v25;
              }
LABEL_54:
              sub_1B86614(lookup, v28);
            }
            v25 = 1;
          }
        }
      }
      ++v58;
      v26 = sub_1B86460(string___TypeInfo, 5LL);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v60, 0LL);
      v28 = lookup;
      if ( !v26 )
        goto LABEL_54;
    }
    *isOpen = 1;
  }
  else
  {
    return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v24);
  }
  return v25;
}


bool __fastcall QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        const MethodInfo *method)
{
  char v6; // w22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  QuestScriptReleaseEntity_o *lookup; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool v17; // w24
  int v18; // w28
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v31; // x22
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  QuestScriptReleaseEntity_c *v35; // x8
  QuestScriptReleaseEntity_o *v36; // x22
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v38; // x10
  __int64 v39; // x0
  bool v40; // w8
  bool result; // w0
  int v42; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v43; // [xsp+18h] [xbp-58h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-54h] BYREF

  v43 = scriptPhase;
  v44 = scriptQuestId;
  v6 = kind;
  if ( (byte_4A4EBE1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__, isOpen);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v9);
    sub_1B863B8(&string___TypeInfo, v10);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v11);
    byte_4A4EBE1 = 1;
  }
  v42 = 1;
  v12 = sub_1B86460(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v44, 0LL);
  if ( !v12 )
LABEL_29:
    sub_1B86614(lookup, v14);
  v14 = (const MethodInfo *)lookup;
  v17 = 0;
  v18 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_33;
    *(_QWORD *)(v12 + 32) = v14;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v14, v15, v16);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      goto LABEL_33;
    v21 = StringLiteral_1468/*":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_1468/*":"*/;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 40), v21, v19, v20);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v43, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u
      || (*(_QWORD *)(v12 + 48) = lookup,
          sub_1B8635C((CGThumbnailListItem_o *)(v12 + 48), (int32_t)lookup, v22, v23),
          *(_DWORD *)(v12 + 24) <= 3u)
      || (v26 = StringLiteral_1468/*":"*/,
          *(_QWORD *)(v12 + 56) = StringLiteral_1468/*":"*/,
          sub_1B8635C((CGThumbnailListItem_o *)(v12 + 56), v26, v24, v25),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL),
          *(_DWORD *)(v12 + 24) <= 4u) )
    {
LABEL_33:
      sub_1B8661C(lookup, v14);
    }
    *(_QWORD *)(v12 + 64) = lookup;
    sub_1B8635C((CGThumbnailListItem_o *)(v12 + 64), (int32_t)lookup, v27, v28);
    v29 = System_String__Concat_61685692((System_String_array *)v12, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    klass = lookup->klass;
    v31 = lookup;
    v32 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_15;
      }
      v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v34 = sub_1BD6B4C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v34)(
            v31,
            v29,
            *(_QWORD *)(v34 + 8)) & 1) == 0 )
    {
      v40 = 0;
      goto LABEL_32;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_3216B2C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    v35 = lookup->klass;
    v36 = lookup;
    v37 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v38 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v35->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v37;
        v38 += 2;
        if ( !v37 )
          goto LABEL_23;
      }
      v39 = (__int64)(&v35->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v38);
    }
    else
    {
LABEL_23:
      v39 = sub_1BD6B4C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v39)(
                                             v36,
                                             v29,
                                             *(_QWORD *)(v39 + 8));
    if ( !lookup )
      goto LABEL_29;
    if ( (lookup->fields.flag & v18) != 0 )
    {
      v17 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v14) )
        break;
    }
    ++v42;
    v12 = sub_1B86460(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v44, 0LL);
    v14 = (const MethodInfo *)lookup;
    if ( !v12 )
      goto LABEL_29;
  }
  v40 = 1;
LABEL_32:
  result = v17;
  *isOpen = v40;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__TryGetEntity(
        QuestScriptReleaseMaster_o *this,
        QuestScriptReleaseEntity_o **entity,
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4EBDD & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4A4EBDD = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}