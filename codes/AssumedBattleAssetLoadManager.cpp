void AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C39E78 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
    byte_4C39E78 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetSearcherList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleEntity_o *AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C39E72 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    byte_4C39E72 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_3398E40 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  struct System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v8; // x0
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v10; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  Il2CppObject *Entity; // x0
  System_String_o *monitor; // x22
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C39E77 & 1) == 0 )
  {
    sub_1C32C20(&BattleEffectUtility_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__);
    sub_1C32C20(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4C39E77 = 1;
  }
  path = 0;
  name = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v6 = Master_object;
  EffectIdHashSet = resultParam->fields.EffectIdHashSet;
  v8 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v8 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__16_0 = v8->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v10,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v12, v13);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1C32E7C(Master_object);
  klass = Master_object->klass;
  v15 = Master_object;
  v16 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_17;
    }
    v18 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v18 = sub_1C83438(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v19 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_24:
      v23 = sub_1C83438(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v26 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_31:
      v27 = sub_1C83438(v19, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    if ( !v6 )
      sub_1C32E7C(v28);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v6,
               v28,
               (const MethodInfo_3396838 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C32E7C(0);
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
          sub_1C32E7C(IsNullOrEmpty);
        v34 = (Il2CppObject *)path;
        items = v4->fields._items;
        v36 = Method_System_Collections_Generic_List_string__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C32E7C(IsNullOrEmpty);
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v34,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v34;
          sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v34, v32, v33);
        }
      }
    }
  }
  v39 = *(_QWORD *)v19;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_48;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_48:
    v42 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v19, *(_QWORD *)(v42 + 8));
  return (System_Collections_Generic_List_string__o *)v4;
}


void AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Perf_k__BackingField = perf;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)perf, (int32_t)method, v3);
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

  if ( (byte_4C39E73 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
    sub_1C32C20(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    sub_1C32C20(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__);
    sub_1C32C20(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4C39E73 = 1;
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
    _9__10_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__10_0, v6, Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, 0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_30C6790 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
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
  if ( (byte_4C39E74 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1C32C20(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
    byte_4C39E74 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&assetSearcher->fields.manager, (int32_t)v5, (int32_t)method, v3);
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
    sub_1C32E7C(this);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v13[4] = (BattlePerformance_c *)assetSearcher;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)assetSearcher, v8, v9);
  }
}


void AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_TSource__o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AssumedBattleAssetSearcherBase_o **v9; // x21
  __int64 v10; // x22
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x24
  System_Collections_Generic_List_object__o *v14; // x23
  AssumedBattleAssetLoadManager___c_c *v15; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v17; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  System_Func_T__TResult__o *v22; // x25
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x22
  int v25; // w8
  AssetLoader_LoadEndDataHandler_o *v26; // x25
  AssetLoader_LoadEndDataHandler_o **v27; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _BOOL8 v30; // x0
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v32; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v35; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  const MethodInfo *v37; // x2
  System_Action_o **v38; // x22
  _BOOL8 v39; // x0
  struct BattlePerformance_o *v40; // x8
  Il2CppObject *v41; // x23
  System_Action_o *v42; // x25
  AssetStorageLoadWrapper_o *v43; // x24
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C39E76 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleDataDefine_AddUniqueCameraPath__);
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&System_Func_int__string__TypeInfo);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__);
    sub_1C32C20(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__);
    sub_1C32C20(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__);
    sub_1C32C20(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
    sub_1C32C20(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4C39E76 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v5 = sub_1C32E6C(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 24) = assetSearcher;
  v9 = (AssumedBattleAssetSearcherBase_o **)(v5 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)assetSearcher, v7, v8);
  if ( !*(_QWORD *)(v5 + 24) )
    sub_1C32E7C(0);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 24) + 376LL))(
          *(_QWORD *)(v5 + 24),
          *(_QWORD *)(**(_QWORD **)(v5 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v10,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v10,
                                      v11);
  if ( !v10 )
    sub_1C32E7C(EffectPathListFromAnalyzedParam);
  v13 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v10 + 32);
  v14 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v15 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v15 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__14_1 = v15->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__14_1, v17, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_int_(
          v13,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
  v22 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v22, 0, Method_BattleDataDefine_AddUniqueCameraPath__, 0);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v21,
                                                         (System_Func_TSource__TResult__o *)v22,
                                                         (const MethodInfo_3110E00 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v14 )
    sub_1C32E7C(v23);
  System_Collections_Generic_List_object___AddRange(
    v14,
    v23,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_string__AddRange__);
  v6 = System_Linq_Enumerable__ToList_object_(
         *(System_Collections_Generic_IEnumerable_TSource__o **)(v10 + 24),
         (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_string___);
  v24 = (System_Collections_Generic_List_object__o *)v6;
  if ( !v6 )
    goto LABEL_47;
  v25 = v6->fields._size + v14->fields._size;
  *(_DWORD *)(v5 + 16) = v25;
  if ( v25 < 1 )
    return;
  if ( !*v9 )
LABEL_47:
    sub_1C32E7C(v6);
  (*v9)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v5 + 20) = 0;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0);
  *(_QWORD *)(v5 + 32) = v26;
  v27 = (AssetLoader_LoadEndDataHandler_o **)(v5 + 32);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v26, v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v14,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v30 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1C32E7C(v30);
    v32 = BattleDataDefine_TypeInfo;
    current = v48.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v35 = *v27;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1C32E7C(v32);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v35,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v9 )
        sub_1C32E7C(0);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v9, (System_String_o *)current, v37);
    }
    else
    {
      if ( !*v27 )
        sub_1C32E7C(Wrapper__LoadAssetStorage);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))(*v27)->fields.invoke_impl)(
        (*v27)->fields.method_code,
        0,
        (*v27)->fields.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v24,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v38 = (System_Action_o **)(v5 + 40);
  v48 = v47;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v39 )
      break;
    v40 = this->fields._Perf_k__BackingField;
    if ( !v40 )
      sub_1C32E7C(v39);
    v41 = v48.fields._current;
    v42 = *v38;
    v43 = v40->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v38 )
    {
      v42 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v5,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0);
      *v38 = v42;
      sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v42, v44, v45);
    }
    if ( !v43 )
      sub_1C32E7C(v39);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v43, (System_String_o *)v41, v42, 1, 0);
    if ( !*v9 )
      sub_1C32E7C(0);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v9, (System_String_o *)v41, v46);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void AssumedBattleAssetLoadManager__ReleaseAll(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *assetSearcherList; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v6; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4C39E75 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
    sub_1C32C20(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__);
    byte_4C39E75 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v4 = (System_Action_object__o *)sub_1C32E6C(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v4,
          (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v6 = this->fields.assetSearcherList) == 0) )
  {
    sub_1C32E7C(v5);
  }
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void AssumedBattleAssetLoadManager__ReleaseLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_o *v3; // x19
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x8
  AssumedBattleAssetLoadManager_o *v7; // x21
  unsigned __int64 v8; // x22
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v10; // x8
  AssumedBattleAssetLoadManager_o *v11; // x20
  unsigned __int64 v12; // x21
  struct BattlePerformance_o *v13; // x8

  if ( !assetSearcher )
    goto LABEL_17;
  v3 = this;
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
    goto LABEL_17;
  assetSearcherList = this->fields.assetSearcherList;
  v7 = this;
  if ( (int)assetSearcherList >= 1 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)assetSearcherList )
    {
      Perf_k__BackingField = v3->fields._Perf_k__BackingField;
      if ( !Perf_k__BackingField )
        goto LABEL_17;
      this = (AssumedBattleAssetLoadManager_o *)Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !this )
        goto LABEL_17;
      AssetStorageLoadWrapper__ReleaseAssetStorage(
        (AssetStorageLoadWrapper_o *)this,
        *((System_String_o **)&v7[1].klass + v8),
        0);
      LODWORD(assetSearcherList) = v7->fields.assetSearcherList;
      if ( (__int64)++v8 >= (int)assetSearcherList )
        goto LABEL_9;
    }
LABEL_18:
    sub_1C32E84(this);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              v5);
  if ( !this )
LABEL_17:
    sub_1C32E7C(this);
  v10 = this->fields.assetSearcherList;
  v11 = this;
  if ( (int)v10 >= 1 )
  {
    v12 = 0;
    while ( v12 < (unsigned int)v10 )
    {
      v13 = v3->fields._Perf_k__BackingField;
      if ( !v13 )
        goto LABEL_17;
      this = (AssumedBattleAssetLoadManager_o *)v13->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !this )
        goto LABEL_17;
      AssetStorageLoadWrapper__ReleaseAudioAssetStorage(
        (AssetStorageLoadWrapper_o *)this,
        *((System_String_o **)&v11[1].klass + v12),
        0);
      LODWORD(v10) = v11->fields.assetSearcherList;
      if ( (__int64)++v12 >= (int)v10 )
        return;
    }
    goto LABEL_18;
  }
}


void AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_30BEBD4 *method)
{
  const MethodInfo_310C5CC **rgctx_data; // x8
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

  rgctx_data = (const MethodInfo_310C5CC **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1C32C20(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
    sub_1C32C20(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    rgctx_data = (const MethodInfo_310C5CC **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390(method);
      rgctx_data = (const MethodInfo_310C5CC **)method->rgctx_data;
    }
  }
  v5 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (*(&_2_System_Action_T->_2.bitflags2 + 2) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1C83334(v6);
  v8 = (System_Action_object__o *)sub_1C32E6C(_2_System_Action_T);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_3409CB8 *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)v8,
    (const MethodInfo_30C93B0 *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(&_6_AssumedBattleAssetLoadManager___c__12_T->_2.bitflags2 + 2) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1C83334(inited);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T);
  v12 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1C83334(inited);
  v13 = (System_Func_object__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1C83334(inited);
    if ( !v14->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v15->_2.bitflags2 + 2) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1C83334(inited);
    v16 = *(Il2CppObject **)v15->static_fields;
    v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      v16,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0);
    v20 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1C83334(v19);
    *((_QWORD *)v20->static_fields + 1) = v13;
    v21 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1C83334(v19);
    sub_1C32BC4((CGThumbnailListItem_o *)((char *)v21->static_fields + 8), (int32_t)v13, v17, v18);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v13,
    (const MethodInfo_30CC474 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1C32E7C(this);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_4C39E79 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4C39E79 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v6,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.AudioAssetNameHashSet, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cameraIdHashSet, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C39E7A & 1) == 0 )
  {
    sub_1C32C20(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4C39E7A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_32A8914 *method)
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
    klass = sub_1C83334();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C83334();
  v4 = (Il2CppObject *)sub_1C32E6C(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C83334();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C83334();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C83334();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C83334();
  sub_1C32BC4(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_32A89D0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_32A89D8 *method)
{
  __int64 _3_T; // x8

  _3_T = (__int64)method->klass->rgctx_data->_3_T;
  if ( (*(_BYTE *)(_3_T + 309) & 1) == 0 )
    _3_T = sub_1C83334();
  return sub_1C32D5C(x, _3_T) != 0;
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
      sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onLoadFinished->fields.invoke_impl)(
    onLoadFinished->fields.method_code,
    0,
    onLoadFinished->fields.method);
}