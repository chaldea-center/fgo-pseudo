void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D2DF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
    byte_4A5D2DF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetSearcherList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1

  if ( (byte_4A5D2D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    byte_4A5D2D9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v3);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_311DB9C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
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
  int32_t v14; // w3
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
  int32_t v37; // w3
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

  if ( (byte_4A5D2DE & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__);
    sub_1B885B0(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4A5D2DE = 1;
  }
  path = 0LL;
  name = 0LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EffectMaster___);
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
    _9__16_0 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v11,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v13, v14);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1B8880C(Master_object, v6);
  klass = Master_object->klass;
  v16 = Master_object;
  v17 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v19 = sub_1BDA590(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1B8880C(0LL, v20);
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
      v25 = sub_1BDA590(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1BDA590(v21, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !v7 )
      sub_1B8880C(v30, (unsigned int)v30);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v30,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1B8880C(0LL, v32);
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v4 )
          sub_1B8880C(IsNullOrEmpty, v35);
        v38 = (Il2CppObject *)path;
        items = v4->fields._items;
        v40 = Method_System_Collections_Generic_List_string__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1B8880C(IsNullOrEmpty, v38);
        size = v4->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v38,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v38;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
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
    v46 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v21, *(_QWORD *)(v46 + 8));
  return (System_Collections_Generic_List_string__o *)v4;
}


void __fastcall AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Perf_k__BackingField = perf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)perf, (int32_t)method, v3);
}


bool __fastcall AssumedBattleAssetLoadManager__IsPreloading(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v6; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D2DA & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
    sub_1B885B0(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__);
    sub_1B885B0(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4A5D2DA = 1;
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
    _9__10_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__10_0,
      v6,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
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
  if ( (byte_4A5D2DB & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
    byte_4A5D2DB = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&assetSearcher->fields.manager, (int32_t)v5, (int32_t)method, v3);
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
    sub_1B8880C(this, assetSearcher);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v13[4] = (BattlePerformance_c *)assetSearcher;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)assetSearcher, v8, v9);
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_TSource__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
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
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x24
  System_Func_T__TResult__o *v25; // x25
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x22
  int v28; // w8
  AssetLoader_LoadEndDataHandler_o *v29; // x25
  AssetLoader_LoadEndDataHandler_o **v30; // x24
  int32_t v31; // w2
  int32_t v32; // w3
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
  int32_t v51; // w3
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5D2DD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleDataDefine_AddUniqueCameraPath__);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&System_Func_int__string__TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__);
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__);
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__);
    sub_1B885B0(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
    sub_1B885B0(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4A5D2DD = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v5 = sub_1B887FC(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 24) = assetSearcher;
  v10 = (AssumedBattleAssetSearcherBase_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)assetSearcher, v8, v9);
  if ( !*(_QWORD *)(v5 + 24) )
    sub_1B8880C(0LL, v11);
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 24) + 376LL))(
          *(_QWORD *)(v5 + 24),
          *(_QWORD *)(**(_QWORD **)(v5 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v12,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v12,
                                      v13);
  if ( !v12 )
    sub_1B8880C(EffectPathListFromAnalyzedParam, v15);
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
    _9__14_1 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__14_1, v20, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_int_(
          v16,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  v25 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v25, 0LL, Method_BattleDataDefine_AddUniqueCameraPath__, 0LL);
  v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v24,
                                                         (System_Func_TSource__TResult__o *)v25,
                                                         (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v17 )
    sub_1B8880C(v26, v26);
  System_Collections_Generic_List_object___AddRange(
    v17,
    v26,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_string__AddRange__);
  v6 = System_Linq_Enumerable__ToList_object_(
         *(System_Collections_Generic_IEnumerable_TSource__o **)(v12 + 24),
         (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_string___);
  v27 = (System_Collections_Generic_List_object__o *)v6;
  if ( !v6 )
    goto LABEL_47;
  v28 = v6->fields._size + v17->fields._size;
  *(_DWORD *)(v5 + 16) = v28;
  if ( v28 < 1 )
    return;
  if ( !*v10 )
LABEL_47:
    sub_1B8880C(v6, v7);
  (*v10)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v5 + 20) = 0;
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  *(_QWORD *)(v5 + 32) = v29;
  v30 = (AssetLoader_LoadEndDataHandler_o **)(v5 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v29, v31, v32);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v17,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v33 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1B8880C(v33, v34);
    v36 = BattleDataDefine_TypeInfo;
    current = v55.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v39 = *v30;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1B8880C(v36, v34);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v39,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0LL);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v10 )
        sub_1B8880C(0LL, v41);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v10, (System_String_o *)current, v42);
    }
    else
    {
      if ( !*v30 )
        sub_1B8880C(Wrapper__LoadAssetStorage, v41);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))(*v30)->fields.m_target)(
        (*v30)->fields.original_method_info,
        0LL,
        *(_QWORD *)&(*v30)->fields.extra_arg);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v27,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v43 = (System_Action_o **)(v5 + 40);
  v55 = v54;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v44 )
      break;
    v46 = this->fields._Perf_k__BackingField;
    if ( !v46 )
      sub_1B8880C(v44, v45);
    v47 = v55.fields._current;
    v48 = *v43;
    v49 = v46->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v43 )
    {
      v48 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v5,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0LL);
      *v43 = v48;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)v48, v50, v51);
    }
    if ( !v49 )
      sub_1B8880C(v44, v45);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v49, (System_String_o *)v47, v48, 1, 0LL);
    if ( !*v10 )
      sub_1B8880C(0LL, v52);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v10, (System_String_o *)v47, v53);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *assetSearcherList; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v7; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_4A5D2DC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__);
    byte_4A5D2DC = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0LL);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v4,
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v7 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_1B8880C(v5, v6);
  }
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
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
    sub_1B88814(this, assetSearcher);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_17:
    sub_1B8880C(this, assetSearcher);
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
        const MethodInfo_2E622F0 *method)
{
  const MethodInfo_2EA998C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x21
  Il2CppClass *_2_System_Action_T; // x8
  System_Action_object__o *v7; // x22
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_6_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppClass *v10; // x0
  System_Func_object__bool__o *v11; // x21
  Il2CppClass *v12; // x0
  Il2CppClass *v13; // x0
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0

  rgctx_data = (const MethodInfo_2EA998C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1B885B0(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
    sub_1B885B0(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    rgctx_data = (const MethodInfo_2EA998C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
      rgctx_data = (const MethodInfo_2EA998C **)method->rgctx_data;
    }
  }
  v5 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (BYTE5(_2_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_2_System_Action_T_);
  v7 = (System_Action_object__o *)sub_1B887FC(_2_System_Action_T);
  System_Action_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_318E888 *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)v7,
    (const MethodInfo_2E6CCC0 *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(_6_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1BDA48C(_6_AssumedBattleAssetLoadManager___c__12_T);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T);
  v10 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1BDA48C(v10);
  v11 = (System_Func_object__bool__o *)*((_QWORD *)v10->static_fields + 1);
  if ( !v11 )
  {
    v12 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v12->vtable[0].methodPtr) & 1) == 0 )
      v12 = (Il2CppClass *)sub_1BDA48C(v12);
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
      v13 = (Il2CppClass *)sub_1BDA48C(v13);
    v14 = *(Il2CppObject **)v13->static_fields;
    v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v11,
      v14,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0LL);
    v17 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1BDA48C(v17);
    *((_QWORD *)v17->static_fields + 1) = v11;
    v18 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1BDA48C(v18);
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v18->static_fields + 8), (int32_t)v11, v15, v16);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v11,
    (const MethodInfo_2E6F238 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1B8880C(this, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_HashSet_T__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_HashSet_int__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D2E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4A5D2E0 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v6,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.AudioAssetNameHashSet, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cameraIdHashSet, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D2E1 & 1) == 0 )
  {
    sub_1B885B0(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4A5D2E1 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool __fastcall AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_303ED90 *method)
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
    klass = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BDA48C(klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = (__int64)klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(_0_AssumedBattleAssetLoadManager___c__12_T + 309) & 1) == 0 )
    _0_AssumedBattleAssetLoadManager___c__12_T = sub_1BDA48C(_0_AssumedBattleAssetLoadManager___c__12_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_AssumedBattleAssetLoadManager___c__12_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BDA48C(v7);
  _2_AssumedBattleAssetLoadManager___c__12_T = (__int64)v7->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(_2_AssumedBattleAssetLoadManager___c__12_T + 309) & 1) == 0 )
    _2_AssumedBattleAssetLoadManager___c__12_T = sub_1BDA48C(_2_AssumedBattleAssetLoadManager___c__12_T);
  **(_QWORD **)(_2_AssumedBattleAssetLoadManager___c__12_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_303EE4C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_303EE54 *method)
{
  Il2CppClass *_3_T; // x8

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE5(_3_T->vtable[0].methodPtr) & 1) == 0 )
    _3_T = (Il2CppClass *)sub_1BDA48C(method->klass->rgctx_data->_3_T);
  return sub_1B886EC(x, _3_T) != 0;
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
      sub_1B8880C(this, _);
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
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onLoadFinished->fields.m_target)(
    onLoadFinished->fields.original_method_info,
    0LL,
    *(_QWORD *)&onLoadFinished->fields.extra_arg);
}