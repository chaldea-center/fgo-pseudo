void __fastcall RoadmapButtonPrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct RoadmapButtonPrefab_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct RoadmapButtonPrefab_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct RoadmapButtonPrefab_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B133B3 & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapButtonPrefab_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11521/*"RoadMap"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5466/*"DownloadRoadMapUIAtlas1"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8465/*"LastRoadmapBoardIds"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17701/*"btn_next_reward"*/, v14, v15);
    byte_4B133B3 = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->ASSET_DATA_PATH_ROADMAP = (struct System_String_o *)StringLiteral_11521/*"RoadMap"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_11521/*"RoadMap"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_5466/*"DownloadRoadMapUIAtlas1"*/;
  static_fields = RoadmapButtonPrefab_TypeInfo->static_fields;
  static_fields->ROADMAP_BUTTON_ATLAS_NAME = (struct System_String_o *)StringLiteral_5466/*"DownloadRoadMapUIAtlas1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->ROADMAP_BUTTON_ATLAS_NAME,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_17701/*"btn_next_reward"*/;
  v25 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v25->ROADMAP_BUTTON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17701/*"btn_next_reward"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->ROADMAP_BUTTON_SPRITE_NAME, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_8465/*"LastRoadmapBoardIds"*/;
  v33 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v33->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8465/*"LastRoadmapBoardIds"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->LAST_ROADMAP_BOARD_IDS_KEY, v32, v34, v35, v36, v37, v38, v39);
}


void __fastcall RoadmapButtonPrefab___ctor(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RoadmapButtonPrefab__CheckAssert(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(
        RoadmapButtonPrefab_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  RoadmapButtonPrefab_c *v52; // x0
  System_String_o *String; // x0
  __int64 v54; // x1
  System_String_array *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  RoadmapButtonPrefab___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  System_Func_object__int__o *_9__14_0; // x21
  Il2CppObject *v62; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  RoadmapButtonPrefab___c_c *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x20
  System_Func_int__int__o *_9__14_1; // x21
  Il2CppObject *v77; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  __int64 v86; // x1
  System_Collections_Generic_List_TSource__o *v87; // x20
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  RoadmapButtonPrefab___c_c *v92; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x19
  System_Func_object__int__o *_9__14_2; // x21
  Il2CppObject *v95; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  RoadmapButtonPrefab___c_c *v107; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x19
  System_Func_int__int__o *_9__14_3; // x21
  Il2CppObject *v110; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  __int64 v119; // x2
  __int64 v120; // x3
  System_Collections_Generic_IEnumerable_TSecond__o *v121; // x19
  char v122; // w21
  RoadmapButtonPrefab___c_c *v123; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__14_4; // x21
  Il2CppObject *v125; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v126; // x0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  System_String_c *klass; // x8
  System_String_o *v134; // x19
  __int64 v135; // x9
  int *p_offset; // x10
  __int64 v137; // x0
  __int64 v138; // x1
  __int64 v139; // x19
  __int64 v140; // x8
  __int64 v141; // x9
  int *v142; // x10
  __int64 v143; // x0
  __int64 v144; // x8
  __int64 v145; // x9
  int *v146; // x10
  __int64 v147; // x0
  __int64 v148; // x0
  __int64 v149; // x8
  __int64 v150; // x9
  int *v151; // x10
  __int64 v152; // x0

  if ( (byte_4B133B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RoadmapMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_int__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____, v14, v15);
    sub_1BCA7E0(&System_Func_RoadmapEntity__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_int__int__ValueTuple_int__int___TypeInfo, v22, v23);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v32, v33);
    sub_1BCA7E0(&RoadmapButtonPrefab_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__, v36, v37);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__, v38, v39);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__, v40, v41);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__, v42, v43);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__, v44, v45);
    sub_1BCA7E0(&RoadmapButtonPrefab___c_TypeInfo, v46, v47);
    sub_1BCA7E0(&StringLiteral_1002/*"-1"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v50, v51);
    byte_4B133B1 = 1;
  }
  v52 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, method);
    v52 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v52->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_1002/*"-1"*/,
             0LL);
  if ( !String )
    goto LABEL_75;
  v55 = System_String__Split_62426312(String, (System_String_o *)StringLiteral_863/*","*/, 0, 0LL);
  v59 = RoadmapButtonPrefab___c_TypeInfo;
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v56);
    v59 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__int__o *)v59->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59, v56);
      v59 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v59->static_fields->__9;
    _9__14_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v56, v57, v58);
    System_Func_object__int____ctor(
      _9__14_0,
      v62,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__,
      0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_string__int__o *)_9__14_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  v70 = System_Linq_Enumerable__Select_object__int_(
          v60,
          (System_Func_TSource__TResult__o *)_9__14_0,
          (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
  v74 = RoadmapButtonPrefab___c_TypeInfo;
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)v70;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v71);
    v74 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_1 = v74->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74, v71);
      v74 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v77 = (Il2CppObject *)v74->static_fields->__9;
    _9__14_1 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v71, v72, v73);
    System_Func_int__int____ctor(
      _9__14_1,
      v77,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__,
      0LL);
    v78 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v78->__9__14_1 = _9__14_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v78->__9__14_1, (int64_t)_9__14_1, v79, v80, v81, v82, v83, v84);
  }
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v75,
                                                               (System_Func_TSource__TKey__o *)_9__14_1,
                                                               (const MethodInfo_2F3B178 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v87 = System_Linq_Enumerable__ToList_int_(
          v85,
          (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v86);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)String,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0LL);
  v92 = RoadmapButtonPrefab___c_TypeInfo;
  v93 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v89);
    v92 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_2 = (System_Func_object__int__o *)v92->static_fields->__9__14_2;
  if ( !_9__14_2 )
  {
    if ( !v92->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v92, v89);
      v92 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v95 = (Il2CppObject *)v92->static_fields->__9;
    _9__14_2 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_RoadmapEntity__int__TypeInfo, v89, v90, v91);
    System_Func_object__int____ctor(
      _9__14_2,
      v95,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__,
      0LL);
    v96 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v96->__9__14_2 = (struct System_Func_RoadmapEntity__int__o *)_9__14_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v96->__9__14_2, (int64_t)_9__14_2, v97, v98, v99, v100, v101, v102);
  }
  v103 = System_Linq_Enumerable__Select_object__int_(
           v93,
           (System_Func_TSource__TResult__o *)_9__14_2,
           (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v107 = RoadmapButtonPrefab___c_TypeInfo;
  v108 = (System_Collections_Generic_IEnumerable_TSource__o *)v103;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v104);
    v107 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_3 = v107->static_fields->__9__14_3;
  if ( !_9__14_3 )
  {
    if ( !v107->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v107, v104);
      v107 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v110 = (Il2CppObject *)v107->static_fields->__9;
    _9__14_3 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v104, v105, v106);
    System_Func_int__int____ctor(
      _9__14_3,
      v110,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__,
      0LL);
    v111 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v111->__9__14_3 = _9__14_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v111->__9__14_3, (int64_t)_9__14_3, v112, v113, v114, v115, v116, v117);
  }
  v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v108,
                                                                (System_Func_TSource__TKey__o *)_9__14_3,
                                                                (const MethodInfo_2F3B178 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v118,
                                (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v87 )
    goto LABEL_75;
  v121 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v87->fields._size < SLODWORD(String[1].klass) )
  {
    v122 = 1;
    return v122 & 1;
  }
  v123 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v54);
    v123 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_4 = v123->static_fields->__9__14_4;
  if ( !_9__14_4 )
  {
    if ( !v123->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v123, v54);
      v123 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v125 = (Il2CppObject *)v123->static_fields->__9;
    _9__14_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1BCAA2C(
                                                                  System_Func_int__int__ValueTuple_int__int___TypeInfo,
                                                                  v54,
                                                                  v119,
                                                                  v120);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__14_4,
      v125,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__,
      0LL);
    v126 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v126->__9__14_4 = _9__14_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v126->__9__14_4, (int64_t)_9__14_4, v127, v128, v129, v130, v131, v132);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v87,
                                v121,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__14_4,
                                (const MethodInfo_2F52404 *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1BCAA3C(String, v54);
  klass = String->klass;
  v134 = String;
  v135 = *(unsigned __int16 *)(&String->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&String->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v135;
      p_offset += 4;
      if ( !v135 )
        goto LABEL_48;
    }
    v137 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_48:
    v137 = sub_1C1C7C0(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0LL);
  }
  v139 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v137)(v134, *(_QWORD *)(v137 + 8));
  if ( !v139 )
    sub_1BCAA3C(0LL, v138);
  while ( 1 )
  {
    v140 = *(_QWORD *)v139;
    v141 = *(unsigned __int16 *)(*(_QWORD *)v139 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v139 + 302LL) )
    {
      v142 = (int *)(*(_QWORD *)(v140 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v142 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v141;
        v142 += 4;
        if ( !v141 )
          goto LABEL_55;
      }
      v143 = v140 + 16LL * *v142 + 312;
    }
    else
    {
LABEL_55:
      v143 = sub_1C1C7C0(v139, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v122 = (*(__int64 (__fastcall **)(__int64, _QWORD))v143)(v139, *(_QWORD *)(v143 + 8));
    if ( (v122 & 1) == 0 )
      break;
    v144 = *(_QWORD *)v139;
    v145 = *(unsigned __int16 *)(*(_QWORD *)v139 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v139 + 302LL) )
    {
      v146 = (int *)(*(_QWORD *)(v144 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v146 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v145;
        v146 += 4;
        if ( !v145 )
          goto LABEL_62;
      }
      v147 = v144 + 16LL * *v146 + 312;
    }
    else
    {
LABEL_62:
      v147 = sub_1C1C7C0(v139, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0LL);
    }
    v148 = (*(__int64 (__fastcall **)(__int64, _QWORD))v147)(v139, *(_QWORD *)(v147 + 8));
    if ( (_DWORD)v148 != HIDWORD(v148) )
      goto LABEL_67;
  }
  v122 = 0;
LABEL_67:
  v149 = *(_QWORD *)v139;
  v150 = *(unsigned __int16 *)(*(_QWORD *)v139 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v139 + 302LL) )
  {
    v151 = (int *)(*(_QWORD *)(v149 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v151 - 1) != System_IDisposable_TypeInfo )
    {
      --v150;
      v151 += 4;
      if ( !v150 )
        goto LABEL_71;
    }
    v152 = v149 + 16LL * *v151 + 312;
  }
  else
  {
LABEL_71:
    v152 = sub_1C1C7C0(v139, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v152)(v139, *(_QWORD *)(v152 + 8));
  return v122 & 1;
}


void __fastcall RoadmapButtonPrefab__Initialize(
        RoadmapButtonPrefab_o *this,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  System_Object_array *ObjectList_object; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  RoadmapButtonPrefab___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x21
  System_Func_object__bool__o *_9__13_0; // x22
  Il2CppObject *v59; // x23
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  RoadmapButtonPrefab___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Func_object__object__o *_9__13_1; // x22
  Il2CppObject *v74; // x23
  struct RoadmapButtonPrefab___c_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  void *gameObject; // x0
  const MethodInfo *v92; // x1
  Il2CppObject *v93; // x21
  int v94; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x20
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  RoadmapButtonPrefab___c_c *v99; // x0
  UISprite_o *sprite; // x22
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x23
  System_Func_object__bool__o *_9__13_2; // x24
  Il2CppObject *v103; // x25
  struct RoadmapButtonPrefab___c_StaticFields *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  UISprite_o *v111; // x22
  __int64 v112; // x2
  __int64 v113; // x3
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v116; // x23
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  System_Func_object__bool__o *v121; // x22
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v123; // x0
  bool v124; // w1

  if ( (byte_4B133B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObjectList_GameObject___, roadmapAssetData, method);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RoadmapMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_RoadmapEntity___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___, v20, v21);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_UIAtlas___, v22, v23);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GameObject___, v24, v25);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Func_UIAtlas__bool__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Func_GameObject__UIAtlas__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Func_RoadmapEntity__bool__TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__, v36, v37);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v38, v39);
    sub_1BCA7E0(&RoadmapButtonPrefab_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_RoadmapMaster_IsDispAchieved__, v42, v43);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__Initialize_b__13_0__, v44, v45);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__Initialize_b__13_1__, v46, v47);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__Initialize_b__13_2__, v48, v49);
    sub_1BCA7E0(&RoadmapButtonPrefab___c_TypeInfo, v50, v51);
    byte_4B133B0 = 1;
  }
  this->fields._IsInitialized_k__BackingField = 0;
  if ( !roadmapAssetData )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    goto LABEL_39;
  }
  this->fields.roadmapAssetData = roadmapAssetData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.roadmapAssetData,
    (int64_t)roadmapAssetData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ObjectList_object = AssetData__GetObjectList_object_(
                        roadmapAssetData,
                        (const MethodInfo_2EF4FF8 *)Method_AssetData_GetObjectList_GameObject___);
  v56 = RoadmapButtonPrefab___c_TypeInfo;
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v53);
    v56 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v56->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56, v53);
      v56 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v56->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v53, v54, v55);
    System_Func_object__bool____ctor(_9__13_0, v59, Method_RoadmapButtonPrefab___c__Initialize_b__13_0__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_GameObject__bool__o *)_9__13_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  v67 = System_Linq_Enumerable__Where_object_(
          v57,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v71 = RoadmapButtonPrefab___c_TypeInfo;
  v72 = v67;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v68);
    v71 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__object__o *)v71->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71, v68);
      v71 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v74 = (Il2CppObject *)v71->static_fields->__9;
    _9__13_1 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_GameObject__UIAtlas__TypeInfo, v68, v69, v70);
    System_Func_object__object____ctor(_9__13_1, v74, Method_RoadmapButtonPrefab___c__Initialize_b__13_1__, 0LL);
    v75 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v75->__9__13_1 = (struct System_Func_GameObject__UIAtlas__o *)_9__13_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v75->__9__13_1, (int64_t)_9__13_1, v76, v77, v78, v79, v80, v81);
  }
  v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v72,
                                                               (System_Func_TSource__TResult__o *)_9__13_1,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v83 = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__ToList_object_(
                                                               v82,
                                                               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  this->fields.roadmapAtlasList = v83;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.roadmapAtlasList, (int64_t)v83, v84, v85, v86, v87, v88, v89);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v90);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !gameObject )
    goto LABEL_43;
  v93 = (Il2CppObject *)gameObject;
  gameObject = RoadmapMaster__GetSortedDispBoardEntityList(
                 (RoadmapMaster_o *)gameObject,
                 roadmapAssetData,
                 this->fields.roadmapAtlasList,
                 0LL);
  if ( !gameObject )
    goto LABEL_43;
  v94 = *((_DWORD *)gameObject + 6);
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  if ( v94 <= 0 )
  {
LABEL_39:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v99 = RoadmapButtonPrefab___c_TypeInfo;
  sprite = this->fields.sprite;
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v96);
    v99 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__bool__o *)v99->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v99->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v99, v96);
      v99 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v103 = (Il2CppObject *)v99->static_fields->__9;
    _9__13_2 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UIAtlas__bool__TypeInfo, v96, v97, v98);
    System_Func_object__bool____ctor(_9__13_2, v103, Method_RoadmapButtonPrefab___c__Initialize_b__13_2__, 0LL);
    v104 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v104->__9__13_2 = (struct System_Func_UIAtlas__bool__o *)_9__13_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v104->__9__13_2, (int64_t)_9__13_2, v105, v106, v107, v108, v109, v110);
  }
  gameObject = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                 (System_Collections_Generic_IEnumerable_TSource__o *)roadmapAtlasList,
                 (System_Func_TSource__bool__o *)_9__13_2,
                 (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
  if ( !sprite )
    goto LABEL_43;
  UISprite__set_atlas(sprite, (UIAtlas_o *)gameObject, 0LL);
  v111 = this->fields.sprite;
  gameObject = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, v92);
  if ( !v111 )
    goto LABEL_43;
  UISprite__set_spriteName(v111, RoadmapButtonPrefab_TypeInfo->static_fields->ROADMAP_BUTTON_SPRITE_NAME, 0LL);
  button = this->fields.button;
  if ( !button )
    goto LABEL_43;
  onClick = button->fields.onClick;
  v116 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v92, v112, v113);
  EventDelegate_Callback___ctor(
    v116,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v117);
  EventDelegate__Add(onClick, v116, 0LL);
  v121 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_RoadmapEntity__bool__TypeInfo, v118, v119, v120);
  System_Func_object__bool____ctor(v121, v93, Method_RoadmapMaster_IsDispAchieved__, 0LL);
  gameObject = (void *)System_Linq_Enumerable__All_object_(
                         v95,
                         (System_Func_TSource__bool__o *)v121,
                         (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(this, v92);
    if ( newNotification )
    {
      v124 = (unsigned __int8)gameObject & 1;
      v123 = newNotification;
      goto LABEL_42;
    }
LABEL_43:
    sub_1BCAA3C(gameObject, v92);
  }
  if ( !newNotification )
    goto LABEL_43;
  v123 = this->fields.newNotification;
  v124 = 0;
LABEL_42:
  ShiningIconComponent__Set_38945552(v123, v124, 0LL);
  this->fields._IsInitialized_k__BackingField = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RoadmapButtonPrefab__ModifyRoadmapButton(
        RoadmapButtonPrefab_o *this,
        bool isEnabled,
        bool isImmediate,
        const MethodInfo *method)
{
  struct UIButton_o *button; // x0
  _BOOL8 v7; // x2
  __int64 v8; // x1

  if ( this->fields._IsInitialized_k__BackingField )
  {
    button = this->fields.button;
    if ( !button
      || ((v7 = isImmediate, !isEnabled) ? (v8 = 3LL) : (v8 = 0LL),
          ((void (__fastcall *)(struct UIButton_o *, __int64, _BOOL8, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
            button,
            v8,
            v7,
            button->klass->vtable._15_OnClick.methodPtr),
          (button = this->fields.button) == 0LL) )
    {
      sub_1BCAA3C(button, isEnabled);
    }
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
      button,
      isEnabled,
      button->klass->vtable._6_OnInit.methodPtr);
  }
}


void __fastcall RoadmapButtonPrefab__OnClickRoadmapButton(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  RoadmapButtonPrefab_c *v14; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Instance; // x0
  AssetData_o *roadmapAssetData; // x20
  System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x21
  CommonUI_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1

  if ( (byte_4B133B2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v6, v7);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__, v8, v9);
    sub_1BCA7E0(&RoadmapButtonPrefab_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B133B2 = 1;
  }
  v14 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, method);
    v14 = RoadmapButtonPrefab_TypeInfo;
  }
  ASSET_DATA_PATH_ROADMAP = v14->static_fields->ASSET_DATA_PATH_ROADMAP;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  if ( AssetManager__isExistAssetStorage(ASSET_DATA_PATH_ROADMAP, 0LL) && this->fields._IsInitialized_k__BackingField )
  {
    v16 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    roadmapAtlasList = this->fields.roadmapAtlasList;
    roadmapAssetData = this->fields.roadmapAssetData;
    v21 = (CommonUI_o *)Instance;
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__, 0LL);
    if ( !v21 )
      sub_1BCAA3C(v26, v27);
    CommonUI__OpenRoadmapDialog(v21, roadmapAssetData, roadmapAtlasList, v25, 0LL);
  }
}


void __fastcall RoadmapButtonPrefab___OnClickRoadmapButton_b__16_0(
        RoadmapButtonPrefab_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  ShiningIconComponent_o *newNotification; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  RoadmapButtonPrefab___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v31; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array *v40; // x0
  __int64 v41; // x1
  RoadmapButtonPrefab_c *v42; // x8
  System_Collections_Generic_IEnumerable_T__o *v43; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v45; // x1

  if ( (byte_4B133B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RoadmapMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&System_Func_RoadmapEntity__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&RoadmapButtonPrefab_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_String_Join_int___, v14, v15);
    sub_1BCA7E0(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__, v16, v17);
    sub_1BCA7E0(&RoadmapButtonPrefab___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v20, v21);
    byte_4B133B4 = 1;
  }
  newNotification = this->fields.newNotification;
  if ( !newNotification )
    goto LABEL_16;
  ShiningIconComponent__Set_38945552(newNotification, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  newNotification = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !newNotification )
LABEL_16:
    sub_1BCAA3C(newNotification, method);
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)newNotification,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0LL);
  v28 = RoadmapButtonPrefab___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v25);
    v28 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v28->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v25);
      v28 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_RoadmapEntity__int__TypeInfo, v25, v26, v27);
    System_Func_object__int____ctor(_9__16_1, v31, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Func_RoadmapEntity__int__o *)_9__16_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_1,
      (int64_t)_9__16_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v40 = System_Linq_Enumerable__ToArray_int_(
          v39,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v42 = RoadmapButtonPrefab_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_T__o *)v40;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, v41);
    v42 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v42->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v45 = System_String__Join_int_(
          (System_String_o *)StringLiteral_863/*","*/,
          v43,
          (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v45, 0LL);
}


bool __fastcall RoadmapButtonPrefab__get_IsInitialized(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  return this->fields._IsInitialized_k__BackingField;
}


void __fastcall RoadmapButtonPrefab__set_IsInitialized(
        RoadmapButtonPrefab_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsInitialized_k__BackingField = value;
}


void __fastcall RoadmapButtonPrefab___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B133B5 & 1) == 0 )
  {
    sub_1BCA7E0(&RoadmapButtonPrefab___c_TypeInfo, v1, v2);
    byte_4B133B5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RoadmapButtonPrefab___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall RoadmapButtonPrefab___c___ctor(RoadmapButtonPrefab___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_0(
        RoadmapButtonPrefab___c_o *this,
        System_String_o *boardId,
        const MethodInfo *method)
{
  return System_Int32__Parse(boardId, 0LL);
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_1(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_2(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1BCAA3C(this, 0LL);
  return roadmap->fields.boardImageId;
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_3(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__int__o __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_4(
        RoadmapButtonPrefab___c_o *this,
        int32_t lastId,
        int32_t currentId,
        const MethodInfo *method)
{
  System_ValueTuple_int__int__o v7; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_int__int__o v8; // 0:x0.8

  if ( (byte_4B133B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_ValueTuple_int__int___ctor__, *(_QWORD *)&lastId, *(_QWORD *)&currentId);
    byte_4B133B9 = 1;
  }
  v8 = (System_ValueTuple_int__int__o)&v7;
  v7 = 0LL;
  System_ValueTuple_int__int____ctor(
    v8,
    lastId,
    currentId,
    (const MethodInfo_38F0500 *)Method_System_ValueTuple_int__int___ctor__);
  return v7;
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__13_0(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B133B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, assetObject, method);
    this = (RoadmapButtonPrefab___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B133B6 = 1;
  }
  if ( !assetObject )
    sub_1BCAA3C(this, assetObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       assetObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
}


UIAtlas_o *__fastcall RoadmapButtonPrefab___c___Initialize_b__13_1(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_4B133B7 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1BCA7E0(
                                          &Method_UnityEngine_GameObject_GetComponent_UIAtlas___,
                                          assetObject,
                                          method);
    byte_4B133B7 = 1;
  }
  if ( !assetObject )
    sub_1BCAA3C(this, assetObject);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__13_2(
        RoadmapButtonPrefab___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 v5; // x1
  RoadmapButtonPrefab_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_4B133B8 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1BCA7E0(&RoadmapButtonPrefab_TypeInfo, atlas, method);
    byte_4B133B8 = 1;
  }
  if ( !atlas )
    sub_1BCAA3C(this, atlas);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
  v6 = RoadmapButtonPrefab_TypeInfo;
  v7 = name;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, v5);
    v6 = RoadmapButtonPrefab_TypeInfo;
  }
  return System_String__op_Equality(v7, v6->static_fields->ROADMAP_BUTTON_ATLAS_NAME, 0LL);
}


int32_t __fastcall RoadmapButtonPrefab___c___OnClickRoadmapButton_b__16_1(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1BCAA3C(this, 0LL);
  return roadmap->fields.boardImageId;
}