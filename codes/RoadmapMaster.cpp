void RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C437C4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
    byte_4C437C4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    517,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C437C5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
    byte_4C437C5 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_33A5B58 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
}


RoadmapEntity_o *RoadmapMaster__GetInProgressRoadmapEntity(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x20
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  System_Predicate_object__o *v11; // x21
  __int64 v12; // x0
  int32_t LastIndex; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_Func_object__bool__o *v15; // x22
  RoadmapEntity_o *result; // x0

  if ( (byte_4C437C3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Last_RoadmapEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_1C37058(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
    sub_1C37058(&System_Predicate_RoadmapEntity__TypeInfo);
    sub_1C37058(&Method_RoadmapMaster_IsDispBoard__);
    sub_1C37058(&Method_RoadmapMaster_IsWarRewardBoard__);
    sub_1C37058(&Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__);
    byte_4C437C3 = 1;
  }
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                this,
                                roadmapAssetData,
                                roadmapAtlasList,
                                method);
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_RoadmapMaster_IsWarRewardBoard__, 0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  v10 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v9,
                                                       (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v11 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_RoadmapEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__,
    0);
  if ( !v10 )
    sub_1C372B4(v12);
  LastIndex = System_Collections_Generic_List_object___FindLastIndex(
                v10,
                (System_Predicate_T__o *)v11,
                (const MethodInfo_37A3968 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
  v14 = System_Linq_Enumerable__Skip_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          LastIndex + 1,
          (const MethodInfo_31255A8 *)Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
  v15 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v15, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51451648(
                                v14,
                                (System_Func_TSource__bool__o *)v15,
                                (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
    return (RoadmapEntity_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                (const MethodInfo_3112B2C *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
  return result;
}


System_Collections_Generic_List_RoadmapEntity__o *RoadmapMaster__GetSortedDispBoardEntityList(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_RoadmapEntity__o *Item1; // x20
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C437C2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_1C37058(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1C37058(&Method_RoadmapMaster_IsDispBoard__);
    byte_4C437C2 = 1;
  }
  Item1 = RoadmapMaster__GetSortedExistingBoardEntityList(this, roadmapAssetData, roadmapAtlasList, method).fields.Item1;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Item1,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v9,
                                                               (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o RoadmapMaster__GetSortedExistingBoardEntityList(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x0
  RoadmapMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x21
  System_Func_object__int__o *_9__3_0; // x22
  Il2CppObject *v10; // x23
  struct RoadmapMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v14; // x0
  RoadmapMaster___c_c *v15; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x21
  System_Func_object__int__o *_9__3_1; // x22
  Il2CppObject *v18; // x23
  struct RoadmapMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x23
  System_Collections_Generic_List_object__o *v24; // x21
  System_Collections_Generic_List_object__o *v25; // x22
  __int64 v26; // x0
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x2
  Il2CppObject *current; // x23
  _BOOL8 IsDispAchieved; // x0
  int32_t *v31; // x8
  int32_t v32; // w24
  UnityEngine_Object_o *PrefabById; // x25
  _BOOL8 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Object_o *BoardAtlasById; // x24
  _BOOL8 v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  const MethodInfo_3B02E38 *v63; // x4
  struct System_Collections_Generic_List_RoadmapEntity__o *v64; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v65; // x1
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_RoadmapEntity__o *v69; // [xsp+40h] [xbp-70h] BYREF
  struct System_Collections_Generic_List_UIAtlas__o *v70; // [xsp+48h] [xbp-68h]
  System_ValueTuple_object__object__o v71; // 0:x0.16
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o result; // 0:x0.16

  if ( (byte_4C437C1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__);
    sub_1C37058(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_RoadmapEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_RoadmapEntity__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C37058(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__);
    sub_1C37058(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__);
    sub_1C37058(&RoadmapMaster___c_TypeInfo);
    sub_1C37058(&Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__);
    byte_4C437C1 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v6 = System_Linq_Enumerable__Cast_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_30F6330 *)Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
  v7 = RoadmapMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v6;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v7 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v7->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RoadmapMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v10,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__,
      0);
    static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__OrderBy_object__int_(
          v8,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
  v15 = RoadmapMaster___c_TypeInfo;
  v16 = v14;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v15 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v15->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = RoadmapMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v18,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__,
      0);
    v19 = RoadmapMaster___c_TypeInfo->static_fields;
    v19->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v19->__9__3_1, (int32_t)_9__3_1, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  v23 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v22,
                                                       (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_RoadmapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( !v23 )
    sub_1C372B4(v26);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    v23,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v68 = v67;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v68.fields._current;
    IsDispAchieved = RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)v27, (RoadmapEntity_o *)v68.fields._current, v28);
    if ( IsDispAchieved )
    {
      if ( !current )
        sub_1C372B4(IsDispAchieved);
      v31 = (int32_t *)&current[2].klass + 1;
    }
    else
    {
      if ( !current )
        sub_1C372B4(IsDispAchieved);
      v31 = (int32_t *)&current[1].monitor + 1;
    }
    v32 = *v31;
    if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    PrefabById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindPrefabById(v32, roadmapAssetData, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v34 = UnityEngine_Object__op_Inequality(PrefabById, 0, 0);
    if ( v34 )
    {
      if ( !v24 )
        sub_1C372B4(v34);
      items = v24->fields._items;
      v38 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1C372B4(v34);
      size = v24->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          current,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v40[4] = (Il2CppClass *)current;
        sub_1C36FFC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)current, v35, v36);
      }
      if ( !v25 )
        sub_1C372B4(v41);
      v55 = v25->fields._items;
      v56 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++v25->fields._version;
      if ( !v55 )
        sub_1C372B4(v41);
      v57 = v25->fields._size;
      if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          0,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &v55->obj.klass + v57;
        v25->fields._size = v57 + 1;
        v58[4] = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)(v58 + 4), 0, v42, v43);
      }
    }
    else
    {
      if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
      BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(v32, roadmapAtlasList, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v45 = UnityEngine_Object__op_Inequality(BoardAtlasById, 0, 0);
      if ( v45 )
      {
        if ( !v24 )
          sub_1C372B4(v45);
        v48 = v24->fields._items;
        v49 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
        ++v24->fields._version;
        if ( !v48 )
          sub_1C372B4(v45);
        v50 = v24->fields._size;
        if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            current,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          v24->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)current;
          sub_1C36FFC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)current, v46, v47);
        }
        if ( !v25 )
          sub_1C372B4(v52);
        v59 = v25->fields._items;
        v60 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v25->fields._version;
        if ( !v59 )
          sub_1C372B4(v52);
        v61 = v25->fields._size;
        if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)BoardAtlasById,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &v59->obj.klass + v61;
          v25->fields._size = v61 + 1;
          v62[4] = (Il2CppClass *)BoardAtlasById;
          sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 4), (int32_t)BoardAtlasById, v53, v54);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  v71.fields.Item1 = (Il2CppObject *)&v69;
  v71.fields.Item2 = (Il2CppObject *)v24;
  v69 = 0;
  v70 = 0;
  System_ValueTuple_object__object____ctor(
    v71,
    (Il2CppObject *)v25,
    (Il2CppObject *)Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__,
    v63);
  v64 = v69;
  v65 = v70;
  result.fields.Item2 = v65;
  result.fields.Item1 = v64;
  return result;
}


bool RoadmapMaster__IsDispAchieved(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C437C0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C437C0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1C372B4(Master_object);
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Master_object,
           roadmap->fields.displayAchievedCommonReleaseId,
           0,
           0,
           0);
}


bool RoadmapMaster__IsDispBoard(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C437BF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C437BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1C372B4(Master_object);
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Master_object,
           roadmap->fields.displayBoardCommonReleaseId,
           0,
           0,
           0);
}


bool RoadmapMaster__IsWarRewardBoard(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  if ( !roadmap )
    sub_1C372B4(this);
  return roadmap->fields.type == 1;
}


// local variable allocation has failed, the output may be wrong!
bool RoadmapMaster__TryGetEntity(
        RoadmapMaster_o *this,
        RoadmapEntity_o **entity,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C437C6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
    byte_4C437C6 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
}


bool RoadmapMaster___GetInProgressRoadmapEntity_b__5_0(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  _BOOL8 IsDispBoard; // x0
  const MethodInfo *v5; // x2

  IsDispBoard = RoadmapMaster__IsDispBoard(this, roadmap, method);
  return IsDispBoard && RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)IsDispBoard, roadmap, v5);
}


void RoadmapMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C437C7 & 1) == 0 )
  {
    sub_1C37058(&RoadmapMaster___c_TypeInfo);
    byte_4C437C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RoadmapMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)RoadmapMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void RoadmapMaster___c___ctor(RoadmapMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_0(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1C372B4(this);
  return roadmap->fields.tabGroup;
}


int32_t RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1C372B4(this);
  return roadmap->fields.groupIndex;
}