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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  struct RoadmapButtonPrefab_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  struct RoadmapButtonPrefab_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct RoadmapButtonPrefab_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B63D3A & 1) == 0 )
  {
    sub_1BE4ACC(&RoadmapButtonPrefab_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_11553/*"RoadMap"*/, v8);
    sub_1BE4ACC(&StringLiteral_5477/*"DownloadRoadMapUIAtlas1"*/, v9);
    sub_1BE4ACC(&StringLiteral_8485/*"LastRoadmapBoardIds"*/, v10);
    sub_1BE4ACC(&StringLiteral_17748/*"btn_next_reward"*/, v11);
    byte_4B63D3A = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->ASSET_DATA_PATH_ROADMAP = (struct System_String_o *)StringLiteral_11553/*"RoadMap"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_11553/*"RoadMap"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_5477/*"DownloadRoadMapUIAtlas1"*/;
  static_fields = RoadmapButtonPrefab_TypeInfo->static_fields;
  static_fields->ROADMAP_BUTTON_ATLAS_NAME = (struct System_String_o *)StringLiteral_5477/*"DownloadRoadMapUIAtlas1"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->ROADMAP_BUTTON_ATLAS_NAME,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = StringLiteral_17748/*"btn_next_reward"*/;
  v21 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v21->ROADMAP_BUTTON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17748/*"btn_next_reward"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v21->ROADMAP_BUTTON_SPRITE_NAME, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_8485/*"LastRoadmapBoardIds"*/;
  v29 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v29->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8485/*"LastRoadmapBoardIds"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v29->LAST_ROADMAP_BOARD_IDS_KEY, v28, v30, v31, v32, v33, v34, v35);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v25; // x1
  __int64 v26; // x1
  RoadmapButtonPrefab_c *v27; // x0
  System_String_o *String; // x0
  __int64 v29; // x1
  System_String_array *v30; // x0
  RoadmapButtonPrefab___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_object__int__o *_9__14_0; // x21
  Il2CppObject *v34; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v42; // x0
  RoadmapButtonPrefab___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  System_Func_int__int__o *_9__14_1; // x21
  Il2CppObject *v46; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_List_TSource__o *v55; // x20
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x19
  System_Func_object__int__o *_9__14_2; // x21
  Il2CppObject *v60; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v68; // x0
  RoadmapButtonPrefab___c_c *v69; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x19
  System_Func_int__int__o *_9__14_3; // x21
  Il2CppObject *v72; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_Generic_IEnumerable_TSecond__o *v81; // x19
  char v82; // w21
  RoadmapButtonPrefab___c_c *v83; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__14_4; // x21
  Il2CppObject *v85; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_String_c *klass; // x8
  System_String_o *v94; // x19
  __int64 v95; // x9
  int *p_offset; // x10
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x19
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x8
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x0

  if ( (byte_4B63D38 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_RoadmapMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_int__int___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____, v8);
    sub_1BE4ACC(&System_Func_RoadmapEntity__int__TypeInfo, v9);
    sub_1BE4ACC(&System_Func_int__int__TypeInfo, v10);
    sub_1BE4ACC(&System_Func_string__int__TypeInfo, v11);
    sub_1BE4ACC(&System_Func_int__int__ValueTuple_int__int___TypeInfo, v12);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, v15);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_1BE4ACC(&RoadmapButtonPrefab_TypeInfo, v18);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__, v19);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__, v20);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__, v21);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__, v22);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__, v23);
    sub_1BE4ACC(&RoadmapButtonPrefab___c_TypeInfo, v24);
    sub_1BE4ACC(&StringLiteral_1002/*"-1"*/, v25);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v26);
    byte_4B63D38 = 1;
  }
  v27 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v27 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v27->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_1002/*"-1"*/,
             0LL);
  if ( !String )
    goto LABEL_75;
  v30 = System_String__Split_62723900(String, (System_String_o *)StringLiteral_863/*","*/, 0, 0LL);
  v31 = RoadmapButtonPrefab___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v31 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__int__o *)v31->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__14_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_0,
      v34,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__,
      0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_string__int__o *)_9__14_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__Select_object__int_(
          v32,
          (System_Func_TSource__TResult__o *)_9__14_0,
          (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_string__int___);
  v43 = RoadmapButtonPrefab___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v42;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v43 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_1 = v43->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__14_1 = (System_Func_int__int__o *)sub_1BE4D18(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_1,
      v46,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__,
      0LL);
    v47 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v47->__9__14_1 = _9__14_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v47->__9__14_1, (int64_t)_9__14_1, v48, v49, v50, v51, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)_9__14_1,
                                                               (const MethodInfo_2F81FB0 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v55 = System_Linq_Enumerable__ToList_int_(
          v54,
          (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)String,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0LL);
  v57 = RoadmapButtonPrefab___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v57 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_2 = (System_Func_object__int__o *)v57->static_fields->__9__14_2;
  if ( !_9__14_2 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__14_2 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_2,
      v60,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__,
      0LL);
    v61 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v61->__9__14_2 = (struct System_Func_RoadmapEntity__int__o *)_9__14_2;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v61->__9__14_2, (int64_t)_9__14_2, v62, v63, v64, v65, v66, v67);
  }
  v68 = System_Linq_Enumerable__Select_object__int_(
          v58,
          (System_Func_TSource__TResult__o *)_9__14_2,
          (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v69 = RoadmapButtonPrefab___c_TypeInfo;
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)v68;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v69 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_3 = v69->static_fields->__9__14_3;
  if ( !_9__14_3 )
  {
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v69 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v72 = (Il2CppObject *)v69->static_fields->__9;
    _9__14_3 = (System_Func_int__int__o *)sub_1BE4D18(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_3,
      v72,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__,
      0LL);
    v73 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v73->__9__14_3 = _9__14_3;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v73->__9__14_3, (int64_t)_9__14_3, v74, v75, v76, v77, v78, v79);
  }
  v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v70,
                                                               (System_Func_TSource__TKey__o *)_9__14_3,
                                                               (const MethodInfo_2F81FB0 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v80,
                                (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v55 )
    goto LABEL_75;
  v81 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v55->fields._size < SLODWORD(String[1].klass) )
  {
    v82 = 1;
    return v82 & 1;
  }
  v83 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v83 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_4 = v83->static_fields->__9__14_4;
  if ( !_9__14_4 )
  {
    if ( !v83->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v83);
      v83 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v85 = (Il2CppObject *)v83->static_fields->__9;
    _9__14_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1BE4D18(System_Func_int__int__ValueTuple_int__int___TypeInfo);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__14_4,
      v85,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__,
      0LL);
    v86 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v86->__9__14_4 = _9__14_4;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v86->__9__14_4, (int64_t)_9__14_4, v87, v88, v89, v90, v91, v92);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v55,
                                v81,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__14_4,
                                (const MethodInfo_2F994D0 *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1BE4D28(String, v29);
  klass = String->klass;
  v94 = String;
  v95 = *(unsigned __int16 *)(&String->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&String->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v95;
      p_offset += 4;
      if ( !v95 )
        goto LABEL_48;
    }
    v97 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_48:
    v97 = sub_1C36AAC(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0LL);
  }
  v99 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v97)(v94, *(_QWORD *)(v97 + 8));
  if ( !v99 )
    sub_1BE4D28(0LL, v98);
  while ( 1 )
  {
    v100 = *(_QWORD *)v99;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_55;
      }
      v103 = v100 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_55:
      v103 = sub_1C36AAC(v99, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
    if ( (v82 & 1) == 0 )
      break;
    v104 = *(_QWORD *)v99;
    v105 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
    {
      v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v106 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_62;
      }
      v107 = v104 + 16LL * *v106 + 312;
    }
    else
    {
LABEL_62:
      v107 = sub_1C36AAC(v99, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0LL);
    }
    v108 = (*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v99, *(_QWORD *)(v107 + 8));
    if ( (_DWORD)v108 != HIDWORD(v108) )
      goto LABEL_67;
  }
  v82 = 0;
LABEL_67:
  v109 = *(_QWORD *)v99;
  v110 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
  {
    v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
    {
      --v110;
      v111 += 4;
      if ( !v110 )
        goto LABEL_71;
    }
    v112 = v109 + 16LL * *v111 + 312;
  }
  else
  {
LABEL_71:
    v112 = sub_1C36AAC(v99, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v112)(v99, *(_QWORD *)(v112 + 8));
  return v82 & 1;
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  System_Object_array *ObjectList_object; // x0
  RoadmapButtonPrefab___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_object__bool__o *_9__13_0; // x22
  Il2CppObject *v35; // x23
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  RoadmapButtonPrefab___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  System_Func_object__object__o *_9__13_1; // x22
  Il2CppObject *v47; // x23
  struct RoadmapButtonPrefab___c_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  void *gameObject; // x0
  const MethodInfo *v64; // x1
  Il2CppObject *v65; // x21
  int v66; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x20
  RoadmapButtonPrefab___c_c *v68; // x0
  UISprite_o *sprite; // x22
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x23
  System_Func_object__bool__o *_9__13_2; // x24
  Il2CppObject *v72; // x25
  struct RoadmapButtonPrefab___c_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  UISprite_o *v80; // x22
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v83; // x23
  System_Func_object__bool__o *v84; // x22
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v86; // x0
  bool v87; // w1

  if ( (byte_4B63D37 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObjectList_GameObject___, roadmapAssetData);
    sub_1BE4ACC(&EventDelegate_Callback_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataManager_GetMaster_RoadmapMaster___, v11);
    sub_1BE4ACC(&DataManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_All_RoadmapEntity___, v13);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___, v14);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___, v15);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_UIAtlas___, v16);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_GameObject___, v17);
    sub_1BE4ACC(&EventDelegate_TypeInfo, v18);
    sub_1BE4ACC(&System_Func_UIAtlas__bool__TypeInfo, v19);
    sub_1BE4ACC(&System_Func_GameObject__UIAtlas__TypeInfo, v20);
    sub_1BE4ACC(&System_Func_GameObject__bool__TypeInfo, v21);
    sub_1BE4ACC(&System_Func_RoadmapEntity__bool__TypeInfo, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__, v23);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v24);
    sub_1BE4ACC(&RoadmapButtonPrefab_TypeInfo, v25);
    sub_1BE4ACC(&Method_RoadmapMaster_IsDispAchieved__, v26);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__Initialize_b__13_0__, v27);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__Initialize_b__13_1__, v28);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__Initialize_b__13_2__, v29);
    sub_1BE4ACC(&RoadmapButtonPrefab___c_TypeInfo, v30);
    byte_4B63D37 = 1;
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
  sub_1BE4A70(
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
                        (const MethodInfo_2F3B38C *)Method_AssetData_GetObjectList_GameObject___);
  v32 = RoadmapButtonPrefab___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v32 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v32->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v35, Method_RoadmapButtonPrefab___c__Initialize_b__13_0__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_GameObject__bool__o *)_9__13_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v44 = RoadmapButtonPrefab___c_TypeInfo;
  v45 = v43;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v44 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__object__o *)v44->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__13_1 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_GameObject__UIAtlas__TypeInfo);
    System_Func_object__object____ctor(_9__13_1, v47, Method_RoadmapButtonPrefab___c__Initialize_b__13_1__, 0LL);
    v48 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v48->__9__13_1 = (struct System_Func_GameObject__UIAtlas__o *)_9__13_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v48->__9__13_1, (int64_t)_9__13_1, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v45,
                                                               (System_Func_TSource__TResult__o *)_9__13_1,
                                                               (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v56 = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__ToList_object_(
                                                               v55,
                                                               (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  this->fields.roadmapAtlasList = v56;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.roadmapAtlasList, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !gameObject )
    goto LABEL_43;
  v65 = (Il2CppObject *)gameObject;
  gameObject = RoadmapMaster__GetSortedDispBoardEntityList(
                 (RoadmapMaster_o *)gameObject,
                 roadmapAssetData,
                 this->fields.roadmapAtlasList,
                 0LL);
  if ( !gameObject )
    goto LABEL_43;
  v66 = *((_DWORD *)gameObject + 6);
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  if ( v66 <= 0 )
  {
LABEL_39:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v68 = RoadmapButtonPrefab___c_TypeInfo;
  sprite = this->fields.sprite;
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v68 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__bool__o *)v68->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v72 = (Il2CppObject *)v68->static_fields->__9;
    _9__13_2 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UIAtlas__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_2, v72, Method_RoadmapButtonPrefab___c__Initialize_b__13_2__, 0LL);
    v73 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v73->__9__13_2 = (struct System_Func_UIAtlas__bool__o *)_9__13_2;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v73->__9__13_2, (int64_t)_9__13_2, v74, v75, v76, v77, v78, v79);
  }
  gameObject = System_Linq_Enumerable__FirstOrDefault_object__49793520(
                 (System_Collections_Generic_IEnumerable_TSource__o *)roadmapAtlasList,
                 (System_Func_TSource__bool__o *)_9__13_2,
                 (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
  if ( !sprite )
    goto LABEL_43;
  UISprite__set_atlas(sprite, (UIAtlas_o *)gameObject, 0LL);
  v80 = this->fields.sprite;
  gameObject = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
  if ( !v80 )
    goto LABEL_43;
  UISprite__set_spriteName(v80, RoadmapButtonPrefab_TypeInfo->static_fields->ROADMAP_BUTTON_SPRITE_NAME, 0LL);
  button = this->fields.button;
  if ( !button )
    goto LABEL_43;
  onClick = button->fields.onClick;
  v83 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v83,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onClick, v83, 0LL);
  v84 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v84, v65, Method_RoadmapMaster_IsDispAchieved__, 0LL);
  gameObject = (void *)System_Linq_Enumerable__All_object_(
                         v67,
                         (System_Func_TSource__bool__o *)v84,
                         (const MethodInfo_2F63894 *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(this, v64);
    if ( newNotification )
    {
      v87 = (unsigned __int8)gameObject & 1;
      v86 = newNotification;
      goto LABEL_42;
    }
LABEL_43:
    sub_1BE4D28(gameObject, v64);
  }
  if ( !newNotification )
    goto LABEL_43;
  v86 = this->fields.newNotification;
  v87 = 0;
LABEL_42:
  ShiningIconComponent__Set_39139932(v86, v87, 0LL);
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
      sub_1BE4D28(button, isEnabled);
    }
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
      button,
      isEnabled,
      button->klass->vtable._6_OnInit.methodPtr);
  }
}


void __fastcall RoadmapButtonPrefab__OnClickRoadmapButton(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  RoadmapButtonPrefab_c *v9; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x20
  __int64 v11; // x1
  TitleInfoControl_o *v12; // x0
  ExUITexture_c *klass; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x0
  AssetData_o *roadmapAssetData; // x20
  System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x21
  CommonUI_o *v19; // x22
  System_Action_o *v20; // x23

  if ( (byte_4B63D39 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AssetManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v4);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__, v5);
    sub_1BE4ACC(&RoadmapButtonPrefab_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v8);
    byte_4B63D39 = 1;
  }
  v9 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v9 = RoadmapButtonPrefab_TypeInfo;
  }
  ASSET_DATA_PATH_ROADMAP = v9->static_fields->ASSET_DATA_PATH_ROADMAP;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(ASSET_DATA_PATH_ROADMAP, 0LL) && this->fields._IsInitialized_k__BackingField )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B618A6 )
    {
      sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v11);
      byte_4B618A6 = 1;
    }
    v12 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v12->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_22;
    v12 = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !v12 )
      goto LABEL_22;
    TitleInfoControl__SetTouchEnable(v12, 0, 0LL);
    v14 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BE4AE4(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    roadmapAtlasList = this->fields.roadmapAtlasList;
    roadmapAssetData = this->fields.roadmapAssetData;
    v19 = (CommonUI_o *)Instance;
    v20 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__, 0LL);
    if ( !v19 )
LABEL_22:
      sub_1BE4D28(v12, v11);
    CommonUI__OpenRoadmapDialog(v19, roadmapAssetData, roadmapAtlasList, v20, 0LL);
  }
}


void __fastcall RoadmapButtonPrefab___OnClickRoadmapButton_b__16_0(
        RoadmapButtonPrefab_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *newNotification; // x20
  __int64 v15; // x1
  ShiningIconComponent_o *Master_object; // x0
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v21; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  RoadmapButtonPrefab_c *v31; // x8
  System_Collections_Generic_IEnumerable_T__o *v32; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v34; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8

  if ( (byte_4B63D3B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_RoadmapMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BE4ACC(&System_Func_RoadmapEntity__int__TypeInfo, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&RoadmapButtonPrefab_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_String_Join_int___, v9);
    sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v10);
    sub_1BE4ACC(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__, v11);
    sub_1BE4ACC(&RoadmapButtonPrefab___c_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v13);
    byte_4B63D3B = 1;
  }
  newNotification = (UnityEngine_Object_o *)this->fields.newNotification;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newNotification, 0LL, 0LL) )
  {
    Master_object = this->fields.newNotification;
    if ( !Master_object )
      goto LABEL_28;
    ShiningIconComponent__Set_39139932(Master_object, 0, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_28;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)Master_object,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0LL);
  v18 = RoadmapButtonPrefab___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v18 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v18->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_1, v21, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Func_RoadmapEntity__int__o *)_9__16_1;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_1,
      (int64_t)_9__16_1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  v31 = RoadmapButtonPrefab_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_T__o *)v30;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v31 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v31->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v34 = System_String__Join_int_(
          (System_String_o *)StringLiteral_863/*","*/,
          v32,
          (const MethodInfo_2FFD19C *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v34, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B618A6 )
  {
    sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v15);
    byte_4B618A6 = 1;
  }
  Master_object = (ShiningIconComponent_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (ShiningIconComponent_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[4].fields.m_CancellationTokenSource->klass;
  if ( !klass || (Master_object = *(ShiningIconComponent_o **)&klass->_2.instance_size) == 0LL )
LABEL_28:
    sub_1BE4D28(Master_object, v15);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 1, 0LL);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B63D3C & 1) == 0 )
  {
    sub_1BE4ACC(&RoadmapButtonPrefab___c_TypeInfo, v1);
    byte_4B63D3C = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(RoadmapButtonPrefab___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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

  if ( (byte_4B63D40 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_ValueTuple_int__int___ctor__, *(_QWORD *)&lastId);
    byte_4B63D40 = 1;
  }
  v8 = (System_ValueTuple_int__int__o)&v7;
  v7 = 0LL;
  System_ValueTuple_int__int____ctor(
    v8,
    lastId,
    currentId,
    (const MethodInfo_3939D70 *)Method_System_ValueTuple_int__int___ctor__);
  return v7;
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__13_0(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B63D3D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, assetObject);
    this = (RoadmapButtonPrefab___c_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B63D3D = 1;
  }
  if ( !assetObject )
    sub_1BE4D28(this, assetObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       assetObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
}


UIAtlas_o *__fastcall RoadmapButtonPrefab___c___Initialize_b__13_1(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_4B63D3E & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, assetObject);
    byte_4B63D3E = 1;
  }
  if ( !assetObject )
    sub_1BE4D28(this, assetObject);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__13_2(
        RoadmapButtonPrefab___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  RoadmapButtonPrefab_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4B63D3F & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1BE4ACC(&RoadmapButtonPrefab_TypeInfo, atlas);
    byte_4B63D3F = 1;
  }
  if ( !atlas )
    sub_1BE4D28(this, atlas);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0LL);
  v5 = RoadmapButtonPrefab_TypeInfo;
  v6 = name;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v5 = RoadmapButtonPrefab_TypeInfo;
  }
  return System_String__op_Equality(v6, v5->static_fields->ROADMAP_BUTTON_ATLAS_NAME, 0LL);
}


int32_t __fastcall RoadmapButtonPrefab___c___OnClickRoadmapButton_b__16_1(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1BE4D28(this, 0LL);
  return roadmap->fields.boardImageId;
}