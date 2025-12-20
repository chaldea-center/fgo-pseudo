void RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D092 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
    byte_4D2D092 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    517,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D093 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
    byte_4D2D093 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_345FF78 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
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
  __int64 v13; // x1
  int32_t LastIndex; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  System_Func_object__bool__o *v16; // x22
  RoadmapEntity_o *result; // x0

  if ( (byte_4D2D091 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Last_RoadmapEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_1C94098(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
    sub_1C94098(&System_Predicate_RoadmapEntity__TypeInfo);
    sub_1C94098(&Method_RoadmapMaster_IsDispBoard__);
    sub_1C94098(&Method_RoadmapMaster_IsWarRewardBoard__);
    sub_1C94098(&Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__);
    byte_4D2D091 = 1;
  }
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                this,
                                roadmapAssetData,
                                roadmapAtlasList,
                                method);
  v8 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_RoadmapMaster_IsWarRewardBoard__, 0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  v10 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v9,
                                                       (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v11 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RoadmapEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__,
    0);
  if ( !v10 )
    sub_1C942F0(v12, v13);
  LastIndex = System_Collections_Generic_List_object___FindLastIndex(
                v10,
                (System_Predicate_T__o *)v11,
                (const MethodInfo_386B778 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
  v15 = System_Linq_Enumerable__Skip_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          LastIndex + 1,
          (const MethodInfo_31DAB18 *)Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v16, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52191056(
                                v15,
                                (System_Func_TSource__bool__o *)v16,
                                (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
    return (RoadmapEntity_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                (const MethodInfo_31C737C *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
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

  if ( (byte_4D2D090 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_RoadmapEntity___);
    sub_1C94098(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1C94098(&Method_RoadmapMaster_IsDispBoard__);
    byte_4D2D090 = 1;
  }
  Item1 = RoadmapMaster__GetSortedExistingBoardEntityList(this, roadmapAssetData, roadmapAtlasList, method).fields.Item1;
  v8 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Item1,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v9,
                                                               (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  RoadmapMaster___c_c *v19; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x21
  System_Func_object__int__o *_9__3_1; // x22
  Il2CppObject *v22; // x23
  struct RoadmapMaster___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x23
  System_Collections_Generic_List_object__o *v32; // x21
  System_Collections_Generic_List_object__o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x2
  Il2CppObject *current; // x23
  _BOOL8 IsDispAchieved; // x0
  __int64 v40; // x1
  int32_t *v41; // x8
  int32_t v42; // w24
  UnityEngine_Object_o *PrefabById; // x25
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  UnityEngine_Object_o *BoardAtlasById; // x24
  _BOOL8 v65; // x0
  __int64 v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  const MethodInfo_3BD51D8 *v93; // x4
  struct System_Collections_Generic_List_RoadmapEntity__o *v94; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v95; // x1
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+20h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_RoadmapEntity__o *v99; // [xsp+40h] [xbp-70h] BYREF
  struct System_Collections_Generic_List_UIAtlas__o *v100; // [xsp+48h] [xbp-68h]
  System_ValueTuple_object__object__o v101; // 0:x0.16
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o result; // 0:x0.16

  if ( (byte_4D2D08F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__);
    sub_1C94098(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_RoadmapEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_RoadmapEntity__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C94098(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__);
    sub_1C94098(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__);
    sub_1C94098(&RoadmapMaster___c_TypeInfo);
    sub_1C94098(&Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__);
    byte_4D2D08F = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v6 = System_Linq_Enumerable__Cast_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_31AAB80 *)Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
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
    _9__3_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v10,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__,
      0);
    static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__OrderBy_object__int_(
          v8,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_31CC104 *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
  v19 = RoadmapMaster___c_TypeInfo;
  v20 = v18;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v19 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v19->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = RoadmapMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v22,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__,
      0);
    v23 = RoadmapMaster___c_TypeInfo->static_fields;
    v23->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v23->__9__3_1, (int32_t)_9__3_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_31DBA10 *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  v31 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v30,
                                                       (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_RoadmapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( !v31 )
    sub_1C942F0(v34, v35);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v97,
    v31,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v98 = v97;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    if ( !v36 )
      break;
    current = v98.fields._current;
    IsDispAchieved = RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)v36, (RoadmapEntity_o *)v98.fields._current, v37);
    if ( IsDispAchieved )
    {
      if ( !current )
        sub_1C942F0(IsDispAchieved, v40);
      v41 = (int32_t *)&current[2].klass + 1;
    }
    else
    {
      if ( !current )
        sub_1C942F0(IsDispAchieved, v40);
      v41 = (int32_t *)&current[1].monitor + 1;
    }
    v42 = *v41;
    if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    PrefabById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindPrefabById(v42, roadmapAssetData, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v44 = UnityEngine_Object__op_Inequality(PrefabById, 0, 0);
    if ( v44 )
    {
      if ( !v32 )
        sub_1C942F0(v44, v45);
      items = v32->fields._items;
      v53 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
      ++v32->fields._version;
      if ( !items )
        sub_1C942F0(v44, v45);
      size = v32->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          current,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &items->obj.klass + size;
        v32->fields._size = size + 1;
        v55[4] = (Il2CppClass *)current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)current, v46, v47, v48, v49, v50, v51);
      }
      if ( !v33 )
        sub_1C942F0(v56, v57);
      v85 = v33->fields._items;
      v86 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++v33->fields._version;
      if ( !v85 )
        sub_1C942F0(v56, v57);
      v87 = v33->fields._size;
      if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          0,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &v85->obj.klass + v87;
        v33->fields._size = v87 + 1;
        v88[4] = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v88 + 4), 0, v58, v59, v60, v61, v62, v63);
      }
    }
    else
    {
      if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
      BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(v42, roadmapAtlasList, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v65 = UnityEngine_Object__op_Inequality(BoardAtlasById, 0, 0);
      if ( v65 )
      {
        if ( !v32 )
          sub_1C942F0(v65, v66);
        v73 = v32->fields._items;
        v74 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
        ++v32->fields._version;
        if ( !v73 )
          sub_1C942F0(v65, v66);
        v75 = v32->fields._size;
        if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            current,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &v73->obj.klass + v75;
          v32->fields._size = v75 + 1;
          v76[4] = (Il2CppClass *)current;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v76 + 4), (int32_t)current, v67, v68, v69, v70, v71, v72);
        }
        if ( !v33 )
          sub_1C942F0(v77, v78);
        v89 = v33->fields._items;
        v90 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v33->fields._version;
        if ( !v89 )
          sub_1C942F0(v77, v78);
        v91 = v33->fields._size;
        if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)BoardAtlasById,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
        }
        else
        {
          v92 = &v89->obj.klass + v91;
          v33->fields._size = v91 + 1;
          v92[4] = (Il2CppClass *)BoardAtlasById;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v92 + 4), (int32_t)BoardAtlasById, v79, v80, v81, v82, v83, v84);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  v101.fields.Item1 = (Il2CppObject *)&v99;
  v101.fields.Item2 = (Il2CppObject *)v32;
  v99 = 0;
  v100 = 0;
  System_ValueTuple_object__object____ctor(
    v101,
    (Il2CppObject *)v33,
    (Il2CppObject *)Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__,
    v93);
  v94 = v99;
  v95 = v100;
  result.fields.Item2 = v95;
  result.fields.Item1 = v94;
  return result;
}


bool RoadmapMaster__IsDispAchieved(RoadmapMaster_o *this, RoadmapEntity_o *roadmap, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4D2D08E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2D08E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1C942F0(Master_object, v5);
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
  __int64 v5; // x1

  if ( (byte_4D2D08D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2D08D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1C942F0(Master_object, v5);
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
    sub_1C942F0(this, 0);
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

  if ( (byte_4D2D094 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
    byte_4D2D094 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D095 & 1) == 0 )
  {
    sub_1C94098(&RoadmapMaster___c_TypeInfo);
    byte_4D2D095 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(RoadmapMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)RoadmapMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C942F0(this, 0);
  return roadmap->fields.tabGroup;
}


int32_t RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1C942F0(this, 0);
  return roadmap->fields.groupIndex;
}