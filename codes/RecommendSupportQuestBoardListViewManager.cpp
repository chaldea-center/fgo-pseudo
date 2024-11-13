void __fastcall RecommendSupportQuestBoardListViewManager___ctor(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.slideOutPosX = 784.0;
  *(_QWORD *)&this->fields.warArrangementPitchY = 0xFFFFFF69FFFFFF8ALL;
  *(_QWORD *)&this->fields.intoTime = 0x3E8000003F000000LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewManager__CreateChapterList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfos,
        int32_t parentFolderWarId,
        int32_t focusWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x20
  WarEntity_o *Item; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  int32_t size; // w29
  RecommendSupportQuestBoardListViewManager___c_c *v50; // x0
  System_Comparison_T__o *_9__22_0; // x24
  Il2CppObject *v52; // x25
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  int32_t id; // w1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v63; // x8
  __int64 v64; // x19
  int32_t PrioredParentId; // w1
  int32_t v66; // w24
  __int64 v67; // x8
  char v68; // w27
  __int64 v69; // x8
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v71; // x21
  Il2CppObject *v72; // x28
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  RecommendSupportQuestBoardListViewItem_o *v76; // x26
  const MethodInfo *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  int32_t v88; // w1
  const MethodInfo *v89; // x2
  __int64 v90; // x1
  UnityEngine_Object_o *scrollBar; // x23
  __int64 v92; // x2
  __int64 v93; // x3
  struct UIScrollBar_o *v94; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v95; // x23
  System_Predicate_object__o *v96; // x24
  Il2CppObject *v97; // x0
  int32_t warId; // [xsp+1Ch] [xbp-84h]
  __int64 v100; // [xsp+28h] [xbp-78h]
  __int64 v101; // [xsp+30h] [xbp-70h] BYREF
  int32_t kind; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_int__o v103; // 0:x0.8
  System_Nullable_int__o v104; // 0:x0.8

  if ( (byte_4B123D6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      folderInfos,
      *(_QWORD *)&parentFolderWarId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Find__, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v18,
      v19);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v20, v21);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v28, v29);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewItem_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__, v32, v33);
    sub_1BCA7E0(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
      v34,
      v35);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo, v36, v37);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v38, v39);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_15356/*"UpdateScrollPosition"*/, v42, v43);
    byte_4B123D6 = 1;
  }
  kind = 0;
  v44 = sub_1BCAA2C(
          RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo,
          folderInfos,
          *(_QWORD *)&parentFolderWarId,
          *(_QWORD *)&focusWarId);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_56;
  *(_DWORD *)(v44 + 16) = focusWarId;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.warArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( folderInfos )
  {
    size = folderInfos->fields._size;
    if ( size >= 2 )
    {
      v50 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v46);
        v50 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v50->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50, v46);
          v50 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v50->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                               System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
                                               v46,
                                               v47,
                                               v48);
        System_Comparison_object____ctor(
          _9__22_0,
          v52,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__22_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
          (int64_t)_9__22_0,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      System_Collections_Generic_List_object___Sort_56244000(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__22_0,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
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
    v64 = 0LL;
LABEL_20:
    v100 = 0LL;
    goto LABEL_21;
  }
  warEntity = settingQuestInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_56;
  id = warEntity->fields.id;
  v103 = (System_Nullable_int__o)&v101;
  v101 = 0LL;
  System_Nullable_int____ctor(v103, id, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  v63 = this->fields.settingQuestInfo;
  v64 = v101;
  if ( !v63 )
    goto LABEL_20;
  Item = v63->fields.warEntity;
  if ( !Item )
    goto LABEL_56;
  PrioredParentId = WarEntity__GetPrioredParentId(Item, 0LL);
  v104 = (System_Nullable_int__o)&v101;
  v101 = 0LL;
  System_Nullable_int____ctor(v104, PrioredParentId, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  v100 = v101;
LABEL_21:
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v66 = 0;
      while ( 1 )
      {
        Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)folderInfos,
                                v66,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Item )
          break;
        v67 = *(_QWORD *)&Item->fields.id;
        if ( !v67 )
          break;
        if ( (_BYTE)v64 && *(_DWORD *)(v67 + 16) == HIDWORD(v64) )
        {
          v68 = 1;
        }
        else
        {
          Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)folderInfos,
                                  v66,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Item )
            break;
          v69 = *(_QWORD *)&Item->fields.id;
          if ( !v69 )
            break;
          v68 = (unsigned __int8)v100 != 0 && *(_DWORD *)(v69 + 16) == HIDWORD(v100);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v71 = this;
        v72 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)folderInfos,
                v66,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v76 = (RecommendSupportQuestBoardListViewItem_o *)sub_1BCAA2C(
                                                            RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                            v73,
                                                            v74,
                                                            v75);
        RecommendSupportQuestBoardListViewItem___ctor(
          v76,
          v66,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)v72,
          0LL,
          v68,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v77);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v86 = itemList->fields._size;
        if ( (unsigned int)v86 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v76,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v87 = &items->obj.klass + v86;
          itemList->fields._size = v86 + 1;
          v87[4] = (Il2CppClass *)v76;
          sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 4), (int64_t)v76, v78, v79, v80, v81, v82, v83);
        }
        ++v66;
        this = v71;
        if ( size == v66 )
          goto LABEL_38;
      }
    }
LABEL_56:
    sub_1BCAA3C(Item, v46);
  }
LABEL_38:
  Item = (WarEntity_o *)this->fields.titleInfo;
  if ( !Item )
    goto LABEL_56;
  Item = (WarEntity_o *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Item, warId, &kind, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_56;
  if ( ((unsigned __int8)Item & 1) != 0 )
    v88 = kind;
  else
    v88 = 92;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v88, 0, 0, 0LL);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, warId, v89);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
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
      v94 = this->fields.scrollBar;
      if ( !v94 )
        goto LABEL_56;
      if ( v94->fields.mSize <= 0.98 )
      {
        v95 = this->fields.itemList;
        v96 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v46, v92, v93);
        System_Predicate_object____ctor(
          v96,
          (Il2CppObject *)v44,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
          0LL);
        if ( !v95 )
          goto LABEL_56;
        v97 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v95,
                (System_Predicate_T__o *)v96,
                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v97 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v97[1].klass), 0LL);
      }
    }
  }
  Item = (WarEntity_o *)this->fields.selectMenuBackBtn;
  if ( !Item )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, warId != 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15356/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewManager__CreateQuestList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questInfos,
        int32_t parentFolderWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  int32_t size; // w21
  System_Collections_Generic_List_TSource__o *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_object__o *v50; // x23
  RecommendSupportQuestBoardListViewManager___c_c *v51; // x0
  System_Func_object__int__o *_9__23_0; // x23
  Il2CppObject *v53; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  RecommendSupportQuestBoardListViewManager___c_c *v65; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x22
  System_Func_object__int__o *_9__23_1; // x23
  Il2CppObject *v68; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  RecommendSupportQuestBoardListViewManager___c_c *v80; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v81; // x22
  System_Func_object__int__o *_9__23_2; // x23
  Il2CppObject *v83; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  int32_t v92; // w22
  void *Instance; // x0
  __int64 v94; // x1
  RecommendSupportData_o *v95; // x24
  __int64 v96; // x8
  int32_t v97; // w25
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v100; // w26
  RecommendSupportQuestBoardListViewManager_o *v101; // x27
  Il2CppObject *Item; // x0
  int32_t v103; // w19
  System_String_o *v104; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v105; // x29
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  RecommendSupportQuestBoardListViewItem_o *v109; // x25
  const MethodInfo *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct System_Object_array *items; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  System_Collections_ICollection_o *v121; // x22
  const MethodInfo *v122; // x2
  TitleInfoControl_o *titleInfo; // x22
  __int64 v124; // x1
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v126; // x2
  __int64 v127; // x3
  struct UIScrollBar_o *v128; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v129; // x21
  System_Predicate_object__o *v130; // x22
  Il2CppObject *v131; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  Il2CppObject *v139; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  __int64 settingIndex; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B123D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MapMaster___, questInfos, *(_QWORD *)&parentFolderWarId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v13,
      v14);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Find__, v19, v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__,
      v23,
      v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v27, v28);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewItem_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__, v33, v34);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__, v35, v36);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__, v37, v38);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__, v39, v40);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_15356/*"UpdateScrollPosition"*/, v43, v44);
    byte_4B123D7 = 1;
  }
  svtName = 0LL;
  settingIndex = 0LL;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.questArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    v47 = System_Linq_Enumerable__ToList_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
            (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    if ( size >= 3 )
    {
      v51 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v45);
        v51 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_0 = (System_Func_object__int__o *)v51->static_fields->__9__23_0;
      if ( !_9__23_0 )
      {
        if ( !v51->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v51, v45);
          v51 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v53 = (Il2CppObject *)v51->static_fields->__9;
        _9__23_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                   System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo,
                                                   v45,
                                                   v48,
                                                   v49);
        System_Func_object__int____ctor(
          _9__23_0,
          v53,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__23_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
          (int64_t)_9__23_0,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      v61 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__23_0,
              (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v65 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v66 = v61;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v62);
        v65 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__int__o *)v65->static_fields->__9__23_1;
      if ( !_9__23_1 )
      {
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65, v62);
          v65 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v68 = (Il2CppObject *)v65->static_fields->__9;
        _9__23_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                   System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo,
                                                   v62,
                                                   v63,
                                                   v64);
        System_Func_object__int____ctor(
          _9__23_1,
          v68,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__,
          0LL);
        v69 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v69->__9__23_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_1;
        sub_1BCA784((PartyOrganizationUtility_o *)&v69->__9__23_1, (int64_t)_9__23_1, v70, v71, v72, v73, v74, v75);
      }
      v76 = System_Linq_Enumerable__ThenBy_object__int_(
              v66,
              (System_Func_TSource__TKey__o *)_9__23_1,
              (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v80 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v81 = v76;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v77);
        v80 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_2 = (System_Func_object__int__o *)v80->static_fields->__9__23_2;
      if ( !_9__23_2 )
      {
        if ( !v80->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v80, v77);
          v80 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v83 = (Il2CppObject *)v80->static_fields->__9;
        _9__23_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                   System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo,
                                                   v77,
                                                   v78,
                                                   v79);
        System_Func_object__int____ctor(
          _9__23_2,
          v83,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__,
          0LL);
        v84 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v84->__9__23_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_2;
        sub_1BCA784((PartyOrganizationUtility_o *)&v84->__9__23_2, (int64_t)_9__23_2, v85, v86, v87, v88, v89, v90);
      }
      v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v81,
                                                                   (System_Func_TSource__TKey__o *)_9__23_2,
                                                                   (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v50 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v91,
                                                           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v50 = (System_Collections_Generic_List_object__o *)v47;
      if ( size < 1 )
        goto LABEL_39;
    }
    v92 = 0;
    do
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v50 )
        goto LABEL_71;
      v95 = (RecommendSupportData_o *)*((_QWORD *)Instance + 14);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v50,
                   v92,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      v96 = *((_QWORD *)Instance + 2);
      if ( !v96 )
        goto LABEL_71;
      v97 = *(_DWORD *)(v96 + 16);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v50,
                   v92,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v95 )
        goto LABEL_71;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         v95,
                         v97,
                         *((_DWORD *)Instance + 10),
                         (int32_t *)&settingIndex,
                         &svtName,
                         0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v100 = IsQuestSetting;
      v101 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v50,
               v92,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v103 = settingIndex;
      v104 = svtName;
      v105 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v109 = (RecommendSupportQuestBoardListViewItem_o *)sub_1BCAA2C(
                                                           RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                           v106,
                                                           v107,
                                                           v108);
      RecommendSupportQuestBoardListViewItem___ctor(v109, v92, 0LL, v105, v100, v103, v104, v110);
      if ( !itemList )
        goto LABEL_71;
      items = itemList->fields._items;
      v118 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_71;
      v119 = itemList->fields._size;
      this = v101;
      if ( (unsigned int)v119 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v109,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &items->obj.klass + v119;
        itemList->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)v109;
        sub_1BCA784((PartyOrganizationUtility_o *)(v120 + 4), (int64_t)v109, v111, v112, v113, v114, v115, v116);
      }
    }
    while ( size != ++v92 );
  }
LABEL_39:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = MapMaster__getList((MapMaster_o *)Instance, parentFolderWarId, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_71;
  v121 = (System_Collections_ICollection_o *)Instance;
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
    Instance = (void *)BasicHelper__IsNullOrEmpty(v121, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v121 )
        goto LABEL_71;
      if ( !LODWORD(v121[1].monitor) )
        sub_1BCAA44(Instance, v94);
      Instance = v121[2].klass;
      if ( !Instance )
        goto LABEL_71;
      titleInfo = this->fields.titleInfo;
      Instance = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0LL);
      if ( !titleInfo )
        goto LABEL_71;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Instance, 0, 1, 0, 0LL);
    }
  }
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v122);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v124);
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
      v128 = this->fields.scrollBar;
      if ( !v128 )
        goto LABEL_71;
      if ( v128->fields.mSize <= 0.98 )
      {
        v129 = this->fields.itemList;
        Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v94);
          Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v130 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
        if ( !v130 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance, v94);
            Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v131 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v130 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v94, v126, v127);
          System_Predicate_object____ctor(
            v130,
            v131,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__,
            0LL);
          v132 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v132->__9__23_3 = (struct System_Predicate_ListViewItem__o *)v130;
          sub_1BCA784((PartyOrganizationUtility_o *)&v132->__9__23_3, (int64_t)v130, v133, v134, v135, v136, v137, v138);
        }
        if ( v129 )
        {
          v139 = System_Collections_Generic_List_object___Find(
                   (System_Collections_Generic_List_object__o *)v129,
                   (System_Predicate_T__o *)v130,
                   (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v139 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v139[1].klass), 0LL);
          goto LABEL_69;
        }
LABEL_71:
        sub_1BCAA3C(Instance, v94);
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
    (System_String_o *)StringLiteral_15356/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewManager__DispFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo,
        int32_t warId,
        int32_t focusWarId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v29; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v32; // s9
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x19

  if ( (byte_4B123D9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, folderInfo, *(_QWORD *)&warId);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__, v9, v10);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo, v11, v12);
    byte_4B123D9 = 1;
  }
  v13 = sub_1BCAA2C(
          RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo,
          folderInfo,
          *(_QWORD *)&warId,
          *(_QWORD *)&focusWarId);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = folderInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)folderInfo, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v13 + 32) = warId;
  *(_DWORD *)(v13 + 36) = focusWarId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v29);
  extiTime = this->fields.extiTime;
  v32 = OUT_POS_OFS_X;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v13,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__,
    0LL);
  if ( !slideComponent )
LABEL_6:
    sub_1BCAA3C(v14, v15);
  SlideFadeObject__SlideOut_34347584(slideComponent, v32, extiTime, 0.0, v36, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  BalanceConfig_c *v27; // x0
  int32_t RecommendSupportMemberMax; // w20
  System_Collections_Generic_List_object__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  int32_t i; // w27
  BalanceConfig_c *v40; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *v42; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  const MethodInfo *v54; // x1

  if ( (byte_4B123D3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo, v14, v15);
    byte_4B123D3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.slideComponent,
    (int64_t)Component_object,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
    v27 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v27->static_fields->RecommendSupportMemberMax;
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Dictionary_int__int___TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor_56235160(
    v29,
    RecommendSupportMemberMax,
    (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectWarId, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  for ( i = 0; ; ++i )
  {
    v40 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v36);
      v40 = BalanceConfig_TypeInfo;
    }
    if ( i >= v40->static_fields->RecommendSupportMemberMax )
      break;
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    v42 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v36,
                                                                 v37,
                                                                 v38);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v42,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( !selectWarId )
      goto LABEL_17;
    items = selectWarId->fields._items;
    v51 = Method_System_Collections_Generic_List_Dictionary_int__int___Add__;
    ++selectWarId->fields._version;
    if ( !items )
      goto LABEL_17;
    size = selectWarId->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectWarId,
        (Il2CppObject *)v42,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v53[4] = (Il2CppClass *)v42;
      sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v42, v44, v45, v46, v47, v48, v49);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_1BCAA3C(questSelectDialog, v36);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v36);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v54);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x20
  __int64 v36; // x1
  void *titleInfo; // x0
  RecommendSupportData_o *v38; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__bool__o *v43; // x22
  Il2CppObject *v44; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o **p_settingQuestInfo; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x20
  __int64 v56; // x2
  __int64 v57; // x3
  struct WarEntity_o *warEntity; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v59; // x21
  System_Func_object__bool__o *v60; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v62; // x0
  const MethodInfo *v63; // x4
  System_Collections_Generic_List_object__o *selectWarId; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v69; // x0
  System_Func_object__bool__o *_9__21_1; // x21
  Il2CppObject *v71; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v80; // x0
  const MethodInfo *v81; // x5
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B123D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v13,
      v14);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__, v23, v24);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__, v25, v26);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__, v29, v30);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo, v31, v32);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v33, v34);
    byte_4B123D5 = 1;
  }
  value = 0;
  v35 = sub_1BCAA2C(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0LL, 1, 0LL, 92, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 0LL);
  this->fields.state = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  v38 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v35 || !v38 )
    goto LABEL_26;
  RecommendSupportData__TryGetQuest(v38, *((_DWORD *)titleInfo + 30), (int32_t *)(v35 + 16), (int32_t *)(v35 + 20), 0LL);
  recommendQuestList = this->fields.recommendQuestList;
  v43 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo,
                                         v40,
                                         v41,
                                         v42);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v35,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__,
    0LL);
  v44 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
          (System_Func_TSource__bool__o *)v43,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  p_settingQuestInfo = &this->fields.settingQuestInfo;
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.settingQuestInfo, (int64_t)v44, v46, v47, v48, v49, v50, v51);
  if ( this->fields.settingQuestInfo )
  {
    v55 = sub_1BCAA2C(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo, v52, v53, v54);
    System_Object___ctor((Il2CppObject *)v55, 0LL);
    if ( *p_settingQuestInfo )
    {
      warEntity = (*p_settingQuestInfo)->fields.warEntity;
      if ( warEntity )
      {
        if ( v55 )
        {
          *(_DWORD *)(v55 + 16) = warEntity->fields.id;
          v59 = this->fields.recommendQuestList;
          v60 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo,
                                                 v36,
                                                 v56,
                                                 v57);
          System_Func_object__bool____ctor(
            v60,
            (Il2CppObject *)v55,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__,
            0LL);
          v61 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v59,
                  (System_Func_TSource__bool__o *)v60,
                  (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v62 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v61, (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v62, *(_DWORD *)(v55 + 16), 0LL, v63);
          return;
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(titleInfo, v36);
  }
  this->fields.currentFolderWarId = 0;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  if ( !selectWarId )
    goto LABEL_26;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v69 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v65);
    v69 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v69->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69, v65);
      v69 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v69->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo,
                                                v65,
                                                v66,
                                                v67);
    System_Func_object__bool____ctor(
      _9__21_1,
      v71,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__,
      0LL);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__21_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__21_1,
      (int64_t)_9__21_1,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  v79 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__21_1,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v80 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v79, (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v80, 0, value, 0LL, v81);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitQuestFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  System_Collections_Generic_List_object__o *v63; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **p_recommendQuestFolderList; // x19
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x1
  Il2CppObject *Master_object; // x25
  Il2CppObject *v83; // x20
  CommonReleaseMaster_o *IsOpen; // x0
  __int64 dispCommonReleaseId; // x1
  CommonReleaseMaster_o *v86; // x28
  RecommendSupportQuestEntity_array *List; // x26
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x2
  __int64 v92; // x3
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v94; // x25
  unsigned int v95; // w21
  RecommendSupportQuestEntity_o *v96; // x22
  __int64 v97; // x27
  int32_t questId; // w28
  System_String_o *questMessage; // x25
  int32_t priority; // w22
  int32_t questPhase; // w28
  WarEntity_o *v102; // x23
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v103; // x29
  const MethodInfo *v104; // x6
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  Il2CppClass *v111; // x8
  _QWORD *v112; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v114; // x8
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x25
  System_Func_object__bool__o *v119; // x22
  int32_t PrioredParentId; // w29
  System_Collections_Generic_List_object__o *v121; // x27
  int64_t v122; // x22
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  int64_t v126; // x28
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  struct System_Object_array *items; // x8
  _QWORD *v140; // x9
  __int64 size; // x10
  Il2CppClass **v142; // x0
  _BOOL8 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  System_Collections_Generic_List_object__o *v148; // x21
  Il2CppObject *v149; // x23
  int64_t v150; // x22
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  __int64 v157; // x0
  __int64 v158; // x1
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  Il2CppClass **v168; // x0
  Il2CppObject **v169; // [xsp+8h] [xbp-E8h]
  QuestEntity_o *questEnt; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o **p_recommendQuestList; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_HashSet_int__o *v172; // [xsp+20h] [xbp-D0h]
  Il2CppObject *v173; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v174; // [xsp+30h] [xbp-C0h]
  CommonReleaseMaster_o *v175; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v176; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *v177; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v178; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *v179; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B123D4 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v29, v30);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Remove__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v41, v42);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__,
      v43,
      v44);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__,
      v45,
      v46);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__,
      v47,
      v48);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__,
      v49,
      v50);
    sub_1BCA7E0(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo,
      v51,
      v52);
    sub_1BCA7E0(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      v53,
      v54);
    sub_1BCA7E0(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo, v55, v56);
    sub_1BCA7E0(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo, v57, v58);
    sub_1BCA7E0(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
      v59,
      v60);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo, v61, v62);
    byte_4B123D4 = 1;
  }
  v179 = 0LL;
  entity = 0LL;
  memset(&v178, 0, sizeof(v178));
  v177 = 0LL;
  v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  p_recommendQuestFolderList = &this->fields.recommendQuestFolderList;
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v63;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.recommendQuestFolderList,
    (int64_t)v63,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v74 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo,
                                                       v71,
                                                       v72,
                                                       v73);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v74;
  p_recommendQuestList = &this->fields.recommendQuestList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.recommendQuestList,
    (int64_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v81);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v173 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  v174 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotMaster___);
  v83 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  IsOpen = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_55;
  v86 = IsOpen;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v172 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        v88,
                                                        v89,
                                                        v90);
  System_Collections_Generic_HashSet_int____ctor(
    v172,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_55;
  max_length = List->max_length;
  v94 = (DataMasterBase_TMaster__TEntity__PKType__o *)v173;
  if ( max_length >= 1 )
  {
    v95 = 0;
    v175 = v86;
    do
    {
      if ( v95 >= max_length )
        sub_1BCAA44(IsOpen, dispCommonReleaseId);
      v96 = List->m_Items[v95];
      v97 = sub_1BCAA2C(
              RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo,
              dispCommonReleaseId,
              v91,
              v92);
      System_Object___ctor((Il2CppObject *)v97, 0LL);
      if ( !v96 )
        goto LABEL_55;
      if ( !v96->fields.baseQuestId )
      {
        dispCommonReleaseId = (unsigned int)v96->fields.dispCommonReleaseId;
        if ( (_DWORD)dispCommonReleaseId )
        {
          if ( !v86 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v86, dispCommonReleaseId, 0LL, 0, 0LL);
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        else
        {
          questId = v96->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, dispCommonReleaseId);
          IsOpen = (CommonReleaseMaster_o *)CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
          v86 = v175;
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        if ( !v94 )
          goto LABEL_55;
        IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v94,
                                            &entity,
                                            v96->fields.questId,
                                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpen & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)v174;
          if ( !v174 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v174,
                                              &v179,
                                              (int32_t)entity[3].klass,
                                              (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpen & 1) != 0 )
          {
            if ( !v97 || !v179 || !v83 )
              goto LABEL_55;
            IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v83,
                                                (Il2CppObject **)(v97 + 16),
                                                HIDWORD(v179[1].klass),
                                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
            {
              questMessage = v96->fields.questMessage;
              questPhase = v96->fields.questPhase;
              priority = v96->fields.priority;
              v169 = (Il2CppObject **)(v97 + 16);
              questEnt = (QuestEntity_o *)entity;
              v102 = *(WarEntity_o **)(v97 + 16);
              v103 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_1BCAA2C(
                                                                                   RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo,
                                                                                   dispCommonReleaseId,
                                                                                   v91,
                                                                                   v92);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                v103,
                questEnt,
                v102,
                questMessage,
                questPhase,
                priority,
                v104);
              IsOpen = (CommonReleaseMaster_o *)*p_recommendQuestList;
              if ( !*p_recommendQuestList )
                goto LABEL_55;
              v111 = *(Il2CppClass **)&IsOpen->fields._MasterKind_k__BackingField;
              v112 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
              ++HIDWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( !v111 )
                goto LABEL_55;
              MasterName_k__BackingField_low = SLODWORD(IsOpen->fields._MasterName_k__BackingField);
              v86 = v175;
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v111->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsOpen,
                  (Il2CppObject *)v103,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
              }
              else
              {
                v114 = &v111->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsOpen->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v114[4] = v103;
                sub_1BCA784((PartyOrganizationUtility_o *)(v114 + 4), (int64_t)v103, v105, v106, v107, v108, v109, v110);
              }
              v118 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_recommendQuestFolderList;
              v119 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo,
                                                      v115,
                                                      v116,
                                                      v117);
              System_Func_object__bool____ctor(
                v119,
                (Il2CppObject *)v97,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                0LL);
              IsOpen = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                  v118,
                                                  (System_Func_TSource__bool__o *)v119,
                                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              v94 = (DataMasterBase_TMaster__TEntity__PKType__o *)v173;
              if ( !IsOpen )
              {
                IsOpen = (CommonReleaseMaster_o *)*v169;
                if ( !*v169 )
                  goto LABEL_55;
                PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpen, 0LL);
                IsOpen = (CommonReleaseMaster_o *)v172;
                if ( !v172 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___Add(
                  v172,
                  PrioredParentId,
                  (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v121 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
                v122 = (int64_t)*v169;
                v126 = sub_1BCAA2C(
                         RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo,
                         v123,
                         v124,
                         v125);
                System_Object___ctor((Il2CppObject *)v126, 0LL);
                *(_QWORD *)(v126 + 16) = v122;
                sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 16), v122, v127, v128, v129, v130, v131, v132);
                *(_DWORD *)(v126 + 24) = PrioredParentId;
                if ( !v121 )
                  goto LABEL_55;
                items = v121->fields._items;
                v140 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                ++v121->fields._version;
                if ( !items )
                  goto LABEL_55;
                size = v121->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v121,
                    (Il2CppObject *)v126,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
                }
                else
                {
                  v142 = &items->obj.klass + size;
                  v121->fields._size = size + 1;
                  v142[4] = (Il2CppClass *)v126;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v142 + 4), v126, v133, v134, v135, v136, v137, v138);
                }
                v86 = v175;
              }
            }
          }
        }
      }
LABEL_12:
      max_length = List->max_length;
    }
    while ( (int)++v95 < max_length );
  }
  if ( !v172 )
LABEL_55:
    sub_1BCAA3C(IsOpen, dispCommonReleaseId);
  System_Collections_Generic_HashSet_int___Remove(
    v172,
    0,
    (const MethodInfo_345546C *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v176,
    v172,
    (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v178 = v176;
  while ( 1 )
  {
    v143 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
             &v178,
             (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v143 )
      break;
    if ( !v83 )
      sub_1BCAA3C(v143, v144);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v83,
           &v177,
           (int32_t)v178.fields._current,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v148 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
      v149 = v177;
      v150 = sub_1BCAA2C(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo, v145, v146, v147);
      System_Object___ctor((Il2CppObject *)v150, 0LL);
      *(_QWORD *)(v150 + 16) = v149;
      sub_1BCA784((PartyOrganizationUtility_o *)(v150 + 16), (int64_t)v149, v151, v152, v153, v154, v155, v156);
      *(_DWORD *)(v150 + 24) = 0;
      if ( !v148 )
        sub_1BCAA3C(v157, v158);
      v165 = v148->fields._items;
      v166 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v148->fields._version;
      if ( !v165 )
        sub_1BCAA3C(v157, v158);
      v167 = v148->fields._size;
      if ( (unsigned int)v167 >= v165->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v148,
          (Il2CppObject *)v150,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
      }
      else
      {
        v168 = &v165->obj.klass + v167;
        v148->fields._size = v167 + 1;
        v168[4] = (Il2CppClass *)v150;
        sub_1BCA784((PartyOrganizationUtility_o *)(v168 + 4), v150, v159, v160, v161, v162, v163, v164);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v178,
    (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnClickListView(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  int64_t v44; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  int64_t v54; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int v61; // w21
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x21
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_T__o *recommendQuestFolderList; // x23
  System_Func_object__bool__o *v75; // x24
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v76; // x22
  System_Func_object__bool__o *v77; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_List_TSource__o *v79; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x22
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v81; // x20
  __int64 v82; // x8
  const MethodInfo *v83; // x4
  __int64 v84; // x8
  __int64 v85; // x21
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x8
  __int64 v99; // x8
  int64_t v100; // x1
  __int64 v101; // x8
  RecommendSupportQuestBoardListViewItem_o *v102; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  __int64 v104; // x2
  __int64 v105; // x3
  int monitor; // w23
  int v107; // w24
  System_Action_o *v108; // x22
  const MethodInfo *v109; // x4
  __int64 v110; // x21
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x2
  __int64 v118; // x3
  Il2CppObject *v119; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x22
  System_Func_object__bool__o *v121; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x0
  System_Collections_Generic_List_TSource__o *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v131; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v134; // s9
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  System_Action_o *v138; // x19
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B123D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v16,
      v17);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v22, v23);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v26, v27);
    sub_1BCA7E0(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      v28,
      v29);
    sub_1BCA7E0(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
      v30,
      v31);
    sub_1BCA7E0(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
      v32,
      v33);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo, v34, v35);
    sub_1BCA7E0(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__,
      v36,
      v37);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo, v38, v39);
    sub_1BCA7E0(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
      v40,
      v41);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo, v42, v43);
    byte_4B123D8 = 1;
  }
  value = 0;
  v44 = sub_1BCAA2C(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo, obj, method, v3);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_37;
  *(_QWORD *)(v44 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)this, v47, v48, v49, v50, v51, v52);
  if ( !obj )
    goto LABEL_37;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v46);
  *(_QWORD *)(v44 + 24) = Item;
  v54 = v44 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 24), (int64_t)Item, v55, v56, v57, v58, v59, v60);
  if ( !*(_QWORD *)(v44 + 24) )
    goto LABEL_37;
  v61 = *(unsigned __int8 *)(*(_QWORD *)(v44 + 24) + 128LL);
  v62 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v62 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v63 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v62, v62[4]);
  if ( v61 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v63, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0LL);
  if ( !*(_QWORD *)v54 )
    goto LABEL_37;
  v70 = *(_QWORD *)(*(_QWORD *)v54 + 112LL);
  *(_QWORD *)(v44 + 16) = v70;
  v71 = v44 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 16), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_QWORD *)(v44 + 16) )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v75 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo,
                                           v46,
                                           v72,
                                           v73);
    System_Func_object__bool____ctor(
      v75,
      (Il2CppObject *)v44,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      0LL);
    Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                 recommendQuestFolderList,
                                 (System_Func_T__bool__o *)v75,
                                 (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v76 = this->fields.recommendQuestFolderList;
      v77 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo,
                                             v46,
                                             v72,
                                             v73);
      System_Func_object__bool____ctor(
        v77,
        (Il2CppObject *)v44,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
        0LL);
      v78 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v76,
              (System_Func_TSource__bool__o *)v77,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v79 = System_Linq_Enumerable__ToList_object_(
              v78,
              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
      v81 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v79;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        if ( selectWarId )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       selectWarId,
                       (int32_t)Instance[7].monitor,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
          if ( *(_QWORD *)v71 )
          {
            v82 = *(_QWORD *)(*(_QWORD *)v71 + 16LL);
            if ( v82 )
            {
              if ( Instance )
              {
                Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                             (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                             *(_DWORD *)(v82 + 16),
                                             &value,
                                             (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
                if ( *(_QWORD *)v71 )
                {
                  v84 = *(_QWORD *)(*(_QWORD *)v71 + 16LL);
                  if ( v84 )
                  {
                    RecommendSupportQuestBoardListViewManager__DispFolderList(
                      this,
                      v81,
                      *(_DWORD *)(v84 + 16),
                      value,
                      v83);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1BCAA3C(Instance, v46);
    }
  }
  if ( !*(_QWORD *)v54 )
    goto LABEL_37;
  if ( *(_QWORD *)(*(_QWORD *)v54 + 120LL) )
  {
    v85 = sub_1BCAA2C(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo, v46, v72, v73);
    System_Object___ctor((Il2CppObject *)v85, 0LL);
    if ( !v85 )
      goto LABEL_37;
    *(_QWORD *)(v85 + 32) = v44;
    sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 32), v44, v86, v87, v88, v89, v90, v91);
    v98 = *(_QWORD *)(v85 + 32);
    if ( !v98 )
      goto LABEL_37;
    v99 = *(_QWORD *)(v98 + 24);
    if ( !v99 )
      goto LABEL_37;
    v100 = *(_QWORD *)(v99 + 120);
    *(_QWORD *)(v85 + 16) = v100;
    sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 16), v100, v92, v93, v94, v95, v96, v97);
    v101 = *(_QWORD *)(v85 + 32);
    if ( !v101 )
      goto LABEL_37;
    v102 = *(RecommendSupportQuestBoardListViewItem_o **)(v101 + 24);
    if ( !v102 )
      goto LABEL_37;
    *(_DWORD *)(v85 + 24) = v102->fields._SettingSelectIndex_k__BackingField;
    questSelectDialog = this->fields.questSelectDialog;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    monitor = (int)Instance[7].monitor;
    v107 = *(_DWORD *)(v85 + 24);
    v108 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v104, v105);
    System_Action___ctor(
      v108,
      (Il2CppObject *)v85,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__,
      0LL);
    if ( !questSelectDialog )
      goto LABEL_37;
    RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v102, monitor == v107, v108, v109);
  }
  else
  {
    v110 = sub_1BCAA2C(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo, v46, v72, v73);
    System_Object___ctor((Il2CppObject *)v110, 0LL);
    if ( !v110 )
      goto LABEL_37;
    *(_QWORD *)(v110 + 24) = v44;
    sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 24), v44, v111, v112, v113, v114, v115, v116);
    v119 = *(Il2CppObject **)(v110 + 24);
    if ( !v119 )
      goto LABEL_37;
    if ( v119[1].klass )
    {
      recommendQuestList = this->fields.recommendQuestList;
      v121 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                              System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo,
                                              v46,
                                              v117,
                                              v118);
      System_Func_object__bool____ctor(
        v121,
        v119,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
        0LL);
      v122 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
               (System_Func_TSource__bool__o *)v121,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v123 = System_Linq_Enumerable__ToList_object_(
               v122,
               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      *(_QWORD *)(v110 + 16) = v123;
      sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 16), (int64_t)v123, v124, v125, v126, v127, v128, v129);
      slideComponent = this->fields.slideComponent;
      this->fields.state = 1;
      OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v131);
      extiTime = this->fields.extiTime;
      v134 = OUT_POS_OFS_X;
      v138 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v135, v136, v137);
      System_Action___ctor(
        v138,
        (Il2CppObject *)v110,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
        0LL);
      if ( !slideComponent )
        goto LABEL_37;
      SlideFadeObject__SlideOut_34347584(slideComponent, v134, extiTime, 0.0, v138, 0LL);
    }
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnDestroy(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_Dictionary_int__int___o *selectWarId; // x8
  int64_t size; // x2
  int v15; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x8
  int64_t v17; // x2
  int v18; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x8
  int64_t v20; // x2
  PartyOrganizationUtility_o *p_recommendQuestList; // x19
  int v22; // w9

  if ( (byte_4B123DD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__, v11, v12);
    byte_4B123DD = 1;
  }
  selectWarId = this->fields.selectWarId;
  if ( selectWarId )
  {
    size = (unsigned int)selectWarId->fields._size;
    v15 = selectWarId->fields._version + 1;
    selectWarId->fields._size = 0;
    selectWarId->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)selectWarId->fields._items, 0, size, 0LL);
    this->fields.selectWarId = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectWarId, 0LL, size, v3, v4, v5, v6, v7);
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    v17 = (unsigned int)recommendQuestFolderList->fields._size;
    v18 = recommendQuestFolderList->fields._version + 1;
    recommendQuestFolderList->fields._size = 0;
    recommendQuestFolderList->fields._version = v18;
    if ( (int)v17 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestFolderList->fields._items, 0, v17, 0LL);
    this->fields.recommendQuestFolderList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.recommendQuestFolderList, 0LL, v17, v3, v4, v5, v6, v7);
  }
  recommendQuestList = this->fields.recommendQuestList;
  if ( recommendQuestList )
  {
    v20 = (unsigned int)recommendQuestList->fields._size;
    p_recommendQuestList = (PartyOrganizationUtility_o *)&this->fields.recommendQuestList;
    v22 = recommendQuestList->fields._version + 1;
    recommendQuestList->fields._size = 0;
    recommendQuestList->fields._version = v22;
    if ( (int)v20 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestList->fields._items, 0, v20, 0LL);
    p_recommendQuestList->klass = 0LL;
    sub_1BCA784(p_recommendQuestList, 0LL, v20, v3, v4, v5, v6, v7);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickBack(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Func_object__bool__o *v32; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Func_object__bool__o *v46; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v48; // x21
  const MethodInfo *v49; // x4
  __int64 v50; // x8
  int32_t v51; // w3
  const MethodInfo *v52; // x2

  if ( (byte_4B123DB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v6,
      v7);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v10,
      v11);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__, v12, v13);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__, v18, v19);
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo, v20, v21);
    byte_4B123DB = 1;
  }
  if ( !this->fields.state )
  {
    v22 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 1, 0LL);
    if ( this->fields.currentFolderWarId )
    {
      v27 = sub_1BCAA2C(RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo, v24, v25, v26);
      System_Object___ctor((Il2CppObject *)v27, 0LL);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v32 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo,
                                             v29,
                                             v30,
                                             v31);
      System_Func_object__bool____ctor(
        v32,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__,
        0LL);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v32,
                                                            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v27 )
      {
        *(_QWORD *)(v27 + 16) = Item;
        v41 = v27 + 16;
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)Item, v35, v36, v37, v38, v39, v40);
        v42 = this->fields.recommendQuestFolderList;
        v46 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo,
                                               v43,
                                               v44,
                                               v45);
        System_Func_object__bool____ctor(
          v46,
          (Il2CppObject *)v27,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__,
          0LL);
        v47 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                (System_Func_TSource__bool__o *)v46,
                (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v47,
                                                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v48 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( Item )
          {
            if ( !*(_QWORD *)v41 )
            {
              v51 = 0;
              goto LABEL_16;
            }
            v50 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
            if ( v50 )
            {
              v51 = *(_DWORD *)(v50 + 16);
LABEL_16:
              RecommendSupportQuestBoardListViewManager__DispFolderList(this, v48, Item->fields._size, v51, v49);
              return;
            }
          }
        }
      }
    }
    else
    {
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, v52);
        return;
      }
    }
    sub_1BCAA3C(Item, v34);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickSelectMenuBackBtn(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B123DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B123DC = 1;
  }
  if ( !this->fields.state )
  {
    v6 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v9);
    RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v10);
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
    sub_1BCAA3C(scrollView, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *Instance; // x0
  __int64 v15; // x1
  bool v16; // w0
  System_Collections_Generic_List_object__o *v17; // x22
  bool v18; // w21
  int32_t currentFolderWarId; // w1
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B123DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&parentFolderWarId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v11, v12);
    byte_4B123DA = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || !selectWarId
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            selectWarId,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL
      || (v16 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                  Instance,
                  this->fields.currentFolderWarId,
                  &value,
                  (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__),
          v17 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId,
          v18 = v16,
          (Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
      || !v17
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v17,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL )
    {
      sub_1BCAA3C(Instance, v15);
    }
    currentFolderWarId = this->fields.currentFolderWarId;
    if ( v18 )
      System_Collections_Generic_Dictionary_int__int___set_Item(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    else
      System_Collections_Generic_Dictionary_int__int___Add(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    sub_1BCAA3C(this, x);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B123DE & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v1, v2);
    byte_4B123DE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportQuestBoardListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *v5; // x9

  if ( !b || (warEntity = b->fields.warEntity) == 0LL || !a || (v5 = a->fields.warEntity) == 0LL )
    sub_1BCAA3C(this, a);
  return warEntity->fields.priority - v5->fields.priority;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0LL )
    sub_1BCAA3C(this, x);
  return questEntity->fields.id;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.phase;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 methodPtr_low; // x9
  int32_t index; // w19
  RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *v9; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B123DF & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportQuestBoardListViewItem_TypeInfo, item, method);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1BCA7E0(
                                                                &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                v4,
                                                                v5);
    byte_4B123DF = 1;
  }
  if ( !item )
    goto LABEL_8;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1BCAA3C(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)sub_1BCACFC(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(v9, v10, v11);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___InitOpen_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B123E0 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1BCA7E0(
                                                                                  &RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                                  item,
                                                                                  method);
    byte_4B123E0 = 1;
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
    sub_1BCAA3C(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)sub_1BCACFC(v3);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  }
  return warEntity->fields.id == v5->fields.id;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__5(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v11; // x8
  float intoTime; // s9
  System_Action_o *_9__6; // x21
  float v14; // s8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B123E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__, v4, v5);
    byte_4B123E1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_9;
  intoTime = v11->fields.intoTime;
  _9__6 = this->fields.__9__6;
  v14 = OUT_POS_OFS_X;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v8, v9);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__,
      0LL);
    this->fields.__9__6 = _9__6;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__6, (int64_t)_9__6, v15, v16, v17, v18, v19, v20);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1BCAA3C(_4__this, method);
  SlideFadeObject__SlideIn_34346640(slideComponent, v14, intoTime, 0.0, _9__6, 0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v11; // x2

  if ( (byte_4B123E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B123E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0LL
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v7);
  }
  RecommendSupportSelectListViewMenu__RedisplaySub(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields.index,
    0LL);
LABEL_14:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v11);
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
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals2; // x19
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x21
  int32_t id; // w22
  System_Action_o *_9__5; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v5 = this;
  if ( (byte_4B123E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)sub_1BCA7E0(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
                                                                                  v6,
                                                                                  v7);
    byte_4B123E3 = 1;
  }
  CS___8__locals2 = v5->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  folderInfo = CS___8__locals2->fields.folderInfo;
  if ( !folderInfo )
    goto LABEL_10;
  warEntity = folderInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_10;
  _4__this = CS___8__locals2->fields.__4__this;
  questList = v5->fields.questList;
  id = warEntity->fields.id;
  _9__5 = CS___8__locals2->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
      0LL);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&CS___8__locals2->fields.__9__5,
      (int64_t)_9__5,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !_4__this )
LABEL_10:
    sub_1BCAA3C(this, method);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__5, v4);
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
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__1; // x24
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t focusWarId; // w23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v5 = this;
  if ( (byte_4B123E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
                                                                                  v6,
                                                                                  v7);
    byte_4B123E4 = 1;
  }
  _9__1 = v5->fields.__9__1;
  _4__this = v5->fields.__4__this;
  folderInfo = v5->fields.folderInfo;
  warId = v5->fields.warId;
  focusWarId = v5->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, focusWarId, _9__1, v4);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v11; // x8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  float v14; // s8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B123E5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__, v4, v5);
    byte_4B123E5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_9;
  intoTime = v11->fields.intoTime;
  _9__2 = this->fields.__9__2;
  v14 = OUT_POS_OFS_X;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1BCAA3C(_4__this, method);
  SlideFadeObject__SlideIn_34346640(slideComponent, v14, intoTime, 0.0, _9__2, 0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 parentWarFolder; // x8
  int32_t parentWarId; // w19
  int32_t v11; // w1
  __int64 v13; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v14; // 0:x0.8

  v4 = this;
  if ( (byte_4B123E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, x, method);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v5, v6);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)sub_1BCA7E0(
                                                                                  &Method_System_Nullable_int__get_HasValue__,
                                                                                  v7,
                                                                                  v8);
    byte_4B123E6 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  parentWarFolder = (__int64)v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v11 = *(_DWORD *)(parentWarFolder + 24);
    v14 = (System_Nullable_int__o)&v13;
    v13 = 0LL;
    System_Nullable_int____ctor(v14, v11, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v13;
  }
  return (unsigned __int8)parentWarFolder != 0 && parentWarId == HIDWORD(parentWarFolder);
}