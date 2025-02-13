void __fastcall RecommendSupportQuestBoardListViewManager___ctor(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.slideOutPosX = 784.0;
  *(_QWORD *)&this->fields.warArrangementPitchY = 0xFFFFFF69FFFFFF8ALL;
  *(_QWORD *)&this->fields.intoTime = 0x3E8000003F000000LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__CreateChapterList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfos,
        int32_t parentFolderWarId,
        int32_t focusWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *v10; // x20
  WarEntity_o *Item; // x0
  __int64 v12; // x1
  int32_t size; // w29
  RecommendSupportQuestBoardListViewManager___c_c *v14; // x0
  System_Comparison_T__o *_9__22_0; // x24
  Il2CppObject *v16; // x25
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  int32_t id; // w1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v27; // x8
  __int64 v28; // x19
  int32_t PrioredParentId; // w1
  int32_t v30; // w24
  __int64 v31; // x8
  char v32; // w27
  __int64 v33; // x8
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v35; // x21
  Il2CppObject *v36; // x28
  RecommendSupportQuestBoardListViewItem_o *v37; // x26
  const MethodInfo *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  int32_t v49; // w1
  const MethodInfo *v50; // x2
  UnityEngine_Object_o *scrollBar; // x23
  struct UIScrollBar_o *v52; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v53; // x23
  System_Predicate_object__o *v54; // x24
  Il2CppObject *v55; // x0
  int32_t warId; // [xsp+1Ch] [xbp-84h]
  __int64 v58; // [xsp+28h] [xbp-78h]
  __int64 v59; // [xsp+30h] [xbp-70h] BYREF
  int32_t kind; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_int__o v61; // 0:x0.8
  System_Nullable_int__o v62; // 0:x0.8

  if ( (byte_4BD8684 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C21E38(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_15455/*"UpdateScrollPosition"*/);
    byte_4BD8684 = 1;
  }
  kind = 0;
  v10 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
  RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_56;
  v10->fields.focusWarId = focusWarId;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.warArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( folderInfos )
  {
    size = folderInfos->fields._size;
    if ( size >= 2 )
    {
      v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v14->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v16,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__22_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
          (int64_t)_9__22_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      System_Collections_Generic_List_object___Sort_56953720(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__22_0,
        (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    }
  }
  else
  {
    size = 0;
  }
  settingQuestInfo = this->fields.settingQuestInfo;
  warId = parentFolderWarId;
  if ( !settingQuestInfo )
  {
    v28 = 0LL;
LABEL_20:
    v58 = 0LL;
    goto LABEL_21;
  }
  warEntity = settingQuestInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_56;
  id = warEntity->fields.id;
  v61 = (System_Nullable_int__o)&v59;
  v59 = 0LL;
  System_Nullable_int____ctor(v61, id, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
  v27 = this->fields.settingQuestInfo;
  v28 = v59;
  if ( !v27 )
    goto LABEL_20;
  Item = v27->fields.warEntity;
  if ( !Item )
    goto LABEL_56;
  PrioredParentId = WarEntity__GetPrioredParentId(Item, 0LL);
  v62 = (System_Nullable_int__o)&v59;
  v59 = 0LL;
  System_Nullable_int____ctor(v62, PrioredParentId, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
  v58 = v59;
LABEL_21:
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v30 = 0;
      while ( 1 )
      {
        Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)folderInfos,
                                v30,
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Item )
          break;
        v31 = *(_QWORD *)&Item->fields.id;
        if ( !v31 )
          break;
        if ( (_BYTE)v28 && *(_DWORD *)(v31 + 16) == HIDWORD(v28) )
        {
          v32 = 1;
        }
        else
        {
          Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)folderInfos,
                                  v30,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Item )
            break;
          v33 = *(_QWORD *)&Item->fields.id;
          if ( !v33 )
            break;
          v32 = (unsigned __int8)v58 != 0 && *(_DWORD *)(v33 + 16) == HIDWORD(v58);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v35 = this;
        v36 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)folderInfos,
                v30,
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v37 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C22084(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v37,
          v30,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)v36,
          0LL,
          v32,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v38);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v46 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v47 = itemList->fields._size;
        if ( (unsigned int)v47 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v37,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + v47;
          itemList->fields._size = v47 + 1;
          v48[4] = (Il2CppClass *)v37;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v37, v39, v40, v41, v42, v43, v44);
        }
        ++v30;
        this = v35;
        if ( size == v30 )
          goto LABEL_38;
      }
    }
LABEL_56:
    sub_1C22094(Item, v12);
  }
LABEL_38:
  Item = (WarEntity_o *)this->fields.titleInfo;
  if ( !Item )
    goto LABEL_56;
  Item = (WarEntity_o *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Item, warId, &kind, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_56;
  if ( ((unsigned __int8)Item & 1) != 0 )
    v49 = kind;
  else
    v49 = 92;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v49, 0, 0, 0LL);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, warId, v50);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Item = (WarEntity_o *)this->fields.scrollBar;
    if ( !Item )
      goto LABEL_56;
    Item = (WarEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0LL);
    if ( !Item )
      goto LABEL_56;
    Item = (WarEntity_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Item, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      v52 = this->fields.scrollBar;
      if ( !v52 )
        goto LABEL_56;
      if ( v52->fields.mSize <= 0.98 )
      {
        v53 = this->fields.itemList;
        v54 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v54,
          (Il2CppObject *)v10,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
          0LL);
        if ( !v53 )
          goto LABEL_56;
        v55 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v53,
                (System_Predicate_T__o *)v54,
                (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v55 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v55[1].klass), 0LL);
      }
    }
  }
  Item = (WarEntity_o *)this->fields.selectMenuBackBtn;
  if ( !Item )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, warId != 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15455/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__CreateQuestList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questInfos,
        int32_t parentFolderWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int32_t size; // w21
  System_Collections_Generic_List_TSource__o *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x23
  RecommendSupportQuestBoardListViewManager___c_c *v10; // x0
  System_Func_object__int__o *_9__23_0; // x23
  Il2CppObject *v12; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v21; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x22
  System_Func_object__int__o *_9__23_1; // x23
  Il2CppObject *v24; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v33; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x22
  System_Func_object__int__o *_9__23_2; // x23
  Il2CppObject *v36; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int32_t v45; // w22
  void *Instance; // x0
  __int64 v47; // x1
  RecommendSupportData_o *v48; // x24
  __int64 v49; // x8
  int32_t v50; // w25
  const MethodInfo *v51; // x5
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v54; // w26
  RecommendSupportQuestBoardListViewManager_o *v55; // x27
  Il2CppObject *Item; // x0
  int32_t v57; // w19
  System_String_o *v58; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v59; // x29
  RecommendSupportQuestBoardListViewItem_o *v60; // x25
  const MethodInfo *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  System_Collections_ICollection_o *v72; // x22
  const MethodInfo *v73; // x2
  TitleInfoControl_o *titleInfo; // x22
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v76; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v77; // x21
  System_Predicate_object__o *v78; // x22
  Il2CppObject *v79; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  Il2CppObject *v87; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  __int64 settingIndex; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BD8685 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_MapMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C21E38(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C21E38(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_15455/*"UpdateScrollPosition"*/);
    byte_4BD8685 = 1;
  }
  svtName = 0LL;
  settingIndex = 0LL;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.questArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    v8 = System_Linq_Enumerable__ToList_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
           (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    if ( size >= 3 )
    {
      v10 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v10 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_0 = (System_Func_object__int__o *)v10->static_fields->__9__23_0;
      if ( !_9__23_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__23_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_0,
          v12,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__23_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
          (int64_t)_9__23_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      v20 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__23_0,
              (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v22 = v20;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__int__o *)v21->static_fields->__9__23_1;
      if ( !_9__23_1 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__23_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_1,
          v24,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__,
          0LL);
        v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v25->__9__23_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_1;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v25->__9__23_1, (int64_t)_9__23_1, v26, v27, v28, v29, v30, v31);
      }
      v32 = System_Linq_Enumerable__ThenBy_object__int_(
              v22,
              (System_Func_TSource__TKey__o *)_9__23_1,
              (const MethodInfo_2FE8C78 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v34 = v32;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_2 = (System_Func_object__int__o *)v33->static_fields->__9__23_2;
      if ( !_9__23_2 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v33->static_fields->__9;
        _9__23_2 = (System_Func_object__int__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_2,
          v36,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__,
          0LL);
        v37 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v37->__9__23_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_2;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v37->__9__23_2, (int64_t)_9__23_2, v38, v39, v40, v41, v42, v43);
      }
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v34,
                                                                   (System_Func_TSource__TKey__o *)_9__23_2,
                                                                   (const MethodInfo_2FE8C78 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v9 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v44,
                                                          (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v9 = (System_Collections_Generic_List_object__o *)v8;
      if ( size < 1 )
        goto LABEL_39;
    }
    v45 = 0;
    do
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v9 )
        goto LABEL_71;
      v48 = (RecommendSupportData_o *)*((_QWORD *)Instance + 14);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v45,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      v49 = *((_QWORD *)Instance + 2);
      if ( !v49 )
        goto LABEL_71;
      v50 = *(_DWORD *)(v49 + 16);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v45,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v48 )
        goto LABEL_71;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         v48,
                         v50,
                         *((_DWORD *)Instance + 10),
                         (int32_t *)&settingIndex,
                         &svtName,
                         v51);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v54 = IsQuestSetting;
      v55 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v9,
               v45,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v57 = settingIndex;
      v58 = svtName;
      v59 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v60 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C22084(RecommendSupportQuestBoardListViewItem_TypeInfo);
      RecommendSupportQuestBoardListViewItem___ctor(v60, v45, 0LL, v59, v54, v57, v58, v61);
      if ( !itemList )
        goto LABEL_71;
      items = itemList->fields._items;
      v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_71;
      v70 = itemList->fields._size;
      this = v55;
      if ( (unsigned int)v70 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v60,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &items->obj.klass + v70;
        itemList->fields._size = v70 + 1;
        v71[4] = (Il2CppClass *)v60;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)v60, v62, v63, v64, v65, v66, v67);
      }
    }
    while ( size != ++v45 );
  }
LABEL_39:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = MapMaster__getList((MapMaster_o *)Instance, parentFolderWarId, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_71;
  v72 = (System_Collections_ICollection_o *)Instance;
  if ( TitleInfoControl__TryGetTerminalTitleKind(
         this->fields.titleInfo,
         parentFolderWarId,
         (int32_t *)&settingIndex + 1,
         0LL) )
  {
    Instance = this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_71;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Instance, SHIDWORD(settingIndex), 0, 0, 0LL);
  }
  else
  {
    Instance = (void *)BasicHelper__IsNullOrEmpty(v72, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v72 )
        goto LABEL_71;
      if ( !LODWORD(v72[1].monitor) )
        sub_1C2209C(Instance, v47);
      Instance = v72[2].klass;
      if ( !Instance )
        goto LABEL_71;
      titleInfo = this->fields.titleInfo;
      Instance = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0LL);
      if ( !titleInfo )
        goto LABEL_71;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Instance, 0, 1, 0, 0LL);
    }
  }
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v73);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Instance = this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_71;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_71;
    Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v76 = this->fields.scrollBar;
      if ( !v76 )
        goto LABEL_71;
      if ( v76->fields.mSize <= 0.98 )
      {
        v77 = this->fields.itemList;
        Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
          Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v78 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
        if ( !v78 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v79 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v78 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            v78,
            v79,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__,
            0LL);
          v80 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v80->__9__23_3 = (struct System_Predicate_ListViewItem__o *)v78;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v80->__9__23_3, (int64_t)v78, v81, v82, v83, v84, v85, v86);
        }
        if ( v77 )
        {
          v87 = System_Collections_Generic_List_object___Find(
                  (System_Collections_Generic_List_object__o *)v77,
                  (System_Predicate_T__o *)v78,
                  (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v87 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v87[1].klass), 0LL);
          goto LABEL_69;
        }
LABEL_71:
        sub_1C22094(Instance, v47);
      }
    }
  }
LABEL_69:
  Instance = this->fields.selectMenuBackBtn;
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15455/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__DispFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo,
        int32_t warId,
        int32_t focusWarId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v25; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v28; // s9
  System_Action_o *v29; // x19

  if ( (byte_4BD8687 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
    byte_4BD8687 = 1;
  }
  v9 = sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___ctor(
    (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = folderInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)folderInfo, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 32) = warId;
  *(_DWORD *)(v9 + 36) = focusWarId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v25);
  extiTime = this->fields.extiTime;
  v28 = OUT_POS_OFS_X;
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__,
    0LL);
  if ( !slideComponent )
LABEL_6:
    sub_1C22094(v10, v11);
  SlideFadeObject__SlideOut_34814208(slideComponent, v28, extiTime, 0.0, v29, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BalanceConfig_c *v11; // x0
  int32_t RecommendSupportMemberMax; // w20
  System_Collections_Generic_List_object__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  int32_t i; // w27
  BalanceConfig_c *v22; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_4BD8681 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
    byte_4BD8681 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.slideComponent,
    (int64_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v11->static_fields->RecommendSupportMemberMax;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
  System_Collections_Generic_List_object____ctor_56944880(
    v13,
    RecommendSupportMemberMax,
    (const MethodInfo_364E8F0 *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectWarId, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  for ( i = 0; ; ++i )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( i >= v22->static_fields->RecommendSupportMemberMax )
      break;
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( !selectWarId )
      goto LABEL_17;
    items = selectWarId->fields._items;
    v33 = Method_System_Collections_Generic_List_Dictionary_int__int___Add__;
    ++selectWarId->fields._version;
    if ( !items )
      goto LABEL_17;
    size = selectWarId->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectWarId,
        (Il2CppObject *)v24,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v24;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v24, v26, v27, v28, v29, v30, v31);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_1C22094(questSelectDialog, v20);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, 0LL);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v36);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *v3; // x20
  __int64 v4; // x1
  void *titleInfo; // x0
  RecommendSupportData_o *v6; // x21
  const MethodInfo *v7; // x4
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o **p_settingQuestInfo; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *v18; // x20
  struct WarEntity_o *warEntity; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v20; // x21
  System_Func_object__bool__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v23; // x0
  const MethodInfo *v24; // x4
  System_Collections_Generic_List_object__o *selectWarId; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v27; // x0
  System_Func_object__bool__o *_9__21_1; // x21
  Il2CppObject *v29; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v38; // x0
  const MethodInfo *v39; // x5
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BD8683 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C21E38(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4BD8683 = 1;
  }
  value = 0;
  v3 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *)sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___ctor(v3, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0LL, 1, 0LL, 92, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite_38384144((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 1, 0LL);
  this->fields.state = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  v6 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v3 || !v6 )
    goto LABEL_26;
  RecommendSupportData__TryGetQuest(v6, *((_DWORD *)titleInfo + 30), (int32_t *)&v3->fields, &v3->fields.questPhase, v7);
  recommendQuestList = this->fields.recommendQuestList;
  v9 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  p_settingQuestInfo = &this->fields.settingQuestInfo;
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.settingQuestInfo, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  if ( this->fields.settingQuestInfo )
  {
    v18 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *)sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___ctor(v18, 0LL);
    if ( *p_settingQuestInfo )
    {
      warEntity = (*p_settingQuestInfo)->fields.warEntity;
      if ( warEntity )
      {
        if ( v18 )
        {
          v18->fields.settingQuestWarId = warEntity->fields.id;
          v20 = this->fields.recommendQuestList;
          v21 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v21,
            (Il2CppObject *)v18,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__,
            0LL);
          v22 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                  (System_Func_TSource__bool__o *)v21,
                  (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v23 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v22, (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v23, v18->fields.settingQuestWarId, 0LL, v24);
          return;
        }
      }
    }
LABEL_26:
    sub_1C22094(titleInfo, v4);
  }
  this->fields.currentFolderWarId = 0;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  if ( !selectWarId )
    goto LABEL_26;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v27 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v27 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v27->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__21_1,
      v29,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__,
      0LL);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__21_1;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
      (int64_t)_9__21_1,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__21_1,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v38 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v37, (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v38, 0, value, 0LL, v39);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitQuestFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **p_recommendQuestFolderList; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Master_object; // x25
  Il2CppObject *v19; // x28
  Il2CppObject *v20; // x20
  CommonReleaseMaster_o *IsOpen; // x0
  __int64 dispCommonReleaseId; // x1
  RecommendSupportQuestEntity_array *List; // x26
  int max_length; // w8
  unsigned int v25; // w21
  RecommendSupportQuestEntity_o *v26; // x22
  __int64 v27; // x27
  int32_t questId; // w28
  System_String_o *questMessage; // x8
  WarEntity_o *v30; // x24
  int32_t priority; // w22
  int32_t questPhase; // w28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v33; // x29
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppClass *v40; // x8
  _QWORD *v41; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x28
  System_Func_object__bool__o *v45; // x22
  int32_t PrioredParentId; // w29
  System_Collections_Generic_List_object__o *v47; // x27
  WarEntity_o *v48; // x22
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v49; // x28
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  _BOOL8 v60; // x0
  __int64 v61; // x1
  System_Collections_Generic_List_object__o *v62; // x21
  Il2CppObject *v63; // x23
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v64; // x22
  __int64 v65; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  Il2CppObject **v77; // [xsp+0h] [xbp-F0h]
  System_String_o *v78; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v79; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o **p_recommendQuestList; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_HashSet_int__o *v81; // [xsp+20h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // [xsp+28h] [xbp-C8h]
  Il2CppObject *v83; // [xsp+30h] [xbp-C0h]
  CommonReleaseMaster_o *v84; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v85; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *v86; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v87; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *v88; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4BD8682 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C21E38(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C21E38(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
    sub_1C21E38(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
    byte_4BD8682 = 1;
  }
  v88 = 0LL;
  entity = 0LL;
  memset(&v87, 0, sizeof(v87));
  v86 = 0LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  p_recommendQuestFolderList = &this->fields.recommendQuestFolderList;
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.recommendQuestFolderList,
    (int64_t)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v11;
  p_recommendQuestList = &this->fields.recommendQuestList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.recommendQuestList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SpotMaster___);
  v20 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  IsOpen = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_55;
  v84 = IsOpen;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v81 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v81,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_55;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    v83 = v19;
    do
    {
      if ( v25 >= max_length )
        sub_1C2209C(IsOpen, dispCommonReleaseId);
      v26 = List->m_Items[v25];
      v27 = sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
      RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___ctor(
        (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)v27,
        0LL);
      if ( !v26 )
        goto LABEL_55;
      if ( !v26->fields.baseQuestId )
      {
        dispCommonReleaseId = (unsigned int)v26->fields.dispCommonReleaseId;
        if ( (_DWORD)dispCommonReleaseId )
        {
          IsOpen = v84;
          if ( !v84 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v84, dispCommonReleaseId, 0LL, 0, 0LL);
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        else
        {
          questId = v26->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = (CommonReleaseMaster_o *)CondType__IsQuestClear_38834244(questId, -1, 0, 0LL);
          v19 = v83;
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        if ( !v19 )
          goto LABEL_55;
        IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                            &entity,
                                            v26->fields.questId,
                                            (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpen & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)v82;
          if ( !v82 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v82,
                                              &v88,
                                              (int32_t)entity[3].klass,
                                              (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpen & 1) != 0 )
          {
            if ( !v27 || !v88 || !v20 )
              goto LABEL_55;
            IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                                (Il2CppObject **)(v27 + 16),
                                                HIDWORD(v88[1].klass),
                                                (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
            {
              questMessage = v26->fields.questMessage;
              v77 = (Il2CppObject **)(v27 + 16);
              v30 = *(WarEntity_o **)(v27 + 16);
              questPhase = v26->fields.questPhase;
              priority = v26->fields.priority;
              v78 = questMessage;
              v79 = entity;
              v33 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_1C22084(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                v33,
                (QuestEntity_o *)v79,
                v30,
                v78,
                questPhase,
                priority,
                0LL);
              IsOpen = (CommonReleaseMaster_o *)*p_recommendQuestList;
              if ( !*p_recommendQuestList )
                goto LABEL_55;
              v40 = *(Il2CppClass **)&IsOpen->fields._MasterKind_k__BackingField;
              v41 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
              ++HIDWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( !v40 )
                goto LABEL_55;
              MasterName_k__BackingField_low = SLODWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v40->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsOpen,
                  (Il2CppObject *)v33,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                v43 = &v40->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsOpen->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v43[4] = v33;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v33, v34, v35, v36, v37, v38, v39);
              }
              v44 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_recommendQuestFolderList;
              v45 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v45,
                (Il2CppObject *)v27,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                0LL);
              IsOpen = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__50149120(
                                                  v44,
                                                  (System_Func_TSource__bool__o *)v45,
                                                  (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              v19 = v83;
              if ( !IsOpen )
              {
                IsOpen = (CommonReleaseMaster_o *)*v77;
                if ( !*v77 )
                  goto LABEL_55;
                PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpen, 0LL);
                IsOpen = (CommonReleaseMaster_o *)v81;
                if ( !v81 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___Add(
                  v81,
                  PrioredParentId,
                  (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v47 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
                v48 = (WarEntity_o *)*v77;
                v49 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1C22084(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v49, v48, PrioredParentId, 0LL);
                if ( !v47 )
                  goto LABEL_55;
                items = v47->fields._items;
                v57 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                ++v47->fields._version;
                if ( !items )
                  goto LABEL_55;
                size = v47->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v47,
                    (Il2CppObject *)v49,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                }
                else
                {
                  v59 = &items->obj.klass + size;
                  v47->fields._size = size + 1;
                  v59[4] = (Il2CppClass *)v49;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v49, v50, v51, v52, v53, v54, v55);
                }
                v19 = v83;
              }
            }
          }
        }
      }
LABEL_12:
      max_length = List->max_length;
    }
    while ( (int)++v25 < max_length );
  }
  if ( !v81 )
LABEL_55:
    sub_1C22094(IsOpen, dispCommonReleaseId);
  System_Collections_Generic_HashSet_int___Remove(
    v81,
    0,
    (const MethodInfo_3503048 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v85,
    v81,
    (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v87 = v85;
  while ( 1 )
  {
    v60 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v87,
            (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v60 )
      break;
    if ( !v20 )
      sub_1C22094(v60, v61);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
           &v86,
           (int32_t)v87.fields._current,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v62 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
      v63 = v86;
      v64 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1C22084(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v64, (WarEntity_o *)v63, 0, 0LL);
      if ( !v62 )
        sub_1C22094(v65, v66);
      v73 = v62->fields._items;
      v74 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v62->fields._version;
      if ( !v73 )
        sub_1C22094(v65, v66);
      v75 = v62->fields._size;
      if ( (unsigned int)v75 >= v73->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v62,
          (Il2CppObject *)v64,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &v73->obj.klass + v75;
        v62->fields._size = v75 + 1;
        v76[4] = (Il2CppClass *)v64;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)v64, v67, v68, v69, v70, v71, v72);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v87,
    (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnClickListView(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  int64_t v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  int64_t v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int v22; // w21
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x21
  System_Collections_Generic_List_T__o *recommendQuestFolderList; // x23
  System_Func_object__bool__o *v34; // x24
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v35; // x22
  System_Func_object__bool__o *v36; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_TSource__o *v38; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x22
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v40; // x20
  __int64 v41; // x8
  const MethodInfo *v42; // x4
  __int64 v43; // x8
  __int64 v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x8
  __int64 v58; // x8
  int64_t v59; // x1
  __int64 v60; // x8
  RecommendSupportQuestBoardListViewItem_o *v61; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  int monitor; // w23
  int v64; // w24
  System_Action_o *v65; // x22
  __int64 v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *v73; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x22
  System_Func_object__bool__o *v75; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_List_TSource__o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v85; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v88; // s9
  System_Action_o *v89; // x19
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BD8686 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C21E38(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    byte_4BD8686 = 1;
  }
  value = 0;
  v5 = sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___ctor(
    (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_37;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, 0LL);
  *(_QWORD *)(v5 + 24) = Item;
  v15 = v5 + 24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)Item, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_37;
  v22 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 24) + 128LL);
  v23 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C21E50(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v23, v23[4]);
  if ( v22 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
  if ( !*(_QWORD *)v15 )
    goto LABEL_37;
  v31 = *(_QWORD *)(*(_QWORD *)v15 + 112LL);
  *(_QWORD *)(v5 + 16) = v31;
  v32 = v5 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_QWORD *)(v5 + 16) )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v34 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v5,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      0LL);
    Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                 recommendQuestFolderList,
                                 (System_Func_T__bool__o *)v34,
                                 (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v35 = this->fields.recommendQuestFolderList;
      v36 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v36,
        (Il2CppObject *)v5,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
        0LL);
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v35,
              (System_Func_TSource__bool__o *)v36,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v38 = System_Linq_Enumerable__ToList_object_(
              v37,
              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
      v40 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v38;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        if ( selectWarId )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       selectWarId,
                       (int32_t)Instance[7].monitor,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
          if ( *(_QWORD *)v32 )
          {
            v41 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
            if ( v41 )
            {
              if ( Instance )
              {
                Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                             (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                             *(_DWORD *)(v41 + 16),
                                             &value,
                                             (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
                if ( *(_QWORD *)v32 )
                {
                  v43 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
                  if ( v43 )
                  {
                    RecommendSupportQuestBoardListViewManager__DispFolderList(
                      this,
                      v40,
                      *(_DWORD *)(v43 + 16),
                      value,
                      v42);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C22094(Instance, v7);
    }
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_37;
  if ( *(_QWORD *)(*(_QWORD *)v15 + 120LL) )
  {
    v44 = sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___ctor(
      (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *)v44,
      0LL);
    if ( !v44 )
      goto LABEL_37;
    *(_QWORD *)(v44 + 32) = v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 32), v5, v45, v46, v47, v48, v49, v50);
    v57 = *(_QWORD *)(v44 + 32);
    if ( !v57 )
      goto LABEL_37;
    v58 = *(_QWORD *)(v57 + 24);
    if ( !v58 )
      goto LABEL_37;
    v59 = *(_QWORD *)(v58 + 120);
    *(_QWORD *)(v44 + 16) = v59;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 16), v59, v51, v52, v53, v54, v55, v56);
    v60 = *(_QWORD *)(v44 + 32);
    if ( !v60 )
      goto LABEL_37;
    v61 = *(RecommendSupportQuestBoardListViewItem_o **)(v60 + 24);
    if ( !v61 )
      goto LABEL_37;
    *(_DWORD *)(v44 + 24) = v61->fields._SettingSelectIndex_k__BackingField;
    questSelectDialog = this->fields.questSelectDialog;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    monitor = (int)Instance[7].monitor;
    v64 = *(_DWORD *)(v44 + 24);
    v65 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)v44,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__,
      0LL);
    if ( !questSelectDialog )
      goto LABEL_37;
    RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v61, monitor == v64, v65, 0LL);
  }
  else
  {
    v66 = sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2___ctor(
      (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)v66,
      0LL);
    if ( !v66 )
      goto LABEL_37;
    *(_QWORD *)(v66 + 24) = v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v66 + 24), v5, v67, v68, v69, v70, v71, v72);
    v73 = *(Il2CppObject **)(v66 + 24);
    if ( !v73 )
      goto LABEL_37;
    if ( v73[1].klass )
    {
      recommendQuestList = this->fields.recommendQuestList;
      v75 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v75,
        v73,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
        0LL);
      v76 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
              (System_Func_TSource__bool__o *)v75,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v77 = System_Linq_Enumerable__ToList_object_(
              v76,
              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      *(_QWORD *)(v66 + 16) = v77;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v66 + 16), (int64_t)v77, v78, v79, v80, v81, v82, v83);
      slideComponent = this->fields.slideComponent;
      this->fields.state = 1;
      OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v85);
      extiTime = this->fields.extiTime;
      v88 = OUT_POS_OFS_X;
      v89 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v89,
        (Il2CppObject *)v66,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
        0LL);
      if ( !slideComponent )
        goto LABEL_37;
      SlideFadeObject__SlideOut_34814208(slideComponent, v88, extiTime, 0.0, v89, 0LL);
    }
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnDestroy(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct System_Collections_Generic_List_Dictionary_int__int___o *selectWarId; // x8
  int64_t size; // x2
  int v10; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x8
  int64_t v12; // x2
  int v13; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x8
  int64_t v15; // x2
  PartyOrganizationUtility_o *p_recommendQuestList; // x19
  int v17; // w9

  if ( (byte_4BD868B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__);
    byte_4BD868B = 1;
  }
  selectWarId = this->fields.selectWarId;
  if ( selectWarId )
  {
    size = (unsigned int)selectWarId->fields._size;
    v10 = selectWarId->fields._version + 1;
    selectWarId->fields._size = 0;
    selectWarId->fields._version = v10;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)selectWarId->fields._items, 0, size, 0LL);
    this->fields.selectWarId = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectWarId, 0LL, size, v2, v3, v4, v5, v6);
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    v12 = (unsigned int)recommendQuestFolderList->fields._size;
    v13 = recommendQuestFolderList->fields._version + 1;
    recommendQuestFolderList->fields._size = 0;
    recommendQuestFolderList->fields._version = v13;
    if ( (int)v12 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestFolderList->fields._items, 0, v12, 0LL);
    this->fields.recommendQuestFolderList = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.recommendQuestFolderList, 0LL, v12, v2, v3, v4, v5, v6);
  }
  recommendQuestList = this->fields.recommendQuestList;
  if ( recommendQuestList )
  {
    v15 = (unsigned int)recommendQuestList->fields._size;
    p_recommendQuestList = (PartyOrganizationUtility_o *)&this->fields.recommendQuestList;
    v17 = recommendQuestList->fields._version + 1;
    recommendQuestList->fields._size = 0;
    recommendQuestList->fields._version = v17;
    if ( (int)v15 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestList->fields._items, 0, v15, 0LL);
    p_recommendQuestList->klass = 0LL;
    sub_1C21DDC(p_recommendQuestList, 0LL, v15, v2, v3, v4, v5, v6);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickBack(
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v17; // x22
  System_Func_object__bool__o *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v20; // x21
  const MethodInfo *v21; // x4
  __int64 v22; // x8
  int32_t v23; // w3

  if ( (byte_4BD8689 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C21E38(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__);
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
    byte_4BD8689 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    if ( this->fields.currentFolderWarId )
    {
      v5 = sub_1C22084(RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
      RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0___ctor(
        (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)v5,
        0LL);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v7 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__,
        0LL);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__50149120(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v7,
                                                            (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 16) = Item;
        v16 = v5 + 16;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)Item, v10, v11, v12, v13, v14, v15);
        v17 = this->fields.recommendQuestFolderList;
        v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__,
          0LL);
        v19 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                (System_Func_TSource__bool__o *)v18,
                (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v19,
                                                              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v20 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
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
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, 0LL);
        return;
      }
    }
    sub_1C22094(Item, v9);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickSelectMenuBackBtn(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BD868A & 1) == 0 )
  {
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4BD868A = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v6);
    RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, 0LL);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__SerializeFieldNotNullCheck(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportQuestBoardListViewManager__UpdateScrollPosition(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))scrollView->klass->vtable._8_UpdateScrollbars.method)(
          scrollView,
          1LL,
          scrollView->klass->vtable._9_SetDragAmount.methodPtr),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_1C22094(scrollView, method);
  }
  UIScrollView__UpdatePosition(scrollView, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(
        RecommendSupportQuestBoardListViewManager_o *this,
        int32_t parentFolderWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w0
  System_Collections_Generic_List_object__o *v9; // x22
  bool v10; // w21
  int32_t currentFolderWarId; // w1
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD8688 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4BD8688 = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || !selectWarId
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            selectWarId,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL
      || (v8 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                 Instance,
                 this->fields.currentFolderWarId,
                 &value,
                 (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__),
          v9 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId,
          v10 = v8,
          (Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
      || !v9
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v9,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL )
    {
      sub_1C22094(Instance, v7);
    }
    currentFolderWarId = this->fields.currentFolderWarId;
    if ( v10 )
      System_Collections_Generic_Dictionary_int__int___set_Item(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_32ACF68 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    else
      System_Collections_Generic_Dictionary_int__int___Add(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  }
  this->fields.currentFolderWarId = parentFolderWarId;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___OnclickBack_b__28_0(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0LL )
    sub_1C22094(this, x);
  return warEntity->fields.id == this->fields.currentFolderWarId;
}


float __fastcall RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  if ( v4 >= 1.7778 )
    return this->fields.slideOutPosX + (float)((float)(v4 * 576.0) + -1024.0);
  else
    return this->fields.slideOutPosX;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD868E & 1) == 0 )
  {
    sub_1C21E38(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4BD868E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c___ctor(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateChapterList_b__22_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *a,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)b->fields.warEntity) == 0LL
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0LL), !a)
    || (v5 = (int)this, (this = (RecommendSupportQuestBoardListViewManager___c_o *)a->fields.warEntity) == 0LL) )
  {
    sub_1C22094(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0LL )
    sub_1C22094(this, x);
  return questEntity->fields.id;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.phase;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  int32_t index; // w19
  bool result; // w0
  RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BD868F & 1) == 0 )
  {
    sub_1C21E38(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4BD868F = 1;
  }
  if ( !item )
    goto LABEL_8;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1C22094(this, item);
  }
  v7 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)sub_1C22354(item);
  RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___ctor(v7, v8);
  return result;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___InitOpen_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.parentWarId == 0;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *warEnt; // x9

  if ( !x || (warEntity = x->fields.warEntity) == 0LL || (warEnt = this->fields.warEnt) == 0LL )
    sub_1C22094(this, x);
  return warEntity->fields.id == warEnt->fields.id;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___InitOpen_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0LL )
    sub_1C22094(this, x);
  return questEntity->fields.id == this->fields.questId && x->fields.phase == this->fields.questPhase;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___InitOpen_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0LL )
    sub_1C22094(this, x);
  return warEntity->fields.id == this->fields.settingQuestWarId;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___CreateChapterList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  const char *name; // x8
  bool result; // w0
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v9; // x0
  const MethodInfo *v10; // x1

  v3 = item;
  v4 = this;
  if ( (byte_4BD8690 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1C21E38(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_4BD8690 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  item = (ListViewItem_o *)RecommendSupportQuestBoardListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      name = klass->_1.name;
      if ( name )
        return *((_DWORD *)name + 4) == v4->fields.focusWarId;
    }
LABEL_9:
    sub_1C22094(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)sub_1C22354(v3);
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___ctor(v9, v10);
  return result;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0LL || (warEntity = folderInfo->fields.warEntity) == 0LL )
    sub_1C22094(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0LL || (warEntity = folderInfo->fields.warEntity) == 0LL )
    sub_1C22094(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__3(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x9
  struct WarEntity_o *v5; // x9

  if ( !x
    || (warEntity = x->fields.warEntity) == 0LL
    || (folderInfo = this->fields.folderInfo) == 0LL
    || (v5 = folderInfo->fields.warEntity) == 0LL )
  {
    sub_1C22094(this, x);
  }
  return warEntity->fields.id == v5->fields.id;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__5(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v6; // x8
  float intoTime; // s9
  System_Action_o *_9__6; // x21
  float v9; // s8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD8691 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__);
    byte_4BD8691 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, 0LL);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  intoTime = v6->fields.intoTime;
  _9__6 = this->fields.__9__6;
  v9 = OUT_POS_OFS_X;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__,
      0LL);
    this->fields.__9__6 = _9__6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__6, (int64_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C22094(_4__this, method);
  SlideFadeObject__SlideIn_34813264(slideComponent, v9, intoTime, 0.0, _9__6, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__6(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)_4__this->fields.slideComponent) == 0LL)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1C22094(this, method);
  }
  v4->fields.state = 0;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___OnClickListView_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4BD8692 & 1) == 0 )
  {
    sub_1C21E38(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4BD8692 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !klass )
    goto LABEL_17;
  RecommendSupportData__SetQuest(klass, (int32_t)Instance[7].monitor, this->fields.info, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_17;
  item = CS___8__locals1->fields.item;
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsSetting_k__BackingField )
    goto LABEL_15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0LL
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_3042880 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL
    || (Instance = (Il2CppObject *)Instance[10].klass) == 0LL )
  {
LABEL_17:
    sub_1C22094(Instance, v4);
  }
  RecommendSupportListViewManager__SetItemSub((RecommendSupportListViewManager_o *)Instance, this->fields.index, v8);
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v9);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2___OnClickListView_b__4(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *v2; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals2; // x21
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x19
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x20
  int32_t id; // w22
  System_Action_o *_9__5; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v2 = this;
  if ( (byte_4BD8693 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__);
    byte_4BD8693 = 1;
  }
  CS___8__locals2 = v2->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  folderInfo = CS___8__locals2->fields.folderInfo;
  if ( !folderInfo )
    goto LABEL_10;
  warEntity = folderInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_10;
  _4__this = CS___8__locals2->fields.__4__this;
  questList = v2->fields.questList;
  id = warEntity->fields.id;
  _9__5 = CS___8__locals2->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
      0LL);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&CS___8__locals2->fields.__9__5,
      (int64_t)_9__5,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
LABEL_10:
    sub_1C22094(this, method);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__5, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v2; // x19
  System_Action_o *_9__1; // x24
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t focusWarId; // w23
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v2 = this;
  if ( (byte_4BD8694 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__);
    byte_4BD8694 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  folderInfo = v2->fields.folderInfo;
  warId = v2->fields.warId;
  focusWarId = v2->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_1C22094(this, method);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, focusWarId, _9__1, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v6; // x8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  float v9; // s8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD8695 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__);
    byte_4BD8695 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, 0LL);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  intoTime = v6->fields.intoTime;
  _9__2 = this->fields.__9__2;
  v9 = OUT_POS_OFS_X;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C22094(_4__this, method);
  SlideFadeObject__SlideIn_34813264(slideComponent, v9, intoTime, 0.0, _9__2, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)_4__this->fields.slideComponent) == 0LL)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1C22094(this, method);
  }
  v4->fields.state = 0;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0___OnclickBack_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *v4; // x20
  __int64 parentWarFolder; // x8
  int32_t parentWarId; // w19
  int32_t v7; // w1
  __int64 v9; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v10; // 0:x0.8

  v4 = this;
  if ( (byte_4BD8696 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    byte_4BD8696 = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  parentWarFolder = (__int64)v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v7 = *(_DWORD *)(parentWarFolder + 24);
    v10 = (System_Nullable_int__o)&v9;
    v9 = 0LL;
    System_Nullable_int____ctor(v10, v7, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v9;
  }
  return (unsigned __int8)parentWarFolder != 0 && parentWarId == HIDWORD(parentWarFolder);
}