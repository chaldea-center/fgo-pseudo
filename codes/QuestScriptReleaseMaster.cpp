void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC9CA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method);
    byte_49FC9CA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    173,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_49FC9C8 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId);
    byte_49FC9C8 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v14; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FC9CE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FC9CE = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v20; // x0
  QuestScriptReleaseEntity_o *v21; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_49FC9CF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&QuestScriptReleaseEntity_TypeInfo, v9);
    byte_49FC9CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1B64324(list);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v19 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v19 + 8));
    v21 = (QuestScriptReleaseEntity_o *)v20;
    if ( v20 )
    {
      methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*v20)[19].klass) < (unsigned int)methodPtr_low
        || *((QuestScriptReleaseEntity_c **)(*v20)[12].monitor + methodPtr_low - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        sub_1B645E4(v20);
        goto LABEL_33;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v20[5],
             questId,
             (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v21, v23) )
      {
        goto LABEL_25;
      }
    }
  }
  v21 = 0LL;
LABEL_25:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
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
  __int64 v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  DataManager_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x20
  DataManager_c *klass; // x8
  DataManager_o *v27; // x21
  __int64 v28; // x9
  int *p_offset; // x10
  __int64 v30; // x0
  DataManager_c *v31; // x8
  DataManager_o *v32; // x21
  __int64 v33; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v34; // x10
  __int64 v35; // x0
  __int64 methodPtr_low; // x10
  int v38; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v39; // [xsp+8h] [xbp-48h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  v39 = scriptPhase;
  v40 = scriptQuestId;
  if ( (byte_49FC9D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&scriptQuestId);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&QuestScriptReleaseEntity_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v9);
    byte_49FC9D0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        v38 = 1,
        v11 = sub_1B64170(string___TypeInfo, 5LL),
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v40, 0LL),
        !v11) )
  {
LABEL_31:
    sub_1B64324(Instance);
  }
  v14 = Instance;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v11 + 24) )
      goto LABEL_34;
    *(_QWORD *)(v11 + 32) = v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v14, v12, v13);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
      goto LABEL_34;
    v17 = StringLiteral_1546/*":"*/;
    *(_QWORD *)(v11 + 40) = StringLiteral_1546/*":"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 40), v17, v15, v16);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v39, 0LL);
    if ( *(_DWORD *)(v11 + 24) <= 2u
      || (*(_QWORD *)(v11 + 48) = Instance,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 48), (int32_t)Instance, v18, v19),
          *(_DWORD *)(v11 + 24) <= 3u)
      || (v22 = StringLiteral_1546/*":"*/,
          *(_QWORD *)(v11 + 56) = StringLiteral_1546/*":"*/,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 56), v22, v20, v21),
          Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v38, 0LL),
          *(_DWORD *)(v11 + 24) <= 4u) )
    {
LABEL_34:
      sub_1B6432C(Instance, v14);
    }
    *(_QWORD *)(v11 + 64) = Instance;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 64), (int32_t)Instance, v23, v24);
    v25 = System_String__Concat_61388924((System_String_array *)v11, 0LL);
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    klass = Instance->klass;
    v27 = Instance;
    v28 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v30 = sub_1BB60A8(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v30)(v27, v25, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      return 0;
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_31;
    v31 = Instance->klass;
    v32 = Instance;
    v33 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      v34 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v35 = sub_1BB60A8(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v35)(
                                  v32,
                                  v25,
                                  *(_QWORD *)(v35 + 8));
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
    ++v38;
    v11 = sub_1B64170(string___TypeInfo, 5LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v40, 0LL);
    v14 = Instance;
    if ( !v11 )
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
  int32_t v17; // w2
  int32_t v18; // w3
  bool v19; // w20
  __int64 v20; // x23
  System_Collections_Generic_List_object__o *lookup; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x23
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v37; // x24
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  System_Collections_Generic_List_object__c *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x24
  __int64 v43; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v44; // x10
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v49; // x1
  int32_t version; // w8
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  int i; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v58; // [xsp+18h] [xbp-68h] BYREF
  int32_t v59; // [xsp+1Ch] [xbp-64h] BYREF

  v58 = scriptPhase;
  v59 = scriptQuestId;
  if ( (byte_49FC9CB & 1) == 0 )
  {
    sub_1B640C8(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&scriptQuestId);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v12);
    sub_1B640C8(&QuestScriptReleaseEntity_TypeInfo, v13);
    sub_1B640C8(&string___TypeInfo, v14);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v15);
    byte_49FC9CB = 1;
  }
  *checkCnt = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&scriptQuestId,
                                                       *(_QWORD *)&scriptPhase);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)questScriptReleaseEnt, (int32_t)v16, v17, v18);
  v19 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v20 = sub_1B64170(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v59, 0LL);
    if ( !v20 )
      goto LABEL_49;
    if ( !*(_DWORD *)(v20 + 24) )
      goto LABEL_48;
    *(_QWORD *)(v20 + 32) = lookup;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)lookup, v23, v24);
    if ( *(_DWORD *)(v20 + 24) <= 1u )
      goto LABEL_48;
    v27 = StringLiteral_1546/*":"*/;
    *(_QWORD *)(v20 + 40) = StringLiteral_1546/*":"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 40), v27, v25, v26);
    lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&v58, 0LL);
    if ( *(_DWORD *)(v20 + 24) <= 2u
      || (*(_QWORD *)(v20 + 48) = lookup,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 48), (int32_t)lookup, v28, v29),
          *(_DWORD *)(v20 + 24) <= 3u)
      || (v32 = StringLiteral_1546/*":"*/,
          *(_QWORD *)(v20 + 56) = StringLiteral_1546/*":"*/,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 56), v32, v30, v31),
          lookup = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&i, 0LL),
          *(_DWORD *)(v20 + 24) <= 4u) )
    {
LABEL_48:
      sub_1B6432C(lookup, v22);
    }
    *(_QWORD *)(v20 + 64) = lookup;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 64), (int32_t)lookup, v33, v34);
    v35 = System_String__Concat_61388924((System_String_array *)v20, 0LL);
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_49:
      sub_1B64324(lookup);
    klass = lookup->klass;
    v37 = lookup;
    v38 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_15;
      }
      v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v40 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v40)(
            v37,
            v35,
            *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_object__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_49;
    v41 = lookup->klass;
    v42 = lookup;
    v43 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v44 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v41->_1.interfaceOffsets->offset;
      while ( *(v44 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v43;
        v44 += 2;
        if ( !v43 )
          goto LABEL_23;
      }
      v45 = (__int64)(&v41->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v44);
    }
    else
    {
LABEL_23:
      v45 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (System_Collections_Generic_List_object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, System_String_o *, _QWORD))v45)(
                                                            v42,
                                                            v35,
                                                            *(_QWORD *)(v45 + 8));
    if ( lookup
      && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptReleaseEntity_TypeInfo )
        v49 = lookup;
      else
        v49 = 0LL;
      if ( isMainInterlude )
      {
LABEL_28:
        if ( !v49 )
          goto LABEL_49;
        if ( (v49->fields._version & 0x20) == 0 )
          continue;
        goto LABEL_37;
      }
    }
    else
    {
      v49 = 0LL;
      if ( isMainInterlude )
        goto LABEL_28;
    }
    if ( !v49 )
      goto LABEL_49;
    if ( (v49->fields._version & 0x20) != 0 )
      continue;
LABEL_37:
    ++*checkCnt;
    version = v49->fields._version;
    if ( (version & 8) != 0 )
    {
      v19 = 0;
      if ( (version & 0x10) == 0 && LODWORD(v49->fields._syncRoot) == 1 )
      {
        lookup = (System_Collections_Generic_List_object__o *)*questScriptReleaseEnt;
        if ( !*questScriptReleaseEnt )
          goto LABEL_49;
        items = lookup->fields._items;
        v52 = Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__;
        ++lookup->fields._version;
        if ( !items )
          goto LABEL_49;
        size = lookup->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            lookup,
            (Il2CppObject *)v49,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          lookup->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v49;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v49, v46, v47);
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
  DataManager_o *lookup; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  DataManager_o *v30; // x1
  _BOOL4 v31; // w29
  bool v32; // w24
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x22
  DataManager_c *klass; // x8
  DataManager_o *v45; // x23
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0
  DataManager_c *v49; // x8
  DataManager_o *v50; // x23
  __int64 v51; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v52; // x10
  __int64 v53; // x0
  __int64 methodPtr_low; // x10
  DataManager_o *v55; // x22
  const MethodInfo *v56; // x1
  UserQuestMaster_o *v57; // x23
  int v59; // [xsp+0h] [xbp-70h]
  int v60; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v61; // [xsp+8h] [xbp-68h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-64h] BYREF
  System_RuntimeFieldHandle_o v63; // 0:w1.4

  v61 = scriptPhase;
  v62 = scriptQuestId;
  if ( (byte_49FC9CC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, isOpen);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v14);
    sub_1B640C8(&int___TypeInfo, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&QuestScriptReleaseEntity_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&string___TypeInfo, v19);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v20);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v21);
    byte_49FC9CC = 1;
  }
  v22 = (System_Array_o *)sub_1B64170(int___TypeInfo, 7LL);
  v63.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  v23 = (System_Int32_array *)v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v22, v63, 0LL);
  if ( (System_Array__IndexOf_int_(v23, scriptQuestId, (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v60 = 1;
    v26 = sub_1B64170(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v62, 0LL);
    if ( !v26 )
      goto LABEL_57;
    v59 = 1 << kind;
    v30 = lookup;
    v25 = 0;
    v31 = kind == 3 && isMainInterlude;
    v32 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_56;
      *(_QWORD *)(v26 + 32) = v30;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v30, v28, v29);
      if ( *(_DWORD *)(v26 + 24) <= 1u )
        goto LABEL_56;
      v35 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v26 + 40) = StringLiteral_1546/*":"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 40), v35, v33, v34);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v61, 0LL);
      if ( *(_DWORD *)(v26 + 24) <= 2u
        || (*(_QWORD *)(v26 + 48) = lookup,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 48), (int32_t)lookup, v36, v37),
            *(_DWORD *)(v26 + 24) <= 3u)
        || (v40 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v26 + 56) = StringLiteral_1546/*":"*/,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 56), v40, v38, v39),
            lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v60, 0LL),
            *(_DWORD *)(v26 + 24) <= 4u) )
      {
LABEL_56:
        sub_1B6432C(lookup, v30);
      }
      *(_QWORD *)(v26 + 64) = lookup;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 64), (int32_t)lookup, v41, v42);
      v43 = System_String__Concat_61388924((System_String_array *)v26, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      klass = lookup->klass;
      v45 = lookup;
      v46 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v46;
          p_offset += 4;
          if ( !v46 )
            goto LABEL_17;
        }
        v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_17:
        v48 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v48)(v45, v43, *(_QWORD *)(v48 + 8)) & 1) == 0 )
      {
        *isOpen = 1;
        return v25;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      v49 = lookup->klass;
      v50 = lookup;
      v51 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        v52 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v49->_1.interfaceOffsets->offset;
        while ( *(v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v51;
          v52 += 2;
          if ( !v51 )
            goto LABEL_25;
        }
        v53 = (__int64)(&v49->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v52);
      }
      else
      {
LABEL_25:
        v53 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v53)(
                                  v50,
                                  v43,
                                  *(_QWORD *)(v53 + 8));
      if ( lookup
        && (methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestScriptReleaseEntity_TypeInfo )
          v55 = lookup;
        else
          v55 = 0LL;
        if ( v31 )
        {
LABEL_35:
          if ( !v55 )
            goto LABEL_57;
          if ( (BYTE4(v55->fields.m_CancellationTokenSource) & 0x20) == 0 )
            goto LABEL_40;
        }
      }
      else
      {
        v55 = 0LL;
        if ( v31 )
          goto LABEL_35;
      }
      if ( v32 )
        goto LABEL_44;
      if ( !v55 )
        goto LABEL_57;
      if ( (BYTE4(v55->fields.m_CancellationTokenSource) & 0x20) == 0 )
      {
LABEL_44:
        lookup = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_57;
        lookup = (DataManager_o *)DataManager__GetMasterData_object_(
                                    lookup,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v55 )
          goto LABEL_57;
        if ( (HIDWORD(v55->fields.m_CancellationTokenSource) & v59) != 0 )
        {
          v57 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v55, v56) )
          {
            if ( *(_DWORD *)&v55->fields._DispLog != 1 )
              goto LABEL_55;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v57 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v57,
                     (int64_t)lookup,
                     (System_Int32_array *)v55->fields.datalist,
                     0LL) )
              {
                v25 = 1;
                *isOpen = 1;
                return v25;
              }
LABEL_55:
              v25 = 1;
              *isOpen = 0;
              return v25;
            }
LABEL_57:
            sub_1B64324(lookup);
          }
          v25 = 1;
        }
      }
LABEL_40:
      ++v60;
      v26 = sub_1B64170(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v62, 0LL);
      v30 = lookup;
      if ( !v26 )
        goto LABEL_57;
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
  int32_t v14; // w2
  int32_t v15; // w3
  QuestScriptReleaseEntity_o *v16; // x1
  bool v17; // w24
  int v18; // w28
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
  System_String_o *v29; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v31; // x22
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  QuestScriptReleaseEntity_c *v35; // x8
  QuestScriptReleaseEntity_o *v36; // x22
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v38; // x10
  __int64 v39; // x0
  const MethodInfo *v40; // x1
  __int64 methodPtr_low; // x10
  bool v42; // w8
  bool result; // w0
  int v44; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v45; // [xsp+18h] [xbp-58h] BYREF
  int32_t v46; // [xsp+1Ch] [xbp-54h] BYREF

  v45 = scriptPhase;
  v46 = scriptQuestId;
  v6 = kind;
  if ( (byte_49FC9CD & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, isOpen);
    sub_1B640C8(&QuestScriptReleaseEntity_TypeInfo, v9);
    sub_1B640C8(&string___TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v11);
    byte_49FC9CD = 1;
  }
  v44 = 1;
  v12 = sub_1B64170(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v46, 0LL);
  if ( !v12 )
LABEL_31:
    sub_1B64324(lookup);
  v16 = lookup;
  v17 = 0;
  v18 = 1 << v6;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_35;
    *(_QWORD *)(v12 + 32) = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)v16, v14, v15);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      goto LABEL_35;
    v21 = StringLiteral_1546/*":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_1546/*":"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 40), v21, v19, v20);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v45, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u
      || (*(_QWORD *)(v12 + 48) = lookup,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 48), (int32_t)lookup, v22, v23),
          *(_DWORD *)(v12 + 24) <= 3u)
      || (v26 = StringLiteral_1546/*":"*/,
          *(_QWORD *)(v12 + 56) = StringLiteral_1546/*":"*/,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 56), v26, v24, v25),
          lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v44, 0LL),
          *(_DWORD *)(v12 + 24) <= 4u) )
    {
LABEL_35:
      sub_1B6432C(lookup, v16);
    }
    *(_QWORD *)(v12 + 64) = lookup;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 64), (int32_t)lookup, v27, v28);
    v29 = System_String__Concat_61388924((System_String_array *)v12, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
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
      v34 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v34)(
            v31,
            v29,
            *(_QWORD *)(v34 + 8)) & 1) == 0 )
    {
      v42 = 0;
      goto LABEL_34;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_31;
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
      v39 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v39)(
                                             v36,
                                             v29,
                                             *(_QWORD *)(v39 + 8));
    if ( !lookup )
      goto LABEL_31;
    methodPtr_low = LOBYTE(QuestScriptReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_31;
    }
    if ( (lookup->fields.flag & v18) != 0 )
    {
      v17 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v40) )
        break;
    }
    ++v44;
    v12 = sub_1B64170(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v46, 0LL);
    v16 = lookup;
    if ( !v12 )
      goto LABEL_31;
  }
  v42 = 1;
LABEL_34:
  result = v17;
  *isOpen = v42;
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

  if ( (byte_49FC9C9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49FC9C9 = 1;
  }
  PK = (Il2CppObject *)QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}