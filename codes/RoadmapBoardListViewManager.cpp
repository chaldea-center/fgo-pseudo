void RoadmapBoardListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A8E0 & 1) == 0 )
  {
    sub_2213A60(&RoadmapBoardListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_23937/*"prefab_roadmap_"*/);
    sub_2213A60(&StringLiteral_21541/*"img_roadmap_"*/);
    byte_596A8E0 = 1;
  }
  v7 = StringLiteral_23937/*"prefab_roadmap_"*/;
  RoadmapBoardListViewManager_TypeInfo->static_fields->PREFAB_NAME_PREFIX_BOARD_PREFAB = (struct System_String_o *)StringLiteral_23937/*"prefab_roadmap_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RoadmapBoardListViewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21541/*"img_roadmap_"*/;
  static_fields = RoadmapBoardListViewManager_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE = (struct System_String_o *)StringLiteral_21541/*"img_roadmap_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  __int64 v6; // x1
  __int64 v7; // x2
  RoadmapMaster_o *Master_object; // x0
  __int64 v9; // x1
  RoadmapMaster_o *v10; // x23
  System_Collections_Generic_List_object__o *SortedAllEntityList; // x20
  int32_t v12; // w19
  RoadmapEntity_o *current; // x26
  _BOOL8 IsDispAchieved; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  int32_t *p_achievedImageId; // x8
  int32_t v18; // w27
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *BoardAtlasById; // x28
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *PrefabById; // x29
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w9
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *itemList; // x28
  int32_t tabGroup; // w19
  int32_t groupIndex; // w20
  RoadmapBoardListViewItem_o *v35; // x26
  const MethodInfo *v36; // x6
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  RoadmapBoardListViewManager_c *v49; // x0
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x24
  Il2CppObject *v51; // x2
  System_String_o *v52; // x24
  int32_t v53; // w19
  int32_t v54; // w20
  System_Collections_Generic_List_object__o *v55; // x29
  RoadmapBoardListViewItem_o *v56; // x26
  const MethodInfo *v57; // x7
  __int64 v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  RoadmapBoardListViewManager_o *v71; // [xsp+0h] [xbp-C0h]
  RoadmapEntity_o *v72; // [xsp+8h] [xbp-B8h]
  int32_t index; // [xsp+10h] [xbp-B0h]
  int32_t v74; // [xsp+14h] [xbp-ACh]
  int32_t v76; // [xsp+24h] [xbp-9Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_596A8DD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RoadmapMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RoadmapBoardListViewItem_TypeInfo);
    sub_2213A60(&RoadmapBoardListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_26608/*"{0}{1}"*/);
    byte_596A8DD = 1;
  }
  memset(&v78, 0, sizeof(v78));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = (RoadmapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RoadmapMaster___);
  if ( !Master_object )
    goto LABEL_49;
  v10 = Master_object;
  SortedAllEntityList = (System_Collections_Generic_List_object__o *)RoadmapMaster__GetSortedAllEntityList(
                                                                       Master_object,
                                                                       0);
  Master_object = (RoadmapMaster_o *)RoadmapMaster__GetInProgressRoadmapEntity(v10, 0);
  v72 = (RoadmapEntity_o *)Master_object;
  if ( !SortedAllEntityList )
    goto LABEL_49;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    SortedAllEntityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RoadmapEntity__GetEnumerator__);
  v74 = 0;
  v12 = 0;
  v78 = v77;
  v77.fields._list = 0;
  *(_QWORD *)&v77.fields._index = &v78;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__MoveNext__) )
  {
    current = (RoadmapEntity_o *)v78.fields._current;
    if ( RoadmapMaster__IsDispBoard(v10, (RoadmapEntity_o *)v78.fields._current, 0) )
    {
      IsDispAchieved = RoadmapMaster__IsDispAchieved(v10, current, 0);
      if ( IsDispAchieved )
      {
        if ( !current )
          sub_2213CDC(IsDispAchieved, v15);
        p_achievedImageId = &current->fields.achievedImageId;
      }
      else
      {
        if ( !current )
          sub_2213CDC(IsDispAchieved, v15);
        p_achievedImageId = &current->fields.boardImageId;
      }
      v18 = *p_achievedImageId;
      BoardAtlasById = (UnityEngine_Object_o *)RoadmapBoardListViewManager__FindBoardAtlasById(
                                                 (RoadmapBoardListViewManager_o *)IsDispAchieved,
                                                 *p_achievedImageId,
                                                 roadmapAtlasList,
                                                 v16);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
      v22 = UnityEngine_Object__op_Equality(BoardAtlasById, 0, 0);
      if ( v22 )
        PrefabById = RoadmapBoardListViewManager__FindPrefabById(
                       (RoadmapBoardListViewManager_o *)v22,
                       v18,
                       roadmapAssetData,
                       v25);
      else
        PrefabById = 0;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      if ( !UnityEngine_Object__op_Equality(BoardAtlasById, 0, 0) )
        goto LABEL_26;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PrefabById, 0, 0) )
      {
LABEL_26:
        v29 = v74;
        if ( current == v72 )
          v29 = v12;
        v74 = v29;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
        if ( UnityEngine_Object__op_Equality(BoardAtlasById, 0, 0) )
        {
          index = v12;
          itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          tabGroup = current->fields.tabGroup;
          groupIndex = current->fields.groupIndex;
          v35 = (RoadmapBoardListViewItem_o *)sub_2213CCC(RoadmapBoardListViewItem_TypeInfo);
          RoadmapBoardListViewItem___ctor_38476848(v35, index, tabGroup, groupIndex, v18, PrefabById, v36);
          if ( !itemList
            || (items = itemList->fields._items,
                v46 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                ++itemList->fields._version,
                !items) )
          {
            sub_2213CDC(v37, v38);
          }
          size = itemList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              itemList,
              (Il2CppObject *)v35,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            itemList->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v35;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), (int32_t)v35, v39, v40, v41, v42, v43, v44);
          }
        }
        else
        {
          v71 = this;
          v49 = RoadmapBoardListViewManager_TypeInfo;
          if ( !*(&RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, v30, v31);
            v49 = RoadmapBoardListViewManager_TypeInfo;
          }
          SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)v49->static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
          v76 = v18;
          index = v12;
          v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v76);
          v52 = System_String__Format_75697880(
                  (System_String_o *)StringLiteral_26608/*"{0}{1}"*/,
                  SPRITE_NAME_PREFIX_BOARD_SPRITE,
                  v51,
                  0);
          v54 = current->fields.tabGroup;
          v53 = current->fields.groupIndex;
          v55 = (System_Collections_Generic_List_object__o *)v71->fields.itemList;
          v56 = (RoadmapBoardListViewItem_o *)sub_2213CCC(RoadmapBoardListViewItem_TypeInfo);
          RoadmapBoardListViewItem___ctor(v56, index, v54, v53, v18, (UIAtlas_o *)BoardAtlasById, v52, v57);
          if ( !v55
            || (v66 = v55->fields._items,
                v67 = Method_System_Collections_Generic_List_ListViewItem__Add__,
                ++v55->fields._version,
                !v66) )
          {
            sub_2213CDC(v58, v59);
          }
          v68 = v55->fields._size;
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)v56,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v55->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)v56;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 4), (int32_t)v56, v60, v61, v62, v63, v64, v65);
          }
          this = v71;
        }
        v12 = index + 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RoadmapEntity__Dispose__);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Master_object = (RoadmapMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_49:
    sub_2213CDC(Master_object, v9);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
  return v74;
}


// local variable allocation has failed, the output may be wrong!
UIAtlas_o *RoadmapBoardListViewManager__FindBoardAtlasById(
        RoadmapBoardListViewManager_o *this,
        int32_t boardId,
        System_Collections_Generic_List_UIAtlas__o *roadmapAtlasList,
        const MethodInfo *method)
{
  RoadmapBoardListViewManager_c *v6; // x0
  int v7; // w8
  struct RoadmapBoardListViewManager_StaticFields *static_fields; // x8
  Il2CppObject *SPRITE_NAME_PREFIX_BOARD_SPRITE; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x19
  _QWORD v18[2]; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A8DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    sub_2213A60(&RoadmapBoardListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_26608/*"{0}{1}"*/);
    byte_596A8DF = 1;
  }
  v6 = RoadmapBoardListViewManager_TypeInfo;
  v7 = *(&RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v19, 0, sizeof(v19));
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, *(_QWORD *)&boardId, roadmapAtlasList);
    v6 = RoadmapBoardListViewManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  LODWORD(v18[0]) = boardId;
  SPRITE_NAME_PREFIX_BOARD_SPRITE = (Il2CppObject *)static_fields->SPRITE_NAME_PREFIX_BOARD_SPRITE;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v18);
  v11 = System_String__Format_75697880((System_String_o *)StringLiteral_26608/*"{0}{1}"*/, SPRITE_NAME_PREFIX_BOARD_SPRITE, v10, 0);
  if ( !roadmapAtlasList )
    sub_2213CDC(v11, v12);
  v13 = v11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)roadmapAtlasList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v18[0] = 0;
  v18[1] = &v19;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v14 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_2213CDC(v14, v15);
    if ( UIAtlas__GetSprite((UIAtlas_o *)v19.fields._current, v13, 0) )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return (UIAtlas_o *)current;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *RoadmapBoardListViewManager__FindPrefabById(
        RoadmapBoardListViewManager_o *this,
        int32_t boardId,
        AssetData_o *roadmapAssetData,
        const MethodInfo *method)
{
  RoadmapBoardListViewManager_c *v6; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596A8DE & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&RoadmapBoardListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_26608/*"{0}{1}"*/);
    byte_596A8DE = 1;
  }
  v6 = RoadmapBoardListViewManager_TypeInfo;
  if ( !*(&RoadmapBoardListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RoadmapBoardListViewManager_TypeInfo, *(_QWORD *)&boardId, roadmapAssetData);
    v6 = RoadmapBoardListViewManager_TypeInfo;
  }
  static_fields = (Il2CppObject **)v6->static_fields;
  v13 = boardId;
  v8 = *static_fields;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
  v10 = System_String__Format_75697880((System_String_o *)StringLiteral_26608/*"{0}{1}"*/, v8, v9, 0);
  if ( !roadmapAssetData )
    sub_2213CDC(v10, v11);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                       roadmapAssetData,
                                       v10,
                                       (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
}


void RoadmapBoardListViewManager__OnClickListView(
        RoadmapBoardListViewManager_o *this,
        ListViewObject_o *clickedObject,
        const MethodInfo *method)
{
  ;
}