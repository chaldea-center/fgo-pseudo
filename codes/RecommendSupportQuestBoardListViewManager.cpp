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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x20
  WarEntity_o *Item; // x0
  __int64 v29; // x1
  int32_t size; // w29
  RecommendSupportQuestBoardListViewManager___c_c *v31; // x0
  System_Comparison_T__o *_9__22_0; // x24
  Il2CppObject *v33; // x25
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  int32_t id; // w1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v44; // x8
  __int64 v45; // x19
  int32_t PrioredParentId; // w1
  int32_t v47; // w24
  __int64 v48; // x8
  char v49; // w27
  __int64 v50; // x8
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v52; // x21
  Il2CppObject *v53; // x28
  RecommendSupportQuestBoardListViewItem_o *v54; // x26
  const MethodInfo *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int32_t v66; // w1
  const MethodInfo *v67; // x2
  UnityEngine_Object_o *scrollBar; // x23
  struct UIScrollBar_o *v69; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v70; // x23
  System_Predicate_object__o *v71; // x24
  Il2CppObject *v72; // x0
  int32_t warId; // [xsp+1Ch] [xbp-84h]
  __int64 v75; // [xsp+28h] [xbp-78h]
  __int64 v76; // [xsp+30h] [xbp-70h] BYREF
  int32_t kind; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_int__o v78; // 0:x0.8
  System_Nullable_int__o v79; // 0:x0.8

  if ( (byte_4BB084A & 1) == 0 )
  {
    sub_1C13D24(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo, folderInfos);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Find__, v11);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__,
      v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__,
      v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v14);
    sub_1C13D24(&Method_System_Nullable_int__GetValueOrDefault__, v15);
    sub_1C13D24(&Method_System_Nullable_int___ctor__, v16);
    sub_1C13D24(&Method_System_Nullable_int__get_HasValue__, v17);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v18);
    sub_1C13D24(&System_Predicate_ListViewItem__TypeInfo, v19);
    sub_1C13D24(&RecommendSupportQuestBoardListViewItem_TypeInfo, v20);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__, v21);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__, v22);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo, v23);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v24);
    sub_1C13D24(&StringLiteral_1/*""*/, v25);
    sub_1C13D24(&StringLiteral_15432/*"UpdateBattlePointImmediately"*/, v26);
    byte_4BB084A = 1;
  }
  kind = 0;
  v27 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_56;
  *(_DWORD *)(v27 + 16) = focusWarId;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.warArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( folderInfos )
  {
    size = folderInfos->fields._size;
    if ( size >= 2 )
    {
      v31 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v31 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v31->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v33 = (Il2CppObject *)v31->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v33,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__22_0;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
          (int64_t)_9__22_0,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
      System_Collections_Generic_List_object___Sort_56814736(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__22_0,
        (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
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
    v45 = 0LL;
LABEL_20:
    v75 = 0LL;
    goto LABEL_21;
  }
  warEntity = settingQuestInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_56;
  id = warEntity->fields.id;
  v78 = (System_Nullable_int__o)&v76;
  v76 = 0LL;
  System_Nullable_int____ctor(v78, id, (const MethodInfo_37493FC *)Method_System_Nullable_int___ctor__);
  v44 = this->fields.settingQuestInfo;
  v45 = v76;
  if ( !v44 )
    goto LABEL_20;
  Item = v44->fields.warEntity;
  if ( !Item )
    goto LABEL_56;
  PrioredParentId = WarEntity__GetPrioredParentId(Item, 0LL);
  v79 = (System_Nullable_int__o)&v76;
  v76 = 0LL;
  System_Nullable_int____ctor(v79, PrioredParentId, (const MethodInfo_37493FC *)Method_System_Nullable_int___ctor__);
  v75 = v76;
LABEL_21:
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v47 = 0;
      while ( 1 )
      {
        Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)folderInfos,
                                v47,
                                (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Item )
          break;
        v48 = *(_QWORD *)&Item->fields.id;
        if ( !v48 )
          break;
        if ( (_BYTE)v45 && *(_DWORD *)(v48 + 16) == HIDWORD(v45) )
        {
          v49 = 1;
        }
        else
        {
          Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)folderInfos,
                                  v47,
                                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Item )
            break;
          v50 = *(_QWORD *)&Item->fields.id;
          if ( !v50 )
            break;
          v49 = (unsigned __int8)v75 != 0 && *(_DWORD *)(v50 + 16) == HIDWORD(v75);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v52 = this;
        v53 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)folderInfos,
                v47,
                (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v54 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C13F70(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v54,
          v47,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)v53,
          0LL,
          v49,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v55);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v64 = itemList->fields._size;
        if ( (unsigned int)v64 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v54,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &items->obj.klass + v64;
          itemList->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v54;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)v54, v56, v57, v58, v59, v60, v61);
        }
        ++v47;
        this = v52;
        if ( size == v47 )
          goto LABEL_38;
      }
    }
LABEL_56:
    sub_1C13F80(Item, v29);
  }
LABEL_38:
  Item = (WarEntity_o *)this->fields.titleInfo;
  if ( !Item )
    goto LABEL_56;
  Item = (WarEntity_o *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Item, warId, &kind, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_56;
  if ( ((unsigned __int8)Item & 1) != 0 )
    v66 = kind;
  else
    v66 = 92;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v66, 0, 0, 0LL);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, warId, v67);
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
      v69 = this->fields.scrollBar;
      if ( !v69 )
        goto LABEL_56;
      if ( v69->fields.mSize <= 0.98 )
      {
        v70 = this->fields.itemList;
        v71 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v71,
          (Il2CppObject *)v27,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
          0LL);
        if ( !v70 )
          goto LABEL_56;
        v72 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v70,
                (System_Predicate_T__o *)v71,
                (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v72 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v72[1].klass), 0LL);
      }
    }
  }
  Item = (WarEntity_o *)this->fields.selectMenuBackBtn;
  if ( !Item )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, warId != 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15432/*"UpdateBattlePointImmediately"*/,
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t size; // w21
  System_Collections_Generic_List_TSource__o *v27; // x0
  System_Collections_Generic_List_object__o *v28; // x23
  RecommendSupportQuestBoardListViewManager___c_c *v29; // x0
  System_Func_object__int__o *_9__23_0; // x23
  Il2CppObject *v31; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v40; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x22
  System_Func_object__int__o *_9__23_1; // x23
  Il2CppObject *v43; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v52; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x22
  System_Func_object__int__o *_9__23_2; // x23
  Il2CppObject *v55; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  int32_t v64; // w22
  void *Instance; // x0
  __int64 v66; // x1
  RecommendSupportData_o *v67; // x24
  __int64 v68; // x8
  int32_t v69; // w25
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v72; // w26
  RecommendSupportQuestBoardListViewManager_o *v73; // x27
  Il2CppObject *Item; // x0
  int32_t v75; // w19
  System_String_o *v76; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v77; // x29
  RecommendSupportQuestBoardListViewItem_o *v78; // x25
  const MethodInfo *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  System_Collections_ICollection_o *v90; // x22
  const MethodInfo *v91; // x2
  TitleInfoControl_o *titleInfo; // x22
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v94; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v95; // x21
  System_Predicate_object__o *v96; // x22
  Il2CppObject *v97; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  Il2CppObject *v105; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  __int64 settingIndex; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BB084B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_MapMaster___, questInfos);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v8);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v10);
    sub_1C13D24(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_ListViewItem__Find__, v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__,
      v14);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__,
      v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    sub_1C13D24(&System_Predicate_ListViewItem__TypeInfo, v17);
    sub_1C13D24(&RecommendSupportQuestBoardListViewItem_TypeInfo, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v19);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__, v20);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__, v21);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__, v22);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__, v23);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v24);
    sub_1C13D24(&StringLiteral_15432/*"UpdateBattlePointImmediately"*/, v25);
    byte_4BB084B = 1;
  }
  svtName = 0LL;
  settingIndex = 0LL;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.questArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    v27 = System_Linq_Enumerable__ToList_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
            (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    if ( size >= 3 )
    {
      v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_0 = (System_Func_object__int__o *)v29->static_fields->__9__23_0;
      if ( !_9__23_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__23_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_0,
          v31,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__23_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_0;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
          (int64_t)_9__23_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      v39 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__23_0,
              (const MethodInfo_2FB895C *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v40 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v41 = v39;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v40 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__int__o *)v40->static_fields->__9__23_1;
      if ( !_9__23_1 )
      {
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v40->static_fields->__9;
        _9__23_1 = (System_Func_object__int__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_1,
          v43,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__,
          0LL);
        v44 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v44->__9__23_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_1;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v44->__9__23_1, (int64_t)_9__23_1, v45, v46, v47, v48, v49, v50);
      }
      v51 = System_Linq_Enumerable__ThenBy_object__int_(
              v41,
              (System_Func_TSource__TKey__o *)_9__23_1,
              (const MethodInfo_2FC81C8 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v52 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v53 = v51;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v52 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_2 = (System_Func_object__int__o *)v52->static_fields->__9__23_2;
      if ( !_9__23_2 )
      {
        if ( !v52->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v52);
          v52 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v55 = (Il2CppObject *)v52->static_fields->__9;
        _9__23_2 = (System_Func_object__int__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_2,
          v55,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__,
          0LL);
        v56 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v56->__9__23_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_2;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v56->__9__23_2, (int64_t)_9__23_2, v57, v58, v59, v60, v61, v62);
      }
      v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v53,
                                                                   (System_Func_TSource__TKey__o *)_9__23_2,
                                                                   (const MethodInfo_2FC81C8 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v28 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v63,
                                                           (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v28 = (System_Collections_Generic_List_object__o *)v27;
      if ( size < 1 )
        goto LABEL_39;
    }
    v64 = 0;
    do
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v28 )
        goto LABEL_71;
      v67 = (RecommendSupportData_o *)*((_QWORD *)Instance + 14);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v28,
                   v64,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      v68 = *((_QWORD *)Instance + 2);
      if ( !v68 )
        goto LABEL_71;
      v69 = *(_DWORD *)(v68 + 16);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v28,
                   v64,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v67 )
        goto LABEL_71;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         v67,
                         v69,
                         *((_DWORD *)Instance + 10),
                         (int32_t *)&settingIndex,
                         &svtName,
                         0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v72 = IsQuestSetting;
      v73 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v28,
               v64,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v75 = settingIndex;
      v76 = svtName;
      v77 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v78 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C13F70(RecommendSupportQuestBoardListViewItem_TypeInfo);
      RecommendSupportQuestBoardListViewItem___ctor(v78, v64, 0LL, v77, v72, v75, v76, v79);
      if ( !itemList )
        goto LABEL_71;
      items = itemList->fields._items;
      v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_71;
      v88 = itemList->fields._size;
      this = v73;
      if ( (unsigned int)v88 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v78,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = &items->obj.klass + v88;
        itemList->fields._size = v88 + 1;
        v89[4] = (Il2CppClass *)v78;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)v78, v80, v81, v82, v83, v84, v85);
      }
    }
    while ( size != ++v64 );
  }
LABEL_39:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = MapMaster__getList((MapMaster_o *)Instance, parentFolderWarId, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_71;
  v90 = (System_Collections_ICollection_o *)Instance;
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
    Instance = (void *)BasicHelper__IsNullOrEmpty(v90, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v90 )
        goto LABEL_71;
      if ( !LODWORD(v90[1].monitor) )
        sub_1C13F88(Instance, v66);
      Instance = v90[2].klass;
      if ( !Instance )
        goto LABEL_71;
      titleInfo = this->fields.titleInfo;
      Instance = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0LL);
      if ( !titleInfo )
        goto LABEL_71;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Instance, 0, 1, 0, 0LL);
    }
  }
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v91);
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
      v94 = this->fields.scrollBar;
      if ( !v94 )
        goto LABEL_71;
      if ( v94->fields.mSize <= 0.98 )
      {
        v95 = this->fields.itemList;
        Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
          Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v96 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
        if ( !v96 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v97 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v96 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            v96,
            v97,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__,
            0LL);
          v98 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v98->__9__23_3 = (struct System_Predicate_ListViewItem__o *)v96;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v98->__9__23_3, (int64_t)v96, v99, v100, v101, v102, v103, v104);
        }
        if ( v95 )
        {
          v105 = System_Collections_Generic_List_object___Find(
                   (System_Collections_Generic_List_object__o *)v95,
                   (System_Predicate_T__o *)v96,
                   (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v105 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v105[1].klass), 0LL);
          goto LABEL_69;
        }
LABEL_71:
        sub_1C13F80(Instance, v66);
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
    (System_String_o *)StringLiteral_15432/*"UpdateBattlePointImmediately"*/,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v27; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v30; // s9
  System_Action_o *v31; // x19

  if ( (byte_4BB084D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, folderInfo);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__, v9);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo, v10);
    byte_4BB084D = 1;
  }
  v11 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = folderInfo;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)folderInfo, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v11 + 32) = warId;
  *(_DWORD *)(v11 + 36) = focusWarId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v27);
  extiTime = this->fields.extiTime;
  v30 = OUT_POS_OFS_X;
  v31 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__,
    0LL);
  if ( !slideComponent )
LABEL_6:
    sub_1C13F80(v12, v13);
  SlideFadeObject__SlideOut_34728324(slideComponent, v30, extiTime, 0.0, v31, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BalanceConfig_c *v17; // x0
  int32_t RecommendSupportMemberMax; // w20
  System_Collections_Generic_List_object__o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  int32_t i; // w27
  BalanceConfig_c *v28; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *v30; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  const MethodInfo *v42; // x1

  if ( (byte_4BB0847 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo, v8);
    byte_4BB0847 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.slideComponent,
    (int64_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v17->static_fields->RecommendSupportMemberMax;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
  System_Collections_Generic_List_object____ctor_56805896(
    v19,
    RecommendSupportMemberMax,
    (const MethodInfo_362CA08 *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v19;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.selectWarId, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  for ( i = 0; ; ++i )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    if ( i >= v28->static_fields->RecommendSupportMemberMax )
      break;
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v30,
      (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( !selectWarId )
      goto LABEL_17;
    items = selectWarId->fields._items;
    v39 = Method_System_Collections_Generic_List_Dictionary_int__int___Add__;
    ++selectWarId->fields._version;
    if ( !items )
      goto LABEL_17;
    size = selectWarId->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectWarId,
        (Il2CppObject *)v30,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v41[4] = (Il2CppClass *)v30;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, v32, v33, v34, v35, v36, v37);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_1C13F80(questSelectDialog, v26);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v26);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v42);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v18; // x20
  __int64 v19; // x1
  void *titleInfo; // x0
  RecommendSupportData_o *v21; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  System_Func_object__bool__o *v23; // x22
  Il2CppObject *v24; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o **p_settingQuestInfo; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x20
  struct WarEntity_o *warEntity; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v34; // x21
  System_Func_object__bool__o *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v37; // x0
  const MethodInfo *v38; // x4
  System_Collections_Generic_List_object__o *selectWarId; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v41; // x0
  System_Func_object__bool__o *_9__21_1; // x21
  Il2CppObject *v43; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v52; // x0
  const MethodInfo *v53; // x5
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB0849 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v3);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v5);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v7);
    sub_1C13D24(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo, v8);
    sub_1C13D24(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v11);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__, v12);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__, v13);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo, v14);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__, v15);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo, v16);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v17);
    byte_4BB0849 = 1;
  }
  value = 0;
  v18 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0LL, 1, 0LL, 92, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite_38286168((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 1, 0LL);
  this->fields.state = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  v21 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v18 || !v21 )
    goto LABEL_26;
  RecommendSupportData__TryGetQuest(v21, *((_DWORD *)titleInfo + 30), (int32_t *)(v18 + 16), (int32_t *)(v18 + 20), 0LL);
  recommendQuestList = this->fields.recommendQuestList;
  v23 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v18,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  p_settingQuestInfo = &this->fields.settingQuestInfo;
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v24;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.settingQuestInfo, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  if ( this->fields.settingQuestInfo )
  {
    v32 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0LL);
    if ( *p_settingQuestInfo )
    {
      warEntity = (*p_settingQuestInfo)->fields.warEntity;
      if ( warEntity )
      {
        if ( v32 )
        {
          *(_DWORD *)(v32 + 16) = warEntity->fields.id;
          v34 = this->fields.recommendQuestList;
          v35 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v35,
            (Il2CppObject *)v32,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__,
            0LL);
          v36 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                  (System_Func_TSource__bool__o *)v35,
                  (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v37 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v36, (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v37, *(_DWORD *)(v32 + 16), 0LL, v38);
          return;
        }
      }
    }
LABEL_26:
    sub_1C13F80(titleInfo, v19);
  }
  this->fields.currentFolderWarId = 0;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  if ( !selectWarId )
    goto LABEL_26;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_328AE70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v41 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v41 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v41->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__21_1,
      v43,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__,
      0LL);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__21_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
      (int64_t)_9__21_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__21_1,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v52 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v51, (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v52, 0, value, 0LL, v53);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitQuestFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_Collections_Generic_List_object__o *v32; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **p_recommendQuestFolderList; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *Master_object; // x25
  Il2CppObject *v48; // x20
  CommonReleaseMaster_o *IsOpen; // x0
  __int64 dispCommonReleaseId; // x1
  CommonReleaseMaster_o *v51; // x28
  RecommendSupportQuestEntity_array *List; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x25
  unsigned int v55; // w21
  RecommendSupportQuestEntity_o *v56; // x22
  __int64 v57; // x27
  int32_t questId; // w28
  System_String_o *questMessage; // x25
  int32_t priority; // w22
  int32_t questPhase; // w28
  WarEntity_o *v62; // x23
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v63; // x29
  const MethodInfo *v64; // x6
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppClass *v71; // x8
  _QWORD *v72; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x25
  System_Func_object__bool__o *v76; // x22
  int32_t PrioredParentId; // w29
  System_Collections_Generic_List_object__o *v78; // x27
  int64_t v79; // x22
  int64_t v80; // x28
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_Object_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  Il2CppClass **v96; // x0
  _BOOL8 v97; // x0
  __int64 v98; // x1
  System_Collections_Generic_List_object__o *v99; // x21
  Il2CppObject *v100; // x23
  int64_t v101; // x22
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x0
  __int64 v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x0
  Il2CppObject **v120; // [xsp+8h] [xbp-E8h]
  QuestEntity_o *questEnt; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o **p_recommendQuestList; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_HashSet_int__o *v123; // [xsp+20h] [xbp-D0h]
  Il2CppObject *v124; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v125; // [xsp+30h] [xbp-C0h]
  CommonReleaseMaster_o *v126; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v127; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *v128; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v129; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *v130; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4BB0848 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_SpotMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMaster_WarMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v9);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v12);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_1C13D24(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v16);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Remove__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v20);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v21);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__,
      v22);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__,
      v23);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__,
      v24);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__,
      v25);
    sub_1C13D24(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo, v26);
    sub_1C13D24(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      v27);
    sub_1C13D24(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo, v28);
    sub_1C13D24(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo, v29);
    sub_1C13D24(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
      v30);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo, v31);
    byte_4BB0848 = 1;
  }
  v130 = 0LL;
  entity = 0LL;
  memset(&v129, 0, sizeof(v129));
  v128 = 0LL;
  v32 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  p_recommendQuestFolderList = &this->fields.recommendQuestFolderList;
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v32;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.recommendQuestFolderList,
    (int64_t)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v40;
  p_recommendQuestList = &this->fields.recommendQuestList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.recommendQuestList,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v124 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
  v125 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SpotMaster___);
  v48 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarMaster___);
  IsOpen = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_55;
  v51 = IsOpen;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v123 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v123,
    (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_55;
  max_length = List->max_length;
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)v124;
  if ( max_length >= 1 )
  {
    v55 = 0;
    v126 = v51;
    do
    {
      if ( v55 >= max_length )
        sub_1C13F88(IsOpen, dispCommonReleaseId);
      v56 = List->m_Items[v55];
      v57 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v57, 0LL);
      if ( !v56 )
        goto LABEL_55;
      if ( !v56->fields.baseQuestId )
      {
        dispCommonReleaseId = (unsigned int)v56->fields.dispCommonReleaseId;
        if ( (_DWORD)dispCommonReleaseId )
        {
          if ( !v51 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v51, dispCommonReleaseId, 0LL, 0, 0LL);
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        else
        {
          questId = v56->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = (CommonReleaseMaster_o *)CondType__IsQuestClear_38735352(questId, -1, 0, 0LL);
          v51 = v126;
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        if ( !v54 )
          goto LABEL_55;
        IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v54,
                                            &entity,
                                            v56->fields.questId,
                                            (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpen & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)v125;
          if ( !v125 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v125,
                                              &v130,
                                              (int32_t)entity[3].klass,
                                              (const MethodInfo_3238670 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpen & 1) != 0 )
          {
            if ( !v57 || !v130 || !v48 )
              goto LABEL_55;
            IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
                                                (Il2CppObject **)(v57 + 16),
                                                HIDWORD(v130[1].klass),
                                                (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
            {
              questMessage = v56->fields.questMessage;
              questPhase = v56->fields.questPhase;
              priority = v56->fields.priority;
              v120 = (Il2CppObject **)(v57 + 16);
              questEnt = (QuestEntity_o *)entity;
              v62 = *(WarEntity_o **)(v57 + 16);
              v63 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_1C13F70(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                v63,
                questEnt,
                v62,
                questMessage,
                questPhase,
                priority,
                v64);
              IsOpen = (CommonReleaseMaster_o *)*p_recommendQuestList;
              if ( !*p_recommendQuestList )
                goto LABEL_55;
              v71 = *(Il2CppClass **)&IsOpen->fields._MasterKind_k__BackingField;
              v72 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
              ++HIDWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( !v71 )
                goto LABEL_55;
              MasterName_k__BackingField_low = SLODWORD(IsOpen->fields._MasterName_k__BackingField);
              v51 = v126;
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v71->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsOpen,
                  (Il2CppObject *)v63,
                  *(const MethodInfo_362D1CC **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
              }
              else
              {
                v74 = &v71->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsOpen->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v74[4] = v63;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v63, v65, v66, v67, v68, v69, v70);
              }
              v75 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_recommendQuestFolderList;
              v76 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v76,
                (Il2CppObject *)v57,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                0LL);
              IsOpen = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                                  v75,
                                                  (System_Func_TSource__bool__o *)v76,
                                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)v124;
              if ( !IsOpen )
              {
                IsOpen = (CommonReleaseMaster_o *)*v120;
                if ( !*v120 )
                  goto LABEL_55;
                PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpen, 0LL);
                IsOpen = (CommonReleaseMaster_o *)v123;
                if ( !v123 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___Add(
                  v123,
                  PrioredParentId,
                  (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
                v78 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
                v79 = (int64_t)*v120;
                v80 = sub_1C13F70(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v80, 0LL);
                *(_QWORD *)(v80 + 16) = v79;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 16), v79, v81, v82, v83, v84, v85, v86);
                *(_DWORD *)(v80 + 24) = PrioredParentId;
                if ( !v78 )
                  goto LABEL_55;
                items = v78->fields._items;
                v94 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                ++v78->fields._version;
                if ( !items )
                  goto LABEL_55;
                size = v78->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v78,
                    (Il2CppObject *)v80,
                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
                }
                else
                {
                  v96 = &items->obj.klass + size;
                  v78->fields._size = size + 1;
                  v96[4] = (Il2CppClass *)v80;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v96 + 4), v80, v87, v88, v89, v90, v91, v92);
                }
                v51 = v126;
              }
            }
          }
        }
      }
LABEL_12:
      max_length = List->max_length;
    }
    while ( (int)++v55 < max_length );
  }
  if ( !v123 )
LABEL_55:
    sub_1C13F80(IsOpen, dispCommonReleaseId);
  System_Collections_Generic_HashSet_int___Remove(
    v123,
    0,
    (const MethodInfo_34E0BA0 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v127,
    v123,
    (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v129 = v127;
  while ( 1 )
  {
    v97 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v129,
            (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v97 )
      break;
    if ( !v48 )
      sub_1C13F80(v97, v98);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
           &v128,
           (int32_t)v129.fields._current,
           (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v99 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
      v100 = v128;
      v101 = sub_1C13F70(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v101, 0LL);
      *(_QWORD *)(v101 + 16) = v100;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v101 + 16), (int64_t)v100, v102, v103, v104, v105, v106, v107);
      *(_DWORD *)(v101 + 24) = 0;
      if ( !v99 )
        sub_1C13F80(v108, v109);
      v116 = v99->fields._items;
      v117 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v99->fields._version;
      if ( !v116 )
        sub_1C13F80(v108, v109);
      v118 = v99->fields._size;
      if ( (unsigned int)v118 >= v116->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v99,
          (Il2CppObject *)v101,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
      }
      else
      {
        v119 = &v116->obj.klass + v118;
        v99->fields._size = v118 + 1;
        v119[4] = (Il2CppClass *)v101;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v119 + 4), v101, v110, v111, v112, v113, v114, v115);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v129,
    (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnClickListView(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  int64_t v24; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  int64_t v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int v41; // w21
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  int64_t v51; // x21
  System_Collections_Generic_List_T__o *recommendQuestFolderList; // x23
  System_Func_object__bool__o *v53; // x24
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v54; // x22
  System_Func_object__bool__o *v55; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_List_TSource__o *v57; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x22
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v59; // x20
  __int64 v60; // x8
  const MethodInfo *v61; // x4
  __int64 v62; // x8
  __int64 v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x8
  __int64 v77; // x8
  int64_t v78; // x1
  __int64 v79; // x8
  RecommendSupportQuestBoardListViewItem_o *v80; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  int monitor; // w23
  int v83; // w24
  System_Action_o *v84; // x22
  const MethodInfo *v85; // x4
  __int64 v86; // x21
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  Il2CppObject *v93; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x22
  System_Func_object__bool__o *v95; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  System_Collections_Generic_List_TSource__o *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v105; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v108; // s9
  System_Action_o *v109; // x19
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BB084C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, obj);
    sub_1C13D24(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v8);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v10);
    sub_1C13D24(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo, v11);
    sub_1C13D24(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v13);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v15);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__, v16);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__, v17);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__, v18);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo, v19);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__, v20);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo, v21);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__, v22);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo, v23);
    byte_4BB084C = 1;
  }
  value = 0;
  v24 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_37;
  *(_QWORD *)(v24 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)this, v27, v28, v29, v30, v31, v32);
  if ( !obj )
    goto LABEL_37;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v26);
  *(_QWORD *)(v24 + 24) = Item;
  v34 = v24 + 24;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)Item, v35, v36, v37, v38, v39, v40);
  if ( !*(_QWORD *)(v24 + 24) )
    goto LABEL_37;
  v41 = *(unsigned __int8 *)(*(_QWORD *)(v24 + 24) + 128LL);
  v42 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v42 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v43 = (System_Reflection_MethodBase_o *)sub_1C13D08(v42, v42[4]);
  if ( v41 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0, 0LL);
  if ( !*(_QWORD *)v34 )
    goto LABEL_37;
  v50 = *(_QWORD *)(*(_QWORD *)v34 + 112LL);
  *(_QWORD *)(v24 + 16) = v50;
  v51 = v24 + 16;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 16), v50, v44, v45, v46, v47, v48, v49);
  if ( *(_QWORD *)(v24 + 16) )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v53 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v53,
      (Il2CppObject *)v24,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      0LL);
    Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                 recommendQuestFolderList,
                                 (System_Func_T__bool__o *)v53,
                                 (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v54 = this->fields.recommendQuestFolderList;
      v55 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v55,
        (Il2CppObject *)v24,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
        0LL);
      v56 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v54,
              (System_Func_TSource__bool__o *)v55,
              (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v57 = System_Linq_Enumerable__ToList_object_(
              v56,
              (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
      v59 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v57;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        if ( selectWarId )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       selectWarId,
                       (int32_t)Instance[7].monitor,
                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
          if ( *(_QWORD *)v51 )
          {
            v60 = *(_QWORD *)(*(_QWORD *)v51 + 16LL);
            if ( v60 )
            {
              if ( Instance )
              {
                Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                             (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                             *(_DWORD *)(v60 + 16),
                                             &value,
                                             (const MethodInfo_328AE70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
                if ( *(_QWORD *)v51 )
                {
                  v62 = *(_QWORD *)(*(_QWORD *)v51 + 16LL);
                  if ( v62 )
                  {
                    RecommendSupportQuestBoardListViewManager__DispFolderList(
                      this,
                      v59,
                      *(_DWORD *)(v62 + 16),
                      value,
                      v61);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C13F80(Instance, v26);
    }
  }
  if ( !*(_QWORD *)v34 )
    goto LABEL_37;
  if ( *(_QWORD *)(*(_QWORD *)v34 + 120LL) )
  {
    v63 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v63, 0LL);
    if ( !v63 )
      goto LABEL_37;
    *(_QWORD *)(v63 + 32) = v24;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v63 + 32), v24, v64, v65, v66, v67, v68, v69);
    v76 = *(_QWORD *)(v63 + 32);
    if ( !v76 )
      goto LABEL_37;
    v77 = *(_QWORD *)(v76 + 24);
    if ( !v77 )
      goto LABEL_37;
    v78 = *(_QWORD *)(v77 + 120);
    *(_QWORD *)(v63 + 16) = v78;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v63 + 16), v78, v70, v71, v72, v73, v74, v75);
    v79 = *(_QWORD *)(v63 + 32);
    if ( !v79 )
      goto LABEL_37;
    v80 = *(RecommendSupportQuestBoardListViewItem_o **)(v79 + 24);
    if ( !v80 )
      goto LABEL_37;
    *(_DWORD *)(v63 + 24) = v80->fields._SettingSelectIndex_k__BackingField;
    questSelectDialog = this->fields.questSelectDialog;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    monitor = (int)Instance[7].monitor;
    v83 = *(_DWORD *)(v63 + 24);
    v84 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v84,
      (Il2CppObject *)v63,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__,
      0LL);
    if ( !questSelectDialog )
      goto LABEL_37;
    RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v80, monitor == v83, v84, v85);
  }
  else
  {
    v86 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v86, 0LL);
    if ( !v86 )
      goto LABEL_37;
    *(_QWORD *)(v86 + 24) = v24;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v86 + 24), v24, v87, v88, v89, v90, v91, v92);
    v93 = *(Il2CppObject **)(v86 + 24);
    if ( !v93 )
      goto LABEL_37;
    if ( v93[1].klass )
    {
      recommendQuestList = this->fields.recommendQuestList;
      v95 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v95,
        v93,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
        0LL);
      v96 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
              (System_Func_TSource__bool__o *)v95,
              (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v97 = System_Linq_Enumerable__ToList_object_(
              v96,
              (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      *(_QWORD *)(v86 + 16) = v97;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v86 + 16), (int64_t)v97, v98, v99, v100, v101, v102, v103);
      slideComponent = this->fields.slideComponent;
      this->fields.state = 1;
      OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v105);
      extiTime = this->fields.extiTime;
      v108 = OUT_POS_OFS_X;
      v109 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v109,
        (Il2CppObject *)v86,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
        0LL);
      if ( !slideComponent )
        goto LABEL_37;
      SlideFadeObject__SlideOut_34728324(slideComponent, v108, extiTime, 0.0, v109, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_Dictionary_int__int___o *selectWarId; // x8
  int64_t size; // x2
  int v12; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x8
  int64_t v14; // x2
  int v15; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x8
  int64_t v17; // x2
  PartyOrganizationUtility_o *p_recommendQuestList; // x19
  int v19; // w9

  if ( (byte_4BB0851 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__,
      method);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__, v9);
    byte_4BB0851 = 1;
  }
  selectWarId = this->fields.selectWarId;
  if ( selectWarId )
  {
    size = (unsigned int)selectWarId->fields._size;
    v12 = selectWarId->fields._version + 1;
    selectWarId->fields._size = 0;
    selectWarId->fields._version = v12;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)selectWarId->fields._items, 0, size, 0LL);
    this->fields.selectWarId = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.selectWarId, 0LL, size, v2, v3, v4, v5, v6);
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    v14 = (unsigned int)recommendQuestFolderList->fields._size;
    v15 = recommendQuestFolderList->fields._version + 1;
    recommendQuestFolderList->fields._size = 0;
    recommendQuestFolderList->fields._version = v15;
    if ( (int)v14 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestFolderList->fields._items, 0, v14, 0LL);
    this->fields.recommendQuestFolderList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.recommendQuestFolderList, 0LL, v14, v2, v3, v4, v5, v6);
  }
  recommendQuestList = this->fields.recommendQuestList;
  if ( recommendQuestList )
  {
    v17 = (unsigned int)recommendQuestList->fields._size;
    p_recommendQuestList = (PartyOrganizationUtility_o *)&this->fields.recommendQuestList;
    v19 = recommendQuestList->fields._version + 1;
    recommendQuestList->fields._size = 0;
    recommendQuestList->fields._version = v19;
    if ( (int)v17 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestList->fields._items, 0, v17, 0LL);
    p_recommendQuestList->klass = 0LL;
    sub_1C13CC8(p_recommendQuestList, 0LL, v17, v2, v3, v4, v5, v6);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickBack(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v26; // x22
  System_Func_object__bool__o *v27; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v29; // x21
  const MethodInfo *v30; // x4
  __int64 v31; // x8
  int32_t v32; // w3
  const MethodInfo *v33; // x2

  if ( (byte_4BB084F & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      method);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v3);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v4);
    sub_1C13D24(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v5);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v6);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__, v7);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v9);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__, v10);
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo, v11);
    byte_4BB084F = 1;
  }
  if ( !this->fields.state )
  {
    v12 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C13D08(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0, 0LL);
    if ( this->fields.currentFolderWarId )
    {
      v14 = sub_1C13F70(RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v16 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__,
        0LL);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v16,
                                                            (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v14 )
      {
        *(_QWORD *)(v14 + 16) = Item;
        v25 = v14 + 16;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)Item, v19, v20, v21, v22, v23, v24);
        v26 = this->fields.recommendQuestFolderList;
        v27 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v14,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__,
          0LL);
        v28 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                (System_Func_TSource__bool__o *)v27,
                (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v28,
                                                              (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v29 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( Item )
          {
            if ( !*(_QWORD *)v25 )
            {
              v32 = 0;
              goto LABEL_16;
            }
            v31 = *(_QWORD *)(*(_QWORD *)v25 + 16LL);
            if ( v31 )
            {
              v32 = *(_DWORD *)(v31 + 16);
LABEL_16:
              RecommendSupportQuestBoardListViewManager__DispFolderList(this, v29, Item->fields._size, v32, v30);
              return;
            }
          }
        }
      }
    }
    else
    {
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, v33);
        return;
      }
    }
    sub_1C13F80(Item, v18);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickSelectMenuBackBtn(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BB0850 & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BB0850 = 1;
  }
  if ( !this->fields.state )
  {
    v4 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v7);
    RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v8);
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
    sub_1C13F80(scrollView, method);
  }
  UIScrollView__UpdatePosition(scrollView, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(
        RecommendSupportQuestBoardListViewManager_o *this,
        int32_t parentFolderWarId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *Instance; // x0
  __int64 v11; // x1
  bool v12; // w0
  System_Collections_Generic_List_object__o *v13; // x22
  bool v14; // w21
  int32_t currentFolderWarId; // w1
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB084E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&parentFolderWarId);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8);
    byte_4BB084E = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || !selectWarId
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            selectWarId,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL
      || (v12 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                  Instance,
                  this->fields.currentFolderWarId,
                  &value,
                  (const MethodInfo_328AE70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__),
          v13 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId,
          v14 = v12,
          (Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
      || !v13
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v13,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL )
    {
      sub_1C13F80(Instance, v11);
    }
    currentFolderWarId = this->fields.currentFolderWarId;
    if ( v14 )
      System_Collections_Generic_Dictionary_int__int___set_Item(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_32897C4 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    else
      System_Collections_Generic_Dictionary_int__int___Add(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    sub_1C13F80(this, x);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB0852 & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v1);
    byte_4BB0852 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0LL )
    sub_1C13F80(this, x);
  return questEntity->fields.id;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.phase;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 methodPtr_low; // x9
  int32_t index; // w19
  RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *v8; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4BB0853 & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportQuestBoardListViewItem_TypeInfo, item);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1C13D24(
                                                                &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                v4);
    byte_4BB0853 = 1;
  }
  if ( !item )
    goto LABEL_8;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1C13F80(this, item);
  }
  v8 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)sub_1C14240(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(v8, v9, v10);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___InitOpen_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, x);
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
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v9; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v10; // x1
  const MethodInfo *v11; // x2

  v3 = item;
  v4 = this;
  if ( (byte_4BB0854 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1C13D24(
                                                                                  &RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                                  item);
    byte_4BB0854 = 1;
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
    sub_1C13F80(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)sub_1C14240(v3);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__0(v9, v10, v11);
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
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, x);
  }
  return warEntity->fields.id == v5->fields.id;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__5(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v7; // x8
  float intoTime; // s9
  System_Action_o *_9__6; // x21
  float v10; // s8
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB0855 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__, v3);
    byte_4BB0855 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_9;
  intoTime = v7->fields.intoTime;
  _9__6 = this->fields.__9__6;
  v10 = OUT_POS_OFS_X;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__,
      0LL);
    this->fields.__9__6 = _9__6;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__6, (int64_t)_9__6, v11, v12, v13, v14, v15, v16);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C13F80(_4__this, method);
  SlideFadeObject__SlideIn_34727380(slideComponent, v10, intoTime, 0.0, _9__6, 0LL);
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
    sub_1C13F80(this, method);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v9; // x2

  if ( (byte_4BB0856 & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4BB0856 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !klass )
    goto LABEL_16;
  RecommendSupportData__SetQuest(klass, (int32_t)Instance[7].monitor, this->fields.info, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  item = CS___8__locals1->fields.item;
  if ( !item )
    goto LABEL_16;
  if ( !item->fields._IsSetting_k__BackingField )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0LL
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_3021D48 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL )
  {
LABEL_16:
    sub_1C13F80(Instance, v5);
  }
  RecommendSupportSelectListViewMenu__RedisplaySub(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields.index,
    0LL);
LABEL_14:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
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
  const MethodInfo *v2; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *v3; // x21
  __int64 v4; // x1
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals2; // x19
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x21
  int32_t id; // w22
  System_Action_o *_9__5; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v3 = this;
  if ( (byte_4BB0857 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)sub_1C13D24(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
                                                                                  v4);
    byte_4BB0857 = 1;
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
  id = warEntity->fields.id;
  _9__5 = CS___8__locals2->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
      0LL);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&CS___8__locals2->fields.__9__5,
      (int64_t)_9__5,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !_4__this )
LABEL_10:
    sub_1C13F80(this, method);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__5, v2);
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
  const MethodInfo *v2; // x5
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x24
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t focusWarId; // w23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v3 = this;
  if ( (byte_4BB0858 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)sub_1C13D24(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
                                                                                  v4);
    byte_4BB0858 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  folderInfo = v3->fields.folderInfo;
  warId = v3->fields.warId;
  focusWarId = v3->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
    sub_1C13F80(this, method);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, focusWarId, _9__1, v2);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v7; // x8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  float v10; // s8
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB0859 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__, v3);
    byte_4BB0859 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_9;
  intoTime = v7->fields.intoTime;
  _9__2 = this->fields.__9__2;
  v10 = OUT_POS_OFS_X;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v11, v12, v13, v14, v15, v16);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C13F80(_4__this, method);
  SlideFadeObject__SlideIn_34727380(slideComponent, v10, intoTime, 0.0, _9__2, 0LL);
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
    sub_1C13F80(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 parentWarFolder; // x8
  int32_t parentWarId; // w19
  int32_t v9; // w1
  __int64 v11; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v12; // 0:x0.8

  v4 = this;
  if ( (byte_4BB085A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Nullable_int__GetValueOrDefault__, x);
    sub_1C13D24(&Method_System_Nullable_int___ctor__, v5);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)sub_1C13D24(
                                                                                  &Method_System_Nullable_int__get_HasValue__,
                                                                                  v6);
    byte_4BB085A = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
  parentWarFolder = (__int64)v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v9 = *(_DWORD *)(parentWarFolder + 24);
    v12 = (System_Nullable_int__o)&v11;
    v11 = 0LL;
    System_Nullable_int____ctor(v12, v9, (const MethodInfo_37493FC *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v11;
  }
  return (unsigned __int8)parentWarFolder != 0 && parentWarId == HIDWORD(parentWarFolder);
}