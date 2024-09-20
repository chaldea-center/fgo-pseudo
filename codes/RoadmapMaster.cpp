void __fastcall RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B77A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
    byte_4A5B77A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    510,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *__fastcall RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B77B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
    byte_4A5B77B = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_311DC8C *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
}


RoadmapEntity_o *__fastcall RoadmapMaster__GetInProgressRoadmapEntity(
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
  __int64 v13; // x1
  int32_t LastIndex; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  System_Func_object__bool__o *v16; // x22
  RoadmapEntity_o *result; // x0

  if ( (byte_4A5B779 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Last_RoadmapEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_1B885B0(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
    sub_1B885B0(&System_Predicate_RoadmapEntity__TypeInfo);
    sub_1B885B0(&Method_RoadmapMaster_IsDispBoard__);
    sub_1B885B0(&Method_RoadmapMaster_IsWarRewardBoard__);
    sub_1B885B0(&Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__);
    byte_4A5B779 = 1;
  }
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                this,
                                roadmapAssetData,
                                roadmapAtlasList,
                                method);
  v8 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_RoadmapMaster_IsWarRewardBoard__, 0LL);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  v10 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v9,
                                                       (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RoadmapEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__,
    0LL);
  if ( !v10 )
    sub_1B8880C(v12, v13);
  LastIndex = System_Collections_Generic_List_object___FindLastIndex(
                v10,
                (System_Predicate_T__o *)v11,
                (const MethodInfo_34FE178 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
  v15 = System_Linq_Enumerable__Skip_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          LastIndex + 1,
          (const MethodInfo_2EB6E60 *)Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
  v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v16, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                v15,
                                (System_Func_TSource__bool__o *)v16,
                                (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
    return (RoadmapEntity_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                (const MethodInfo_2EA59EC *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
  return result;
}


System_Collections_Generic_List_RoadmapEntity__o *__fastcall RoadmapMaster__GetSortedDispBoardEntityList(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_RoadmapEntity__o *Item1; // x20
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4A5B778 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_1B885B0(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1B885B0(&Method_RoadmapMaster_IsDispBoard__);
    byte_4A5B778 = 1;
  }
  Item1 = RoadmapMaster__GetSortedExistingBoardEntityList(this, roadmapAssetData, roadmapAtlasList, method).fields.Item1;
  v8 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Item1,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v9,
                                                               (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o __fastcall RoadmapMaster__GetSortedExistingBoardEntityList(
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
  int32_t v13; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v14; // x0
  RoadmapMaster___c_c *v15; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x21
  System_Func_object__int__o *_9__3_1; // x22
  Il2CppObject *v18; // x23
  struct RoadmapMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x23
  System_Collections_Generic_List_object__o *v24; // x21
  System_Collections_Generic_List_object__o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x2
  Il2CppObject *current; // x23
  _BOOL8 IsDispAchieved; // x0
  __int64 v32; // x1
  int32_t *v33; // x8
  int32_t v34; // w24
  UnityEngine_Object_o *PrefabById; // x25
  _BOOL8 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  UnityEngine_Object_o *BoardAtlasById; // x24
  _BOOL8 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  const MethodInfo_384D2F4 *v69; // x4
  struct System_Collections_Generic_List_RoadmapEntity__o *v70; // x0 OVERLAPPED
  struct System_Collections_Generic_List_UIAtlas__o *v71; // x1
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+20h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_RoadmapEntity__o *v75; // [xsp+40h] [xbp-70h] BYREF
  struct System_Collections_Generic_List_UIAtlas__o *v76; // [xsp+48h] [xbp-68h]
  System_ValueTuple_object__object__o v77; // 0:x0.16
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o result; // 0:x0.16

  if ( (byte_4A5B777 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__);
    sub_1B885B0(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RoadmapEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_RoadmapEntity__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RoadmapBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__);
    sub_1B885B0(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__);
    sub_1B885B0(&RoadmapMaster___c_TypeInfo);
    sub_1B885B0(&Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__);
    byte_4A5B777 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v6 = System_Linq_Enumerable__Cast_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_2E8FA18 *)Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
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
    _9__3_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v10,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__,
      0LL);
    static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__OrderBy_object__int_(
          v8,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
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
    _9__3_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v18,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__,
      0LL);
    v19 = RoadmapMaster___c_TypeInfo->static_fields;
    v19->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->__9__3_1, (int32_t)_9__3_1, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  v23 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v22,
                                                       (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RoadmapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( !v23 )
    sub_1B8880C(v26, v27);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    v23,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v74 = v73;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    if ( !v28 )
      break;
    current = v74.fields._current;
    IsDispAchieved = RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)v28, (RoadmapEntity_o *)v74.fields._current, v29);
    if ( IsDispAchieved )
    {
      if ( !current )
        sub_1B8880C(IsDispAchieved, v32);
      v33 = (int32_t *)&current[2].klass + 1;
    }
    else
    {
      if ( !current )
        sub_1B8880C(IsDispAchieved, v32);
      v33 = (int32_t *)&current[1].monitor + 1;
    }
    v34 = *v33;
    if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    PrefabById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindPrefabById(v34, roadmapAssetData, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v36 = UnityEngine_Object__op_Inequality(PrefabById, 0LL, 0LL);
    if ( v36 )
    {
      if ( !v24 )
        sub_1B8880C(v36, v37);
      items = v24->fields._items;
      v41 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1B8880C(v36, v37);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v43[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)current, v38, v39);
      }
      if ( !v25 )
        sub_1B8880C(v44, v45);
      v61 = v25->fields._items;
      v62 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++v25->fields._version;
      if ( !v61 )
        sub_1B8880C(v44, v45);
      v63 = v25->fields._size;
      if ( (unsigned int)v63 >= v61->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          0LL,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &v61->obj.klass + v63;
        v25->fields._size = v63 + 1;
        v64[4] = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), 0, v46, v47);
      }
    }
    else
    {
      if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
      BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(
                                                 v34,
                                                 roadmapAtlasList,
                                                 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v49 = UnityEngine_Object__op_Inequality(BoardAtlasById, 0LL, 0LL);
      if ( v49 )
      {
        if ( !v24 )
          sub_1B8880C(v49, v50);
        v53 = v24->fields._items;
        v54 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
        ++v24->fields._version;
        if ( !v53 )
          sub_1B8880C(v49, v50);
        v55 = v24->fields._size;
        if ( (unsigned int)v55 >= v53->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            current,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &v53->obj.klass + v55;
          v24->fields._size = v55 + 1;
          v56[4] = (Il2CppClass *)current;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)current, v51, v52);
        }
        if ( !v25 )
          sub_1B8880C(v57, v58);
        v65 = v25->fields._items;
        v66 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v25->fields._version;
        if ( !v65 )
          sub_1B8880C(v57, v58);
        v67 = v25->fields._size;
        if ( (unsigned int)v67 >= v65->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)BoardAtlasById,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &v65->obj.klass + v67;
          v25->fields._size = v67 + 1;
          v68[4] = (Il2CppClass *)BoardAtlasById;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)BoardAtlasById, v59, v60);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  v77.fields.Item1 = (Il2CppObject *)&v75;
  v77.fields.Item2 = (Il2CppObject *)v24;
  v75 = 0LL;
  v76 = 0LL;
  System_ValueTuple_object__object____ctor(
    v77,
    (Il2CppObject *)v25,
    (Il2CppObject *)Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__,
    v69);
  v70 = v75;
  v71 = v76;
  result.fields.Item2 = v71;
  result.fields.Item1 = v70;
  return result;
}


bool __fastcall RoadmapMaster__IsDispAchieved(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4A5B776 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B776 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B8880C(Master_object, v5);
  return CommonReleaseMaster__IsOpen(
           (CommonReleaseMaster_o *)Master_object,
           roadmap->fields.displayAchievedCommonReleaseId,
           0LL,
           0,
           0LL);
}


bool __fastcall RoadmapMaster__IsDispBoard(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4A5B775 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B775 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B8880C(Master_object, v5);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5B77C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
    byte_4A5B77C = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B77D & 1) == 0 )
  {
    sub_1B885B0(&RoadmapMaster___c_TypeInfo);
    byte_4A5B77D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RoadmapMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)RoadmapMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return roadmap->fields.tabGroup;
}


int32_t __fastcall RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B8880C(this, 0LL);
  return roadmap->fields.groupIndex;
}