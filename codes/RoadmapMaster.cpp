void __fastcall RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70486 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__, method);
    byte_4A70486 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    510,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *__fastcall RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70487 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__, *(_QWORD *)&tabGroup);
    byte_4A70487 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_312C900 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
}


RoadmapEntity_o *__fastcall RoadmapMaster__GetInProgressRoadmapEntity(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x20
  System_Func_object__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x20
  System_Predicate_object__o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t LastIndex; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  System_Func_object__bool__o *v26; // x22
  RoadmapEntity_o *result; // x0

  if ( (byte_4A70485 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___, roadmapAssetData);
    sub_1B90010(&Method_System_Linq_Enumerable_Last_RoadmapEntity___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_Skip_RoadmapEntity___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_RoadmapEntity___, v10);
    sub_1B90010(&System_Func_RoadmapEntity__bool__TypeInfo, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__, v12);
    sub_1B90010(&System_Predicate_RoadmapEntity__TypeInfo, v13);
    sub_1B90010(&Method_RoadmapMaster_IsDispBoard__, v14);
    sub_1B90010(&Method_RoadmapMaster_IsWarRewardBoard__, v15);
    sub_1B90010(&Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__, v16);
    byte_4A70485 = 1;
  }
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                this,
                                roadmapAssetData,
                                roadmapAtlasList,
                                method);
  v18 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v18, (Il2CppObject *)this, Method_RoadmapMaster_IsWarRewardBoard__, 0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  v20 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v19,
                                                       (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v21 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_RoadmapEntity__TypeInfo);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)this,
    Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__,
    0LL);
  if ( !v20 )
    sub_1B9026C(v22, v23);
  LastIndex = System_Collections_Generic_List_object___FindLastIndex(
                v20,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_3511304 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
  v25 = System_Linq_Enumerable__Skip_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          LastIndex + 1,
          (const MethodInfo_2EC5710 *)Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
  v26 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v26, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48967524(
                                v25,
                                (System_Func_TSource__bool__o *)v26,
                                (const MethodInfo_2EB2F64 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
    return (RoadmapEntity_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                (const MethodInfo_2EB4300 *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
  return result;
}


System_Collections_Generic_List_RoadmapEntity__o *__fastcall RoadmapMaster__GetSortedDispBoardEntityList(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_RoadmapEntity__o *Item1; // x20
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_4A70484 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, roadmapAssetData);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_RoadmapEntity___, v7);
    sub_1B90010(&System_Func_RoadmapEntity__bool__TypeInfo, v8);
    sub_1B90010(&Method_RoadmapMaster_IsDispBoard__, v9);
    byte_4A70484 = 1;
  }
  Item1 = RoadmapMaster__GetSortedExistingBoardEntityList(this, roadmapAssetData, roadmapAtlasList, method).fields.Item1;
  v11 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v11, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Item1,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v12,
                                                               (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o __fastcall RoadmapMaster__GetSortedExistingBoardEntityList(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
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
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  RoadmapMaster___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__int__o *_9__3_0; // x22
  Il2CppObject *v30; // x23
  struct RoadmapMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  RoadmapMaster___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x21
  System_Func_object__int__o *_9__3_1; // x22
  Il2CppObject *v38; // x23
  struct RoadmapMaster___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_List_object__o *v43; // x23
  System_Collections_Generic_List_object__o *v44; // x21
  System_Collections_Generic_List_object__o *v45; // x22
  __int64 v46; // x0
  __int64 v47; // x1
  _BOOL8 v48; // x0
  const MethodInfo *v49; // x2
  Il2CppObject *current; // x23
  _BOOL8 IsDispAchieved; // x0
  __int64 v52; // x1
  int32_t *v53; // x8
  int32_t v54; // w24
  UnityEngine_Object_o *PrefabById; // x25
  _BOOL8 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  UnityEngine_Object_o *BoardAtlasById; // x24
  _BOOL8 v69; // x0
  __int64 v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  int32_t v79; // w2
  int32_t v80; // w3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  const MethodInfo_385FAB0 *v89; // x4
  struct System_Collections_Generic_List_RoadmapEntity__o *v90; // x0 OVERLAPPED
  struct System_Collections_Generic_List_UIAtlas__o *v91; // x1
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+20h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_RoadmapEntity__o *v95; // [xsp+40h] [xbp-70h] BYREF
  struct System_Collections_Generic_List_UIAtlas__o *v96; // [xsp+48h] [xbp-68h]
  System_ValueTuple_object__object__o v97; // 0:x0.16
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o result; // 0:x0.16

  if ( (byte_4A70483 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Cast_RoadmapEntity___, roadmapAssetData);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__, v11);
    sub_1B90010(&System_Func_RoadmapEntity__int__TypeInfo, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_RoadmapEntity__Add__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_UIAtlas__Add__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_RoadmapEntity___ctor__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v17);
    sub_1B90010(&System_Collections_Generic_List_UIAtlas__TypeInfo, v18);
    sub_1B90010(&System_Collections_Generic_List_RoadmapEntity__TypeInfo, v19);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v20);
    sub_1B90010(&RoadmapBoardListViewManager_TypeInfo, v21);
    sub_1B90010(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__, v22);
    sub_1B90010(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__, v23);
    sub_1B90010(&RoadmapMaster___c_TypeInfo, v24);
    sub_1B90010(&Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__, v25);
    byte_4A70483 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v26 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2E9E32C *)Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
  v27 = RoadmapMaster___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v27 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v27->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = RoadmapMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B9025C(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v30,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__,
      0LL);
    static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v32, v33);
  }
  v34 = System_Linq_Enumerable__OrderBy_object__int_(
          v28,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_2EB8740 *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
  v35 = RoadmapMaster___c_TypeInfo;
  v36 = v34;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v35 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v35->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = RoadmapMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v38,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__,
      0LL);
    v39 = RoadmapMaster___c_TypeInfo->static_fields;
    v39->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v39->__9__3_1, (int32_t)_9__3_1, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v36,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_2EC6428 *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  v43 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v42,
                                                       (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_RoadmapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( !v43 )
    sub_1B9026C(v46, v47);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    v43,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v94 = v93;
  while ( 1 )
  {
    v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    if ( !v48 )
      break;
    current = v94.fields._current;
    IsDispAchieved = RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)v48, (RoadmapEntity_o *)v94.fields._current, v49);
    if ( IsDispAchieved )
    {
      if ( !current )
        sub_1B9026C(IsDispAchieved, v52);
      v53 = (int32_t *)&current[2].klass + 1;
    }
    else
    {
      if ( !current )
        sub_1B9026C(IsDispAchieved, v52);
      v53 = (int32_t *)&current[1].monitor + 1;
    }
    v54 = *v53;
    if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    PrefabById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindPrefabById(v54, roadmapAssetData, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v56 = UnityEngine_Object__op_Inequality(PrefabById, 0LL, 0LL);
    if ( v56 )
    {
      if ( !v44 )
        sub_1B9026C(v56, v57);
      items = v44->fields._items;
      v61 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
      ++v44->fields._version;
      if ( !items )
        sub_1B9026C(v56, v57);
      size = v44->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          current,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v44->fields._size = size + 1;
        v63[4] = (Il2CppClass *)current;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)current, v58, v59);
      }
      if ( !v45 )
        sub_1B9026C(v64, v65);
      v81 = v45->fields._items;
      v82 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++v45->fields._version;
      if ( !v81 )
        sub_1B9026C(v64, v65);
      v83 = v45->fields._size;
      if ( (unsigned int)v83 >= v81->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          0LL,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = &v81->obj.klass + v83;
        v45->fields._size = v83 + 1;
        v84[4] = 0LL;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v84 + 4), 0, v66, v67);
      }
    }
    else
    {
      if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
      BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(
                                                 v54,
                                                 roadmapAtlasList,
                                                 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v69 = UnityEngine_Object__op_Inequality(BoardAtlasById, 0LL, 0LL);
      if ( v69 )
      {
        if ( !v44 )
          sub_1B9026C(v69, v70);
        v73 = v44->fields._items;
        v74 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
        ++v44->fields._version;
        if ( !v73 )
          sub_1B9026C(v69, v70);
        v75 = v44->fields._size;
        if ( (unsigned int)v75 >= v73->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v44,
            current,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &v73->obj.klass + v75;
          v44->fields._size = v75 + 1;
          v76[4] = (Il2CppClass *)current;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)current, v71, v72);
        }
        if ( !v45 )
          sub_1B9026C(v77, v78);
        v85 = v45->fields._items;
        v86 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v45->fields._version;
        if ( !v85 )
          sub_1B9026C(v77, v78);
        v87 = v45->fields._size;
        if ( (unsigned int)v87 >= v85->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            (Il2CppObject *)BoardAtlasById,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = &v85->obj.klass + v87;
          v45->fields._size = v87 + 1;
          v88[4] = (Il2CppClass *)BoardAtlasById;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v88 + 4), (int32_t)BoardAtlasById, v79, v80);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  v97.fields.Item1 = (Il2CppObject *)&v95;
  v97.fields.Item2 = (Il2CppObject *)v44;
  v95 = 0LL;
  v96 = 0LL;
  System_ValueTuple_object__object____ctor(
    v97,
    (Il2CppObject *)v45,
    (Il2CppObject *)Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__,
    v89);
  v90 = v95;
  v91 = v96;
  result.fields.Item2 = v91;
  result.fields.Item1 = v90;
  return result;
}


bool __fastcall RoadmapMaster__IsDispAchieved(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4A70482 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap);
    sub_1B90010(&DataManager_TypeInfo, v4);
    byte_4A70482 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B9026C(Master_object, v6);
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Master_object,
           roadmap->fields.displayAchievedCommonReleaseId,
           0LL,
           0,
           0LL);
}


bool __fastcall RoadmapMaster__IsDispBoard(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4A70481 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap);
    sub_1B90010(&DataManager_TypeInfo, v4);
    byte_4A70481 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B9026C(Master_object, v6);
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Master_object,
           roadmap->fields.displayBoardCommonReleaseId,
           0LL,
           0,
           0LL);
}


bool __fastcall RoadmapMaster__IsWarRewardBoard(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B9026C(this, 0LL);
  return roadmap->fields.type == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RoadmapMaster__TryGetEntity(
        RoadmapMaster_o *this,
        RoadmapEntity_o **entity,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A70488 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__, entity);
    byte_4A70488 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
}


bool __fastcall RoadmapMaster___GetInProgressRoadmapEntity_b__5_0(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  _BOOL8 IsDispBoard; // x0
  const MethodInfo *v5; // x2

  IsDispBoard = RoadmapMaster__IsDispBoard(this, roadmap, method);
  return IsDispBoard && RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)IsDispBoard, roadmap, v5);
}


void __fastcall RoadmapMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70489 & 1) == 0 )
  {
    sub_1B90010(&RoadmapMaster___c_TypeInfo, v1);
    byte_4A70489 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(RoadmapMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)RoadmapMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall RoadmapMaster___c___ctor(RoadmapMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_0(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B9026C(this, 0LL);
  return roadmap->fields.tabGroup;
}


int32_t __fastcall RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B9026C(this, 0LL);
  return roadmap->fields.groupIndex;
}