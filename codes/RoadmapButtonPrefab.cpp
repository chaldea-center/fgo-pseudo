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

  if ( (byte_49F9693 & 1) == 0 )
  {
    sub_1B640C8(&RoadmapButtonPrefab_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_11330/*"RoadMap"*/, v4);
    sub_1B640C8(&StringLiteral_5366/*"DownloadRoadMapUIAtlas1"*/, v5);
    sub_1B640C8(&StringLiteral_8301/*"LastRoadmapBoardIds"*/, v6);
    sub_1B640C8(&StringLiteral_17454/*"btn_next_reward"*/, v7);
    byte_49F9693 = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->ASSET_DATA_PATH_ROADMAP = (struct System_String_o *)StringLiteral_11330/*"RoadMap"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_11330/*"RoadMap"*/,
    v2,
    v3);
  v8 = StringLiteral_5366/*"DownloadRoadMapUIAtlas1"*/;
  static_fields = RoadmapButtonPrefab_TypeInfo->static_fields;
  static_fields->ROADMAP_BUTTON_ATLAS_NAME = (struct System_String_o *)StringLiteral_5366/*"DownloadRoadMapUIAtlas1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->ROADMAP_BUTTON_ATLAS_NAME, v8, v10, v11);
  v12 = StringLiteral_17454/*"btn_next_reward"*/;
  v13 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v13->ROADMAP_BUTTON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17454/*"btn_next_reward"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->ROADMAP_BUTTON_SPRITE_NAME, v12, v14, v15);
  v16 = StringLiteral_8301/*"LastRoadmapBoardIds"*/;
  v17 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v17->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8301/*"LastRoadmapBoardIds"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->LAST_ROADMAP_BOARD_IDS_KEY, v16, v18, v19);
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
  System_String_array *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  RoadmapButtonPrefab___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v35; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  RoadmapButtonPrefab___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_int__int__o *_9__13_1; // x21
  Il2CppObject *v45; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_List_TSource__o *v50; // x20
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  RoadmapButtonPrefab___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x19
  System_Func_object__int__o *_9__13_2; // x21
  Il2CppObject *v57; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  RoadmapButtonPrefab___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x19
  System_Func_int__int__o *_9__13_3; // x21
  Il2CppObject *v67; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_IEnumerable_TSecond__o *v74; // x19
  char v75; // w21
  RoadmapButtonPrefab___c_c *v76; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__13_4; // x21
  Il2CppObject *v78; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_c *klass; // x8
  System_String_o *v83; // x19
  __int64 v84; // x9
  int *p_offset; // x10
  __int64 v86; // x0
  __int64 v87; // x19
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x8
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0

  if ( (byte_49F9691 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_RoadmapMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_int__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____, v8);
    sub_1B640C8(&System_Func_RoadmapEntity__int__TypeInfo, v9);
    sub_1B640C8(&System_Func_int__int__TypeInfo, v10);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v11);
    sub_1B640C8(&System_Func_int__int__ValueTuple_int__int___TypeInfo, v12);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, v15);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_1B640C8(&RoadmapButtonPrefab_TypeInfo, v18);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_0__, v19);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_1__, v20);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_2__, v21);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_3__, v22);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_4__, v23);
    sub_1B640C8(&RoadmapButtonPrefab___c_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_1007/*"-1"*/, v25);
    sub_1B640C8(&StringLiteral_869/*","*/, v26);
    byte_49F9691 = 1;
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
  v29 = System_String__Split_61400480(String, (System_String_o *)StringLiteral_869/*","*/, 0, 0LL);
  v32 = RoadmapButtonPrefab___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v32 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__int__o *)v32->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__13_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v30, v31);
    System_Func_object__int____ctor(
      _9__13_0,
      v35,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_0__,
      0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_string__int__o *)_9__13_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v37, v38);
  }
  v39 = System_Linq_Enumerable__Select_object__int_(
          v33,
          (System_Func_TSource__TResult__o *)_9__13_0,
          (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
  v42 = RoadmapButtonPrefab___c_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v42 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_1 = v42->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__13_1 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v40, v41);
    System_Func_int__int____ctor(
      _9__13_1,
      v45,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_1__,
      0LL);
    v46 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v46->__9__13_1 = _9__13_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->__9__13_1, (int32_t)_9__13_1, v47, v48);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v43,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_2E62EA4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v50 = System_Linq_Enumerable__ToList_int_(
          v49,
          (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)String,
                                this->fields.roadmapAtlasList,
                                0LL);
  v54 = RoadmapButtonPrefab___c_TypeInfo;
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v54 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__int__o *)v54->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v54->static_fields->__9;
    _9__13_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_RoadmapEntity__int__TypeInfo, v52, v53);
    System_Func_object__int____ctor(
      _9__13_2,
      v57,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_2__,
      0LL);
    v58 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v58->__9__13_2 = (struct System_Func_RoadmapEntity__int__o *)_9__13_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->__9__13_2, (int32_t)_9__13_2, v59, v60);
  }
  v61 = System_Linq_Enumerable__Select_object__int_(
          v55,
          (System_Func_TSource__TResult__o *)_9__13_2,
          (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v64 = RoadmapButtonPrefab___c_TypeInfo;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)v61;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v64 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_3 = v64->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__13_3 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v62, v63);
    System_Func_int__int____ctor(
      _9__13_3,
      v67,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_3__,
      0LL);
    v68 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v68->__9__13_3 = _9__13_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v68->__9__13_3, (int32_t)_9__13_3, v69, v70);
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v65,
                                                               (System_Func_TSource__TKey__o *)_9__13_3,
                                                               (const MethodInfo_2E62EA4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v71,
                                (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v50 )
    goto LABEL_75;
  v74 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v50->fields._size < SLODWORD(String[1].klass) )
  {
    v75 = 1;
    return v75 & 1;
  }
  v76 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v76 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_4 = v76->static_fields->__9__13_4;
  if ( !_9__13_4 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v76->static_fields->__9;
    _9__13_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1B64314(
                                                                  System_Func_int__int__ValueTuple_int__int___TypeInfo,
                                                                  v72,
                                                                  v73);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__13_4,
      v78,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__13_4__,
      0LL);
    v79 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v79->__9__13_4 = _9__13_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v79->__9__13_4, (int32_t)_9__13_4, v80, v81);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v50,
                                v74,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__13_4,
                                (const MethodInfo_2E77C0C *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1B64324(String);
  klass = String->klass;
  v83 = String;
  v84 = *(unsigned __int16 *)(&String->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&String->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v84;
      p_offset += 4;
      if ( !v84 )
        goto LABEL_48;
    }
    v86 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_48:
    v86 = sub_1BB60A8(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0LL);
  }
  v87 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v86)(v83, *(_QWORD *)(v86 + 8));
  if ( !v87 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v88 = *(_QWORD *)v87;
    v89 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
    {
      v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v90 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v89;
        v90 += 4;
        if ( !v89 )
          goto LABEL_55;
      }
      v91 = v88 + 16LL * *v90 + 312;
    }
    else
    {
LABEL_55:
      v91 = sub_1BB60A8(v87, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
    if ( (v75 & 1) == 0 )
      break;
    v92 = *(_QWORD *)v87;
    v93 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
    {
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v94 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_62;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_62:
      v95 = sub_1BB60A8(v87, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0LL);
    }
    v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v87, *(_QWORD *)(v95 + 8));
    if ( (_DWORD)v96 != HIDWORD(v96) )
      goto LABEL_67;
  }
  v75 = 0;
LABEL_67:
  v97 = *(_QWORD *)v87;
  v98 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
  {
    v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v99 - 1) != System_IDisposable_TypeInfo )
    {
      --v98;
      v99 += 4;
      if ( !v98 )
        goto LABEL_71;
    }
    v100 = v97 + 16LL * *v99 + 312;
  }
  else
  {
LABEL_71:
    v100 = sub_1BB60A8(v87, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v100)(v87, *(_QWORD *)(v100 + 8));
  return v75 & 1;
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
  __int64 v27; // x1
  __int64 v28; // x2
  RoadmapButtonPrefab___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_object__bool__o *_9__12_0; // x21
  Il2CppObject *v32; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  RoadmapButtonPrefab___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  System_Func_object__object__o *_9__12_1; // x21
  Il2CppObject *v42; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  void *gameObject; // x0
  Il2CppObject *v51; // x20
  int v52; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  RoadmapButtonPrefab___c_c *v56; // x0
  UISprite_o *sprite; // x22
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x23
  System_Func_object__bool__o *_9__12_2; // x24
  Il2CppObject *v60; // x25
  struct RoadmapButtonPrefab___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  UISprite_o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v69; // x23
  __int64 v70; // x1
  __int64 v71; // x2
  System_Func_object__bool__o *v72; // x22
  const MethodInfo *v73; // x1
  bool v74; // w1
  struct ShiningIconComponent_o *newNotification; // x20
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9690 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObjectList_GameObject___, roadmapAssetData);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_RoadmapMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_All_RoadmapEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_UIAtlas___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GameObject___, v12);
    sub_1B640C8(&EventDelegate_TypeInfo, v13);
    sub_1B640C8(&System_Func_UIAtlas__bool__TypeInfo, v14);
    sub_1B640C8(&System_Func_GameObject__UIAtlas__TypeInfo, v15);
    sub_1B640C8(&System_Func_GameObject__bool__TypeInfo, v16);
    sub_1B640C8(&System_Func_RoadmapEntity__bool__TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__, v18);
    sub_1B640C8(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v19);
    sub_1B640C8(&RoadmapButtonPrefab_TypeInfo, v20);
    sub_1B640C8(&Method_RoadmapMaster_IsDispAchieved__, v21);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__Initialize_b__12_0__, v22);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__Initialize_b__12_1__, v23);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__Initialize_b__12_2__, v24);
    sub_1B640C8(&RoadmapButtonPrefab___c_TypeInfo, v25);
    byte_49F9690 = 1;
  }
  this->fields._IsInitialized_k__BackingField = 0;
  if ( !roadmapAssetData )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    goto LABEL_40;
  }
  ObjectList_object = AssetData__GetObjectList_object_(
                        roadmapAssetData,
                        (const MethodInfo_2E1BBD4 *)Method_AssetData_GetObjectList_GameObject___);
  v29 = RoadmapButtonPrefab___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v29 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v29->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GameObject__bool__TypeInfo, v27, v28);
    System_Func_object__bool____ctor(_9__12_0, v32, Method_RoadmapButtonPrefab___c__Initialize_b__12_0__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_GameObject__bool__o *)_9__12_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v34, v35);
  }
  v36 = System_Linq_Enumerable__Where_object_(
          v30,
          (System_Func_TSource__bool__o *)_9__12_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GameObject___);
  v39 = RoadmapButtonPrefab___c_TypeInfo;
  v40 = v36;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v39 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__12_1 = (System_Func_object__object__o *)v39->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__12_1 = (System_Func_object__object__o *)sub_1B64314(System_Func_GameObject__UIAtlas__TypeInfo, v37, v38);
    System_Func_object__object____ctor(_9__12_1, v42, Method_RoadmapButtonPrefab___c__Initialize_b__12_1__, 0LL);
    v43 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v43->__9__12_1 = (struct System_Func_GameObject__UIAtlas__o *)_9__12_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->__9__12_1, (int32_t)_9__12_1, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v40,
                                                               (System_Func_TSource__TResult__o *)_9__12_1,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v47 = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__ToList_object_(
                                                               v46,
                                                               (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  this->fields.roadmapAtlasList = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.roadmapAtlasList, (int32_t)v47, v48, v49);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !gameObject )
    goto LABEL_44;
  v51 = (Il2CppObject *)gameObject;
  gameObject = RoadmapMaster__GetSortedDispBoardEntityList(
                 (RoadmapMaster_o *)gameObject,
                 this->fields.roadmapAtlasList,
                 0LL);
  if ( !gameObject )
    goto LABEL_44;
  v52 = *((_DWORD *)gameObject + 6);
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  if ( v52 <= 0 )
  {
LABEL_40:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v56 = RoadmapButtonPrefab___c_TypeInfo;
  sprite = this->fields.sprite;
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v56 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__12_2 = (System_Func_object__bool__o *)v56->static_fields->__9__12_2;
  if ( !_9__12_2 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v56->static_fields->__9;
    _9__12_2 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UIAtlas__bool__TypeInfo, v54, v55);
    System_Func_object__bool____ctor(_9__12_2, v60, Method_RoadmapButtonPrefab___c__Initialize_b__12_2__, 0LL);
    v61 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v61->__9__12_2 = (struct System_Func_UIAtlas__bool__o *)_9__12_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->__9__12_2, (int32_t)_9__12_2, v62, v63);
  }
  gameObject = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                 (System_Collections_Generic_IEnumerable_TSource__o *)roadmapAtlasList,
                 (System_Func_TSource__bool__o *)_9__12_2,
                 (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
  if ( !sprite )
    goto LABEL_44;
  UISprite__set_atlas(sprite, (UIAtlas_o *)gameObject, 0LL);
  v64 = this->fields.sprite;
  gameObject = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
  if ( !v64 )
    goto LABEL_44;
  UISprite__set_spriteName(v64, RoadmapButtonPrefab_TypeInfo->static_fields->ROADMAP_BUTTON_SPRITE_NAME, 0LL);
  button = this->fields.button;
  if ( !button )
    goto LABEL_44;
  onClick = button->fields.onClick;
  v69 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v65, v66);
  EventDelegate_Callback___ctor(
    v69,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onClick, v69, 0LL);
  v72 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RoadmapEntity__bool__TypeInfo, v70, v71);
  System_Func_object__bool____ctor(v72, v51, Method_RoadmapMaster_IsDispAchieved__, 0LL);
  if ( !System_Linq_Enumerable__All_object_(
          v53,
          (System_Func_TSource__bool__o *)v72,
          (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_RoadmapEntity___) )
  {
    newNotification = this->fields.newNotification;
    gameObject = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(this, v73);
    if ( newNotification )
    {
      v74 = (unsigned __int8)gameObject & 1;
      gameObject = newNotification;
      goto LABEL_43;
    }
LABEL_44:
    sub_1B64324(gameObject);
  }
  gameObject = this->fields.button;
  if ( !gameObject )
    goto LABEL_44;
  v76.fields.r = 0.5;
  v76.fields.g = 0.5;
  v76.fields.b = 0.5;
  v76.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v76, 0LL);
  gameObject = this->fields.newNotification;
  if ( !gameObject )
    goto LABEL_44;
  v74 = 0;
LABEL_43:
  ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)gameObject, v74, 0LL);
  this->fields._IsInitialized_k__BackingField = 1;
}


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
      sub_1B64324(button);
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x22
  __int64 v18; // x0

  if ( (byte_49F9692 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__, v4);
    sub_1B640C8(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__15_0__, v5);
    sub_1B640C8(&RoadmapButtonPrefab_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F9692 = 1;
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
      v10 = (_QWORD *)sub_1B640E0(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    roadmapAtlasList = this->fields.roadmapAtlasList;
    v14 = (CommonUI_o *)Instance;
    v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__15_0__, 0LL);
    if ( !v14 )
      sub_1B64324(v18);
    CommonUI__OpenRoadmapDialog(v14, roadmapAtlasList, v17, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  RoadmapButtonPrefab___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__15_1; // x20
  Il2CppObject *v19; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Int32_array *v24; // x0
  RoadmapButtonPrefab_c *v25; // x8
  System_Collections_Generic_IEnumerable_T__o *v26; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v28; // x1

  if ( (byte_49F9694 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_RoadmapMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B640C8(&System_Func_RoadmapEntity__int__TypeInfo, v6);
    sub_1B640C8(&RoadmapButtonPrefab_TypeInfo, v7);
    sub_1B640C8(&Method_System_String_Join_int___, v8);
    sub_1B640C8(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__15_1__, v9);
    sub_1B640C8(&RoadmapButtonPrefab___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_869/*","*/, v11);
    byte_49F9694 = 1;
  }
  newNotification = this->fields.newNotification;
  if ( !newNotification )
    goto LABEL_16;
  ShiningIconComponent__Set_37919868(newNotification, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  newNotification = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !newNotification )
LABEL_16:
    sub_1B64324(newNotification);
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)newNotification,
                                this->fields.roadmapAtlasList,
                                0LL);
  v16 = RoadmapButtonPrefab___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v16 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__15_1 = (System_Func_object__int__o *)v16->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__15_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_RoadmapEntity__int__TypeInfo, v14, v15);
    System_Func_object__int____ctor(_9__15_1, v19, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__15_1__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Func_RoadmapEntity__int__o *)_9__15_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__15_1,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v24 = System_Linq_Enumerable__ToArray_int_(
          v23,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  v25 = RoadmapButtonPrefab_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_T__o *)v24;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v25 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v25->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v28 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          v26,
          (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v28, 0LL);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9695 & 1) == 0 )
  {
    sub_1B640C8(&RoadmapButtonPrefab___c_TypeInfo, v1);
    byte_49F9695 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RoadmapButtonPrefab___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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

  if ( (byte_49F9699 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_ValueTuple_int__int___ctor__, *(_QWORD *)&lastId);
    byte_49F9699 = 1;
  }
  v8 = (System_ValueTuple_int__int__o)&v7;
  v7 = 0LL;
  System_ValueTuple_int__int____ctor(
    v8,
    lastId,
    currentId,
    (const MethodInfo_37F85A8 *)Method_System_ValueTuple_int__int___ctor__);
  return v7;
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__12_0(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_49F9696 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, assetObject);
    this = (RoadmapButtonPrefab___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F9696 = 1;
  }
  if ( !assetObject )
    sub_1B64324(this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       assetObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
}


UIAtlas_o *__fastcall RoadmapButtonPrefab___c___Initialize_b__12_1(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_49F9697 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, assetObject);
    byte_49F9697 = 1;
  }
  if ( !assetObject )
    sub_1B64324(this);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__12_2(
        RoadmapButtonPrefab___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  RoadmapButtonPrefab_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_49F9698 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1B640C8(&RoadmapButtonPrefab_TypeInfo, atlas);
    byte_49F9698 = 1;
  }
  if ( !atlas )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return roadmap->fields.boardImageId;
}