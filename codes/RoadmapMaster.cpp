void __fastcall RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB12 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__, method);
    byte_49FEB12 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    510,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *__fastcall RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEB13 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__, *(_QWORD *)&tabGroup);
    byte_49FEB13 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_30D64D8 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
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
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_object__o *SortedDispBoardEntityList; // x20
  System_Predicate_object__o *v24; // x22
  Il2CppObject *Last; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_Func_object__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  System_Func_object__bool__o *v30; // x22
  RoadmapEntity_o *result; // x0
  System_Func_object__bool__o *v32; // x21
  System_Func_object__bool__o *v33; // x21

  if ( (byte_49FEB11 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___, roadmapAtlasList);
    sub_1B64870(&Method_System_Linq_Enumerable_First_RoadmapEntity___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_LastOrDefault_RoadmapEntity___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_SkipWhile_RoadmapEntity___, v7);
    sub_1B64870(&System_Func_RoadmapEntity__bool__TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_RoadmapEntity__FindLast__, v9);
    sub_1B64870(&System_Predicate_RoadmapEntity__TypeInfo, v10);
    sub_1B64870(&Method_RoadmapMaster_IsDispAchieved__, v11);
    sub_1B64870(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__0__, v12);
    sub_1B64870(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__1__, v13);
    sub_1B64870(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__2__, v14);
    sub_1B64870(&Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__3__, v15);
    sub_1B64870(&RoadmapMaster___c__DisplayClass5_0_TypeInfo, v16);
    byte_49FEB11 = 1;
  }
  v17 = sub_1B64ABC(RoadmapMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 24) = this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v20, v21),
        SortedDispBoardEntityList = (System_Collections_Generic_List_object__o *)RoadmapMaster__GetSortedDispBoardEntityList(
                                                                                   this,
                                                                                   roadmapAtlasList,
                                                                                   v22),
        v24 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_RoadmapEntity__TypeInfo),
        System_Predicate_object____ctor(v24, (Il2CppObject *)this, Method_RoadmapMaster_IsDispAchieved__, 0LL),
        !SortedDispBoardEntityList) )
  {
    sub_1B64ACC(v18, v19);
  }
  Last = System_Collections_Generic_List_object___FindLast(
           SortedDispBoardEntityList,
           (System_Predicate_T__o *)v24,
           (const MethodInfo_34B02F4 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLast__);
  if ( !Last )
    Last = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
             (const MethodInfo_2E5CD44 *)Method_System_Linq_Enumerable_First_RoadmapEntity___);
  *(_QWORD *)(v17 + 16) = Last;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Last, v26, v27);
  v28 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v17,
    Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__SkipWhile_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2E72080 *)Method_System_Linq_Enumerable_SkipWhile_RoadmapEntity___);
  v30 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v17,
    Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__1__,
    0LL);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48626624(
                                v29,
                                (System_Func_TSource__bool__o *)v30,
                                (const MethodInfo_2E5FBC0 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
  {
    v32 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RoadmapEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)v17,
      Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__2__,
      0LL);
    result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48626624(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
                                  (System_Func_TSource__bool__o *)v32,
                                  (const MethodInfo_2E5FBC0 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
    if ( !result )
    {
      v33 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RoadmapEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v33,
        (Il2CppObject *)v17,
        Method_RoadmapMaster___c__DisplayClass5_0__GetInProgressRoadmapEntity_b__3__,
        0LL);
      result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48626624(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
                                    (System_Func_TSource__bool__o *)v33,
                                    (const MethodInfo_2E5FBC0 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
      if ( !result )
        return (RoadmapEntity_o *)System_Linq_Enumerable__LastOrDefault_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
                                    (const MethodInfo_2E6267C *)Method_System_Linq_Enumerable_LastOrDefault_RoadmapEntity___);
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
  struct System_Collections_Generic_List_RoadmapEntity__o *Item1; // x20
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_49FEB10 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, roadmapAtlasList);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_RoadmapEntity___, v5);
    sub_1B64870(&System_Func_RoadmapEntity__bool__TypeInfo, v6);
    sub_1B64870(&Method_RoadmapMaster_IsDispBoard__, v7);
    byte_49FEB10 = 1;
  }
  Item1 = RoadmapMaster__GetSortedExistingBoardEntityList(this, roadmapAtlasList, method).fields.Item1;
  v9 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Item1,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v10,
                                                               (const MethodInfo_2E772F8 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
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
  RoadmapMaster___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__int__o *_9__3_0; // x21
  Il2CppObject *v29; // x22
  struct RoadmapMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x0
  RoadmapMaster___c_c *v34; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x20
  System_Func_object__int__o *_9__3_1; // x21
  Il2CppObject *v37; // x22
  struct RoadmapMaster___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_List_object__o *v42; // x22
  System_Collections_Generic_List_object__o *v43; // x20
  System_Collections_Generic_List_object__o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  const MethodInfo *v48; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsDispAchieved; // x0
  __int64 v51; // x1
  int32_t *v52; // x8
  int32_t v53; // w23
  UnityEngine_Object_o *BoardAtlasById; // x23
  _BOOL8 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  const MethodInfo_37FFD24 *v71; // x4
  struct System_Collections_Generic_List_RoadmapEntity__o *v72; // x0 OVERLAPPED
  struct System_Collections_Generic_List_UIAtlas__o *v73; // x1
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_RoadmapEntity__o *v76; // [xsp+40h] [xbp-70h] BYREF
  struct System_Collections_Generic_List_UIAtlas__o *v77; // [xsp+48h] [xbp-68h]
  System_ValueTuple_object__object__o v78; // 0:x0.16
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o result; // 0:x0.16

  if ( (byte_49FEB0F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Cast_RoadmapEntity___, roadmapAtlasList);
    sub_1B64870(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__, v10);
    sub_1B64870(&System_Func_RoadmapEntity__int__TypeInfo, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_RoadmapEntity__Add__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_UIAtlas__Add__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_RoadmapEntity___ctor__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v16);
    sub_1B64870(&System_Collections_Generic_List_UIAtlas__TypeInfo, v17);
    sub_1B64870(&System_Collections_Generic_List_RoadmapEntity__TypeInfo, v18);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v19);
    sub_1B64870(&RoadmapBoardListViewManager_TypeInfo, v20);
    sub_1B64870(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__, v21);
    sub_1B64870(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__, v22);
    sub_1B64870(&RoadmapMaster___c_TypeInfo, v23);
    sub_1B64870(&Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__, v24);
    byte_49FEB0F = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v25 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2E4B4AC *)Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
  v26 = RoadmapMaster___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v26 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v26->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = RoadmapMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v29,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__,
      0LL);
    static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v31, v32);
  }
  v33 = System_Linq_Enumerable__OrderBy_object__int_(
          v27,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_2E6539C *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
  v34 = RoadmapMaster___c_TypeInfo;
  v35 = v33;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo);
    v34 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v34->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = RoadmapMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v37,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__,
      0LL);
    v38 = RoadmapMaster___c_TypeInfo->static_fields;
    v38->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v38->__9__3_1, (int32_t)_9__3_1, v39, v40);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v35,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_2E72CCC *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  v42 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v41,
                                                       (const MethodInfo_2E772F8 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v43 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_RoadmapEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( !v42 )
    sub_1B64ACC(v45, v46);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v42,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v75,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    if ( !v47 )
      break;
    current = v75.fields._current;
    IsDispAchieved = RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)v47, (RoadmapEntity_o *)v75.fields._current, v48);
    if ( IsDispAchieved )
    {
      if ( !current )
        sub_1B64ACC(IsDispAchieved, v51);
      v52 = (int32_t *)&current[2].klass + 1;
    }
    else
    {
      if ( !current )
        sub_1B64ACC(IsDispAchieved, v51);
      v52 = (int32_t *)&current[1].monitor + 1;
    }
    v53 = *v52;
    if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(v53, roadmapAtlasList, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v55 = UnityEngine_Object__op_Equality(BoardAtlasById, 0LL, 0LL);
    if ( !v55 )
    {
      if ( !v43 )
        sub_1B64ACC(v55, v56);
      items = v43->fields._items;
      v60 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
      ++v43->fields._version;
      if ( !items )
        sub_1B64ACC(v55, v56);
      size = v43->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          current,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &items->obj.klass + size;
        v43->fields._size = size + 1;
        v62[4] = (Il2CppClass *)current;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)current, v57, v58);
      }
      if ( !v44 )
        sub_1B64ACC(v63, v64);
      v67 = v44->fields._items;
      v68 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++v44->fields._version;
      if ( !v67 )
        sub_1B64ACC(v63, v64);
      v69 = v44->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)BoardAtlasById,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &v67->obj.klass + v69;
        v44->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)BoardAtlasById;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)BoardAtlasById, v65, v66);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v75,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  v78.fields.Item1 = (Il2CppObject *)&v76;
  v78.fields.Item2 = (Il2CppObject *)v43;
  v76 = 0LL;
  v77 = 0LL;
  System_ValueTuple_object__object____ctor(
    v78,
    (Il2CppObject *)v44,
    (Il2CppObject *)Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__,
    v71);
  v72 = v76;
  v73 = v77;
  result.fields.Item2 = v73;
  result.fields.Item1 = v72;
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

  if ( (byte_49FEB0E & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap);
    sub_1B64870(&DataManager_TypeInfo, v4);
    byte_49FEB0E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B64ACC(Master_object, v6);
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

  if ( (byte_49FEB0D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap);
    sub_1B64870(&DataManager_TypeInfo, v4);
    byte_49FEB0D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1B64ACC(Master_object, v6);
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
    sub_1B64ACC(this, 0LL);
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

  if ( (byte_49FEB14 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__, entity);
    byte_49FEB14 = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
}


void __fastcall RoadmapMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FEB15 & 1) == 0 )
  {
    sub_1B64870(&RoadmapMaster___c_TypeInfo, v1);
    byte_49FEB15 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(RoadmapMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)RoadmapMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64ACC(this, 0LL);
  return roadmap->fields.tabGroup;
}


int32_t __fastcall RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, roadmap);
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
    sub_1B64ACC(this, roadmap);
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
    sub_1B64ACC(this, roadmap);
  return roadmap->fields.type == 1;
}


bool __fastcall RoadmapMaster___c__DisplayClass5_0___GetInProgressRoadmapEntity_b__3(
        RoadmapMaster___c__DisplayClass5_0_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1B64ACC(this, roadmap);
  return !RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)this, roadmap, method);
}