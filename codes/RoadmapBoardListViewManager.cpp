void __fastcall RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5EC7A & 1) == 0 )
  {
    sub_1B885B0(&RoadmapBoardListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22584/*"prefab_roadmap_"*/);
    sub_1B885B0(&StringLiteral_20439/*"img_roadmap_"*/);
    byte_4A5EC7A = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_22584/*"prefab_roadmap_"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RoadmapBoardListViewManager_TypeInfo->static_fields,
    StringLiteral_22584/*"prefab_roadmap_"*/,
    v1,
    v2);
  v3 = StringLiteral_20439/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20439/*"img_roadmap_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE, v3, v5, v6);
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
  int32_t v15; // w2
  int32_t v16; // w3
  RoadmapMaster_c *klass; // x8
  RoadmapMaster_o *v18; // x20
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 IsDispBoard; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  int32_t v25; // w19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  RoadmapEntity_o *v34; // x26
  UnityEngine_Object_o *v35; // x1
  UnityEngine_Object_o *v36; // x27
  _BOOL8 IsDispAchieved; // x0
  __int64 v38; // x1
  int32_t *p_achievedImageId; // x8
  int32_t v40; // w24
  int32_t v41; // w8
  const MethodInfo *v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  bool v45; // w8
  RoadmapBoardListViewManager_c *v46; // x0
  uint32_t cctor_finished; // w9
  int32_t v48; // w22
  UnityEngine_GameObject_o *PrefabById; // x0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t groupIndex; // w19
  int32_t tabGroup; // w29
  UnityEngine_GameObject_o *v53; // x24
  RoadmapBoardListViewItem_o *v54; // x26
  const MethodInfo *v55; // x6
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  int32_t v64; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v66; // x2
  System_String_o *v67; // x0
  System_Collections_Generic_List_object__o *v68; // x29
  int32_t v69; // w22
  System_String_o *v70; // x24
  RoadmapBoardListViewItem_o *v71; // x26
  const MethodInfo *v72; // x7
  __int64 v73; // x0
  __int64 v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  RoadmapBoardListViewManager_o *v86; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v87; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v90; // [xsp+28h] [xbp-68h]
  int32_t v91; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5EC77 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
    sub_1B885B0(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RoadmapBoardListViewItem_TypeInfo);
    sub_1B885B0(&RoadmapBoardListViewManager_TypeInfo);
    sub_1B885B0(&Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__);
    sub_1B885B0(&RoadmapBoardListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_25106/*"{0}{1}"*/);
    byte_4A5EC77 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RoadmapMaster___);
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
  v87 = v10;
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
    _9__2_0 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__2_0,
      v13,
      Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__2_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v15, v16);
  }
  Master_object = (RoadmapMaster_o *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                                       (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                                       (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                                       (System_Func_TFirst__TSecond__TResult__o *)_9__2_0,
                                       (const MethodInfo_2EBEC7C *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_69;
  klass = Master_object->klass;
  v18 = Master_object;
  v19 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_17;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v21 = sub_1BDA590(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0LL);
  }
  IsDispBoard = (*(__int64 (__fastcall **)(RoadmapMaster_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  v24 = IsDispBoard;
  v90 = 0;
  v25 = 0;
  while ( 1 )
  {
    if ( !v24 )
      sub_1B8880C(IsDispBoard, v23);
    v26 = *(_QWORD *)v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_25;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_25:
      v29 = sub_1BDA590(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v24, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v24;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **)v32 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_32;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_1BDA590(v24, System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, 0LL);
    }
    v34 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    v36 = v35;
    IsDispBoard = RoadmapMaster__IsDispBoard(v8, v34, 0LL);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v8, v34, 0LL);
      if ( IsDispAchieved )
      {
        if ( !v34 )
          sub_1B8880C(IsDispAchieved, v38);
        p_achievedImageId = &v34->fields.achievedImageId;
      }
      else
      {
        if ( !v34 )
          sub_1B8880C(IsDispAchieved, v38);
        p_achievedImageId = &v34->fields.boardImageId;
      }
      v40 = *p_achievedImageId;
      v41 = v90;
      if ( v87 == v34 )
        v41 = v25;
      v90 = v41;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v45 = UnityEngine_Object__op_Equality(v36, 0LL, 0LL);
      v86 = this;
      index = v25;
      v46 = RoadmapBoardListViewManager_TypeInfo;
      cctor_finished = RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished;
      if ( v45 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v48 = v40;
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(v40, roadmapAssetData, v42);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        tabGroup = v34->fields.tabGroup;
        groupIndex = v34->fields.groupIndex;
        v53 = PrefabById;
        v54 = (RoadmapBoardListViewItem_o *)sub_1B887FC(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor_45298420(v54, index, tabGroup, groupIndex, v48, v53, v55);
        if ( !itemList )
          sub_1B8880C(v56, v57);
        items = itemList->fields._items;
        v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1B8880C(v56, v57);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v54,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v63[4] = (Il2CppClass *)v54;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v54, v58, v59);
        }
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
          v46 = RoadmapBoardListViewManager_TypeInfo;
        }
        v64 = v40;
        SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v46->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
        v91 = v40;
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v42, v43, v44);
        v67 = System_String__Format_61721404(
                (System_String_o *)StringLiteral_25106/*"{0}{1}"*/,
                SPRITE_NAME_PREFIX_BOARD_SPRITE,
                v66,
                0LL);
        v68 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v34->fields.tabGroup;
        v69 = v34->fields.groupIndex;
        v70 = v67;
        v71 = (RoadmapBoardListViewItem_o *)sub_1B887FC(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor(
          v71,
          index,
          (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v69,
          v64,
          (UIAtlas_o *)v36,
          v70,
          v72);
        if ( !v68 )
          sub_1B8880C(v73, v74);
        v77 = v68->fields._items;
        v78 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v68->fields._version;
        if ( !v77 )
          sub_1B8880C(v73, v74);
        v79 = v68->fields._size;
        if ( (unsigned int)v79 >= v77->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v68,
            (Il2CppObject *)v71,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = &v77->obj.klass + v79;
          v68->fields._size = v79 + 1;
          v80[4] = (Il2CppClass *)v71;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v71, v75, v76);
        }
      }
      this = v86;
      v25 = index + 1;
    }
  }
  v81 = *(_QWORD *)v24;
  v82 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      --v82;
      v83 += 4;
      if ( !v82 )
        goto LABEL_64;
    }
    v84 = v81 + 16LL * *v83 + 312;
  }
  else
  {
LABEL_64:
    v84 = sub_1BDA590(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v84)(v24, *(_QWORD *)(v84 + 8));
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_69:
    sub_1B8880C(Master_object, v7);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  return v90;
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

  if ( (byte_4A5EC79 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1B885B0(&RoadmapBoardListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_25106/*"{0}{1}"*/);
    byte_4A5EC79 = 1;
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
  v10 = System_String__Format_61721404((System_String_o *)StringLiteral_25106/*"{0}{1}"*/, SPRITE_NAME_PREFIX_BOARD_SPRITE, v9, 0LL);
  if ( !roadmapAtlasList )
    sub_1B8880C(v10, v11);
  v12 = v10;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1B8880C(v13, v14);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v18.fields._current, v12, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_4A5EC78 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&RoadmapBoardListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_25106/*"{0}{1}"*/);
    byte_4A5EC78 = 1;
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
  v10 = System_String__Format_61721404((System_String_o *)StringLiteral_25106/*"{0}{1}"*/, PREFAB_NAME_PREFIX_BOARD_PREFAB, v9, 0LL);
  if ( !roadmapAssetData )
    sub_1B8880C(v10, v11);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                       roadmapAssetData,
                                       v10,
                                       (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EC7B & 1) == 0 )
  {
    sub_1B885B0(&RoadmapBoardListViewManager___c_TypeInfo);
    byte_4A5EC7B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RoadmapBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RoadmapBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  const MethodInfo_384D2F4 *v4; // x4
  struct RoadmapEntity_o *v7; // x0 OVERLAPPED
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4A5EC7C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__);
    byte_4A5EC7C = 1;
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