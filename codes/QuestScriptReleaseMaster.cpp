void QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971066 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
    byte_5971066 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    179,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_5971064 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
    byte_5971064 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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
  const MethodInfo *v11; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v13; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597106A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597106A = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v10);
  }
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, questId, 0);
  if ( kind == 3 )
    return ScriptQuestId;
  if ( QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, phaseCnt, kind, 0, v11) )
  {
    if ( !isOpen[0] )
      return 0;
    return ScriptQuestId;
  }
  if ( !QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, 0, kind, 0, v13) )
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  QuestScriptReleaseEntity_o *v20; // x20
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v27; // [xsp+18h] [xbp-38h]

  if ( (byte_597106B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597106B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestScriptReleaseEntity__GetEnumerator__);
  v27 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v7);
  for ( i = Enumerator; ; i = v27 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v27 )
      sub_2213CDC(v13, v14);
    v15 = v27->klass;
    v16 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v27, System_Collections_Generic_IEnumerator_QuestScriptReleaseEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v27,
            *(_QWORD *)(v18 + 8));
    v20 = (QuestScriptReleaseEntity_o *)v19;
    if ( v19
      && System_Linq_Enumerable__Contains_int_(
           *(System_Collections_Generic_IEnumerable_TSource__o **)(v19 + 40),
           questId,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___)
      && QuestScriptReleaseEntity__IsOpen(v20, v21) )
    {
      goto LABEL_26;
    }
  }
  v20 = 0;
LABEL_26:
  if ( v27 )
  {
    v22 = v27->klass;
    v23 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_31;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_31:
      v25 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v27, *(_QWORD *)(v25 + 8));
  }
  return v20;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
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

  v54 = scriptQuestId;
  v53 = scriptPhase;
  if ( (byte_597106C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_597106C = 1;
  }
  v52 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v52 = 1,
        v7 = sub_2213B20(string___TypeInfo, 5),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v54, 0),
        !v7) )
  {
LABEL_29:
    sub_2213CDC(Instance, v6);
  }
  v6 = Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_32;
    *(_QWORD *)(v7 + 32) = v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v6, v8, v9, v10, v11, v12, v13);
    if ( (*(_DWORD *)(v7 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_32;
    v20 = StringLiteral_1533/*":"*/;
    *(_QWORD *)(v7 + 40) = StringLiteral_1533/*":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), v20, v14, v15, v16, v17, v18, v19);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v53, 0);
    if ( *(_DWORD *)(v7 + 24) <= 2u
      || (*(_QWORD *)(v7 + 48) = Instance,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)Instance, v21, v22, v23, v24, v25, v26),
          (*(_DWORD *)(v7 + 24) & 0xFFFFFFFC) == 0)
      || (v33 = StringLiteral_1533/*":"*/,
          *(_QWORD *)(v7 + 56) = StringLiteral_1533/*":"*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 56), v33, v27, v28, v29, v30, v31, v32),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v52, 0),
          *(_DWORD *)(v7 + 24) <= 4u) )
    {
LABEL_32:
      sub_2213CE4(Instance);
    }
    *(_QWORD *)(v7 + 64) = Instance;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 64), (int32_t)Instance, v34, v35, v36, v37, v38, v39);
    v40 = System_String__Concat_75697120((System_String_array *)v7, 0);
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
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
      v45 = sub_224BC3C(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v45)(v42, v40, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase_object__object__object___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
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
      v50 = sub_224BC3C(
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
    v7 = sub_2213B20(string___TypeInfo, 5);
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
  System_Collections_Generic_List_QuestScriptReleaseEntity__c *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  bool v18; // w20
  __int64 v19; // x23
  Il2CppObject *lookup; // x0
  Il2CppObject *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *v56; // x24
  __int64 v57; // x9
  int *p_offset; // x10
  __int64 v59; // x0
  Il2CppClass *v60; // x8
  Il2CppObject *v61; // x24
  __int64 v62; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v63; // x10
  __int64 v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int monitor_high; // w8
  Il2CppClass *v72; // x8
  _QWORD *v73; // x9
  __int64 monitor_low; // x10
  __int64 v75; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v79; // [xsp+18h] [xbp-68h] BYREF
  int32_t v80; // [xsp+1Ch] [xbp-64h] BYREF

  v80 = scriptQuestId;
  v79 = scriptPhase;
  if ( (byte_5971067 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971067 = 1;
  }
  v10 = System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo;
  *checkCnt = 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)questScriptReleaseEnt, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v19 = sub_2213B20(string___TypeInfo, 5);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v80, 0);
    if ( !v19 )
      goto LABEL_43;
    if ( !*(_DWORD *)(v19 + 24) )
      goto LABEL_42;
    *(_QWORD *)(v19 + 32) = lookup;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)lookup, v22, v23, v24, v25, v26, v27);
    if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_42;
    v34 = StringLiteral_1533/*":"*/;
    *(_QWORD *)(v19 + 40) = StringLiteral_1533/*":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 40), v34, v28, v29, v30, v31, v32, v33);
    lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&v79, 0);
    if ( *(_DWORD *)(v19 + 24) <= 2u
      || (*(_QWORD *)(v19 + 48) = lookup,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 48), (int32_t)lookup, v35, v36, v37, v38, v39, v40),
          (*(_DWORD *)(v19 + 24) & 0xFFFFFFFC) == 0)
      || (v47 = StringLiteral_1533/*":"*/,
          *(_QWORD *)(v19 + 56) = StringLiteral_1533/*":"*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 56), v47, v41, v42, v43, v44, v45, v46),
          lookup = (Il2CppObject *)System_Int32__ToString((int32_t)&i, 0),
          *(_DWORD *)(v19 + 24) <= 4u) )
    {
LABEL_42:
      sub_2213CE4(lookup);
    }
    *(_QWORD *)(v19 + 64) = lookup;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 64), (int32_t)lookup, v48, v49, v50, v51, v52, v53);
    v54 = System_String__Concat_75697120((System_String_array *)v19, 0);
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
LABEL_43:
      sub_2213CDC(lookup, v21);
    klass = lookup->klass;
    v56 = lookup;
    v57 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v57;
        p_offset += 4;
        if ( !v57 )
          goto LABEL_15;
      }
      v59 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v59 = sub_224BC3C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v59)(v56, v54, *(_QWORD *)(v59 + 8)) & 1) == 0 )
      break;
    lookup = (Il2CppObject *)DataMasterBase_object__object__object___get_lookup(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_43;
    v60 = lookup->klass;
    v61 = lookup;
    v62 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      v63 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)&v60->_1.interfaceOffsets->offset;
      while ( *(v63 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v62;
        v63 += 2;
        if ( !v62 )
          goto LABEL_23;
      }
      v64 = (__int64)&v60->vtable[*(_DWORD *)v63 + 2];
    }
    else
    {
LABEL_23:
      v64 = sub_224BC3C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    lookup = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, System_String_o *, _QWORD))v64)(
                               v61,
                               v54,
                               *(_QWORD *)(v64 + 8));
    v21 = lookup;
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
      v18 = 0;
      if ( (monitor_high & 0x10) == 0 && LODWORD(lookup[2].klass) == 1 )
      {
        lookup = (Il2CppObject *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_43;
        v72 = lookup[1].klass;
        v73 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++HIDWORD(lookup[1].monitor);
        if ( !v72 )
          goto LABEL_43;
        monitor_low = SLODWORD(lookup[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(v72->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)lookup,
            v21,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = (__int64)v72 + 8 * monitor_low;
          LODWORD(lookup[1].monitor) = monitor_low + 1;
          *(_QWORD *)(v75 + 32) = v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 32), (int32_t)v21, v65, v66, v67, v68, v69, v70);
        }
        v18 = 1;
      }
    }
  }
  return v18;
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
  System_Array_o *v13; // x25
  const MethodInfo *v14; // x5
  __int64 v16; // x21
  MethodInfo *lookup; // x0
  const MethodInfo *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  bool v25; // w25
  _BOOL4 v26; // w29
  bool v27; // w23
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x21
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v56; // x22
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  Il2CppMethodPointer v60; // x8
  MethodInfo *v61; // x22
  __int64 v62; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **v63; // x10
  __int64 v64; // x0
  QuestScriptReleaseEntity_o *v65; // x21
  UserQuestMaster_o *v66; // x22
  int v67; // [xsp+0h] [xbp-70h]
  int v68; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v69; // [xsp+8h] [xbp-68h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-64h] BYREF

  v70 = scriptQuestId;
  v69 = scriptPhase;
  if ( (byte_5971068 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971068 = 1;
  }
  v68 = 0;
  v13 = (System_Array_o *)sub_2213B20(int___TypeInfo, 7);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v13,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
    0);
  if ( (System_Array__IndexOf_int_(
          (System_Int32_array *)v13,
          scriptQuestId,
          (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___)
      & 0x80000000) == 0 )
    return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v14);
  v68 = 1;
  v16 = sub_2213B20(string___TypeInfo, 5);
  lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v70, 0);
  if ( !v16 )
    goto LABEL_54;
  v18 = lookup;
  v25 = 0;
  v26 = kind == 3 && isMainInterlude;
  v27 = kind != 3 || isMainInterlude;
  v67 = 1 << kind;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v16 + 24) )
      goto LABEL_53;
    *(_QWORD *)(v16 + 32) = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 32), (int32_t)v18, v19, v20, v21, v22, v23, v24);
    if ( (*(_DWORD *)(v16 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_53;
    v34 = StringLiteral_1533/*":"*/;
    *(_QWORD *)(v16 + 40) = StringLiteral_1533/*":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 40), v34, v28, v29, v30, v31, v32, v33);
    lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v69, 0);
    if ( *(_DWORD *)(v16 + 24) <= 2u
      || (*(_QWORD *)(v16 + 48) = lookup,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 48), (int32_t)lookup, v35, v36, v37, v38, v39, v40),
          (*(_DWORD *)(v16 + 24) & 0xFFFFFFFC) == 0)
      || (v47 = StringLiteral_1533/*":"*/,
          *(_QWORD *)(v16 + 56) = StringLiteral_1533/*":"*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 56), v47, v41, v42, v43, v44, v45, v46),
          lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v68, 0),
          *(_DWORD *)(v16 + 24) <= 4u) )
    {
LABEL_53:
      sub_2213CE4(lookup);
    }
    *(_QWORD *)(v16 + 64) = lookup;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 64), (int32_t)lookup, v48, v49, v50, v51, v52, v53);
    v54 = System_String__Concat_75697120((System_String_array *)v16, 0);
    lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_54;
    methodPointer = lookup->methodPointer;
    v56 = lookup;
    v57 = *((unsigned __int16 *)lookup->methodPointer + 151);
    if ( *((_WORD *)lookup->methodPointer + 151) )
    {
      v58 = (int *)(*((_QWORD *)methodPointer + 22) + 8LL);
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)v58 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_17;
      }
      v59 = (__int64)methodPointer + 16 * *v58 + 312;
    }
    else
    {
LABEL_17:
      v59 = sub_224BC3C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v59)(v56, v54, *(_QWORD *)(v59 + 8)) & 1) == 0 )
    {
      *isOpen = 1;
      return v25;
    }
    lookup = (MethodInfo *)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_54;
    v60 = lookup->methodPointer;
    v61 = lookup;
    v62 = *((unsigned __int16 *)lookup->methodPointer + 151);
    if ( *((_WORD *)lookup->methodPointer + 151) )
    {
      v63 = (System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__c **)(*((_QWORD *)v60 + 22)
                                                                                                  + 8LL);
      while ( *(v63 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo )
      {
        --v62;
        v63 += 2;
        if ( !v62 )
          goto LABEL_25;
      }
      v64 = (__int64)v60 + 16 * *(_DWORD *)v63 + 344;
    }
    else
    {
LABEL_25:
      v64 = sub_224BC3C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo,
              2);
    }
    lookup = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v64)(
                             v61,
                             v54,
                             *(_QWORD *)(v64 + 8));
    v65 = (QuestScriptReleaseEntity_o *)lookup;
    if ( !v26 )
      goto LABEL_32;
    if ( !lookup )
      goto LABEL_54;
    if ( (BYTE4(lookup->name) & 0x20) != 0 )
    {
LABEL_32:
      if ( v27 )
        goto LABEL_35;
      if ( !lookup )
        goto LABEL_54;
      if ( (BYTE4(lookup->name) & 0x20) == 0 )
      {
LABEL_35:
        lookup = (MethodInfo *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_54;
        lookup = (MethodInfo *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)lookup,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v65 )
          goto LABEL_54;
        if ( (v65->fields.flag & v67) != 0 )
          break;
      }
    }
LABEL_33:
    ++v68;
    v16 = sub_2213B20(string___TypeInfo, 5);
    lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v70, 0);
    v18 = lookup;
    if ( !v16 )
      goto LABEL_54;
  }
  v66 = (UserQuestMaster_o *)lookup;
  if ( QuestScriptReleaseEntity__IsOpen(v65, v18) )
  {
    v25 = 1;
    goto LABEL_33;
  }
  if ( v65->fields.condType != 1 )
    goto LABEL_52;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  lookup = (MethodInfo *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    lookup = (MethodInfo *)NetworkManager_TypeInfo;
  }
  if ( !v66 )
LABEL_54:
    sub_2213CDC(lookup, v18);
  if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
         v66,
         *((_QWORD *)lookup[2].virtualMethodPointer + 8),
         v65->fields.targetIds,
         0) )
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int v18; // w28
  bool v19; // w27
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
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
  int v59; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v60; // [xsp+18h] [xbp-58h] BYREF
  int32_t v61; // [xsp+1Ch] [xbp-54h] BYREF

  v61 = scriptQuestId;
  v6 = kind;
  v60 = scriptPhase;
  if ( (byte_5971069 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__QuestScriptReleaseEntity__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5971069 = 1;
  }
  v59 = 1;
  v9 = sub_2213B20(string___TypeInfo, 5);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v61, 0);
  if ( !v9 )
LABEL_29:
    sub_2213CDC(lookup, v11);
  v18 = 1 << v6;
  v11 = (const MethodInfo *)lookup;
  v19 = 0;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v9 + 24) )
      goto LABEL_33;
    *(_QWORD *)(v9 + 32) = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
    if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_33;
    v26 = StringLiteral_1533/*":"*/;
    *(_QWORD *)(v9 + 40) = StringLiteral_1533/*":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), v26, v20, v21, v22, v23, v24, v25);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v60, 0);
    if ( *(_DWORD *)(v9 + 24) <= 2u
      || (*(_QWORD *)(v9 + 48) = lookup,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)lookup, v27, v28, v29, v30, v31, v32),
          (*(_DWORD *)(v9 + 24) & 0xFFFFFFFC) == 0)
      || (v39 = StringLiteral_1533/*":"*/,
          *(_QWORD *)(v9 + 56) = StringLiteral_1533/*":"*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), v39, v33, v34, v35, v36, v37, v38),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v59, 0),
          *(_DWORD *)(v9 + 24) <= 4u) )
    {
LABEL_33:
      sub_2213CE4(lookup);
    }
    *(_QWORD *)(v9 + 64) = lookup;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 64), (int32_t)lookup, v40, v41, v42, v43, v44, v45);
    v46 = System_String__Concat_75697120((System_String_array *)v9, 0);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
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
      v51 = sub_224BC3C(
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
                                             (const MethodInfo_3F134B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__get_lookup__);
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
      v56 = sub_224BC3C(
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
    if ( (lookup->fields.flag & v18) != 0 )
    {
      v19 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v11) )
        break;
    }
    ++v59;
    v9 = sub_2213B20(string___TypeInfo, 5);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v61, 0);
    v11 = (const MethodInfo *)lookup;
    if ( !v9 )
      goto LABEL_29;
  }
  v57 = 1;
LABEL_32:
  *isOpen = v57;
  return v19;
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

  if ( (byte_5971065 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
    byte_5971065 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}