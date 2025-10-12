void RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4C31A45 & 1) == 0 )
  {
    sub_1C32C20(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22752/*"prefab_roadmap_"*/);
    sub_1C32C20(&StringLiteral_20544/*"img_roadmap_"*/);
    byte_4C31A45 = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_22752/*"prefab_roadmap_"*/;
  sub_1C32BC4(RoadmapBoardListViewManager_TypeInfo->static_fields, StringLiteral_22752/*"prefab_roadmap_"*/);
  v1 = StringLiteral_20544/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20544/*"img_roadmap_"*/;
  sub_1C32BC4(&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE, v1);
}


void RoadmapBoardListViewManager___ctor(RoadmapBoardListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


int32_t RoadmapBoardListViewManager__CreateList(
        RoadmapBoardListViewManager_o *this,
        AssetData_o *roadmapAssetData,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  RoadmapMaster_o *Master_object; // x0
  RoadmapMaster_o *v7; // x23
  System_ValueTuple_List_RoadmapEntity___List_UIAtlas___o SortedExistingBoardEntityList; // kr00_16
  RoadmapEntity_o *v9; // x0
  RoadmapBoardListViewManager___c_c *v10; // x8
  System_Func_T1__T2__TResult__o *_9__2_0; // x20
  Il2CppObject *v12; // x19
  struct RoadmapBoardListViewManager___c_StaticFields *static_fields; // x0
  RoadmapMaster_c *klass; // x8
  RoadmapMaster_o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 IsDispBoard; // x0
  __int64 v20; // x20
  int32_t v21; // w19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  RoadmapEntity_o *v30; // x26
  UnityEngine_Object_o *v31; // x1
  UnityEngine_Object_o *v32; // x27
  _BOOL8 IsDispAchieved; // x0
  int32_t *p_achievedImageId; // x8
  int32_t v35; // w24
  int32_t v36; // w8
  const MethodInfo *v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
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
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  int32_t v59; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v61; // x2
  System_String_o *v62; // x0
  System_Collections_Generic_List_object__o *v63; // x29
  int32_t v64; // w22
  System_String_o *v65; // x24
  RoadmapBoardListViewItem_o *v66; // x26
  const MethodInfo *v67; // x7
  __int64 v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  RoadmapBoardListViewManager_o *v78; // [xsp+8h] [xbp-88h]
  RoadmapEntity_o *v79; // [xsp+10h] [xbp-80h]
  int32_t index; // [xsp+24h] [xbp-6Ch]
  int32_t v82; // [xsp+28h] [xbp-68h]
  int32_t v83; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C31A42 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
    sub_1C32C20(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&RoadmapBoardListViewItem_TypeInfo);
    sub_1C32C20(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C32C20(&Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__);
    sub_1C32C20(&RoadmapBoardListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_25203/*"{0}{1}"*/);
    byte_4C31A42 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_69;
  v7 = Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    Master_object,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    0);
  v9 = RoadmapMaster__GetInProgressRoadmapEntity(v7, roadmapAssetData, roadmapAtlasList, 0);
  v10 = RoadmapBoardListViewManager___c_TypeInfo;
  v79 = v9;
  if ( !RoadmapBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager___c_TypeInfo);
    v10 = RoadmapBoardListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T1__T2__TResult__o *)v10->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RoadmapBoardListViewManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__2_0 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__2_0,
      v12,
      Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__,
      0);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__2_0;
    sub_1C32BC4(&static_fields->__9__2_0, _9__2_0);
  }
  Master_object = (RoadmapMaster_o *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                                       (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                                       (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                                       (System_Func_TFirst__TSecond__TResult__o *)_9__2_0,
                                       (const MethodInfo_3124A7C *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_69;
  klass = Master_object->klass;
  v15 = Master_object;
  v16 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_17;
    }
    v18 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v18 = sub_1C83438(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0);
  }
  IsDispBoard = (*(__int64 (__fastcall **)(RoadmapMaster_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  v20 = IsDispBoard;
  v82 = 0;
  v21 = 0;
  while ( 1 )
  {
    if ( !v20 )
      sub_1C32E7C(IsDispBoard);
    v22 = *(_QWORD *)v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_25;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_25:
      v25 = sub_1C83438(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v20;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___c **)v28 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_32;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_32:
      v29 = sub_1C83438(v20, System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, 0);
    }
    v30 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
    v32 = v31;
    IsDispBoard = RoadmapMaster__IsDispBoard(v7, v30, 0);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v7, v30, 0);
      if ( IsDispAchieved )
      {
        if ( !v30 )
          sub_1C32E7C(IsDispAchieved);
        p_achievedImageId = &v30->fields.achievedImageId;
      }
      else
      {
        if ( !v30 )
          sub_1C32E7C(IsDispAchieved);
        p_achievedImageId = &v30->fields.boardImageId;
      }
      v35 = *p_achievedImageId;
      v36 = v82;
      if ( v79 == v30 )
        v36 = v21;
      v82 = v36;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__op_Equality(v32, 0, 0);
      v78 = this;
      index = v21;
      v44 = RoadmapBoardListViewManager_TypeInfo;
      cctor_finished = RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished;
      if ( v43 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v46 = v35;
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(v35, roadmapAssetData, v37);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        tabGroup = v30->fields.tabGroup;
        groupIndex = v30->fields.groupIndex;
        v51 = PrefabById;
        v52 = (RoadmapBoardListViewItem_o *)sub_1C32E6C(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor_31363144(v52, index, tabGroup, groupIndex, v46, v51, v53);
        if ( !itemList )
          sub_1C32E7C(v54);
        items = itemList->fields._items;
        v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C32E7C(v54);
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v52,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v58[4] = (Il2CppClass *)v52;
          IsDispBoard = sub_1C32BC4(v58 + 4, v52);
        }
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
          v44 = RoadmapBoardListViewManager_TypeInfo;
        }
        v59 = v35;
        SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v44->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
        v83 = v35;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v37, v38, v39, v40, v41, v42);
        v62 = System_String__Format_63559836(
                (System_String_o *)StringLiteral_25203/*"{0}{1}"*/,
                SPRITE_NAME_PREFIX_BOARD_SPRITE,
                v61,
                0);
        v63 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v30->fields.tabGroup;
        v64 = v30->fields.groupIndex;
        v65 = v62;
        v66 = (RoadmapBoardListViewItem_o *)sub_1C32E6C(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor(
          v66,
          index,
          (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v64,
          v59,
          (UIAtlas_o *)v32,
          v65,
          v67);
        if ( !v63 )
          sub_1C32E7C(v68);
        v69 = v63->fields._items;
        v70 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v63->fields._version;
        if ( !v69 )
          sub_1C32E7C(v68);
        v71 = v63->fields._size;
        if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v63,
            (Il2CppObject *)v66,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v69->obj.klass + v71;
          v63->fields._size = v71 + 1;
          v72[4] = (Il2CppClass *)v66;
          IsDispBoard = sub_1C32BC4(v72 + 4, v66);
        }
      }
      this = v78;
      v21 = index + 1;
    }
  }
  v73 = *(_QWORD *)v20;
  v74 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_64;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_64:
    v76 = sub_1C83438(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v20, *(_QWORD *)(v76 + 8));
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_69:
    sub_1C32E7C(Master_object);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
  return v82;
}


UIAtlas_o *RoadmapBoardListViewManager__FindBoardAtlasById(
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  RoadmapBoardListViewManager_c *v10; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  _BOOL8 v15; // x0
  Il2CppObject *current; // x19
  int32_t v18; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C31A44 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1C32C20(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25203/*"{0}{1}"*/);
    byte_4C31A44 = 1;
  }
  v10 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v19, 0, sizeof(v19));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v10 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v10->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v18 = boardId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, method, v3, v4, v5, v6, v7);
  v13 = System_String__Format_63559836((System_String_o *)StringLiteral_25203/*"{0}{1}"*/, SPRITE_NAME_PREFIX_BOARD_SPRITE, v12, 0);
  if ( !roadmapAtlasList )
    sub_1C32E7C(v13);
  v14 = v13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v15 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1C32E7C(v15);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v19.fields._current, v14, 0) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


UnityEngine_GameObject_o *RoadmapBoardListViewManager__FindPrefabById(
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  RoadmapBoardListViewManager_c *v10; // x0
  Il2CppObject *PREFAB_NAME_PREFIX_BOARD_PREFAB; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C31A43 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25203/*"{0}{1}"*/);
    byte_4C31A43 = 1;
  }
  v10 = RoadmapBoardListViewManager_TypeInfo;
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v10 = RoadmapBoardListViewManager_TypeInfo;
  }
  PREFAB_NAME_PREFIX_BOARD_PREFAB = (Il2CppObject *)v10->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB;
  v15 = boardId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4, v5, v6, v7);
  v13 = System_String__Format_63559836((System_String_o *)StringLiteral_25203/*"{0}{1}"*/, PREFAB_NAME_PREFIX_BOARD_PREFAB, v12, 0);
  if ( !roadmapAssetData )
    sub_1C32E7C(v13);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51111776(
                                       roadmapAssetData,
                                       v13,
                                       (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
}


void RoadmapBoardListViewManager__OnClickListView(
        RoadmapBoardListViewManager_o *this,
        ListViewObject_o *clickedObject,
        const MethodInfo *method)
{
  ;
}


void RoadmapBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C31A46 & 1) == 0 )
  {
    sub_1C32C20(&RoadmapBoardListViewManager___c_TypeInfo);
    byte_4C31A46 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(RoadmapBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v1;
  sub_1C32BC4(RoadmapBoardListViewManager___c_TypeInfo->static_fields, v1);
}


void RoadmapBoardListViewManager___c___ctor(RoadmapBoardListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_RoadmapEntity__UIAtlas__o RoadmapBoardListViewManager___c___CreateList_b__2_0(
        RoadmapBoardListViewManager___c_o *this,
        RoadmapEntity_o *roadmapEntity,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  const MethodInfo_3AF85D0 *v4; // x4
  struct RoadmapEntity_o *v7; // x0
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4C31A47 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__);
    byte_4C31A47 = 1;
  }
  v11.fields.Item1 = (Il2CppObject *)&v9;
  v11.fields.Item2 = (Il2CppObject *)roadmapEntity;
  v9 = 0;
  v10 = 0;
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