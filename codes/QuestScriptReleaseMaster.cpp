void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02789 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method);
    byte_4B02789 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_4B02787 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId);
    byte_4B02787 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_32B3B28 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B0278D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B0278D = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v11);
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

  if ( (byte_4B0278E & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1BC3008(&System_IDisposable_TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4B0278E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v10);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v21 = (QuestScriptReleaseEntity_o *)v20;
    if ( v20
      && System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v20 + 40),
           questId,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___)
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
    v26 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  System_String_o *v21; // x20
  DataManager_c *klass; // x8
  DataManager_o *v23; // x21
  __int64 v24; // x9
  int *p_offset; // x10
  __int64 v26; // x0
  DataManager_c *v27; // x8
  DataManager_o *v28; // x21
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v30; // x10
  __int64 v31; // x0
  int v33; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v34; // [xsp+8h] [xbp-48h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  v34 = scriptPhase;
  v35 = scriptQuestId;
  if ( (byte_4B0278F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&scriptQuestId);
    sub_1BC3008(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__, v5);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BC3008(&string___TypeInfo, v8);
    sub_1BC3008(&StringLiteral_1447/*":"*/, v9);
    byte_4B0278F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v33 = 1,
        v12 = sub_1BC30B0(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v35, 0LL),
        !v12) )
  {
LABEL_29:
    sub_1BC3264(Instance, v11);
  }
  v11 = Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_32;
    *(_QWORD *)(v12 + 32) = v11;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v11, v13, v14);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      goto LABEL_32;
    v16 = StringLiteral_1447/*":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_1447/*":"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 40), v16, v13, v15);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v34, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u
      || (*(_QWORD *)(v12 + 48) = Instance,
          sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 48), (int32_t)Instance, v13, v17),
          *(_DWORD *)(v12 + 24) <= 3u)
      || (v19 = StringLiteral_1447/*":"*/,
          *(_QWORD *)(v12 + 56) = StringLiteral_1447/*":"*/,
          sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 56), v19, v13, v18),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v33, 0LL),
          *(_DWORD *)(v12 + 24) <= 4u) )
    {
LABEL_32:
      sub_1BC326C(Instance, v11, v13);
    }
    *(_QWORD *)(v12 + 64) = Instance;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 64), (int32_t)Instance, v13, v20);
    v21 = System_String__Concat_62389164((System_String_array *)v12, 0LL);
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    klass = Instance->klass;
    v23 = Instance;
    v24 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_16:
      v26 = sub_1C13570(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v26)(v23, v21, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    v27 = Instance->klass;
    v28 = Instance;
    v29 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v30 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v27->_1.interfaceOffsets->offset;
      while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v29;
        v30 += 2;
        if ( !v29 )
          goto LABEL_24;
      }
      v31 = (__int64)(&v27->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v30);
    }
    else
    {
LABEL_24:
      v31 = sub_1C13570(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v31)(
                                  v28,
                                  v21,
                                  *(_QWORD *)(v31 + 8));
    if ( !Instance )
      goto LABEL_29;
    if ( (BYTE4(Instance->fields.m_CancellationTokenSource) & 8) != 0 )
      return *(_DWORD *)&Instance->fields._DispLog == 92;
    ++v33;
    v12 = sub_1BC30B0(string___TypeInfo, 5LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v35, 0LL);
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
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3
  System_String_o *v31; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *v33; // x24
  __int64 v34; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v37; // x8
  Il2CppObject *v38; // x24
  __int64 v39; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v40; // x10
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int monitor_high; // w8
  Il2CppClass *v45; // x8
  _QWORD *v46; // x9
  __int64 monitor_low; // x10
  __int64 v48; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v52; // [xsp+18h] [xbp-68h] BYREF
  int32_t v53; // [xsp+1Ch] [xbp-64h] BYREF

  v52 = scriptPhase;
  v53 = scriptQuestId;
  if ( (byte_4B0278A & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__,
      *(_QWORD *)&scriptQuestId);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v13);
    sub_1BC3008(&string___TypeInfo, v14);
    sub_1BC3008(&StringLiteral_1447/*":"*/, v15);
    byte_4B0278A = 1;
  }
  *checkCnt = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)questScriptReleaseEnt, (int32_t)v16, v17, v18);
  v19 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v20 = sub_1BC30B0(string___TypeInfo, 5LL);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v53, 0LL);
    if ( !v20 )
      goto LABEL_43;
    if ( !*(_DWORD *)(v20 + 24) )
      goto LABEL_42;
    *(_QWORD *)(v20 + 32) = lookup;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)lookup, v23, v24);
    if ( *(_DWORD *)(v20 + 24) <= 1u )
      goto LABEL_42;
    v26 = StringLiteral_1447/*":"*/;
    *(_QWORD *)(v20 + 40) = StringLiteral_1447/*":"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 40), v26, v23, v25);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v52, 0LL);
    if ( *(_DWORD *)(v20 + 24) <= 2u
      || (*(_QWORD *)(v20 + 48) = lookup,
          sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 48), (int32_t)lookup, v23, v27),
          *(_DWORD *)(v20 + 24) <= 3u)
      || (v29 = StringLiteral_1447/*":"*/,
          *(_QWORD *)(v20 + 56) = StringLiteral_1447/*":"*/,
          sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 56), v29, v23, v28),
          lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&i, 0LL),
          *(_DWORD *)(v20 + 24) <= 4u) )
    {
LABEL_42:
      sub_1BC326C(lookup, v22, v23);
    }
    *(_QWORD *)(v20 + 64) = lookup;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 64), (int32_t)lookup, v23, v30);
    v31 = System_String__Concat_62389164((System_String_array *)v20, 0LL);
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_43:
      sub_1BC3264(lookup, v22);
    klass = lookup->klass;
    v33 = lookup;
    v34 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C13570(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))p_method)(
            v33,
            v31,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_43;
    v37 = lookup->klass;
    v38 = lookup;
    v39 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v40 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v37->_1.interfaceOffsets->offset;
      while ( *(v40 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v39;
        v40 += 2;
        if ( !v39 )
          goto LABEL_23;
      }
      v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 2].method;
    }
    else
    {
LABEL_23:
      v41 = sub_1C13570(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2LL);
    }
    lookup = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v41)(
                               v38,
                               v31,
                               *(_QWORD *)(v41 + 8));
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
        v45 = lookup[1].klass;
        v46 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++HIDWORD(lookup[1].monitor);
        if ( !v45 )
          goto LABEL_43;
        monitor_low = SLODWORD(lookup[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(v45->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)lookup,
            v22,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = (__int64)v45 + 8 * monitor_low;
          LODWORD(lookup[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v48 + 32) = v22;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v48 + 32), (int32_t)v22, v42, v43);
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
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  _BOOL4 v31; // w29
  bool v32; // w24
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  const MethodInfo *v38; // x3
  System_String_o *v39; // x22
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v41; // x23
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  Il2CppMethodPointer v45; // x8
  MethodInfo *v46; // x23
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v48; // x10
  __int64 v49; // x0
  QuestScriptReleaseEntity_o *v50; // x22
  UserQuestMaster_o *v51; // x23
  int v53; // [xsp+0h] [xbp-70h]
  int v54; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v55; // [xsp+8h] [xbp-68h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v57; // 0:w1.4

  v55 = scriptPhase;
  v56 = scriptQuestId;
  if ( (byte_4B0278B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_int___, isOpen);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_1BC3008(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__, v14);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v15);
    sub_1BC3008(&int___TypeInfo, v16);
    sub_1BC3008(&NetworkManager_TypeInfo, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BC3008(&string___TypeInfo, v19);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v20);
    sub_1BC3008(&StringLiteral_1447/*":"*/, v21);
    byte_4B0278B = 1;
  }
  v22 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 7LL);
  v57.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v23 = (System_Int32_array *)v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v22, v57, 0LL);
  if ( (System_Array__IndexOf_int_(v23, scriptQuestId, (const MethodInfo_31002A8 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v54 = 1;
    v26 = sub_1BC30B0(string___TypeInfo, 5LL);
    lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v56, 0LL);
    if ( !v26 )
      goto LABEL_54;
    v53 = 1 << kind;
    v28 = lookup;
    v25 = 0;
    v31 = kind == 3 && isMainInterlude;
    v32 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_53;
      *(_QWORD *)(v26 + 32) = v28;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v28, v29, v30);
      if ( *(_DWORD *)(v26 + 24) <= 1u )
        goto LABEL_53;
      v34 = StringLiteral_1447/*":"*/;
      *(_QWORD *)(v26 + 40) = StringLiteral_1447/*":"*/;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 40), v34, v29, v33);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v55, 0LL);
      if ( *(_DWORD *)(v26 + 24) <= 2u
        || (*(_QWORD *)(v26 + 48) = lookup,
            sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 48), (int32_t)lookup, v29, v35),
            *(_DWORD *)(v26 + 24) <= 3u)
        || (v37 = StringLiteral_1447/*":"*/,
            *(_QWORD *)(v26 + 56) = StringLiteral_1447/*":"*/,
            sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 56), v37, v29, v36),
            lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v54, 0LL),
            *(_DWORD *)(v26 + 24) <= 4u) )
      {
LABEL_53:
        sub_1BC326C(lookup, v28, v29);
      }
      *(_QWORD *)(v26 + 64) = lookup;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 64), (int32_t)lookup, v29, v38);
      v39 = System_String__Concat_62389164((System_String_array *)v26, 0LL);
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      methodPointer = lookup->methodPointer;
      v41 = lookup;
      v42 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v43 = (int *)(*((_QWORD *)methodPointer + 22) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)v43 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_17;
        }
        v44 = (__int64)methodPointer + 16 * *v43 + 312;
      }
      else
      {
LABEL_17:
        v44 = sub_1C13570(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v44)(v41, v39, *(_QWORD *)(v44 + 8)) & 1) == 0 )
        break;
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      v45 = lookup->methodPointer;
      v46 = lookup;
      v47 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v48 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)(*((_QWORD *)v45 + 22) + 8LL);
        while ( *(v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v47;
          v48 += 2;
          if ( !v47 )
            goto LABEL_25;
        }
        v49 = (__int64)v45 + 16 * *(_DWORD *)v48 + 344;
      }
      else
      {
LABEL_25:
        v49 = sub_1C13570(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                2LL);
      }
      lookup = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v49)(
                               v46,
                               v39,
                               *(_QWORD *)(v49 + 8));
      v50 = (QuestScriptReleaseEntity_o *)lookup;
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
          lookup = (MethodInfo *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !lookup )
            goto LABEL_54;
          lookup = (MethodInfo *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)lookup,
                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !v50 )
            goto LABEL_54;
          if ( (v50->fields.flag & v53) != 0 )
          {
            v51 = (UserQuestMaster_o *)lookup;
            if ( !QuestScriptReleaseEntity__IsOpen(v50, v28) )
            {
              if ( v50->fields.condType != 1 )
                goto LABEL_52;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4AFC1F1 )
              {
                sub_1BC3008(&NetworkManager_TypeInfo, v28);
                byte_4AFC1F1 = 1;
              }
              lookup = (MethodInfo *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                lookup = (MethodInfo *)NetworkManager_TypeInfo;
              }
              if ( v51 )
              {
                if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                       v51,
                       *((_QWORD *)lookup[2].virtualMethodPointer + 8),
                       v50->fields.targetIds,
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
              sub_1BC3264(lookup, v28);
            }
            v25 = 1;
          }
        }
      }
      ++v54;
      v26 = sub_1BC30B0(string___TypeInfo, 5LL);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v56, 0LL);
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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  bool v17; // w24
  int v18; // w28
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  System_String_o *v25; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v27; // x22
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  QuestScriptReleaseEntity_c *v31; // x8
  QuestScriptReleaseEntity_o *v32; // x22
  __int64 v33; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v34; // x10
  __int64 v35; // x0
  bool v36; // w8
  bool result; // w0
  int v38; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v39; // [xsp+18h] [xbp-58h] BYREF
  int32_t v40; // [xsp+1Ch] [xbp-54h] BYREF

  v39 = scriptPhase;
  v40 = scriptQuestId;
  v6 = kind;
  if ( (byte_4B0278C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__, isOpen);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo, v9);
    sub_1BC3008(&string___TypeInfo, v10);
    sub_1BC3008(&StringLiteral_1447/*":"*/, v11);
    byte_4B0278C = 1;
  }
  v38 = 1;
  v12 = sub_1BC30B0(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v40, 0LL);
  if ( !v12 )
LABEL_29:
    sub_1BC3264(lookup, v14);
  v14 = (const MethodInfo *)lookup;
  v17 = 0;
  v18 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_33;
    *(_QWORD *)(v12 + 32) = v14;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v14, v15, v16);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      goto LABEL_33;
    v20 = StringLiteral_1447/*":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_1447/*":"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 40), v20, v15, v19);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v39, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u
      || (*(_QWORD *)(v12 + 48) = lookup,
          sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 48), (int32_t)lookup, v15, v21),
          *(_DWORD *)(v12 + 24) <= 3u)
      || (v23 = StringLiteral_1447/*":"*/,
          *(_QWORD *)(v12 + 56) = StringLiteral_1447/*":"*/,
          sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 56), v23, v15, v22),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v38, 0LL),
          *(_DWORD *)(v12 + 24) <= 4u) )
    {
LABEL_33:
      sub_1BC326C(lookup, v14, v15);
    }
    *(_QWORD *)(v12 + 64) = lookup;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 64), (int32_t)lookup, v15, v24);
    v25 = System_String__Concat_62389164((System_String_array *)v12, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    klass = lookup->klass;
    v27 = lookup;
    v28 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_15;
      }
      v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v30 = sub_1C13570(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v30)(
            v27,
            v25,
            *(_QWORD *)(v30 + 8)) & 1) == 0 )
    {
      v36 = 0;
      goto LABEL_32;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_32B191C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    v31 = lookup->klass;
    v32 = lookup;
    v33 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v34 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_23;
      }
      v35 = (__int64)(&v31->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v34);
    }
    else
    {
LABEL_23:
      v35 = sub_1C13570(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v35)(
                                             v32,
                                             v25,
                                             *(_QWORD *)(v35 + 8));
    if ( !lookup )
      goto LABEL_29;
    if ( (lookup->fields.flag & v18) != 0 )
    {
      v17 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v14) )
        break;
    }
    ++v38;
    v12 = sub_1BC30B0(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v40, 0LL);
    v14 = (const MethodInfo *)lookup;
    if ( !v12 )
      goto LABEL_29;
  }
  v36 = 1;
LABEL_32:
  result = v17;
  *isOpen = v36;
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

  if ( (byte_4B02788 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B02788 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}