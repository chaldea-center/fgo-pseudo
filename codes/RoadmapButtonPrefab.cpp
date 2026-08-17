void RoadmapButtonPrefab___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596D640 & 1) == 0 )
  {
    sub_2213A60(&RoadmapButtonPrefab_TypeInfo);
    sub_2213A60(&StringLiteral_8716/*"LastRoadmapBoardIds"*/);
    byte_596D640 = 1;
  }
  v7 = StringLiteral_8716/*"LastRoadmapBoardIds"*/;
  RoadmapButtonPrefab_TypeInfo->static_fields->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8716/*"LastRoadmapBoardIds"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  __int64 v2; // x2
  RoadmapButtonPrefab_c *v3; // x0
  System_String_o *String; // x0
  __int64 v5; // x1
  System_String_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  RoadmapButtonPrefab___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__9_0; // x20
  Il2CppObject *v13; // x21
  struct RoadmapButtonPrefab___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  RoadmapButtonPrefab___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  struct RoadmapButtonPrefab___c_StaticFields *v26; // x9
  System_Func_int__int__o *_9__9_1; // x20
  Il2CppObject *v28; // x21
  struct RoadmapButtonPrefab___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_TSource__o *v39; // x19
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  RoadmapButtonPrefab___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  struct RoadmapButtonPrefab___c_StaticFields *v45; // x9
  System_Func_object__int__o *_9__9_2; // x21
  Il2CppObject *v47; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  RoadmapButtonPrefab___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x20
  struct RoadmapButtonPrefab___c_StaticFields *v60; // x9
  System_Func_int__int__o *_9__9_3; // x21
  Il2CppObject *v62; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  __int64 v71; // x2
  System_Collections_Generic_IEnumerable_TSecond__o *v72; // x20
  char v73; // w19
  RoadmapButtonPrefab___c_c *v74; // x0
  struct RoadmapButtonPrefab___c_StaticFields *v75; // x8
  System_Func_int__int__ValueTuple_int__int___o *_9__9_4; // x21
  Il2CppObject *v77; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v78; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_String_c *klass; // x8
  System_String_o *v86; // x19
  __int64 v87; // x9
  int *p_offset; // x10
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v105; // [xsp+18h] [xbp-48h]

  if ( (byte_596D63E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
    sub_2213A60(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&System_Func_int__int__ValueTuple_int__int___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&RoadmapButtonPrefab_TypeInfo);
    sub_2213A60(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_0__);
    sub_2213A60(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_1__);
    sub_2213A60(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_2__);
    sub_2213A60(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_3__);
    sub_2213A60(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_4__);
    sub_2213A60(&RoadmapButtonPrefab___c_TypeInfo);
    sub_2213A60(&StringLiteral_1019/*"-1"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596D63E = 1;
  }
  v3 = RoadmapButtonPrefab_TypeInfo;
  if ( !*(&RoadmapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, method, v2);
    v3 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v3->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_1019/*"-1"*/,
             0);
  if ( !String )
    goto LABEL_77;
  v6 = System_String__Split_75708724(String, (System_String_o *)StringLiteral_869/*","*/, 0, 0);
  v9 = RoadmapButtonPrefab___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v6;
  if ( !*(&RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v7, v8);
    v9 = RoadmapButtonPrefab___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__9_0 = (System_Func_object__int__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__9_0,
      v13,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_0__,
      0);
    v14 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v14->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__9_0, (int32_t)_9__9_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = System_Linq_Enumerable__Select_object__int_(
          v10,
          (System_Func_TSource__TResult__o *)_9__9_0,
          (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
  v24 = RoadmapButtonPrefab___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !*(&RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v22, v23);
    v24 = RoadmapButtonPrefab___c_TypeInfo;
  }
  v26 = v24->static_fields;
  _9__9_1 = v26->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v22, v23);
      v26 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__9_1 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__9_1,
      v28,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_1__,
      0);
    v29 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v29->__9__9_1 = _9__9_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__9_1, (int32_t)_9__9_1, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)_9__9_1,
                                                               (const MethodInfo_3888900 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v39 = System_Linq_Enumerable__ToList_int_(
          v36,
          (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37, v38);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_77;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList((RoadmapMaster_o *)String, 0);
  v43 = RoadmapButtonPrefab___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !*(&RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v41, v42);
    v43 = RoadmapButtonPrefab___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__9_2 = (System_Func_object__int__o *)v45->__9__9_2;
  if ( !_9__9_2 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v41, v42);
      v45 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__9_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__9_2,
      v47,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_2__,
      0);
    v48 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v48->__9__9_2 = (struct System_Func_RoadmapEntity__int__o *)_9__9_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__9_2, (int32_t)_9__9_2, v49, v50, v51, v52, v53, v54);
  }
  v55 = System_Linq_Enumerable__Select_object__int_(
          v44,
          (System_Func_TSource__TResult__o *)_9__9_2,
          (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v58 = RoadmapButtonPrefab___c_TypeInfo;
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
  if ( !*(&RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v56, v57);
    v58 = RoadmapButtonPrefab___c_TypeInfo;
  }
  v60 = v58->static_fields;
  _9__9_3 = v60->__9__9_3;
  if ( !_9__9_3 )
  {
    if ( !*(&v58->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v58, v56, v57);
      v60 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v60->__9;
    _9__9_3 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__9_3,
      v62,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_3__,
      0);
    v63 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v63->__9__9_3 = _9__9_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v63->__9__9_3, (int32_t)_9__9_3, v64, v65, v66, v67, v68, v69);
  }
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v59,
                                                               (System_Func_TSource__TKey__o *)_9__9_3,
                                                               (const MethodInfo_3888900 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v70,
                                (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v39 )
    goto LABEL_77;
  v72 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_77;
  if ( v39->fields._size < SLODWORD(String[1].klass) )
  {
    v73 = 1;
    return v73 & 1;
  }
  v74 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !*(&RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v5, v71);
    v74 = RoadmapButtonPrefab___c_TypeInfo;
  }
  v75 = v74->static_fields;
  _9__9_4 = v75->__9__9_4;
  if ( !_9__9_4 )
  {
    if ( !*(&v74->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v74, v5, v71);
      v75 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    }
    v77 = (Il2CppObject *)v75->__9;
    _9__9_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_2213CCC(System_Func_int__int__ValueTuple_int__int___TypeInfo);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__9_4,
      v77,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_4__,
      0);
    v78 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v78->__9__9_4 = _9__9_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v78->__9__9_4, (int32_t)_9__9_4, v79, v80, v81, v82, v83, v84);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v39,
                                v72,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__9_4,
                                (const MethodInfo_38A46B0 *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_77:
    sub_2213CDC(String, v5);
  klass = String->klass;
  v86 = String;
  v87 = *(unsigned __int16 *)&String->klass->_2.rank;
  if ( *(_WORD *)&String->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v87;
      p_offset += 4;
      if ( !v87 )
        goto LABEL_48;
    }
    v89 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_48:
    v89 = sub_224BC3C(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0);
  }
  v90 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v89)(v86, *(_QWORD *)(v89 + 8));
  v105 = v90;
  while ( 1 )
  {
    if ( !v105 )
      sub_2213CDC(v90, v91);
    v92 = *(_QWORD *)v105;
    v93 = *(unsigned __int16 *)(*(_QWORD *)v105 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v105 + 302LL) )
    {
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v94 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_56;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_56:
      v95 = sub_224BC3C(v105, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v105, *(_QWORD *)(v95 + 8));
    if ( (v73 & 1) == 0 )
      break;
    v96 = *(_QWORD *)v105;
    v97 = *(unsigned __int16 *)(*(_QWORD *)v105 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v105 + 302LL) )
    {
      v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v98 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v97;
        v98 += 4;
        if ( !v97 )
          goto LABEL_63;
      }
      v99 = v96 + 16LL * *v98 + 312;
    }
    else
    {
LABEL_63:
      v99 = sub_224BC3C(v105, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0);
    }
    v90 = (*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v105, *(_QWORD *)(v99 + 8));
    if ( (_DWORD)v90 != HIDWORD(v90) )
      goto LABEL_68;
  }
  v73 = 0;
LABEL_68:
  v100 = *(_QWORD *)v105;
  v101 = *(unsigned __int16 *)(*(_QWORD *)v105 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v105 + 302LL) )
  {
    v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
    {
      --v101;
      v102 += 4;
      if ( !v101 )
        goto LABEL_72;
    }
    v103 = v100 + 16LL * *v102 + 312;
  }
  else
  {
LABEL_72:
    v103 = sub_224BC3C(v105, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v103)(v105, *(_QWORD *)(v103 + 8));
  return v73 & 1;
}


void RoadmapButtonPrefab__Initialize(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_c *v4; // x0
  int v5; // w8
  void *Master_object; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  int v10; // w22
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x22
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v18; // x0
  bool v19; // w1

  if ( (byte_596D63D & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_RoadmapEntity___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__);
    sub_2213A60(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_2213A60(&Method_RoadmapMaster_IsDispAchieved__);
    byte_596D63D = 1;
  }
  v4 = DataManager_TypeInfo;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields._IsInitialized_k__BackingField = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_20;
  v8 = (Il2CppObject *)Master_object;
  Master_object = RoadmapMaster__GetSortedDispBoardEntityList((RoadmapMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_20;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  v10 = *((_DWORD *)Master_object + 6);
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v10 <= 0 )
  {
    if ( Master_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      return;
    }
    goto LABEL_20;
  }
  if ( !Master_object )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  button = this->fields.button;
  if ( !button )
    goto LABEL_20;
  onClick = button->fields.onClick;
  v13 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v14, v15);
  EventDelegate__Add(onClick, v13, 0);
  v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v16, v8, Method_RoadmapMaster_IsDispAchieved__, 0);
  Master_object = (void *)System_Linq_Enumerable__All_object_(
                            v9,
                            (System_Func_TSource__bool__o *)v16,
                            (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    Master_object = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(
                              (RoadmapButtonPrefab_o *)Master_object,
                              v7);
    if ( newNotification )
    {
      v19 = (unsigned __int8)Master_object & 1;
      v18 = newNotification;
      goto LABEL_19;
    }
LABEL_20:
    sub_2213CDC(Master_object, v7);
  }
  if ( !newNotification )
    goto LABEL_20;
  v18 = this->fields.newNotification;
  v19 = 0;
LABEL_19:
  ShiningIconComponent__Set_48066308(v18, v19, 0);
  this->fields._IsInitialized_k__BackingField = 1;
}


// local variable allocation has failed, the output may be wrong!
void RoadmapButtonPrefab__ModifyRoadmapButton(
        RoadmapButtonPrefab_o *this,
        bool isEnabled,
        bool isImmediate,
        const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  if ( this->fields._IsInitialized_k__BackingField )
  {
    button = this->fields.button;
    if ( !button || (button->klass->vtable._14_SetState.methodPtr(), (button = this->fields.button) == 0) )
      sub_2213CDC(button, isEnabled);
    ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
      button,
      isEnabled,
      button->klass->vtable._5_set_isEnabled.method);
  }
}


void RoadmapButtonPrefab__OnClickRoadmapButton(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_596D63F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_2213A60(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__11_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D63F = 1;
  }
  if ( this->fields._IsInitialized_k__BackingField )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass )
      goto LABEL_17;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    v6 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__11_0__, 0);
    if ( !Instance )
LABEL_17:
      sub_2213CDC(genericContainerHandle, method);
    CommonUI__OpenRoadmapDialog((CommonUI_o *)Instance, v9, 0);
  }
}


void RoadmapButtonPrefab___OnClickRoadmapButton_b__11_0(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *newNotification; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ShiningIconComponent_o *Master_object; // x0
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  RoadmapButtonPrefab___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__11_1; // x20
  Il2CppObject *v15; // x21
  struct RoadmapButtonPrefab___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Int32_array *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  RoadmapButtonPrefab_c *v27; // x8
  System_Collections_Generic_IEnumerable_T__o *v28; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v30; // x0
  __int64 v31; // x2
  System_Threading_CancellationTokenSource_c *klass; // x8

  if ( (byte_596D641 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RoadmapButtonPrefab_TypeInfo);
    sub_2213A60(&Method_System_String_Join_int___);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__11_1__);
    sub_2213A60(&RoadmapButtonPrefab___c_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596D641 = 1;
  }
  newNotification = (UnityEngine_Object_o *)this->fields.newNotification;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(newNotification, 0, 0) )
  {
    Master_object = this->fields.newNotification;
    if ( !Master_object )
      goto LABEL_28;
    ShiningIconComponent__Set_48066308(Master_object, 0, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_28;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList((RoadmapMaster_o *)Master_object, 0);
  v11 = RoadmapButtonPrefab___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !*(&RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo, v9, v10);
    v11 = RoadmapButtonPrefab___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__11_1 = (System_Func_object__int__o *)static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9, v10);
      static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__11_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__11_1, v15, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__11_1__, 0);
    v16 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v16->__9__11_1 = (struct System_Func_RoadmapEntity__int__o *)_9__11_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__11_1, (int32_t)_9__11_1, v17, v18, v19, v20, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__11_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v24 = System_Linq_Enumerable__ToArray_int_(
          v23,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  v27 = RoadmapButtonPrefab_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_T__o *)v24;
  if ( !*(&RoadmapButtonPrefab_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo, v25, v26);
    v27 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v27->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v30 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          v28,
          (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v30, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v31);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Master_object = (ShiningIconComponent_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v31);
    Master_object = (ShiningIconComponent_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[4].fields.m_CancellationTokenSource->klass;
  if ( !klass || (Master_object = (ShiningIconComponent_o *)klass->_2.genericContainerHandle) == 0 )
LABEL_28:
    sub_2213CDC(Master_object, v5);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D642 & 1) == 0 )
  {
    sub_2213A60(&RoadmapButtonPrefab___c_TypeInfo);
    byte_596D642 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RoadmapButtonPrefab___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RoadmapButtonPrefab___c___ctor(RoadmapButtonPrefab___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__9_0(
        RoadmapButtonPrefab___c_o *this,
        System_String_o *boardId,
        const MethodInfo *method)
{
  return System_Int32__Parse(boardId, 0);
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__9_1(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__9_2(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_2213CDC(this, 0);
  return roadmap->fields.boardImageId;
}


int32_t RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__9_3(
        RoadmapButtonPrefab___c_o *this,
        int32_t boardId,
        const MethodInfo *method)
{
  return boardId;
}


System_ValueTuple_int__int__o RoadmapButtonPrefab___c___CheckReleasedOrAddedNewRoadmap_b__9_4(
        RoadmapButtonPrefab___c_o *this,
        int32_t lastId,
        int32_t currentId,
        const MethodInfo *method)
{
  System_ValueTuple_int__int__o v6; // x0
  System_ValueTuple_int__int__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596D643 & 1) == 0 )
  {
    sub_2213A60(&Method_System_ValueTuple_int__int___ctor__);
    byte_596D643 = 1;
  }
  v6 = (System_ValueTuple_int__int__o)&v8;
  v8 = 0;
  System_ValueTuple_int__int____ctor(
    v6,
    lastId,
    currentId,
    (const MethodInfo_3CEDC64 *)Method_System_ValueTuple_int__int___ctor__);
  return v8;
}


int32_t RoadmapButtonPrefab___c___OnClickRoadmapButton_b__11_1(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_2213CDC(this, 0);
  return roadmap->fields.boardImageId;
}