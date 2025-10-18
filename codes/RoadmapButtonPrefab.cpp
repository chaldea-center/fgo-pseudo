void RoadmapButtonPrefab___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct RoadmapButtonPrefab_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct RoadmapButtonPrefab_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct RoadmapButtonPrefab_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3FDBE & 1) == 0 )
  {
    sub_1C37058(&RoadmapButtonPrefab_TypeInfo);
    sub_1C37058(&StringLiteral_11415/*"RoadMap"*/);
    sub_1C37058(&StringLiteral_5360/*"DownloadRoadMapUIAtlas1"*/);
    sub_1C37058(&StringLiteral_8367/*"LastRoadmapBoardIds"*/);
    sub_1C37058(&StringLiteral_17505/*"btn_next_reward"*/);
    byte_4C3FDBE = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->ASSET_DATA_PATH_ROADMAP = (struct System_String_o *)StringLiteral_11415/*"RoadMap"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)RoadmapButtonPrefab_TypeInfo->static_fields, StringLiteral_11415/*"RoadMap"*/, v1, v2);
  v3 = StringLiteral_5360/*"DownloadRoadMapUIAtlas1"*/;
  static_fields = RoadmapButtonPrefab_TypeInfo->static_fields;
  static_fields->ROADMAP_BUTTON_ATLAS_NAME = (struct System_String_o *)StringLiteral_5360/*"DownloadRoadMapUIAtlas1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ROADMAP_BUTTON_ATLAS_NAME, v3, v5, v6);
  v7 = StringLiteral_17505/*"btn_next_reward"*/;
  v8 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v8->ROADMAP_BUTTON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17505/*"btn_next_reward"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->ROADMAP_BUTTON_SPRITE_NAME, v7, v9, v10);
  v11 = StringLiteral_8367/*"LastRoadmapBoardIds"*/;
  v12 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v12->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8367/*"LastRoadmapBoardIds"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->LAST_ROADMAP_BOARD_IDS_KEY, v11, v13, v14);
}


void RoadmapButtonPrefab___ctor(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RoadmapButtonPrefab__CheckAssert(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  ;
}


bool RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  RoadmapButtonPrefab_c *v3; // x0
  System_String_o *String; // x0
  System_String_array *v5; // x0
  RoadmapButtonPrefab___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_object__int__o *_9__14_0; // x21
  Il2CppObject *v9; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0
  RoadmapButtonPrefab___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_int__int__o *_9__14_1; // x21
  Il2CppObject *v17; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_TSource__o *v22; // x20
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__int__o *_9__14_2; // x21
  Il2CppObject *v27; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v31; // x0
  RoadmapButtonPrefab___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x19
  System_Func_int__int__o *_9__14_3; // x21
  Il2CppObject *v35; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_IEnumerable_TSecond__o *v40; // x19
  char v41; // w21
  RoadmapButtonPrefab___c_c *v42; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__14_4; // x21
  Il2CppObject *v44; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_c *klass; // x8
  System_String_o *v49; // x19
  __int64 v50; // x9
  int *p_offset; // x10
  __int64 v52; // x0
  __int64 v53; // x19
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0

  if ( (byte_4C3FDBC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
    sub_1C37058(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1C37058(&System_Func_int__int__TypeInfo);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&System_Func_int__int__ValueTuple_int__int___TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&RoadmapButtonPrefab_TypeInfo);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__);
    sub_1C37058(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1C37058(&StringLiteral_946/*"-1"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C3FDBC = 1;
  }
  v3 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v3 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v3->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_946/*"-1"*/,
             0);
  if ( !String )
    goto LABEL_75;
  v5 = System_String__Split_63613548(String, (System_String_o *)StringLiteral_811/*","*/, 0, 0);
  v6 = RoadmapButtonPrefab___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v6 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__int__o *)v6->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__14_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_0,
      v9,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__,
      0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_string__int__o *)_9__14_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Select_object__int_(
          v7,
          (System_Func_TSource__TResult__o *)_9__14_0,
          (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
  v14 = RoadmapButtonPrefab___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v14 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_1 = v14->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__14_1 = (System_Func_int__int__o *)sub_1C372A4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_1,
      v17,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__,
      0);
    v18 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v18->__9__14_1 = _9__14_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v18->__9__14_1, (int32_t)_9__14_1, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v15,
                                                               (System_Func_TSource__TKey__o *)_9__14_1,
                                                               (const MethodInfo_31171FC *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v22 = System_Linq_Enumerable__ToList_int_(
          v21,
          (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)String,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0);
  v24 = RoadmapButtonPrefab___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v24 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_2 = (System_Func_object__int__o *)v24->static_fields->__9__14_2;
  if ( !_9__14_2 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__14_2 = (System_Func_object__int__o *)sub_1C372A4(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_2,
      v27,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__,
      0);
    v28 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v28->__9__14_2 = (struct System_Func_RoadmapEntity__int__o *)_9__14_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v28->__9__14_2, (int32_t)_9__14_2, v29, v30);
  }
  v31 = System_Linq_Enumerable__Select_object__int_(
          v25,
          (System_Func_TSource__TResult__o *)_9__14_2,
          (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v32 = RoadmapButtonPrefab___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v32 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_3 = v32->static_fields->__9__14_3;
  if ( !_9__14_3 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__14_3 = (System_Func_int__int__o *)sub_1C372A4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_3,
      v35,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__,
      0);
    v36 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v36->__9__14_3 = _9__14_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v36->__9__14_3, (int32_t)_9__14_3, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__14_3,
                                                               (const MethodInfo_31171FC *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v39,
                                (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v22 )
    goto LABEL_75;
  v40 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v22->fields._size < SLODWORD(String[1].klass) )
  {
    v41 = 1;
    return v41 & 1;
  }
  v42 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v42 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_4 = v42->static_fields->__9__14_4;
  if ( !_9__14_4 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__14_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1C372A4(System_Func_int__int__ValueTuple_int__int___TypeInfo);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__14_4,
      v44,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__,
      0);
    v45 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v45->__9__14_4 = _9__14_4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v45->__9__14_4, (int32_t)_9__14_4, v46, v47);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v22,
                                v40,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__14_4,
                                (const MethodInfo_312F254 *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1C372B4(String);
  klass = String->klass;
  v49 = String;
  v50 = *(unsigned __int16 *)&String->klass->_2.rank;
  if ( *(_WORD *)&String->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v50;
      p_offset += 4;
      if ( !v50 )
        goto LABEL_48;
    }
    v52 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_48:
    v52 = sub_1C87870(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0);
  }
  v53 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
  if ( !v53 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v54 = *(_QWORD *)v53;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v56 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_55;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_55:
      v57 = sub_1C87870(v53, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
    if ( (v41 & 1) == 0 )
      break;
    v58 = *(_QWORD *)v53;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v60 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_62;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_62:
      v61 = sub_1C87870(v53, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0);
    }
    v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
    if ( (_DWORD)v62 != HIDWORD(v62) )
      goto LABEL_67;
  }
  v41 = 0;
LABEL_67:
  v63 = *(_QWORD *)v53;
  v64 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_71;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_71:
    v66 = sub_1C87870(v53, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v66)(v53, *(_QWORD *)(v66 + 8));
  return v41 & 1;
}


void RoadmapButtonPrefab__Initialize(
        RoadmapButtonPrefab_o *this,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Object_array *ObjectList_object; // x0
  RoadmapButtonPrefab___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x21
  System_Func_object__bool__o *_9__13_0; // x22
  Il2CppObject *v10; // x23
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  RoadmapButtonPrefab___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_object__object__o *_9__13_1; // x22
  Il2CppObject *v18; // x23
  struct RoadmapButtonPrefab___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  void *gameObject; // x0
  Il2CppObject *v27; // x21
  int v28; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  RoadmapButtonPrefab___c_c *v30; // x0
  UISprite_o *sprite; // x22
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x23
  System_Func_object__bool__o *_9__13_2; // x24
  Il2CppObject *v34; // x25
  struct RoadmapButtonPrefab___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UISprite_o *v38; // x22
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v41; // x23
  System_Func_object__bool__o *v42; // x22
  const MethodInfo *v43; // x1
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v45; // x0
  bool v46; // w1

  if ( (byte_4C3FDBB & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_All_RoadmapEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_UIAtlas___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&System_Func_UIAtlas__bool__TypeInfo);
    sub_1C37058(&System_Func_GameObject__UIAtlas__TypeInfo);
    sub_1C37058(&System_Func_GameObject__bool__TypeInfo);
    sub_1C37058(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__);
    sub_1C37058(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1C37058(&RoadmapButtonPrefab_TypeInfo);
    sub_1C37058(&Method_RoadmapMaster_IsDispAchieved__);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__Initialize_b__13_0__);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__Initialize_b__13_1__);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__Initialize_b__13_2__);
    sub_1C37058(&RoadmapButtonPrefab___c_TypeInfo);
    byte_4C3FDBB = 1;
  }
  this->fields._IsInitialized_k__BackingField = 0;
  if ( !roadmapAssetData )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_43;
    goto LABEL_39;
  }
  this->fields.roadmapAssetData = roadmapAssetData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.roadmapAssetData, (int32_t)roadmapAssetData, (int32_t)method, v3);
  ObjectList_object = AssetData__GetObjectList_object_(
                        roadmapAssetData,
                        (const MethodInfo_30C9180 *)Method_AssetData_GetObjectList_GameObject___);
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
    _9__13_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v10, Method_RoadmapButtonPrefab___c__Initialize_b__13_0__, 0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_GameObject__bool__o *)_9__13_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GameObject___);
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
    _9__13_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_GameObject__UIAtlas__TypeInfo);
    System_Func_object__object____ctor(_9__13_1, v18, Method_RoadmapButtonPrefab___c__Initialize_b__13_1__, 0);
    v19 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v19->__9__13_1 = (struct System_Func_GameObject__UIAtlas__o *)_9__13_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v19->__9__13_1, (int32_t)_9__13_1, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__13_1,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v23 = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__ToList_object_(
                                                               v22,
                                                               (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  this->fields.roadmapAtlasList = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.roadmapAtlasList, (int32_t)v23, v24, v25);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !gameObject )
    goto LABEL_43;
  v27 = (Il2CppObject *)gameObject;
  gameObject = RoadmapMaster__GetSortedDispBoardEntityList(
                 (RoadmapMaster_o *)gameObject,
                 roadmapAssetData,
                 this->fields.roadmapAtlasList,
                 0);
  if ( !gameObject )
    goto LABEL_43;
  v28 = *((_DWORD *)gameObject + 6);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_43;
  if ( v28 <= 0 )
  {
LABEL_39:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v30 = RoadmapButtonPrefab___c_TypeInfo;
  sprite = this->fields.sprite;
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v30 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__bool__o *)v30->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v30->static_fields->__9;
    _9__13_2 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UIAtlas__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_2, v34, Method_RoadmapButtonPrefab___c__Initialize_b__13_2__, 0);
    v35 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v35->__9__13_2 = (struct System_Func_UIAtlas__bool__o *)_9__13_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v35->__9__13_2, (int32_t)_9__13_2, v36, v37);
  }
  gameObject = System_Linq_Enumerable__FirstOrDefault_object__51451648(
                 (System_Collections_Generic_IEnumerable_TSource__o *)roadmapAtlasList,
                 (System_Func_TSource__bool__o *)_9__13_2,
                 (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
  if ( !sprite )
    goto LABEL_43;
  UISprite__set_atlas(sprite, (UIAtlas_o *)gameObject, 0);
  v38 = this->fields.sprite;
  gameObject = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
  if ( !v38 )
    goto LABEL_43;
  UISprite__set_spriteName(v38, RoadmapButtonPrefab_TypeInfo->static_fields->ROADMAP_BUTTON_SPRITE_NAME, 0);
  button = this->fields.button;
  if ( !button )
    goto LABEL_43;
  onClick = button->fields.onClick;
  v41 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v41,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onClick, v41, 0);
  v42 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v42, v27, Method_RoadmapMaster_IsDispAchieved__, 0);
  gameObject = (void *)System_Linq_Enumerable__All_object_(
                         v29,
                         (System_Func_TSource__bool__o *)v42,
                         (const MethodInfo_30F2108 *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(this, v43);
    if ( newNotification )
    {
      v46 = (unsigned __int8)gameObject & 1;
      v45 = newNotification;
      goto LABEL_42;
    }
LABEL_43:
    sub_1C372B4(gameObject);
  }
  if ( !newNotification )
    goto LABEL_43;
  v45 = this->fields.newNotification;
  v46 = 0;
LABEL_42:
  ShiningIconComponent__Set_41022000(v45, v46, 0);
  this->fields._IsInitialized_k__BackingField = 1;
}


void RoadmapButtonPrefab__ModifyRoadmapButton(
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
      || ((v7 = isImmediate, !isEnabled) ? (v8 = 3) : (v8 = 0),
          ((void (__fastcall *)(struct UIButton_o *, __int64, _BOOL8, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
            button,
            v8,
            v7,
            button->klass->vtable._14_SetState.method),
          (button = this->fields.button) == 0) )
    {
      sub_1C372B4(button);
    }
    ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
      button,
      isEnabled,
      button->klass->vtable._5_set_isEnabled.method);
  }
}


void RoadmapButtonPrefab__OnClickRoadmapButton(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  RoadmapButtonPrefab_c *v3; // x0
  System_String_o *ASSET_DATA_PATH_ROADMAP; // x20
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  AssetData_o *roadmapAssetData; // x20
  System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x21
  CommonUI_o *v12; // x22
  System_Action_o *v13; // x23

  if ( (byte_4C3FDBD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1C37058(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__);
    sub_1C37058(&RoadmapButtonPrefab_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3FDBD = 1;
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
  if ( AssetManager__isExistAssetStorage(ASSET_DATA_PATH_ROADMAP, 0) && this->fields._IsInitialized_k__BackingField )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventBgSp->klass;
    if ( !klass )
      goto LABEL_22;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_22;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    v7 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    roadmapAtlasList = this->fields.roadmapAtlasList;
    roadmapAssetData = this->fields.roadmapAssetData;
    v12 = (CommonUI_o *)Instance;
    v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__, 0);
    if ( !v12 )
LABEL_22:
      sub_1C372B4(genericContainerHandle);
    CommonUI__OpenRoadmapDialog(v12, roadmapAssetData, roadmapAtlasList, v13, 0);
  }
}


void RoadmapButtonPrefab___OnClickRoadmapButton_b__16_0(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *newNotification; // x20
  ShiningIconComponent_o *Master_object; // x0
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__16_1; // x20
  Il2CppObject *v9; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x0
  RoadmapButtonPrefab_c *v15; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v18; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8

  if ( (byte_4C3FDBF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&RoadmapButtonPrefab_TypeInfo);
    sub_1C37058(&Method_System_String_Join_int___);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__);
    sub_1C37058(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C3FDBF = 1;
  }
  newNotification = (UnityEngine_Object_o *)this->fields.newNotification;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newNotification, 0, 0) )
  {
    Master_object = this->fields.newNotification;
    if ( !Master_object )
      goto LABEL_28;
    ShiningIconComponent__Set_41022000(Master_object, 0, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_28;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)Master_object,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0);
  v6 = RoadmapButtonPrefab___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v6 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v6->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_1, v9, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__, 0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Func_RoadmapEntity__int__o *)_9__16_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__16_1, (int32_t)_9__16_1, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = RoadmapButtonPrefab_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)v14;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v15 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v15->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v18 = System_String__Join_int_(
          (System_String_o *)StringLiteral_811/*","*/,
          v16,
          (const MethodInfo_3192EDC *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v18, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  Master_object = (ShiningIconComponent_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (ShiningIconComponent_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[4].fields.m_CancellationTokenSource->klass;
  if ( !klass || (Master_object = (ShiningIconComponent_o *)klass->_2.genericContainerHandle) == 0 )
LABEL_28:
    sub_1C372B4(Master_object);
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)Master_object, 1, 0);
}


bool RoadmapButtonPrefab__get_IsInitialized(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  return this->fields._IsInitialized_k__BackingField;
}


void RoadmapButtonPrefab__set_IsInitialized(RoadmapButtonPrefab_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsInitialized_k__BackingField = value;
}


void RoadmapButtonPrefab___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3FDC0 & 1) == 0 )
  {
    sub_1C37058(&RoadmapButtonPrefab___c_TypeInfo);
    byte_4C3FDC0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RoadmapButtonPrefab___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void RoadmapButtonPrefab___c___ctor(RoadmapButtonPrefab___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_0(
        RoadmapButtonPrefab___c_o *this,
        System_String_o *boardId,
        const MethodInfo *method)
{
  return System_Int32__Parse(boardId, 0);
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_1(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_2(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1C372B4(this);
  return roadmap->fields.boardImageId;
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_3(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


System_ValueTuple_int__int__o RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__14_4(
        RoadmapButtonPrefab___c_o *this,
        int32_t lastId,
        int32_t currentId,
        const MethodInfo *method)
{
  System_ValueTuple_int__int__o v6; // x0
  System_ValueTuple_int__int__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3FDC4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_ValueTuple_int__int___ctor__);
    byte_4C3FDC4 = 1;
  }
  v6 = (System_ValueTuple_int__int__o)&v8;
  v8 = 0;
  System_ValueTuple_int__int____ctor(
    v6,
    lastId,
    currentId,
    (const MethodInfo_3AFCC28 *)Method_System_ValueTuple_int__int___ctor__);
  return v8;
}


bool RoadmapButtonPrefab___c___Initialize_b__13_0(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19

  if ( (byte_4C3FDC1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (RoadmapButtonPrefab___c_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FDC1 = 1;
  }
  if ( !assetObject )
    sub_1C372B4(this);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       assetObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
}


UIAtlas_o *RoadmapButtonPrefab___c___Initialize_b__13_1(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_4C3FDC2 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4C3FDC2 = 1;
  }
  if ( !assetObject )
    sub_1C372B4(this);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


bool RoadmapButtonPrefab___c___Initialize_b__13_2(
        RoadmapButtonPrefab___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  RoadmapButtonPrefab_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4C3FDC3 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1C37058(&RoadmapButtonPrefab_TypeInfo);
    byte_4C3FDC3 = 1;
  }
  if ( !atlas )
    sub_1C372B4(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)atlas, 0);
  v5 = RoadmapButtonPrefab_TypeInfo;
  v6 = name;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v5 = RoadmapButtonPrefab_TypeInfo;
  }
  return System_String__op_Equality(v6, v5->static_fields->ROADMAP_BUTTON_ATLAS_NAME, 0);
}


int32_t RoadmapButtonPrefab___c___OnClickRoadmapButton_b__16_1(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1C372B4(this);
  return roadmap->fields.boardImageId;
}