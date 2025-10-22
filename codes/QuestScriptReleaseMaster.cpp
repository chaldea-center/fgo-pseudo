void QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C5751B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
    byte_4C5751B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptReleaseEntity_o *QuestScriptReleaseMaster__GetEntity(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C57519 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
    byte_4C57519 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33B7A10 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
}


int32_t QuestScriptReleaseMaster__GetScriptQuestId(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        int32_t kind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v14; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5751F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5751F = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v10);
  }
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, questId, v11);
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
QuestScriptReleaseEntity_o *QuestScriptReleaseMaster__GetTargetIdEntity(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  QuestScriptReleaseEntity_o *v17; // x21
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4C57520 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    byte_4C57520 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3E7C0(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v17 = (QuestScriptReleaseEntity_o *)v16;
    if ( v16
      && System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 40),
           questId,
           (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___)
      && QuestScriptReleaseEntity__IsOpen(v17, v18) )
    {
      goto LABEL_23;
    }
  }
  v17 = 0;
LABEL_23:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_27:
    v22 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v17;
}


bool QuestScriptReleaseMaster__HasForceFalseMaterial(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x1
  __int64 v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x20
  DataManager_c *klass; // x8
  DataManager_o *v22; // x21
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  DataManager_c *v26; // x8
  DataManager_o *v27; // x21
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v29; // x10
  __int64 v30; // x0
  int v32; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  v33 = scriptPhase;
  v34 = scriptQuestId;
  if ( (byte_4C57521 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C57521 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v32 = 1,
        v7 = sub_1C3E60C(string___TypeInfo, 5),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v34, 0),
        !v7) )
  {
LABEL_29:
    sub_1C3E7C0(Instance, v6);
  }
  v6 = Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_32;
    *(_QWORD *)(v7 + 32) = v6;
    sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v6, v8, v9);
    if ( *(_DWORD *)(v7 + 24) <= 1u )
      goto LABEL_32;
    v12 = StringLiteral_1456/*":"*/;
    *(_QWORD *)(v7 + 40) = StringLiteral_1456/*":"*/;
    sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), v12, v10, v11);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v33, 0);
    if ( *(_DWORD *)(v7 + 24) <= 2u
      || (*(_QWORD *)(v7 + 48) = Instance,
          sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), (int32_t)Instance, v13, v14),
          *(_DWORD *)(v7 + 24) <= 3u)
      || (v17 = StringLiteral_1456/*":"*/,
          *(_QWORD *)(v7 + 56) = StringLiteral_1456/*":"*/,
          sub_1C3E508((CGThumbnailListItem_o *)(v7 + 56), v17, v15, v16),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v32, 0),
          *(_DWORD *)(v7 + 24) <= 4u) )
    {
LABEL_32:
      sub_1C3E7C8(Instance, v6);
    }
    *(_QWORD *)(v7 + 64) = Instance;
    sub_1C3E508((CGThumbnailListItem_o *)(v7 + 64), (int32_t)Instance, v18, v19);
    v20 = System_String__Concat_63676984((System_String_array *)v7, 0);
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    klass = Instance->klass;
    v22 = Instance;
    v23 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_16:
      v25 = sub_1C8ED7C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v25)(v22, v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    v26 = Instance->klass;
    v27 = Instance;
    v28 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      v29 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v28;
        v29 += 2;
        if ( !v28 )
          goto LABEL_24;
      }
      v30 = (__int64)(&v26->vtable._2_GetHashCode + *(_DWORD *)v29);
    }
    else
    {
LABEL_24:
      v30 = sub_1C8ED7C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v30)(
                                  v27,
                                  v20,
                                  *(_QWORD *)(v30 + 8));
    if ( !Instance )
      goto LABEL_29;
    if ( (BYTE4(Instance->fields.m_CancellationTokenSource) & 8) != 0 )
      return *(_DWORD *)&Instance->fields._DispLog == 92;
    ++v32;
    v7 = sub_1C3E60C(string___TypeInfo, 5);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v34, 0);
    v6 = Instance;
    if ( !v7 )
      goto LABEL_29;
  }
}


bool QuestScriptReleaseMaster__IsMaterialCondTypeQuestClearOnly(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        bool isMainInterlude,
        System_Collections_Generic_List_QuestScriptReleaseEntity__o **questScriptReleaseEnt,
        int32_t *checkCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool v13; // w20
  __int64 v14; // x23
  Il2CppObject *lookup; // x0
  Il2CppObject *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
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
  System_String_o *v29; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *v31; // x24
  __int64 v32; // x9
  int *p_offset; // x10
  __int64 v34; // x0
  Il2CppClass *v35; // x8
  Il2CppObject *v36; // x24
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v38; // x10
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int monitor_high; // w8
  Il2CppClass *v43; // x8
  _QWORD *v44; // x9
  __int64 monitor_low; // x10
  __int64 v46; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v50; // [xsp+18h] [xbp-68h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-64h] BYREF

  v50 = scriptPhase;
  v51 = scriptQuestId;
  if ( (byte_4C5751C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C5751C = 1;
  }
  *checkCnt = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)questScriptReleaseEnt, (int32_t)v10, v11, v12);
  v13 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v14 = sub_1C3E60C(string___TypeInfo, 5);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v51, 0);
    if ( !v14 )
      goto LABEL_43;
    if ( !*(_DWORD *)(v14 + 24) )
      goto LABEL_42;
    *(_QWORD *)(v14 + 32) = lookup;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 32), (int32_t)lookup, v17, v18);
    if ( *(_DWORD *)(v14 + 24) <= 1u )
      goto LABEL_42;
    v21 = StringLiteral_1456/*":"*/;
    *(_QWORD *)(v14 + 40) = StringLiteral_1456/*":"*/;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 40), v21, v19, v20);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v50, 0);
    if ( *(_DWORD *)(v14 + 24) <= 2u
      || (*(_QWORD *)(v14 + 48) = lookup,
          sub_1C3E508((CGThumbnailListItem_o *)(v14 + 48), (int32_t)lookup, v22, v23),
          *(_DWORD *)(v14 + 24) <= 3u)
      || (v26 = StringLiteral_1456/*":"*/,
          *(_QWORD *)(v14 + 56) = StringLiteral_1456/*":"*/,
          sub_1C3E508((CGThumbnailListItem_o *)(v14 + 56), v26, v24, v25),
          lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&i, 0),
          *(_DWORD *)(v14 + 24) <= 4u) )
    {
LABEL_42:
      sub_1C3E7C8(lookup, v16);
    }
    *(_QWORD *)(v14 + 64) = lookup;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 64), (int32_t)lookup, v27, v28);
    v29 = System_String__Concat_63676984((System_String_array *)v14, 0);
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_43:
      sub_1C3E7C0(lookup, v16);
    klass = lookup->klass;
    v31 = lookup;
    v32 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_15;
      }
      v34 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v34 = sub_1C8ED7C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v34)(v31, v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_43;
    v35 = lookup->klass;
    v36 = lookup;
    v37 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      v38 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v35->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v37;
        v38 += 2;
        if ( !v37 )
          goto LABEL_23;
      }
      v39 = (__int64)&v35->vtable[*(_DWORD *)v38 + 2];
    }
    else
    {
LABEL_23:
      v39 = sub_1C8ED7C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    lookup = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v39)(
                               v36,
                               v29,
                               *(_QWORD *)(v39 + 8));
    v16 = lookup;
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
      v13 = 0;
      if ( (monitor_high & 0x10) == 0 && LODWORD(lookup[2].klass) == 1 )
      {
        lookup = (Il2CppObject *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_43;
        v43 = lookup[1].klass;
        v44 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++HIDWORD(lookup[1].monitor);
        if ( !v43 )
          goto LABEL_43;
        monitor_low = SLODWORD(lookup[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(v43->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)lookup,
            v16,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = (__int64)v43 + 8 * monitor_low;
          LODWORD(lookup[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v46 + 32) = v16;
          sub_1C3E508((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v16, v40, v41);
        }
        v13 = 1;
      }
    }
  }
  return v13;
}


bool QuestScriptReleaseMaster__IsOpenMaterial(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        bool isMainInterlude,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, scriptQuestId, 0, 3, isMainInterlude, v5);
}


bool QuestScriptReleaseMaster__IsOpenPhase(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        bool isMainInterlude,
        const MethodInfo *method)
{
  System_Array_o *v13; // x0
  System_RuntimeFieldHandle_o v14; // x1
  System_Int32_array *v15; // x25
  const MethodInfo *v16; // x5
  bool v17; // w21
  __int64 v18; // x22
  MethodInfo *lookup; // x0
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  _BOOL4 v23; // w29
  bool v24; // w24
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
  System_String_o *v35; // x22
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v37; // x23
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  Il2CppMethodPointer v41; // x8
  MethodInfo *v42; // x23
  __int64 v43; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v44; // x10
  __int64 v45; // x0
  QuestScriptReleaseEntity_o *v46; // x22
  UserQuestMaster_o *v47; // x23
  int v49; // [xsp+0h] [xbp-70h]
  int v50; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v51; // [xsp+8h] [xbp-68h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF

  v51 = scriptPhase;
  v52 = scriptQuestId;
  if ( (byte_4C5751D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_int___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C5751D = 1;
  }
  v13 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 7);
  v14.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v15 = (System_Int32_array *)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v13, v14, 0);
  if ( System_Array__IndexOf_int_(v15, scriptQuestId, (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___) < 0 )
  {
    v50 = 1;
    v18 = sub_1C3E60C(string___TypeInfo, 5);
    lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v52, 0);
    if ( !v18 )
      goto LABEL_54;
    v49 = 1 << kind;
    v20 = lookup;
    v17 = 0;
    v23 = kind == 3 && isMainInterlude;
    v24 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_53;
      *(_QWORD *)(v18 + 32) = v20;
      sub_1C3E508((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v20, v21, v22);
      if ( *(_DWORD *)(v18 + 24) <= 1u )
        goto LABEL_53;
      v27 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v18 + 40) = StringLiteral_1456/*":"*/;
      sub_1C3E508((CGThumbnailListItem_o *)(v18 + 40), v27, v25, v26);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v51, 0);
      if ( *(_DWORD *)(v18 + 24) <= 2u
        || (*(_QWORD *)(v18 + 48) = lookup,
            sub_1C3E508((CGThumbnailListItem_o *)(v18 + 48), (int32_t)lookup, v28, v29),
            *(_DWORD *)(v18 + 24) <= 3u)
        || (v32 = StringLiteral_1456/*":"*/,
            *(_QWORD *)(v18 + 56) = StringLiteral_1456/*":"*/,
            sub_1C3E508((CGThumbnailListItem_o *)(v18 + 56), v32, v30, v31),
            lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v50, 0),
            *(_DWORD *)(v18 + 24) <= 4u) )
      {
LABEL_53:
        sub_1C3E7C8(lookup, v20);
      }
      *(_QWORD *)(v18 + 64) = lookup;
      sub_1C3E508((CGThumbnailListItem_o *)(v18 + 64), (int32_t)lookup, v33, v34);
      v35 = System_String__Concat_63676984((System_String_array *)v18, 0);
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      methodPointer = lookup->methodPointer;
      v37 = lookup;
      v38 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v39 = (int *)(*((_QWORD *)methodPointer + 22) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_17;
        }
        v40 = (__int64)methodPointer + 16 * *v39 + 312;
      }
      else
      {
LABEL_17:
        v40 = sub_1C8ED7C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v40)(v37, v35, *(_QWORD *)(v40 + 8)) & 1) == 0 )
        break;
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      v41 = lookup->methodPointer;
      v42 = lookup;
      v43 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v44 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)(*((_QWORD *)v41 + 22) + 8LL);
        while ( *(v44 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v43;
          v44 += 2;
          if ( !v43 )
            goto LABEL_25;
        }
        v45 = (__int64)v41 + 16 * *(_DWORD *)v44 + 344;
      }
      else
      {
LABEL_25:
        v45 = sub_1C8ED7C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                2);
      }
      lookup = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v45)(
                               v42,
                               v35,
                               *(_QWORD *)(v45 + 8));
      v46 = (QuestScriptReleaseEntity_o *)lookup;
      if ( !v23 )
        goto LABEL_32;
      if ( !lookup )
        goto LABEL_54;
      if ( (BYTE4(lookup->name) & 0x20) != 0 )
      {
LABEL_32:
        if ( v24 )
          goto LABEL_35;
        if ( !lookup )
          goto LABEL_54;
        if ( (BYTE4(lookup->name) & 0x20) == 0 )
        {
LABEL_35:
          lookup = (MethodInfo *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !lookup )
            goto LABEL_54;
          lookup = (MethodInfo *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)lookup,
                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !v46 )
            goto LABEL_54;
          if ( (v46->fields.flag & v49) != 0 )
          {
            v47 = (UserQuestMaster_o *)lookup;
            if ( !QuestScriptReleaseEntity__IsOpen(v46, v20) )
            {
              if ( v46->fields.condType != 1 )
                goto LABEL_52;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C50AE2 )
              {
                sub_1C3E564(&NetworkManager_TypeInfo);
                byte_4C50AE2 = 1;
              }
              lookup = (MethodInfo *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                lookup = (MethodInfo *)NetworkManager_TypeInfo;
              }
              if ( v47 )
              {
                if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                       v47,
                       *((_QWORD *)lookup[2].virtualMethodPointer + 8),
                       v46->fields.targetIds,
                       0) )
                {
                  v17 = 1;
                  *isOpen = 1;
                  return v17;
                }
LABEL_52:
                v17 = 1;
                *isOpen = 0;
                return v17;
              }
LABEL_54:
              sub_1C3E7C0(lookup, v20);
            }
            v17 = 1;
          }
        }
      }
      ++v50;
      v18 = sub_1C3E60C(string___TypeInfo, 5);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v52, 0);
      v20 = lookup;
      if ( !v18 )
        goto LABEL_54;
    }
    *isOpen = 1;
  }
  else
  {
    return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v16);
  }
  return v17;
}


bool QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        const MethodInfo *method)
{
  char v6; // w22
  __int64 v9; // x21
  QuestScriptReleaseEntity_o *lookup; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool v14; // w24
  int v15; // w28
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v28; // x22
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  QuestScriptReleaseEntity_c *v32; // x8
  QuestScriptReleaseEntity_o *v33; // x22
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v35; // x10
  __int64 v36; // x0
  bool v37; // w8
  bool result; // w0
  int v39; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v40; // [xsp+18h] [xbp-58h] BYREF
  int32_t v41; // [xsp+1Ch] [xbp-54h] BYREF

  v40 = scriptPhase;
  v41 = scriptQuestId;
  v6 = kind;
  if ( (byte_4C5751E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C5751E = 1;
  }
  v39 = 1;
  v9 = sub_1C3E60C(string___TypeInfo, 5);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v41, 0);
  if ( !v9 )
LABEL_29:
    sub_1C3E7C0(lookup, v11);
  v11 = (const MethodInfo *)lookup;
  v14 = 0;
  v15 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v9 + 24) )
      goto LABEL_33;
    *(_QWORD *)(v9 + 32) = v11;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v11, v12, v13);
    if ( *(_DWORD *)(v9 + 24) <= 1u )
      goto LABEL_33;
    v18 = StringLiteral_1456/*":"*/;
    *(_QWORD *)(v9 + 40) = StringLiteral_1456/*":"*/;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), v18, v16, v17);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v40, 0);
    if ( *(_DWORD *)(v9 + 24) <= 2u
      || (*(_QWORD *)(v9 + 48) = lookup,
          sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), (int32_t)lookup, v19, v20),
          *(_DWORD *)(v9 + 24) <= 3u)
      || (v23 = StringLiteral_1456/*":"*/,
          *(_QWORD *)(v9 + 56) = StringLiteral_1456/*":"*/,
          sub_1C3E508((CGThumbnailListItem_o *)(v9 + 56), v23, v21, v22),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v39, 0),
          *(_DWORD *)(v9 + 24) <= 4u) )
    {
LABEL_33:
      sub_1C3E7C8(lookup, v11);
    }
    *(_QWORD *)(v9 + 64) = lookup;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 64), (int32_t)lookup, v24, v25);
    v26 = System_String__Concat_63676984((System_String_array *)v9, 0);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    klass = lookup->klass;
    v28 = lookup;
    v29 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_15;
      }
      v31 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_15:
      v31 = sub_1C8ED7C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v31)(
            v28,
            v26,
            *(_QWORD *)(v31 + 8))
        & 1) == 0 )
    {
      v37 = 0;
      goto LABEL_32;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_33B5804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    v32 = lookup->klass;
    v33 = lookup;
    v34 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      v35 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v32->_1.interfaceOffsets->offset;
      while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v34;
        v35 += 2;
        if ( !v34 )
          goto LABEL_23;
      }
      v36 = (__int64)(&v32->vtable._2_GetHashCode + *(_DWORD *)v35);
    }
    else
    {
LABEL_23:
      v36 = sub_1C8ED7C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v36)(
                                             v33,
                                             v26,
                                             *(_QWORD *)(v36 + 8));
    if ( !lookup )
      goto LABEL_29;
    if ( (lookup->fields.flag & v15) != 0 )
    {
      v14 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v11) )
        break;
    }
    ++v39;
    v9 = sub_1C3E60C(string___TypeInfo, 5);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v41, 0);
    v11 = (const MethodInfo *)lookup;
    if ( !v9 )
      goto LABEL_29;
  }
  v37 = 1;
LABEL_32:
  result = v14;
  *isOpen = v37;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool QuestScriptReleaseMaster__TryGetEntity(
        QuestScriptReleaseMaster_o *this,
        QuestScriptReleaseEntity_o **entity,
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C5751A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
    byte_4C5751A = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}