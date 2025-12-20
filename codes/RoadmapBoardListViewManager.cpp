void RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4D26DA3 & 1) == 0 )
  {
    sub_1C94098(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_22977/*"prefab_roadmap_"*/);
    sub_1C94098(&StringLiteral_20724/*"img_roadmap_"*/);
    byte_4D26DA3 = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_22977/*"prefab_roadmap_"*/;
  sub_1C9403C(RoadmapBoardListViewManager_TypeInfo->static_fields, StringLiteral_22977/*"prefab_roadmap_"*/);
  v1 = StringLiteral_20724/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20724/*"img_roadmap_"*/;
  sub_1C9403C(&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE, v1);
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
  bool v41; // w8
  RoadmapBoardListViewManager_c *v42; // x0
  uint32_t cctor_finished; // w9
  int32_t v44; // w22
  UnityEngine_GameObject_o *PrefabById; // x0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t groupIndex; // w19
  int32_t tabGroup; // w29
  UnityEngine_GameObject_o *v49; // x24
  RoadmapBoardListViewItem_o *v50; // x26
  const MethodInfo *v51; // x6
  __int64 v52; // x0
  __int64 v53; // x1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  int32_t v58; // w28
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x19
  Il2CppObject *v60; // x2
  System_String_o *v61; // x0
  System_Collections_Generic_List_object__o *v62; // x29
  int32_t v63; // w22
  System_String_o *v64; // x24
  RoadmapBoardListViewItem_o *v65; // x26
  const MethodInfo *v66; // x7
  __int64 v67; // x0
  __int64 v68; // x1
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

  if ( (byte_4D26DA0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
    sub_1C94098(&System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&RoadmapBoardListViewItem_TypeInfo);
    sub_1C94098(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C94098(&Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__);
    sub_1C94098(&RoadmapBoardListViewManager___c_TypeInfo);
    sub_1C94098(&StringLiteral_25461/*"{0}{1}"*/);
    byte_4D26DA0 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_69;
  v8 = Master_object;
  SortedExistingBoardEntityList = RoadmapMaster__GetSortedExistingBoardEntityList(
                                    Master_object,
                                    roadmapAssetData,
                                    roadmapAtlasList,
                                    0);
  v10 = RoadmapMaster__GetInProgressRoadmapEntity(v8, roadmapAssetData, roadmapAtlasList, 0);
  v11 = RoadmapBoardListViewManager___c_TypeInfo;
  v79 = v10;
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
    _9__2_0 = (System_Func_T1__T2__TResult__o *)sub_1C942E4(System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___TypeInfo);
    System_Func_object__object__ValueTuple_object__object_____ctor(
      _9__2_0,
      v13,
      Method_RoadmapBoardListViewManager___c__CreateList_b__2_0__,
      0);
    static_fields = RoadmapBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas___o *)_9__2_0;
    sub_1C9403C(&static_fields->__9__2_0, _9__2_0);
  }
  Master_object = (RoadmapMaster_o *)System_Linq_Enumerable__Zip_object__object__ValueTuple_object__object__(
                                       (System_Collections_Generic_IEnumerable_TFirst__o *)SortedExistingBoardEntityList.fields.Item1,
                                       (System_Collections_Generic_IEnumerable_TSecond__o *)SortedExistingBoardEntityList.fields.Item2,
                                       (System_Func_TFirst__TSecond__TResult__o *)_9__2_0,
                                       (const MethodInfo_31E489C *)Method_System_Linq_Enumerable_Zip_RoadmapEntity__UIAtlas__ValueTuple_RoadmapEntity__UIAtlas____);
  if ( !Master_object )
    goto LABEL_69;
  klass = Master_object->klass;
  v16 = Master_object;
  v17 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v19 = sub_1C6A420(
            Master_object,
            System_Collections_Generic_IEnumerable_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo,
            0);
  }
  IsDispBoard = (*(__int64 (__fastcall **)(RoadmapMaster_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  v22 = IsDispBoard;
  v82 = 0;
  v23 = 0;
  while ( 1 )
  {
    if ( !v22 )
      sub_1C942F0(IsDispBoard, v21);
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
      v27 = sub_1C6A420(v22, System_Collections_IEnumerator_TypeInfo, 0);
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
      v31 = sub_1C6A420(v22, System_Collections_Generic_IEnumerator_ValueTuple_RoadmapEntity__UIAtlas___TypeInfo, 0);
    }
    v32 = (RoadmapEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
    v34 = v33;
    IsDispBoard = RoadmapMaster__IsDispBoard(v8, v32, 0);
    if ( (IsDispBoard & 1) != 0 )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v8, v32, 0);
      if ( IsDispAchieved )
      {
        if ( !v32 )
          sub_1C942F0(IsDispAchieved, v36);
        p_achievedImageId = &v32->fields.achievedImageId;
      }
      else
      {
        if ( !v32 )
          sub_1C942F0(IsDispAchieved, v36);
        p_achievedImageId = &v32->fields.boardImageId;
      }
      v38 = *p_achievedImageId;
      v39 = v82;
      if ( v79 == v32 )
        v39 = v23;
      v82 = v39;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v41 = UnityEngine_Object__op_Equality(v34, 0, 0);
      v78 = this;
      index = v23;
      v42 = RoadmapBoardListViewManager_TypeInfo;
      cctor_finished = RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished;
      if ( v41 )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
        v44 = v38;
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(v38, roadmapAssetData, v40);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        tabGroup = v32->fields.tabGroup;
        groupIndex = v32->fields.groupIndex;
        v49 = PrefabById;
        v50 = (RoadmapBoardListViewItem_o *)sub_1C942E4(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor_32716600(v50, index, tabGroup, groupIndex, v44, v49, v51);
        if ( !itemList )
          sub_1C942F0(v52, v53);
        items = itemList->fields._items;
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          sub_1C942F0(v52, v53);
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v50,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v50;
          IsDispBoard = sub_1C9403C(v57 + 4, v50);
        }
      }
      else
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
          v42 = RoadmapBoardListViewManager_TypeInfo;
        }
        v58 = v38;
        SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v42->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
        v83 = v38;
        v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
        v61 = System_String__Format_64459052(
                (System_String_o *)StringLiteral_25461/*"{0}{1}"*/,
                SPRITE_NAME_PREFIX_BOARD_SPRITE,
                v60,
                0);
        v62 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        LODWORD(SPRITE_NAME_PREFIX_BOARD_SPRITE) = v32->fields.tabGroup;
        v63 = v32->fields.groupIndex;
        v64 = v61;
        v65 = (RoadmapBoardListViewItem_o *)sub_1C942E4(RoadmapBoardListViewItem_TypeInfo);
        RoadmapBoardListViewItem___ctor(
          v65,
          index,
          (int32_t)SPRITE_NAME_PREFIX_BOARD_SPRITE,
          v63,
          v58,
          (UIAtlas_o *)v34,
          v64,
          v66);
        if ( !v62 )
          sub_1C942F0(v67, v68);
        v69 = v62->fields._items;
        v70 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v62->fields._version;
        if ( !v69 )
          sub_1C942F0(v67, v68);
        v71 = v62->fields._size;
        if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v62,
            (Il2CppObject *)v65,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v69->obj.klass + v71;
          v62->fields._size = v71 + 1;
          v72[4] = (Il2CppClass *)v65;
          IsDispBoard = sub_1C9403C(v72 + 4, v65);
        }
      }
      this = v78;
      v23 = index + 1;
    }
  }
  v73 = *(_QWORD *)v22;
  v74 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
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
    v76 = sub_1C6A420(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v22, *(_QWORD *)(v76 + 8));
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_69:
    sub_1C942F0(Master_object, v7);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
  return v82;
}


UIAtlas_o *RoadmapBoardListViewManager__FindBoardAtlasById(
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  RoadmapBoardListViewManager_c *v5; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x19
  int32_t v15; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D26DA2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1C94098(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_25461/*"{0}{1}"*/);
    byte_4D26DA2 = 1;
  }
  v5 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v16, 0, sizeof(v16));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v5 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v5->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v15 = boardId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v8 = System_String__Format_64459052((System_String_o *)StringLiteral_25461/*"{0}{1}"*/, SPRITE_NAME_PREFIX_BOARD_SPRITE, v7, 0);
  if ( !roadmapAtlasList )
    sub_1C942F0(v8, v9);
  v10 = v8;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v11 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C942F0(v11, v12);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, v10, 0) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


UnityEngine_GameObject_o *RoadmapBoardListViewManager__FindPrefabById(
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  RoadmapBoardListViewManager_c *v5; // x0
  Il2CppObject *PREFAB_NAME_PREFIX_BOARD_PREFAB; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D26DA1 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&RoadmapBoardListViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_25461/*"{0}{1}"*/);
    byte_4D26DA1 = 1;
  }
  v5 = RoadmapBoardListViewManager_TypeInfo;
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v5 = RoadmapBoardListViewManager_TypeInfo;
  }
  PREFAB_NAME_PREFIX_BOARD_PREFAB = (Il2CppObject *)v5->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB;
  v11 = boardId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v8 = System_String__Format_64459052((System_String_o *)StringLiteral_25461/*"{0}{1}"*/, PREFAB_NAME_PREFIX_BOARD_PREFAB, v7, 0);
  if ( !roadmapAssetData )
    sub_1C942F0(v8, v9);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51893132(
                                       roadmapAssetData,
                                       v8,
                                       (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
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

  if ( (byte_4D26DA4 & 1) == 0 )
  {
    sub_1C94098(&RoadmapBoardListViewManager___c_TypeInfo);
    byte_4D26DA4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(RoadmapBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RoadmapBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RoadmapBoardListViewManager___c_o *)v1;
  sub_1C9403C(RoadmapBoardListViewManager___c_TypeInfo->static_fields, v1);
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
  const MethodInfo_3BD51D8 *v4; // x4
  struct RoadmapEntity_o *v7; // x0
  struct UIAtlas_o *v8; // x1
  struct RoadmapEntity_o *v9; // [xsp+0h] [xbp-40h] BYREF
  struct UIAtlas_o *v10; // [xsp+8h] [xbp-38h]
  System_ValueTuple_object__object__o v11; // 0:x0.16
  System_ValueTuple_RoadmapEntity__UIAtlas__o result; // 0:x0.16

  if ( (byte_4D26DA5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_ValueTuple_RoadmapEntity__UIAtlas___ctor__);
    byte_4D26DA5 = 1;
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