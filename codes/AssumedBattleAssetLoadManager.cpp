void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00B78 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v3);
    byte_4A00B78 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.assetSearcherList, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4A00B72 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_BattleMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v2);
    sub_1B64A00(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v3);
    byte_4A00B72 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1B64C5C(0LL, v5);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_30D6A00 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  struct System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v23; // x0
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v25; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  __int64 v31; // x9
  int *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  Il2CppObject *Entity; // x0
  __int64 v46; // x1
  System_String_o *monitor; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x1
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A00B77 & 1) == 0 )
  {
    sub_1B64A00(&BattleEffectUtility_TypeInfo, resultParam);
    sub_1B64A00(&Method_DataManager_GetMaster_EffectMaster___, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v8);
    sub_1B64A00(&System_IDisposable_TypeInfo, v9);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1B64A00(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v16);
    sub_1B64A00(&AssumedBattleAssetLoadManager___c_TypeInfo, v17);
    byte_4A00B77 = 1;
  }
  path = 0LL;
  name = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v21 = Master_object;
  EffectIdHashSet = resultParam->fields.EffectIdHashSet;
  v23 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v23 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__16_0 = v23->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v25,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v27, v28);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_2E796BC *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1B64C5C(Master_object, v20);
  klass = Master_object->klass;
  v30 = Master_object;
  v31 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_17;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v33 = sub_1BB69E0(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  if ( !v35 )
    sub_1B64C5C(0LL, v34);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_24;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_24:
      v39 = sub_1BB69E0(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_31;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_31:
      v43 = sub_1BB69E0(v35, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    if ( !v21 )
      sub_1B64C5C(v44, (unsigned int)v44);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v21,
               v44,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1B64C5C(0LL, v46);
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v18 )
          sub_1B64C5C(IsNullOrEmpty, v49);
        v52 = (Il2CppObject *)path;
        items = v18->fields._items;
        v54 = Method_System_Collections_Generic_List_string__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1B64C5C(IsNullOrEmpty, v52);
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v52,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v56[4] = (Il2CppClass *)v52;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
        }
      }
    }
  }
  v57 = *(_QWORD *)v35;
  v58 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_48;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_48:
    v60 = sub_1BB69E0(v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v60)(v35, *(_QWORD *)(v60 + 8));
  return (System_Collections_Generic_List_string__o *)v18;
}


void __fastcall AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Perf_k__BackingField = perf;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)perf, (int32_t)method, v3);
}


bool __fastcall AssumedBattleAssetLoadManager__IsPreloading(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssumedBattleAssetLoadManager___c_c *v6; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v9; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A00B73 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, method);
    sub_1B64A00(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v3);
    sub_1B64A00(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v4);
    sub_1B64A00(&AssumedBattleAssetLoadManager___c_TypeInfo, v5);
    byte_4A00B73 = 1;
  }
  v6 = AssumedBattleAssetLoadManager___c_TypeInfo;
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v6 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v6->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__10_0,
      v9,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v11, v12);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_2E27164 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
}


void __fastcall AssumedBattleAssetLoadManager__Preload(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssumedBattleAssetLoadManager_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  _QWORD *v11; // x9
  __int64 assetSearcherList_low; // x10
  BattlePerformance_c **v13; // x8

  v5 = this;
  if ( (byte_4A00B74 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1B64A00(
                                                &Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
                                                assetSearcher);
    byte_4A00B74 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v5;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&assetSearcher->fields.manager, (int32_t)v5, (int32_t)method, v3);
  AssumedBattleAssetLoadManager__PreloadLocal(v5, assetSearcher, v6);
  if ( !AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(assetSearcher, v7) )
    return;
  this = (AssumedBattleAssetLoadManager_o *)v5->fields.assetSearcherList;
  if ( !this
    || (Perf_k__BackingField = this->fields._Perf_k__BackingField,
        v11 = Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
        ++HIDWORD(this->fields.assetSearcherList),
        !Perf_k__BackingField) )
  {
LABEL_11:
    sub_1B64C5C(this, assetSearcher);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v13[4] = (BattlePerformance_c *)assetSearcher;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)assetSearcher, v8, v9);
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x20
  System_Collections_Generic_List_TSource__o *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  AssumedBattleAssetSearcherBase_o **v29; // x21
  __int64 v30; // x1
  __int64 v31; // x22
  const MethodInfo *v32; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x24
  System_Collections_Generic_List_object__o *v36; // x23
  AssumedBattleAssetLoadManager___c_c *v37; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v39; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x24
  System_Func_T__TResult__o *v44; // x25
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  System_Collections_Generic_List_object__o *v46; // x22
  int v47; // w8
  AssetLoader_LoadEndDataHandler_o *v48; // x25
  AssetLoader_LoadEndDataHandler_o **v49; // x24
  int32_t v50; // w2
  int32_t v51; // w3
  _BOOL8 v52; // x0
  __int64 v53; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v55; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v58; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x2
  System_Action_o **v62; // x22
  _BOOL8 v63; // x0
  __int64 v64; // x1
  struct BattlePerformance_o *v65; // x8
  Il2CppObject *v66; // x23
  System_Action_o *v67; // x25
  AssetStorageLoadWrapper_o *v68; // x24
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A00B76 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, assetSearcher);
    sub_1B64A00(&Method_BattleDataDefine_AddUniqueCameraPath__, v5);
    sub_1B64A00(&BattleDataDefine_TypeInfo, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_int__string___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_string___, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v12);
    sub_1B64A00(&System_Func_int__string__TypeInfo, v13);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__AddRange__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__GetEnumerator__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1B64A00(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, v19);
    sub_1B64A00(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v20);
    sub_1B64A00(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__, v21);
    sub_1B64A00(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v22);
    sub_1B64A00(&AssumedBattleAssetLoadManager___c_TypeInfo, v23);
    byte_4A00B76 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v24 = sub_1B64C4C(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_47;
  *(_QWORD *)(v24 + 24) = assetSearcher;
  v29 = (AssumedBattleAssetSearcherBase_o **)(v24 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)assetSearcher, v27, v28);
  if ( !*(_QWORD *)(v24 + 24) )
    sub_1B64C5C(0LL, v30);
  v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v24 + 24) + 376LL))(
          *(_QWORD *)(v24 + 24),
          *(_QWORD *)(**(_QWORD **)(v24 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v31,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v31,
                                      v32);
  if ( !v31 )
    sub_1B64C5C(EffectPathListFromAnalyzedParam, v34);
  v35 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v31 + 32);
  v36 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v37 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v37 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__14_1 = v37->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__14_1, v39, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v41, v42);
  }
  v43 = System_Linq_Enumerable__Where_int_(
          v35,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_2E796BC *)Method_System_Linq_Enumerable_Where_int___);
  v44 = (System_Func_T__TResult__o *)sub_1B64C4C(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v44, 0LL, Method_BattleDataDefine_AddUniqueCameraPath__, 0LL);
  v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v43,
                                                         (System_Func_TSource__TResult__o *)v44,
                                                         (const MethodInfo_2E698C0 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v36 )
    sub_1B64C5C(v45, v45);
  System_Collections_Generic_List_object___AddRange(
    v36,
    v45,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_string__AddRange__);
  v25 = System_Linq_Enumerable__ToList_object_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v31 + 24),
          (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_string___);
  v46 = (System_Collections_Generic_List_object__o *)v25;
  if ( !v25 )
    goto LABEL_47;
  v47 = v25->fields._size + v36->fields._size;
  *(_DWORD *)(v24 + 16) = v47;
  if ( v47 < 1 )
    return;
  if ( !*v29 )
LABEL_47:
    sub_1B64C5C(v25, v26);
  (*v29)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v24 + 20) = 0;
  v48 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v48,
    (Il2CppObject *)v24,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  *(_QWORD *)(v24 + 32) = v48;
  v49 = (AssetLoader_LoadEndDataHandler_o **)(v24 + 32);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v48, v50, v51);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    v36,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v74 = v73;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v52 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1B64C5C(v52, v53);
    v55 = BattleDataDefine_TypeInfo;
    current = v74.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v58 = *v49;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1B64C5C(v55, v53);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v58,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0LL);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v29 )
        sub_1B64C5C(0LL, v60);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v29, (System_String_o *)current, v61);
    }
    else
    {
      if ( !*v49 )
        sub_1B64C5C(Wrapper__LoadAssetStorage, v60);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))(*v49)->fields.m_target)(
        (*v49)->fields.original_method_info,
        0LL,
        *(_QWORD *)&(*v49)->fields.extra_arg);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    v46,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v62 = (System_Action_o **)(v24 + 40);
  v74 = v73;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v63 )
      break;
    v65 = this->fields._Perf_k__BackingField;
    if ( !v65 )
      sub_1B64C5C(v63, v64);
    v66 = v74.fields._current;
    v67 = *v62;
    v68 = v65->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v62 )
    {
      v67 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        v67,
        (Il2CppObject *)v24,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0LL);
      *v62 = v67;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 40), (int32_t)v67, v69, v70);
    }
    if ( !v68 )
      sub_1B64C5C(v63, v64);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v68, (System_String_o *)v66, v67, 1, 0LL);
    if ( !*v29 )
      sub_1B64C5C(0LL, v71);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v29, (System_String_o *)v66, v72);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *assetSearcherList; // x20
  System_Action_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4A00B75 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, method);
    sub_1B64A00(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v5);
    byte_4A00B75 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v7 = (System_Action_object__o *)sub_1B64C4C(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0LL);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v7,
          (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v10 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_1B64C5C(v8, v9);
  }
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
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
    sub_1B64C64(this, assetSearcher);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_17:
    sub_1B64C5C(this, assetSearcher);
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
        const MethodInfo_2E1E784 *method)
{
  const MethodInfo_2E65514 **rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x21
  Il2CppClass *_2_System_Action_T; // x8
  System_Action_object__o *v9; // x22
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_6_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppClass *v12; // x0
  System_Func_object__bool__o *v13; // x21
  Il2CppClass *v14; // x0
  Il2CppClass *v15; // x0
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppClass *v19; // x0
  Il2CppClass *v20; // x0

  rgctx_data = (const MethodInfo_2E65514 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B64A00(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, method);
    sub_1B64A00(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v5);
    sub_1B64A00(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v6);
    rgctx_data = (const MethodInfo_2E65514 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6938(method);
      rgctx_data = (const MethodInfo_2E65514 **)method->rgctx_data;
    }
  }
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (BYTE5(_2_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1BB68DC(method->rgctx_data->_2_System_Action_T_);
  v9 = (System_Action_object__o *)sub_1B64C4C(_2_System_Action_T);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_3148AE0 *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v7,
    (System_Action_T__o *)v9,
    (const MethodInfo_2E29154 *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(_6_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1BB68DC(_6_AssumedBattleAssetLoadManager___c__12_T);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T);
  v12 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1BB68DC(v12);
  v13 = (System_Func_object__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1BB68DC(v14);
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    v15 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1BB68DC(v15);
    v16 = *(Il2CppObject **)v15->static_fields;
    v13 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      v16,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0LL);
    v19 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1BB68DC(v19);
    *((_QWORD *)v19->static_fields + 1) = v13;
    v20 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1BB68DC(v20);
    sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v20->static_fields + 8), (int32_t)v13, v17, v18);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v13,
    (const MethodInfo_2E2B610 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1B64C5C(this, method);
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

  this->fields._Perf_k__BackingField = value;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_HashSet_T__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_HashSet_int__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A00B79 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_string___ctor__, method);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    sub_1B64A00(&System_Collections_Generic_HashSet_string__TypeInfo, v5);
    byte_4A00B79 = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_HashSet_T__o *)sub_1B64C4C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v9,
    (const MethodInfo_336C6C4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.AudioAssetNameHashSet, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v12,
    (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v12;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.cameraIdHashSet, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A00B7A & 1) == 0 )
  {
    sub_1B64A00(&AssumedBattleAssetLoadManager___c_TypeInfo, v1);
    byte_4A00B7A = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, 0LL);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool __fastcall AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_2FF9CBC *method)
{
  AssumedBattleAssetLoadManager___c__12_T__c *klass; // x0
  __int64 _0_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  AssumedBattleAssetLoadManager___c__12_T__c *v7; // x0
  __int64 _2_AssumedBattleAssetLoadManager___c__12_T; // x0
  AssumedBattleAssetLoadManager___c__12_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BB68DC(klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = (__int64)klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(_0_AssumedBattleAssetLoadManager___c__12_T + 309) & 1) == 0 )
    _0_AssumedBattleAssetLoadManager___c__12_T = sub_1BB68DC(_0_AssumedBattleAssetLoadManager___c__12_T);
  v4 = (Il2CppObject *)sub_1B64C4C(_0_AssumedBattleAssetLoadManager___c__12_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB68DC(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BB68DC(v7);
  _2_AssumedBattleAssetLoadManager___c__12_T = (__int64)v7->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(_2_AssumedBattleAssetLoadManager___c__12_T + 309) & 1) == 0 )
    _2_AssumedBattleAssetLoadManager___c__12_T = sub_1BB68DC(_2_AssumedBattleAssetLoadManager___c__12_T);
  **(_QWORD **)(_2_AssumedBattleAssetLoadManager___c__12_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BB68DC(v9);
  v10 = (__int64)v9->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB68DC(v10);
  sub_1B649A4(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_2FF9D78 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_2FF9D80 *method)
{
  Il2CppClass *_3_T; // x8

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE5(_3_T->vtable[0].methodPtr) & 1) == 0 )
    _3_T = (Il2CppClass *)sub_1BB68DC(method->klass->rgctx_data->_3_T);
  return sub_1B64B3C(x, _3_T) != 0;
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
      sub_1B64C5C(this, _);
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
    sub_1B64C5C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onLoadFinished->fields.m_target)(
    onLoadFinished->fields.original_method_info,
    0LL,
    *(_QWORD *)&onLoadFinished->fields.extra_arg);
}