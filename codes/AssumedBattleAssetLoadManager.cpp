void AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972E07 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
    byte_5972E07 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetSearcherList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleEntity_o *AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1

  if ( (byte_5972E01 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    byte_5972E01 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v3);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_3F1323C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  struct System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  AssumedBattleAssetLoadManager___c_c *v10; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v13; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *v27; // x1
  Il2CppObject *v28; // x21
  Il2CppClass *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x21
  Il2CppClass *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  System_String_o *monitor; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  Il2CppObject *v52; // x21
  Il2CppClass *v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *v60; // [xsp+28h] [xbp-48h]

  if ( (byte_5972E06 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EffectMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__);
    sub_2213A60(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_5972E06 = 1;
  }
  v60 = 0;
  name = 0;
  path = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_61;
  v8 = Master_object;
  EffectIdHashSet = resultParam->fields.EffectIdHashSet;
  v10 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !*(&AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo, v7);
    v10 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v7);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v13,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0);
    v14 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v14->__9__16_0 = _9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__16_0, (int32_t)_9__16_0, v15, v16, v17, v18, v19, v20);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_61:
    sub_2213CDC(Master_object, v7);
  klass = Master_object->klass;
  v22 = Master_object;
  v23 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_17;
    }
    v25 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v25 = sub_224BC3C(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  Entity = (Il2CppObject *)(*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v25)(
                             v22,
                             *(_QWORD *)(v25 + 8));
  v60 = Entity;
  if ( !Entity )
LABEL_47:
    sub_2213CDC(Entity, v27);
  v28 = Entity;
  while ( 1 )
  {
    v29 = v28->klass;
    v30 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_25;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_25:
      v32 = sub_224BC3C(v28, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
    if ( (v33 & 1) == 0 )
      break;
    v35 = v60;
    if ( !v60 )
      sub_2213CDC(v33, v34);
    v36 = v60->klass;
    v37 = *(unsigned __int16 *)&v60->klass->_2.rank;
    if ( *(_WORD *)&v60->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v38 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_33;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_33:
      v39 = sub_224BC3C(v60, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v40 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
    if ( !v8 )
      sub_2213CDC(v40, (unsigned int)v40);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v8,
               v40,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_2213CDC(0, v27);
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v27);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, 0);
      Entity = (Il2CppObject *)System_String__IsNullOrEmpty(path, 0);
      if ( ((unsigned __int8)Entity & 1) == 0 )
      {
        if ( !v4
          || (items = v4->fields._items,
              v27 = (Il2CppObject *)path,
              v49 = Method_System_Collections_Generic_List_string__Add__,
              ++v4->fields._version,
              !items) )
        {
          sub_2213CDC(Entity, v27);
        }
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v4,
            v27,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          v4->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v27;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v27, v42, v43, v44, v45, v46, v47);
        }
      }
    }
    v28 = v60;
    if ( !v60 )
      goto LABEL_47;
  }
  v52 = v60;
  if ( v60 )
  {
    v53 = v60->klass;
    v54 = *(unsigned __int16 *)&v60->klass->_2.rank;
    if ( *(_WORD *)&v60->klass->_2.rank )
    {
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_53;
      }
      v56 = (__int64)&v53->vtable[*v55];
    }
    else
    {
LABEL_53:
      v56 = sub_224BC3C(v60, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8));
  }
  return (System_Collections_Generic_List_string__o *)v4;
}


void AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Perf_k__BackingField = perf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)perf,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool AssumedBattleAssetLoadManager__IsPreloading(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  AssumedBattleAssetLoadManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v7; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5972E02 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
    sub_2213A60(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    sub_2213A60(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__);
    sub_2213A60(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_5972E02 = 1;
  }
  v3 = AssumedBattleAssetLoadManager___c_TypeInfo;
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  if ( !*(&AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo, method);
    v3 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__10_0 = (System_Func_object__bool__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__10_0, v7, Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, 0);
    v8 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v8->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__10_0, (int32_t)_9__10_0, v9, v10, v11, v12, v13, v14);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
}


void AssumedBattleAssetLoadManager__Preload(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssumedBattleAssetLoadManager_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *assetSearcherList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0

  v9 = this;
  if ( (byte_5972E03 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
    byte_5972E03 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&assetSearcher->fields.manager,
    (int32_t)v9,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  AssumedBattleAssetLoadManager__PreloadLocal(v9, assetSearcher, v10);
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
                                              assetSearcher,
                                              v11);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  assetSearcherList = (System_Collections_Generic_List_object__o *)v9->fields.assetSearcherList;
  if ( !assetSearcherList
    || (items = assetSearcherList->fields._items,
        v20 = Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
        ++assetSearcherList->fields._version,
        !items) )
  {
LABEL_11:
    sub_2213CDC(this, assetSearcher);
  }
  size = assetSearcherList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      assetSearcherList,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    assetSearcherList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)assetSearcher;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)assetSearcher, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  AssumedBattleAssetSearcherBase_o **v14; // x21
  __int64 v15; // x1
  __int64 v16; // x22
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  AssumedBattleAssetLoadManager___c_c *v22; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v25; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  System_Func_T__TResult__o *v34; // x25
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_List_object__o *v36; // x22
  int v37; // w8
  AssetLoader_LoadEndDataHandler_c *v38; // x0
  AssetLoader_LoadEndDataHandler_o *v39; // x25
  AssetLoader_LoadEndDataHandler_o **v40; // x24
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  _BOOL8 v47; // x0
  __int64 v48; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v50; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v53; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  _BOOL8 v57; // x0
  __int64 v58; // x1
  struct BattlePerformance_o *v59; // x8
  System_Action_o *v60; // x24
  Il2CppObject *v61; // x22
  AssetStorageLoadWrapper_o *v62; // x23
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x1
  const MethodInfo *v70; // x2
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5972E05 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleDataDefine_AddUniqueCameraPath__);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&System_Func_int__string__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__);
    sub_2213A60(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__);
    sub_2213A60(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__);
    sub_2213A60(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
    sub_2213A60(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_5972E05 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v5 = sub_2213CCC(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 24) = assetSearcher;
  v14 = (AssumedBattleAssetSearcherBase_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)assetSearcher, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    sub_2213CDC(0, v15);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 24) + 376LL))(
          *(_QWORD *)(v5 + 24),
          *(_QWORD *)(**(_QWORD **)(v5 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v16,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v16,
                                      v17);
  if ( !v16 )
    sub_2213CDC(EffectPathListFromAnalyzedParam, v19);
  v20 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v21 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 32);
  v22 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !*(&AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo, v19);
    v22 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__14_1 = static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v19);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__14_1, v25, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0);
    v26 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v26->__9__14_1 = _9__14_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__14_1, (int32_t)_9__14_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Linq_Enumerable__Where_int_(
          v21,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v34 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v34, 0, Method_BattleDataDefine_AddUniqueCameraPath__, 0);
  v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v33,
                                                         (System_Func_TSource__TResult__o *)v34,
                                                         (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v20 )
    sub_2213CDC(v35, v35);
  System_Collections_Generic_List_object___AddRange(
    v20,
    v35,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_string__AddRange__);
  v6 = System_Linq_Enumerable__ToList_object_(
         *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 24),
         (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___);
  v36 = (System_Collections_Generic_List_object__o *)v6;
  if ( !v6 )
    goto LABEL_47;
  v37 = v6->fields._size + v20->fields._size;
  *(_DWORD *)(v5 + 16) = v37;
  if ( v37 < 1 )
    return;
  if ( !*v14 )
LABEL_47:
    sub_2213CDC(v6, v7);
  v38 = AssetLoader_LoadEndDataHandler_TypeInfo;
  (*v14)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v5 + 20) = 0;
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(v38);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v5,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0);
  *(_QWORD *)(v5 + 32) = v39;
  v40 = (AssetLoader_LoadEndDataHandler_o **)(v5 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v39, v41, v42, v43, v44, v45, v46);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v20,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v72 = v71;
  v71.fields._list = 0;
  *(_QWORD *)&v71.fields._index = &v72;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v47 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_2213CDC(v47, v48);
    v50 = BattleDataDefine_TypeInfo;
    current = v72.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v53 = *v40;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v48);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_2213CDC(v50, v48);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v53,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v14 )
        sub_2213CDC(0, v55);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v14, (System_String_o *)current, v56);
    }
    else
    {
      if ( !*v40 )
        sub_2213CDC(Wrapper__LoadAssetStorage, v55);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))(*v40)->fields.invoke_impl)(
        (*v40)->fields.method_code,
        0,
        (*v40)->fields.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v36,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v72 = v71;
  v71.fields._list = 0;
  *(_QWORD *)&v71.fields._index = &v72;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v57 )
      break;
    v59 = this->fields._Perf_k__BackingField;
    if ( !v59 )
      sub_2213CDC(v57, v58);
    v60 = *(System_Action_o **)(v5 + 40);
    v61 = v72.fields._current;
    v62 = v59->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !v60 )
    {
      v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v5,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0);
      *(_QWORD *)(v5 + 40) = v60;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v60, v63, v64, v65, v66, v67, v68);
    }
    if ( !v62 )
      sub_2213CDC(v57, v58);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v62, (System_String_o *)v61, v60, 1, 0);
    if ( !*v14 )
      sub_2213CDC(0, v69);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v14, (System_String_o *)v61, v70);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_5972E04 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
    sub_2213A60(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__);
    byte_5972E04 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v4 = (System_Action_object__o *)sub_2213CCC(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v4,
          (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v7 = this->fields.assetSearcherList) == 0) )
  {
    sub_2213CDC(v5, v6);
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
    sub_2213CE4(this);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_17:
    sub_2213CDC(this, assetSearcher);
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
        const MethodInfo_37D2894 *method)
{
  const MethodInfo_388851C **rgctx_data; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x21
  long double v6; // q0
  Il2CppClass *_2_System_Action_T; // x8
  System_Action_object__o *v8; // x22
  __int64 v9; // x1
  long double v10; // q0
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_6_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppClass *v13; // x0
  System_Func_object__bool__o *v14; // x21
  Il2CppClass *v15; // x0
  Il2CppClass *v16; // x0
  Il2CppObject *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  long double v24; // q0
  Il2CppClass *v25; // x0
  Il2CppClass *v26; // x0

  rgctx_data = (const MethodInfo_388851C **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_2213A60(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
    sub_2213A60(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    rgctx_data = (const MethodInfo_388851C **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = (const MethodInfo_388851C **)method->rgctx_data;
    }
  }
  v5 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (*((_WORD *)&_2_System_Action_T->_2.bitflags2 + 1) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_224B908(v6);
  v8 = (System_Action_object__o *)sub_2213CCC(_2_System_Action_T);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_3F45298 *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)v8,
    (const MethodInfo_381282C *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*((_WORD *)&_6_AssumedBattleAssetLoadManager___c__12_T->_2.bitflags2 + 1) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_224B908(v10);
  if ( !*(&_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished + 1) )
    *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T, v9);
  v13 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (*((_WORD *)&v13->_2.bitflags2 + 1) & 1) == 0 )
    v13 = (Il2CppClass *)sub_224B908(v10);
  v14 = (System_Func_object__bool__o *)*((_QWORD *)v13->static_fields + 1);
  if ( !v14 )
  {
    v15 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*((_WORD *)&v15->_2.bitflags2 + 1) & 1) == 0 )
      v15 = (Il2CppClass *)sub_224B908(v10);
    if ( !*(&v15->_2.cctor_finished + 1) )
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v15, v9);
    v16 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*((_WORD *)&v16->_2.bitflags2 + 1) & 1) == 0 )
      v16 = (Il2CppClass *)sub_224B908(v10);
    v17 = *(Il2CppObject **)v16->static_fields;
    v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      v17,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0);
    v25 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*((_WORD *)&v25->_2.bitflags2 + 1) & 1) == 0 )
      v25 = (Il2CppClass *)sub_224B908(v24);
    *((_QWORD *)v25->static_fields + 1) = v14;
    v26 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (*((_WORD *)&v26->_2.bitflags2 + 1) & 1) == 0 )
      v26 = (Il2CppClass *)sub_224B908(v24);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)v26->static_fields + 8),
      (int32_t)v14,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v14,
    (const MethodInfo_3815910 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Perf_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_HashSet_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_HashSet_int__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5972E08 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_5972E08 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v10,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.AudioAssetNameHashSet,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cameraIdHashSet,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972E09 & 1) == 0 )
  {
    sub_2213A60(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_5972E09 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_3AFC060 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_3AFC138 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_3AFC140 *method)
{
  __int64 _3_T; // x8

  _3_T = (__int64)method->klass->rgctx_data->_3_T;
  if ( (*(_WORD *)(_3_T + 309) & 1) == 0 )
    _3_T = sub_224B908();
  return sub_2213BB4(x, _3_T) != 0;
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
      sub_2213CDC(this, _);
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
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onLoadFinished->fields.invoke_impl)(
    onLoadFinished->fields.method_code,
    0,
    onLoadFinished->fields.method);
}