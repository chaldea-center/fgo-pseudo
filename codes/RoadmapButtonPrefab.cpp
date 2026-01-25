void RoadmapButtonPrefab___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct RoadmapButtonPrefab_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct RoadmapButtonPrefab_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct RoadmapButtonPrefab_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CEB3CE & 1) == 0 )
  {
    sub_1C7BAE8(&RoadmapButtonPrefab_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11464/*"RoadMap"*/);
    sub_1C7BAE8(&StringLiteral_5364/*"DownloadRoadMapUIAtlas1"*/);
    sub_1C7BAE8(&StringLiteral_8391/*"LastRoadmapBoardIds"*/);
    sub_1C7BAE8(&StringLiteral_17593/*"btn_next_reward"*/);
    byte_4CEB3CE = 1;
  }
  RoadmapButtonPrefab_TypeInfo->static_fields->ASSET_DATA_PATH_ROADMAP = (struct System_String_o *)StringLiteral_11464/*"RoadMap"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)RoadmapButtonPrefab_TypeInfo->static_fields,
    StringLiteral_11464/*"RoadMap"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5364/*"DownloadRoadMapUIAtlas1"*/;
  static_fields = RoadmapButtonPrefab_TypeInfo->static_fields;
  static_fields->ROADMAP_BUTTON_ATLAS_NAME = (struct System_String_o *)StringLiteral_5364/*"DownloadRoadMapUIAtlas1"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->ROADMAP_BUTTON_ATLAS_NAME, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_17593/*"btn_next_reward"*/;
  v16 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v16->ROADMAP_BUTTON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17593/*"btn_next_reward"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->ROADMAP_BUTTON_SPRITE_NAME, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_8391/*"LastRoadmapBoardIds"*/;
  v24 = RoadmapButtonPrefab_TypeInfo->static_fields;
  v24->LAST_ROADMAP_BOARD_IDS_KEY = (struct System_String_o *)StringLiteral_8391/*"LastRoadmapBoardIds"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v24->LAST_ROADMAP_BOARD_IDS_KEY, v23, v25, v26, v27, v28, v29, v30);
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
  __int64 v5; // x1
  System_String_array *v6; // x0
  RoadmapButtonPrefab___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_object__int__o *_9__14_0; // x21
  Il2CppObject *v10; // x22
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  RoadmapButtonPrefab___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_int__int__o *_9__14_1; // x21
  Il2CppObject *v22; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_TSource__o *v31; // x20
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__int__o *_9__14_2; // x21
  Il2CppObject *v36; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v44; // x0
  RoadmapButtonPrefab___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  System_Func_int__int__o *_9__14_3; // x21
  Il2CppObject *v48; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSecond__o *v57; // x19
  char v58; // w21
  RoadmapButtonPrefab___c_c *v59; // x0
  System_Func_int__int__ValueTuple_int__int___o *_9__14_4; // x21
  Il2CppObject *v61; // x22
  struct RoadmapButtonPrefab___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_String_c *klass; // x8
  System_String_o *v70; // x19
  __int64 v71; // x9
  int *p_offset; // x10
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x19
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0

  if ( (byte_4CEB3CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
    sub_1C7BAE8(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1C7BAE8(&System_Func_int__int__TypeInfo);
    sub_1C7BAE8(&System_Func_string__int__TypeInfo);
    sub_1C7BAE8(&System_Func_int__int__ValueTuple_int__int___TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&RoadmapButtonPrefab_TypeInfo);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__);
    sub_1C7BAE8(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_944/*"-1"*/);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    byte_4CEB3CC = 1;
  }
  v3 = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v3 = RoadmapButtonPrefab_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v3->static_fields->LAST_ROADMAP_BOARD_IDS_KEY,
             (System_String_o *)StringLiteral_944/*"-1"*/,
             0);
  if ( !String )
    goto LABEL_75;
  v6 = System_String__Split_64228820(String, (System_String_o *)StringLiteral_809/*","*/, 0, 0);
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
    _9__14_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_0,
      v10,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_0__,
      0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_string__int__o *)_9__14_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
      (int32_t)_9__14_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Select_object__int_(
          v8,
          (System_Func_TSource__TResult__o *)_9__14_0,
          (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_string__int___);
  v19 = RoadmapButtonPrefab___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v19 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_1 = v19->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__14_1 = (System_Func_int__int__o *)sub_1C7BD34(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_1,
      v22,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_1__,
      0);
    v23 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v23->__9__14_1 = _9__14_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->__9__14_1, (int32_t)_9__14_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v20,
                                                               (System_Func_TSource__TKey__o *)_9__14_1,
                                                               (const MethodInfo_319EDA8 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v31 = System_Linq_Enumerable__ToList_int_(
          v30,
          (const MethodInfo_31B3C14 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  String = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !String )
    goto LABEL_75;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)String,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0);
  v33 = RoadmapButtonPrefab___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v33 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_2 = (System_Func_object__int__o *)v33->static_fields->__9__14_2;
  if ( !_9__14_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__14_2 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__14_2,
      v36,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_2__,
      0);
    v37 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v37->__9__14_2 = (struct System_Func_RoadmapEntity__int__o *)_9__14_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v37->__9__14_2, (int32_t)_9__14_2, v38, v39, v40, v41, v42, v43);
  }
  v44 = System_Linq_Enumerable__Select_object__int_(
          v34,
          (System_Func_TSource__TResult__o *)_9__14_2,
          (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v45 = RoadmapButtonPrefab___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v45 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_3 = v45->static_fields->__9__14_3;
  if ( !_9__14_3 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__14_3 = (System_Func_int__int__o *)sub_1C7BD34(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__14_3,
      v48,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_3__,
      0);
    v49 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v49->__9__14_3 = _9__14_3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v49->__9__14_3, (int32_t)_9__14_3, v50, v51, v52, v53, v54, v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v46,
                                                               (System_Func_TSource__TKey__o *)_9__14_3,
                                                               (const MethodInfo_319EDA8 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  String = (System_String_o *)System_Linq_Enumerable__ToList_int_(
                                v56,
                                (const MethodInfo_31B3C14 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v31 )
    goto LABEL_75;
  v57 = (System_Collections_Generic_IEnumerable_TSecond__o *)String;
  if ( !String )
    goto LABEL_75;
  if ( v31->fields._size < SLODWORD(String[1].klass) )
  {
    v58 = 1;
    return v58 & 1;
  }
  v59 = RoadmapButtonPrefab___c_TypeInfo;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v59 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__14_4 = v59->static_fields->__9__14_4;
  if ( !_9__14_4 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__14_4 = (System_Func_int__int__ValueTuple_int__int___o *)sub_1C7BD34(System_Func_int__int__ValueTuple_int__int___TypeInfo);
    System_Func_int__int__ValueTuple_int__int_____ctor(
      _9__14_4,
      v61,
      Method_RoadmapButtonPrefab___c__CheckReleasedOrAddedNewRoadmap_b__14_4__,
      0);
    v62 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v62->__9__14_4 = _9__14_4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v62->__9__14_4, (int32_t)_9__14_4, v63, v64, v65, v66, v67, v68);
  }
  String = (System_String_o *)System_Linq_Enumerable__Zip_int__int__ValueTuple_int__int__(
                                (System_Collections_Generic_IEnumerable_TFirst__o *)v31,
                                v57,
                                (System_Func_TFirst__TSecond__TResult__o *)_9__14_4,
                                (const MethodInfo_31B7144 *)Method_System_Linq_Enumerable_Zip_int__int__ValueTuple_int__int____);
  if ( !String )
LABEL_75:
    sub_1C7BD40(String, v5);
  klass = String->klass;
  v70 = String;
  v71 = *(unsigned __int16 *)&String->klass->_2.rank;
  if ( *(_WORD *)&String->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo )
    {
      --v71;
      p_offset += 4;
      if ( !v71 )
        goto LABEL_48;
    }
    v73 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_48:
    v73 = sub_1C51E70(String, System_Collections_Generic_IEnumerable_ValueTuple_int__int___TypeInfo, 0);
  }
  v75 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
  if ( !v75 )
    sub_1C7BD40(0, v74);
  while ( 1 )
  {
    v76 = *(_QWORD *)v75;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v78 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_55;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_55:
      v79 = sub_1C51E70(v75, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8));
    if ( (v58 & 1) == 0 )
      break;
    v80 = *(_QWORD *)v75;
    v81 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
    {
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int___c **)v82 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_62;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_62:
      v83 = sub_1C51E70(v75, System_Collections_Generic_IEnumerator_ValueTuple_int__int___TypeInfo, 0);
    }
    v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v75, *(_QWORD *)(v83 + 8));
    if ( (_DWORD)v84 != HIDWORD(v84) )
      goto LABEL_67;
  }
  v58 = 0;
LABEL_67:
  v85 = *(_QWORD *)v75;
  v86 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
  {
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_71;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_71:
    v88 = sub_1C51E70(v75, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v75, *(_QWORD *)(v88 + 8));
  return v58 & 1;
}


void RoadmapButtonPrefab__Initialize(
        RoadmapButtonPrefab_o *this,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Object_array *ObjectList_object; // x0
  RoadmapButtonPrefab___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  System_Func_object__bool__o *_9__13_0; // x22
  Il2CppObject *v14; // x23
  struct RoadmapButtonPrefab___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  RoadmapButtonPrefab___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  System_Func_object__object__o *_9__13_1; // x22
  Il2CppObject *v26; // x23
  struct RoadmapButtonPrefab___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  struct System_Collections_Generic_List_UIAtlas__o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  void *gameObject; // x0
  const MethodInfo *v43; // x1
  Il2CppObject *v44; // x21
  int v45; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  RoadmapButtonPrefab___c_c *v47; // x0
  UISprite_o *sprite; // x22
  struct System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x23
  System_Func_object__bool__o *_9__13_2; // x24
  Il2CppObject *v51; // x25
  struct RoadmapButtonPrefab___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  UISprite_o *v59; // x22
  struct UIButton_o *button; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x22
  EventDelegate_Callback_o *v62; // x23
  System_Func_object__bool__o *v63; // x22
  struct ShiningIconComponent_o *newNotification; // x20
  ShiningIconComponent_o *v65; // x0
  bool v66; // w1

  if ( (byte_4CEB3CB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_All_RoadmapEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_UIAtlas___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&System_Func_UIAtlas__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_GameObject__UIAtlas__TypeInfo);
    sub_1C7BAE8(&System_Func_GameObject__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_RoadmapEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RoadmapEntity__get_Count__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1C7BAE8(&RoadmapButtonPrefab_TypeInfo);
    sub_1C7BAE8(&Method_RoadmapMaster_IsDispAchieved__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__Initialize_b__13_0__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__Initialize_b__13_1__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__Initialize_b__13_2__);
    sub_1C7BAE8(&RoadmapButtonPrefab___c_TypeInfo);
    byte_4CEB3CB = 1;
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.roadmapAssetData,
    (int32_t)roadmapAssetData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ObjectList_object = AssetData__GetObjectList_object_(
                        roadmapAssetData,
                        (const MethodInfo_3151750 *)Method_AssetData_GetObjectList_GameObject___);
  v11 = RoadmapButtonPrefab___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList_object;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v11 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v11->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v14, Method_RoadmapButtonPrefab___c__Initialize_b__13_0__, 0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_GameObject__bool__o *)_9__13_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
      (int32_t)_9__13_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__13_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v23 = RoadmapButtonPrefab___c_TypeInfo;
  v24 = v22;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v23 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__object__o *)v23->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__13_1 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_GameObject__UIAtlas__TypeInfo);
    System_Func_object__object____ctor(_9__13_1, v26, Method_RoadmapButtonPrefab___c__Initialize_b__13_1__, 0);
    v27 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v27->__9__13_1 = (struct System_Func_GameObject__UIAtlas__o *)_9__13_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v27->__9__13_1, (int32_t)_9__13_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__13_1,
                                                               (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_GameObject__UIAtlas___);
  v35 = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__ToList_object_(
                                                               v34,
                                                               (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_UIAtlas___);
  this->fields.roadmapAtlasList = v35;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.roadmapAtlasList, (int32_t)v35, v36, v37, v38, v39, v40, v41);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !gameObject )
    goto LABEL_43;
  v44 = (Il2CppObject *)gameObject;
  gameObject = RoadmapMaster__GetSortedDispBoardEntityList(
                 (RoadmapMaster_o *)gameObject,
                 roadmapAssetData,
                 this->fields.roadmapAtlasList,
                 0);
  if ( !gameObject )
    goto LABEL_43;
  v45 = *((_DWORD *)gameObject + 6);
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_43;
  if ( v45 <= 0 )
  {
LABEL_39:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v47 = RoadmapButtonPrefab___c_TypeInfo;
  sprite = this->fields.sprite;
  roadmapAtlasList = this->fields.roadmapAtlasList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v47 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__bool__o *)v47->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v47->static_fields->__9;
    _9__13_2 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UIAtlas__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_2, v51, Method_RoadmapButtonPrefab___c__Initialize_b__13_2__, 0);
    v52 = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    v52->__9__13_2 = (struct System_Func_UIAtlas__bool__o *)_9__13_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v52->__9__13_2, (int32_t)_9__13_2, v53, v54, v55, v56, v57, v58);
  }
  gameObject = System_Linq_Enumerable__FirstOrDefault_object__52006308(
                 (System_Collections_Generic_IEnumerable_TSource__o *)roadmapAtlasList,
                 (System_Func_TSource__bool__o *)_9__13_2,
                 (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_UIAtlas___);
  if ( !sprite )
    goto LABEL_43;
  UISprite__set_atlas(sprite, (UIAtlas_o *)gameObject, 0);
  v59 = this->fields.sprite;
  gameObject = RoadmapButtonPrefab_TypeInfo;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
  if ( !v59 )
    goto LABEL_43;
  UISprite__set_spriteName(v59, RoadmapButtonPrefab_TypeInfo->static_fields->ROADMAP_BUTTON_SPRITE_NAME, 0);
  button = this->fields.button;
  if ( !button )
    goto LABEL_43;
  onClick = button->fields.onClick;
  v62 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v62,
    (Il2CppObject *)this,
    (intptr_t)Method_RoadmapButtonPrefab_OnClickRoadmapButton__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onClick, v62, 0);
  v63 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RoadmapEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v63, v44, Method_RoadmapMaster_IsDispAchieved__, 0);
  gameObject = (void *)System_Linq_Enumerable__All_object_(
                         v46,
                         (System_Func_TSource__bool__o *)v63,
                         (const MethodInfo_317A8A4 *)Method_System_Linq_Enumerable_All_RoadmapEntity___);
  newNotification = this->fields.newNotification;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = (void *)RoadmapButtonPrefab__CheckReleasedOrAddedNewRoadmap(this, v43);
    if ( newNotification )
    {
      v66 = (unsigned __int8)gameObject & 1;
      v65 = newNotification;
      goto LABEL_42;
    }
LABEL_43:
    sub_1C7BD40(gameObject, v43);
  }
  if ( !newNotification )
    goto LABEL_43;
  v65 = this->fields.newNotification;
  v66 = 0;
LABEL_42:
  ShiningIconComponent__Set_41675388(v65, v66, 0);
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
      sub_1C7BD40(button, isEnabled);
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
  __int64 v5; // x1
  TerminalSceneComponent_c *mTitleInfo; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  AssetData_o *roadmapAssetData; // x20
  System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList; // x21
  CommonUI_o *v13; // x22
  System_Action_o *v14; // x23

  if ( (byte_4CEB3CD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__);
    sub_1C7BAE8(&RoadmapButtonPrefab_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEB3CD = 1;
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
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
    }
    mTitleInfo = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      mTitleInfo = TerminalSceneComponent_TypeInfo;
    }
    mInstance = mTitleInfo->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_22;
    mTitleInfo = (TerminalSceneComponent_c *)mInstance->fields.mTitleInfo;
    if ( !mTitleInfo )
      goto LABEL_22;
    TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)mTitleInfo, 0, 0);
    v8 = Method_RoadmapButtonPrefab_OnClickRoadmapButton__;
    if ( (*((_BYTE *)Method_RoadmapButtonPrefab_OnClickRoadmapButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C7BB00(Method_RoadmapButtonPrefab_OnClickRoadmapButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    roadmapAtlasList = this->fields.roadmapAtlasList;
    roadmapAssetData = this->fields.roadmapAssetData;
    v13 = (CommonUI_o *)Instance;
    v14 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_RoadmapButtonPrefab__OnClickRoadmapButton_b__16_0__, 0);
    if ( !v13 )
LABEL_22:
      sub_1C7BD40(mTitleInfo, v5);
    CommonUI__OpenRoadmapDialog(v13, roadmapAssetData, roadmapAtlasList, v14, 0);
  }
}


void RoadmapButtonPrefab___OnClickRoadmapButton_b__16_0(RoadmapButtonPrefab_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *newNotification; // x20
  __int64 v4; // x1
  ShiningIconComponent_o *Master_object; // x0
  System_Collections_Generic_List_RoadmapEntity__o *SortedDispBoardEntityList; // x0
  RoadmapButtonPrefab___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__int__o *_9__16_1; // x20
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

  if ( (byte_4CEB3CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&System_Func_RoadmapEntity__int__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&RoadmapButtonPrefab_TypeInfo);
    sub_1C7BAE8(&Method_System_String_Join_int___);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__);
    sub_1C7BAE8(&RoadmapButtonPrefab___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    byte_4CEB3CF = 1;
  }
  newNotification = (UnityEngine_Object_o *)this->fields.newNotification;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newNotification, 0, 0) )
  {
    Master_object = this->fields.newNotification;
    if ( !Master_object )
      goto LABEL_28;
    ShiningIconComponent__Set_41675388(Master_object, 0, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShiningIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_28;
  SortedDispBoardEntityList = RoadmapMaster__GetSortedDispBoardEntityList(
                                (RoadmapMaster_o *)Master_object,
                                this->fields.roadmapAssetData,
                                this->fields.roadmapAtlasList,
                                0);
  v7 = RoadmapButtonPrefab___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)SortedDispBoardEntityList;
  if ( !RoadmapButtonPrefab___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab___c_TypeInfo);
    v7 = RoadmapButtonPrefab___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__int__o *)v7->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RoadmapButtonPrefab___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__16_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_RoadmapEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_1, v10, Method_RoadmapButtonPrefab___c__OnClickRoadmapButton_b__16_1__, 0);
    static_fields = RoadmapButtonPrefab___c_TypeInfo->static_fields;
    static_fields->__9__16_1 = (struct System_Func_RoadmapEntity__int__o *)_9__16_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_1,
      (int32_t)_9__16_1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)_9__16_1,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_RoadmapEntity__int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  v20 = RoadmapButtonPrefab_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v19;
  if ( !RoadmapButtonPrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapButtonPrefab_TypeInfo);
    v20 = RoadmapButtonPrefab_TypeInfo;
  }
  LAST_ROADMAP_BOARD_IDS_KEY = v20->static_fields->LAST_ROADMAP_BOARD_IDS_KEY;
  v23 = System_String__Join_int_(
          (System_String_o *)StringLiteral_809/*","*/,
          v21,
          (const MethodInfo_321B12C *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(LAST_ROADMAP_BOARD_IDS_KEY, v23, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
    sub_1C7BD40(Master_object, v4);
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

  if ( (byte_4CEB3D0 & 1) == 0 )
  {
    sub_1C7BAE8(&RoadmapButtonPrefab___c_TypeInfo);
    byte_4CEB3D0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(RoadmapButtonPrefab___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapButtonPrefab___c_TypeInfo->static_fields->__9 = (struct RoadmapButtonPrefab___c_o *)v1;
  sub_1C7BA8C(
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
    sub_1C7BD40(this, 0);
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

  if ( (byte_4CEB3D4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_ValueTuple_int__int___ctor__);
    byte_4CEB3D4 = 1;
  }
  v6 = (System_ValueTuple_int__int__o)&v8;
  v8 = 0;
  System_ValueTuple_int__int____ctor(
    v6,
    lastId,
    currentId,
    (const MethodInfo_3B9D60C *)Method_System_ValueTuple_int__int___ctor__);
  return v8;
}


bool RoadmapButtonPrefab___c___Initialize_b__13_0(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19

  if ( (byte_4CEB3D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (RoadmapButtonPrefab___c_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB3D1 = 1;
  }
  if ( !assetObject )
    sub_1C7BD40(this, assetObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       assetObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
}


UIAtlas_o *RoadmapButtonPrefab___c___Initialize_b__13_1(
        RoadmapButtonPrefab___c_o *this,
        UnityEngine_GameObject_o *assetObject,
        const MethodInfo *method)
{
  if ( (byte_4CEB3D2 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4CEB3D2 = 1;
  }
  if ( !assetObject )
    sub_1C7BD40(this, assetObject);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        assetObject,
                        (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


bool RoadmapButtonPrefab___c___Initialize_b__13_2(
        RoadmapButtonPrefab___c_o *this,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  RoadmapButtonPrefab_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4CEB3D3 & 1) == 0 )
  {
    this = (RoadmapButtonPrefab___c_o *)sub_1C7BAE8(&RoadmapButtonPrefab_TypeInfo);
    byte_4CEB3D3 = 1;
  }
  if ( !atlas )
    sub_1C7BD40(this, atlas);
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
    sub_1C7BD40(this, 0);
  return roadmap->fields.boardImageId;
}