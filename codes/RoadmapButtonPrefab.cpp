void RoadmapButtonPrefab___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4E0173A & 1) == 0 )
  {
    sub_1CE6700(&RoadmapButtonPrefab_TypeInfo);
    sub_1CE6700(&StringLiteral_8432/*"LastRoadmapBoardIds"*/);
    byte_4E0173A = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8432/*"LastRoadmapBoardIds"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_8432/*"LastRoadmapBoardIds"*/,
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
  RoadmapButtonPrefab_c *v2; // x0
  System_String_o *String; // x0
  __int64 v4; // x1
  System_String_array *v5; // x0
  RoadmapButtonPrefab___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__9_0; // x20
  Il2CppObject *v9; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  RoadmapButtonPrefab___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_int__int__o *_9__9_1; // x20
  Il2CppObject *v21; // x21
  struct RoadmapButtonPrefab___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_TSource__o *v30; // x19
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Func_object__int__o *_9__9_2; // x21
  Il2CppObject *v35; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v43; // x0
  RoadmapButtonPrefab___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_int__int__o *_9__9_3; // x21
  Il2CppObject *v47; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_IEnumerable_TSecond__o *v56; // x20
  char v57; // w21
  RoadmapButtonPrefab___c_c *v58; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__9_4; // x21
  Il2CppObject *v60; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  System_String_c *klass; // x8
  System_String_o *v69; // x19
  __int64 v70; // x9
  int *p_offset; // x10
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x19
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0

  if ( (byte_4E01738 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
    sub_1CE6700(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1CE6700(&System_Func_int__int__TypeInfo);
    sub_1CE6700(&System_Func_string__int__TypeInfo);
    sub_1CE6700(&System_Func_int__int__ValueTuple_int__int___TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&RoadmapButtonPrefab_TypeInfo);
    sub_1CE6700(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_0__);
    sub_1CE6700(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_1__);
    sub_1CE6700(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_2__);
    sub_1CE6700(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_3__);
    sub_1CE6700(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_4__);
    sub_1CE6700(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1CE6700(&StringLiteral_945/*"-1"*/);
    sub_1CE6700(&StringLiteral_810/*","*/);
    byte_4E01738 = 1;
  }
  v2 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v2 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v2->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_945/*"-1"*/,
             0);
  if ( !String )
    goto LABEL_75;
  v5 = System_String__Split_65174736(String, (System_String_o *)StringLiteral_810/*","*/, 0, 0);
  v6 = RoadmapButtonPrefab___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v6 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__int__o *)v6->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1CE694C(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__9_0,
      v9,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_0__,
      0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__Select_object__int_(
          v7,
          (System_Func_TSource__TResult__o *)_9__9_0,
          (const MethodInfo_3239D60 *)Method_System_Linq_Enumerable_Select_string__int___);
  v18 = RoadmapButtonPrefab___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v18 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__9_1 = v18->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__9_1 = (System_Func_int__int__o *)sub_1CE694C(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__9_1,
      v21,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_1__,
      0);
    v22 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v22->__9__9_1 = _9__9_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v22->__9__9_1, (int32_t)_9__9_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)_9__9_1,
                                                               (const MethodInfo_3233144 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v30 = System_Linq_Enumerable__ToList_int_(
          v29,
          (const MethodInfo_32487E8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList((RoadmapMaster_o *)String, 0);
  v32 = RoadmapButtonPrefab___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v32 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__9_2 = (System_Func_object__int__o *)v32->static_fields->__9__9_2;
  if ( !_9__9_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__9_2 = (System_Func_object__int__o *)sub_1CE694C(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__9_2,
      v35,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_2__,
      0);
    v36 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v36->__9__9_2 = (struct System_Func_RoadmapEntity__int__o *)_9__9_2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v36->__9__9_2, (int32_t)_9__9_2, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__Select_object__int_(
          v33,
          (System_Func_TSource__TResult__o *)_9__9_2,
          (const MethodInfo_3239D60 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v44 = RoadmapButtonPrefab___c_TypeInfo;
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v44 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__9_3 = v44->static_fields->__9__9_3;
  if ( !_9__9_3 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__9_3 = (System_Func_int__int__o *)sub_1CE694C(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__9_3,
      v47,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_3__,
      0);
    v48 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v48->__9__9_3 = _9__9_3;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v48->__9__9_3, (int32_t)_9__9_3, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v45,
                                                               (System_Func_TSource__TKey__o *)_9__9_3,
                                                               (const MethodInfo_3233144 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v55,
                                (const MethodInfo_32487E8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v30 )
    goto LABEL_75;
  v56 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v30->fields._size < SLODWORD(String[1].klass) )
  {
    v57 = 1;
    return v57 & 1;
  }
  v58 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v58 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__9_4 = v58->static_fields->__9__9_4;
  if ( !_9__9_4 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v58->static_fields->__9;
    _9__9_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1CE694C(System_Func_int__int__ValueTuple_int__int___TypeInfo);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__9_4,
      v60,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__9_4__,
      0);
    v61 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v61->__9__9_4 = _9__9_4;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v61->__9__9_4, (int32_t)_9__9_4, v62, v63, v64, v65, v66, v67);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v30,
                                v56,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__9_4,
                                (const MethodInfo_324C32C *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1CE6958(String, v4);
  klass = String->klass;
  v69 = String;
  v70 = *(unsigned __int16 *)&String->klass->_2.rank;
  if ( *(_WORD *)&String->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v70;
      p_offset += 4;
      if ( !v70 )
        goto LABEL_48;
    }
    v72 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_48:
    v72 = sub_1CBCA7C(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0);
  }
  v74 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v72)(v69, *(_QWORD *)(v72 + 8));
  if ( !v74 )
    sub_1CE6958(0, v73);
  while ( 1 )
  {
    v75 = *(_QWORD *)v74;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_55;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_55:
      v78 = sub_1CBCA7C(v74, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8));
    if ( (v57 & 1) == 0 )
      break;
    v79 = *(_QWORD *)v74;
    v80 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v81 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v80;
        v81 += 4;
        if ( !v80 )
          goto LABEL_62;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_62:
      v82 = sub_1CBCA7C(v74, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0);
    }
    v83 = (*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v74, *(_QWORD *)(v82 + 8));
    if ( (_DWORD)v83 != HIDWORD(v83) )
      goto LABEL_67;
  }
  v57 = 0;
LABEL_67:
  v84 = *(_QWORD *)v74;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_71;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_71:
    v87 = sub_1CBCA7C(v74, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v74, *(_QWORD *)(v87 + 8));
  return v57 & 1;
}


void RoadmapButtonPrefab__Initialize(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  void *Master_object; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *v5; // x20
  int v6; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x21
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v10; // x23
  System_Func_object__bool__o *v11; // x22
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v13; // x0
  bool v14; // w1

  if ( (byte_4E01737 & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_All_RoadmapEntity___);
    sub_1CE6700(&EventDelegate_TypeInfo);
    sub_1CE6700(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__);
    sub_1CE6700(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1CE6700(&Method_RoadmapMaster_IsDispAchieved__);
    byte_4E01737 = 1;
  }
  this->fields._IsInitialized_k__BackingField = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_19;
  v5 = (Il2CppObject *)Master_object;
  Master_object = RoadmapMaster__GetSortedDispBoardEntityList((RoadmapMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_19;
  v6 = *((_DWORD *)Master_object + 6);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Master_object )
    goto LABEL_19;
  if ( v6 <= 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  button = this->fields.button;
  if ( !button )
    goto LABEL_19;
  onClick = button->fields.onClick;
  v10 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onClick, v10, 0);
  v11 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v11, v5, Method_RoadmapMaster_IsDispAchieved__, 0);
  Master_object = (void *)System_Linq_Enumerable__All_object_(
                            v7,
                            (System_Func_TSource__bool__o *)v11,
                            (const MethodInfo_320E9B8 *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    Master_object = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(
                              (RoadmapButtonPrefab_o *)Master_object,
                              v4);
    if ( newNotification )
    {
      v14 = (unsigned __int8)Master_object & 1;
      v13 = newNotification;
      goto LABEL_18;
    }
LABEL_19:
    sub_1CE6958(Master_object, v4);
  }
  if ( !newNotification )
    goto LABEL_19;
  v13 = this->fields.newNotification;
  v14 = 0;
LABEL_18:
  ShiningIconComponent__Set_42252400(v13, v14, 0);
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
      sub_1CE6958(button, isEnabled);
    }
    ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
      button,
      isEnabled,
      button->klass->vtable._5_set_isEnabled.method);
  }
}


void RoadmapButtonPrefab__OnClickRoadmapButton(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4E01739 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1CE6700(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__11_0__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E01739 = 1;
  }
  if ( this->fields._IsInitialized_k__BackingField )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4DFE666 )
    {
      sub_1CE6700(&TerminalSceneComponent_TypeInfo);
      byte_4DFE666 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass )
      goto LABEL_17;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    v5 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1CE6718(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__11_0__, 0);
    if ( !Instance )
LABEL_17:
      sub_1CE6958(genericContainerHandle, method);
    CommonUI__OpenRoadmapDialog((CommonUI_o *)Instance, v8, 0);
  }
}


void RoadmapButtonPrefab___OnClickRoadmapButton_b__11_0(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *newNotification; // x20
  __int64 v4; // x1
  ShiningIconComponent_o *Master_object; // x0
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__int__o *_9__11_1; // x20
  Il2CppObject *v10; // x21
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x0
  RoadmapButtonPrefab_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  System_String_o *LAST_ROADMAP_BOARD_IDS_KEY; // x20
  System_String_o *v23; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8

  if ( (byte_4E0173B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&RoadmapButtonPrefab_TypeInfo);
    sub_1CE6700(&Method_System_String_Join_int___);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__11_1__);
    sub_1CE6700(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1CE6700(&StringLiteral_810/*","*/);
    byte_4E0173B = 1;
  }
  newNotification = (UnityEngine_Object_o *)this->fields.newNotification;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newNotification, 0, 0) )
  {
    Master_object = this->fields.newNotification;
    if ( !Master_object )
      goto LABEL_28;
    ShiningIconComponent__Set_42252400(Master_object, 0, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_28;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList((RoadmapMaster_o *)Master_object, 0);
  v7 = RoadmapButtonPrefab___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v7 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__11_1 = (System_Func_object__int__o *)v7->static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__11_1 = (System_Func_object__int__o *)sub_1CE694C(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__11_1, v10, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__11_1__, 0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__11_1 = (struct System_Func_RoadmapEntity__int__o *)_9__11_1;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_1,
      (int32_t)_9__11_1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)_9__11_1,
                                                               (const MethodInfo_3239D60 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
  v20 = RoadmapButtonPrefab_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v19;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v20 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v20->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v23 = System_String__Join_int_(
          (System_String_o *)StringLiteral_810/*","*/,
          v21,
          (const MethodInfo_32B01F8 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v23, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
    sub_1CE6958(Master_object, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E0173C & 1) == 0 )
  {
    sub_1CE6700(&RoadmapButtonPrefab___c_TypeInfo);
    byte_4E0173C = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(RoadmapButtonPrefab___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)RoadmapButtonPrefab___c_TypeInfo->static_fields,
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
    sub_1CE6958(this, 0);
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

  if ( (byte_4E0173D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_ValueTuple_int__int___ctor__);
    byte_4E0173D = 1;
  }
  v6 = (System_ValueTuple_int__int__o)&v8;
  v8 = 0;
  System_ValueTuple_int__int____ctor(
    v6,
    lastId,
    currentId,
    (const MethodInfo_3C7F8C0 *)Method_System_ValueTuple_int__int___ctor__);
  return v8;
}


int32_t RoadmapButtonPrefab___c___OnClickRoadmapButton_b__11_1(
        RoadmapButtonPrefab___c_o *this,
        RoadmapEntity_o *roadmap,
        const MethodInfo *method)
{
  if ( !roadmap )
    sub_1CE6958(this, 0);
  return roadmap->fields.boardImageId;
}