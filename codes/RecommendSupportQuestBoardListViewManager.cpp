void RecommendSupportQuestBoardListViewManager___ctor(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.slideOutPosX = 784.0;
  *(_QWORD *)&this->fields.warArrangementPitchY = 0xFFFFFF69FFFFFF8ALL;
  *(_QWORD *)&this->fields.intoTime = 0x3E8000003F000000LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void RecommendSupportQuestBoardListViewManager__CreateChapterList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfos,
        int32_t parentFolderWarId,
        int32_t focusWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v10; // x20
  void *Value; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  RecommendSupportQuestBoardListViewManager___c_c *v14; // x0
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__25_0; // x24
  Il2CppObject *v17; // x25
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  System_Nullable_int__o v27; // x0
  int32_t id; // w1
  __int64 v29; // x2
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v30; // x8
  int32_t PrioredParentId; // w1
  System_Nullable_int__o v32; // x0
  int v33; // w9
  Il2CppObject *Master_object; // x24
  System_Nullable_int__o v35; // x0
  int32_t v36; // w1
  System_Nullable_int__o v37; // x0
  int32_t v38; // w24
  __int64 v39; // x8
  bool v40; // w27
  __int64 v41; // x8
  int v42; // w8
  bool v43; // zf
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v45; // x29
  Il2CppObject *Item; // x28
  RecommendSupportQuestBoardListViewItem_o *v47; // x26
  const MethodInfo *v48; // x7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  int32_t v59; // w1
  const MethodInfo *v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  UnityEngine_Object_o *scrollBar; // x23
  struct UIScrollBar_o *v64; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v65; // x23
  System_Predicate_object__o *v66; // x24
  Il2CppObject *v67; // x0
  int32_t size; // [xsp+1Ch] [xbp-84h]
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v70; // [xsp+20h] [xbp-80h] BYREF
  int32_t kind; // [xsp+2Ch] [xbp-74h] BYREF
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v72; // [xsp+30h] [xbp-70h] BYREF
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v73; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_596C4C9 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_ListViewItem__TypeInfo);
    sub_2213A60(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__25_0__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0__CreateChapterList_b__1__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0_TypeInfo);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_15802/*"UpdateScrollPosition"*/);
    byte_596C4C9 = 1;
  }
  v72 = 0;
  v73 = 0;
  kind = 0;
  v10 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_67;
  *(_DWORD *)(v10 + 16) = focusWarId;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.warArrangementPitchY, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( folderInfos )
  {
    size = folderInfos->fields._size;
    if ( size >= 2 )
    {
      v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v12, v13);
        v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__25_0 = (System_Comparison_T__o *)static_fields->__9__25_0;
      if ( !_9__25_0 )
      {
        if ( !*(&v14->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v14, v12, v13);
          static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__25_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__25_0,
          v17,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__25_0__,
          0);
        v18 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v18->__9__25_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__25_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v18->__9__25_0,
          (int32_t)_9__25_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      System_Collections_Generic_List_object___Sort_71849708(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__25_0,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    }
  }
  else
  {
    size = 0;
  }
  settingQuestInfo = this->fields.settingQuestInfo;
  if ( settingQuestInfo )
  {
    warEntity = settingQuestInfo->fields.warEntity;
    if ( !warEntity )
      goto LABEL_67;
    v27 = (System_Nullable_int__o)&v70;
    id = warEntity->fields.id;
    v70 = 0;
    System_Nullable_int____ctor(v27, id, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    v30 = this->fields.settingQuestInfo;
    v73 = v70;
    if ( v30 )
    {
      Value = v30->fields.warEntity;
      if ( !Value )
        goto LABEL_67;
      PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)Value, 0);
      v32 = (System_Nullable_int__o)&v70;
      v70 = 0;
      System_Nullable_int____ctor(v32, PrioredParentId, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
      v30 = v70;
      v33 = (unsigned __int8)v73;
    }
    else
    {
      v33 = (unsigned __int8)v70;
    }
    v72 = v30;
    if ( v33 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v29);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarAddMaster___);
      v35 = (System_Nullable_int__o)&v73;
      Value = (void *)System_Nullable_int___get_Value(
                        v35,
                        (const MethodInfo_45E4324 *)Method_System_Nullable_int__get_Value__);
      if ( !Master_object )
        goto LABEL_67;
      Value = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 25, (int32_t)Value, 0);
      if ( Value )
      {
        v36 = *((_DWORD *)Value + 7);
        v37 = (System_Nullable_int__o)&v72;
        System_Nullable_int____ctor(v37, v36, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
      }
    }
  }
  else
  {
    v72 = 0;
    v73 = 0;
  }
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v38 = 0;
      while ( 1 )
      {
        Value = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)folderInfos,
                  v38,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Value )
          break;
        v39 = *((_QWORD *)Value + 2);
        if ( !v39 )
          break;
        if ( (_BYTE)v73 && *(_DWORD *)(v39 + 16) == HIDWORD(v73) )
        {
          v40 = 1;
        }
        else
        {
          Value = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)folderInfos,
                    v38,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Value )
            break;
          v41 = *((_QWORD *)Value + 2);
          if ( !v41 )
            break;
          v42 = *(_DWORD *)(v41 + 16);
          if ( (_BYTE)v72 )
            v43 = v42 == HIDWORD(v72);
          else
            v43 = 0;
          v40 = v43;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v45 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)folderInfos,
                 v38,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v47 = (RecommendSupportQuestBoardListViewItem_o *)sub_2213CCC(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v47,
          v38,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)Item,
          0,
          v40,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v48);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v57 = itemList->fields._size;
        if ( (unsigned int)v57 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v47,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &items->obj.klass + v57;
          itemList->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v47;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 4), (int32_t)v47, v49, v50, v51, v52, v53, v54);
        }
        ++v38;
        this = v45;
        if ( size == v38 )
          goto LABEL_49;
      }
    }
LABEL_67:
    sub_2213CDC(Value, v12);
  }
LABEL_49:
  Value = this->fields.titleInfo;
  if ( !Value )
    goto LABEL_67;
  Value = (void *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Value, parentFolderWarId, &kind, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_67;
  if ( ((unsigned __int8)Value & 1) != 0 )
    v59 = kind;
  else
    v59 = 95;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v59, 0, 0, 0);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v60);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61, v62);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Value = this->fields.scrollBar;
    if ( !Value )
      goto LABEL_67;
    Value = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0);
    if ( !Value )
      goto LABEL_67;
    Value = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Value, 0);
    if ( ((unsigned __int8)Value & 1) != 0 )
    {
      v64 = this->fields.scrollBar;
      if ( !v64 )
        goto LABEL_67;
      if ( v64->fields.mSize <= 0.98 )
      {
        v65 = this->fields.itemList;
        v66 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v66,
          (Il2CppObject *)v10,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0__CreateChapterList_b__1__,
          0);
        if ( !v65 )
          goto LABEL_67;
        v67 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v65,
                (System_Predicate_T__o *)v66,
                (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v67 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v67[1].klass), 0);
      }
    }
  }
  Value = this->fields.selectMenuBackBtn;
  if ( !Value )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, parentFolderWarId != 0, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15802/*"UpdateScrollPosition"*/, 0.0, 0);
  ActionExtensions__Call(callBack, 0);
}


void RecommendSupportQuestBoardListViewManager__CreateQuestList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questInfos,
        int32_t parentFolderWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int32_t questArrangementPitchY; // s0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t size; // w21
  System_Collections_Generic_List_TSource__o *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x23
  RecommendSupportQuestBoardListViewManager___c_c *v13; // x0
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__26_0; // x23
  Il2CppObject *v16; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  RecommendSupportQuestBoardListViewManager___c_c *v27; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v29; // x9
  System_Func_object__int__o *_9__26_1; // x23
  Il2CppObject *v31; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  RecommendSupportQuestBoardListViewManager___c_c *v42; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v44; // x9
  System_Func_object__int__o *_9__26_2; // x23
  Il2CppObject *v46; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  int32_t v55; // w22
  MapMaster_o *Instance; // x0
  __int64 v57; // x1
  RecommendSupportData_o *list; // x24
  __int64 v59; // x8
  int32_t v60; // w25
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v63; // w26
  RecommendSupportQuestBoardListViewManager_o *v64; // x27
  Il2CppObject *Item; // x0
  int32_t v66; // w19
  System_String_o *v67; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v68; // x29
  RecommendSupportQuestBoardListViewItem_o *v69; // x25
  const MethodInfo *v70; // x7
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  MapEntity_array *v81; // x22
  MapEntity_o *v82; // x23
  const MethodInfo *v83; // x2
  int32_t mapImageW; // w1
  struct TitleInfoControl_o *titleInfo; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v89; // x2
  struct UIScrollBar_o *v90; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v91; // x21
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v92; // x8
  System_Predicate_object__o *_9__26_3; // x22
  Il2CppObject *v94; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  Il2CppObject *v102; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  int32_t settingIndex[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596C4CA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MapMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_ListViewItem__TypeInfo);
    sub_2213A60(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_0__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_1__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_2__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_3__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_15802/*"UpdateScrollPosition"*/);
    byte_596C4CA = 1;
  }
  questArrangementPitchY = this->fields.questArrangementPitchY;
  svtName = 0;
  *(_QWORD *)settingIndex = 0;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)questArrangementPitchY, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    v11 = System_Linq_Enumerable__ToList_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
            (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    if ( size >= 3 )
    {
      v13 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v8, v9);
        v13 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      static_fields = v13->static_fields;
      _9__26_0 = (System_Func_object__int__o *)static_fields->__9__26_0;
      if ( !_9__26_0 )
      {
        if ( !*(&v13->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v13, v8, v9);
          static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__26_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__26_0,
          v16,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_0__,
          0);
        v17 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v17->__9__26_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__26_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v17->__9__26_0,
          (int32_t)_9__26_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      v24 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__26_0,
              (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v27 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v28 = v24;
      if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v25, v26);
        v27 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      v29 = v27->static_fields;
      _9__26_1 = (System_Func_object__int__o *)v29->__9__26_1;
      if ( !_9__26_1 )
      {
        if ( !*(&v27->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v27, v25, v26);
          v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)v29->__9;
        _9__26_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__26_1,
          v31,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_1__,
          0);
        v32 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v32->__9__26_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__26_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v32->__9__26_1,
          (int32_t)_9__26_1,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      v39 = System_Linq_Enumerable__ThenBy_object__int_(
              v28,
              (System_Func_TSource__TKey__o *)_9__26_1,
              (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v42 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v43 = v39;
      if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v40, v41);
        v42 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      v44 = v42->static_fields;
      _9__26_2 = (System_Func_object__int__o *)v44->__9__26_2;
      if ( !_9__26_2 )
      {
        if ( !*(&v42->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v42, v40, v41);
          v44 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        }
        v46 = (Il2CppObject *)v44->__9;
        _9__26_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__26_2,
          v46,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_2__,
          0);
        v47 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v47->__9__26_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__26_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v47->__9__26_2,
          (int32_t)_9__26_2,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
      }
      v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v43,
                                                                   (System_Func_TSource__TKey__o *)_9__26_2,
                                                                   (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v12 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v54,
                                                           (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v12 = (System_Collections_Generic_List_object__o *)v11;
      if ( size < 1 )
        goto LABEL_39;
    }
    v55 = 0;
    do
    {
      Instance = (MapMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      if ( !v12 )
        goto LABEL_76;
      list = (RecommendSupportData_o *)Instance[1].fields.list;
      Instance = (MapMaster_o *)System_Collections_Generic_List_object___get_Item(
                                  v12,
                                  v55,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_76;
      v59 = *(_QWORD *)&Instance->fields._MasterKind_k__BackingField;
      if ( !v59 )
        goto LABEL_76;
      v60 = *(_DWORD *)(v59 + 16);
      Instance = (MapMaster_o *)System_Collections_Generic_List_object___get_Item(
                                  v12,
                                  v55,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_76;
      if ( !list )
        goto LABEL_76;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         list,
                         v60,
                         (int32_t)Instance->fields.list,
                         settingIndex,
                         &svtName,
                         0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v63 = IsQuestSetting;
      v64 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               v55,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v66 = settingIndex[0];
      v67 = svtName;
      v68 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v69 = (RecommendSupportQuestBoardListViewItem_o *)sub_2213CCC(RecommendSupportQuestBoardListViewItem_TypeInfo);
      RecommendSupportQuestBoardListViewItem___ctor(v69, v55, 0, v68, v63, v66, v67, v70);
      if ( !itemList )
        goto LABEL_76;
      items = itemList->fields._items;
      v78 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_76;
      v79 = itemList->fields._size;
      this = v64;
      if ( (unsigned int)v79 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v69,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + v79;
        itemList->fields._size = v79 + 1;
        v80[4] = (Il2CppClass *)v69;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v80 + 4), (int32_t)v69, v71, v72, v73, v74, v75, v76);
      }
    }
    while ( size != ++v55 );
  }
LABEL_39:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  Instance = (MapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_76;
  v81 = MapMaster__getList(Instance, parentFolderWarId, 0);
  Instance = (MapMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Instance )
    goto LABEL_76;
  Instance = (MapMaster_o *)WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 23, parentFolderWarId, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_76;
  v82 = (MapEntity_o *)Instance;
  if ( TitleInfoControl__TryGetTerminalTitleKind(this->fields.titleInfo, parentFolderWarId, &settingIndex[1], 0) )
  {
    Instance = (MapMaster_o *)this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_76;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Instance, settingIndex[1], 0, 0, 0);
    goto LABEL_57;
  }
  if ( v82 )
  {
    Instance = (MapMaster_o *)this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_76;
    mapImageW = v82->fields.mapImageW;
LABEL_56:
    TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)Instance, mapImageW, 0, 1, 0, 0);
    goto LABEL_57;
  }
  Instance = (MapMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v81, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v81 )
      goto LABEL_76;
    if ( !LODWORD(v81->max_length) )
      sub_2213CE4(Instance);
    Instance = (MapMaster_o *)v81->m_Items[0];
    if ( !Instance )
      goto LABEL_76;
    titleInfo = this->fields.titleInfo;
    Instance = (MapMaster_o *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0);
    if ( !titleInfo )
      goto LABEL_76;
    mapImageW = (int)Instance;
    Instance = (MapMaster_o *)titleInfo;
    goto LABEL_56;
  }
LABEL_57:
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v83);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86, v87);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Instance = (MapMaster_o *)this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_76;
    Instance = (MapMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_76;
    Instance = (MapMaster_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v90 = this->fields.scrollBar;
      if ( !v90 )
        goto LABEL_76;
      if ( v90->fields.mSize <= 0.98 )
      {
        v91 = this->fields.itemList;
        Instance = (MapMaster_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v57, v89);
          Instance = (MapMaster_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v92 = (struct RecommendSupportQuestBoardListViewManager___c_StaticFields *)Instance[2].fields.list;
        _9__26_3 = (System_Predicate_object__o *)v92->__9__26_3;
        if ( !_9__26_3 )
        {
          if ( !HIDWORD(Instance[3].monitor) )
          {
            j_il2cpp_runtime_class_init_0(Instance, v57, v89);
            v92 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          }
          v94 = (Il2CppObject *)v92->__9;
          _9__26_3 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            _9__26_3,
            v94,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__26_3__,
            0);
          v95 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v95->__9__26_3 = (struct System_Predicate_ListViewItem__o *)_9__26_3;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v95->__9__26_3,
            (int32_t)_9__26_3,
            v96,
            v97,
            v98,
            v99,
            v100,
            v101);
        }
        if ( v91 )
        {
          v102 = System_Collections_Generic_List_object___Find(
                   (System_Collections_Generic_List_object__o *)v91,
                   (System_Predicate_T__o *)_9__26_3,
                   (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v102 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v102[1].klass), 0);
          goto LABEL_74;
        }
LABEL_76:
        sub_2213CDC(Instance, v57);
      }
    }
  }
LABEL_74:
  Instance = (MapMaster_o *)this->fields.selectMenuBackBtn;
  if ( !Instance )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15802/*"UpdateScrollPosition"*/, 0.0, 0);
  ActionExtensions__Call(callBack, 0);
}


void RecommendSupportQuestBoardListViewManager__DispFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo,
        int32_t warId,
        int32_t focusWarId,
        const MethodInfo *method)
{
  __int64 v9; // x20
  TitleInfoControl_o *titleInfo; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  SlideFadeObject_o *slideComponent; // x21
  const MethodInfo *v25; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v28; // s9
  System_Action_o *v29; // x19

  if ( (byte_596C4CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0__DispFolderList_b__0__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_TypeInfo);
    byte_596C4CC = 1;
  }
  v9 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_7;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = folderInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)folderInfo, v18, v19, v20, v21, v22, v23);
  titleInfo = this->fields.titleInfo;
  *(_DWORD *)(v9 + 32) = warId;
  *(_DWORD *)(v9 + 36) = focusWarId;
  this->fields.state = 1;
  if ( !titleInfo
    || (TitleInfoControl__SetTouchEnable(titleInfo, 0, 0),
        slideComponent = this->fields.slideComponent,
        OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v25),
        extiTime = this->fields.extiTime,
        v28 = OUT_POS_OFS_X,
        v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v9,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0__DispFolderList_b__0__,
          0),
        !slideComponent) )
  {
LABEL_7:
    sub_2213CDC(titleInfo, v11);
  }
  SlideFadeObject__SlideOut_42907896(slideComponent, v28, extiTime, 0.0, v29, 0);
}


void RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  BalanceConfig_c *v13; // x0
  int32_t RecommendSupportMemberMax; // w20
  System_Collections_Generic_List_object__o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  int32_t i; // w26
  BalanceConfig_c *v25; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x20
  System_Collections_Generic_Dictionary_int__int__o *v27; // x21
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  const MethodInfo *v39; // x1

  if ( (byte_596C4C3 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
    sub_2213A60(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
    byte_596C4C3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.slideComponent,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v12);
    v13 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v13->static_fields->RecommendSupportMemberMax;
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v15,
    RecommendSupportMemberMax,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectWarId, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  for ( i = 0; ; ++i )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22, v23);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( i >= v25->static_fields->RecommendSupportMemberMax )
      break;
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    v27 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v27,
      (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( !selectWarId )
      goto LABEL_17;
    items = selectWarId->fields._items;
    v36 = Method_System_Collections_Generic_List_Dictionary_int__int___Add__;
    ++selectWarId->fields._version;
    if ( !items )
      goto LABEL_17;
    size = selectWarId->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectWarId,
        (Il2CppObject *)v27,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v27, v29, v30, v31, v32, v33, v34);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_2213CDC(questSelectDialog, v22);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v22);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v39);
}


void RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  void *titleInfo; // x0
  const MethodInfo *v6; // x1
  RecommendSupportData_o *v7; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  RecommendSupportQuestBoardListViewManager_o *v17; // x0
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_T__o *v19; // x21
  System_Func_object__bool__o *v20; // x22
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v21; // x21
  System_Func_object__bool__o *v22; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v24; // x0
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  __int64 v27; // x20
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__c *v30; // x0
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v31; // x21
  System_Func_object__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  const MethodInfo_47A29F8 *v34; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v39; // x0
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__24_3; // x21
  Il2CppObject *v42; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v51; // x0
  const MethodInfo *v52; // x5
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596C4C8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__24_3__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__InitOpen_b__0__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__InitOpen_b__1__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__InitOpen_b__2__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__InitOpen_b__4__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_596C4C8 = 1;
  }
  value = 0;
  v3 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_31;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0, 1, 0, 95, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_31;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 1, 0);
  this->fields.state = 0;
  RecommendSupportQuestBoardListViewManager__RefreshQuestAndFolderList(this, v6);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_31;
  v7 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v3 || !v7 )
    goto LABEL_31;
  RecommendSupportData__TryGetQuest(v7, *((_DWORD *)titleInfo + 30), (int32_t *)(v3 + 16), (int32_t *)(v3 + 20), 0);
  recommendQuestList = this->fields.recommendQuestList;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__InitOpen_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.settingQuestInfo,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( this->fields.settingQuestInfo )
    goto LABEL_15;
  if ( RecommendSupportQuestBoardListViewManager__TryGetWarId(v17, *(_DWORD *)(v3 + 16), (int32_t *)(v3 + 24), v18) )
  {
    v19 = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestList;
    v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__InitOpen_b__1__,
      0);
    if ( BasicHelper__Any_object_(
           v19,
           (System_Func_T__bool__o *)v20,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___) )
    {
      v21 = this->fields.recommendQuestList;
      v22 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v3,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__InitOpen_b__2__,
        0);
      v23 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v21,
              (System_Func_TSource__bool__o *)v22,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v24 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v23, (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v26 = *(_DWORD *)(v3 + 24);
LABEL_19:
      RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v24, v26, 0, v25);
      goto LABEL_20;
    }
  }
  if ( this->fields.settingQuestInfo )
  {
LABEL_15:
    v27 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0);
    settingQuestInfo = this->fields.settingQuestInfo;
    if ( settingQuestInfo )
    {
      warEntity = settingQuestInfo->fields.warEntity;
      if ( warEntity )
      {
        if ( v27 )
        {
          v30 = System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo;
          v31 = this->fields.recommendQuestList;
          *(_DWORD *)(v27 + 16) = warEntity->fields.id;
          v32 = (System_Func_object__bool__o *)sub_2213CCC(v30);
          System_Func_object__bool____ctor(
            v32,
            (Il2CppObject *)v27,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__InitOpen_b__4__,
            0);
          v33 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                  (System_Func_TSource__bool__o *)v32,
                  (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v24 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v33, (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v26 = *(_DWORD *)(v27 + 16);
          goto LABEL_19;
        }
      }
    }
LABEL_31:
    sub_2213CDC(titleInfo, v4);
  }
  v34 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  this->fields.currentFolderWarId = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance(v34);
  if ( !titleInfo )
    goto LABEL_31;
  if ( !selectWarId )
    goto LABEL_31;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_31;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v39 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v36, v37);
    v39 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__24_3 = (System_Func_object__bool__o *)static_fields->__9__24_3;
  if ( !_9__24_3 )
  {
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v36, v37);
      static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__24_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__24_3,
      v42,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__24_3__,
      0);
    v43 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    v43->__9__24_3 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__24_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__24_3, (int32_t)_9__24_3, v44, v45, v46, v47, v48, v49);
  }
  v50 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__24_3,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v51 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v50, (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v51, 0, value, 0, v52);
LABEL_20:
  EventTutorialMaster__CheckTutorial(0, 113, 0, 0, 0, 0, 0, 0);
}


void RecommendSupportQuestBoardListViewManager__InitQuestFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Master_object; // x25
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x23
  CommonReleaseMaster_o *IsOpenByTime; // x0
  __int64 dispCommonReleaseId; // x1
  RecommendSupportQuestEntity_array *List; // x26
  int max_length; // w8
  unsigned int v28; // w23
  RecommendSupportQuestEntity_o *v29; // x28
  __int64 v30; // x27
  __int64 v31; // x2
  int32_t questId; // w24
  System_String_o *questMessage; // x24
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v34; // x28
  const MethodInfo *v35; // x6
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 MasterName_k__BackingField_low; // x10
  Il2CppClass **v45; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x28
  System_Func_object__bool__o *v47; // x24
  int32_t PrioredParentId; // w0
  __int64 v49; // x8
  int32_t v50; // w24
  WarAddEntity_o *PrioredEntity; // x0
  System_Collections_Generic_List_object__o *v52; // x24
  __int64 v53; // x28
  __int64 v54; // x27
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  _BOOL8 v71; // x0
  __int64 v72; // x1
  System_Collections_Generic_List_object__o *v73; // x21
  Il2CppObject *v74; // x23
  __int64 v75; // x22
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x0
  __int64 v83; // x1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  const MethodInfo *v94; // x1
  int32_t priority; // [xsp+0h] [xbp-E0h]
  int32_t questPhase; // [xsp+4h] [xbp-DCh]
  WarEntity_o *v97; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v98; // [xsp+10h] [xbp-D0h]
  int32_t v99; // [xsp+10h] [xbp-D0h]
  WarAddMaster_o *v100; // [xsp+18h] [xbp-C8h]
  CommonReleaseMaster_o *v101; // [xsp+20h] [xbp-C0h]
  System_Collections_Generic_HashSet_int__o *v102; // [xsp+28h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v103; // [xsp+30h] [xbp-B0h] BYREF
  Il2CppObject *v104; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v105; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *v106; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_596C4C4 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_2213A60(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
    sub_2213A60(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
    byte_596C4C4 = 1;
  }
  entity = 0;
  v106 = 0;
  v104 = 0;
  memset(&v105, 0, sizeof(v105));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.recommendQuestFolderList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.recommendQuestList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v20 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  v21 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarAddMaster___);
  IsOpenByTime = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v101 = IsOpenByTime;
  if ( !Master_object )
    goto LABEL_61;
  v100 = (WarAddMaster_o *)v23;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0);
  v102 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v102,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_61;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    do
    {
      if ( v28 >= max_length )
        sub_2213CE4(IsOpenByTime);
      v29 = List->m_Items[v28];
      v30 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v30, 0);
      if ( !v29 )
        goto LABEL_61;
      if ( !v29->fields.baseQuestId )
      {
        if ( !v20 )
          goto LABEL_61;
        IsOpenByTime = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                                  &entity,
                                                  v29->fields.questId,
                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpenByTime & 1) != 0 )
        {
          if ( !entity || !v21 )
            goto LABEL_61;
          IsOpenByTime = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                                                    &v106,
                                                    (int32_t)entity[3].klass,
                                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpenByTime & 1) != 0 )
          {
            if ( !v30 || !v106 || !v22 )
              goto LABEL_61;
            IsOpenByTime = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                                                      (Il2CppObject **)(v30 + 16),
                                                      HIDWORD(v106[1].klass),
                                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpenByTime & 1) != 0 )
            {
              IsOpenByTime = (CommonReleaseMaster_o *)entity;
              if ( !entity )
                goto LABEL_61;
              IsOpenByTime = (CommonReleaseMaster_o *)QuestEntity__IsOpenByTime((QuestEntity_o *)entity, 0, 0);
              if ( ((unsigned __int8)IsOpenByTime & 1) != 0 )
              {
                dispCommonReleaseId = (unsigned int)v29->fields.dispCommonReleaseId;
                if ( (_DWORD)dispCommonReleaseId )
                {
                  IsOpenByTime = v101;
                  if ( !v101 )
                    goto LABEL_61;
                  IsOpenByTime = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(
                                                            v101,
                                                            dispCommonReleaseId,
                                                            0,
                                                            0,
                                                            0);
                  if ( ((unsigned __int8)IsOpenByTime & 1) == 0 )
                    goto LABEL_49;
                }
                else
                {
                  questId = v29->fields.questId;
                  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, dispCommonReleaseId, v31);
                  IsOpenByTime = (CommonReleaseMaster_o *)CondType__IsQuestClear_47284152(questId, -1, 0, 0);
                  if ( ((unsigned __int8)IsOpenByTime & 1) == 0 )
                    goto LABEL_49;
                }
                questMessage = v29->fields.questMessage;
                v97 = *(WarEntity_o **)(v30 + 16);
                v98 = entity;
                priority = v29->fields.priority;
                questPhase = v29->fields.questPhase;
                v34 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_2213CCC(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
                RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                  v34,
                  (QuestEntity_o *)v98,
                  v97,
                  questMessage,
                  questPhase,
                  priority,
                  v35);
                IsOpenByTime = (CommonReleaseMaster_o *)this->fields.recommendQuestList;
                if ( !IsOpenByTime )
                  goto LABEL_61;
                v42 = *(struct System_Object_array **)&IsOpenByTime->fields._MasterKind_k__BackingField;
                v43 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
                ++HIDWORD(IsOpenByTime->fields._MasterName_k__BackingField);
                if ( !v42 )
                  goto LABEL_61;
                MasterName_k__BackingField_low = SLODWORD(IsOpenByTime->fields._MasterName_k__BackingField);
                if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v42->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)IsOpenByTime,
                    (Il2CppObject *)v34,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                }
                else
                {
                  v45 = &v42->obj.klass + MasterName_k__BackingField_low;
                  LODWORD(IsOpenByTime->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                  v45[4] = (Il2CppClass *)v34;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)v34, v36, v37, v38, v39, v40, v41);
                }
                recommendQuestFolderList = this->fields.recommendQuestFolderList;
                v47 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v47,
                  (Il2CppObject *)v30,
                  Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                  0);
                IsOpenByTime = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                          (System_Func_TSource__bool__o *)v47,
                                                          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
                if ( !IsOpenByTime )
                {
                  IsOpenByTime = *(CommonReleaseMaster_o **)(v30 + 16);
                  if ( !IsOpenByTime )
                    goto LABEL_61;
                  PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpenByTime, 0);
                  v49 = *(_QWORD *)(v30 + 16);
                  v50 = PrioredParentId;
                  IsOpenByTime = (CommonReleaseMaster_o *)v100;
                  if ( !v49 || !v100 )
                    goto LABEL_61;
                  PrioredEntity = WarAddMaster__GetPrioredEntity(v100, 25, *(_DWORD *)(v49 + 16), 0);
                  v99 = PrioredEntity ? PrioredEntity->fields.overwriteId : v50;
                  v52 = (System_Collections_Generic_List_object__o *)this->fields.recommendQuestFolderList;
                  v53 = *(_QWORD *)(v30 + 16);
                  v54 = sub_2213CCC(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v54, 0);
                  *(_QWORD *)(v54 + 16) = v53;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 16), v53, v55, v56, v57, v58, v59, v60);
                  *(_BYTE *)(v54 + 40) = 1;
                  *(_DWORD *)(v54 + 24) = v99;
                  if ( !v52 )
                    goto LABEL_61;
                  items = v52->fields._items;
                  v68 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                  ++v52->fields._version;
                  if ( !items )
                    goto LABEL_61;
                  size = v52->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v52,
                      (Il2CppObject *)v54,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v70 = &items->obj.klass + size;
                    v52->fields._size = size + 1;
                    v70[4] = (Il2CppClass *)v54;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 4), v54, v61, v62, v63, v64, v65, v66);
                  }
                  IsOpenByTime = (CommonReleaseMaster_o *)v102;
                  if ( !v102 )
                    goto LABEL_61;
                  IsOpenByTime = (CommonReleaseMaster_o *)System_Collections_Generic_HashSet_int___Add(
                                                            v102,
                                                            v99,
                                                            (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
              }
            }
          }
        }
      }
LABEL_49:
      max_length = List->max_length;
    }
    while ( (int)++v28 < max_length );
  }
  if ( !v102 )
LABEL_61:
    sub_2213CDC(IsOpenByTime, dispCommonReleaseId);
  System_Collections_Generic_HashSet_int___Remove(
    v102,
    0,
    (const MethodInfo_42B46E8 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v103,
    v102,
    (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v105 = v103;
  v103.fields._set = 0;
  *(_QWORD *)&v103.fields._index = &v105;
  while ( 1 )
  {
    v71 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v105,
            (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v71 )
      break;
    if ( !v22 )
      sub_2213CDC(v71, v72);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
           &v104,
           (int32_t)v105.fields._current,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v73 = (System_Collections_Generic_List_object__o *)this->fields.recommendQuestFolderList;
      v74 = v104;
      v75 = sub_2213CCC(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v75, 0);
      *(_QWORD *)(v75 + 16) = v74;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 16), (int32_t)v74, v76, v77, v78, v79, v80, v81);
      *(_DWORD *)(v75 + 24) = 0;
      *(_BYTE *)(v75 + 40) = 0;
      if ( !v73
        || (v90 = v73->fields._items,
            v91 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__,
            ++v73->fields._version,
            !v90) )
      {
        sub_2213CDC(v82, v83);
      }
      v92 = v73->fields._size;
      if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v73,
          (Il2CppObject *)v75,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = &v90->obj.klass + v92;
        v73->fields._size = v92 + 1;
        v93[4] = (Il2CppClass *)v75;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v93 + 4), v75, v84, v85, v86, v87, v88, v89);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v105,
    (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  RecommendSupportQuestBoardListViewManager__RefreshFolderClosedAt(this, v94);
}


void RecommendSupportQuestBoardListViewManager__OnClickListView(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *IsExpired; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  __int64 v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x21
  System_Collections_Generic_List_T__o *v33; // x23
  System_Func_object__bool__o *v34; // x24
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x22
  System_Func_object__bool__o *v36; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v38; // x20
  System_Collections_Generic_List_object__o *selectWarId; // x22
  __int64 v40; // x8
  const MethodInfo *v41; // x4
  __int64 v42; // x8
  __int64 v43; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x1
  __int64 v59; // x8
  RecommendSupportQuestBoardListViewItem_o *v60; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  const MethodInfo_47A29F8 *v62; // x0
  int32_t parentWarId; // w23
  int v64; // w24
  System_Action_o *v65; // x22
  const MethodInfo *v66; // x4
  __int64 v67; // x21
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  Il2CppObject *v74; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x22
  System_Func_object__bool__o *v76; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_List_TSource__o *v78; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v86; // x1
  float OUT_POS_OFS_X; // s9
  float extiTime; // s8
  System_Action_o *v89; // x19
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596C4CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__0__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__1__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__3__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1__OnClickListView_b__2__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2__OnClickListView_b__4__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2_TypeInfo);
    byte_596C4CB = 1;
  }
  value = 0;
  v5 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_46;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v7);
  *(_QWORD *)(v5 + 24) = Item;
  v15 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_46;
  v22 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( !*(_BYTE *)(*(_QWORD *)(v5 + 24) + 136LL) )
  {
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_2213A78(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
    v24 = (System_Reflection_MethodBase_o *)sub_2213A44(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
    if ( *(_QWORD *)v15 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)v15 + 120LL);
      *(_QWORD *)(v5 + 16) = v31;
      v32 = v5 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), v31, v25, v26, v27, v28, v29, v30);
      IsExpired = *(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o **)(v5 + 16);
      if ( IsExpired )
      {
        IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_IsExpired(
                                                                                        IsExpired,
                                                                                        v7);
        if ( ((unsigned __int8)IsExpired & 1) != 0 )
          goto LABEL_18;
      }
      if ( *(_QWORD *)v15 )
      {
        IsExpired = *(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o **)(*(_QWORD *)v15 + 128LL);
        if ( IsExpired )
        {
          IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_IsExpired(
                                                                                          (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)IsExpired,
                                                                                          v7);
          if ( ((unsigned __int8)IsExpired & 1) != 0 )
          {
LABEL_18:
            RecommendSupportQuestBoardListViewManager__OpenExpiredDialog(
              (RecommendSupportQuestBoardListViewManager_o *)IsExpired,
              v7);
            return;
          }
        }
        if ( *(_QWORD *)v32
          && (v33 = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList,
              v34 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo),
              System_Func_object__bool____ctor(
                v34,
                (Il2CppObject *)v5,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__0__,
                0),
              IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)BasicHelper__Any_object_(
                                                                                              v33,
                                                                                              (System_Func_T__bool__o *)v34,
                                                                                              (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___),
              ((unsigned __int8)IsExpired & 1) != 0) )
        {
          recommendQuestFolderList = this->fields.recommendQuestFolderList;
          v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v36,
            (Il2CppObject *)v5,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__1__,
            0);
          v37 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                  (System_Func_TSource__bool__o *)v36,
                  (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
          v38 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v37, (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
          selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
          IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
          if ( IsExpired )
          {
            if ( selectWarId )
            {
              IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                                                              selectWarId,
                                                                                              IsExpired[2].fields.parentWarId,
                                                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
              if ( *(_QWORD *)v32 )
              {
                v40 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
                if ( v40 )
                {
                  if ( IsExpired )
                  {
                    IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                                                                                    (System_Collections_Generic_Dictionary_int__int__o *)IsExpired,
                                                                                                    *(_DWORD *)(v40 + 16),
                                                                                                    &value,
                                                                                                    (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
                    if ( *(_QWORD *)v32 )
                    {
                      v42 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
                      if ( v42 )
                      {
                        RecommendSupportQuestBoardListViewManager__DispFolderList(
                          this,
                          v38,
                          *(_DWORD *)(v42 + 16),
                          value,
                          v41);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( *(_QWORD *)v15 )
        {
          if ( *(_QWORD *)(*(_QWORD *)v15 + 128LL) )
          {
            v43 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1_TypeInfo);
            System_Object___ctor((Il2CppObject *)v43, 0);
            if ( v43 )
            {
              *(_QWORD *)(v43 + 32) = v5;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), v5, v44, v45, v46, v47, v48, v49);
              v56 = *(_QWORD *)(v43 + 32);
              if ( v56 )
              {
                v57 = *(_QWORD *)(v56 + 24);
                if ( v57 )
                {
                  v58 = *(_QWORD *)(v57 + 128);
                  *(_QWORD *)(v43 + 16) = v58;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 16), v58, v50, v51, v52, v53, v54, v55);
                  v59 = *(_QWORD *)(v43 + 32);
                  if ( v59 )
                  {
                    v60 = *(RecommendSupportQuestBoardListViewItem_o **)(v59 + 24);
                    if ( v60 )
                    {
                      questSelectDialog = this->fields.questSelectDialog;
                      v62 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__;
                      *(_DWORD *)(v43 + 24) = v60->fields._SettingSelectIndex_k__BackingField;
                      IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)SingletonMonoBehaviour_object___get_Instance(v62);
                      if ( IsExpired )
                      {
                        parentWarId = IsExpired[2].fields.parentWarId;
                        v64 = *(_DWORD *)(v43 + 24);
                        v65 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v65,
                          (Il2CppObject *)v43,
                          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1__OnClickListView_b__2__,
                          0);
                        if ( questSelectDialog )
                        {
                          RecommendSupportQuestSelectDialogComponent__Open(
                            questSelectDialog,
                            v60,
                            parentWarId == v64,
                            v65,
                            v66);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v67 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v67, 0);
            if ( v67 )
            {
              *(_QWORD *)(v67 + 24) = v5;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 24), v5, v68, v69, v70, v71, v72, v73);
              v74 = *(Il2CppObject **)(v67 + 24);
              if ( v74 )
              {
                if ( !v74[1].klass )
                  return;
                recommendQuestList = this->fields.recommendQuestList;
                v76 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v76,
                  v74,
                  Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__3__,
                  0);
                v77 = System_Linq_Enumerable__Where_object_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
                        (System_Func_TSource__bool__o *)v76,
                        (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
                v78 = System_Linq_Enumerable__ToList_object_(
                        v77,
                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
                *(_QWORD *)(v67 + 16) = v78;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 16), (int32_t)v78, v79, v80, v81, v82, v83, v84);
                IsExpired = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)this->fields.titleInfo;
                this->fields.state = 1;
                if ( IsExpired )
                {
                  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)IsExpired, 0, 0);
                  slideComponent = this->fields.slideComponent;
                  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v86);
                  extiTime = this->fields.extiTime;
                  v89 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v89,
                    (Il2CppObject *)v67,
                    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2__OnClickListView_b__4__,
                    0);
                  if ( slideComponent )
                  {
                    SlideFadeObject__SlideOut_42907896(slideComponent, OUT_POS_OFS_X, extiTime, 0.0, v89, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_2213CDC(IsExpired, v7);
  }
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_2213A78(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v23 = (System_Reflection_MethodBase_o *)sub_2213A44(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
}


void RecommendSupportQuestBoardListViewManager__OnDestroy(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct System_Collections_Generic_List_Dictionary_int__int___o *selectWarId; // x8
  System_String_o *size; // x2
  int v10; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x8
  System_String_o *v12; // x2
  int v13; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x8
  System_String_o *v15; // x2
  int v16; // w9

  if ( (byte_596C4D0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__);
    byte_596C4D0 = 1;
  }
  selectWarId = this->fields.selectWarId;
  if ( selectWarId )
  {
    size = (System_String_o *)(unsigned int)selectWarId->fields._size;
    v10 = selectWarId->fields._version + 1;
    selectWarId->fields._size = 0;
    selectWarId->fields._version = v10;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)selectWarId->fields._items, 0, (int32_t)size, 0);
    this->fields.selectWarId = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectWarId, 0, size, v2, v3, v4, v5, v6);
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    v12 = (System_String_o *)(unsigned int)recommendQuestFolderList->fields._size;
    v13 = recommendQuestFolderList->fields._version + 1;
    recommendQuestFolderList->fields._size = 0;
    recommendQuestFolderList->fields._version = v13;
    if ( (int)v12 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestFolderList->fields._items, 0, (int32_t)v12, 0);
    this->fields.recommendQuestFolderList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.recommendQuestFolderList, 0, v12, v2, v3, v4, v5, v6);
  }
  recommendQuestList = this->fields.recommendQuestList;
  if ( recommendQuestList )
  {
    v15 = (System_String_o *)(unsigned int)recommendQuestList->fields._size;
    v16 = recommendQuestList->fields._version + 1;
    recommendQuestList->fields._size = 0;
    recommendQuestList->fields._version = v16;
    if ( (int)v15 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestList->fields._items, 0, (int32_t)v15, 0);
    this->fields.recommendQuestList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.recommendQuestList, 0, v15, v2, v3, v4, v5, v6);
  }
}


void RecommendSupportQuestBoardListViewManager__OnclickBack(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  System_Func_object__bool__o *v7; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v17; // x22
  System_Func_object__bool__o *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v20; // x21
  const MethodInfo *v21; // x4
  __int64 v22; // x8
  int32_t v23; // w3
  const MethodInfo *v24; // x2

  if ( (byte_596C4CE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__31_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0__OnclickBack_b__1__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0_TypeInfo);
    byte_596C4CE = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.currentFolderWarId )
    {
      v5 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v7 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__31_0__,
        0);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v7,
                                                            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 16) = Item;
        v16 = v5 + 16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Item, v10, v11, v12, v13, v14, v15);
        v17 = this->fields.recommendQuestFolderList;
        v18 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0__OnclickBack_b__1__,
          0);
        v19 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                (System_Func_TSource__bool__o *)v18,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v19,
                                                              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v20 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( Item )
          {
            if ( !*(_QWORD *)v16 )
            {
              v23 = 0;
              goto LABEL_16;
            }
            v22 = *(_QWORD *)(*(_QWORD *)v16 + 16LL);
            if ( v22 )
            {
              v23 = *(_DWORD *)(v22 + 16);
LABEL_16:
              RecommendSupportQuestBoardListViewManager__DispFolderList(this, v20, Item->fields._size, v23, v21);
              return;
            }
          }
        }
      }
    }
    else
    {
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, v24);
        return;
      }
    }
    sub_2213CDC(Item, v9);
  }
}


void RecommendSupportQuestBoardListViewManager__OnclickSelectMenuBackBtn(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596C4CF & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C4CF = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
    RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v7);
  }
}


void RecommendSupportQuestBoardListViewManager__OpenExpiredDialog(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  RecommendSupportQuestBoardListViewManager___c_c *v8; // x8
  System_String_o *v9; // x20
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x9
  System_String_o *v11; // x21
  System_Action_o *_9__35_0; // x22
  Il2CppObject *v13; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596C4D2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__OpenExpiredDialog_b__35_0__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_11519/*"RECOMMEND_SUPPORT_QUEST_EXPIRED_DIALOG_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C4D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v2, v3);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11519/*"RECOMMEND_SUPPORT_QUEST_EXPIRED_DIALOG_EXPLANATION"*/, 0);
  v8 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  v9 = v5;
  if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v6, v7);
    v8 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  _9__35_0 = static_fields->__9__35_0;
  if ( !_9__35_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__35_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__35_0,
      v13,
      Method_RecommendSupportQuestBoardListViewManager___c__OpenExpiredDialog_b__35_0__,
      0);
    v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    v14->__9__35_0 = _9__35_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__35_0, (int32_t)_9__35_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v9, _9__35_0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
}


void RecommendSupportQuestBoardListViewManager__RefreshFolderClosedAt(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *recommendQuestFolderList; // x0
  Il2CppObject *current; // x23
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  System_Func_object__bool__o *v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v15; // x0
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__21_1; // x21
  Il2CppObject *v18; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int64_t v26; // x0
  Il2CppObject *v27; // x23
  __int64 v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  Il2CppClass *v31; // x8
  System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__c *v32; // x0
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v33; // x21
  System_Func_object__bool__o *v34; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v39; // x0
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v40; // x8
  System_Func_object__long__o *_9__21_3; // x21
  Il2CppObject *v42; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596C4C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_DefaultIfEmpty_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_DefaultIfEmpty_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Min_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Min_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Current__);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__long__TypeInfo);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__long__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__GetEnumerator__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__RefreshFolderClosedAt_b__21_1__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__RefreshFolderClosedAt_b__21_3__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__RefreshFolderClosedAt_b__0__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__RefreshFolderClosedAt_b__2__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_596C4C5 = 1;
  }
  recommendQuestFolderList = (System_Collections_Generic_List_object__o *)this->fields.recommendQuestFolderList;
  memset(&v51, 0, sizeof(v51));
  if ( !recommendQuestFolderList )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    recommendQuestFolderList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__GetEnumerator__);
  v51 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__MoveNext__) )
  {
    current = v51.fields._current;
    v5 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !current )
      sub_2213CDC(v6, v7);
    if ( LOBYTE(current[2].monitor) )
    {
      klass = current[1].klass;
      if ( !klass )
        sub_2213CDC(v6, v7);
      if ( !v5 )
        sub_2213CDC(v6, v7);
      *(_DWORD *)(v5 + 16) = klass->_1.name;
      recommendQuestList = this->fields.recommendQuestList;
      v10 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v10,
        (Il2CppObject *)v5,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__RefreshFolderClosedAt_b__0__,
        0);
      v11 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
              (System_Func_TSource__bool__o *)v10,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v14 = System_Linq_Enumerable__DefaultIfEmpty_object_(
              v11,
              (const MethodInfo_387C080 *)Method_System_Linq_Enumerable_DefaultIfEmpty_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v15 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v12, v13);
        v15 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      static_fields = v15->static_fields;
      _9__21_1 = (System_Func_object__long__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !*(&v15->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v15, v12, v13);
          static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        }
        v18 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Func_object__long__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__long__TypeInfo);
        System_Func_object__long____ctor(
          _9__21_1,
          v18,
          Method_RecommendSupportQuestBoardListViewManager___c__RefreshFolderClosedAt_b__21_1__,
          0);
        v19 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v19->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__long__o *)_9__21_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v19->__9__21_1,
          (int32_t)_9__21_1,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      v26 = System_Linq_Enumerable__Min_object__59278396(
              v14,
              (System_Func_TSource__long__o *)_9__21_1,
              (const MethodInfo_388843C *)Method_System_Linq_Enumerable_Min_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v26 = 0;
    }
    current[2].klass = (Il2CppClass *)v26;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Dispose__);
  recommendQuestFolderList = (System_Collections_Generic_List_object__o *)this->fields.recommendQuestFolderList;
  if ( !recommendQuestFolderList )
LABEL_40:
    sub_2213CDC(recommendQuestFolderList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    recommendQuestFolderList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__GetEnumerator__);
  v51 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__MoveNext__) )
  {
    v27 = v51.fields._current;
    v28 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0);
    if ( !v27 )
      sub_2213CDC(v29, v30);
    if ( !LOBYTE(v27[2].monitor) )
    {
      v31 = v27[1].klass;
      if ( !v31 )
        sub_2213CDC(v29, v30);
      if ( !v28 )
        sub_2213CDC(v29, v30);
      v32 = System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo;
      *(_DWORD *)(v28 + 16) = v31->_1.name;
      v33 = this->fields.recommendQuestFolderList;
      v34 = (System_Func_object__bool__o *)sub_2213CCC(v32);
      System_Func_object__bool____ctor(
        v34,
        (Il2CppObject *)v28,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__RefreshFolderClosedAt_b__2__,
        0);
      v35 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v33,
              (System_Func_TSource__bool__o *)v34,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v38 = System_Linq_Enumerable__DefaultIfEmpty_object_(
              v35,
              (const MethodInfo_387C080 *)Method_System_Linq_Enumerable_DefaultIfEmpty_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v39 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v36, v37);
        v39 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      v40 = v39->static_fields;
      _9__21_3 = (System_Func_object__long__o *)v40->__9__21_3;
      if ( !_9__21_3 )
      {
        if ( !*(&v39->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v39, v36, v37);
          v40 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        }
        v42 = (Il2CppObject *)v40->__9;
        _9__21_3 = (System_Func_object__long__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__long__TypeInfo);
        System_Func_object__long____ctor(
          _9__21_3,
          v42,
          Method_RecommendSupportQuestBoardListViewManager___c__RefreshFolderClosedAt_b__21_3__,
          0);
        v43 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v43->__9__21_3 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__long__o *)_9__21_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v43->__9__21_3,
          (int32_t)_9__21_3,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      v27[2].klass = (Il2CppClass *)System_Linq_Enumerable__Min_object__59278396(
                                      v38,
                                      (System_Func_TSource__long__o *)_9__21_3,
                                      (const MethodInfo_388843C *)Method_System_Linq_Enumerable_Min_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Dispose__);
}


void RecommendSupportQuestBoardListViewManager__RefreshQuestAndFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportQuestBoardListViewManager___c_c *v4; // x0
  System_Collections_Generic_List_object__o *recommendQuestList; // x20
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__22_0; // x21
  Il2CppObject *v8; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *recommendQuestFolderList; // x20
  System_Predicate_object__o *v17; // x21
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *v19; // x20
  System_Predicate_object__o *v20; // x21

  if ( (byte_596C4C6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__RemoveAll__);
    sub_2213A60(&System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_2213A60(&System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager__RefreshQuestAndFolderList_b__22_1__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager__RefreshQuestAndFolderList_b__22_2__);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__RefreshQuestAndFolderList_b__22_0__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_596C4C6 = 1;
  }
  v4 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  recommendQuestList = (System_Collections_Generic_List_object__o *)this->fields.recommendQuestList;
  if ( !*(&RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, method, v2);
    v4 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__22_0 = (System_Predicate_object__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
    System_Predicate_object____ctor(
      _9__22_0,
      v8,
      Method_RecommendSupportQuestBoardListViewManager___c__RefreshQuestAndFolderList_b__22_0__,
      0);
    v9 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    v9->__9__22_0 = (struct System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)_9__22_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__22_0, (int32_t)_9__22_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !recommendQuestList )
    goto LABEL_17;
  if ( System_Collections_Generic_List_object___RemoveAll(
         recommendQuestList,
         (System_Predicate_T__o *)_9__22_0,
         (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__RemoveAll__) >= 1 )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_object__o *)this->fields.recommendQuestFolderList;
    v17 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    System_Predicate_object____ctor(
      v17,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager__RefreshQuestAndFolderList_b__22_1__,
      0);
    if ( recommendQuestFolderList )
    {
      if ( System_Collections_Generic_List_object___RemoveAll(
             recommendQuestFolderList,
             (System_Predicate_T__o *)v17,
             (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__RemoveAll__) < 1 )
      {
LABEL_15:
        RecommendSupportQuestBoardListViewManager__RefreshFolderClosedAt(this, v18);
        return;
      }
      v19 = (System_Collections_Generic_List_object__o *)this->fields.recommendQuestFolderList;
      v20 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
      System_Predicate_object____ctor(
        v20,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__RefreshQuestAndFolderList_b__22_2__,
        0);
      if ( v19 )
      {
        System_Collections_Generic_List_object___RemoveAll(
          v19,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__RemoveAll__);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_2213CDC(v4, method);
  }
}


void RecommendSupportQuestBoardListViewManager__SerializeFieldNotNullCheck(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool RecommendSupportQuestBoardListViewManager__TryGetWarId(
        RecommendSupportQuestBoardListViewManager_o *this,
        int32_t questId,
        int32_t *warId,
        const MethodInfo *method)
{
  int v6; // w8
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t klass; // w8
  bool result; // w0
  Il2CppObject *v15; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *v16; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596C4C7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    byte_596C4C7 = 1;
  }
  entity = 0;
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v15 = 0;
  v16 = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, warId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          questId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_19:
    klass = 0;
    result = 0;
    goto LABEL_20;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity || !Master_object )
LABEL_21:
    sub_2213CDC(Master_object, v8);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &v16,
          (int32_t)entity[3].klass,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_19;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v16 || !Master_object )
    goto LABEL_21;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &v15,
                                    HIDWORD(v16[1].klass),
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    goto LABEL_19;
  if ( !v15 )
    goto LABEL_21;
  klass = (int32_t)v15[1].klass;
  result = 1;
LABEL_20:
  *warId = klass;
  return result;
}


void RecommendSupportQuestBoardListViewManager__Update(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x24
  UnityEngine_Object_o *v9; // x19
  const MethodInfo *v10; // x1
  RecommendSupportQuestBoardListViewObject_o *v11; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596C4D1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&RecommendSupportQuestBoardListViewObject_TypeInfo);
    byte_596C4D1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ListViewManager__Update((ListViewManager_o *)this, 0);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_2213CDC(0, v3);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_2213CDC(v5, v6);
    v9 = *(UnityEngine_Object_o **)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      v11 = *(RecommendSupportQuestBoardListViewObject_o **)((char *)&qword_70 + (_QWORD)current);
      if ( v11 )
      {
        naturalAligment = RecommendSupportQuestBoardListViewObject_TypeInfo->_2.naturalAligment;
        if ( *((unsigned __int8 *)&v11->klass->_1.image + (unsigned __int64)off_130) >= (unsigned int)naturalAligment
          && (*(RecommendSupportQuestBoardListViewObject_c ***)((char *)&v11->klass->_1.image
                                                              + (unsigned __int64)&qword_C8))[naturalAligment - 1] == RecommendSupportQuestBoardListViewObject_TypeInfo )
        {
          RecommendSupportQuestBoardListViewObject__OnUpdate(v11, v10);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void RecommendSupportQuestBoardListViewManager__UpdateScrollPosition(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))scrollView->klass->vtable._8_UpdateScrollbars.methodPtr)(
          scrollView,
          1,
          scrollView->klass->vtable._8_UpdateScrollbars.method),
        (scrollView = this->fields.scrollView) == 0) )
  {
    sub_2213CDC(scrollView, method);
  }
  UIScrollView__UpdatePosition(scrollView, 0);
}


void RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(
        RecommendSupportQuestBoardListViewManager_o *this,
        int32_t parentFolderWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w0
  System_Collections_Generic_List_object__o *v9; // x21
  bool v10; // w22
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596C4CD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C4CD = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      if ( selectWarId )
      {
        Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                          selectWarId,
                                                                          Instance[1].fields._freeCount,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
        if ( Instance )
        {
          v8 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                 Instance,
                 this->fields.currentFolderWarId,
                 &value,
                 (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          v9 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
          v10 = v8;
          Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
          if ( v10 )
          {
            if ( Instance )
            {
              if ( v9 )
              {
                Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  v9,
                                                                                  Instance[1].fields._freeCount,
                                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
                if ( Instance )
                {
                  System_Collections_Generic_Dictionary_int__int___set_Item(
                    Instance,
                    this->fields.currentFolderWarId,
                    parentFolderWarId,
                    (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                  goto LABEL_16;
                }
              }
            }
          }
          else if ( Instance )
          {
            if ( v9 )
            {
              Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                                v9,
                                                                                Instance[1].fields._freeCount,
                                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
              if ( Instance )
              {
                System_Collections_Generic_Dictionary_int__int___Add(
                  Instance,
                  this->fields.currentFolderWarId,
                  parentFolderWarId,
                  (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    sub_2213CDC(Instance, v7);
  }
LABEL_16:
  this->fields.currentFolderWarId = parentFolderWarId;
}


bool RecommendSupportQuestBoardListViewManager___OnclickBack_b__31_0(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0 )
    sub_2213CDC(this, x);
  return warEntity->fields.id == this->fields.currentFolderWarId;
}


bool RecommendSupportQuestBoardListViewManager___RefreshQuestAndFolderList_b__22_1(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folder,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x8
  int v15; // w8
  System_Collections_Generic_List_T__o *recommendQuestList; // x19
  System_Func_object__bool__o *v17; // x20

  if ( (byte_596C4D3 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__RefreshQuestAndFolderList_b__3__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
    byte_596C4D3 = 1;
  }
  v5 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = folder,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)folder, v8, v9, v10, v11, v12, v13),
        (v14 = *(_QWORD *)(v5 + 16)) == 0) )
  {
    sub_2213CDC(v6, v7);
  }
  v15 = *(unsigned __int8 *)(v14 + 40);
  if ( v15 )
  {
    recommendQuestList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestList;
    v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v5,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__RefreshQuestAndFolderList_b__3__,
      0);
    LOBYTE(v15) = !BasicHelper__Any_object_(
                     recommendQuestList,
                     (System_Func_T__bool__o *)v17,
                     (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  }
  return v15 & 1;
}


bool RecommendSupportQuestBoardListViewManager___RefreshQuestAndFolderList_b__22_2(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folder,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x8
  System_Collections_Generic_List_T__o *recommendQuestFolderList; // x19
  System_Func_object__bool__o *v17; // x20

  if ( (byte_596C4D4 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_2213A60(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1__RefreshQuestAndFolderList_b__4__);
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1_TypeInfo);
    byte_596C4D4 = 1;
  }
  v5 = sub_2213CCC(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = folder,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)folder, v8, v9, v10, v11, v12, v13),
        (v14 = *(_QWORD *)(v5 + 16)) == 0) )
  {
    sub_2213CDC(v6, v7);
  }
  if ( *(_BYTE *)(v14 + 40) )
  {
    return 0;
  }
  else
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v5,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1__RefreshQuestAndFolderList_b__4__,
      0);
    return !BasicHelper__Any_object_(
              recommendQuestFolderList,
              (System_Func_T__bool__o *)v17,
              (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  }
}


float RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s0
  float v5; // s0

  width = UnityEngine_Screen__get_width(0);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0);
  if ( v4 >= 1.7778 )
    v5 = (float)(v4 * 576.0) + -1024.0;
  else
    v5 = -0.0;
  return this->fields.slideOutPosX + v5;
}


void RecommendSupportQuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C4D5 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_596C4D5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportQuestBoardListViewManager___c___ctor(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateChapterList_b__25_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *a,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)b->fields.warEntity) == 0
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (RecommendSupportQuestBoardListViewManager___c_o *)a->fields.warEntity) == 0) )
  {
    sub_2213CDC(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__26_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__26_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0 )
    sub_2213CDC(this, x);
  return questEntity->fields.id;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__26_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.phase;
}


bool RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__26_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 naturalAligment; // x9
  int32_t index; // w19

  if ( (byte_596C4D6 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C4D6 = 1;
  }
  if ( !item )
LABEL_9:
    sub_2213CDC(this, item);
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_221405C(
                                                                item,
                                                                RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                method,
                                                                v3);
    goto LABEL_9;
  }
  index = item[1].fields.index;
  this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !this )
    goto LABEL_9;
  return index == LODWORD(this[7].monitor);
}


bool RecommendSupportQuestBoardListViewManager___c___InitOpen_b__24_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.parentWarId == 0;
}


void RecommendSupportQuestBoardListViewManager___c___OpenExpiredDialog_b__35_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596C4D7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C4D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


int64_t RecommendSupportQuestBoardListViewManager___c___RefreshFolderClosedAt_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( x )
    return x->fields._ClosedAt_k__BackingField;
  else
    return 0;
}


int64_t RecommendSupportQuestBoardListViewManager___c___RefreshFolderClosedAt_b__21_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( x )
    return x->fields._ClosedAt_k__BackingField;
  else
    return 0;
}


bool RecommendSupportQuestBoardListViewManager___c___RefreshQuestAndFolderList_b__22_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_IsExpired(x, (const MethodInfo *)x);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *warEnt; // x9

  if ( !x || (warEntity = x->fields.warEntity) == 0 || (warEnt = this->fields.warEnt) == 0 )
    sub_2213CDC(this, x);
  return warEntity->fields.id == warEnt->fields.id;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___RefreshFolderClosedAt_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0 )
    sub_2213CDC(this, x);
  return warEntity->fields.id == this->fields.warId
      && !RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_IsNoneExpire(x, (const MethodInfo *)x);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___RefreshFolderClosedAt_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.parentWarId == this->fields.warId
      && !RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_IsNoneExpire(x, (const MethodInfo *)x);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___RefreshQuestAndFolderList_b__3(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *quest,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folder; // x9
  struct WarEntity_o *v5; // x9

  if ( !quest
    || (warEntity = quest->fields.warEntity) == 0
    || (folder = this->fields.folder) == 0
    || (v5 = folder->fields.warEntity) == 0 )
  {
    sub_2213CDC(this, quest);
  }
  return warEntity->fields.id == v5->fields.id;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1___RefreshQuestAndFolderList_b__4(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_1_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *child,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folder; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !child || (folder = this->fields.folder) == 0 || (warEntity = folder->fields.warEntity) == 0 )
    sub_2213CDC(this, child);
  return child->fields.parentWarId == warEntity->fields.id;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___InitOpen_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0 )
    sub_2213CDC(this, x);
  return questEntity->fields.id == this->fields.questId && x->fields.phase == this->fields.questPhase;
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___InitOpen_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0 )
    sub_2213CDC(this, x);
  return warEntity->fields.id == this->fields.warId;
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___InitOpen_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0 )
    sub_2213CDC(this, x);
  return warEntity->fields.id == this->fields.warId;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___InitOpen_b__4(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0 )
    sub_2213CDC(this, x);
  return warEntity->fields.id == this->fields.settingQuestWarId;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0___CreateChapterList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewItem_o *v4; // x20
  RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0_o *v5; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  const char *name; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *v10; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v11; // x1
  const MethodInfo *v12; // x2

  v4 = item;
  v5 = this;
  if ( (byte_596C4D8 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass25_0_o *)sub_2213A60(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_596C4D8 = 1;
  }
  if ( !v4 )
    goto LABEL_9;
  item = (ListViewItem_o *)RecommendSupportQuestBoardListViewItem_TypeInfo;
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (RecommendSupportQuestBoardListViewItem_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    klass = v4[1].klass;
    if ( klass )
    {
      name = klass->_1.name;
      if ( name )
        return *((_DWORD *)name + 4) == v5->fields.focusWarId;
    }
LABEL_9:
    sub_2213CDC(this, item);
  }
  v10 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *)sub_221405C(
                                                                               v4,
                                                                               RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                               method,
                                                                               v3);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0___OnClickListView_b__0(v10, v11, v12);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0___OnClickListView_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0 || (warEntity = folderInfo->fields.warEntity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0___OnClickListView_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0 || (warEntity = folderInfo->fields.warEntity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0___OnClickListView_b__3(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x9
  struct WarEntity_o *v5; // x9

  if ( !x
    || (warEntity = x->fields.warEntity) == 0
    || (folderInfo = this->fields.folderInfo) == 0
    || (v5 = folderInfo->fields.warEntity) == 0 )
  {
    sub_2213CDC(this, x);
  }
  return warEntity->fields.id == v5->fields.id;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0___OnClickListView_b__5(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v6; // x8
  float v7; // s8
  float intoTime; // s9
  System_Action_o *_9__6; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C4D9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__6__);
    byte_596C4D9 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  v7 = OUT_POS_OFS_X;
  intoTime = v6->fields.intoTime;
  _9__6 = this->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__6__,
      0);
    this->fields.__9__6 = _9__6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__6, (int32_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  if ( !slideComponent )
LABEL_9:
    sub_2213CDC(_4__this, method);
  SlideFadeObject__SlideIn_42906952(slideComponent, v7, intoTime, 0.0, _9__6, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0___OnClickListView_b__6(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *)_4__this->fields.slideComponent) == 0)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *)v4->fields.titleInfo,
        v4->fields.state = 0,
        !this) )
  {
    sub_2213CDC(this, method);
  }
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1___OnClickListView_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_596C4DA & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C4DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !klass )
    goto LABEL_17;
  RecommendSupportData__SetQuest(klass, (int32_t)Instance[7].monitor, this->fields.info, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_17;
  item = CS___8__locals1->fields.item;
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsSetting_k__BackingField )
    goto LABEL_15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0
    || (Instance = (Il2CppObject *)Instance[10].klass) == 0 )
  {
LABEL_17:
    sub_2213CDC(Instance, v4);
  }
  RecommendSupportListViewManager__SetItemSub((RecommendSupportListViewManager_o *)Instance, this->fields.index, v8);
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v9);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2___OnClickListView_b__4(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2_o *v3; // x21
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0_o *CS___8__locals2; // x19
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x21
  System_Action_o *_9__5; // x23
  int32_t id; // w22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v3 = this;
  if ( (byte_596C4DB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass27_2_o *)sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__5__);
    byte_596C4DB = 1;
  }
  CS___8__locals2 = v3->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  folderInfo = CS___8__locals2->fields.folderInfo;
  if ( !folderInfo )
    goto LABEL_10;
  warEntity = folderInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_10;
  _4__this = CS___8__locals2->fields.__4__this;
  questList = v3->fields.questList;
  _9__5 = CS___8__locals2->fields.__9__5;
  id = warEntity->fields.id;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass27_0__OnClickListView_b__5__,
      0);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&CS___8__locals2->fields.__9__5,
      (int32_t)_9__5,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !_4__this )
LABEL_10:
    sub_2213CDC(this, method);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__5, v2);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0___DispFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *v3; // x19
  System_Action_o *_9__1; // x24
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t focusWarId; // w23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v3 = this;
  if ( (byte_596C4DC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *)sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0__DispFolderList_b__1__);
    byte_596C4DC = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  folderInfo = v3->fields.folderInfo;
  warId = v3->fields.warId;
  focusWarId = v3->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0__DispFolderList_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, focusWarId, _9__1, v2);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v6; // x8
  float v7; // s8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C4DD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0__DispFolderList_b__2__);
    byte_596C4DD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  v7 = OUT_POS_OFS_X;
  intoTime = v6->fields.intoTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0__DispFolderList_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !slideComponent )
LABEL_9:
    sub_2213CDC(_4__this, method);
  SlideFadeObject__SlideIn_42906952(slideComponent, v7, intoTime, 0.0, _9__2, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0___DispFolderList_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *)_4__this->fields.slideComponent) == 0)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass29_0_o *)v4->fields.titleInfo,
        v4->fields.state = 0,
        !this) )
  {
    sub_2213CDC(this, method);
  }
  TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)this, 1, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0___OnclickBack_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0_o *v4; // x20
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *parentWarFolder; // x8
  int32_t parentWarId; // w19
  System_Nullable_int__o v7; // x0
  int32_t v8; // w1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v11; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_596C4DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass31_0_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_596C4DE = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  parentWarFolder = v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v7 = (System_Nullable_int__o)&v11;
    v8 = parentWarFolder->fields.parentWarId;
    v11 = 0;
    System_Nullable_int____ctor(v7, v8, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v11;
  }
  return (_BYTE)parentWarFolder && parentWarId == HIDWORD(parentWarFolder);
}