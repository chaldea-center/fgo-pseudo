void __fastcall RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4BD7208 & 1) == 0 )
  {
    sub_1C21E38(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22995/*"prefab_roadmap_"*/);
    sub_1C21E38(&StringLiteral_20807/*"img_roadmap_"*/);
    byte_4BD7208 = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_22995/*"prefab_roadmap_"*/;
  sub_1C21DDC(RoadmapBoardListViewManager_TypeInfo->static_fields, StringLiteral_22995/*"prefab_roadmap_"*/);
  v1 = StringLiteral_20807/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20807/*"img_roadmap_"*/;
  sub_1C21DDC(&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE, v1);
}


void __fastcall RoadmapBoardListViewManager___ctor(RoadmapBoardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall RoadmapBoardListViewManager__CreateList(
        RoadmapBoardListViewManager_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  RoadmapMaster_o *Master_object; // x0
  __int64 v7; // x1
  RoadmapMaster_o *v8; // x23
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  RoadmapEntity_o *v10; // x0
  RoadmapBoardListViewManager___c_c *v11; // x8
  System_Func_T1__T2__TResult__o *_9__2_0; // x20
  Il2CppObject *v13; // x19
  struct RoadmapBoardListViewManager___c_StaticFields *static_fields; // x0
  RoadmapMaster_c *klass; // x8
  RoadmapMaster_o *v16; // x20
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 IsDispBoard; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  int32_t v23; // w19
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  RoadmapEntity_o *v32; // x26
  UnityEngine_Object_o *v33; // x1
  UnityEngine_Object_o *v34; // x27
  _BOOL8 IsDispAchieved; // x0
  __int64 v36; // x1
  int32_t *p_achievedImageId; // x8
  int32_t v38; // w24
  int32_t v39; // w8
  const MethodInfo *v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  bool v43; // w8
  RoadmapBoardListViewManager_c *v44; // x0
  uint32_t cctor_finished; // w9
  int32_t v46; // w22
  UnityEngine_GameObject_o *PrefabById; // x0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t groupIndex; // w19
  int32_t tabGroup; // w29
  UnityEngine_GameObject_o *v51; // x24
  RoadmapBoardListViewItem_o *v52; // x26
  const MethodInfo *v53; // x6
  __int64 v54; // x0
  __int64 v55; // x1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  int32_t v60; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v62; // x2
  System_String_o *v63; // x0
  System_Collections_Generic_List_object__o *v64; // x29
  int32_t v65; // w22
  System_String_o *v66; // x24
  RoadmapBoardListViewItem_o *v67; // x26
  const MethodInfo *v68; // x7
  __int64 v69; // x0
  __int64 v70; // x1
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  RoadmapBoardListViewManager_o *v80; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v81; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v84; // [xsp+28h] [xbp-68h]
  int32_t v85; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BD7205 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
    sub_1C21E38(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&RoadmapBoardListViewItem_TypeInfo);
    sub_1C21E38(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C21E38(&Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__);
    sub_1C21E38(&RoadmapBoardListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_25553/*"{0}{1}"*/);
    byte_4BD7205 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_69;
  v8 = Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    Master_object,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    0LL);
  v10 = RoadmapMaster__GetInProgressRoadmapEntity(v8, roadmapAssetData, roadmapAtlasList, 0LL);
  v11 = RoadmapBoardListViewManager___c_TypeInfo;
  v81 = v10;
  if ( !RoadmapBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager___c_TypeInfo);
    v11 = RoadmapBoardListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T1__T2__TResult__o *)v11->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RoadmapBoardListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__2_0 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__2_0,
      v13,
      Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__2_0;
    sub_1C21DDC(&static_fields->__9__2_0, _9__2_0);
  }
  Master_object = (RoadmapMaster_o *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                                       (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                                       (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                                       (System_Func_TFirst__TSecond__TResult__o *)_9__2_0,
                                       (const MethodInfo_2FF02F8 *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_69;
  klass = Master_object->klass;
  v16 = Master_object;
  v17 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v19 = sub_1C73E18(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0LL);
  }
  IsDispBoard = (*(__int64 (__fastcall **)(RoadmapMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  v22 = IsDispBoard;
  v84 = 0;
  v23 = 0;
  while ( 1 )
  {
    if ( !v22 )
      sub_1C22094(IsDispBoard, v21);
    v24 = *(_QWORD *)v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_25;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_25:
      v27 = sub_1C73E18(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v22, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v22;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **)v30 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_32;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_32:
      v31 = sub_1C73E18(v22, System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, 0LL);
    }
    v32 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
    v34 = v33;
    IsDispBoard = RoadmapMaster__IsDispBoard(v8, v32, 0LL);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v8, v32, 0LL);
      if ( IsDispAchieved )
      {
        if ( !v32 )
          sub_1C22094(IsDispAchieved, v36);
        p_achievedImageId = &v32->fields.achievedImageId;
      }
      else
      {
        if ( !v32 )
          sub_1C22094(IsDispAchieved, v36);
        p_achievedImageId = &v32->fields.boardImageId;
      }
      v38 = *p_achievedImageId;
      v39 = v84;
      if ( v81 == v32 )
        v39 = v23;
      v84 = v39;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      v80 = this;
      index = v23;
      v44 = RoadmapBoardListViewManager_TypeInfo;
      cctor_finished = RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished;
      if ( v43 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v46 = v38;
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(v38, roadmapAssetData, v40);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        tabGroup = v32->fields.tabGroup;
        groupIndex = v32->fields.groupIndex;
        v51 = PrefabById;
        v52 = (RoadmapBoardListViewItem_o *)sub_1C22084(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor_31290688(v52, index, tabGroup, groupIndex, v46, v51, v53);
        if ( !itemList )
          sub_1C22094(v54, v55);
        items = itemList->fields._items;
        v57 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C22094(v54, v55);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v52,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v59[4] = (Il2CppClass *)v52;
          IsDispBoard = sub_1C21DDC(v59 + 4, v52);
        }
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
          v44 = RoadmapBoardListViewManager_TypeInfo;
        }
        v60 = v38;
        SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v44->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
        v85 = v38;
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v40, v41, v42);
        v63 = System_String__Format_63129848(
                (System_String_o *)StringLiteral_25553/*"{0}{1}"*/,
                SPRITE_NAME_PREFIX_BOARD_SPRITE,
                v62,
                0LL);
        v64 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v32->fields.tabGroup;
        v65 = v32->fields.groupIndex;
        v66 = v63;
        v67 = (RoadmapBoardListViewItem_o *)sub_1C22084(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor(
          v67,
          index,
          (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v65,
          v60,
          (UIAtlas_o *)v34,
          v66,
          v68);
        if ( !v64 )
          sub_1C22094(v69, v70);
        v71 = v64->fields._items;
        v72 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v64->fields._version;
        if ( !v71 )
          sub_1C22094(v69, v70);
        v73 = v64->fields._size;
        if ( (unsigned int)v73 >= v71->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v64,
            (Il2CppObject *)v67,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &v71->obj.klass + v73;
          v64->fields._size = v73 + 1;
          v74[4] = (Il2CppClass *)v67;
          IsDispBoard = sub_1C21DDC(v74 + 4, v67);
        }
      }
      this = v80;
      v23 = index + 1;
    }
  }
  v75 = *(_QWORD *)v22;
  v76 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      --v76;
      v77 += 4;
      if ( !v76 )
        goto LABEL_64;
    }
    v78 = v75 + 16LL * *v77 + 312;
  }
  else
  {
LABEL_64:
    v78 = sub_1C73E18(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v78)(v22, *(_QWORD *)(v78 + 8));
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_69:
    sub_1C22094(Master_object, v7);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  return v84;
}


UIAtlas_o *__fastcall RoadmapBoardListViewManager__FindBoardAtlasById(
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  RoadmapBoardListViewManager_c *v7; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x19
  int32_t v17; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD7207 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1C21E38(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25553/*"{0}{1}"*/);
    byte_4BD7207 = 1;
  }
  v7 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v18, 0, sizeof(v18));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v7 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v7->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v17 = boardId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, method, v3, v4);
  v10 = System_String__Format_63129848((System_String_o *)StringLiteral_25553/*"{0}{1}"*/, SPRITE_NAME_PREFIX_BOARD_SPRITE, v9, 0LL);
  if ( !roadmapAtlasList )
    sub_1C22094(v10, v11);
  v12 = v10;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C22094(v13, v14);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v18.fields._current, v12, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


UnityEngine_GameObject_o *__fastcall RoadmapBoardListViewManager__FindPrefabById(
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  RoadmapBoardListViewManager_c *v7; // x0
  Il2CppObject *PREFAB_NAME_PREFIX_BOARD_PREFAB; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD7206 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_25553/*"{0}{1}"*/);
    byte_4BD7206 = 1;
  }
  v7 = RoadmapBoardListViewManager_TypeInfo;
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v7 = RoadmapBoardListViewManager_TypeInfo;
  }
  PREFAB_NAME_PREFIX_BOARD_PREFAB = (Il2CppObject *)v7->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB;
  v13 = boardId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, method, v3, v4);
  v10 = System_String__Format_63129848((System_String_o *)StringLiteral_25553/*"{0}{1}"*/, PREFAB_NAME_PREFIX_BOARD_PREFAB, v9, 0LL);
  if ( !roadmapAssetData )
    sub_1C22094(v10, v11);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49880776(
                                       roadmapAssetData,
                                       v10,
                                       (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
}


void __fastcall RoadmapBoardListViewManager__OnClickListView(
        RoadmapBoardListViewManager_o *this,
        ListViewObject_o *clickedObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall RoadmapBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD7209 & 1) == 0 )
  {
    sub_1C21E38(&RoadmapBoardListViewManager___c_TypeInfo);
    byte_4BD7209 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(RoadmapBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v1;
  sub_1C21DDC(RoadmapBoardListViewManager___c_TypeInfo->static_fields, v1);
}


void __fastcall RoadmapBoardListViewManager___c___ctor(
        RoadmapBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_RoadmapEntity__UIAtlas__o __fastcall RoadmapBoardListViewManager___c___CreateList_b__2_0(
        RoadmapBoardListViewManager___c_o *this,
        RoadmapEntity_o *roadmapEntity,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  const MethodInfo_39A64B8 *v4; // x4
  struct RoadmapEntity_o *v7; // x0 OVERLAPPED
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4BD720A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__);
    byte_4BD720A = 1;
  }
  v11.fields.Item1 = (Il2CppObject *)&v9;
  v11.fields.Item2 = (Il2CppObject *)roadmapEntity;
  v9 = 0LL;
  v10 = 0LL;
  System_ValueTuple_object__object____ctor(
    v11,
    (Il2CppObject *)atlas,
    (Il2CppObject *)Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__,
    v4);
  v7 = v9;
  v8 = v10;
  result.fields.Item2 = v8;
  result.fields.Item1 = v7;
  return result;
}