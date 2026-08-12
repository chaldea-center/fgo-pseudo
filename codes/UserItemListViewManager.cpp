void UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *infoLb; // x20
  void *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x2
  Il2CppObject *Master_object; // x20
  struct UserExternalPaymentStoneEntity_o *Entity; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t chargeStone; // w20
  System_String_o *v36; // x0
  const MethodInfo *v37; // x4
  struct UserGameEntity_o *v38; // x8
  int32_t freeStone; // w20
  System_String_o *v40; // x0
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x4
  UserItemEntity_array *List; // x0
  const MethodInfo *v45; // x2
  il2cpp_array_size_t max_length; // x8
  UserItemEntity_array *v47; // x20
  unsigned __int64 v48; // x21
  System_Collections_Generic_List_object__o *usrItemList; // x20
  struct UserItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__28_0; // x21
  Il2CppObject *v52; // x22
  struct UserItemListViewManager___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x2
  struct System_Collections_Generic_List_UserItemData__o *v61; // x8
  int size; // w24
  UILabel_o *nonItemNoticeLb; // x20
  int32_t i; // w20
  Il2CppObject *Item; // x22
  UserItemListViewItem_o *v66; // x21
  const MethodInfo *v67; // x2
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8

  if ( (byte_596B607 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UserItemData__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemData__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemData__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_UserItemData__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_UserItemListViewManager___c__CreateList_b__28_0__);
    sub_2213A60(&UserItemListViewManager___c_TypeInfo);
    sub_2213A60(&UserItemListViewItem_TypeInfo);
    sub_2213A60(&StringLiteral_6802/*"FREE_STONE_ITEM_NAME"*/);
    sub_2213A60(&StringLiteral_9663/*"NONITEM_NOTICE"*/);
    sub_2213A60(&StringLiteral_3483/*"CHARGE_STONE_ITEM_NAME"*/);
    sub_2213A60(&StringLiteral_7513/*"HEADER_NOTICE_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B607 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.usrItemList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  infoLb = this->fields.infoLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_7513/*"HEADER_NOTICE_MSG"*/, 0);
  if ( !infoLb )
    goto LABEL_53;
  UILabel__set_text(infoLb, (System_String_o *)gameObject, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_53;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v15 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v15, (unsigned __int8)gameObject & 1, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23, v24);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v25);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  gameObject = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v25);
    gameObject = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_53;
  Entity = UserExternalPaymentStoneMaster__GetEntity(
             (UserExternalPaymentStoneMaster_o *)Master_object,
             *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
             4,
             0);
  this->fields.userExternalPaymentStoneEntity = Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userExternalPaymentStoneEntity,
    (int32_t)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_53;
  this->fields.stoneNum = userGameEntity->fields.stone;
  *(_QWORD *)&this->fields.manaNum = *(_QWORD *)&userGameEntity->fields.mana;
  chargeStone = userGameEntity->fields.chargeStone;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3483/*"CHARGE_STONE_ITEM_NAME"*/, 0);
  UserItemListViewManager__SetUsrItemDataByType(this, 17, chargeStone, v36, v37);
  v38 = this->fields.userGameEntity;
  if ( !v38 )
    goto LABEL_53;
  freeStone = v38->fields.freeStone;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_6802/*"FREE_STONE_ITEM_NAME"*/, 0);
  UserItemListViewManager__SetUsrItemDataByType(this, 2, freeStone, v40, v41);
  UserItemListViewManager__SetUsrItemDataByType(this, 5, this->fields.manaNum, (System_String_o *)StringLiteral_1/*""*/, v42);
  UserItemListViewManager__SetUsrItemDataByType(
    this,
    22,
    this->fields.rarePriNum,
    (System_String_o *)StringLiteral_1/*""*/,
    v43);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_53;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_53;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, 0);
  if ( List )
  {
    max_length = List->max_length;
    v47 = List;
    if ( (int)max_length >= 1 )
    {
      v48 = 0;
      do
      {
        if ( v48 >= (unsigned int)max_length )
          sub_2213CE4(List);
        UserItemListViewManager__SetUsrItemData(this, v47->m_Items[v48], v45);
        LODWORD(max_length) = v47->max_length;
        ++v48;
      }
      while ( (__int64)v48 < (int)max_length );
    }
  }
  usrItemList = (System_Collections_Generic_List_object__o *)this->fields.usrItemList;
  gameObject = UserItemListViewManager___c_TypeInfo;
  if ( !*(&UserItemListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo, v14, v45);
    gameObject = UserItemListViewManager___c_TypeInfo;
  }
  static_fields = (struct UserItemListViewManager___c_StaticFields *)*((_QWORD *)gameObject + 23);
  _9__28_0 = (System_Comparison_T__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*((_DWORD *)gameObject + 57) )
    {
      j_il2cpp_runtime_class_init_0(gameObject, v14, v45);
      static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_object____ctor(_9__28_0, v52, Method_UserItemListViewManager___c__CreateList_b__28_0__, 0);
    v53 = UserItemListViewManager___c_TypeInfo->static_fields;
    v53->__9__28_0 = (struct System_Comparison_UserItemData__o *)_9__28_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->__9__28_0, (int32_t)_9__28_0, v54, v55, v56, v57, v58, v59);
  }
  if ( !usrItemList )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_71849708(
    usrItemList,
    _9__28_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  v61 = this->fields.usrItemList;
  if ( !v61 )
    goto LABEL_53;
  size = v61->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( size < 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v60);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9663/*"NONITEM_NOTICE"*/, 0);
    if ( nonItemNoticeLb )
    {
      UILabel__set_text(nonItemNoticeLb, (System_String_o *)gameObject, 0);
      gameObject = this->fields.nonItemNoticeLb;
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          return;
        }
      }
    }
LABEL_53:
    sub_2213CDC(gameObject, v14);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_53;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nonItemNoticeLb, 0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  for ( i = 0; i != size; ++i )
  {
    gameObject = this->fields.usrItemList;
    if ( !gameObject )
      goto LABEL_53;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             i,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserItemData__get_Item__);
    v66 = (UserItemListViewItem_o *)sub_2213CCC(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v66, (UserItemData_o *)Item, v67);
    gameObject = this->fields.itemList;
    if ( !gameObject )
      goto LABEL_53;
    v74 = *((_QWORD *)gameObject + 2);
    v75 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*((_DWORD *)gameObject + 7);
    if ( !v74 )
      goto LABEL_53;
    v76 = *((int *)gameObject + 6);
    if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)v66,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = v74 + 8 * v76;
      *((_DWORD *)gameObject + 6) = v76 + 1;
      *(_QWORD *)(v77 + 32) = v66;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 32), (int32_t)v66, v68, v69, v70, v71, v72, v73);
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void UserItemListViewManager__DestroyList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


UserItemListViewItem_o *UserItemListViewManager__GetItem(
        UserItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UserItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596B60B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UserItemListViewItem_TypeInfo);
    byte_596B60B = 1;
  }
  result = (UserItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = UserItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (UserItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != UserItemListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool UserItemListViewManager__IsDispItem(
        UserItemListViewManager_o *this,
        int32_t itemId,
        int32_t itemNum,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_596B60A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_9202/*"MYROOM_ITEM_NUM_MINUS_DISP"*/);
    byte_596B60A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&itemId, *(_QWORD *)&itemNum);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( itemNum > 0 )
    return 1;
  if ( !itemNum )
    return 0;
  if ( !Master_object )
    sub_2213CDC(0, v7);
  return ConstantStrMaster__ExistValueArray(
           (ConstantStrMaster_o *)Master_object,
           (System_String_o *)StringLiteral_9202/*"MYROOM_ITEM_NUM_MINUS_DISP"*/,
           itemId,
           0);
}


void UserItemListViewManager__OnClickListView(
        UserItemListViewManager_o *this,
        UserItemListViewObject_o *obj,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  UserItemListViewItem_o *Item; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v4 = this;
  if ( (byte_596B611 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_2213A60(&StringLiteral_12046/*"SELECT_ITEM"*/);
    byte_596B611 = 1;
  }
  if ( !obj
    || (Item = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v4->fields.selectItem = Item,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.selectItem, (int32_t)Item, v6, v7, v8, v9, v10, v11),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0) )
  {
    sub_2213CDC(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12046/*"SELECT_ITEM"*/, 0);
}


void UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596B610 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B610 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewManager__RequestListObject(
        UserItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B60E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_2213A60(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B60E = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      UserItemListViewObject__Init_39919356((UserItemListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewManager__RequestListObject_39918352(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B60F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_2213A60(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B60F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      UserItemListViewObject__Init_39919440((UserItemListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_596B614 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3647/*"CLOSE_DETAIL"*/);
    byte_596B614 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_2213CDC(0, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3647/*"CLOSE_DETAIL"*/, 0);
}


void UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_39918168(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewManager__SetMode_39918168(UserItemListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_596B60D & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_596B60D = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_2213CDC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_39918352(v4, 3, v6);
}


void UserItemListViewManager__SetMode_39918300(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_39918168(this, mode, v10);
}


void UserItemListViewManager__SetObjectItem(
        UserItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596B60C & 1) == 0 )
  {
    sub_2213A60(&UserItemListViewObject_TypeInfo);
    byte_596B60C = 1;
  }
  if ( obj
    && (naturalAligment = UserItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == UserItemListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  UserItemListViewObject__Init_39918044((UserItemListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void UserItemListViewManager__SetUsrItemData(
        UserItemListViewManager_o *this,
        UserItemEntity_o *data,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x20
  ItemEntity_o *ItemInfo; // x0
  const MethodInfo *v6; // x3
  ItemEntity_o *v7; // x21
  unsigned int type; // w8
  __int64 v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t priority; // w9
  int32_t id; // w10
  struct System_String_o *name; // x1
  int32_t imageId; // w8
  System_String_o *Detail; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v4 = this;
  if ( (byte_596B609 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemData__Add__);
    this = (UserItemListViewManager_o *)sub_2213A60(&UserItemData_TypeInfo);
    byte_596B609 = 1;
  }
  if ( !data )
    goto LABEL_12;
  ItemInfo = UserItemEntity__getItemInfo(data, 0);
  if ( ItemInfo )
  {
    v7 = ItemInfo;
    if ( UserItemListViewManager__IsDispItem(
           (UserItemListViewManager_o *)ItemInfo,
           ItemInfo->fields.id,
           data->fields.num,
           v6) )
    {
      type = v7->fields.type;
      if ( type > 0x26 || ((1LL << type) & 0x4020002006LL) == 0 )
      {
        v9 = sub_2213CCC(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        if ( v9 )
        {
          priority = v7->fields.priority;
          id = v7->fields.id;
          name = v7->fields.name;
          *(_DWORD *)(v9 + 16) = v7->fields.type;
          imageId = v7->fields.imageId;
          *(_DWORD *)(v9 + 20) = priority;
          *(_DWORD *)(v9 + 24) = id;
          *(_DWORD *)(v9 + 28) = imageId;
          *(_QWORD *)(v9 + 32) = name;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)name, v10, v11, v12, v13, v14, v15);
          Detail = ItemEntity__GetDetail(v7, 0);
          *(_QWORD *)(v9 + 40) = Detail;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)Detail, v21, v22, v23, v24, v25, v26);
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          *(_DWORD *)(v9 + 48) = data->fields.num;
          if ( this )
          {
            sub_1FFEDA8(this, v9, Method_System_Collections_Generic_List_UserItemData__Add__);
            return;
          }
        }
LABEL_12:
        sub_2213CDC(this, data);
      }
    }
  }
}


void UserItemListViewManager__SetUsrItemDataByType(
        UserItemListViewManager_o *this,
        int32_t itemType,
        int32_t itemNum,
        System_String_o *itemName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  ItemEntity_o *EntityByType; // x0
  const MethodInfo *v12; // x3
  ItemEntity_o *v13; // x23
  __int64 v14; // x22
  int32_t priority; // w9
  int32_t id; // w10
  int32_t imageId; // w8
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *Detail; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_List_object__o *usrItemList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x0

  if ( (byte_596B608 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemData__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserItemData_TypeInfo);
    byte_596B608 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_16;
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0);
  if ( EntityByType )
  {
    v13 = EntityByType;
    if ( UserItemListViewManager__IsDispItem(
           (UserItemListViewManager_o *)EntityByType,
           EntityByType->fields.id,
           itemNum,
           v12) )
    {
      v14 = sub_2213CCC(UserItemData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( v14 )
      {
        priority = v13->fields.priority;
        id = v13->fields.id;
        *(_DWORD *)(v14 + 16) = v13->fields.type;
        imageId = v13->fields.imageId;
        *(_DWORD *)(v14 + 20) = priority;
        *(_DWORD *)(v14 + 24) = id;
        *(_DWORD *)(v14 + 28) = imageId;
        if ( System_String__IsNullOrEmpty(itemName, 0) )
          itemName = v13->fields.name;
        *(_QWORD *)(v14 + 32) = itemName;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)itemName, v18, v19, v20, v21, v22, v23);
        Detail = ItemEntity__GetDetail(v13, 0);
        *(_QWORD *)(v14 + 40) = Detail;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 40), (int32_t)Detail, v25, v26, v27, v28, v29, v30);
        usrItemList = (System_Collections_Generic_List_object__o *)this->fields.usrItemList;
        *(_DWORD *)(v14 + 48) = itemNum;
        if ( usrItemList )
        {
          items = usrItemList->fields._items;
          v39 = Method_System_Collections_Generic_List_UserItemData__Add__;
          ++usrItemList->fields._version;
          if ( items )
          {
            size = usrItemList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                usrItemList,
                (Il2CppObject *)v14,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              usrItemList->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v14;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), v14, v31, v32, v33, v34, v35, v36);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_2213CDC(Instance, v10);
    }
  }
}


void UserItemListViewManager__add_callbackFunc(
        UserItemListViewManager_o *this,
        UserItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  UserItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B601 & 1) == 0 )
  {
    sub_2213A60(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_596B601 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v6->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_221405C(v6, UserItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
  UserItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void UserItemListViewManager__add_callbackFunc2(
        UserItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B603 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B603 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  UserItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_596B613 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_UserItemListViewManager_closeItemDetail__);
    byte_596B613 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0) )
    {
      v5 = Method_UserItemListViewManager_closeItemDetail__;
      if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_UserItemListViewManager_closeItemDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow(Instance, 0, 0);
        return;
      }
LABEL_15:
      sub_2213CDC(Instance, v4);
    }
  }
  v7 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_UserItemListViewManager_closeItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  Instance = (CommonUI_o *)this->fields.itemDetailInfoComp;
  if ( !Instance )
    goto LABEL_15;
  ItemDetailInfoComponent__Close_39909252((ItemDetailInfoComponent_o *)Instance, 0, v9);
}


System_Collections_Generic_List_UserItemListViewObject__o *UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596B606 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B606 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem((UserItemListViewObject_o *)Component_object, v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


System_Collections_Generic_List_UserItemListViewObject__o *UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B605 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B605 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


void UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct UserItemListViewItem_o *selectItem; // x8
  int32_t itemType; // w8
  struct UserItemListViewItem_o *v7; // x8
  CommonUI_o *v8; // x20
  ItemEntity_o *itemEntity; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v10; // x22
  int32_t v11; // w9
  struct UserItemData_o *v12; // x8
  System_String_o *name; // x21
  System_String_o *detail; // x22
  UserGameEntity_o *userGameEntity; // x23
  UserExternalPaymentStoneEntity_o *userExternalPaymentStoneEntity; // x24
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x25
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x6
  struct UserItemListViewItem_o *v21; // x8
  CommonUI_o *v22; // x20
  UserItemData_o *itemData; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v24; // x22
  ItemDetailInfoComponent_o *v25; // x20
  UserItemData_o *v26; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v27; // x22
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x4

  if ( (byte_596B612 & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_UserItemListViewManager_SelectItemDetail__);
    byte_596B612 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0);
  selectItem = this->fields.selectItem;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !selectItem )
      goto LABEL_22;
    itemType = selectItem->fields.itemType;
    if ( itemType == 17 || itemType == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = this->fields.selectItem;
      if ( v7 )
      {
        v8 = (CommonUI_o *)Instance;
        itemEntity = v7->fields.itemEntity;
        v10 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_2213CCC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_UserItemListViewManager_SelectItemDetail__,
          0);
        if ( v8 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v8, itemEntity, v10, 1, 0);
          return;
        }
      }
LABEL_22:
      sub_2213CDC(Instance, v4);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = this->fields.selectItem;
    if ( !v21 )
      goto LABEL_22;
    v22 = (CommonUI_o *)Instance;
    itemData = v21->fields.itemData;
    v24 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_2213CCC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      0);
    if ( !v22 )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoDetailWindow_37479768(v22, itemData, v24, 0);
  }
  else
  {
    if ( !selectItem )
      goto LABEL_22;
    v11 = selectItem->fields.itemType;
    if ( v11 == 17 || v11 == 2 )
    {
      v12 = selectItem->fields.itemData;
      if ( !v12 )
        goto LABEL_22;
      name = v12->fields.name;
      detail = v12->fields.detail;
      userGameEntity = this->fields.userGameEntity;
      userExternalPaymentStoneEntity = this->fields.userExternalPaymentStoneEntity;
      itemDetailInfoComp = this->fields.itemDetailInfoComp;
      v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v19);
      if ( !itemDetailInfoComp )
        goto LABEL_22;
      ItemDetailInfoComponent__ShowStoneDetail(
        itemDetailInfoComp,
        name,
        detail,
        userGameEntity,
        userExternalPaymentStoneEntity,
        v18,
        v20);
    }
    else
    {
      v25 = this->fields.itemDetailInfoComp;
      v26 = selectItem->fields.itemData;
      v27 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v28);
      if ( !v25 )
        goto LABEL_22;
      ItemDetailInfoComponent__OpenUserItemInfo(v25, v26, v27, 5, v29);
    }
  }
}


void UserItemListViewManager__remove_callbackFunc(
        UserItemListViewManager_o *this,
        UserItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B602 & 1) == 0 )
  {
    sub_2213A60(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_596B602 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v6->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_221405C(v6, UserItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
  UserItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void UserItemListViewManager__remove_callbackFunc2(
        UserItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596B604 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B604 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  UserItemListViewManager__get_ObjectList(v11, v12);
}


void UserItemListViewManager_CallbackFunc___ctor(
        UserItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2001FC0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2001F78;
}


System_IAsyncResult_o *UserItemListViewManager_CallbackFunc__BeginInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UserItemListViewManager_CallbackFunc__Invoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void UserItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B615 & 1) == 0 )
  {
    sub_2213A60(&UserItemListViewManager___c_TypeInfo);
    byte_596B615 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserItemListViewManager___c_TypeInfo->static_fields->__9 = (struct UserItemListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserItemListViewManager___c___ctor(UserItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserItemListViewManager___c___CreateList_b__28_0(
        UserItemListViewManager___c_o *this,
        UserItemData_o *a,
        UserItemData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}