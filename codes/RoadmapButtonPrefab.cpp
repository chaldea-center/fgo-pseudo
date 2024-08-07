void __fastcall RoadmapButtonPrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct RoadmapButtonPrefab_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct RoadmapButtonPrefab_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct RoadmapButtonPrefab_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FBDA4 & 1) == 0 )
  {
    sub_1B64A00(&RoadmapButtonPrefab_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_11334/*"RoadMap"*/, v4);
    sub_1B64A00(&StringLiteral_5367/*"DownloadRoadMapUIAtlas1"*/, v5);
    sub_1B64A00(&StringLiteral_8303/*"LastRoadmapBoardIds"*/, v6);
    sub_1B64A00(&StringLiteral_17457/*"btn_next_reward"*/, v7);
    byte_49FBDA4 = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->ASSET_DATA_PATH_ROADMAP = (struct System_String_o *)StringLiteral_11334/*"RoadMap"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_11334/*"RoadMap"*/,
    v2,
    v3);
  v8 = StringLiteral_5367/*"DownloadRoadMapUIAtlas1"*/;
  static_fields = RoadmapButtonPrefab_TypeInfo->static_fields;
  static_fields->ROADMAP_BUTTON_ATLAS_NAME = (struct System_String_o *)StringLiteral_5367/*"DownloadRoadMapUIAtlas1"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->ROADMAP_BUTTON_ATLAS_NAME, v8, v10, v11);
  v12 = StringLiteral_17457/*"btn_next_reward"*/;
  v13 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v13->ROADMAP_BUTTON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17457/*"btn_next_reward"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v13->ROADMAP_BUTTON_SPRITE_NAME, v12, v14, v15);
  v16 = StringLiteral_8303/*"LastRoadmapBoardIds"*/;
  v17 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v17->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8303/*"LastRoadmapBoardIds"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v17->LAST_ROADMAP_BOARD_IDS_KEY, v16, v18, v19);
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
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v34; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v38; // x0
  RoadmapButtonPrefab___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  System_Func_int__int__o *_9__13_1; // x21
  Il2CppObject *v42; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_TSource__o *v47; // x20
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x19
  System_Func_object__int__o *_9__13_2; // x21
  Il2CppObject *v52; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v56; // x0
  RoadmapButtonPrefab___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x19
  System_Func_int__int__o *_9__13_3; // x21
  Il2CppObject *v60; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_IEnumerable_TSecond__o *v65; // x19
  char v66; // w21
  RoadmapButtonPrefab___c_c *v67; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__13_4; // x21
  Il2CppObject *v69; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_c *klass; // x8
  System_String_o *v74; // x19
  __int64 v75; // x9
  int *p_offset; // x10
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x19
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0

  if ( (byte_49FBDA2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_RoadmapMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderBy_int__int___, v4);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____, v8);
    sub_1B64A00(&System_Func_RoadmapEntity__int__TypeInfo, v9);
    sub_1B64A00(&System_Func_int__int__TypeInfo, v10);
    sub_1B64A00(&System_Func_string__int__TypeInfo, v11);
    sub_1B64A00(&System_Func_int__int__ValueTuple_int__int___TypeInfo, v12);
    sub_1B64A00(&System_IDisposable_TypeInfo, v13);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, v14);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, v15);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_1B64A00(&RoadmapButtonPrefab_TypeInfo, v18);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_0__, v19);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_1__, v20);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_2__, v21);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_3__, v22);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_4__, v23);
    sub_1B64A00(&RoadmapButtonPrefab___c_TypeInfo, v24);
    sub_1B64A00(&StringLiteral_1007/*"-1"*/, v25);
    sub_1B64A00(&StringLiteral_869/*","*/, v26);
    byte_49FBDA2 = 1;
  }
  v27 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v27 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v27->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_1007/*"-1"*/,
             0LL);
  if ( !String )
    goto LABEL_75;
  v30 = System_String__Split_61410220(String, (System_String_o *)StringLiteral_869/*","*/, 0, 0LL);
  v31 = RoadmapButtonPrefab___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v31 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__int__o *)v31->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__13_0 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__13_0,
      v34,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_0__,
      0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_string__int__o *)_9__13_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v36, v37);
  }
  v38 = System_Linq_Enumerable__Select_object__int_(
          v32,
          (System_Func_TSource__TResult__o *)_9__13_0,
          (const MethodInfo_2E6B3C4 *)Method_System_Linq_Enumerable_Select_string__int___);
  v39 = RoadmapButtonPrefab___c_TypeInfo;
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v39 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_1 = v39->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__13_1 = (System_Func_int__int__o *)sub_1B64C4C(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__13_1,
      v42,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_1__,
      0LL);
    v43 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v43->__9__13_1 = _9__13_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v43->__9__13_1, (int32_t)_9__13_1, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v40,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_2E65798 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v47 = System_Linq_Enumerable__ToList_int_(
          v46,
          (const MethodInfo_2E776A4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)String,
                                this->fields.roadmapAtlasList,
                                0LL);
  v49 = RoadmapButtonPrefab___c_TypeInfo;
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v49 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__int__o *)v49->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__13_2 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__13_2,
      v52,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_2__,
      0LL);
    v53 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v53->__9__13_2 = (struct System_Func_RoadmapEntity__int__o *)_9__13_2;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v53->__9__13_2, (int32_t)_9__13_2, v54, v55);
  }
  v56 = System_Linq_Enumerable__Select_object__int_(
          v50,
          (System_Func_TSource__TResult__o *)_9__13_2,
          (const MethodInfo_2E6B3C4 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v57 = RoadmapButtonPrefab___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v57 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_3 = v57->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__13_3 = (System_Func_int__int__o *)sub_1B64C4C(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__13_3,
      v60,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_3__,
      0LL);
    v61 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v61->__9__13_3 = _9__13_3;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v61->__9__13_3, (int32_t)_9__13_3, v62, v63);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v58,
                                                               (System_Func_TSource__TKey__o *)_9__13_3,
                                                               (const MethodInfo_2E65798 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v64,
                                (const MethodInfo_2E776A4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v47 )
    goto LABEL_75;
  v65 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v47->fields._size < SLODWORD(String[1].klass) )
  {
    v66 = 1;
    return v66 & 1;
  }
  v67 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v67 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_4 = v67->static_fields->__9__13_4;
  if ( !_9__13_4 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v67->static_fields->__9;
    _9__13_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1B64C4C(System_Func_int__int__ValueTuple_int__int___TypeInfo);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__13_4,
      v69,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_4__,
      0LL);
    v70 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v70->__9__13_4 = _9__13_4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v70->__9__13_4, (int32_t)_9__13_4, v71, v72);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v47,
                                v65,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__13_4,
                                (const MethodInfo_2E7A500 *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1B64C5C(String, v29);
  klass = String->klass;
  v74 = String;
  v75 = *(unsigned __int16 *)(&String->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&String->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v75;
      p_offset += 4;
      if ( !v75 )
        goto LABEL_48;
    }
    v77 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_48:
    v77 = sub_1BB69E0(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0LL);
  }
  v79 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v77)(v74, *(_QWORD *)(v77 + 8));
  if ( !v79 )
    sub_1B64C5C(0LL, v78);
  while ( 1 )
  {
    v80 = *(_QWORD *)v79;
    v81 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
    {
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v82 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_55;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_55:
      v83 = sub_1BB69E0(v79, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
    if ( (v66 & 1) == 0 )
      break;
    v84 = *(_QWORD *)v79;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
    {
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v86 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_62;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_62:
      v87 = sub_1BB69E0(v79, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0LL);
    }
    v88 = (*(__int64 (__fastcall **)(__int64, _QWORD))v87)(v79, *(_QWORD *)(v87 + 8));
    if ( (_DWORD)v88 != HIDWORD(v88) )
      goto LABEL_67;
  }
  v66 = 0;
LABEL_67:
  v89 = *(_QWORD *)v79;
  v90 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
  {
    v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_71;
    }
    v92 = v89 + 16LL * *v91 + 312;
  }
  else
  {
LABEL_71:
    v92 = sub_1BB69E0(v79, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v92)(v79, *(_QWORD *)(v92 + 8));
  return v66 & 1;
}


void __fastcall RoadmapButtonPrefab__Initialize(
        RoadmapButtonPrefab_o *this,
        AssetData_o *roadmapAssetData,
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
  __int64 v25; // x1
  System_Object_array *ObjectList_object; // x0
  RoadmapButtonPrefab___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__bool__o *_9__12_0; // x21
  Il2CppObject *v30; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  RoadmapButtonPrefab___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Func_object__object__o *_9__12_1; // x21
  Il2CppObject *v38; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  void *gameObject; // x0
  const MethodInfo *v47; // x1
  Il2CppObject *v48; // x20
  int v49; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x21
  RoadmapButtonPrefab___c_c *v51; // x0
  UISprite_o *sprite; // x22
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x23
  System_Func_object__bool__o *_9__12_2; // x24
  Il2CppObject *v55; // x25
  struct RoadmapButtonPrefab___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  UISprite_o *v59; // x22
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v62; // x23
  System_Func_object__bool__o *v63; // x22
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v65; // x0
  bool v66; // w1

  if ( (byte_49FBDA1 & 1) == 0 )
  {
    sub_1B64A00(&Method_AssetData_GetObjectList_GameObject___, roadmapAssetData);
    sub_1B64A00(&EventDelegate_Callback_TypeInfo, v5);
    sub_1B64A00(&Method_DataManager_GetMaster_RoadmapMaster___, v6);
    sub_1B64A00(&DataManager_TypeInfo, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_All_RoadmapEntity___, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___, v9);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___, v10);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_UIAtlas___, v11);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_GameObject___, v12);
    sub_1B64A00(&EventDelegate_TypeInfo, v13);
    sub_1B64A00(&System_Func_UIAtlas__bool__TypeInfo, v14);
    sub_1B64A00(&System_Func_GameObject__UIAtlas__TypeInfo, v15);
    sub_1B64A00(&System_Func_GameObject__bool__TypeInfo, v16);
    sub_1B64A00(&System_Func_RoadmapEntity__bool__TypeInfo, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__, v18);
    sub_1B64A00(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v19);
    sub_1B64A00(&RoadmapButtonPrefab_TypeInfo, v20);
    sub_1B64A00(&Method_RoadmapMaster_IsDispAchieved__, v21);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__Initialize_b__12_0__, v22);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__Initialize_b__12_1__, v23);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__Initialize_b__12_2__, v24);
    sub_1B64A00(&RoadmapButtonPrefab___c_TypeInfo, v25);
    byte_49FBDA1 = 1;
  }
  this->fields._IsInitialized_k__BackingField = 0;
  if ( !roadmapAssetData )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    goto LABEL_39;
  }
  ObjectList_object = AssetData__GetObjectList_object_(
                        roadmapAssetData,
                        (const MethodInfo_2E1E4C8 *)Method_AssetData_GetObjectList_GameObject___);
  v27 = RoadmapButtonPrefab___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v27 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v27->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v30, Method_RoadmapButtonPrefab___c__Initialize_b__12_0__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_GameObject__bool__o *)_9__12_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)_9__12_0,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v35 = RoadmapButtonPrefab___c_TypeInfo;
  v36 = v34;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v35 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__12_1 = (System_Func_object__object__o *)v35->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__12_1 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_GameObject__UIAtlas__TypeInfo);
    System_Func_object__object____ctor(_9__12_1, v38, Method_RoadmapButtonPrefab___c__Initialize_b__12_1__, 0LL);
    v39 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v39->__9__12_1 = (struct System_Func_GameObject__UIAtlas__o *)_9__12_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v39->__9__12_1, (int32_t)_9__12_1, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v36,
                                                               (System_Func_TSource__TResult__o *)_9__12_1,
                                                               (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v43 = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__ToList_object_(
                                                               v42,
                                                               (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  this->fields.roadmapAtlasList = v43;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.roadmapAtlasList, (int32_t)v43, v44, v45);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !gameObject )
    goto LABEL_43;
  v48 = (Il2CppObject *)gameObject;
  gameObject = RoadmapMaster__GetSortedDispBoardEntityList(
                 (RoadmapMaster_o *)gameObject,
                 this->fields.roadmapAtlasList,
                 0LL);
  if ( !gameObject )
    goto LABEL_43;
  v49 = *((_DWORD *)gameObject + 6);
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  if ( v49 <= 0 )
  {
LABEL_39:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v51 = RoadmapButtonPrefab___c_TypeInfo;
  sprite = this->fields.sprite;
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v51 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__12_2 = (System_Func_object__bool__o *)v51->static_fields->__9__12_2;
  if ( !_9__12_2 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v51->static_fields->__9;
    _9__12_2 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_UIAtlas__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_2, v55, Method_RoadmapButtonPrefab___c__Initialize_b__12_2__, 0LL);
    v56 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v56->__9__12_2 = (struct System_Func_UIAtlas__bool__o *)_9__12_2;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v56->__9__12_2, (int32_t)_9__12_2, v57, v58);
  }
  gameObject = System_Linq_Enumerable__FirstOrDefault_object__48628184(
                 (System_Collections_Generic_IEnumerable_TSource__o *)roadmapAtlasList,
                 (System_Func_TSource__bool__o *)_9__12_2,
                 (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
  if ( !sprite )
    goto LABEL_43;
  UISprite__set_atlas(sprite, (UIAtlas_o *)gameObject, 0LL);
  v59 = this->fields.sprite;
  gameObject = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
  if ( !v59 )
    goto LABEL_43;
  UISprite__set_spriteName(v59, RoadmapButtonPrefab_TypeInfo->static_fields->ROADMAP_BUTTON_SPRITE_NAME, 0LL);
  button = this->fields.button;
  if ( !button )
    goto LABEL_43;
  onClick = button->fields.onClick;
  v62 = (EventDelegate_Callback_o *)sub_1B64C4C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v62,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onClick, v62, 0LL);
  v63 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v63, v48, Method_RoadmapMaster_IsDispAchieved__, 0LL);
  gameObject = (void *)System_Linq_Enumerable__All_object_(
                         v50,
                         (System_Func_TSource__bool__o *)v63,
                         (const MethodInfo_2E47F58 *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(this, v47);
    if ( newNotification )
    {
      v66 = (unsigned __int8)gameObject & 1;
      v65 = newNotification;
      goto LABEL_42;
    }
LABEL_43:
    sub_1B64C5C(gameObject, v47);
  }
  if ( !newNotification )
    goto LABEL_43;
  v65 = this->fields.newNotification;
  v66 = 0;
LABEL_42:
  ShiningIconComponent__Set_37924600(v65, v66, 0LL);
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
      sub_1B64C5C(button, isEnabled);
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
  RoadmapButtonPrefab_c *v8; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x20
  CommonUI_o *v14; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_49FBDA3 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&AssetManager_TypeInfo, v3);
    sub_1B64A00(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v4);
    sub_1B64A00(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__15_0__, v5);
    sub_1B64A00(&RoadmapButtonPrefab_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49FBDA3 = 1;
  }
  v8 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v8 = RoadmapButtonPrefab_TypeInfo;
  }
  ASSET_DATA_PATH_ROADMAP = v8->static_fields->ASSET_DATA_PATH_ROADMAP;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(ASSET_DATA_PATH_ROADMAP, 0LL) && this->fields._IsInitialized_k__BackingField )
  {
    v10 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B64A18(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B649E4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    roadmapAtlasList = this->fields.roadmapAtlasList;
    v14 = (CommonUI_o *)Instance;
    v15 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__15_0__, 0LL);
    if ( !v14 )
      sub_1B64C5C(v16, v17);
    CommonUI__OpenRoadmapDialog(v14, roadmapAtlasList, v15, 0LL);
  }
}


void __fastcall RoadmapButtonPrefab___OnClickRoadmapButton_b__15_0(
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
  ShiningIconComponent_o *newNotification; // x0
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__15_1; // x20
  Il2CppObject *v17; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Int32_array *v22; // x0
  RoadmapButtonPrefab_c *v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v26; // x1

  if ( (byte_49FBDA5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_RoadmapMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v4);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B64A00(&System_Func_RoadmapEntity__int__TypeInfo, v6);
    sub_1B64A00(&RoadmapButtonPrefab_TypeInfo, v7);
    sub_1B64A00(&Method_System_String_Join_int___, v8);
    sub_1B64A00(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__15_1__, v9);
    sub_1B64A00(&RoadmapButtonPrefab___c_TypeInfo, v10);
    sub_1B64A00(&StringLiteral_869/*","*/, v11);
    byte_49FBDA5 = 1;
  }
  newNotification = this->fields.newNotification;
  if ( !newNotification )
    goto LABEL_16;
  ShiningIconComponent__Set_37924600(newNotification, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  newNotification = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !newNotification )
LABEL_16:
    sub_1B64C5C(newNotification, method);
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)newNotification,
                                this->fields.roadmapAtlasList,
                                0LL);
  v14 = RoadmapButtonPrefab___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v14 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__15_1 = (System_Func_object__int__o *)v14->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__15_1 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_1, v17, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__15_1__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Func_RoadmapEntity__int__o *)_9__15_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__15_1,
                                                               (const MethodInfo_2E6B3C4 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v22 = System_Linq_Enumerable__ToArray_int_(
          v21,
          (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
  v23 = RoadmapButtonPrefab_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)v22;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v23 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v23->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v26 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          v24,
          (const MethodInfo_2EDD1F4 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v26, 0LL);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FBDA6 & 1) == 0 )
  {
    sub_1B64A00(&RoadmapButtonPrefab___c_TypeInfo, v1);
    byte_49FBDA6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(RoadmapButtonPrefab___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall RoadmapButtonPrefab___c___ctor(RoadmapButtonPrefab___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__13_0(
        RoadmapButtonPrefab___c_o *this,
        System_String_o *boardId,
        const MethodInfo *method)
{
  return System_Int32__Parse(boardId, 0LL);
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__13_1(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__13_2(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B64C5C(this, 0LL);
  return roadmap->fields.boardImageId;
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__13_3(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__int__o __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__13_4(
        RoadmapButtonPrefab___c_o *this,
        int32_t lastId,
        int32_t currentId,
        const MethodInfo *method)
{
  System_ValueTuple_int__int__o v7; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_int__int__o v8; // 0:x0.8

  if ( (byte_49FBDAA & 1) == 0 )
  {
    sub_1B64A00(&Method_System_ValueTuple_int__int___ctor__, *(_QWORD *)&lastId);
    byte_49FBDAA = 1;
  }
  v8 = (System_ValueTuple_int__int__o)&v7;
  v7 = 0LL;
  System_ValueTuple_int__int____ctor(
    v8,
    lastId,
    currentId,
    (const MethodInfo_37FAE9C *)Method_System_ValueTuple_int__int___ctor__);
  return v7;
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__12_0(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_49FBDA7 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, assetObject);
    this = (RoadmapButtonPrefab___c_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    byte_49FBDA7 = 1;
  }
  if ( !assetObject )
    sub_1B64C5C(this, assetObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       assetObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
}


UIAtlas_o *__fastcall RoadmapButtonPrefab___c___Initialize_b__12_1(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_49FBDA8 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, assetObject);
    byte_49FBDA8 = 1;
  }
  if ( !assetObject )
    sub_1B64C5C(this, assetObject);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__12_2(
        RoadmapButtonPrefab___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  RoadmapButtonPrefab_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_49FBDA9 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1B64A00(&RoadmapButtonPrefab_TypeInfo, atlas);
    byte_49FBDA9 = 1;
  }
  if ( !atlas )
    sub_1B64C5C(this, atlas);
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


int32_t __fastcall RoadmapButtonPrefab___c___OnClickRoadmapButton_b__15_1(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1B64C5C(this, 0LL);
  return roadmap->fields.boardImageId;
}