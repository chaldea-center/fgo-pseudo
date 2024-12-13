void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37791 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method);
    byte_4B37791 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    173,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_4B3778F & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId);
    byte_4B3778F = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31D2248 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B37795 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B37795 = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BD36B4(Instance, v11);
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
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v21; // x0
  QuestScriptReleaseEntity_o *v22; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4B37796 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1BD3458(&System_IDisposable_TypeInfo, v6);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BD3458(&QuestScriptReleaseEntity_TypeInfo, v9);
    byte_4B37796 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1BD36B4(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v20 + 8));
    v22 = (QuestScriptReleaseEntity_o *)v21;
    if ( v21 )
    {
      methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v21)[19].klass) < (unsigned int)methodPtr_low
        || *((QuestScriptReleaseEntity_c **)(*v21)[12].monitor + methodPtr_low - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        sub_1BD3974(v21);
        goto LABEL_33;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v21[5],
             questId,
             (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v22, v24) )
      {
        goto LABEL_25;
      }
    }
  }
  v22 = 0LL;
LABEL_25:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v22;
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
  int64_t v11; // x1
  __int64 v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_o *v45; // x20
  DataManager_c *klass; // x8
  DataManager_o *v47; // x21
  __int64 v48; // x9
  int *p_offset; // x10
  __int64 v50; // x0
  DataManager_c *v51; // x8
  DataManager_o *v52; // x21
  __int64 v53; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v54; // x10
  __int64 v55; // x0
  __int64 methodPtr_low; // x10
  int v58; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v59; // [xsp+8h] [xbp-48h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF

  v59 = scriptPhase;
  v60 = scriptQuestId;
  if ( (byte_4B37797 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&scriptQuestId);
    sub_1BD3458(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1BD3458(&QuestScriptReleaseEntity_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BD3458(&string___TypeInfo, v8);
    sub_1BD3458(&StringLiteral_1541/*":"*/, v9);
    byte_4B37797 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v58 = 1,
        v12 = sub_1BD3500(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v60, 0LL),
        !v12) )
  {
LABEL_31:
    sub_1BD36B4(Instance, v11);
  }
  v11 = (int64_t)Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v12 + 32) = v11;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 32), v11, v13, v14, v15, v16, v17, v18);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      goto LABEL_34;
    v25 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_1541/*":"*/;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 40), v25, v19, v20, v21, v22, v23, v24);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v59, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u
      || (*(_QWORD *)(v12 + 48) = Instance,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 48), (int64_t)Instance, v26, v27, v28, v29, v30, v31),
          *(_DWORD *)(v12 + 24) <= 3u)
      || (v38 = StringLiteral_1541/*":"*/,
          *(_QWORD *)(v12 + 56) = StringLiteral_1541/*":"*/,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 56), v38, v32, v33, v34, v35, v36, v37),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v58, 0LL),
          *(_DWORD *)(v12 + 24) <= 4u) )
    {
LABEL_34:
      sub_1BD36BC(Instance, v11);
    }
    *(_QWORD *)(v12 + 64) = Instance;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 64), (int64_t)Instance, v39, v40, v41, v42, v43, v44);
    v45 = System_String__Concat_62538776((System_String_array *)v12, 0LL);
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    klass = Instance->klass;
    v47 = Instance;
    v48 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v48;
        p_offset += 4;
        if ( !v48 )
          goto LABEL_16;
      }
      v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_16:
      v50 = sub_1C25438(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v50)(v47, v45, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    v51 = Instance->klass;
    v52 = Instance;
    v53 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v54 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v51->_1.interfaceOffsets->offset;
      while ( *(v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v53;
        v54 += 2;
        if ( !v53 )
          goto LABEL_24;
      }
      v55 = (__int64)(&v51->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v54);
    }
    else
    {
LABEL_24:
      v55 = sub_1C25438(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v55)(
                                  v52,
                                  v45,
                                  *(_QWORD *)(v55 + 8));
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
    ++v58;
    v12 = sub_1BD3500(string___TypeInfo, 5LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v60, 0LL);
    v11 = (int64_t)Instance;
    if ( !v12 )
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool v23; // w20
  __int64 v24; // x23
  System_Collections_Generic_List_object__o *lookup; // x0
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
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
  System_String_o *v59; // x23
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v61; // x24
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 v64; // x0
  System_Collections_Generic_List_object__c *v65; // x8
  System_Collections_Generic_List_object__o *v66; // x24
  __int64 v67; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v68; // x10
  __int64 v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 methodPtr_low; // x10
  int v77; // w8
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v85; // [xsp+18h] [xbp-68h] BYREF
  int32_t v86; // [xsp+1Ch] [xbp-64h] BYREF

  v85 = scriptPhase;
  v86 = scriptQuestId;
  if ( (byte_4B37792 & 1) == 0 )
  {
    sub_1BD3458(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&scriptQuestId);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v12);
    sub_1BD3458(&QuestScriptReleaseEntity_TypeInfo, v13);
    sub_1BD3458(&string___TypeInfo, v14);
    sub_1BD3458(&StringLiteral_1541/*":"*/, v15);
    byte_4B37792 = 1;
  }
  *checkCnt = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v16;
  sub_1BD33FC((PartyOrganizationUtility_o *)questScriptReleaseEnt, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v24 = sub_1BD3500(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v86, 0LL);
    if ( !v24 )
      goto LABEL_49;
    if ( !*(_DWORD *)(v24 + 24) )
      goto LABEL_48;
    *(_QWORD *)(v24 + 32) = lookup;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)lookup, v27, v28, v29, v30, v31, v32);
    if ( *(_DWORD *)(v24 + 24) <= 1u )
      goto LABEL_48;
    v39 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v24 + 40) = StringLiteral_1541/*":"*/;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v24 + 40), v39, v33, v34, v35, v36, v37, v38);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v85, 0LL);
    if ( *(_DWORD *)(v24 + 24) <= 2u
      || (*(_QWORD *)(v24 + 48) = lookup,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v24 + 48), (int64_t)lookup, v40, v41, v42, v43, v44, v45),
          *(_DWORD *)(v24 + 24) <= 3u)
      || (v52 = StringLiteral_1541/*":"*/,
          *(_QWORD *)(v24 + 56) = StringLiteral_1541/*":"*/,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v24 + 56), v52, v46, v47, v48, v49, v50, v51),
          lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&i, 0LL),
          *(_DWORD *)(v24 + 24) <= 4u) )
    {
LABEL_48:
      sub_1BD36BC(lookup, v26);
    }
    *(_QWORD *)(v24 + 64) = lookup;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v24 + 64), (int64_t)lookup, v53, v54, v55, v56, v57, v58);
    v59 = System_String__Concat_62538776((System_String_array *)v24, 0LL);
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_49:
      sub_1BD36B4(lookup, v26);
    klass = lookup->klass;
    v61 = lookup;
    v62 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v62;
        p_offset += 4;
        if ( !v62 )
          goto LABEL_15;
      }
      v64 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v64 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v64)(
            v61,
            v59,
            *(_QWORD *)(v64 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_49;
    v65 = lookup->klass;
    v66 = lookup;
    v67 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v68 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v65->_1.interfaceOffsets->offset;
      while ( *(v68 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v67;
        v68 += 2;
        if ( !v67 )
          goto LABEL_23;
      }
      v69 = (__int64)(&v65->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v68);
    }
    else
    {
LABEL_23:
      v69 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (System_Collections_Generic_List_object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v69)(
                                                            v66,
                                                            v59,
                                                            *(_QWORD *)(v69 + 8));
    if ( lookup
      && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptReleaseEntity_TypeInfo )
        v26 = (int64_t)lookup;
      else
        v26 = 0LL;
      if ( isMainInterlude )
      {
LABEL_28:
        if ( !v26 )
          goto LABEL_49;
        if ( (*(_BYTE *)(v26 + 28) & 0x20) == 0 )
          continue;
        goto LABEL_37;
      }
    }
    else
    {
      v26 = 0LL;
      if ( isMainInterlude )
        goto LABEL_28;
    }
    if ( !v26 )
      goto LABEL_49;
    if ( (*(_BYTE *)(v26 + 28) & 0x20) != 0 )
      continue;
LABEL_37:
    ++*checkCnt;
    v77 = *(_DWORD *)(v26 + 28);
    if ( (v77 & 8) != 0 )
    {
      v23 = 0;
      if ( (v77 & 0x10) == 0 && *(_DWORD *)(v26 + 32) == 1 )
      {
        lookup = (System_Collections_Generic_List_object__o *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_49;
        items = lookup->fields._items;
        v79 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++lookup->fields._version;
        if ( !items )
          goto LABEL_49;
        size = lookup->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            lookup,
            (Il2CppObject *)v26,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &items->obj.klass + size;
          lookup->fields._size = size + 1;
          v81[4] = (Il2CppClass *)v26;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v81 + 4), v26, v70, v71, v72, v73, v74, v75);
        }
        v23 = 1;
      }
    }
  }
  return v23;
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  _BOOL4 v35; // w29
  bool v36; // w24
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
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *v63; // x22
  Il2CppMethodPointer methodPointer; // x8
  MethodInfo *v65; // x23
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  Il2CppMethodPointer v69; // x8
  MethodInfo *v70; // x23
  __int64 v71; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v72; // x10
  __int64 v73; // x0
  __int64 methodPtr_low; // x10
  MethodInfo *v75; // x22
  UserQuestMaster_o *v76; // x23
  int v78; // [xsp+0h] [xbp-70h]
  int v79; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v80; // [xsp+8h] [xbp-68h] BYREF
  int32_t v81; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v82; // 0:w1.4

  v80 = scriptPhase;
  v81 = scriptQuestId;
  if ( (byte_4B37793 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_IndexOf_int___, isOpen);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_1BD3458(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v14);
    sub_1BD3458(&int___TypeInfo, v15);
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    sub_1BD3458(&QuestScriptReleaseEntity_TypeInfo, v17);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BD3458(&string___TypeInfo, v19);
    sub_1BD3458(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v20);
    sub_1BD3458(&StringLiteral_1541/*":"*/, v21);
    byte_4B37793 = 1;
  }
  v22 = (System_Array_o *)sub_1BD3500(int___TypeInfo, 7LL);
  v82.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v23 = (System_Int32_array *)v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62433328(v22, v82, 0LL);
  if ( (System_Array__IndexOf_int_(v23, scriptQuestId, (const MethodInfo_302DFD8 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v79 = 1;
    v26 = sub_1BD3500(string___TypeInfo, 5LL);
    lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v81, 0LL);
    if ( !v26 )
      goto LABEL_61;
    v78 = 1 << kind;
    v28 = lookup;
    v25 = 0;
    v35 = kind == 3 && isMainInterlude;
    v36 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_60;
      *(_QWORD *)(v26 + 32) = v28;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v28, v29, v30, v31, v32, v33, v34);
      if ( *(_DWORD *)(v26 + 24) <= 1u )
        goto LABEL_60;
      v43 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v26 + 40) = StringLiteral_1541/*":"*/;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v26 + 40), v43, v37, v38, v39, v40, v41, v42);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v80, 0LL);
      if ( *(_DWORD *)(v26 + 24) <= 2u
        || (*(_QWORD *)(v26 + 48) = lookup,
            sub_1BD33FC((PartyOrganizationUtility_o *)(v26 + 48), (int64_t)lookup, v44, v45, v46, v47, v48, v49),
            *(_DWORD *)(v26 + 24) <= 3u)
        || (v56 = StringLiteral_1541/*":"*/,
            *(_QWORD *)(v26 + 56) = StringLiteral_1541/*":"*/,
            sub_1BD33FC((PartyOrganizationUtility_o *)(v26 + 56), v56, v50, v51, v52, v53, v54, v55),
            lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v79, 0LL),
            *(_DWORD *)(v26 + 24) <= 4u) )
      {
LABEL_60:
        sub_1BD36BC(lookup, v28);
      }
      *(_QWORD *)(v26 + 64) = lookup;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v26 + 64), (int64_t)lookup, v57, v58, v59, v60, v61, v62);
      v63 = System_String__Concat_62538776((System_String_array *)v26, 0LL);
      lookup = (MethodInfo *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_61;
      methodPointer = lookup->methodPointer;
      v65 = lookup;
      v66 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v67 = (int *)(*((_QWORD *)methodPointer + 22) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v67 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_17;
        }
        v68 = (__int64)methodPointer + 16 * *v67 + 312;
      }
      else
      {
LABEL_17:
        v68 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v68)(v65, v63, *(_QWORD *)(v68 + 8)) & 1) == 0 )
      {
        *isOpen = 1;
        return v25;
      }
      lookup = (MethodInfo *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_61;
      v69 = lookup->methodPointer;
      v70 = lookup;
      v71 = *((unsigned __int16 *)lookup->methodPointer + 151);
      if ( *((_WORD *)lookup->methodPointer + 151) )
      {
        v72 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*((_QWORD *)v69 + 22) + 8LL);
        while ( *(v72 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v71;
          v72 += 2;
          if ( !v71 )
            goto LABEL_25;
        }
        v73 = (__int64)v69 + 16 * *(_DWORD *)v72 + 344;
      }
      else
      {
LABEL_25:
        v73 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (MethodInfo *)(*(__int64 (__fastcall **)(MethodInfo *, System_String_o *, _QWORD))v73)(
                               v70,
                               v63,
                               *(_QWORD *)(v73 + 8));
      if ( lookup
        && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
            *((unsigned __int8 *)lookup->methodPointer + 304) >= (unsigned int)methodPtr_low) )
      {
        if ( *(QuestScriptReleaseEntity_c **)(*((_QWORD *)lookup->methodPointer + 25) + 8 * methodPtr_low - 8) == QuestScriptReleaseEntity_TypeInfo )
          v75 = lookup;
        else
          v75 = 0LL;
        if ( v35 )
        {
LABEL_35:
          if ( !v75 )
            goto LABEL_61;
          if ( (BYTE4(v75->name) & 0x20) == 0 )
            goto LABEL_40;
        }
      }
      else
      {
        v75 = 0LL;
        if ( v35 )
          goto LABEL_35;
      }
      if ( v36 )
        goto LABEL_44;
      if ( !v75 )
        goto LABEL_61;
      if ( (BYTE4(v75->name) & 0x20) == 0 )
      {
LABEL_44:
        lookup = (MethodInfo *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_61;
        lookup = (MethodInfo *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)lookup,
                                 (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v75 )
          goto LABEL_61;
        if ( (HIDWORD(v75->name) & v78) != 0 )
        {
          v76 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v75, v28) )
          {
            if ( LODWORD(v75->klass) != 1 )
              goto LABEL_59;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B31D77 )
            {
              sub_1BD3458(&NetworkManager_TypeInfo, v28);
              byte_4B31D77 = 1;
            }
            lookup = (MethodInfo *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              lookup = (MethodInfo *)NetworkManager_TypeInfo;
            }
            if ( v76 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v76,
                     *((_QWORD *)lookup[2].virtualMethodPointer + 8),
                     (System_Int32_array *)v75->return_type,
                     0LL) )
              {
                v25 = 1;
                *isOpen = 1;
                return v25;
              }
LABEL_59:
              v25 = 1;
              *isOpen = 0;
              return v25;
            }
LABEL_61:
            sub_1BD36B4(lookup, v28);
          }
          v25 = 1;
        }
      }
LABEL_40:
      ++v79;
      v26 = sub_1BD3500(string___TypeInfo, 5LL);
      lookup = (MethodInfo *)System_Int32__ToString((int32_t)&v81, 0LL);
      v28 = lookup;
      if ( !v26 )
        goto LABEL_61;
    }
  }
  return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v24);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  bool v21; // w24
  int v22; // w28
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v51; // x22
  __int64 v52; // x9
  int32_t *p_offset; // x10
  __int64 v54; // x0
  QuestScriptReleaseEntity_c *v55; // x8
  QuestScriptReleaseEntity_o *v56; // x22
  __int64 v57; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v58; // x10
  __int64 v59; // x0
  __int64 methodPtr_low; // x10
  bool v61; // w8
  bool result; // w0
  int v63; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v64; // [xsp+18h] [xbp-58h] BYREF
  int32_t v65; // [xsp+1Ch] [xbp-54h] BYREF

  v64 = scriptPhase;
  v65 = scriptQuestId;
  v6 = kind;
  if ( (byte_4B37794 & 1) == 0 )
  {
    sub_1BD3458(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, isOpen);
    sub_1BD3458(&QuestScriptReleaseEntity_TypeInfo, v9);
    sub_1BD3458(&string___TypeInfo, v10);
    sub_1BD3458(&StringLiteral_1541/*":"*/, v11);
    byte_4B37794 = 1;
  }
  v63 = 1;
  v12 = sub_1BD3500(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
  if ( !v12 )
LABEL_31:
    sub_1BD36B4(lookup, v14);
  v14 = (const MethodInfo *)lookup;
  v21 = 0;
  v22 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v12 + 32) = v14;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)v14, v15, v16, v17, v18, v19, v20);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      goto LABEL_35;
    v29 = StringLiteral_1541/*":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_1541/*":"*/;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 40), v29, v23, v24, v25, v26, v27, v28);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v64, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u
      || (*(_QWORD *)(v12 + 48) = lookup,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 48), (int64_t)lookup, v30, v31, v32, v33, v34, v35),
          *(_DWORD *)(v12 + 24) <= 3u)
      || (v42 = StringLiteral_1541/*":"*/,
          *(_QWORD *)(v12 + 56) = StringLiteral_1541/*":"*/,
          sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 56), v42, v36, v37, v38, v39, v40, v41),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v63, 0LL),
          *(_DWORD *)(v12 + 24) <= 4u) )
    {
LABEL_35:
      sub_1BD36BC(lookup, v14);
    }
    *(_QWORD *)(v12 + 64) = lookup;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 64), (int64_t)lookup, v43, v44, v45, v46, v47, v48);
    v49 = System_String__Concat_62538776((System_String_array *)v12, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
    klass = lookup->klass;
    v51 = lookup;
    v52 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v52;
        p_offset += 4;
        if ( !v52 )
          goto LABEL_15;
      }
      v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v54 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v54)(
            v51,
            v49,
            *(_QWORD *)(v54 + 8)) & 1) == 0 )
    {
      v61 = 0;
      goto LABEL_34;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
    v55 = lookup->klass;
    v56 = lookup;
    v57 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v58 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v55->_1.interfaceOffsets->offset;
      while ( *(v58 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v57;
        v58 += 2;
        if ( !v57 )
          goto LABEL_23;
      }
      v59 = (__int64)(&v55->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v58);
    }
    else
    {
LABEL_23:
      v59 = sub_1C25438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v59)(
                                             v56,
                                             v49,
                                             *(_QWORD *)(v59 + 8));
    if ( !lookup )
      goto LABEL_31;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_31;
    }
    if ( (lookup->fields.flag & v22) != 0 )
    {
      v21 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v14) )
        break;
    }
    ++v63;
    v12 = sub_1BD3500(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
    v14 = (const MethodInfo *)lookup;
    if ( !v12 )
      goto LABEL_31;
  }
  v61 = 1;
LABEL_34:
  result = v21;
  *isOpen = v61;
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

  if ( (byte_4B37790 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B37790 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}