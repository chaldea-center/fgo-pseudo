void AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB87CE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
    byte_4CB87CE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetSearcherList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleEntity_o *AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1

  if ( (byte_4CB87C8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    byte_4CB87C8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v3);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_33FB6E4 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  struct System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v9; // x0
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v11; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  Il2CppObject *Entity; // x0
  __int64 v32; // x1
  System_String_o *monitor; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB87CD & 1) == 0 )
  {
    sub_1C6BA08(&BattleEffectUtility_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__);
    sub_1C6BA08(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CB87CD = 1;
  }
  path = 0;
  name = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v7 = Master_object;
  EffectIdHashSet = resultParam->fields.EffectIdHashSet;
  v9 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v9 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__16_0 = v9->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v11,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v13, v14);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_3181DBC *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1C6BC60(Master_object, v6);
  klass = Master_object->klass;
  v16 = Master_object;
  v17 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v19 = sub_1C41D90(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1C6BC60(0, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_24;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_24:
      v25 = sub_1C41D90(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v28 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_31;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_31:
      v29 = sub_1C41D90(v21, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !v7 )
      sub_1C6BC60(v30, (unsigned int)v30);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v30,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C6BC60(0, v32);
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, 0);
      IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0);
      if ( !IsNullOrEmpty )
      {
        if ( !v4 )
          sub_1C6BC60(IsNullOrEmpty, v35);
        v38 = (Il2CppObject *)path;
        items = v4->fields._items;
        v40 = Method_System_Collections_Generic_List_string__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C6BC60(IsNullOrEmpty, v38);
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v38,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v38;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
        }
      }
    }
  }
  v43 = *(_QWORD *)v21;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_48;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_48:
    v46 = sub_1C41D90(v21, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v21, *(_QWORD *)(v46 + 8));
  return (System_Collections_Generic_List_string__o *)v4;
}


void AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Perf_k__BackingField = perf;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)perf, (int32_t)method, v3);
}


bool AssumedBattleAssetLoadManager__IsPreloading(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  AssumedBattleAssetLoadManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v6; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB87C9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
    sub_1C6BA08(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    sub_1C6BA08(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__);
    sub_1C6BA08(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CB87C9 = 1;
  }
  v3 = AssumedBattleAssetLoadManager___c_TypeInfo;
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v3 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v3->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__10_0, v6, Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, 0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_3124430 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
}


void AssumedBattleAssetLoadManager__Preload(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssumedBattleAssetLoadManager_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  _QWORD *v11; // x9
  __int64 assetSearcherList_low; // x10
  BattlePerformance_c **v13; // x8

  v5 = this;
  if ( (byte_4CB87CA & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
    byte_4CB87CA = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&assetSearcher->fields.manager, (int32_t)v5, (int32_t)method, v3);
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
    sub_1C6BC60(this, assetSearcher);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v13[4] = (BattlePerformance_c *)assetSearcher;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)assetSearcher, v8, v9);
  }
}


void AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_TSource__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  AssumedBattleAssetSearcherBase_o **v10; // x21
  __int64 v11; // x1
  __int64 v12; // x22
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x24
  System_Collections_Generic_List_object__o *v17; // x23
  AssumedBattleAssetLoadManager___c_c *v18; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v20; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  System_Func_T__TResult__o *v25; // x25
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x22
  int v28; // w8
  AssetLoader_LoadEndDataHandler_o *v29; // x25
  AssetLoader_LoadEndDataHandler_o **v30; // x24
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v36; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v39; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  System_Action_o **v43; // x22
  _BOOL8 v44; // x0
  __int64 v45; // x1
  struct BattlePerformance_o *v46; // x8
  Il2CppObject *v47; // x23
  System_Action_o *v48; // x25
  AssetStorageLoadWrapper_o *v49; // x24
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB87CC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleDataDefine_AddUniqueCameraPath__);
    sub_1C6BA08(&BattleDataDefine_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&System_Func_int__string__TypeInfo);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__);
    sub_1C6BA08(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__);
    sub_1C6BA08(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__);
    sub_1C6BA08(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
    sub_1C6BA08(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CB87CC = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v5 = sub_1C6BC54(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 24) = assetSearcher;
  v10 = (AssumedBattleAssetSearcherBase_o **)(v5 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)assetSearcher, v8, v9);
  if ( !*(_QWORD *)(v5 + 24) )
    sub_1C6BC60(0, v11);
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 24) + 376LL))(
          *(_QWORD *)(v5 + 24),
          *(_QWORD *)(**(_QWORD **)(v5 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v12,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v12,
                                      v13);
  if ( !v12 )
    sub_1C6BC60(EffectPathListFromAnalyzedParam, v15);
  v16 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v12 + 32);
  v17 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v18 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v18 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__14_1 = v18->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__14_1, v20, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_int_(
          v16,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_3181DBC *)Method_System_Linq_Enumerable_Where_int___);
  v25 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v25, 0, Method_BattleDataDefine_AddUniqueCameraPath__, 0);
  v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v24,
                                                         (System_Func_TSource__TResult__o *)v25,
                                                         (const MethodInfo_316EE54 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v17 )
    sub_1C6BC60(v26, v26);
  System_Collections_Generic_List_object___AddRange(
    v17,
    v26,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
  v6 = System_Linq_Enumerable__ToList_object_(
         *(System_Collections_Generic_IEnumerable_TSource__o **)(v12 + 24),
         (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_string___);
  v27 = (System_Collections_Generic_List_object__o *)v6;
  if ( !v6 )
    goto LABEL_47;
  v28 = v6->fields._size + v17->fields._size;
  *(_DWORD *)(v5 + 16) = v28;
  if ( v28 < 1 )
    return;
  if ( !*v10 )
LABEL_47:
    sub_1C6BC60(v6, v7);
  (*v10)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v5 + 20) = 0;
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0);
  *(_QWORD *)(v5 + 32) = v29;
  v30 = (AssetLoader_LoadEndDataHandler_o **)(v5 + 32);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v29, v31, v32);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v17,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v33 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1C6BC60(v33, v34);
    v36 = BattleDataDefine_TypeInfo;
    current = v55.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v39 = *v30;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1C6BC60(v36, v34);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v39,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v10 )
        sub_1C6BC60(0, v41);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v10, (System_String_o *)current, v42);
    }
    else
    {
      if ( !*v30 )
        sub_1C6BC60(Wrapper__LoadAssetStorage, v41);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))(*v30)->fields.invoke_impl)(
        (*v30)->fields.method_code,
        0,
        (*v30)->fields.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v27,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v43 = (System_Action_o **)(v5 + 40);
  v55 = v54;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v44 )
      break;
    v46 = this->fields._Perf_k__BackingField;
    if ( !v46 )
      sub_1C6BC60(v44, v45);
    v47 = v55.fields._current;
    v48 = *v43;
    v49 = v46->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v43 )
    {
      v48 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v5,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0);
      *v43 = v48;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v48, v50, v51);
    }
    if ( !v49 )
      sub_1C6BC60(v44, v45);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v49, (System_String_o *)v47, v48, 1, 0);
    if ( !*v10 )
      sub_1C6BC60(0, v52);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v10, (System_String_o *)v47, v53);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void AssumedBattleAssetLoadManager__ReleaseAll(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *assetSearcherList; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v7; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_4CB87CB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
    sub_1C6BA08(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__);
    byte_4CB87CB = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v4 = (System_Action_object__o *)sub_1C6BC54(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v4,
          (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v7 = this->fields.assetSearcherList) == 0) )
  {
    sub_1C6BC60(v5, v6);
  }
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
}


void AssumedBattleAssetLoadManager__ReleaseLocal(
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
    v7 = 0;
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
        0);
      LODWORD(assetSearcherList) = v6->fields.assetSearcherList;
      if ( (__int64)++v7 >= (int)assetSearcherList )
        goto LABEL_9;
    }
LABEL_18:
    sub_1C6BC68(this);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_17:
    sub_1C6BC60(this, assetSearcher);
  v9 = this->fields.assetSearcherList;
  v10 = this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
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
        0);
      LODWORD(v9) = v10->fields.assetSearcherList;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
    goto LABEL_18;
  }
}


void AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_311C874 *method)
{
  const MethodInfo_316A620 **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x21
  long double v6; // q0
  Il2CppClass *_2_System_Action_T; // x8
  System_Action_object__o *v8; // x22
  long double inited; // q0
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_6_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppClass *v12; // x0
  System_Func_object__bool__o *v13; // x21
  Il2CppClass *v14; // x0
  Il2CppClass *v15; // x0
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  long double v19; // q0
  Il2CppClass *v20; // x0
  Il2CppClass *v21; // x0

  rgctx_data = (const MethodInfo_316A620 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C6BA08(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1C6BA08(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
    sub_1C6BA08(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    rgctx_data = (const MethodInfo_316A620 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C41AF8(method);
      rgctx_data = (const MethodInfo_316A620 **)method->rgctx_data;
    }
  }
  v5 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (*(&_2_System_Action_T->_2.bitflags2 + 2) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1C41A9C(v6);
  v8 = (System_Action_object__o *)sub_1C6BC54(_2_System_Action_T);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_3469AAC *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)v8,
    (const MethodInfo_3127050 *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(&_6_AssumedBattleAssetLoadManager___c__12_T->_2.bitflags2 + 2) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1C41A9C(inited);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T);
  v12 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1C41A9C(inited);
  v13 = (System_Func_object__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1C41A9C(inited);
    if ( !v14->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v15->_2.bitflags2 + 2) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1C41A9C(inited);
    v16 = *(Il2CppObject **)v15->static_fields;
    v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      v16,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0);
    v20 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1C41A9C(v19);
    *((_QWORD *)v20->static_fields + 1) = v13;
    v21 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1C41A9C(v19);
    sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v21->static_fields + 8), (int32_t)v13, v17, v18);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v13,
    (const MethodInfo_312A2E4 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1C6BC60(this, method);
  return Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
}


BattlePerformance_o *AssumedBattleAssetLoadManager__get_Perf(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void AssumedBattleAssetLoadManager__set_Perf(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Perf_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_HashSet_T__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_HashSet_int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB87CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4CB87CF = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C6BC54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36B0FBC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C6BC54(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v6,
    (const MethodInfo_36B73E0 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.AudioAssetNameHashSet, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C6BC54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_36B0FBC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cameraIdHashSet, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB87D0 & 1) == 0 )
  {
    sub_1C6BA08(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CB87D0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssumedBattleAssetLoadManager___c___ctor(AssumedBattleAssetLoadManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssumedBattleAssetLoadManager___c___GetEffectPathListFromAnalyzedParam_b__16_0(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


bool AssumedBattleAssetLoadManager___c___IsPreloading_b__10_0(
        AssumedBattleAssetLoadManager___c_o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_33077C0 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C41A9C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C41A9C();
  v4 = (Il2CppObject *)sub_1C6BC54(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C41A9C();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C();
  sub_1C6B9AC(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_330787C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_3307884 *method)
{
  __int64 _3_T; // x8

  _3_T = (__int64)method->klass->rgctx_data->_3_T;
  if ( (*(_BYTE *)(_3_T + 309) & 1) == 0 )
    _3_T = sub_1C41A9C();
  return sub_1C6BB44(x, _3_T) != 0;
}


void AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__0(
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
      sub_1C6BC60(this, _);
    assetSearcher->fields._LoadStatus_k__BackingField = 2;
  }
}


void AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__2(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o *onLoadFinished; // x8

  onLoadFinished = this->fields.onLoadFinished;
  if ( !onLoadFinished )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onLoadFinished->fields.invoke_impl)(
    onLoadFinished->fields.method_code,
    0,
    onLoadFinished->fields.method);
}