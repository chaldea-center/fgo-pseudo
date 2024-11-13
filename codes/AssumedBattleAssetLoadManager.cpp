void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B183B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v5, v6);
    byte_4B183B6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetSearcherList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4B183B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v5, v6);
    byte_4B183B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v8);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_31B30A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x19
  __int64 v34; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x21
  struct System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v41; // x0
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v43; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x20
  __int64 v53; // x9
  int *p_offset; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x20
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  Il2CppObject *Entity; // x0
  __int64 v68; // x1
  System_String_o *monitor; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  Il2CppObject *v78; // x1
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B183B5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, resultParam, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EffectMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v11, v12);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v29, v30);
    sub_1BCA7E0(&AssumedBattleAssetLoadManager___c_TypeInfo, v31, v32);
    byte_4B183B5 = 1;
  }
  path = 0LL;
  name = 0LL;
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       resultParam,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v39 = Master_object;
  EffectIdHashSet = resultParam->fields.EffectIdHashSet;
  v41 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo, v36);
    v41 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__16_0 = v41->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v36);
      v41 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v36, v37, v38);
    System_Func_int__bool____ctor(
      _9__16_0,
      v43,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1BCAA3C(Master_object, v36);
  klass = Master_object->klass;
  v52 = Master_object;
  v53 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_17;
    }
    v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v55 = sub_1C1C7C0(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v57 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
  if ( !v57 )
    sub_1BCAA3C(0LL, v56);
  while ( 1 )
  {
    v58 = *(_QWORD *)v57;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_24;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_24:
      v61 = sub_1C1C7C0(v57, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v57;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v64 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_31;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_31:
      v65 = sub_1C1C7C0(v57, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
    if ( !v39 )
      sub_1BCAA3C(v66, (unsigned int)v66);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v39,
               v66,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1BCAA3C(0LL, v68);
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v68);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v33 )
          sub_1BCAA3C(IsNullOrEmpty, v71);
        v78 = (Il2CppObject *)path;
        items = v33->fields._items;
        v80 = Method_System_Collections_Generic_List_string__Add__;
        ++v33->fields._version;
        if ( !items )
          sub_1BCAA3C(IsNullOrEmpty, v78);
        size = v33->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            v78,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v82[4] = (Il2CppClass *)v78;
          sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 4), (int64_t)v78, v72, v73, v74, v75, v76, v77);
        }
      }
    }
  }
  v83 = *(_QWORD *)v57;
  v84 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
  {
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_48;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_48:
    v86 = sub_1C1C7C0(v57, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v86)(v57, *(_QWORD *)(v86 + 8));
  return (System_Collections_Generic_List_string__o *)v33;
}


void __fastcall AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = perf;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)perf, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall AssumedBattleAssetLoadManager__IsPreloading(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssumedBattleAssetLoadManager___c_c *v11; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v14; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B183B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, method, v2);
    sub_1BCA7E0(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v7, v8);
    sub_1BCA7E0(&AssumedBattleAssetLoadManager___c_TypeInfo, v9, v10);
    byte_4B183B1 = 1;
  }
  v11 = AssumedBattleAssetLoadManager___c_TypeInfo;
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo, method);
    v11 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v11->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                                method,
                                                v2,
                                                v3);
    System_Func_object__bool____ctor(
      _9__10_0,
      v14,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
}


void __fastcall AssumedBattleAssetLoadManager__Preload(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssumedBattleAssetLoadManager_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  _QWORD *v19; // x9
  __int64 assetSearcherList_low; // x10
  BattlePerformance_c **v21; // x8

  v9 = this;
  if ( (byte_4B183B2 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1BCA7E0(
                                                &Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
                                                assetSearcher,
                                                method);
    byte_4B183B2 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&assetSearcher->fields.manager,
    (int64_t)v9,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  AssumedBattleAssetLoadManager__PreloadLocal(v9, assetSearcher, v10);
  if ( !AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(assetSearcher, v11) )
    return;
  this = (AssumedBattleAssetLoadManager_o *)v9->fields.assetSearcherList;
  if ( !this
    || (Perf_k__BackingField = this->fields._Perf_k__BackingField,
        v19 = Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
        ++HIDWORD(this->fields.assetSearcherList),
        !Perf_k__BackingField) )
  {
LABEL_11:
    sub_1BCAA3C(this, assetSearcher);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v21[4] = (BattlePerformance_c *)assetSearcher;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)assetSearcher, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
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
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x20
  System_Collections_Generic_List_TSource__o *v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  AssumedBattleAssetSearcherBase_o **v53; // x21
  __int64 v54; // x1
  __int64 v55; // x22
  const MethodInfo *v56; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x24
  System_Collections_Generic_List_object__o *v62; // x23
  AssumedBattleAssetLoadManager___c_c *v63; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v65; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x24
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Func_T__TResult__o *v77; // x25
  System_Collections_Generic_IEnumerable_T__o *v78; // x0
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x22
  int v82; // w8
  AssetLoader_LoadEndDataHandler_o *v83; // x25
  AssetLoader_LoadEndDataHandler_o **v84; // x24
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  _BOOL8 v91; // x0
  __int64 v92; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v94; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v97; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v99; // x1
  const MethodInfo *v100; // x2
  System_Action_o **v101; // x22
  _BOOL8 v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  struct BattlePerformance_o *v106; // x8
  Il2CppObject *v107; // x23
  System_Action_o *v108; // x25
  AssetStorageLoadWrapper_o *v109; // x24
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  __int64 v116; // x1
  const MethodInfo *v117; // x2
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B183B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, assetSearcher, method);
    sub_1BCA7E0(&Method_BattleDataDefine_AddUniqueCameraPath__, v6, v7);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__string___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v20, v21);
    sub_1BCA7E0(&System_Func_int__string__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v30, v31);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, v34, v35);
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v36, v37);
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__, v38, v39);
    sub_1BCA7E0(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v40, v41);
    sub_1BCA7E0(&AssumedBattleAssetLoadManager___c_TypeInfo, v42, v43);
    byte_4B183B4 = 1;
  }
  memset(&v119, 0, sizeof(v119));
  v44 = sub_1BCAA2C(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, assetSearcher, method, v3);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_47;
  *(_QWORD *)(v44 + 24) = assetSearcher;
  v53 = (AssumedBattleAssetSearcherBase_o **)(v44 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 24), (int64_t)assetSearcher, v47, v48, v49, v50, v51, v52);
  if ( !*(_QWORD *)(v44 + 24) )
    sub_1BCAA3C(0LL, v54);
  v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v44 + 24) + 376LL))(
          *(_QWORD *)(v44 + 24),
          *(_QWORD *)(**(_QWORD **)(v44 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v55,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v55,
                                      v56);
  if ( !v55 )
    sub_1BCAA3C(EffectPathListFromAnalyzedParam, v58);
  v61 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v55 + 32);
  v62 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v63 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo, v58);
    v63 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__14_1 = v63->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63, v58);
      v63 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v63->static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v58, v59, v60);
    System_Func_int__bool____ctor(_9__14_1, v65, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_1,
      (int64_t)_9__14_1,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  v73 = System_Linq_Enumerable__Where_int_(
          v61,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v77 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__string__TypeInfo, v74, v75, v76);
  System_Func_int__object____ctor(v77, 0LL, Method_BattleDataDefine_AddUniqueCameraPath__, 0LL);
  v78 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v73,
                                                         (System_Func_TSource__TResult__o *)v77,
                                                         (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v62 )
    sub_1BCAA3C(v78, v78);
  System_Collections_Generic_List_object___AddRange(
    v62,
    v78,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
  v45 = System_Linq_Enumerable__ToList_object_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v55 + 24),
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
  v81 = (System_Collections_Generic_List_object__o *)v45;
  if ( !v45 )
    goto LABEL_47;
  v82 = v45->fields._size + v62->fields._size;
  *(_DWORD *)(v44 + 16) = v82;
  if ( v82 < 1 )
    return;
  if ( !*v53 )
LABEL_47:
    sub_1BCAA3C(v45, v46);
  (*v53)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v44 + 20) = 0;
  v83 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v46, v79, v80);
  AssetLoader_LoadEndDataHandler___ctor(
    v83,
    (Il2CppObject *)v44,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  *(_QWORD *)(v44 + 32) = v83;
  v84 = (AssetLoader_LoadEndDataHandler_o **)(v44 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)v83, v85, v86, v87, v88, v89, v90);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v118,
    v62,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v119 = v118;
  while ( 1 )
  {
    v91 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v119,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v91 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1BCAA3C(v91, v92);
    v94 = BattleDataDefine_TypeInfo;
    current = v119.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v97 = *v84;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v92);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1BCAA3C(v94, v92);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v97,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0LL);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v53 )
        sub_1BCAA3C(0LL, v99);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v53, (System_String_o *)current, v100);
    }
    else
    {
      if ( !*v84 )
        sub_1BCAA3C(Wrapper__LoadAssetStorage, v99);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))(*v84)->fields.m_target)(
        (*v84)->fields.original_method_info,
        0LL,
        *(_QWORD *)&(*v84)->fields.extra_arg);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v119,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v118,
    v81,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v101 = (System_Action_o **)(v44 + 40);
  v119 = v118;
  while ( 1 )
  {
    v102 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v119,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v102 )
      break;
    v106 = this->fields._Perf_k__BackingField;
    if ( !v106 )
      sub_1BCAA3C(v102, v103);
    v107 = v119.fields._current;
    v108 = *v101;
    v109 = v106->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v101 )
    {
      v108 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v103, v104, v105);
      System_Action___ctor(
        v108,
        (Il2CppObject *)v44,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0LL);
      *v101 = v108;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 40), (int64_t)v108, v110, v111, v112, v113, v114, v115);
    }
    if ( !v109 )
      sub_1BCAA3C(v102, v103);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v109, (System_String_o *)v107, v108, 1, 0LL);
    if ( !*v53 )
      sub_1BCAA3C(0LL, v116);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v53, (System_String_o *)v107, v117);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v119,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *assetSearcherList; // x20
  System_Action_object__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v15; // x8
  int32_t size; // w2
  int v17; // w9

  if ( (byte_4B183B3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v9, v10);
    byte_4B183B3 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AssumedBattleAssetSearcherBase__TypeInfo, method, v2, v3);
  System_Action_object____ctor(v12, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0LL);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v12,
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v15 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_1BCAA3C(v13, v14);
  }
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_o *v3; // x19
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x8
  AssumedBattleAssetLoadManager_o *v6; // x21
  unsigned __int64 v7; // x22
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v9; // x8
  AssumedBattleAssetLoadManager_o *v10; // x20
  unsigned __int64 v11; // x21
  struct BattlePerformance_o *v12; // x8

  if ( !assetSearcher )
    goto LABEL_17;
  v3 = this;
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
    goto LABEL_17;
  assetSearcherList = this->fields.assetSearcherList;
  v6 = this;
  if ( (int)assetSearcherList >= 1 )
  {
    v7 = 0LL;
    while ( v7 < (unsigned int)assetSearcherList )
    {
      Perf_k__BackingField = v3->fields._Perf_k__BackingField;
      if ( !Perf_k__BackingField )
        goto LABEL_17;
      this = (AssumedBattleAssetLoadManager_o *)Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !this )
        goto LABEL_17;
      AssetStorageLoadWrapper__ReleaseAssetStorage(
        (AssetStorageLoadWrapper_o *)this,
        *((System_String_o **)&v6[1].klass + v7),
        0LL);
      LODWORD(assetSearcherList) = v6->fields.assetSearcherList;
      if ( (__int64)++v7 >= (int)assetSearcherList )
        goto LABEL_9;
    }
LABEL_18:
    sub_1BCAA44(this, assetSearcher);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_17:
    sub_1BCAA3C(this, assetSearcher);
  v9 = this->fields.assetSearcherList;
  v10 = this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( v11 < (unsigned int)v9 )
    {
      v12 = v3->fields._Perf_k__BackingField;
      if ( !v12 )
        goto LABEL_17;
      this = (AssumedBattleAssetLoadManager_o *)v12->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !this )
        goto LABEL_17;
      AssetStorageLoadWrapper__ReleaseAudioAssetStorage(
        (AssetStorageLoadWrapper_o *)this,
        *((System_String_o **)&v10[1].klass + v11),
        0LL);
      LODWORD(v9) = v10->fields.assetSearcherList;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
    goto LABEL_18;
  }
}


void __fastcall AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_2EF52B4 *method)
{
  __int64 v2; // x2
  const MethodInfo_2F3AEF4 **rgctx_data; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Collections_Generic_IEnumerable_T__o *v14; // x21
  long double v15; // q0
  Il2CppClass *_2_System_Action_T; // x8
  System_Action_object__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  long double inited; // q0
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_6_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppClass *v24; // x0
  System_Func_object__bool__o *v25; // x21
  Il2CppClass *v26; // x0
  Il2CppClass *v27; // x0
  Il2CppObject *v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  long double v35; // q0
  Il2CppClass *v36; // x0
  Il2CppClass *v37; // x0

  rgctx_data = (const MethodInfo_2F3AEF4 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v6, v7);
    sub_1BCA7E0(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v8, v9);
    rgctx_data = (const MethodInfo_2F3AEF4 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v10);
      rgctx_data = (const MethodInfo_2F3AEF4 **)method->rgctx_data;
    }
  }
  v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                         (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                         *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (BYTE5(_2_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1C1C6BC(v15);
  v17 = (System_Action_object__o *)sub_1BCAA2C(_2_System_Action_T, v11, v12, v13);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_3224C8C *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)v17,
    (const MethodInfo_2EFFC84 *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(_6_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1C1C6BC(inited);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T, v18);
  v24 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
    v24 = (Il2CppClass *)sub_1C1C6BC(inited);
  v25 = (System_Func_object__bool__o *)*((_QWORD *)v24->static_fields + 1);
  if ( !v25 )
  {
    v26 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v26->vtable[0].methodPtr) & 1) == 0 )
      v26 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v26->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v26, v18);
    v27 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v27->vtable[0].methodPtr) & 1) == 0 )
      v27 = (Il2CppClass *)sub_1C1C6BC(inited);
    v28 = *(Il2CppObject **)v27->static_fields;
    v25 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                           v18,
                                           v19,
                                           v20);
    System_Func_object__bool____ctor(
      v25,
      v28,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0LL);
    v36 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v36->vtable[0].methodPtr) & 1) == 0 )
      v36 = (Il2CppClass *)sub_1C1C6BC(v35);
    *((_QWORD *)v36->static_fields + 1) = v25;
    v37 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v37->vtable[0].methodPtr) & 1) == 0 )
      v37 = (Il2CppClass *)sub_1C1C6BC(v35);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)v37->static_fields + 8),
      (int64_t)v25,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v25,
    (const MethodInfo_2F0233C *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1BCAA3C(this, method);
  return Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
}


BattlePerformance_o *__fastcall AssumedBattleAssetLoadManager__get_Perf(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall AssumedBattleAssetLoadManager__set_Perf(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_HashSet_int__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_HashSet_T__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_HashSet_int__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B183B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_string__TypeInfo, v9, v10);
    byte_4B183B7 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_string__TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20);
  System_Collections_Generic_HashSet_object____ctor(
    v21,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.AudioAssetNameHashSet,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v31 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_HashSet_int____ctor(
    v31,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cameraIdHashSet, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B183B8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssumedBattleAssetLoadManager___c_TypeInfo, v1, v2);
    byte_4B183B8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AssumedBattleAssetLoadManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssumedBattleAssetLoadManager___c___ctor(
        AssumedBattleAssetLoadManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c___GetEffectPathListFromAnalyzedParam_b__16_0(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


bool __fastcall AssumedBattleAssetLoadManager___c___IsPreloading_b__10_0(
        AssumedBattleAssetLoadManager___c_o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool __fastcall AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_30D3D60 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_30D3E1C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_30D3E24 *method)
{
  __int64 _3_T; // x8

  _3_T = (__int64)method->klass->rgctx_data->_3_T;
  if ( (*(_BYTE *)(_3_T + 309) & 1) == 0 )
    _3_T = sub_1C1C6BC();
  return sub_1BCA91C(x, _3_T) != 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__0(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  int32_t loadCountMax; // w9
  int32_t v4; // w8
  struct AssumedBattleAssetSearcherBase_o *assetSearcher; // x8

  loadCountMax = this->fields.loadCountMax;
  v4 = this->fields.loadCount + 1;
  this->fields.loadCount = v4;
  if ( loadCountMax <= v4 )
  {
    assetSearcher = this->fields.assetSearcher;
    if ( !assetSearcher )
      sub_1BCAA3C(this, _);
    assetSearcher->fields._LoadStatus_k__BackingField = 2;
  }
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__2(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o *onLoadFinished; // x8

  onLoadFinished = this->fields.onLoadFinished;
  if ( !onLoadFinished )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onLoadFinished->fields.m_target)(
    onLoadFinished->fields.original_method_info,
    0LL,
    *(_QWORD *)&onLoadFinished->fields.extra_arg);
}