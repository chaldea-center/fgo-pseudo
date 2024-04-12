void __fastcall UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UILabel_o *infoLb; // x21
  void *gameObject; // x0
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  const MethodInfo *v15; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  struct UserGameEntity_o *userGameEntity; // x9
  int32_t stone; // w10
  int mana; // w8
  UserItemEntity_array *List; // x0
  const MethodInfo *v28; // x2
  __int64 v29; // x8
  UserItemEntity_array *v30; // x21
  unsigned __int64 v31; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v32; // x21
  struct UserItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x22
  Il2CppObject *v35; // x23
  struct UserItemListViewManager___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  signed __int64 size; // x23
  UILabel_o *nonItemNoticeLb; // x21
  unsigned __int64 i; // x24
  struct System_Collections_Generic_List_UserItemData__o *v46; // x21
  UserItemData_o *v47; // x22
  UserItemListViewItem_o *v48; // x21
  const MethodInfo *v49; // x2
  __int64 v50; // x0

  if ( (byte_42AEF79 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_UserItemData___ctor__);
    sub_B52984(&System_Comparison_UserItemData__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemData__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemData__get_Item__);
    sub_B52984(&System_Collections_Generic_List_UserItemData__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UserItemListViewManager___c__CreateList_b__27_0__);
    sub_B52984(&UserItemListViewManager___c_TypeInfo);
    sub_B52984(&UserItemListViewItem_TypeInfo);
    sub_B52984(&StringLiteral_9369/*"NONITEM_NOTICE"*/);
    sub_B52984(&StringLiteral_7091/*"HEADER_NOTICE_MSG"*/);
    byte_42AEF79 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.usrItemList,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_7091/*"HEADER_NOTICE_MSG"*/, 0LL);
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
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v14 )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(v14, (unsigned __int8)gameObject & 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(v15);
  this->fields.userGameEntity = SelfUserGame;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v23);
    mana = this->fields.manaNum;
  }
  if ( mana >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v23);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v23);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_51;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_51;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, v13);
  if ( List )
  {
    v29 = *(_QWORD *)&List->max_length;
    v30 = List;
    if ( (int)v29 >= 1 )
    {
      v31 = 0LL;
      do
      {
        if ( v31 >= (unsigned int)v29 )
        {
          v50 = sub_B52A88(List);
          sub_B52A28(v50, 0LL);
        }
        UserItemListViewManager__SetUsrItemData(this, v30->m_Items[v31], v28);
        LODWORD(v29) = v30->max_length;
        ++v31;
      }
      while ( (__int64)v31 < (int)v29 );
    }
  }
  v32 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_usrItemList;
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
    v35 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__27_0,
      v35,
      Method_UserItemListViewManager___c__CreateList_b__27_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_UserItemData___ctor__);
    v36 = UserItemListViewManager___c_TypeInfo->static_fields;
    v36->__9__27_0 = (struct System_Comparison_UserItemData__o *)_9__27_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v36->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v32 )
    goto LABEL_51;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v32,
    (System_Comparison_T__o *)_9__27_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_UserItemData__Sort__);
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9369/*"NONITEM_NOTICE"*/, 0LL);
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
    sub_B52A5C(gameObject, v13);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_51;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nonItemNoticeLb, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v46 = *p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_51;
    if ( i >= (unsigned int)v46->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v47 = v46->fields._items->m_Items[i];
    v48 = (UserItemListViewItem_o *)sub_B52A54(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v48, v47, v49);
    gameObject = this->fields.itemList;
    if ( !gameObject )
      goto LABEL_51;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall UserItemListViewManager__DestroyList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


UserItemListViewItem_o *__fastcall UserItemListViewManager__GetItem(
        UserItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42AEF7C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&UserItemListViewItem_TypeInfo);
    byte_42AEF7C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&UserItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (UserItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == UserItemListViewItem_TypeInfo )
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
  if ( (byte_42AEF82 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B52984(&StringLiteral_11715/*"SELECT_ITEM"*/);
    byte_42AEF82 = 1;
  }
  if ( !obj
    || (Item = (System_Int32_array **)UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v4->fields.selectItem = (struct UserItemListViewItem_o *)Item,
        sub_B52920((BattleServantConfConponent_o *)&v4->fields.selectItem, Item, v6, v7, v8, v9, v10, v11),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0LL) )
  {
    sub_B52A5C(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11715/*"SELECT_ITEM"*/, 0LL);
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

  if ( (byte_42AEF81 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEF81 = 1;
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
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AEF7F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_B52984(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42AEF7F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_23227124(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AEF80 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_B52984(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42AEF80 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42AEF85 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3128/*"CLOSE_DETAIL"*/);
    byte_42AEF85 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B52A5C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3128/*"CLOSE_DETAIL"*/, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_23226920(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_23226920(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_42AEF7E & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_42AEF7E = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B52A5C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_23227124(v4, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_23227068(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_23226920(this, mode, v10);
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
  if ( (byte_42AEF7D & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B52984(&UserItemListViewObject_TypeInfo);
    byte_42AEF7D = 1;
  }
  if ( !obj
    || (v6 = *(&UserItemListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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
  ItemEntity_o *ItemInfo; // x0
  unsigned int type; // w8
  ItemEntity_o *v7; // x21
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **name; // x1
  System_Int32_array **detail; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v4 = this;
  if ( (byte_42AEF7B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UserItemData__Add__);
    this = (UserItemListViewManager_o *)sub_B52984(&UserItemData_TypeInfo);
    byte_42AEF7B = 1;
  }
  if ( !data )
    goto LABEL_12;
  ItemInfo = UserItemEntity__getItemInfo(data, (const MethodInfo *)data);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v7 = ItemInfo;
      if ( type > 0x1D || ((1 << type) & 0x20002006) == 0 )
      {
        v8 = sub_B52A54(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v8, 0LL);
        if ( v8 )
        {
          *(_DWORD *)(v8 + 16) = v7->fields.type;
          *(_DWORD *)(v8 + 24) = v7->fields.id;
          *(_DWORD *)(v8 + 20) = v7->fields.priority;
          *(_DWORD *)(v8 + 28) = v7->fields.imageId;
          name = (System_Int32_array **)v7->fields.name;
          *(_QWORD *)(v8 + 32) = name;
          sub_B52920((BattleServantConfConponent_o *)(v8 + 32), name, v9, v10, v11, v12, v13, v14);
          detail = (System_Int32_array **)v7->fields.detail;
          *(_QWORD *)(v8 + 40) = detail;
          sub_B52920((BattleServantConfConponent_o *)(v8 + 40), detail, v17, v18, v19, v20, v21, v22);
          *(_DWORD *)(v8 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          if ( this )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserItemData__Add__);
            return;
          }
        }
LABEL_12:
        sub_B52A5C(this, data);
      }
    }
  }
}


void __fastcall UserItemListViewManager__SetUsrItemDataByType(
        UserItemListViewManager_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ItemEntity_o *EntityByType; // x0
  ItemEntity_o *v8; // x22
  __int64 v9; // x21
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
  int32_t rarePriNum; // w8

  if ( (byte_42AEF7A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemData__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserItemData_TypeInfo);
    byte_42AEF7A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_17:
    sub_B52A5C(Instance, v6);
  }
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v8 = EntityByType;
    v9 = sub_B52A54(UserItemData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( !v9 )
      goto LABEL_17;
    *(_DWORD *)(v9 + 16) = v8->fields.type;
    *(_DWORD *)(v9 + 24) = v8->fields.id;
    *(_DWORD *)(v9 + 20) = v8->fields.priority;
    *(_DWORD *)(v9 + 28) = v8->fields.imageId;
    name = (System_Int32_array **)v8->fields.name;
    *(_QWORD *)(v9 + 32) = name;
    sub_B52920((BattleServantConfConponent_o *)(v9 + 32), name, v10, v11, v12, v13, v14, v15);
    detail = (System_Int32_array **)v8->fields.detail;
    *(_QWORD *)(v9 + 40) = detail;
    sub_B52920((BattleServantConfConponent_o *)(v9 + 40), detail, v18, v19, v20, v21, v22, v23);
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
    *(_DWORD *)(v9 + 48) = rarePriNum;
  }
  else
  {
    v9 = 0LL;
  }
LABEL_15:
  Instance = (DataManager_o *)this->fields.usrItemList;
  if ( !Instance )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserItemData__Add__);
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

  if ( (byte_42AEF73 & 1) == 0 )
  {
    sub_B52984(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_42AEF73 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42AEF75 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AEF75 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B52D50(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x0

  if ( (byte_42AEF84 & 1) == 0 )
  {
    sub_B52984(&Method_UserItemListViewManager_closeItemDetail__);
    byte_42AEF84 = 1;
  }
  v3 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_UserItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  if ( !itemDetailInfoComp )
    sub_B52A5C(0LL, v5);
  ItemDetailInfoComponent__Close(itemDetailInfoComp, 0LL);
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UserItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AEF78 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEF78 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (UserItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)current,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AEF77 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEF77 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x20
  Il2CppClass *klass; // x8
  ItemDetailInfoComponent_o *monitor; // x19
  UserItemData_o *interopData; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *v8; // x23
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v10; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_42AEF83 & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    this = (UserItemListViewManager_o *)sub_B52984(&Method_UserItemListViewManager_SelectItemDetail__);
    byte_42AEF83 = 1;
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
      v8 = (UserGameEntity_o *)v2[25].monitor;
      v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(v9, v2, Method_UserItemListViewManager_SelectItemDetail__, 0LL);
      if ( monitor )
      {
        ItemDetailInfoComponent__ShowStoneDetail(monitor, name, detail, v8, v9, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B52A5C(this, method);
  }
  v10 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(v10, v2, Method_UserItemListViewManager_SelectItemDetail__, 0LL);
  if ( !monitor )
    goto LABEL_10;
  ItemDetailInfoComponent__OpenUserItemInfo(monitor, interopData, v10, 5, 0LL);
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

  if ( (byte_42AEF74 & 1) == 0 )
  {
    sub_B52984(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_42AEF74 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42AEF76 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AEF76 = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_B52D50(v7);
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
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_42AE590 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AE590 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE58F & 1) == 0 )
  {
    sub_B52984(&UserItemListViewManager___c_TypeInfo);
    byte_42AE58F = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserItemListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}