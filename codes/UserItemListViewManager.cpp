void __fastcall UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UILabel_o *infoLb; // x21
  System_String_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v33; // x21
  bool IsActiveBgTxt; // w0
  const MethodInfo *v35; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x2
  struct UserGameEntity_o *userGameEntity; // x9
  int32_t stone; // w10
  int mana; // w8
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v49; // x1
  UserItemEntity_array *List; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x8
  UserItemEntity_array *v56; // x21
  unsigned __int64 v57; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v58; // x21
  UserItemListViewManager___c_c *v59; // x0
  struct UserItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x22
  Il2CppObject *v62; // x23
  struct UserItemListViewManager___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  signed __int64 size; // x23
  UILabel_o *nonItemNoticeLb; // x21
  UnityEngine_GameObject_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  unsigned __int64 i; // x24
  struct System_Collections_Generic_List_UserItemData__o *v78; // x21
  UserItemData_o *v79; // x22
  UserItemListViewItem_o *v80; // x21
  const MethodInfo *v81; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  System_String_o *v83; // x0
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0

  if ( (byte_40F9721 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_UserItemData___ctor__, method);
    sub_B16FFC(&System_Comparison_UserItemData__TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemData__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemData___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemData__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemData__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_UserItemData__TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_UserItemListViewManager___c__CreateList_b__27_0__, v16);
    sub_B16FFC(&UserItemListViewManager___c_TypeInfo, v17);
    sub_B16FFC(&UserItemListViewItem_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_9282/*"NONITEM_NOTICE"*/, v19);
    sub_B16FFC(&StringLiteral_7017/*"HEADER_NOTICE_MSG"*/, v20);
    byte_40F9721 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserItemData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrItemList,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_7017/*"HEADER_NOTICE_MSG"*/, 0LL);
  if ( !infoLb )
    goto LABEL_51;
  UILabel__set_text(infoLb, v30, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_51;
  v33 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v33 )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(v33, IsActiveBgTxt, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(v35);
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_51;
  stone = userGameEntity->fields.stone;
  this->fields.stoneNum = stone;
  mana = userGameEntity->fields.mana;
  this->fields.manaNum = mana;
  this->fields.rarePriNum = userGameEntity->fields.rarePri;
  if ( stone >= 1 )
  {
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v43);
    mana = this->fields.manaNum;
  }
  if ( mana >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v43);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v43);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_51;
  List = UserItemMaster__getList(MasterData_WarQuestSelectionMaster, v49);
  if ( List )
  {
    v55 = *(_QWORD *)&List->max_length;
    v56 = List;
    if ( (int)v55 >= 1 )
    {
      v57 = 0LL;
      do
      {
        if ( v57 >= (unsigned int)v55 )
        {
          sub_B17100(List, v51, v52);
          sub_B170A0();
        }
        UserItemListViewManager__SetUsrItemData(this, v56->m_Items[v57], v52);
        LODWORD(v55) = v56->max_length;
        ++v57;
      }
      while ( (__int64)v57 < (int)v55 );
    }
  }
  v58 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_usrItemList;
  v59 = UserItemListViewManager___c_TypeInfo;
  if ( (BYTE3(UserItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo);
    v59 = UserItemListViewManager___c_TypeInfo;
  }
  static_fields = v59->static_fields;
  _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_UserItemData__TypeInfo,
                                                                           v51,
                                                                           v52,
                                                                           v53,
                                                                           v54);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__27_0,
      v62,
      Method_UserItemListViewManager___c__CreateList_b__27_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserItemData___ctor__);
    v63 = UserItemListViewManager___c_TypeInfo->static_fields;
    v63->__9__27_0 = (struct System_Comparison_UserItemData__o *)_9__27_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v63->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !v58 )
    goto LABEL_51;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v58,
    (System_Comparison_T__o *)_9__27_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  if ( !*p_usrItemList )
    goto LABEL_51;
  size = (*p_usrItemList)->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( (int)size < 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_9282/*"NONITEM_NOTICE"*/, 0LL);
    if ( nonItemNoticeLb )
    {
      UILabel__set_text(nonItemNoticeLb, v83, 0LL);
      v84 = (UnityEngine_Component_o *)this->fields.nonItemNoticeLb;
      if ( v84 )
      {
        v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
        if ( v85 )
        {
          UnityEngine_GameObject__SetActive(v85, 1, 0LL);
          return;
        }
      }
    }
LABEL_51:
    sub_B170D4();
  }
  if ( !nonItemNoticeLb )
    goto LABEL_51;
  v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nonItemNoticeLb, 0LL);
  if ( !v72 )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(v72, 0, 0LL);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v78 = *p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_51;
    if ( i >= (unsigned int)v78->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v79 = v78->fields._items->m_Items[i];
    v80 = (UserItemListViewItem_o *)sub_B170CC(UserItemListViewItem_TypeInfo, v73, v74, v75, v76);
    UserItemListViewItem___ctor(v80, v79, v81);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_51;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserItemListViewManager__DestroyList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserItemListViewItem_o *__fastcall UserItemListViewManager__GetItem(
        UserItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F9724 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&UserItemListViewItem_TypeInfo, v5);
    byte_40F9724 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&UserItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (UserItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == UserItemListViewItem_TypeInfo )
    return (UserItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall UserItemListViewManager__OnClickListView(
        UserItemListViewManager_o *this,
        UserItemListViewObject_o *obj,
        const MethodInfo *method)
{
  struct UserItemListViewItem_o *Item; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F972A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11592/*"SELECT_ITEM"*/, obj);
    byte_40F972A = 1;
  }
  if ( !obj
    || (Item = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        this->fields.selectItem = Item,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.selectItem,
          (System_Int32_array **)Item,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11592/*"SELECT_ITEM"*/, 0LL);
}


void __fastcall UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40F9729 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9729 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject(
        UserItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9727 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_UserItemListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40F9727 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_24036100(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9728 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_UserItemListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40F9728 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F972D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3087/*"CLOSE_DETAIL"*/, isDecide);
    byte_40F972D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3087/*"CLOSE_DETAIL"*/, 0LL);
}


void __fastcall UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_24035896(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_24035896(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  if ( (byte_40F9726 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&mode);
    byte_40F9726 = 1;
  }
  objectList = this->fields.objectList;
  this->fields.initMode = mode;
  if ( !objectList )
    sub_B170D4();
  this->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_24036100(this, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_24036044(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_24035896(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetObjectItem(
        UserItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40F9725 & 1) == 0 )
  {
    sub_B16FFC(&UserItemListViewObject_TypeInfo, obj);
    byte_40F9725 = 1;
  }
  if ( !obj
    || (v6 = *(&UserItemListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v13 = 3;
  else
    v13 = 2;
  UserItemListViewObject__Init((UserItemListViewObject_o *)obj, v13, 0LL, v9, *(UnityEngine_Vector3_o *)&v10, v8);
}


void __fastcall UserItemListViewManager__SetUsrItemData(
        UserItemListViewManager_o *this,
        UserItemEntity_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ItemEntity_o *ItemInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  unsigned int type; // w8
  ItemEntity_o *v12; // x21
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **name; // x1
  System_Int32_array **detail; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_UserItemData__o *usrItemList; // x0

  if ( (byte_40F9723 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemData__Add__, data);
    sub_B16FFC(&UserItemData_TypeInfo, v5);
    byte_40F9723 = 1;
  }
  if ( !data )
    goto LABEL_12;
  ItemInfo = UserItemEntity__getItemInfo(data, (const MethodInfo *)data);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v12 = ItemInfo;
      if ( type > 0x1D || ((1 << type) & 0x20002006) == 0 )
      {
        v13 = sub_B170CC(UserItemData_TypeInfo, v7, v8, v9, v10);
        System_Object___ctor((Il2CppObject *)v13, 0LL);
        if ( v13 )
        {
          *(_DWORD *)(v13 + 16) = v12->fields.type;
          *(_DWORD *)(v13 + 24) = v12->fields.id;
          *(_DWORD *)(v13 + 20) = v12->fields.priority;
          *(_DWORD *)(v13 + 28) = v12->fields.imageId;
          name = (System_Int32_array **)v12->fields.name;
          *(_QWORD *)(v13 + 32) = name;
          sub_B16F98((BattleServantConfConponent_o *)(v13 + 32), name, v14, v15, v16, v17, v18, v19);
          detail = (System_Int32_array **)v12->fields.detail;
          *(_QWORD *)(v13 + 40) = detail;
          sub_B16F98((BattleServantConfConponent_o *)(v13 + 40), detail, v22, v23, v24, v25, v26, v27);
          *(_DWORD *)(v13 + 48) = data->fields.num;
          usrItemList = this->fields.usrItemList;
          if ( usrItemList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)usrItemList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserItemData__Add__);
            return;
          }
        }
LABEL_12:
        sub_B170D4();
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetUsrItemDataByType(
        UserItemListViewManager_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *EntityByType; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ItemEntity_o *v15; // x22
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **name; // x1
  System_Int32_array **detail; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t rarePriNum; // w8
  struct System_Collections_Generic_List_UserItemData__o *usrItemList; // x0

  if ( (byte_40F9722 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemType);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemData__Add__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&UserItemData_TypeInfo, v7);
    byte_40F9722 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  EntityByType = ItemMaster__GetEntityByType(MasterData_WarQuestSelectionMaster, itemType, 0LL);
  if ( EntityByType )
  {
    v15 = EntityByType;
    v16 = sub_B170CC(UserItemData_TypeInfo, v11, v12, v13, v14);
    System_Object___ctor((Il2CppObject *)v16, 0LL);
    if ( !v16 )
      goto LABEL_17;
    *(_DWORD *)(v16 + 16) = v15->fields.type;
    *(_DWORD *)(v16 + 24) = v15->fields.id;
    *(_DWORD *)(v16 + 20) = v15->fields.priority;
    *(_DWORD *)(v16 + 28) = v15->fields.imageId;
    name = (System_Int32_array **)v15->fields.name;
    *(_QWORD *)(v16 + 32) = name;
    sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), name, v17, v18, v19, v20, v21, v22);
    detail = (System_Int32_array **)v15->fields.detail;
    *(_QWORD *)(v16 + 40) = detail;
    sub_B16F98((BattleServantConfConponent_o *)(v16 + 40), detail, v25, v26, v27, v28, v29, v30);
    switch ( itemType )
    {
      case 22:
        rarePriNum = this->fields.rarePriNum;
        break;
      case 5:
        rarePriNum = this->fields.manaNum;
        break;
      case 2:
        rarePriNum = this->fields.stoneNum;
        break;
      default:
        goto LABEL_15;
    }
    *(_DWORD *)(v16 + 48) = rarePriNum;
  }
  else
  {
    v16 = 0LL;
  }
LABEL_15:
  usrItemList = this->fields.usrItemList;
  if ( !usrItemList )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)usrItemList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserItemData__Add__);
}


void __fastcall UserItemListViewManager__add_callbackFunc(
        UserItemListViewManager_o *this,
        UserItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserItemListViewManager_o *v10; // x0
  UserItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F971B & 1) == 0 )
  {
    sub_B16FFC(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F971B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v7->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B173C8(v7);
  UserItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall UserItemListViewManager__add_callbackFunc2(
        UserItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F971D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F971D = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B173C8(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x0

  if ( (byte_40F972C & 1) == 0 )
  {
    sub_B16FFC(&Method_UserItemListViewManager_closeItemDetail__, method);
    byte_40F972C = 1;
  }
  v3 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_UserItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  if ( !itemDetailInfoComp )
    sub_B170D4();
  ItemDetailInfoComponent__Close(itemDetailInfoComp, 0LL);
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  UserItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F9720 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F9720 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (UserItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)current,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v14;
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F971F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F971F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v14;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct UserItemListViewItem_o *selectItem; // x8
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x19
  UserItemData_o *itemData; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *userGameEntity; // x23
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x22

  if ( (byte_40F972B & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_UserItemListViewManager_SelectItemDetail__, v6);
    byte_40F972B = 1;
  }
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_10;
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  itemData = selectItem->fields.itemData;
  if ( selectItem->fields.itemType == 2 )
  {
    if ( itemData )
    {
      name = itemData->fields.name;
      detail = itemData->fields.detail;
      userGameEntity = this->fields.userGameEntity;
      v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        0LL);
      if ( itemDetailInfoComp )
      {
        ItemDetailInfoComponent__ShowStoneDetail(itemDetailInfoComp, name, detail, userGameEntity, v13, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B170D4();
  }
  v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                    ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_UserItemListViewManager_SelectItemDetail__,
    0LL);
  if ( !itemDetailInfoComp )
    goto LABEL_10;
  ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, itemData, v14, 5, 0LL);
}


void __fastcall UserItemListViewManager__remove_callbackFunc(
        UserItemListViewManager_o *this,
        UserItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F971C & 1) == 0 )
  {
    sub_B16FFC(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F971C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v7->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B173C8(v7);
  UserItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__remove_callbackFunc2(
        UserItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40F971E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F971E = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B173C8(v7);
  UserItemListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager_CallbackFunc___ctor(
        UserItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserItemListViewManager_CallbackFunc__BeginInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_40F7989 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    byte_40F7989 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager_CallbackFunc__Invoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  UserItemListViewManager_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  UserItemListViewManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  UserItemListViewManager_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (UserItemListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)result, v20);
    goto LABEL_37;
  }
}


void __fastcall UserItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7988 & 1) == 0 )
  {
    sub_B16FFC(&UserItemListViewManager___c_TypeInfo, v1);
    byte_40F7988 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserItemListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserItemListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall UserItemListViewManager___c___ctor(UserItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserItemListViewManager___c___CreateList_b__27_0(
        UserItemListViewManager___c_o *this,
        UserItemData_o *a,
        UserItemData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.dispPriority - b->fields.dispPriority;
}