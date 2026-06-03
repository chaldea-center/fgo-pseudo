void RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0

  if ( (byte_4E71AB0 & 1) == 0 )
  {
    sub_1D0F0B4(&RoadmapBoardListViewManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23218/*"prefab_roadmap_"*/);
    sub_1D0F0B4(&StringLiteral_20939/*"img_roadmap_"*/);
    byte_4E71AB0 = 1;
  }
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_23218/*"prefab_roadmap_"*/;
  sub_1D0F058(RoadmapBoardListViewManager_TypeInfo->static_fields, StringLiteral_23218/*"prefab_roadmap_"*/);
  v1 = StringLiteral_20939/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_20939/*"img_roadmap_"*/;
  sub_1D0F058(&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE, v1);
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
  System_Collections_Generic_List_object__o *SortedAllEntityList; // x20
  int32_t v10; // w19
  RoadmapEntity_o *current; // x26
  _BOOL8 IsDispAchieved; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  int32_t *p_achievedImageId; // x8
  int32_t v16; // w27
  UnityEngine_Object_o *BoardAtlasById; // x28
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *PrefabById; // x29
  int32_t v21; // w9
  System_Collections_Generic_List_object__o *itemList; // x28
  int32_t tabGroup; // w19
  int32_t groupIndex; // w20
  RoadmapBoardListViewItem_o *v25; // x26
  const MethodInfo *v26; // x6
  __int64 v27; // x0
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  RoadmapBoardListViewManager_c *v33; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x24
  Il2CppObject *v35; // x2
  System_String_o *v36; // x0
  int32_t v37; // w19
  int32_t v38; // w20
  System_String_o *v39; // x24
  System_Collections_Generic_List_object__o *v40; // x29
  RoadmapBoardListViewItem_o *v41; // x26
  const MethodInfo *v42; // x7
  __int64 v43; // x0
  __int64 v44; // x1
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  RoadmapBoardListViewManager_o *v50; // [xsp+8h] [xbp-B8h]
  RoadmapEntity_o *v51; // [xsp+10h] [xbp-B0h]
  int32_t index; // [xsp+18h] [xbp-A8h]
  int32_t v53; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4E71AAD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&RoadmapBoardListViewItem_TypeInfo);
    sub_1D0F0B4(&RoadmapBoardListViewManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25732/*"{0}{1}"*/);
    byte_4E71AAD = 1;
  }
  memset(&v56, 0, sizeof(v56));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_49;
  v8 = Master_object;
  SortedAllEntityList = (System_Collections_Generic_List_object__o *)RoadmapMaster__GetSortedAllEntityList(
                                                                       Master_object,
                                                                       0);
  Master_object = (RoadmapMaster_o *)RoadmapMaster__GetInProgressRoadmapEntity(v8, 0);
  v51 = (RoadmapEntity_o *)Master_object;
  if ( !SortedAllEntityList )
    goto LABEL_49;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    SortedAllEntityList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v53 = 0;
  v10 = 0;
  v56 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__) )
  {
    current = (RoadmapEntity_o *)v56.fields._current;
    if ( RoadmapMaster__IsDispBoard(v8, (RoadmapEntity_o *)v56.fields._current, 0) )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v8, current, 0);
      if ( IsDispAchieved )
      {
        if ( !current )
          sub_1D0F30C(IsDispAchieved, v13);
        p_achievedImageId = &current->fields.achievedImageId;
      }
      else
      {
        if ( !current )
          sub_1D0F30C(IsDispAchieved, v13);
        p_achievedImageId = &current->fields.boardImageId;
      }
      v16 = *p_achievedImageId;
      BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(
                                                 (RoadmapBoardListViewManager_o *)IsDispAchieved,
                                                 *p_achievedImageId,
                                                 roadmapAtlasList,
                                                 v14);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__op_Equality(BoardAtlasById, 0, 0);
      if ( v18 )
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(
                       (RoadmapBoardListViewManager_o *)v18,
                       v16,
                       roadmapAssetData,
                       v19);
      else
        PrefabById = 0;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(BoardAtlasById, 0, 0) )
        goto LABEL_26;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PrefabById, 0, 0) )
      {
LABEL_26:
        v21 = v53;
        if ( current == v51 )
          v21 = v10;
        v53 = v21;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        index = v10;
        if ( UnityEngine_Object__op_Equality(BoardAtlasById, 0, 0) )
        {
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          tabGroup = current->fields.tabGroup;
          groupIndex = current->fields.groupIndex;
          v25 = (RoadmapBoardListViewItem_o *)sub_1D0F300(RoadmapBoardListViewItem_TypeInfo);
          RoadmapBoardListViewItem___ctor_33182204(v25, index, tabGroup, groupIndex, v16, PrefabById, v26);
          if ( !itemList )
            sub_1D0F30C(v27, v28);
          items = itemList->fields._items;
          v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++itemList->fields._version;
          if ( !items )
            sub_1D0F30C(v27, v28);
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v25,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v25;
            sub_1D0F058(v32 + 4, v25);
          }
        }
        else
        {
          v50 = this;
          v33 = RoadmapBoardListViewManager_TypeInfo;
          if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
            v33 = RoadmapBoardListViewManager_TypeInfo;
          }
          SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v33->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
          LODWORD(v55.fields._list) = v16;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
          v36 = System_String__Format_65604080(
                  (System_String_o *)StringLiteral_25732/*"{0}{1}"*/,
                  SPRITE_NAME_PREFIX_BOARD_SPRITE,
                  v35,
                  0);
          v38 = current->fields.tabGroup;
          v37 = current->fields.groupIndex;
          v39 = v36;
          v40 = (System_Collections_Generic_List_object__o *)v50->fields.itemList;
          v41 = (RoadmapBoardListViewItem_o *)sub_1D0F300(RoadmapBoardListViewItem_TypeInfo);
          RoadmapBoardListViewItem___ctor(v41, index, v38, v37, v16, (UIAtlas_o *)BoardAtlasById, v39, v42);
          if ( !v40 )
            sub_1D0F30C(v43, v44);
          v45 = v40->fields._items;
          v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++v40->fields._version;
          if ( !v45 )
            sub_1D0F30C(v43, v44);
          v47 = v40->fields._size;
          if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v40,
              (Il2CppObject *)v41,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &v45->obj.klass + v47;
            v40->fields._size = v47 + 1;
            v48[4] = (Il2CppClass *)v41;
            sub_1D0F058(v48 + 4, v41);
          }
          this = v50;
        }
        v10 = index + 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_49:
    sub_1D0F30C(Master_object, v7);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
  return v53;
}


UIAtlas_o *RoadmapBoardListViewManager__FindBoardAtlasById(
        RoadmapBoardListViewManager_o *this,
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  RoadmapBoardListViewManager_c *v6; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x19
  int32_t v16; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E71AAF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_1D0F0B4(&RoadmapBoardListViewManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25732/*"{0}{1}"*/);
    byte_4E71AAF = 1;
  }
  v6 = RoadmapBoardListViewManager_TypeInfo;
  memset(&v17, 0, sizeof(v17));
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v6 = RoadmapBoardListViewManager_TypeInfo;
  }
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v6->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v16 = boardId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v9 = System_String__Format_65604080((System_String_o *)StringLiteral_25732/*"{0}{1}"*/, SPRITE_NAME_PREFIX_BOARD_SPRITE, v8, 0);
  if ( !roadmapAtlasList )
    sub_1D0F30C(v9, v10);
  v11 = v9;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1D0F30C(v12, v13);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v17.fields._current, v11, 0) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


UnityEngine_GameObject_o *RoadmapBoardListViewManager__FindPrefabById(
        RoadmapBoardListViewManager_o *this,
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  RoadmapBoardListViewManager_c *v6; // x0
  Il2CppObject *PREFAB_NAME_PREFIX_BOARD_PREFAB; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E71AAE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&RoadmapBoardListViewManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_25732/*"{0}{1}"*/);
    byte_4E71AAE = 1;
  }
  v6 = RoadmapBoardListViewManager_TypeInfo;
  if ( !RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo);
    v6 = RoadmapBoardListViewManager_TypeInfo;
  }
  PREFAB_NAME_PREFIX_BOARD_PREFAB = (Il2CppObject *)v6->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB;
  v12 = boardId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v9 = System_String__Format_65604080((System_String_o *)StringLiteral_25732/*"{0}{1}"*/, PREFAB_NAME_PREFIX_BOARD_PREFAB, v8, 0);
  if ( !roadmapAssetData )
    sub_1D0F30C(v9, v10);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__52624444(
                                       roadmapAssetData,
                                       v9,
                                       (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
}


void RoadmapBoardListViewManager__OnClickListView(
        RoadmapBoardListViewManager_o *this,
        ListViewObject_o *clickedObject,
        const MethodInfo *method)
{
  ;
}