void __fastcall UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UILabel_o *infoLb; // x21
  void *gameObject; // x0
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *v29; // x21
  const MethodInfo *v30; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x2
  struct UserGameEntity_o *userGameEntity; // x9
  int32_t stone; // w10
  int mana; // w8
  UserItemEntity_array *List; // x0
  const MethodInfo *v43; // x2
  __int64 v44; // x8
  UserItemEntity_array *v45; // x21
  unsigned __int64 v46; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v47; // x21
  struct UserItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x22
  Il2CppObject *v50; // x23
  struct UserItemListViewManager___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  signed __int64 size; // x23
  UILabel_o *nonItemNoticeLb; // x21
  unsigned __int64 i; // x24
  struct System_Collections_Generic_List_UserItemData__o *v61; // x21
  UserItemData_o *v62; // x22
  UserItemListViewItem_o *v63; // x21
  const MethodInfo *v64; // x2
  __int64 v65; // x0

  if ( (byte_4187017 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserItemData___ctor__, method);
    sub_B2C35C(&System_Comparison_UserItemData__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemData__Sort__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemData___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemData__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemData__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserItemData__TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_UserItemListViewManager___c__CreateList_b__27_0__, v13);
    sub_B2C35C(&UserItemListViewManager___c_TypeInfo, v14);
    sub_B2C35C(&UserItemListViewItem_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_9312/*"NONITEM_NOTICE"*/, v16);
    sub_B2C35C(&StringLiteral_7045/*"HEADER_NOTICE_MSG"*/, v17);
    byte_4187017 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrItemList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_7045/*"HEADER_NOTICE_MSG"*/, 0LL);
  if ( !infoLb )
    goto LABEL_51;
  UILabel__set_text(infoLb, (System_String_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_51;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v29 )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(v29, (unsigned __int8)gameObject & 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(v30);
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v38);
    mana = this->fields.manaNum;
  }
  if ( mana >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v38);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v38);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_51;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_51;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, v28);
  if ( List )
  {
    v44 = *(_QWORD *)&List->max_length;
    v45 = List;
    if ( (int)v44 >= 1 )
    {
      v46 = 0LL;
      do
      {
        if ( v46 >= (unsigned int)v44 )
        {
          v65 = sub_B2C460(List);
          sub_B2C400(v65, 0LL);
        }
        UserItemListViewManager__SetUsrItemData(this, v45->m_Items[v46], v43);
        LODWORD(v44) = v45->max_length;
        ++v46;
      }
      while ( (__int64)v46 < (int)v44 );
    }
  }
  v47 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_usrItemList;
  gameObject = UserItemListViewManager___c_TypeInfo;
  if ( (BYTE3(UserItemListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo);
    gameObject = UserItemListViewManager___c_TypeInfo;
  }
  static_fields = (struct UserItemListViewManager___c_StaticFields *)*((_QWORD *)gameObject + 23);
  _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( (*((_BYTE *)gameObject + 307) & 4) != 0 && !*((_DWORD *)gameObject + 56) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__27_0,
      v50,
      Method_UserItemListViewManager___c__CreateList_b__27_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserItemData___ctor__);
    v51 = UserItemListViewManager___c_TypeInfo->static_fields;
    v51->__9__27_0 = (struct System_Comparison_UserItemData__o *)_9__27_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v51->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  if ( !v47 )
    goto LABEL_51;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v47,
    (System_Comparison_T__o *)_9__27_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserItemData__Sort__);
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9312/*"NONITEM_NOTICE"*/, 0LL);
    if ( nonItemNoticeLb )
    {
      UILabel__set_text(nonItemNoticeLb, (System_String_o *)gameObject, 0LL);
      gameObject = this->fields.nonItemNoticeLb;
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          return;
        }
      }
    }
LABEL_51:
    sub_B2C434(gameObject, v28);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_51;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nonItemNoticeLb, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v61 = *p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_51;
    if ( i >= (unsigned int)v61->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v62 = v61->fields._items->m_Items[i];
    v63 = (UserItemListViewItem_o *)sub_B2C42C(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v63, v62, v64);
    gameObject = this->fields.itemList;
    if ( !gameObject )
      goto LABEL_51;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
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

  if ( (byte_418701A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&UserItemListViewItem_TypeInfo, v5);
    byte_418701A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  UserItemListViewManager_o *v4; // x19
  System_Int32_array **Item; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v4 = this;
  if ( (byte_4187020 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B2C35C(&StringLiteral_11628/*"SELECT_ITEM"*/, obj);
    byte_4187020 = 1;
  }
  if ( !obj
    || (Item = (System_Int32_array **)UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v4->fields.selectItem = (struct UserItemListViewItem_o *)Item,
        sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v6, v7, v8, v9, v10, v11),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0LL) )
  {
    sub_B2C434(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11628/*"SELECT_ITEM"*/, 0LL);
}


void __fastcall UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_418701F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418701F = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418701D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_UserItemListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418701D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_23993696(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418701E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_UserItemListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418701E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4187023 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3096/*"CLOSE_DETAIL"*/, isDecide);
    byte_4187023 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3096/*"CLOSE_DETAIL"*/, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_23993492(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_23993492(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_418701C & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B2C35C(
                                          &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                          *(_QWORD *)&mode);
    byte_418701C = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B2C434(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_23993696(v4, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_23993640(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_23993492(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetObjectItem(
        UserItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_418701B & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B2C35C(&UserItemListViewObject_TypeInfo, obj);
    byte_418701B = 1;
  }
  if ( !obj
    || (v6 = *(&UserItemListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
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
  UserItemListViewManager_o *v4; // x20
  __int64 v5; // x1
  ItemEntity_o *ItemInfo; // x0
  unsigned int type; // w8
  ItemEntity_o *v8; // x21
  __int64 v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **name; // x1
  System_Int32_array **detail; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v4 = this;
  if ( (byte_4187019 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemData__Add__, data);
    this = (UserItemListViewManager_o *)sub_B2C35C(&UserItemData_TypeInfo, v5);
    byte_4187019 = 1;
  }
  if ( !data )
    goto LABEL_12;
  ItemInfo = UserItemEntity__getItemInfo(data, (const MethodInfo *)data);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v8 = ItemInfo;
      if ( type > 0x1D || ((1 << type) & 0x20002006) == 0 )
      {
        v9 = sub_B2C42C(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0LL);
        if ( v9 )
        {
          *(_DWORD *)(v9 + 16) = v8->fields.type;
          *(_DWORD *)(v9 + 24) = v8->fields.id;
          *(_DWORD *)(v9 + 20) = v8->fields.priority;
          *(_DWORD *)(v9 + 28) = v8->fields.imageId;
          name = (System_Int32_array **)v8->fields.name;
          *(_QWORD *)(v9 + 32) = name;
          sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), name, v10, v11, v12, v13, v14, v15);
          detail = (System_Int32_array **)v8->fields.detail;
          *(_QWORD *)(v9 + 40) = detail;
          sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 40), detail, v18, v19, v20, v21, v22, v23);
          *(_DWORD *)(v9 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          if ( this )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserItemData__Add__);
            return;
          }
        }
LABEL_12:
        sub_B2C434(this, data);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ItemEntity_o *EntityByType; // x0
  ItemEntity_o *v11; // x22
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **name; // x1
  System_Int32_array **detail; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t rarePriNum; // w8

  if ( (byte_4187018 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemType);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemData__Add__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&UserItemData_TypeInfo, v7);
    byte_4187018 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_17:
    sub_B2C434(Instance, v9);
  }
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v11 = EntityByType;
    v12 = sub_B2C42C(UserItemData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( !v12 )
      goto LABEL_17;
    *(_DWORD *)(v12 + 16) = v11->fields.type;
    *(_DWORD *)(v12 + 24) = v11->fields.id;
    *(_DWORD *)(v12 + 20) = v11->fields.priority;
    *(_DWORD *)(v12 + 28) = v11->fields.imageId;
    name = (System_Int32_array **)v11->fields.name;
    *(_QWORD *)(v12 + 32) = name;
    sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 32), name, v13, v14, v15, v16, v17, v18);
    detail = (System_Int32_array **)v11->fields.detail;
    *(_QWORD *)(v12 + 40) = detail;
    sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 40), detail, v21, v22, v23, v24, v25, v26);
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
    *(_DWORD *)(v12 + 48) = rarePriNum;
  }
  else
  {
    v12 = 0LL;
  }
LABEL_15:
  Instance = (DataManager_o *)this->fields.usrItemList;
  if ( !Instance )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserItemData__Add__);
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

  if ( (byte_4187011 & 1) == 0 )
  {
    sub_B2C35C(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4187011 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4187013 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187013 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B2C728(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x0

  if ( (byte_4187022 & 1) == 0 )
  {
    sub_B2C35C(&Method_UserItemListViewManager_closeItemDetail__, method);
    byte_4187022 = 1;
  }
  v3 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_UserItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  if ( !itemDetailInfoComp )
    sub_B2C434(0LL, v5);
  ItemDetailInfoComponent__Close(itemDetailInfoComp, 0LL);
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UserItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4187016 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187016 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (UserItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)current,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v11;
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187015 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187015 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v11;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x20
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  ItemDetailInfoComponent_o *monitor; // x19
  UserItemData_o *interopData; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *v9; // x23
  ItemDetailInfoComponent_CallbackFunc_o *v10; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v11; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4187021 & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    this = (UserItemListViewManager_o *)sub_B2C35C(&Method_UserItemListViewManager_SelectItemDetail__, v3);
    byte_4187021 = 1;
  }
  klass = v2[23].klass;
  if ( !klass )
    goto LABEL_10;
  monitor = (ItemDetailInfoComponent_o *)v2[20].monitor;
  interopData = (UserItemData_o *)klass->_1.interopData;
  if ( HIDWORD(klass->_1.klass) == 2 )
  {
    if ( interopData )
    {
      name = interopData->fields.name;
      detail = interopData->fields.detail;
      v9 = (UserGameEntity_o *)v2[25].monitor;
      v10 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(v10, v2, Method_UserItemListViewManager_SelectItemDetail__, 0LL);
      if ( monitor )
      {
        ItemDetailInfoComponent__ShowStoneDetail(monitor, name, detail, v9, v10, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B2C434(this, method);
  }
  v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(v11, v2, Method_UserItemListViewManager_SelectItemDetail__, 0LL);
  if ( !monitor )
    goto LABEL_10;
  ItemDetailInfoComponent__OpenUserItemInfo(monitor, interopData, v11, 5, 0LL);
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

  if ( (byte_4187012 & 1) == 0 )
  {
    sub_B2C35C(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4187012 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_4187014 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187014 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B2C728(v7);
  UserItemListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager_CallbackFunc___ctor(
        UserItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41856B1 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    byte_41856B1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager_CallbackFunc__Invoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  UserItemListViewManager_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  UserItemListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  UserItemListViewManager_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (UserItemListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}


void __fastcall UserItemListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserItemListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_41856B0 & 1) == 0 )
  {
    sub_B2C35C(&UserItemListViewManager___c_TypeInfo, v1);
    byte_41856B0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserItemListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}