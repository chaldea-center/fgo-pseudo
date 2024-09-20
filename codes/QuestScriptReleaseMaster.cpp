void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B72B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
    byte_4A5B72B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    173,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_4A5B729 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
    byte_4A5B729 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
}


int32_t __fastcall QuestScriptReleaseMaster__GetScriptQuestId(
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

  if ( (byte_4A5B72F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B72F = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
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
QuestScriptReleaseEntity_o *__fastcall QuestScriptReleaseMaster__GetTargetIdEntity(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v16; // x0
  QuestScriptReleaseEntity_o *v17; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B730 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestScriptReleaseEntity_TypeInfo);
    byte_4A5B730 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1B8880C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v15 + 8));
    v17 = (QuestScriptReleaseEntity_o *)v16;
    if ( v16 )
    {
      methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v16)[19].klass) < (unsigned int)methodPtr_low
        || *((QuestScriptReleaseEntity_c **)(*v16)[12].monitor + methodPtr_low - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        sub_1B88ACC(v16);
        goto LABEL_33;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v16[5],
             questId,
             (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v17, v19) )
      {
        goto LABEL_25;
      }
    }
  }
  v17 = 0LL;
LABEL_25:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v17;
}


bool __fastcall QuestScriptReleaseMaster__HasForceFalseMaterial(
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x20
  DataManager_c *klass; // x8
  DataManager_o *v22; // x21
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  DataManager_c *v26; // x8
  DataManager_o *v27; // x21
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v29; // x10
  __int64 v30; // x0
  __int64 methodPtr_low; // x10
  int v33; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v34; // [xsp+8h] [xbp-48h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  v34 = scriptPhase;
  v35 = scriptQuestId;
  if ( (byte_4A5B731 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&QuestScriptReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B731 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v33 = 1,
        v7 = sub_1B88658(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v35, 0LL),
        !v7) )
  {
LABEL_31:
    sub_1B8880C(Instance, v6);
  }
  v6 = Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v7 + 32) = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v6, v8, v9);
    if ( *(_DWORD *)(v7 + 24) <= 1u )
      goto LABEL_34;
    v12 = StringLiteral_1544/*":"*/;
    *(_QWORD *)(v7 + 40) = StringLiteral_1544/*":"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), v12, v10, v11);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v34, 0LL);
    if ( *(_DWORD *)(v7 + 24) <= 2u
      || (*(_QWORD *)(v7 + 48) = Instance,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)Instance, v13, v14),
          *(_DWORD *)(v7 + 24) <= 3u)
      || (v17 = StringLiteral_1544/*":"*/,
          *(_QWORD *)(v7 + 56) = StringLiteral_1544/*":"*/,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), v17, v15, v16),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v33, 0LL),
          *(_DWORD *)(v7 + 24) <= 4u) )
    {
LABEL_34:
      sub_1B88814(Instance, v6);
    }
    *(_QWORD *)(v7 + 64) = Instance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)Instance, v18, v19);
    v20 = System_String__Concat_61720560((System_String_array *)v7, 0LL);
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    klass = Instance->klass;
    v22 = Instance;
    v23 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_16:
      v25 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v25)(v22, v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    v26 = Instance->klass;
    v27 = Instance;
    v28 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v29 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 2;
        if ( !v28 )
          goto LABEL_24;
      }
      v30 = (__int64)(&v26->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v29);
    }
    else
    {
LABEL_24:
      v30 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v30)(
                                  v27,
                                  v20,
                                  *(_QWORD *)(v30 + 8));
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
    ++v33;
    v7 = sub_1B88658(string___TypeInfo, 5LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v35, 0LL);
    v6 = Instance;
    if ( !v7 )
      goto LABEL_31;
  }
}


bool __fastcall QuestScriptReleaseMaster__IsMaterialCondTypeQuestClearOnly(
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
  bool v13; // w20
  __int64 v14; // x23
  System_Collections_Generic_List_object__o *lookup; // x0
  System_Collections_Generic_List_object__o *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x23
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v31; // x24
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  System_Collections_Generic_List_object__c *v35; // x8
  System_Collections_Generic_List_object__o *v36; // x24
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v38; // x10
  __int64 v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 methodPtr_low; // x10
  int32_t version; // w8
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v51; // [xsp+18h] [xbp-68h] BYREF
  int32_t v52; // [xsp+1Ch] [xbp-64h] BYREF

  v51 = scriptPhase;
  v52 = scriptQuestId;
  if ( (byte_4A5B72C & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_1B885B0(&QuestScriptReleaseEntity_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B72C = 1;
  }
  *checkCnt = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)questScriptReleaseEnt, (int32_t)v10, v11, v12);
  v13 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v14 = sub_1B88658(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v52, 0LL);
    if ( !v14 )
      goto LABEL_49;
    if ( !*(_DWORD *)(v14 + 24) )
      goto LABEL_48;
    *(_QWORD *)(v14 + 32) = lookup;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)lookup, v17, v18);
    if ( *(_DWORD *)(v14 + 24) <= 1u )
      goto LABEL_48;
    v21 = StringLiteral_1544/*":"*/;
    *(_QWORD *)(v14 + 40) = StringLiteral_1544/*":"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 40), v21, v19, v20);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v51, 0LL);
    if ( *(_DWORD *)(v14 + 24) <= 2u
      || (*(_QWORD *)(v14 + 48) = lookup,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 48), (int32_t)lookup, v22, v23),
          *(_DWORD *)(v14 + 24) <= 3u)
      || (v26 = StringLiteral_1544/*":"*/,
          *(_QWORD *)(v14 + 56) = StringLiteral_1544/*":"*/,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 56), v26, v24, v25),
          lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&i, 0LL),
          *(_DWORD *)(v14 + 24) <= 4u) )
    {
LABEL_48:
      sub_1B88814(lookup, v16);
    }
    *(_QWORD *)(v14 + 64) = lookup;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 64), (int32_t)lookup, v27, v28);
    v29 = System_String__Concat_61720560((System_String_array *)v14, 0LL);
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_49:
      sub_1B8880C(lookup, v16);
    klass = lookup->klass;
    v31 = lookup;
    v32 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v34 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v34)(
            v31,
            v29,
            *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_49;
    v35 = lookup->klass;
    v36 = lookup;
    v37 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v38 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v35->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v39 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (System_Collections_Generic_List_object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v39)(
                                                            v36,
                                                            v29,
                                                            *(_QWORD *)(v39 + 8));
    if ( lookup
      && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptReleaseEntity_TypeInfo )
        v16 = lookup;
      else
        v16 = 0LL;
      if ( isMainInterlude )
      {
LABEL_28:
        if ( !v16 )
          goto LABEL_49;
        if ( (v16->fields._version & 0x20) == 0 )
          continue;
        goto LABEL_37;
      }
    }
    else
    {
      v16 = 0LL;
      if ( isMainInterlude )
        goto LABEL_28;
    }
    if ( !v16 )
      goto LABEL_49;
    if ( (v16->fields._version & 0x20) != 0 )
      continue;
LABEL_37:
    ++*checkCnt;
    version = v16->fields._version;
    if ( (version & 8) != 0 )
    {
      v13 = 0;
      if ( (version & 0x10) == 0 && LODWORD(v16->fields._syncRoot) == 1 )
      {
        lookup = (System_Collections_Generic_List_object__o *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_49;
        items = lookup->fields._items;
        v45 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++lookup->fields._version;
        if ( !items )
          goto LABEL_49;
        size = lookup->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            lookup,
            (Il2CppObject *)v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          lookup->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v16, v40, v41);
        }
        v13 = 1;
      }
    }
  }
  return v13;
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
  System_Array_o *v13; // x0
  System_Int32_array *v14; // x25
  const MethodInfo *v15; // x5
  bool v16; // w21
  __int64 v17; // x22
  DataManager_o *lookup; // x0
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL4 v22; // w29
  bool v23; // w24
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x22
  DataManager_c *klass; // x8
  DataManager_o *v36; // x23
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  DataManager_c *v40; // x8
  DataManager_o *v41; // x23
  __int64 v42; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v43; // x10
  __int64 v44; // x0
  __int64 methodPtr_low; // x10
  DataManager_o *v46; // x22
  UserQuestMaster_o *v47; // x23
  int v49; // [xsp+0h] [xbp-70h]
  int v50; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v51; // [xsp+8h] [xbp-68h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v53; // 0:w1.4

  v51 = scriptPhase;
  v52 = scriptQuestId;
  if ( (byte_4A5B72D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&QuestScriptReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B72D = 1;
  }
  v13 = (System_Array_o *)sub_1B88658(int___TypeInfo, 7LL);
  v53.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v14 = (System_Int32_array *)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v13, v53, 0LL);
  if ( (System_Array__IndexOf_int_(v14, scriptQuestId, (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v50 = 1;
    v17 = sub_1B88658(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v52, 0LL);
    if ( !v17 )
      goto LABEL_57;
    v49 = 1 << kind;
    v19 = (const MethodInfo *)lookup;
    v16 = 0;
    v22 = kind == 3 && isMainInterlude;
    v23 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_56;
      *(_QWORD *)(v17 + 32) = v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v19, v20, v21);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_56;
      v26 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v17 + 40) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 40), v26, v24, v25);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v51, 0LL);
      if ( *(_DWORD *)(v17 + 24) <= 2u
        || (*(_QWORD *)(v17 + 48) = lookup,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)lookup, v27, v28),
            *(_DWORD *)(v17 + 24) <= 3u)
        || (v31 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v17 + 56) = StringLiteral_1544/*":"*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 56), v31, v29, v30),
            lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v50, 0LL),
            *(_DWORD *)(v17 + 24) <= 4u) )
      {
LABEL_56:
        sub_1B88814(lookup, v19);
      }
      *(_QWORD *)(v17 + 64) = lookup;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 64), (int32_t)lookup, v32, v33);
      v34 = System_String__Concat_61720560((System_String_array *)v17, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      klass = lookup->klass;
      v36 = lookup;
      v37 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v37;
          p_offset += 4;
          if ( !v37 )
            goto LABEL_17;
        }
        v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_17:
        v39 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v39)(v36, v34, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      {
        *isOpen = 1;
        return v16;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v40 = lookup->klass;
      v41 = lookup;
      v42 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        v43 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v40->_1.interfaceOffsets->offset;
        while ( *(v43 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v42;
          v43 += 2;
          if ( !v42 )
            goto LABEL_25;
        }
        v44 = (__int64)(&v40->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v43);
      }
      else
      {
LABEL_25:
        v44 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v44)(
                                  v41,
                                  v34,
                                  *(_QWORD *)(v44 + 8));
      if ( lookup
        && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptReleaseEntity_TypeInfo )
          v46 = lookup;
        else
          v46 = 0LL;
        if ( v22 )
        {
LABEL_35:
          if ( !v46 )
            goto LABEL_57;
          if ( (BYTE4(v46->fields.m_CancellationTokenSource) & 0x20) == 0 )
            goto LABEL_40;
        }
      }
      else
      {
        v46 = 0LL;
        if ( v22 )
          goto LABEL_35;
      }
      if ( v23 )
        goto LABEL_44;
      if ( !v46 )
        goto LABEL_57;
      if ( (BYTE4(v46->fields.m_CancellationTokenSource) & 0x20) == 0 )
      {
LABEL_44:
        lookup = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_57;
        lookup = (DataManager_o *)DataManager__GetMasterData_object_(
                                    lookup,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v46 )
          goto LABEL_57;
        if ( (HIDWORD(v46->fields.m_CancellationTokenSource) & v49) != 0 )
        {
          v47 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v46, v19) )
          {
            if ( *(_DWORD *)&v46->fields._DispLog != 1 )
              goto LABEL_55;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v47 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v47,
                     (int64_t)lookup,
                     (System_Int32_array *)v46->fields.datalist,
                     0LL) )
              {
                v16 = 1;
                *isOpen = 1;
                return v16;
              }
LABEL_55:
              v16 = 1;
              *isOpen = 0;
              return v16;
            }
LABEL_57:
            sub_1B8880C(lookup, v19);
          }
          v16 = 1;
        }
      }
LABEL_40:
      ++v50;
      v17 = sub_1B88658(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v52, 0LL);
      v19 = (const MethodInfo *)lookup;
      if ( !v17 )
        goto LABEL_57;
    }
  }
  return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v15);
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
  __int64 v9; // x21
  QuestScriptReleaseEntity_o *lookup; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  bool v14; // w24
  int v15; // w28
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v28; // x22
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  QuestScriptReleaseEntity_c *v32; // x8
  QuestScriptReleaseEntity_o *v33; // x22
  __int64 v34; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v35; // x10
  __int64 v36; // x0
  __int64 methodPtr_low; // x10
  bool v38; // w8
  bool result; // w0
  int v40; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v41; // [xsp+18h] [xbp-58h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-54h] BYREF

  v41 = scriptPhase;
  v42 = scriptQuestId;
  v6 = kind;
  if ( (byte_4A5B72E & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&QuestScriptReleaseEntity_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B72E = 1;
  }
  v40 = 1;
  v9 = sub_1B88658(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
  if ( !v9 )
LABEL_31:
    sub_1B8880C(lookup, v11);
  v11 = (const MethodInfo *)lookup;
  v14 = 0;
  v15 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v9 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v9 + 32) = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)v11, v12, v13);
    if ( *(_DWORD *)(v9 + 24) <= 1u )
      goto LABEL_35;
    v18 = StringLiteral_1544/*":"*/;
    *(_QWORD *)(v9 + 40) = StringLiteral_1544/*":"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v18, v16, v17);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v41, 0LL);
    if ( *(_DWORD *)(v9 + 24) <= 2u
      || (*(_QWORD *)(v9 + 48) = lookup,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)lookup, v19, v20),
          *(_DWORD *)(v9 + 24) <= 3u)
      || (v23 = StringLiteral_1544/*":"*/,
          *(_QWORD *)(v9 + 56) = StringLiteral_1544/*":"*/,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), v23, v21, v22),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v40, 0LL),
          *(_DWORD *)(v9 + 24) <= 4u) )
    {
LABEL_35:
      sub_1B88814(lookup, v11);
    }
    *(_QWORD *)(v9 + 64) = lookup;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)lookup, v24, v25);
    v26 = System_String__Concat_61720560((System_String_array *)v9, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
    klass = lookup->klass;
    v28 = lookup;
    v29 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_15;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v31 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v31)(
            v28,
            v26,
            *(_QWORD *)(v31 + 8)) & 1) == 0 )
    {
      v38 = 0;
      goto LABEL_34;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
    v32 = lookup->klass;
    v33 = lookup;
    v34 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v35 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v32->_1.interfaceOffsets->offset;
      while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 2;
        if ( !v34 )
          goto LABEL_23;
      }
      v36 = (__int64)(&v32->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v35);
    }
    else
    {
LABEL_23:
      v36 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v36)(
                                             v33,
                                             v26,
                                             *(_QWORD *)(v36 + 8));
    if ( !lookup )
      goto LABEL_31;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_31;
    }
    if ( (lookup->fields.flag & v15) != 0 )
    {
      v14 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v11) )
        break;
    }
    ++v40;
    v9 = sub_1B88658(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
    v11 = (const MethodInfo *)lookup;
    if ( !v9 )
      goto LABEL_31;
  }
  v38 = 1;
LABEL_34:
  result = v14;
  *isOpen = v38;
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

  if ( (byte_4A5B72A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
    byte_4A5B72A = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}