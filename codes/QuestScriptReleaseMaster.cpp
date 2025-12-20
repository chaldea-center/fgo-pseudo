void QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D034 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
    byte_4D2D034 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_4D2D032 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
    byte_4D2D032 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_345FF78 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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

  if ( (byte_4D2D038 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D038 = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v10);
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

  if ( (byte_4D2D039 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D039 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v6);
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
      v11 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v15 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v17 = (QuestScriptReleaseEntity_o *)v16;
    if ( v16
      && System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 40),
           questId,
           (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___)
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
    v22 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_String_o *v40; // x20
  DataManager_c *klass; // x8
  DataManager_o *v42; // x21
  __int64 v43; // x9
  int *p_offset; // x10
  __int64 v45; // x0
  DataManager_c *v46; // x8
  DataManager_o *v47; // x21
  __int64 v48; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v49; // x10
  __int64 v50; // x0
  int v52; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  v53 = scriptPhase;
  v54 = scriptQuestId;
  if ( (byte_4D2D03A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C94098(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2D03A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v52 = 1,
        v7 = sub_1C94140(string___TypeInfo, 5),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v54, 0),
        !v7) )
  {
LABEL_29:
    sub_1C942F0(Instance, v6);
  }
  v6 = Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_32;
    *(_QWORD *)(v7 + 32) = v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v6, v8, v9, v10, v11, v12, v13);
    if ( *(_DWORD *)(v7 + 24) <= 1u )
      goto LABEL_32;
    v20 = StringLiteral_1450/*":"*/;
    *(_QWORD *)(v7 + 40) = StringLiteral_1450/*":"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), v20, v14, v15, v16, v17, v18, v19);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v53, 0);
    if ( *(_DWORD *)(v7 + 24) <= 2u
      || (*(_QWORD *)(v7 + 48) = Instance,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)Instance, v21, v22, v23, v24, v25, v26),
          *(_DWORD *)(v7 + 24) <= 3u)
      || (v33 = StringLiteral_1450/*":"*/,
          *(_QWORD *)(v7 + 56) = StringLiteral_1450/*":"*/,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 56), v33, v27, v28, v29, v30, v31, v32),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v52, 0),
          *(_DWORD *)(v7 + 24) <= 4u) )
    {
LABEL_32:
      sub_1C942F8(Instance);
    }
    *(_QWORD *)(v7 + 64) = Instance;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 64), (int32_t)Instance, v34, v35, v36, v37, v38, v39);
    v40 = System_String__Concat_64458276((System_String_array *)v7, 0);
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    klass = Instance->klass;
    v42 = Instance;
    v43 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_16;
      }
      v45 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_16:
      v45 = sub_1C6A420(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v45)(v42, v40, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !Instance )
      goto LABEL_29;
    v46 = Instance->klass;
    v47 = Instance;
    v48 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      v49 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v46->_1.interfaceOffsets->offset;
      while ( *(v49 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v48;
        v49 += 2;
        if ( !v48 )
          goto LABEL_24;
      }
      v50 = (__int64)(&v46->vtable._2_GetHashCode + *(_DWORD *)v49);
    }
    else
    {
LABEL_24:
      v50 = sub_1C6A420(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v50)(
                                  v47,
                                  v40,
                                  *(_QWORD *)(v50 + 8));
    if ( !Instance )
      goto LABEL_29;
    if ( (BYTE4(Instance->fields.m_CancellationTokenSource) & 8) != 0 )
      return *(_DWORD *)&Instance->fields._DispLog == 92;
    ++v52;
    v7 = sub_1C94140(string___TypeInfo, 5);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v54, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  bool v17; // w20
  __int64 v18; // x23
  Il2CppObject *lookup; // x0
  Il2CppObject *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_String_o *v53; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *v55; // x24
  __int64 v56; // x9
  int *p_offset; // x10
  __int64 v58; // x0
  Il2CppClass *v59; // x8
  Il2CppObject *v60; // x24
  __int64 v61; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v62; // x10
  __int64 v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int monitor_high; // w8
  Il2CppClass *v71; // x8
  _QWORD *v72; // x9
  __int64 monitor_low; // x10
  __int64 v74; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v78; // [xsp+18h] [xbp-68h] BYREF
  int32_t v79; // [xsp+1Ch] [xbp-64h] BYREF

  v78 = scriptPhase;
  v79 = scriptQuestId;
  if ( (byte_4D2D035 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C94098(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2D035 = 1;
  }
  *checkCnt = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)questScriptReleaseEnt, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v18 = sub_1C94140(string___TypeInfo, 5);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v79, 0);
    if ( !v18 )
      goto LABEL_43;
    if ( !*(_DWORD *)(v18 + 24) )
      goto LABEL_42;
    *(_QWORD *)(v18 + 32) = lookup;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)lookup, v21, v22, v23, v24, v25, v26);
    if ( *(_DWORD *)(v18 + 24) <= 1u )
      goto LABEL_42;
    v33 = StringLiteral_1450/*":"*/;
    *(_QWORD *)(v18 + 40) = StringLiteral_1450/*":"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 40), v33, v27, v28, v29, v30, v31, v32);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v78, 0);
    if ( *(_DWORD *)(v18 + 24) <= 2u
      || (*(_QWORD *)(v18 + 48) = lookup,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 48), (int32_t)lookup, v34, v35, v36, v37, v38, v39),
          *(_DWORD *)(v18 + 24) <= 3u)
      || (v46 = StringLiteral_1450/*":"*/,
          *(_QWORD *)(v18 + 56) = StringLiteral_1450/*":"*/,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 56), v46, v40, v41, v42, v43, v44, v45),
          lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&i, 0),
          *(_DWORD *)(v18 + 24) <= 4u) )
    {
LABEL_42:
      sub_1C942F8(lookup);
    }
    *(_QWORD *)(v18 + 64) = lookup;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 64), (int32_t)lookup, v47, v48, v49, v50, v51, v52);
    v53 = System_String__Concat_64458276((System_String_array *)v18, 0);
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_43:
      sub_1C942F0(lookup, v20);
    klass = lookup->klass;
    v55 = lookup;
    v56 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v56;
        p_offset += 4;
        if ( !v56 )
          goto LABEL_15;
      }
      v58 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v58 = sub_1C6A420(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v58)(v55, v53, *(_QWORD *)(v58 + 8)) & 1) == 0 )
      break;
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_43;
    v59 = lookup->klass;
    v60 = lookup;
    v61 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      v62 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v59->_1.interfaceOffsets->offset;
      while ( *(v62 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v61;
        v62 += 2;
        if ( !v61 )
          goto LABEL_23;
      }
      v63 = (__int64)&v59->vtable[*(_DWORD *)v62 + 2];
    }
    else
    {
LABEL_23:
      v63 = sub_1C6A420(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    lookup = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v63)(
                               v60,
                               v53,
                               *(_QWORD *)(v63 + 8));
    v20 = lookup;
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
      v17 = 0;
      if ( (monitor_high & 0x10) == 0 && LODWORD(lookup[2].klass) == 1 )
      {
        lookup = (Il2CppObject *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_43;
        v71 = lookup[1].klass;
        v72 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++HIDWORD(lookup[1].monitor);
        if ( !v71 )
          goto LABEL_43;
        monitor_low = SLODWORD(lookup[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(v71->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)lookup,
            v20,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = (__int64)v71 + 8 * monitor_low;
          LODWORD(lookup[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v74 + 32) = v20;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v74 + 32), (int32_t)v20, v64, v65, v66, v67, v68, v69);
        }
        v17 = 1;
      }
    }
  }
  return v17;
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  _BOOL4 v27; // w29
  bool v28; // w24
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_String_o *v55; // x22
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v57; // x23
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  Il2CppMethodPointer v61; // x8
  MethodInfo *v62; // x23
  __int64 v63; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v64; // x10
  __int64 v65; // x0
  QuestScriptReleaseEntity_o *v66; // x22
  UserQuestMaster_o *v67; // x23
  int v69; // [xsp+0h] [xbp-70h]
  int v70; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v71; // [xsp+8h] [xbp-68h] BYREF
  int32_t v72; // [xsp+Ch] [xbp-64h] BYREF

  v71 = scriptPhase;
  v72 = scriptQuestId;
  if ( (byte_4D2D036 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C94098(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2D036 = 1;
  }
  v13 = (System_Array_o *)sub_1C94140(int___TypeInfo, 7);
  v14.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v15 = (System_Int32_array *)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v13, v14, 0);
  if ( System_Array__IndexOf_int_(v15, scriptQuestId, (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___) < 0 )
  {
    v70 = 1;
    v18 = sub_1C94140(string___TypeInfo, 5);
    lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v72, 0);
    if ( !v18 )
      goto LABEL_54;
    v69 = 1 << kind;
    v20 = lookup;
    v17 = 0;
    v27 = kind == 3 && isMainInterlude;
    v28 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_53;
      *(_QWORD *)(v18 + 32) = v20;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v20, v21, v22, v23, v24, v25, v26);
      if ( *(_DWORD *)(v18 + 24) <= 1u )
        goto LABEL_53;
      v35 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v18 + 40) = StringLiteral_1450/*":"*/;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 40), v35, v29, v30, v31, v32, v33, v34);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v71, 0);
      if ( *(_DWORD *)(v18 + 24) <= 2u
        || (*(_QWORD *)(v18 + 48) = lookup,
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 48), (int32_t)lookup, v36, v37, v38, v39, v40, v41),
            *(_DWORD *)(v18 + 24) <= 3u)
        || (v48 = StringLiteral_1450/*":"*/,
            *(_QWORD *)(v18 + 56) = StringLiteral_1450/*":"*/,
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 56), v48, v42, v43, v44, v45, v46, v47),
            lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v70, 0),
            *(_DWORD *)(v18 + 24) <= 4u) )
      {
LABEL_53:
        sub_1C942F8(lookup);
      }
      *(_QWORD *)(v18 + 64) = lookup;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 64), (int32_t)lookup, v49, v50, v51, v52, v53, v54);
      v55 = System_String__Concat_64458276((System_String_array *)v18, 0);
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      methodPointer = lookup->methodPointer;
      v57 = lookup;
      v58 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v59 = (int *)(*((_QWORD *)methodPointer + 22) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)v59 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_17;
        }
        v60 = (__int64)methodPointer + 16 * *v59 + 312;
      }
      else
      {
LABEL_17:
        v60 = sub_1C6A420(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v60)(v57, v55, *(_QWORD *)(v60 + 8)) & 1) == 0 )
        break;
      lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_54;
      v61 = lookup->methodPointer;
      v62 = lookup;
      v63 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v64 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)(*((_QWORD *)v61 + 22) + 8LL);
        while ( *(v64 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
        {
          --v63;
          v64 += 2;
          if ( !v63 )
            goto LABEL_25;
        }
        v65 = (__int64)v61 + 16 * *(_DWORD *)v64 + 344;
      }
      else
      {
LABEL_25:
        v65 = sub_1C6A420(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
                2);
      }
      lookup = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v65)(
                               v62,
                               v55,
                               *(_QWORD *)(v65 + 8));
      v66 = (QuestScriptReleaseEntity_o *)lookup;
      if ( !v27 )
        goto LABEL_32;
      if ( !lookup )
        goto LABEL_54;
      if ( (BYTE4(lookup->name) & 0x20) != 0 )
      {
LABEL_32:
        if ( v28 )
          goto LABEL_35;
        if ( !lookup )
          goto LABEL_54;
        if ( (BYTE4(lookup->name) & 0x20) == 0 )
        {
LABEL_35:
          lookup = (MethodInfo *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !lookup )
            goto LABEL_54;
          lookup = (MethodInfo *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)lookup,
                                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !v66 )
            goto LABEL_54;
          if ( (v66->fields.flag & v69) != 0 )
          {
            v67 = (UserQuestMaster_o *)lookup;
            if ( !QuestScriptReleaseEntity__IsOpen(v66, v20) )
            {
              if ( v66->fields.condType != 1 )
                goto LABEL_52;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4D2633A )
              {
                sub_1C94098(&NetworkManager_TypeInfo);
                byte_4D2633A = 1;
              }
              lookup = (MethodInfo *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                lookup = (MethodInfo *)NetworkManager_TypeInfo;
              }
              if ( v67 )
              {
                if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                       v67,
                       *((_QWORD *)lookup[2].virtualMethodPointer + 8),
                       v66->fields.targetIds,
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
              sub_1C942F0(lookup, v20);
            }
            v17 = 1;
          }
        }
      }
      ++v70;
      v18 = sub_1C94140(string___TypeInfo, 5);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v72, 0);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  bool v18; // w24
  int v19; // w28
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_String_o *v46; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v48; // x22
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  QuestScriptReleaseEntity_c *v52; // x8
  QuestScriptReleaseEntity_o *v53; // x22
  __int64 v54; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v55; // x10
  __int64 v56; // x0
  bool v57; // w8
  bool result; // w0
  int v59; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v60; // [xsp+18h] [xbp-58h] BYREF
  int32_t v61; // [xsp+1Ch] [xbp-54h] BYREF

  v60 = scriptPhase;
  v61 = scriptQuestId;
  v6 = kind;
  if ( (byte_4D2D037 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_1C94098(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2D037 = 1;
  }
  v59 = 1;
  v9 = sub_1C94140(string___TypeInfo, 5);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v61, 0);
  if ( !v9 )
LABEL_29:
    sub_1C942F0(lookup, v11);
  v11 = (const MethodInfo *)lookup;
  v18 = 0;
  v19 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v9 + 24) )
      goto LABEL_33;
    *(_QWORD *)(v9 + 32) = v11;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
    if ( *(_DWORD *)(v9 + 24) <= 1u )
      goto LABEL_33;
    v26 = StringLiteral_1450/*":"*/;
    *(_QWORD *)(v9 + 40) = StringLiteral_1450/*":"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 40), v26, v20, v21, v22, v23, v24, v25);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v60, 0);
    if ( *(_DWORD *)(v9 + 24) <= 2u
      || (*(_QWORD *)(v9 + 48) = lookup,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)lookup, v27, v28, v29, v30, v31, v32),
          *(_DWORD *)(v9 + 24) <= 3u)
      || (v39 = StringLiteral_1450/*":"*/,
          *(_QWORD *)(v9 + 56) = StringLiteral_1450/*":"*/,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 56), v39, v33, v34, v35, v36, v37, v38),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v59, 0),
          *(_DWORD *)(v9 + 24) <= 4u) )
    {
LABEL_33:
      sub_1C942F8(lookup);
    }
    *(_QWORD *)(v9 + 64) = lookup;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 64), (int32_t)lookup, v40, v41, v42, v43, v44, v45);
    v46 = System_String__Concat_64458276((System_String_array *)v9, 0);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    klass = lookup->klass;
    v48 = lookup;
    v49 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_15;
      }
      v51 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_15:
      v51 = sub_1C6A420(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v51)(
            v48,
            v46,
            *(_QWORD *)(v51 + 8))
        & 1) == 0 )
    {
      v57 = 0;
      goto LABEL_32;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_345DD6C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_29;
    v52 = lookup->klass;
    v53 = lookup;
    v54 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      v55 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v52->_1.interfaceOffsets->offset;
      while ( *(v55 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v54;
        v55 += 2;
        if ( !v54 )
          goto LABEL_23;
      }
      v56 = (__int64)(&v52->vtable._2_GetHashCode + *(_DWORD *)v55);
    }
    else
    {
LABEL_23:
      v56 = sub_1C6A420(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v56)(
                                             v53,
                                             v46,
                                             *(_QWORD *)(v56 + 8));
    if ( !lookup )
      goto LABEL_29;
    if ( (lookup->fields.flag & v19) != 0 )
    {
      v18 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v11) )
        break;
    }
    ++v59;
    v9 = sub_1C94140(string___TypeInfo, 5);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v61, 0);
    v11 = (const MethodInfo *)lookup;
    if ( !v9 )
      goto LABEL_29;
  }
  v57 = 1;
LABEL_32:
  result = v18;
  *isOpen = v57;
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

  if ( (byte_4D2D033 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
    byte_4D2D033 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}