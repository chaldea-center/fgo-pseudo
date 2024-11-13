void __fastcall RoadmapMaster___ctor(RoadmapMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1682B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__, method, v2);
    byte_4B1682B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    510,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
RoadmapEntity_o *__fastcall RoadmapMaster__GetEntity(
        RoadmapMaster_o *this,
        int32_t tabGroup,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1682C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__,
      *(_QWORD *)&tabGroup,
      *(_QWORD *)&groupIndex);
    byte_4B1682C = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&groupIndex);
  return (RoadmapEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_31B3198 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__GetEntity__);
}


RoadmapEntity_o *__fastcall RoadmapMaster__GetInProgressRoadmapEntity(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_object__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Predicate_object__o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t LastIndex; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Func_object__bool__o *v45; // x22
  RoadmapEntity_o *result; // x0

  if ( (byte_4B1682A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___, roadmapAssetData, roadmapAtlasList);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Last_RoadmapEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_RoadmapEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RoadmapEntity___, v13, v14);
    sub_1BCA7E0(&System_Func_RoadmapEntity__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__, v17, v18);
    sub_1BCA7E0(&System_Predicate_RoadmapEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_RoadmapMaster_IsDispBoard__, v21, v22);
    sub_1BCA7E0(&Method_RoadmapMaster_IsWarRewardBoard__, v23, v24);
    sub_1BCA7E0(&Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__, v25, v26);
    byte_4B1682A = 1;
  }
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                this,
                                roadmapAssetData,
                                roadmapAtlasList,
                                method);
  v31 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_RoadmapEntity__bool__TypeInfo, v28, v29, v30);
  System_Func_object__bool____ctor(v31, (Il2CppObject *)this, Method_RoadmapMaster_IsWarRewardBoard__, 0LL);
  v32 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  v33 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v32,
                                                       (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v37 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RoadmapEntity__TypeInfo, v34, v35, v36);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)this,
    Method_RoadmapMaster__GetInProgressRoadmapEntity_b__5_0__,
    0LL);
  if ( !v33 )
    sub_1BCAA3C(v38, v39);
  LastIndex = System_Collections_Generic_List_object___FindLastIndex(
                v33,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_35A25A0 *)Method_System_Collections_Generic_List_RoadmapEntity__FindLastIndex__);
  v41 = System_Linq_Enumerable__Skip_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          LastIndex + 1,
          (const MethodInfo_2F4A184 *)Method_System_Linq_Enumerable_Skip_RoadmapEntity___);
  v45 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_RoadmapEntity__bool__TypeInfo, v42, v43, v44);
  System_Func_object__bool____ctor(v45, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  result = (RoadmapEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                v41,
                                (System_Func_TSource__bool__o *)v45,
                                (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_RoadmapEntity___);
  if ( !result )
    return (RoadmapEntity_o *)System_Linq_Enumerable__Last_object_(
                                (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                (const MethodInfo_2F36F54 *)Method_System_Linq_Enumerable_Last_RoadmapEntity___);
  return result;
}


System_Collections_Generic_List_RoadmapEntity__o *__fastcall RoadmapMaster__GetSortedDispBoardEntityList(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  __int64 v14; // x2
  __int64 v15; // x3
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4B16829 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, roadmapAssetData, roadmapAtlasList);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RoadmapEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_RoadmapEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_RoadmapMaster_IsDispBoard__, v11, v12);
    byte_4B16829 = 1;
  }
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    this,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    method);
  v16 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_RoadmapEntity__bool__TypeInfo,
                                         SortedExistingBoardEntityList.fields.Item2,
                                         v14,
                                         v15);
  System_Func_object__bool____ctor(v16, (Il2CppObject *)this, Method_RoadmapMaster_IsDispBoard__, 0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)SortedExistingBoardEntityList.fields.Item1,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RoadmapEntity___);
  return (System_Collections_Generic_List_RoadmapEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v17,
                                                               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o __fastcall RoadmapMaster__GetSortedExistingBoardEntityList(
        RoadmapMaster_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_IEnumerable_TResult__o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  RoadmapMaster___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x21
  System_Func_object__int__o *_9__3_0; // x22
  Il2CppObject *v53; // x23
  struct RoadmapMaster___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  RoadmapMaster___c_c *v65; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x21
  System_Func_object__int__o *_9__3_1; // x22
  Il2CppObject *v68; // x23
  struct RoadmapMaster___c_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_List_object__o *v77; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x21
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_object__o *v85; // x22
  __int64 v86; // x0
  __int64 v87; // x1
  _BOOL8 v88; // x0
  const MethodInfo *v89; // x2
  Il2CppObject *current; // x23
  _BOOL8 IsDispAchieved; // x0
  __int64 v92; // x1
  int32_t *v93; // x8
  int32_t v94; // w24
  __int64 v95; // x1
  UnityEngine_Object_o *PrefabById; // x25
  _BOOL8 v97; // x0
  __int64 v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct System_Object_array *items; // x8
  _QWORD *v106; // x9
  __int64 size; // x10
  Il2CppClass **v108; // x0
  __int64 v109; // x0
  __int64 v110; // x1
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x1
  UnityEngine_Object_o *BoardAtlasById; // x24
  _BOOL8 v119; // x0
  __int64 v120; // x1
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  Il2CppClass **v146; // x0
  const MethodInfo_38F6AA0 *v147; // x4
  struct System_Collections_Generic_List_RoadmapEntity__o *v148; // x0 OVERLAPPED
  struct System_Collections_Generic_List_UIAtlas__o *v149; // x1
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+20h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_RoadmapEntity__o *v153; // [xsp+40h] [xbp-70h] BYREF
  struct System_Collections_Generic_List_UIAtlas__o *v154; // [xsp+48h] [xbp-68h]
  System_ValueTuple_object__object__o v155; // 0:x0.16
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o result; // 0:x0.16

  if ( (byte_4B16828 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_RoadmapEntity___, roadmapAssetData, roadmapAtlasList);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_RoadmapEntity___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__, v16, v17);
    sub_1BCA7E0(&System_Func_RoadmapEntity__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RoadmapEntity__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RoadmapEntity___ctor__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_RoadmapEntity__TypeInfo, v32, v33);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v34, v35);
    sub_1BCA7E0(&RoadmapBoardListViewManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__, v38, v39);
    sub_1BCA7E0(&Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__, v40, v41);
    sub_1BCA7E0(&RoadmapMaster___c_TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__, v44, v45);
    byte_4B16828 = 1;
  }
  memset(&v152, 0, sizeof(v152));
  v46 = System_Linq_Enumerable__Cast_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2F20F80 *)Method_System_Linq_Enumerable_Cast_RoadmapEntity___);
  v50 = RoadmapMaster___c_TypeInfo;
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo, v47);
    v50 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v50->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50, v47);
      v50 = RoadmapMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v50->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_RoadmapEntity__int__TypeInfo, v47, v48, v49);
    System_Func_object__int____ctor(
      _9__3_0,
      v53,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_0__,
      0LL);
    static_fields = RoadmapMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_RoadmapEntity__int__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v55, v56, v57, v58, v59, v60);
  }
  v61 = System_Linq_Enumerable__OrderBy_object__int_(
          v51,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_RoadmapEntity__int___);
  v65 = RoadmapMaster___c_TypeInfo;
  v66 = v61;
  if ( !RoadmapMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapMaster___c_TypeInfo, v62);
    v65 = RoadmapMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v65->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65, v62);
      v65 = RoadmapMaster___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v65->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_RoadmapEntity__int__TypeInfo, v62, v63, v64);
    System_Func_object__int____ctor(
      _9__3_1,
      v68,
      Method_RoadmapMaster___c__GetSortedExistingBoardEntityList_b__3_1__,
      0LL);
    v69 = RoadmapMaster___c_TypeInfo->static_fields;
    v69->__9__3_1 = (struct System_Func_RoadmapEntity__int__o *)_9__3_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v69->__9__3_1, (int64_t)_9__3_1, v70, v71, v72, v73, v74, v75);
  }
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v66,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_RoadmapEntity__int___);
  v77 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v76,
                                                       (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RoadmapEntity___);
  v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RoadmapEntity__TypeInfo,
                                                       v78,
                                                       v79,
                                                       v80);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RoadmapEntity___ctor__);
  v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v82,
                                                       v83,
                                                       v84);
  System_Collections_Generic_List_object____ctor(
    v85,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  if ( !v77 )
    sub_1BCAA3C(v86, v87);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v151,
    v77,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v152 = v151;
  while ( 1 )
  {
    v88 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v152,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    if ( !v88 )
      break;
    current = v152.fields._current;
    IsDispAchieved = RoadmapMaster__IsDispAchieved((RoadmapMaster_o *)v88, (RoadmapEntity_o *)v152.fields._current, v89);
    if ( IsDispAchieved )
    {
      if ( !current )
        sub_1BCAA3C(IsDispAchieved, v92);
      v93 = (int32_t *)&current[2].klass + 1;
    }
    else
    {
      if ( !current )
        sub_1BCAA3C(IsDispAchieved, v92);
      v93 = (int32_t *)&current[1].monitor + 1;
    }
    v94 = *v93;
    if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, v92);
    PrefabById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindPrefabById(v94, roadmapAssetData, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
    v97 = UnityEngine_Object__op_Inequality(PrefabById, 0LL, 0LL);
    if ( v97 )
    {
      if ( !v81 )
        sub_1BCAA3C(v97, v98);
      items = v81->fields._items;
      v106 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
      ++v81->fields._version;
      if ( !items )
        sub_1BCAA3C(v97, v98);
      size = v81->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v81,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
      }
      else
      {
        v108 = &items->obj.klass + size;
        v81->fields._size = size + 1;
        v108[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 4), (int64_t)current, v99, v100, v101, v102, v103, v104);
      }
      if ( !v85 )
        sub_1BCAA3C(v109, v110);
      v139 = v85->fields._items;
      v140 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++v85->fields._version;
      if ( !v139 )
        sub_1BCAA3C(v109, v110);
      v141 = v85->fields._size;
      if ( (unsigned int)v141 >= v139->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v85,
          0LL,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
      }
      else
      {
        v142 = &v139->obj.klass + v141;
        v85->fields._size = v141 + 1;
        v142[4] = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)(v142 + 4), 0LL, v111, v112, v113, v114, v115, v116);
      }
    }
    else
    {
      if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, v98);
      BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(
                                                 v94,
                                                 roadmapAtlasList,
                                                 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v117);
      v119 = UnityEngine_Object__op_Inequality(BoardAtlasById, 0LL, 0LL);
      if ( v119 )
      {
        if ( !v81 )
          sub_1BCAA3C(v119, v120);
        v127 = v81->fields._items;
        v128 = Method_System_Collections_Generic_List_RoadmapEntity__Add__;
        ++v81->fields._version;
        if ( !v127 )
          sub_1BCAA3C(v119, v120);
        v129 = v81->fields._size;
        if ( (unsigned int)v129 >= v127->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v81,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
        }
        else
        {
          v130 = &v127->obj.klass + v129;
          v81->fields._size = v129 + 1;
          v130[4] = (Il2CppClass *)current;
          sub_1BCA784((PartyOrganizationUtility_o *)(v130 + 4), (int64_t)current, v121, v122, v123, v124, v125, v126);
        }
        if ( !v85 )
          sub_1BCAA3C(v131, v132);
        v143 = v85->fields._items;
        v144 = Method_System_Collections_Generic_List_UIAtlas__Add__;
        ++v85->fields._version;
        if ( !v143 )
          sub_1BCAA3C(v131, v132);
        v145 = v85->fields._size;
        if ( (unsigned int)v145 >= v143->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v85,
            (Il2CppObject *)BoardAtlasById,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
        }
        else
        {
          v146 = &v143->obj.klass + v145;
          v85->fields._size = v145 + 1;
          v146[4] = (Il2CppClass *)BoardAtlasById;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)(v146 + 4),
            (int64_t)BoardAtlasById,
            v133,
            v134,
            v135,
            v136,
            v137,
            v138);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v152,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  v155.fields.Item1 = (Il2CppObject *)&v153;
  v155.fields.Item2 = (Il2CppObject *)v81;
  v153 = 0LL;
  v154 = 0LL;
  System_ValueTuple_object__object____ctor(
    v155,
    (Il2CppObject *)v85,
    (Il2CppObject *)Method_System_ValueTuple_List_RoadmapEntity___List_UIAtlas____ctor__,
    v147);
  v148 = v153;
  v149 = v154;
  result.fields.Item2 = v149;
  result.fields.Item1 = v148;
  return result;
}


bool __fastcall RoadmapMaster__IsDispAchieved(
        RoadmapMaster_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4B16827 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16827 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, roadmap);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1BCAA3C(Master_object, v7);
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
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4B16826 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, roadmap, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16826 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, roadmap);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !roadmap || !Master_object )
    sub_1BCAA3C(Master_object, v7);
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B1682D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&tabGroup);
    byte_4B1682D = 1;
  }
  PK = (Il2CppObject *)RoadmapEntity__CreatePK(tabGroup, groupIndex, *(const MethodInfo **)&tabGroup);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_RoadmapMaster__RoadmapEntity__string__TryGetEntity__);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1682E & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapMaster___c_TypeInfo, v1, v2);
    byte_4B1682E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RoadmapMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RoadmapMaster___c_TypeInfo->static_fields->__9 = (struct RoadmapMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RoadmapMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return roadmap->fields.tabGroup;
}


int32_t __fastcall RoadmapMaster___c___GetSortedExistingBoardEntityList_b__3_1(
        RoadmapMaster___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1BCAA3C(this, 0LL);
  return roadmap->fields.groupIndex;
}