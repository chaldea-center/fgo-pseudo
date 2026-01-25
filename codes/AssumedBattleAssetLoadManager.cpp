void AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF0B2C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
    byte_4CF0B2C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetSearcherList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleEntity_o *AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1

  if ( (byte_4CF0B26 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    byte_4CF0B26 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v3);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_3430904 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  Il2CppObject *Entity; // x0
  __int64 v36; // x1
  System_String_o *monitor; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *v46; // x1
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CF0B2B & 1) == 0 )
  {
    sub_1C7BAE8(&BattleEffectUtility_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__);
    sub_1C7BAE8(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CF0B2B = 1;
  }
  path = 0;
  name = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EffectMaster___);
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
    _9__16_0 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v11,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0,
      (int32_t)_9__16_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1C7BD40(Master_object, v6);
  klass = Master_object->klass;
  v20 = Master_object;
  v21 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_17;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v23 = sub_1C51E70(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C7BD40(0, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_24;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_24:
      v29 = sub_1C51E70(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v32 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_31;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_31:
      v33 = sub_1C51E70(v25, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    if ( !v7 )
      sub_1C7BD40(v34, (unsigned int)v34);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v34,
               (const MethodInfo_342E2FC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C7BD40(0, v36);
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
          sub_1C7BD40(IsNullOrEmpty, v39);
        v46 = (Il2CppObject *)path;
        items = v4->fields._items;
        v48 = Method_System_Collections_Generic_List_string__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C7BD40(IsNullOrEmpty, v46);
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v46,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v46;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v50 + 4), (int32_t)v46, v40, v41, v42, v43, v44, v45);
        }
      }
    }
  }
  v51 = *(_QWORD *)v25;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_48;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_48:
    v54 = sub_1C51E70(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v25, *(_QWORD *)(v54 + 8));
  return (System_Collections_Generic_List_string__o *)v4;
}


void AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Perf_k__BackingField = perf;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)perf, (int32_t)method, v3, v4, v5, v6, v7);
}


bool AssumedBattleAssetLoadManager__IsPreloading(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  AssumedBattleAssetLoadManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v6; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CF0B27 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
    sub_1C7BAE8(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    sub_1C7BAE8(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__);
    sub_1C7BAE8(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CF0B27 = 1;
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
    _9__10_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__10_0, v6, Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, 0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_3159728 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
}


void AssumedBattleAssetLoadManager__Preload(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssumedBattleAssetLoadManager_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  _QWORD *v19; // x9
  __int64 assetSearcherList_low; // x10
  BattlePerformance_c **v21; // x8

  v9 = this;
  if ( (byte_4CF0B28 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
    byte_4CF0B28 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v9;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&assetSearcher->fields.manager,
    (int32_t)v9,
    (int32_t)method,
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
    sub_1C7BD40(this, assetSearcher);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v21[4] = (BattlePerformance_c *)assetSearcher;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)assetSearcher, v12, v13, v14, v15, v16, v17);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  AssumedBattleAssetSearcherBase_o **v14; // x21
  __int64 v15; // x1
  __int64 v16; // x22
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  AssumedBattleAssetLoadManager___c_c *v22; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v24; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  System_Func_T__TResult__o *v33; // x25
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x22
  int v36; // w8
  AssetLoader_LoadEndDataHandler_o *v37; // x25
  AssetLoader_LoadEndDataHandler_o **v38; // x24
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  _BOOL8 v45; // x0
  __int64 v46; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v48; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v51; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x2
  System_Action_o **v55; // x22
  _BOOL8 v56; // x0
  __int64 v57; // x1
  struct BattlePerformance_o *v58; // x8
  Il2CppObject *v59; // x23
  System_Action_o *v60; // x25
  AssetStorageLoadWrapper_o *v61; // x24
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  __int64 v68; // x1
  const MethodInfo *v69; // x2
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CF0B2A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleDataDefine_AddUniqueCameraPath__);
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C7BAE8(&System_Func_int__string__TypeInfo);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__);
    sub_1C7BAE8(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__);
    sub_1C7BAE8(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__);
    sub_1C7BAE8(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
    sub_1C7BAE8(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CF0B2A = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v5 = sub_1C7BD34(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 24) = assetSearcher;
  v14 = (AssumedBattleAssetSearcherBase_o **)(v5 + 24);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)assetSearcher, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    sub_1C7BD40(0, v15);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 24) + 376LL))(
          *(_QWORD *)(v5 + 24),
          *(_QWORD *)(**(_QWORD **)(v5 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v16,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v16,
                                      v17);
  if ( !v16 )
    sub_1C7BD40(EffectPathListFromAnalyzedParam, v19);
  v20 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 32);
  v21 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v22 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v22 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__14_1 = v22->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__14_1, v24, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_1,
      (int32_t)_9__14_1,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_int_(
          v20,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  v33 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v33, 0, Method_BattleDataDefine_AddUniqueCameraPath__, 0);
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v32,
                                                         (System_Func_TSource__TResult__o *)v33,
                                                         (const MethodInfo_31A3214 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v21 )
    sub_1C7BD40(v34, v34);
  System_Collections_Generic_List_object___AddRange(
    v21,
    v34,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_string__AddRange__);
  v6 = System_Linq_Enumerable__ToList_object_(
         *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 24),
         (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_string___);
  v35 = (System_Collections_Generic_List_object__o *)v6;
  if ( !v6 )
    goto LABEL_47;
  v36 = v6->fields._size + v21->fields._size;
  *(_DWORD *)(v5 + 16) = v36;
  if ( v36 < 1 )
    return;
  if ( !*v14 )
LABEL_47:
    sub_1C7BD40(v6, v7);
  (*v14)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v5 + 20) = 0;
  v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v37,
    (Il2CppObject *)v5,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0);
  *(_QWORD *)(v5 + 32) = v37;
  v38 = (AssetLoader_LoadEndDataHandler_o **)(v5 + 32);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v37, v39, v40, v41, v42, v43, v44);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    v21,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v45 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1C7BD40(v45, v46);
    v48 = BattleDataDefine_TypeInfo;
    current = v71.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v51 = *v38;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1C7BD40(v48, v46);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v51,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v14 )
        sub_1C7BD40(0, v53);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v14, (System_String_o *)current, v54);
    }
    else
    {
      if ( !*v38 )
        sub_1C7BD40(Wrapper__LoadAssetStorage, v53);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))(*v38)->fields.invoke_impl)(
        (*v38)->fields.method_code,
        0,
        (*v38)->fields.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    v35,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v55 = (System_Action_o **)(v5 + 40);
  v71 = v70;
  while ( 1 )
  {
    v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v56 )
      break;
    v58 = this->fields._Perf_k__BackingField;
    if ( !v58 )
      sub_1C7BD40(v56, v57);
    v59 = v71.fields._current;
    v60 = *v55;
    v61 = v58->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v55 )
    {
      v60 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v5,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0);
      *v55 = v60;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)v60, v62, v63, v64, v65, v66, v67);
    }
    if ( !v61 )
      sub_1C7BD40(v56, v57);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v61, (System_String_o *)v59, v60, 1, 0);
    if ( !*v14 )
      sub_1C7BD40(0, v68);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v14, (System_String_o *)v59, v69);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_4CF0B29 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
    sub_1C7BAE8(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__);
    byte_4CF0B29 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v4 = (System_Action_object__o *)sub_1C7BD34(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v4,
          (const MethodInfo_383F83C *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v7 = this->fields.assetSearcherList) == 0) )
  {
    sub_1C7BD40(v5, v6);
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
    sub_1C7BD48(this);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_17:
    sub_1C7BD40(this, assetSearcher);
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
        const MethodInfo_3151A0C *method)
{
  const MethodInfo_319E9E0 **rgctx_data; // x8
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  long double v23; // q0
  Il2CppClass *v24; // x0
  Il2CppClass *v25; // x0

  rgctx_data = (const MethodInfo_319E9E0 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C7BAE8(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_1C7BAE8(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
    sub_1C7BAE8(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    rgctx_data = (const MethodInfo_319E9E0 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C51BD8(method);
      rgctx_data = (const MethodInfo_319E9E0 **)method->rgctx_data;
    }
  }
  v5 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (*(&_2_System_Action_T->_2.bitflags2 + 2) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1C51B7C(v6);
  v8 = (System_Action_object__o *)sub_1C7BD34(_2_System_Action_T);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_349D254 *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)v8,
    (const MethodInfo_315C348 *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(&_6_AssumedBattleAssetLoadManager___c__12_T->_2.bitflags2 + 2) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1C51B7C(inited);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T);
  v12 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*(&v12->_2.bitflags2 + 2) & 1) == 0 )
    v12 = (Il2CppClass *)sub_1C51B7C(inited);
  v13 = (System_Func_object__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1C51B7C(inited);
    if ( !v14->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v15->_2.bitflags2 + 2) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1C51B7C(inited);
    v16 = *(Il2CppObject **)v15->static_fields;
    v13 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      v16,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0);
    v24 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v24->_2.bitflags2 + 2) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C51B7C(v23);
    *((_QWORD *)v24->static_fields + 1) = v13;
    v25 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*(&v25->_2.bitflags2 + 2) & 1) == 0 )
      v25 = (Il2CppClass *)sub_1C51B7C(v23);
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)((char *)v25->static_fields + 8),
      (int32_t)v13,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v13,
    (const MethodInfo_315F5DC *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1C7BD40(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_HashSet_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_HashSet_int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CF0B2D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4CF0B2D = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_T__o *)sub_1C7BD34(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v10,
    (const MethodInfo_36EFD64 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.AudioAssetNameHashSet,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.cameraIdHashSet, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF0B2E & 1) == 0 )
  {
    sub_1C7BAE8(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4CF0B2E = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, 0);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_333B698 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C51B7C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C51B7C();
  v4 = (Il2CppObject *)sub_1C7BD34(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C51B7C();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C51B7C();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C51B7C();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C51B7C();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C51B7C();
  sub_1C7BA8C(*(GrandQuestFolderBoardItem_o **)(v14 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_333B754 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_333B75C *method)
{
  __int64 _3_T; // x8

  _3_T = (__int64)method->klass->rgctx_data->_3_T;
  if ( (*(_BYTE *)(_3_T + 309) & 1) == 0 )
    _3_T = sub_1C51B7C();
  return sub_1C7BC24(x, _3_T) != 0;
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
      sub_1C7BD40(this, _);
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
    sub_1C7BD40(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onLoadFinished->fields.invoke_impl)(
    onLoadFinished->fields.method_code,
    0,
    onLoadFinished->fields.method);
}