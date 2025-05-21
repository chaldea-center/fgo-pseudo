void __fastcall RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4B3EF7E & 1) == 0 )
  {
    sub_1BDB878(&RoadmapBoardListViewManager_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_22774/*"prefab_roadmap_"*/, v2);
    sub_1BDB878(&StringLiteral_20555/*"img_roadmap_"*/, v3);
    byte_4B3EF7E = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_22774/*"prefab_roadmap_"*/;
  sub_1BDB81C(RoadmapBoardListViewManager_TypeInfo->static_fields);
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20555/*"img_roadmap_"*/;
  sub_1BDB81C(&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE);
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
  RoadmapMaster_o *Master_object; // x0
  __int64 v22; // x1
  RoadmapMaster_o *v23; // x23
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  RoadmapEntity_o *v25; // x0
  RoadmapBoardListViewManager___c_c *v26; // x8
  System_Func_T1__T2__TResult__o *_9__2_0; // x20
  Il2CppObject *v28; // x19
  struct RoadmapBoardListViewManager___c_StaticFields *static_fields; // x0
  RoadmapMaster_c *klass; // x8
  RoadmapMaster_o *v31; // x20
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 IsDispBoard; // x0
  __int64 v36; // x1
  __int64 v37; // x20
  int32_t v38; // w19
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  RoadmapEntity_o *v47; // x26
  UnityEngine_Object_o *v48; // x1
  UnityEngine_Object_o *v49; // x27
  _BOOL8 IsDispAchieved; // x0
  __int64 v51; // x1
  int32_t *p_achievedImageId; // x8
  int32_t v53; // w24
  int32_t v54; // w8
  const MethodInfo *v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  bool v58; // w8
  RoadmapBoardListViewManager_c *v59; // x0
  uint32_t cctor_finished; // w9
  int32_t v61; // w22
  UnityEngine_GameObject_o *PrefabById; // x0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t groupIndex; // w19
  int32_t tabGroup; // w29
  UnityEngine_GameObject_o *v66; // x24
  RoadmapBoardListViewItem_o *v67; // x26
  const MethodInfo *v68; // x6
  __int64 v69; // x0
  __int64 v70; // x1
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  int32_t v75; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v77; // x2
  System_String_o *v78; // x0
  System_Collections_Generic_List_object__o *v79; // x29
  int32_t v80; // w22
  System_String_o *v81; // x24
  RoadmapBoardListViewItem_o *v82; // x26
  const MethodInfo *v83; // x7
  __int64 v84; // x0
  __int64 v85; // x1
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  RoadmapBoardListViewManager_o *v95; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v96; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v99; // [xsp+28h] [xbp-68h]
  int32_t v100; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B3EF7B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_RoadmapMaster___, roadmapAssetData);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____, v7);
    sub_1BDB878(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v8);
    sub_1BDB878(&System_IDisposable_TypeInfo, v9);
    sub_1BDB878(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v10);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, v11);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BDB878(&int_TypeInfo, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v15);
    sub_1BDB878(&RoadmapBoardListViewItem_TypeInfo, v16);
    sub_1BDB878(&RoadmapBoardListViewManager_TypeInfo, v17);
    sub_1BDB878(&Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__, v18);
    sub_1BDB878(&RoadmapBoardListViewManager___c_TypeInfo, v19);
    sub_1BDB878(&StringLiteral_25296/*"{0}{1}"*/, v20);
    byte_4B3EF7B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_69;
  v23 = Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    Master_object,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    0LL);
  v25 = RoadmapMaster__GetInProgressRoadmapEntity(v23, roadmapAssetData, roadmapAtlasList, 0LL);
  v26 = RoadmapBoardListViewManager___c_TypeInfo;
  v96 = v25;
  if ( !RoadmapBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager___c_TypeInfo);
    v26 = RoadmapBoardListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T1__T2__TResult__o *)v26->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = RoadmapBoardListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__2_0 = (System_Func_T1__T2__TResult__o *)sub_1BDBAC4(System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__2_0,
      v28,
      Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__,
      0LL);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__2_0;
    sub_1BDB81C(&static_fields->__9__2_0);
  }
  Master_object = (RoadmapMaster_o *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                                       (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                                       (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                                       (System_Func_TFirst__TSecond__TResult__o *)_9__2_0,
                                       (const MethodInfo_3078314 *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_69;
  klass = Master_object->klass;
  v31 = Master_object;
  v32 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_17;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v34 = sub_1C2C00C(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0LL);
  }
  IsDispBoard = (*(__int64 (__fastcall **)(RoadmapMaster_o *, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
  v37 = IsDispBoard;
  v99 = 0;
  v38 = 0;
  while ( 1 )
  {
    if ( !v37 )
      sub_1BDBAD4(IsDispBoard, v36);
    v39 = *(_QWORD *)v37;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_25;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_25:
      v42 = sub_1C2C00C(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v37, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v37;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **)v45 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_32;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_32:
      v46 = sub_1C2C00C(v37, System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, 0LL);
    }
    v47 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v37, *(_QWORD *)(v46 + 8));
    v49 = v48;
    IsDispBoard = RoadmapMaster__IsDispBoard(v23, v47, 0LL);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v23, v47, 0LL);
      if ( IsDispAchieved )
      {
        if ( !v47 )
          sub_1BDBAD4(IsDispAchieved, v51);
        p_achievedImageId = &v47->fields.achievedImageId;
      }
      else
      {
        if ( !v47 )
          sub_1BDBAD4(IsDispAchieved, v51);
        p_achievedImageId = &v47->fields.boardImageId;
      }
      v53 = *p_achievedImageId;
      v54 = v99;
      if ( v96 == v47 )
        v54 = v38;
      v99 = v54;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v58 = UnityEngine_Object__op_Equality(v49, 0LL, 0LL);
      v95 = this;
      index = v38;
      v59 = RoadmapBoardListViewManager_TypeInfo;
      cctor_finished = RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished;
      if ( v58 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v61 = v53;
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(v53, roadmapAssetData, v55);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        tabGroup = v47->fields.tabGroup;
        groupIndex = v47->fields.groupIndex;
        v66 = PrefabById;
        v67 = (RoadmapBoardListViewItem_o *)sub_1BDBAC4(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor_31002412(v67, index, tabGroup, groupIndex, v61, v66, v68);
        if ( !itemList )
          sub_1BDBAD4(v69, v70);
        items = itemList->fields._items;
        v72 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1BDBAD4(v69, v70);
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v67,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v67;
          IsDispBoard = sub_1BDB81C(v74 + 4);
        }
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
          v59 = RoadmapBoardListViewManager_TypeInfo;
        }
        v75 = v53;
        SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v59->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
        v100 = v53;
        v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v55, v56, v57);
        v78 = System_String__Format_62613552(
                (System_String_o *)StringLiteral_25296/*"{0}{1}"*/,
                SPRITE_NAME_PREFIX_BOARD_SPRITE,
                v77,
                0LL);
        v79 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v47->fields.tabGroup;
        v80 = v47->fields.groupIndex;
        v81 = v78;
        v82 = (RoadmapBoardListViewItem_o *)sub_1BDBAC4(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor(
          v82,
          index,
          (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v80,
          v75,
          (UIAtlas_o *)v49,
          v81,
          v83);
        if ( !v79 )
          sub_1BDBAD4(v84, v85);
        v86 = v79->fields._items;
        v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v79->fields._version;
        if ( !v86 )
          sub_1BDBAD4(v84, v85);
        v88 = v79->fields._size;
        if ( (unsigned int)v88 >= v86->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v79,
            (Il2CppObject *)v82,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v86->obj.klass + v88;
          v79->fields._size = v88 + 1;
          v89[4] = (Il2CppClass *)v82;
          IsDispBoard = sub_1BDB81C(v89 + 4);
        }
      }
      this = v95;
      v38 = index + 1;
    }
  }
  v90 = *(_QWORD *)v37;
  v91 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
    {
      --v91;
      v92 += 4;
      if ( !v91 )
        goto LABEL_64;
    }
    v93 = v90 + 16LL * *v92 + 312;
  }
  else
  {
LABEL_64:
    v93 = sub_1C2C00C(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v93)(v37, *(_QWORD *)(v93 + 8));
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_69:
    sub_1BDBAD4(Master_object, v22);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  return v99;
}


UIAtlas_o *__fastcall RoadmapBoardListViewManager__FindBoardAtlasById(
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  RoadmapBoardListViewManager_c *v13; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x19
  int32_t v23; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3EF7D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, roadmapAtlasList);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v8);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    sub_1BDB878(&RoadmapBoardListViewManager_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_25296/*"{0}{1}"*/, v12);
    byte_4B3EF7D = 1;
  }
  v13 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v24, 0, sizeof(v24));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v13 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v13->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v23 = boardId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, method, v3, v4);
  v16 = System_String__Format_62613552(
          (System_String_o *)StringLiteral_25296/*"{0}{1}"*/,
          SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v15,
          0LL);
  if ( !roadmapAtlasList )
    sub_1BDBAD4(v16, v17);
  v18 = v16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v19 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BDBAD4(v19, v20);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, v18, 0LL) )
      goto LABEL_12;
  }
  current = 0LL;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


UnityEngine_GameObject_o *__fastcall RoadmapBoardListViewManager__FindPrefabById(
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  RoadmapBoardListViewManager_c *v10; // x0
  Il2CppObject *PREFAB_NAME_PREFIX_BOARD_PREFAB; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B3EF7C & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, roadmapAssetData);
    sub_1BDB878(&int_TypeInfo, v7);
    sub_1BDB878(&RoadmapBoardListViewManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_25296/*"{0}{1}"*/, v9);
    byte_4B3EF7C = 1;
  }
  v10 = RoadmapBoardListViewManager_TypeInfo;
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v10 = RoadmapBoardListViewManager_TypeInfo;
  }
  PREFAB_NAME_PREFIX_BOARD_PREFAB = (Il2CppObject *)v10->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB;
  v16 = boardId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, method, v3, v4);
  v13 = System_String__Format_62613552(
          (System_String_o *)StringLiteral_25296/*"{0}{1}"*/,
          PREFAB_NAME_PREFIX_BOARD_PREFAB,
          v12,
          0LL);
  if ( !roadmapAssetData )
    sub_1BDBAD4(v13, v14);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__50417328(
                                       roadmapAssetData,
                                       v13,
                                       (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3EF7F & 1) == 0 )
  {
    sub_1BDB878(&RoadmapBoardListViewManager___c_TypeInfo, v1);
    byte_4B3EF7F = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(RoadmapBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v2;
  sub_1BDB81C(RoadmapBoardListViewManager___c_TypeInfo->static_fields);
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
  const MethodInfo_3A28B28 *v4; // x4
  struct RoadmapEntity_o *v7; // x0 OVERLAPPED
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4B3EF80 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__, roadmapEntity);
    byte_4B3EF80 = 1;
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