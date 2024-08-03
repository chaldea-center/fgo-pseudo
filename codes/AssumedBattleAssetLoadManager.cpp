void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE45C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v4);
    byte_49FE45C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetSearcherList, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0

  if ( (byte_49FE456 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_BattleMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v3);
    byte_49FE456 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_30D410C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  __int64 v21; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  struct System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v24; // x0
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v26; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x20
  __int64 v32; // x9
  int *p_offset; // x10
  __int64 v34; // x0
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
  System_String_o *monitor; // x22
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_49FE45B & 1) == 0 )
  {
    sub_1B640C8(&BattleEffectUtility_TypeInfo, resultParam);
    sub_1B640C8(&Method_DataManager_GetMaster_EffectMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v16);
    sub_1B640C8(&AssumedBattleAssetLoadManager___c_TypeInfo, v17);
    byte_49FE45B = 1;
  }
  path = 0LL;
  name = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       resultParam,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v22 = Master_object;
  EffectIdHashSet = resultParam->fields.EffectIdHashSet;
  v24 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v24 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__16_0 = v24->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v20, v21);
    System_Func_int__bool____ctor(
      _9__16_0,
      v26,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v28, v29);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1B64324(Master_object);
  klass = Master_object->klass;
  v31 = Master_object;
  v32 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_17;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v34 = sub_1BB60A8(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
  if ( !v35 )
    sub_1B64324(0LL);
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
      v39 = sub_1BB60A8(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v43 = sub_1BB60A8(v35, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    if ( !v22 )
      sub_1B64324(v44);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v22,
               v44,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1B64324(0LL);
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
          sub_1B64324(IsNullOrEmpty);
        v50 = (Il2CppObject *)path;
        items = v18->fields._items;
        v52 = Method_System_Collections_Generic_List_string__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1B64324(IsNullOrEmpty);
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v50,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v50;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v50, v48, v49);
        }
      }
    }
  }
  v55 = *(_QWORD *)v35;
  v56 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_48;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_48:
    v58 = sub_1BB60A8(v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v58)(v35, *(_QWORD *)(v58 + 8));
  return (System_Collections_Generic_List_string__o *)v18;
}


void __fastcall AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Perf_k__BackingField = perf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)perf, (int32_t)method, v3);
}


bool __fastcall AssumedBattleAssetLoadManager__IsPreloading(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssumedBattleAssetLoadManager___c_c *v7; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v10; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FE457 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, method);
    sub_1B640C8(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v4);
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v5);
    sub_1B640C8(&AssumedBattleAssetLoadManager___c_TypeInfo, v6);
    byte_49FE457 = 1;
  }
  v7 = AssumedBattleAssetLoadManager___c_TypeInfo;
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v7 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v7->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                                method,
                                                v2);
    System_Func_object__bool____ctor(
      _9__10_0,
      v10,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v12, v13);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_2E24870 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
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
  if ( (byte_49FE458 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1B640C8(
                                                &Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
                                                assetSearcher);
    byte_49FE458 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&assetSearcher->fields.manager, (int32_t)v5, (int32_t)method, v3);
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
    sub_1B64324(this);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v13[4] = (BattlePerformance_c *)assetSearcher;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)assetSearcher, v8, v9);
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
  int32_t v26; // w2
  int32_t v27; // w3
  AssumedBattleAssetSearcherBase_o **v28; // x21
  __int64 v29; // x22
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x24
  System_Collections_Generic_List_object__o *v35; // x23
  AssumedBattleAssetLoadManager___c_c *v36; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v38; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  System_Func_T__TResult__o *v45; // x25
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x22
  int v50; // w8
  AssetLoader_LoadEndDataHandler_o *v51; // x25
  AssetLoader_LoadEndDataHandler_o **v52; // x24
  int32_t v53; // w2
  int32_t v54; // w3
  _BOOL8 v55; // x0
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v57; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v60; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  const MethodInfo *v62; // x2
  System_Action_o **v63; // x22
  _BOOL8 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  struct BattlePerformance_o *v67; // x8
  Il2CppObject *v68; // x23
  System_Action_o *v69; // x25
  AssetStorageLoadWrapper_o *v70; // x24
  int32_t v71; // w2
  int32_t v72; // w3
  const MethodInfo *v73; // x2
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FE45A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, assetSearcher);
    sub_1B640C8(&Method_BattleDataDefine_AddUniqueCameraPath__, v5);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__string___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v12);
    sub_1B640C8(&System_Func_int__string__TypeInfo, v13);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__AddRange__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, v19);
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v20);
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__, v21);
    sub_1B640C8(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v22);
    sub_1B640C8(&AssumedBattleAssetLoadManager___c_TypeInfo, v23);
    byte_49FE45A = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v24 = sub_1B64314(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, assetSearcher, method);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_47;
  *(_QWORD *)(v24 + 24) = assetSearcher;
  v28 = (AssumedBattleAssetSearcherBase_o **)(v24 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)assetSearcher, v26, v27);
  if ( !*(_QWORD *)(v24 + 24) )
    sub_1B64324(0LL);
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v24 + 24) + 376LL))(
          *(_QWORD *)(v24 + 24),
          *(_QWORD *)(**(_QWORD **)(v24 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v29,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v29,
                                      v30);
  if ( !v29 )
    sub_1B64324(EffectPathListFromAnalyzedParam);
  v34 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v29 + 32);
  v35 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v36 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v36 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__14_1 = v36->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v32, v33);
    System_Func_int__bool____ctor(_9__14_1, v38, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_int_(
          v34,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  v45 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__string__TypeInfo, v43, v44);
  System_Func_int__object____ctor(v45, 0LL, Method_BattleDataDefine_AddUniqueCameraPath__, 0LL);
  v46 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v42,
                                                         (System_Func_TSource__TResult__o *)v45,
                                                         (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v35 )
    sub_1B64324(v46);
  System_Collections_Generic_List_object___AddRange(
    v35,
    v46,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_string__AddRange__);
  v25 = System_Linq_Enumerable__ToList_object_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v29 + 24),
          (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
  v49 = (System_Collections_Generic_List_object__o *)v25;
  if ( !v25 )
    goto LABEL_47;
  v50 = v25->fields._size + v35->fields._size;
  *(_DWORD *)(v24 + 16) = v50;
  if ( v50 < 1 )
    return;
  if ( !*v28 )
LABEL_47:
    sub_1B64324(v25);
  (*v28)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v24 + 20) = 0;
  v51 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v47, v48);
  AssetLoader_LoadEndDataHandler___ctor(
    v51,
    (Il2CppObject *)v24,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  *(_QWORD *)(v24 + 32) = v51;
  v52 = (AssetLoader_LoadEndDataHandler_o **)(v24 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v51, v53, v54);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v35,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v55 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1B64324(v55);
    v57 = BattleDataDefine_TypeInfo;
    current = v75.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v60 = *v52;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1B64324(v57);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v60,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0LL);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v28 )
        sub_1B64324(0LL);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v28, (System_String_o *)current, v62);
    }
    else
    {
      if ( !*v52 )
        sub_1B64324(Wrapper__LoadAssetStorage);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))(*v52)->fields.m_target)(
        (*v52)->fields.original_method_info,
        0LL,
        *(_QWORD *)&(*v52)->fields.extra_arg);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v49,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v63 = (System_Action_o **)(v24 + 40);
  v75 = v74;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v64 )
      break;
    v67 = this->fields._Perf_k__BackingField;
    if ( !v67 )
      sub_1B64324(v64);
    v68 = v75.fields._current;
    v69 = *v63;
    v70 = v67->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v63 )
    {
      v69 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v65, v66);
      System_Action___ctor(
        v69,
        (Il2CppObject *)v24,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0LL);
      *v63 = v69;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 40), (int32_t)v69, v71, v72);
    }
    if ( !v70 )
      sub_1B64324(v64);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v70, (System_String_o *)v68, v69, 1, 0LL);
    if ( !*v28 )
      sub_1B64324(0LL);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v28, (System_String_o *)v68, v73);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *assetSearcherList; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_49FE459 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, method);
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v6);
    byte_49FE459 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v8 = (System_Action_object__o *)sub_1B64314(System_Action_AssumedBattleAssetSearcherBase__TypeInfo, method, v2);
  System_Action_object____ctor(v8, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0LL);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v8,
          (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v10 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_1B64324(v9);
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
    v8 = 0LL;
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
        0LL);
      LODWORD(assetSearcherList) = v7->fields.assetSearcherList;
      if ( (__int64)++v8 >= (int)assetSearcherList )
        goto LABEL_9;
    }
LABEL_18:
    sub_1B6432C(this, v5);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              v5);
  if ( !this )
LABEL_17:
    sub_1B64324(this);
  v10 = this->fields.assetSearcherList;
  v11 = this;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
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
        0LL);
      LODWORD(v10) = v11->fields.assetSearcherList;
      if ( (__int64)++v12 >= (int)v10 )
        return;
    }
    goto LABEL_18;
  }
}


void __fastcall AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_2E1BE90 *method)
{
  const MethodInfo_2E62C20 **rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_T__o *v9; // x21
  Il2CppClass *_2_System_Action_T; // x8
  System_Action_object__o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_6_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppClass *v16; // x0
  System_Func_object__bool__o *v17; // x21
  Il2CppClass *v18; // x0
  Il2CppClass *v19; // x0
  Il2CppObject *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppClass *v23; // x0
  Il2CppClass *v24; // x0

  rgctx_data = (const MethodInfo_2E62C20 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, method);
    sub_1B640C8(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v5);
    sub_1B640C8(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v6);
    rgctx_data = (const MethodInfo_2E62C20 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = (const MethodInfo_2E62C20 **)method->rgctx_data;
    }
  }
  v9 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (BYTE5(_2_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_2_System_Action_T_);
  v11 = (System_Action_object__o *)sub_1B64314(_2_System_Action_T, v7, v8);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_31461EC *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v9,
    (System_Action_T__o *)v11,
    (const MethodInfo_2E26860 *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(_6_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1BB5FA4(_6_AssumedBattleAssetLoadManager___c__12_T);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T);
  v16 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
    v16 = (Il2CppClass *)sub_1BB5FA4(v16);
  v17 = (System_Func_object__bool__o *)*((_QWORD *)v16->static_fields + 1);
  if ( !v17 )
  {
    v18 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1BB5FA4(v18);
    if ( !v18->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v18);
    v19 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1BB5FA4(v19);
    v20 = *(Il2CppObject **)v19->static_fields;
    v17 = (System_Func_object__bool__o *)sub_1B64314(
                                           System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                           v12,
                                           v13);
    System_Func_object__bool____ctor(
      v17,
      v20,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0LL);
    v23 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1BB5FA4(v23);
    *((_QWORD *)v23->static_fields + 1) = v17;
    v24 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1BB5FA4(v24);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v24->static_fields + 8), (int32_t)v17, v21, v22);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v17,
    (const MethodInfo_2E28D1C *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_HashSet_T__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_HashSet_int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FE45D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_HashSet_string__TypeInfo, v6);
    byte_49FE45D = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_string__TypeInfo,
                                                     v10,
                                                     v11);
  System_Collections_Generic_HashSet_object____ctor(
    v12,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.AudioAssetNameHashSet, (int32_t)v12, v13, v14);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cameraIdHashSet, (int32_t)v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE45E & 1) == 0 )
  {
    sub_1B640C8(&AssumedBattleAssetLoadManager___c_TypeInfo, v1);
    byte_49FE45E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AssumedBattleAssetLoadManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool __fastcall AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_2FF73C8 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssumedBattleAssetLoadManager___c__12_T__c *klass; // x0
  __int64 _0_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  AssumedBattleAssetLoadManager___c__12_T__c *v9; // x0
  __int64 _2_AssumedBattleAssetLoadManager___c__12_T; // x0
  AssumedBattleAssetLoadManager___c__12_T__c *v11; // x0
  __int64 v12; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BB5FA4(klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = (__int64)klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(_0_AssumedBattleAssetLoadManager___c__12_T + 309) & 1) == 0 )
    _0_AssumedBattleAssetLoadManager___c__12_T = sub_1BB5FA4(_0_AssumedBattleAssetLoadManager___c__12_T);
  v6 = (Il2CppObject *)sub_1B64314(_0_AssumedBattleAssetLoadManager___c__12_T, v1, v2);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB5FA4(method->klass);
  System_Object___ctor(v6, 0LL);
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BB5FA4(v9);
  _2_AssumedBattleAssetLoadManager___c__12_T = (__int64)v9->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(_2_AssumedBattleAssetLoadManager___c__12_T + 309) & 1) == 0 )
    _2_AssumedBattleAssetLoadManager___c__12_T = sub_1BB5FA4(_2_AssumedBattleAssetLoadManager___c__12_T);
  **(_QWORD **)(_2_AssumedBattleAssetLoadManager___c__12_T + 184) = v6;
  v11 = method->klass;
  if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
    v11 = (AssumedBattleAssetLoadManager___c__12_T__c *)sub_1BB5FA4(v11);
  v12 = (__int64)v11->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v6, v7, v8);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_2FF7484 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_2FF748C *method)
{
  Il2CppClass *_3_T; // x8

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE5(_3_T->vtable[0].methodPtr) & 1) == 0 )
    _3_T = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_3_T);
  return sub_1B64204(x, _3_T) != 0;
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
      sub_1B64324(this);
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
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onLoadFinished->fields.m_target)(
    onLoadFinished->fields.original_method_info,
    0LL,
    *(_QWORD *)&onLoadFinished->fields.extra_arg);
}