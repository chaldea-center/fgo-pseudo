void __fastcall RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCA19 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__, method);
    byte_49FCA19 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    510,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *__fastcall RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCA1A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__, *(_QWORD *)&tabGroup);
    byte_49FCA1A = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_30D41FC *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
}


RoadmapEntity_o *__fastcall RoadmapMaster__GetInProgressRoadmapEntity(
        RoadmapMaster_o *this,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
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
  __int64 v17; // x19
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *SortedDispBoardEntityList; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Predicate_object__o *v25; // x22
  Il2CppObject *Last; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_object__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_object__bool__o *v35; // x22
  RoadmapEntity_o *result; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Func_object__bool__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Func_object__bool__o *v42; // x21

  if ( (byte_49FCA18 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___, roadmapAtlasList);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_RoadmapEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_LastOrDefault_RoadmapEntity___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_SkipWhile_RoadmapEntity___, v7);
    sub_1B640C8(&System_Func_RoadmapEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_RoadmapEntity__FindLast__, v9);
    sub_1B640C8(&System_Predicate_RoadmapEntity__TypeInfo, v10);
    sub_1B640C8(&Method_RoadmapMaster_IsDispAchieved__, v11);
    sub_1B640C8(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__0__, v12);
    sub_1B640C8(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__1__, v13);
    sub_1B640C8(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__2__, v14);
    sub_1B640C8(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__3__, v15);
    sub_1B640C8(&RoadmapMaster___c__DisplayClass5_0_TypeInfo, v16);
    byte_49FCA18 = 1;
  }
  v17 = sub_1B64314(RoadmapMaster___c__DisplayClass5_0_TypeInfo, roadmapAtlasList, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v19, v20),
        SortedDispBoardEntityList = (System_Collections_Generic_List_object__o *)RoadmapMaster__GetSortedDispBoardEntityList(
                                                                                   this,
                                                                                   roadmapAtlasList,
                                                                                   v21),
        v25 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_RoadmapEntity__TypeInfo, v23, v24),
        System_Predicate_object____ctor(v25, (Il2CppObject *)this, Method_RoadmapMaster_IsDispAchieved__, 0LL),
        !SortedDispBoardEntityList) )
  {
    sub_1B64324(v18);
  }
  Last = System_Collections_Generic_List_object___FindLast(
           SortedDispBoardEntityList,
           (System_Predicate_T__o *)v25,
           (const MethodInfo_34AE018 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLast__);
  if ( !Last )
    Last = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
             (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_RoadmapEntity___);
  *(_QWORD *)(v17 + 16) = Last;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Last, v27, v28);
  v31 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RoadmapEntity__bool__TypeInfo, v29, v30);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v17,
    Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__0__,
    0LL);
  v32 = System_Linq_Enumerable__SkipWhile_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2E6FDA4 *)Method_System_Linq_Enumerable_SkipWhile_RoadmapEntity___);
  v35 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RoadmapEntity__bool__TypeInfo, v33, v34);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v17,
    Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__1__,
    0LL);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                v32,
                                (System_Func_TSource__bool__o *)v35,
                                (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
  {
    v39 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RoadmapEntity__bool__TypeInfo, v37, v38);
    System_Func_object__bool____ctor(
      v39,
      (Il2CppObject *)v17,
      Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__2__,
      0LL);
    result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
                                  (System_Func_TSource__bool__o *)v39,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
    if ( !result )
    {
      v42 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RoadmapEntity__bool__TypeInfo, v40, v41);
      System_Func_object__bool____ctor(
        v42,
        (Il2CppObject *)v17,
        Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__3__,
        0LL);
      result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
                                    (System_Func_TSource__bool__o *)v42,
                                    (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
      if ( !result )
        return (RoadmapEntity_o *)System_Linq_Enumerable__LastOrDefault_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
                                    (const MethodInfo_2E603A0 *)Method_System_Linq_Enumerable_LastOrDefault_RoadmapEntity___);
    }
  }
  return result;
}


System_Collections_Generic_List_RoadmapEntity__o *__fastcall RoadmapMaster__GetSortedDispBoardEntityList(
        RoadmapMaster_o *this,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  __int64 v9; // x2
  System_Func_object__bool__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_49FCA17 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, roadmapAtlasList);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RoadmapEntity___, v5);
    sub_1B640C8(&System_Func_RoadmapEntity__bool__TypeInfo, v6);
    sub_1B640C8(&Method_RoadmapMaster_IsDispBoard__, v7);
    byte_49FCA17 = 1;
  }
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(this, roadmapAtlasList, method);
  v10 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_RoadmapEntity__bool__TypeInfo,
                                         SortedExistingBoardEntityList.fields.Item2,
                                         v9);
  System_Func_object__bool____ctor(v10, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)SortedExistingBoardEntityList.fields.Item1,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v11,
                                                               (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o __fastcall RoadmapMaster__GetSortedExistingBoardEntityList(
        RoadmapMaster_o *this,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
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
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  RoadmapMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_object__int__o *_9__3_0; // x21
  Il2CppObject *v31; // x22
  struct RoadmapMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  RoadmapMaster___c_c *v38; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x20
  System_Func_object__int__o *_9__3_1; // x21
  Il2CppObject *v41; // x22
  struct RoadmapMaster___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_object__o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_object__o *v52; // x21
  __int64 v53; // x0
  _BOOL8 v54; // x0
  const MethodInfo *v55; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsDispAchieved; // x0
  int32_t *v58; // x8
  int32_t v59; // w23
  UnityEngine_Object_o *BoardAtlasById; // x23
  _BOOL8 v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  __int64 v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  const MethodInfo_37FDA48 *v75; // x4
  struct System_Collections_Generic_List_RoadmapEntity__o *v76; // x0 OVERLAPPED
  struct System_Collections_Generic_List_UIAtlas__o *v77; // x1
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_RoadmapEntity__o *v80; // [xsp+40h] [xbp-70h] BYREF
  struct System_Collections_Generic_List_UIAtlas__o *v81; // [xsp+48h] [xbp-68h]
  System_ValueTuple_object__object__o v82; // 0:x0.16
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o result; // 0:x0.16

  if ( (byte_49FCA16 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Cast_RoadmapEntity___, roadmapAtlasList);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__, v10);
    sub_1B640C8(&System_Func_RoadmapEntity__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_RoadmapEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_RoadmapEntity___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_List_RoadmapEntity__TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&RoadmapBoardListViewManager_TypeInfo, v20);
    sub_1B640C8(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__, v21);
    sub_1B640C8(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__, v22);
    sub_1B640C8(&RoadmapMaster___c_TypeInfo, v23);
    sub_1B640C8(&Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__, v24);
    byte_49FCA16 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  v25 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2E491D0 *)Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
  v28 = RoadmapMaster___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v28 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v28->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = RoadmapMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_RoadmapEntity__int__TypeInfo, v26, v27);
    System_Func_object__int____ctor(
      _9__3_0,
      v31,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__,
      0LL);
    static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v33, v34);
  }
  v35 = System_Linq_Enumerable__OrderBy_object__int_(
          v29,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
  v38 = RoadmapMaster___c_TypeInfo;
  v39 = v35;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v38 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v38->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = RoadmapMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_RoadmapEntity__int__TypeInfo, v36, v37);
    System_Func_object__int____ctor(
      _9__3_1,
      v41,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__,
      0LL);
    v42 = RoadmapMaster___c_TypeInfo->static_fields;
    v42->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->__9__3_1, (int32_t)_9__3_1, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v39,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  v46 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v45,
                                                       (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_RoadmapEntity__TypeInfo,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
  v52 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( !v46 )
    sub_1B64324(v53);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    v46,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    if ( !v54 )
      break;
    current = v79.fields._current;
    IsDispAchieved = RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)v54, (RoadmapEntity_o *)v79.fields._current, v55);
    if ( IsDispAchieved )
    {
      if ( !current )
        sub_1B64324(IsDispAchieved);
      v58 = (int32_t *)&current[2].klass + 1;
    }
    else
    {
      if ( !current )
        sub_1B64324(IsDispAchieved);
      v58 = (int32_t *)&current[1].monitor + 1;
    }
    v59 = *v58;
    if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(v59, roadmapAtlasList, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v61 = UnityEngine_Object__op_Equality(BoardAtlasById, 0LL, 0LL);
    if ( !v61 )
    {
      if ( !v49 )
        sub_1B64324(v61);
      items = v49->fields._items;
      v65 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
      ++v49->fields._version;
      if ( !items )
        sub_1B64324(v61);
      size = v49->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          current,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v49->fields._size = size + 1;
        v67[4] = (Il2CppClass *)current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)current, v62, v63);
      }
      if ( !v52 )
        sub_1B64324(v68);
      v71 = v52->fields._items;
      v72 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++v52->fields._version;
      if ( !v71 )
        sub_1B64324(v68);
      v73 = v52->fields._size;
      if ( (unsigned int)v73 >= v71->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)BoardAtlasById,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = &v71->obj.klass + v73;
        v52->fields._size = v73 + 1;
        v74[4] = (Il2CppClass *)BoardAtlasById;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)BoardAtlasById, v69, v70);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  v82.fields.Item1 = (Il2CppObject *)&v80;
  v82.fields.Item2 = (Il2CppObject *)v49;
  v80 = 0LL;
  v81 = 0LL;
  System_ValueTuple_object__object____ctor(
    v82,
    (Il2CppObject *)v52,
    (Il2CppObject *)Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__,
    v75);
  v76 = v80;
  v77 = v81;
  result.fields.Item2 = v77;
  result.fields.Item1 = v76;
  return result;
}


bool __fastcall RoadmapMaster__IsDispAchieved(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0

  if ( (byte_49FCA15 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    byte_49FCA15 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B64324(Master_object);
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

  if ( (byte_49FCA14 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    byte_49FCA14 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B64324(Master_object);
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
    sub_1B64324(this);
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

  if ( (byte_49FCA1B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__, entity);
    byte_49FCA1B = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
}


void __fastcall RoadmapMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCA1C & 1) == 0 )
  {
    sub_1B640C8(&RoadmapMaster___c_TypeInfo, v1);
    byte_49FCA1C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RoadmapMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)RoadmapMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return roadmap->fields.tabGroup;
}


int32_t __fastcall RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B64324(this);
  return roadmap->fields.groupIndex;
}


void __fastcall RoadmapMaster___c__DisplayClass5_0___ctor(
        RoadmapMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RoadmapMaster___c__DisplayClass5_0___GetInProgressRoadmapEntity_b__0(
        RoadmapMaster___c__DisplayClass5_0_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  struct RoadmapEntity_o *lastAchievedRoadmap; // x8

  if ( !roadmap || (lastAchievedRoadmap = this->fields.lastAchievedRoadmap) == 0LL )
    sub_1B64324(this);
  return roadmap->fields.tabGroup != lastAchievedRoadmap->fields.tabGroup
      || roadmap->fields.groupIndex != lastAchievedRoadmap->fields.groupIndex;
}


bool __fastcall RoadmapMaster___c__DisplayClass5_0___GetInProgressRoadmapEntity_b__1(
        RoadmapMaster___c__DisplayClass5_0_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  RoadmapMaster___c__DisplayClass5_0_o *v3; // x20

  if ( !this->fields.__4__this )
    goto LABEL_7;
  v3 = this;
  this = (RoadmapMaster___c__DisplayClass5_0_o *)RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)this, roadmap, method);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v3->fields.__4__this || !roadmap )
LABEL_7:
    sub_1B64324(this);
  return roadmap->fields.type == 1;
}


bool __fastcall RoadmapMaster___c__DisplayClass5_0___GetInProgressRoadmapEntity_b__2(
        RoadmapMaster___c__DisplayClass5_0_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  RoadmapMaster___c__DisplayClass5_0_o *v3; // x20

  if ( !this->fields.__4__this )
    goto LABEL_7;
  v3 = this;
  this = (RoadmapMaster___c__DisplayClass5_0_o *)RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)this, roadmap, method);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v3->fields.__4__this || !roadmap )
LABEL_7:
    sub_1B64324(this);
  return roadmap->fields.type == 1;
}


bool __fastcall RoadmapMaster___c__DisplayClass5_0___GetInProgressRoadmapEntity_b__3(
        RoadmapMaster___c__DisplayClass5_0_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1B64324(this);
  return !RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)this, roadmap, method);
}