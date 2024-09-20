void __fastcall RoadmapButtonPrefab___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct RoadmapButtonPrefab_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct RoadmapButtonPrefab_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct RoadmapButtonPrefab_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5839C & 1) == 0 )
  {
    sub_1B885B0(&RoadmapButtonPrefab_TypeInfo);
    sub_1B885B0(&StringLiteral_11384/*"RoadMap"*/);
    sub_1B885B0(&StringLiteral_5391/*"DownloadRoadMapUIAtlas1"*/);
    sub_1B885B0(&StringLiteral_8340/*"LastRoadmapBoardIds"*/);
    sub_1B885B0(&StringLiteral_17524/*"btn_next_reward"*/);
    byte_4A5839C = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->ASSET_DATA_PATH_ROADMAP = (struct System_String_o *)StringLiteral_11384/*"RoadMap"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_11384/*"RoadMap"*/,
    v1,
    v2);
  v3 = StringLiteral_5391/*"DownloadRoadMapUIAtlas1"*/;
  static_fields = RoadmapButtonPrefab_TypeInfo->static_fields;
  static_fields->ROADMAP_BUTTON_ATLAS_NAME = (struct System_String_o *)StringLiteral_5391/*"DownloadRoadMapUIAtlas1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->ROADMAP_BUTTON_ATLAS_NAME, v3, v5, v6);
  v7 = StringLiteral_17524/*"btn_next_reward"*/;
  v8 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v8->ROADMAP_BUTTON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17524/*"btn_next_reward"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->ROADMAP_BUTTON_SPRITE_NAME, v7, v9, v10);
  v11 = StringLiteral_8340/*"LastRoadmapBoardIds"*/;
  v12 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v12->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8340/*"LastRoadmapBoardIds"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->LAST_ROADMAP_BOARD_IDS_KEY, v11, v13, v14);
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
  RoadmapButtonPrefab_c *v3; // x0
  System_String_o *String; // x0
  __int64 v5; // x1
  System_String_array *v6; // x0
  RoadmapButtonPrefab___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_object__int__o *_9__14_0; // x21
  Il2CppObject *v10; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  RoadmapButtonPrefab___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_int__int__o *_9__14_1; // x21
  Il2CppObject *v18; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_TSource__o *v23; // x20
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__14_2; // x21
  Il2CppObject *v28; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0
  RoadmapButtonPrefab___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_int__int__o *_9__14_3; // x21
  Il2CppObject *v36; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSecond__o *v41; // x19
  char v42; // w21
  RoadmapButtonPrefab___c_c *v43; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__14_4; // x21
  Il2CppObject *v45; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_c *klass; // x8
  System_String_o *v50; // x19
  __int64 v51; // x9
  int *p_offset; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x19
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0

  if ( (byte_4A5839A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
    sub_1B885B0(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&System_Func_int__int__ValueTuple_int__int___TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&RoadmapButtonPrefab_TypeInfo);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__);
    sub_1B885B0(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1006/*"-1"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5839A = 1;
  }
  v3 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v3 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v3->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_1006/*"-1"*/,
             0LL);
  if ( !String )
    goto LABEL_75;
  v6 = System_String__Split_61732124(String, (System_String_o *)StringLiteral_868/*","*/, 0, 0LL);
  v7 = RoadmapButtonPrefab___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v6;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v7 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__int__o *)v7->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__14_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_0,
      v10,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__,
      0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_string__int__o *)_9__14_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Select_object__int_(
          v8,
          (System_Func_TSource__TResult__o *)_9__14_0,
          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
  v15 = RoadmapButtonPrefab___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v15 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_1 = v15->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__14_1 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_1,
      v18,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__,
      0LL);
    v19 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v19->__9__14_1 = _9__14_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->__9__14_1, (int32_t)_9__14_1, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__14_1,
                                                               (const MethodInfo_2EA9C10 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v23 = System_Linq_Enumerable__ToList_int_(
          v22,
          (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)String,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0LL);
  v25 = RoadmapButtonPrefab___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v25 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_2 = (System_Func_object__int__o *)v25->static_fields->__9__14_2;
  if ( !_9__14_2 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__14_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_2,
      v28,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__,
      0LL);
    v29 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v29->__9__14_2 = (struct System_Func_RoadmapEntity__int__o *)_9__14_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->__9__14_2, (int32_t)_9__14_2, v30, v31);
  }
  v32 = System_Linq_Enumerable__Select_object__int_(
          v26,
          (System_Func_TSource__TResult__o *)_9__14_2,
          (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v33 = RoadmapButtonPrefab___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v33 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_3 = v33->static_fields->__9__14_3;
  if ( !_9__14_3 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__14_3 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_3,
      v36,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__,
      0LL);
    v37 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v37->__9__14_3 = _9__14_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->__9__14_3, (int32_t)_9__14_3, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v34,
                                                               (System_Func_TSource__TKey__o *)_9__14_3,
                                                               (const MethodInfo_2EA9C10 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v40,
                                (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v23 )
    goto LABEL_75;
  v41 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v23->fields._size < SLODWORD(String[1].klass) )
  {
    v42 = 1;
    return v42 & 1;
  }
  v43 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v43 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_4 = v43->static_fields->__9__14_4;
  if ( !_9__14_4 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v43->static_fields->__9;
    _9__14_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1B887FC(System_Func_int__int__ValueTuple_int__int___TypeInfo);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__14_4,
      v45,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__,
      0LL);
    v46 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v46->__9__14_4 = _9__14_4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v46->__9__14_4, (int32_t)_9__14_4, v47, v48);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v23,
                                v41,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__14_4,
                                (const MethodInfo_2EBEBEC *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1B8880C(String, v5);
  klass = String->klass;
  v50 = String;
  v51 = *(unsigned __int16 *)(&String->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&String->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v51;
      p_offset += 4;
      if ( !v51 )
        goto LABEL_48;
    }
    v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_48:
    v53 = sub_1BDA590(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0LL);
  }
  v55 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
  if ( !v55 )
    sub_1B8880C(0LL, v54);
  while ( 1 )
  {
    v56 = *(_QWORD *)v55;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_55;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_55:
      v59 = sub_1BDA590(v55, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
    if ( (v42 & 1) == 0 )
      break;
    v60 = *(_QWORD *)v55;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v62 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_62;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_62:
      v63 = sub_1BDA590(v55, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0LL);
    }
    v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v55, *(_QWORD *)(v63 + 8));
    if ( (_DWORD)v64 != HIDWORD(v64) )
      goto LABEL_67;
  }
  v42 = 0;
LABEL_67:
  v65 = *(_QWORD *)v55;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_71;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_71:
    v68 = sub_1BDA590(v55, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v68)(v55, *(_QWORD *)(v68 + 8));
  return v42 & 1;
}


void __fastcall RoadmapButtonPrefab__Initialize(
        RoadmapButtonPrefab_o *this,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Object_array *ObjectList_object; // x0
  RoadmapButtonPrefab___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x21
  System_Func_object__bool__o *_9__13_0; // x22
  Il2CppObject *v10; // x23
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  RoadmapButtonPrefab___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_object__object__o *_9__13_1; // x22
  Il2CppObject *v18; // x23
  struct RoadmapButtonPrefab___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  void *gameObject; // x0
  const MethodInfo *v27; // x1
  Il2CppObject *v28; // x21
  int v29; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  RoadmapButtonPrefab___c_c *v31; // x0
  UISprite_o *sprite; // x22
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x23
  System_Func_object__bool__o *_9__13_2; // x24
  Il2CppObject *v35; // x25
  struct RoadmapButtonPrefab___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  UISprite_o *v39; // x22
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v42; // x23
  System_Func_object__bool__o *v43; // x22
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v45; // x0
  bool v46; // w1

  if ( (byte_4A58399 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObjectList_GameObject___);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_RoadmapEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_UIAtlas___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&System_Func_UIAtlas__bool__TypeInfo);
    sub_1B885B0(&System_Func_GameObject__UIAtlas__TypeInfo);
    sub_1B885B0(&System_Func_GameObject__bool__TypeInfo);
    sub_1B885B0(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__);
    sub_1B885B0(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1B885B0(&RoadmapButtonPrefab_TypeInfo);
    sub_1B885B0(&Method_RoadmapMaster_IsDispAchieved__);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__Initialize_b__13_0__);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__Initialize_b__13_1__);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__Initialize_b__13_2__);
    sub_1B885B0(&RoadmapButtonPrefab___c_TypeInfo);
    byte_4A58399 = 1;
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.roadmapAssetData,
    (int32_t)roadmapAssetData,
    (int32_t)method,
    v3);
  ObjectList_object = AssetData__GetObjectList_object_(
                        roadmapAssetData,
                        (const MethodInfo_2E62034 *)Method_AssetData_GetObjectList_GameObject___);
  v7 = RoadmapButtonPrefab___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v7 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v7->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v10, Method_RoadmapButtonPrefab___c__Initialize_b__13_0__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_GameObject__bool__o *)_9__13_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GameObject___);
  v15 = RoadmapButtonPrefab___c_TypeInfo;
  v16 = v14;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v15 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__object__o *)v15->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__13_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_GameObject__UIAtlas__TypeInfo);
    System_Func_object__object____ctor(_9__13_1, v18, Method_RoadmapButtonPrefab___c__Initialize_b__13_1__, 0LL);
    v19 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v19->__9__13_1 = (struct System_Func_GameObject__UIAtlas__o *)_9__13_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->__9__13_1, (int32_t)_9__13_1, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__13_1,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v23 = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__ToList_object_(
                                                               v22,
                                                               (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  this->fields.roadmapAtlasList = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.roadmapAtlasList, (int32_t)v23, v24, v25);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !gameObject )
    goto LABEL_43;
  v28 = (Il2CppObject *)gameObject;
  gameObject = RoadmapMaster__GetSortedDispBoardEntityList(
                 (RoadmapMaster_o *)gameObject,
                 roadmapAssetData,
                 this->fields.roadmapAtlasList,
                 0LL);
  if ( !gameObject )
    goto LABEL_43;
  v29 = *((_DWORD *)gameObject + 6);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  if ( v29 <= 0 )
  {
LABEL_39:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v31 = RoadmapButtonPrefab___c_TypeInfo;
  sprite = this->fields.sprite;
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v31 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__bool__o *)v31->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v31->static_fields->__9;
    _9__13_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UIAtlas__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_2, v35, Method_RoadmapButtonPrefab___c__Initialize_b__13_2__, 0LL);
    v36 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v36->__9__13_2 = (struct System_Func_UIAtlas__bool__o *)_9__13_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->__9__13_2, (int32_t)_9__13_2, v37, v38);
  }
  gameObject = System_Linq_Enumerable__FirstOrDefault_object__48907856(
                 (System_Collections_Generic_IEnumerable_TSource__o *)roadmapAtlasList,
                 (System_Func_TSource__bool__o *)_9__13_2,
                 (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
  if ( !sprite )
    goto LABEL_43;
  UISprite__set_atlas(sprite, (UIAtlas_o *)gameObject, 0LL);
  v39 = this->fields.sprite;
  gameObject = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
  if ( !v39 )
    goto LABEL_43;
  UISprite__set_spriteName(v39, RoadmapButtonPrefab_TypeInfo->static_fields->ROADMAP_BUTTON_SPRITE_NAME, 0LL);
  button = this->fields.button;
  if ( !button )
    goto LABEL_43;
  onClick = button->fields.onClick;
  v42 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v42,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onClick, v42, 0LL);
  v43 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v43, v28, Method_RoadmapMaster_IsDispAchieved__, 0LL);
  gameObject = (void *)System_Linq_Enumerable__All_object_(
                         v30,
                         (System_Func_TSource__bool__o *)v43,
                         (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(this, v27);
    if ( newNotification )
    {
      v46 = (unsigned __int8)gameObject & 1;
      v45 = newNotification;
      goto LABEL_42;
    }
LABEL_43:
    sub_1B8880C(gameObject, v27);
  }
  if ( !newNotification )
    goto LABEL_43;
  v45 = this->fields.newNotification;
  v46 = 0;
LABEL_42:
  ShiningIconComponent__Set_38233872(v45, v46, 0LL);
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
      sub_1B8880C(button, isEnabled);
    }
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
      button,
      isEnabled,
      button->klass->vtable._6_OnInit.methodPtr);
  }
}


void __fastcall RoadmapButtonPrefab__OnClickRoadmapButton(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  RoadmapButtonPrefab_c *v3; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  AssetData_o *roadmapAssetData; // x20
  System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x21
  CommonUI_o *v10; // x22
  System_Action_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A5839B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1B885B0(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__);
    sub_1B885B0(&RoadmapButtonPrefab_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5839B = 1;
  }
  v3 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v3 = RoadmapButtonPrefab_TypeInfo;
  }
  ASSET_DATA_PATH_ROADMAP = v3->static_fields->ASSET_DATA_PATH_ROADMAP;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(ASSET_DATA_PATH_ROADMAP, 0LL) && this->fields._IsInitialized_k__BackingField )
  {
    v5 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    roadmapAtlasList = this->fields.roadmapAtlasList;
    roadmapAssetData = this->fields.roadmapAssetData;
    v10 = (CommonUI_o *)Instance;
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__, 0LL);
    if ( !v10 )
      sub_1B8880C(v12, v13);
    CommonUI__OpenRoadmapDialog(v10, roadmapAssetData, roadmapAtlasList, v11, 0LL);
  }
}


void __fastcall RoadmapButtonPrefab___OnClickRoadmapButton_b__16_0(
        RoadmapButtonPrefab_o *this,
        const MethodInfo *method)
{
  ShiningIconComponent_o *newNotification; // x0
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v8; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Int32_array *v13; // x0
  RoadmapButtonPrefab_c *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v17; // x1

  if ( (byte_4A5839D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1B885B0(&RoadmapButtonPrefab_TypeInfo);
    sub_1B885B0(&Method_System_String_Join_int___);
    sub_1B885B0(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__);
    sub_1B885B0(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5839D = 1;
  }
  newNotification = this->fields.newNotification;
  if ( !newNotification )
    goto LABEL_16;
  ShiningIconComponent__Set_38233872(newNotification, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  newNotification = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !newNotification )
LABEL_16:
    sub_1B8880C(newNotification, method);
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)newNotification,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0LL);
  v5 = RoadmapButtonPrefab___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v5 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v5->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_1, v8, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__, 0LL);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Func_RoadmapEntity__int__o *)_9__16_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_1, (int32_t)_9__16_1, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v13 = System_Linq_Enumerable__ToArray_int_(
          v12,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  v14 = RoadmapButtonPrefab_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)v13;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v14 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v14->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v17 = System_String__Join_int_(
          (System_String_o *)StringLiteral_868/*","*/,
          v15,
          (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v17, 0LL);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5839E & 1) == 0 )
  {
    sub_1B885B0(&RoadmapButtonPrefab___c_TypeInfo);
    byte_4A5839E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RoadmapButtonPrefab___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return roadmap->fields.boardImageId;
}


int32_t __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_3(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


System_ValueTuple_int__int__o __fastcall RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_4(
        RoadmapButtonPrefab___c_o *this,
        int32_t lastId,
        int32_t currentId,
        const MethodInfo *method)
{
  System_ValueTuple_int__int__o v7; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_int__int__o v8; // 0:x0.8

  if ( (byte_4A583A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_ValueTuple_int__int___ctor__);
    byte_4A583A2 = 1;
  }
  v8 = (System_ValueTuple_int__int__o)&v7;
  v7 = 0LL;
  System_ValueTuple_int__int____ctor(
    v8,
    lastId,
    currentId,
    (const MethodInfo_3847E54 *)Method_System_ValueTuple_int__int___ctor__);
  return v7;
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__13_0(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19

  if ( (byte_4A5839F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (RoadmapButtonPrefab___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5839F = 1;
  }
  if ( !assetObject )
    sub_1B8880C(this, assetObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       assetObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
}


UIAtlas_o *__fastcall RoadmapButtonPrefab___c___Initialize_b__13_1(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_4A583A0 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4A583A0 = 1;
  }
  if ( !assetObject )
    sub_1B8880C(this, assetObject);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


bool __fastcall RoadmapButtonPrefab___c___Initialize_b__13_2(
        RoadmapButtonPrefab___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  RoadmapButtonPrefab_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4A583A1 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1B885B0(&RoadmapButtonPrefab_TypeInfo);
    byte_4A583A1 = 1;
  }
  if ( !atlas )
    sub_1B8880C(this, atlas);
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
    sub_1B8880C(this, 0LL);
  return roadmap->fields.boardImageId;
}