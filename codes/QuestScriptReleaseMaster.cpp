void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method, v2);
    byte_4B167DC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    173,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_4B167DA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId,
      *(_QWORD *)&phase);
    byte_4B167DA = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v16; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B167E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId, *(_QWORD *)&phaseCnt);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B167E0 = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
  }
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, questId, v13);
  if ( kind == 3 )
    return ScriptQuestId;
  if ( QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, phaseCnt, kind, 0, v14) )
  {
    if ( !isOpen[0] )
      return 0;
    return ScriptQuestId;
  }
  if ( !QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, 0, kind, 0, v16) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v26; // x0
  QuestScriptReleaseEntity_o *v27; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v29; // x1
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B167E1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestScriptReleaseEntity_TypeInfo, v13, v14);
    byte_4B167E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1BCAA3C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v25 + 8));
    v27 = (QuestScriptReleaseEntity_o *)v26;
    if ( v26 )
    {
      methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v26)[19].klass) < (unsigned int)methodPtr_low
        || *((QuestScriptReleaseEntity_c **)(*v26)[12].monitor + methodPtr_low - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        sub_1BCACFC(v26);
        goto LABEL_33;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v26[5],
             questId,
             (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v27, v29) )
      {
        goto LABEL_25;
      }
    }
  }
  v27 = 0LL;
LABEL_25:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_29;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_29:
    v33 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v27;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__HasForceFalseMaterial(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  int64_t v16; // x1
  __int64 v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o *v50; // x20
  DataManager_c *klass; // x8
  DataManager_o *v52; // x21
  __int64 v53; // x9
  int *p_offset; // x10
  __int64 v55; // x0
  DataManager_c *v56; // x8
  DataManager_o *v57; // x21
  __int64 v58; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v59; // x10
  __int64 v60; // x0
  __int64 methodPtr_low; // x10
  int v63; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v64; // [xsp+8h] [xbp-48h] BYREF
  int32_t v65; // [xsp+Ch] [xbp-44h] BYREF

  v64 = scriptPhase;
  v65 = scriptQuestId;
  if ( (byte_4B167E2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserQuestMaster___,
      *(_QWORD *)&scriptQuestId,
      *(_QWORD *)&scriptPhase);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5, v6);
    sub_1BCA7E0(&QuestScriptReleaseEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v13, v14);
    byte_4B167E2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v63 = 1,
        v17 = sub_1BCA888(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v65, 0LL),
        !v17) )
  {
LABEL_31:
    sub_1BCAA3C(Instance, v16);
  }
  v16 = (int64_t)Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v17 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v17 + 32) = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), v16, v18, v19, v20, v21, v22, v23);
    if ( *(_DWORD *)(v17 + 24) <= 1u )
      goto LABEL_34;
    v30 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v17 + 40) = StringLiteral_1541/*":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), v30, v24, v25, v26, v27, v28, v29);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v64, 0LL);
    if ( *(_DWORD *)(v17 + 24) <= 2u
      || (*(_QWORD *)(v17 + 48) = Instance,
          sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)Instance, v31, v32, v33, v34, v35, v36),
          *(_DWORD *)(v17 + 24) <= 3u)
      || (v43 = StringLiteral_1541/*":"*/,
          *(_QWORD *)(v17 + 56) = StringLiteral_1541/*":"*/,
          sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 56), v43, v37, v38, v39, v40, v41, v42),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v63, 0LL),
          *(_DWORD *)(v17 + 24) <= 4u) )
    {
LABEL_34:
      sub_1BCAA44(Instance, v16);
    }
    *(_QWORD *)(v17 + 64) = Instance;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 64), (int64_t)Instance, v44, v45, v46, v47, v48, v49);
    v50 = System_String__Concat_62414748((System_String_array *)v17, 0LL);
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    klass = Instance->klass;
    v52 = Instance;
    v53 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v53;
        p_offset += 4;
        if ( !v53 )
          goto LABEL_16;
      }
      v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_16:
      v55 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v55)(v52, v50, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    v56 = Instance->klass;
    v57 = Instance;
    v58 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v59 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v56->_1.interfaceOffsets->offset;
      while ( *(v59 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v58;
        v59 += 2;
        if ( !v58 )
          goto LABEL_24;
      }
      v60 = (__int64)(&v56->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v59);
    }
    else
    {
LABEL_24:
      v60 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v60)(
                                  v57,
                                  v50,
                                  *(_QWORD *)(v60 + 8));
    if ( !Instance )
      goto LABEL_31;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptReleaseEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_31;
    }
    if ( (BYTE4(Instance->fields.m_CancellationTokenSource) & 8) != 0 )
      return *(_DWORD *)&Instance->fields._DispLog == 92;
    ++v63;
    v17 = sub_1BCA888(string___TypeInfo, 5LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v65, 0LL);
    v16 = (int64_t)Instance;
    if ( !v17 )
      goto LABEL_31;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool v29; // w20
  __int64 v30; // x23
  System_Collections_Generic_List_object__o *lookup; // x0
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_o *v65; // x23
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v67; // x24
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 v70; // x0
  System_Collections_Generic_List_object__c *v71; // x8
  System_Collections_Generic_List_object__o *v72; // x24
  __int64 v73; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v74; // x10
  __int64 v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 methodPtr_low; // x10
  int v83; // w8
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  Il2CppClass **v87; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v91; // [xsp+18h] [xbp-68h] BYREF
  int32_t v92; // [xsp+1Ch] [xbp-64h] BYREF

  v91 = scriptPhase;
  v92 = scriptQuestId;
  if ( (byte_4B167DD & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&scriptQuestId,
      *(_QWORD *)&scriptPhase);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&QuestScriptReleaseEntity_TypeInfo, v16, v17);
    sub_1BCA7E0(&string___TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v20, v21);
    byte_4B167DD = 1;
  }
  *checkCnt = 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&scriptQuestId,
                                                       *(_QWORD *)&scriptPhase,
                                                       isMainInterlude);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)questScriptReleaseEnt, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v30 = sub_1BCA888(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v92, 0LL);
    if ( !v30 )
      goto LABEL_49;
    if ( !*(_DWORD *)(v30 + 24) )
      goto LABEL_48;
    *(_QWORD *)(v30 + 32) = lookup;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)lookup, v33, v34, v35, v36, v37, v38);
    if ( *(_DWORD *)(v30 + 24) <= 1u )
      goto LABEL_48;
    v45 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v30 + 40) = StringLiteral_1541/*":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 40), v45, v39, v40, v41, v42, v43, v44);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v91, 0LL);
    if ( *(_DWORD *)(v30 + 24) <= 2u
      || (*(_QWORD *)(v30 + 48) = lookup,
          sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 48), (int64_t)lookup, v46, v47, v48, v49, v50, v51),
          *(_DWORD *)(v30 + 24) <= 3u)
      || (v58 = StringLiteral_1541/*":"*/,
          *(_QWORD *)(v30 + 56) = StringLiteral_1541/*":"*/,
          sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 56), v58, v52, v53, v54, v55, v56, v57),
          lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&i, 0LL),
          *(_DWORD *)(v30 + 24) <= 4u) )
    {
LABEL_48:
      sub_1BCAA44(lookup, v32);
    }
    *(_QWORD *)(v30 + 64) = lookup;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 64), (int64_t)lookup, v59, v60, v61, v62, v63, v64);
    v65 = System_String__Concat_62414748((System_String_array *)v30, 0LL);
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_49:
      sub_1BCAA3C(lookup, v32);
    klass = lookup->klass;
    v67 = lookup;
    v68 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v68;
        p_offset += 4;
        if ( !v68 )
          goto LABEL_15;
      }
      v70 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v70 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v70)(
            v67,
            v65,
            *(_QWORD *)(v70 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_49;
    v71 = lookup->klass;
    v72 = lookup;
    v73 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v74 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v71->_1.interfaceOffsets->offset;
      while ( *(v74 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v73;
        v74 += 2;
        if ( !v73 )
          goto LABEL_23;
      }
      v75 = (__int64)(&v71->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v74);
    }
    else
    {
LABEL_23:
      v75 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (System_Collections_Generic_List_object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v75)(
                                                            v72,
                                                            v65,
                                                            *(_QWORD *)(v75 + 8));
    if ( lookup
      && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptReleaseEntity_TypeInfo )
        v32 = (int64_t)lookup;
      else
        v32 = 0LL;
      if ( isMainInterlude )
      {
LABEL_28:
        if ( !v32 )
          goto LABEL_49;
        if ( (*(_BYTE *)(v32 + 28) & 0x20) == 0 )
          continue;
        goto LABEL_37;
      }
    }
    else
    {
      v32 = 0LL;
      if ( isMainInterlude )
        goto LABEL_28;
    }
    if ( !v32 )
      goto LABEL_49;
    if ( (*(_BYTE *)(v32 + 28) & 0x20) != 0 )
      continue;
LABEL_37:
    ++*checkCnt;
    v83 = *(_DWORD *)(v32 + 28);
    if ( (v83 & 8) != 0 )
    {
      v29 = 0;
      if ( (v83 & 0x10) == 0 && *(_DWORD *)(v32 + 32) == 1 )
      {
        lookup = (System_Collections_Generic_List_object__o *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_49;
        items = lookup->fields._items;
        v85 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++lookup->fields._version;
        if ( !items )
          goto LABEL_49;
        size = lookup->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            lookup,
            (Il2CppObject *)v32,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v87 = &items->obj.klass + size;
          lookup->fields._size = size + 1;
          v87[4] = (Il2CppClass *)v32;
          sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 4), v32, v76, v77, v78, v79, v80, v81);
        }
        v29 = 1;
      }
    }
  }
  return v29;
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Array_o *v31; // x0
  System_Int32_array *v32; // x25
  const MethodInfo *v33; // x5
  bool v34; // w21
  __int64 v35; // x22
  DataManager_o *lookup; // x0
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  _BOOL4 v44; // w29
  bool v45; // w24
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_String_o *v72; // x22
  DataManager_c *klass; // x8
  DataManager_o *v74; // x23
  __int64 v75; // x9
  int32_t *p_offset; // x10
  __int64 v77; // x0
  DataManager_c *v78; // x8
  DataManager_o *v79; // x23
  __int64 v80; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v81; // x10
  __int64 v82; // x0
  __int64 methodPtr_low; // x10
  DataManager_o *v84; // x22
  UserQuestMaster_o *v85; // x23
  __int64 v86; // x1
  int v88; // [xsp+0h] [xbp-70h]
  int v89; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v90; // [xsp+8h] [xbp-68h] BYREF
  int32_t v91; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v92; // 0:w1.4

  v90 = scriptPhase;
  v91 = scriptQuestId;
  if ( (byte_4B167DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, isOpen, *(_QWORD *)&scriptQuestId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&int___TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestScriptReleaseEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&string___TypeInfo, v25, v26);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v27,
      v28);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v29, v30);
    byte_4B167DE = 1;
  }
  v31 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 7LL);
  v92.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v32 = (System_Int32_array *)v31;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v31, v92, 0LL);
  if ( (System_Array__IndexOf_int_(v32, scriptQuestId, (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v89 = 1;
    v35 = sub_1BCA888(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v91, 0LL);
    if ( !v35 )
      goto LABEL_57;
    v88 = 1 << kind;
    v37 = (const MethodInfo *)lookup;
    v34 = 0;
    v44 = kind == 3 && isMainInterlude;
    v45 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v35 + 24) )
        goto LABEL_56;
      *(_QWORD *)(v35 + 32) = v37;
      sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v37, v38, v39, v40, v41, v42, v43);
      if ( *(_DWORD *)(v35 + 24) <= 1u )
        goto LABEL_56;
      v52 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v35 + 40) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 40), v52, v46, v47, v48, v49, v50, v51);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v90, 0LL);
      if ( *(_DWORD *)(v35 + 24) <= 2u
        || (*(_QWORD *)(v35 + 48) = lookup,
            sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 48), (int64_t)lookup, v53, v54, v55, v56, v57, v58),
            *(_DWORD *)(v35 + 24) <= 3u)
        || (v65 = StringLiteral_1541/*":"*/,
            *(_QWORD *)(v35 + 56) = StringLiteral_1541/*":"*/,
            sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 56), v65, v59, v60, v61, v62, v63, v64),
            lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v89, 0LL),
            *(_DWORD *)(v35 + 24) <= 4u) )
      {
LABEL_56:
        sub_1BCAA44(lookup, v37);
      }
      *(_QWORD *)(v35 + 64) = lookup;
      sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 64), (int64_t)lookup, v66, v67, v68, v69, v70, v71);
      v72 = System_String__Concat_62414748((System_String_array *)v35, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      klass = lookup->klass;
      v74 = lookup;
      v75 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v75;
          p_offset += 4;
          if ( !v75 )
            goto LABEL_17;
        }
        v77 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_17:
        v77 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v77)(v74, v72, *(_QWORD *)(v77 + 8)) & 1) == 0 )
      {
        *isOpen = 1;
        return v34;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v78 = lookup->klass;
      v79 = lookup;
      v80 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        v81 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v78->_1.interfaceOffsets->offset;
        while ( *(v81 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v80;
          v81 += 2;
          if ( !v80 )
            goto LABEL_25;
        }
        v82 = (__int64)(&v78->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v81);
      }
      else
      {
LABEL_25:
        v82 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v82)(
                                  v79,
                                  v72,
                                  *(_QWORD *)(v82 + 8));
      if ( lookup
        && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptReleaseEntity_TypeInfo )
          v84 = lookup;
        else
          v84 = 0LL;
        if ( v44 )
        {
LABEL_35:
          if ( !v84 )
            goto LABEL_57;
          if ( (BYTE4(v84->fields.m_CancellationTokenSource) & 0x20) == 0 )
            goto LABEL_40;
        }
      }
      else
      {
        v84 = 0LL;
        if ( v44 )
          goto LABEL_35;
      }
      if ( v45 )
        goto LABEL_44;
      if ( !v84 )
        goto LABEL_57;
      if ( (BYTE4(v84->fields.m_CancellationTokenSource) & 0x20) == 0 )
      {
LABEL_44:
        lookup = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_57;
        lookup = (DataManager_o *)DataManager__GetMasterData_object_(
                                    lookup,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v84 )
          goto LABEL_57;
        if ( (HIDWORD(v84->fields.m_CancellationTokenSource) & v88) != 0 )
        {
          v85 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v84, v37) )
          {
            if ( *(_DWORD *)&v84->fields._DispLog != 1 )
              goto LABEL_55;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v86);
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v85 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v85,
                     (int64_t)lookup,
                     (System_Int32_array *)v84->fields.datalist,
                     0LL) )
              {
                v34 = 1;
                *isOpen = 1;
                return v34;
              }
LABEL_55:
              v34 = 1;
              *isOpen = 0;
              return v34;
            }
LABEL_57:
            sub_1BCAA3C(lookup, v37);
          }
          v34 = 1;
        }
      }
LABEL_40:
      ++v89;
      v35 = sub_1BCA888(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v91, 0LL);
      v37 = (const MethodInfo *)lookup;
      if ( !v35 )
        goto LABEL_57;
    }
  }
  return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v33);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  QuestScriptReleaseEntity_o *lookup; // x0
  const MethodInfo *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool v24; // w24
  int v25; // w28
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_String_o *v52; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v54; // x22
  __int64 v55; // x9
  int32_t *p_offset; // x10
  __int64 v57; // x0
  QuestScriptReleaseEntity_c *v58; // x8
  QuestScriptReleaseEntity_o *v59; // x22
  __int64 v60; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v61; // x10
  __int64 v62; // x0
  __int64 methodPtr_low; // x10
  bool v64; // w8
  bool result; // w0
  int v66; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v67; // [xsp+18h] [xbp-58h] BYREF
  int32_t v68; // [xsp+1Ch] [xbp-54h] BYREF

  v67 = scriptPhase;
  v68 = scriptQuestId;
  v6 = kind;
  if ( (byte_4B167DF & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      isOpen,
      *(_QWORD *)&scriptQuestId);
    sub_1BCA7E0(&QuestScriptReleaseEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v13, v14);
    byte_4B167DF = 1;
  }
  v66 = 1;
  v15 = sub_1BCA888(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v68, 0LL);
  if ( !v15 )
LABEL_31:
    sub_1BCAA3C(lookup, v17);
  v17 = (const MethodInfo *)lookup;
  v24 = 0;
  v25 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v15 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v15 + 32) = v17;
    sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)v17, v18, v19, v20, v21, v22, v23);
    if ( *(_DWORD *)(v15 + 24) <= 1u )
      goto LABEL_35;
    v32 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v15 + 40) = StringLiteral_1541/*":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 40), v32, v26, v27, v28, v29, v30, v31);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v67, 0LL);
    if ( *(_DWORD *)(v15 + 24) <= 2u
      || (*(_QWORD *)(v15 + 48) = lookup,
          sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 48), (int64_t)lookup, v33, v34, v35, v36, v37, v38),
          *(_DWORD *)(v15 + 24) <= 3u)
      || (v45 = StringLiteral_1541/*":"*/,
          *(_QWORD *)(v15 + 56) = StringLiteral_1541/*":"*/,
          sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 56), v45, v39, v40, v41, v42, v43, v44),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL),
          *(_DWORD *)(v15 + 24) <= 4u) )
    {
LABEL_35:
      sub_1BCAA44(lookup, v17);
    }
    *(_QWORD *)(v15 + 64) = lookup;
    sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 64), (int64_t)lookup, v46, v47, v48, v49, v50, v51);
    v52 = System_String__Concat_62414748((System_String_array *)v15, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
    klass = lookup->klass;
    v54 = lookup;
    v55 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v55;
        p_offset += 4;
        if ( !v55 )
          goto LABEL_15;
      }
      v57 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v57 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v57)(
            v54,
            v52,
            *(_QWORD *)(v57 + 8)) & 1) == 0 )
    {
      v64 = 0;
      goto LABEL_34;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
    v58 = lookup->klass;
    v59 = lookup;
    v60 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v61 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v58->_1.interfaceOffsets->offset;
      while ( *(v61 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v60;
        v61 += 2;
        if ( !v60 )
          goto LABEL_23;
      }
      v62 = (__int64)(&v58->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v61);
    }
    else
    {
LABEL_23:
      v62 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v62)(
                                             v59,
                                             v52,
                                             *(_QWORD *)(v62 + 8));
    if ( !lookup )
      goto LABEL_31;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_31;
    }
    if ( (lookup->fields.flag & v25) != 0 )
    {
      v24 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v17) )
        break;
    }
    ++v66;
    v15 = sub_1BCA888(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v68, 0LL);
    v17 = (const MethodInfo *)lookup;
    if ( !v15 )
      goto LABEL_31;
  }
  v64 = 1;
LABEL_34:
  result = v24;
  *isOpen = v64;
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

  if ( (byte_4B167DB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&scriptId);
    byte_4B167DB = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}