void UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UILabel_o *infoLb; // x21
  void *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *Master_object; // x21
  struct UserExternalPaymentStoneEntity_o *Entity; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t chargeStone; // w21
  System_String_o *v32; // x0
  const MethodInfo *v33; // x4
  struct UserGameEntity_o *v34; // x8
  int32_t freeStone; // w21
  System_String_o *v36; // x0
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x4
  UserItemEntity_array *List; // x0
  const MethodInfo *v41; // x2
  il2cpp_array_size_t max_length; // x8
  UserItemEntity_array *v43; // x21
  unsigned __int64 v44; // x22
  System_Collections_Generic_List_object__o *v45; // x21
  System_Comparison_T__o *v46; // x22
  Il2CppObject *v47; // x23
  struct UserItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int size; // w25
  UILabel_o *nonItemNoticeLb; // x21
  int32_t i; // w21
  Il2CppObject *Item; // x23
  UserItemListViewItem_o *v59; // x22
  const MethodInfo *v60; // x2
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8

  if ( (byte_4CC2438 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_UserItemData__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemData__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemData__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UserItemData__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_UserItemListViewManager___c__CreateList_b__28_0__);
    sub_1C713B0(&UserItemListViewManager___c_TypeInfo);
    sub_1C713B0(&UserItemListViewItem_TypeInfo);
    sub_1C713B0(&StringLiteral_6511/*"FREE_STONE_ITEM_NAME"*/);
    sub_1C713B0(&StringLiteral_9279/*"NONITEM_NOTICE"*/);
    sub_1C713B0(&StringLiteral_3339/*"CHARGE_STONE_ITEM_NAME"*/);
    sub_1C713B0(&StringLiteral_7212/*"HEADER_NOTICE_MSG"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2438 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.usrItemList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_7212/*"HEADER_NOTICE_MSG"*/, 0);
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
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v14 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v14, (unsigned __int8)gameObject & 1, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  gameObject = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userExternalPaymentStoneEntity,
    (int32_t)Entity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_53;
  this->fields.stoneNum = userGameEntity->fields.stone;
  *(_QWORD *)&this->fields.manaNum = *(_QWORD *)&userGameEntity->fields.mana;
  chargeStone = userGameEntity->fields.chargeStone;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"CHARGE_STONE_ITEM_NAME"*/, 0);
  UserItemListViewManager__SetUsrItemDataByType(this, 17, chargeStone, v32, v33);
  v34 = this->fields.userGameEntity;
  if ( !v34 )
    goto LABEL_53;
  freeStone = v34->fields.freeStone;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6511/*"FREE_STONE_ITEM_NAME"*/, 0);
  UserItemListViewManager__SetUsrItemDataByType(this, 2, freeStone, v36, v37);
  UserItemListViewManager__SetUsrItemDataByType(this, 5, this->fields.manaNum, (System_String_o *)StringLiteral_1/*""*/, v38);
  UserItemListViewManager__SetUsrItemDataByType(
    this,
    22,
    this->fields.rarePriNum,
    (System_String_o *)StringLiteral_1/*""*/,
    v39);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_53;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_53;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, 0);
  if ( List )
  {
    max_length = List->max_length;
    v43 = List;
    if ( (int)max_length >= 1 )
    {
      v44 = 0;
      do
      {
        if ( v44 >= (unsigned int)max_length )
          sub_1C71610(List);
        UserItemListViewManager__SetUsrItemData(this, v43->m_Items[v44], v41);
        LODWORD(max_length) = v43->max_length;
        ++v44;
      }
      while ( (__int64)v44 < (int)max_length );
    }
  }
  v45 = (System_Collections_Generic_List_object__o *)*p_usrItemList;
  gameObject = UserItemListViewManager___c_TypeInfo;
  if ( !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo);
    gameObject = UserItemListViewManager___c_TypeInfo;
  }
  v46 = *(System_Comparison_T__o **)(*((_QWORD *)gameObject + 23) + 8LL);
  if ( !v46 )
  {
    if ( !*((_DWORD *)gameObject + 56) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = UserItemListViewManager___c_TypeInfo;
    }
    v47 = (Il2CppObject *)**((_QWORD **)gameObject + 23);
    v46 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_object____ctor(v46, v47, Method_UserItemListViewManager___c__CreateList_b__28_0__, 0);
    static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_UserItemData__o *)v46;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0, (int32_t)v46, v49, v50, v51, v52, v53, v54);
  }
  if ( !v45 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_58794460(
    v45,
    v46,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  if ( !*p_usrItemList )
    goto LABEL_53;
  size = (*p_usrItemList)->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( size < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9279/*"NONITEM_NOTICE"*/, 0);
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
    sub_1C71608(gameObject, v13);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_53;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nonItemNoticeLb, 0);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  for ( i = 0; i != size; ++i )
  {
    gameObject = *p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_53;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             i,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserItemData__get_Item__);
    v59 = (UserItemListViewItem_o *)sub_1C715FC(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v59, (UserItemData_o *)Item, v60);
    gameObject = this->fields.itemList;
    if ( !gameObject )
      goto LABEL_53;
    v67 = *((_QWORD *)gameObject + 2);
    v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*((_DWORD *)gameObject + 7);
    if ( !v67 )
      goto LABEL_53;
    v69 = *((int *)gameObject + 6);
    if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)v59,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = v67 + 8 * v69;
      *((_DWORD *)gameObject + 6) = v69 + 1;
      *(_QWORD *)(v70 + 32) = v59;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v70 + 32), (int32_t)v59, v61, v62, v63, v64, v65, v66);
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

  if ( (byte_4CC243C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UserItemListViewItem_TypeInfo);
    byte_4CC243C = 1;
  }
  result = (UserItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


bool UserItemListViewManager__IsDispItem(
        UserItemListViewManager_o *this,
        int32_t itemId,
        int32_t itemNum,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4CC243B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8838/*"MYROOM_ITEM_NUM_MINUS_DISP"*/);
    byte_4CC243B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( itemNum > 0 )
    return 1;
  if ( !itemNum )
    return 0;
  if ( !Master_object )
    sub_1C71608(0, v7);
  return ConstantStrMaster__ExistValueArray(
           (ConstantStrMaster_o *)Master_object,
           (System_String_o *)StringLiteral_8838/*"MYROOM_ITEM_NUM_MINUS_DISP"*/,
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v4 = this;
  if ( (byte_4CC2442 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1C713B0(&StringLiteral_11543/*"SELECT_ITEM"*/);
    byte_4CC2442 = 1;
  }
  if ( !obj
    || (Item = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v4->fields.selectItem = Item,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.selectItem, (int32_t)Item, v6, v7, v8, v9, v10, v11),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0) )
  {
    sub_1C71608(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11543/*"SELECT_ITEM"*/, 0);
}


void UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CC2441 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2441 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C71608(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC243F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_1C713B0(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC243F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v12, v13);
      UserItemListViewObject__Init_33459248((UserItemListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewManager__RequestListObject_33458220(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC2440 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_1C713B0(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC2440 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v10, v11);
      UserItemListViewObject__Init_33459332((UserItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CC2445 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3500/*"CLOSE_DETAIL"*/);
    byte_4CC2445 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C71608(0, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3500/*"CLOSE_DETAIL"*/, 0);
}


void UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_33458036(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void UserItemListViewManager__SetMode_33458036(UserItemListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4CC243E & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4CC243E = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C71608(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_33458220(v4, 3, v6);
}


void UserItemListViewManager__SetMode_33458168(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_33458036(this, mode, v10);
}


void UserItemListViewManager__SetObjectItem(
        UserItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CC243D & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1C713B0(&UserItemListViewObject_TypeInfo);
    byte_4CC243D = 1;
  }
  if ( !obj
    || (naturalAligment = UserItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserItemListViewObject__Init_33457912((UserItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void UserItemListViewManager__SetUsrItemData(
        UserItemListViewManager_o *this,
        UserItemEntity_o *data,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x20
  ItemEntity_o *ItemInfo; // x0
  const MethodInfo *v6; // x3
  ItemEntity_o *v7; // x22
  unsigned int type; // w8
  __int64 v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v31; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v33; // x8

  v4 = this;
  if ( (byte_4CC243A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemData__Add__);
    this = (UserItemListViewManager_o *)sub_1C713B0(&UserItemData_TypeInfo);
    byte_4CC243A = 1;
  }
  if ( !data )
    goto LABEL_15;
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
        v9 = sub_1C715FC(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        if ( v9 )
        {
          *(_DWORD *)(v9 + 16) = v7->fields.type;
          *(_DWORD *)(v9 + 24) = v7->fields.id;
          *(_DWORD *)(v9 + 20) = v7->fields.priority;
          *(_DWORD *)(v9 + 28) = v7->fields.imageId;
          name = v7->fields.name;
          *(_QWORD *)(v9 + 32) = name;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)name, v10, v11, v12, v13, v14, v15);
          detail = v7->fields.detail;
          *(_QWORD *)(v9 + 40) = detail;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)detail, v18, v19, v20, v21, v22, v23);
          *(_DWORD *)(v9 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          if ( this )
          {
            m_CachedPtr = this->fields.m_CachedPtr;
            v31 = Method_System_Collections_Generic_List_UserItemData__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( m_CachedPtr )
            {
              m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v9,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v33 + 32) = v9;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v33 + 32), v9, v24, v25, v26, v27, v28, v29);
              }
              return;
            }
          }
        }
LABEL_15:
        sub_1C71608(this, data);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  ItemEntity_o *EntityByType; // x0
  const MethodInfo *v12; // x3
  ItemEntity_o *v13; // x23
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_o *detail; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v37; // x8

  if ( (byte_4CC2439 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemData__Add__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&UserItemData_TypeInfo);
    byte_4CC2439 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
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
      v14 = sub_1C715FC(UserItemData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( v14 )
      {
        *(_DWORD *)(v14 + 16) = v13->fields.type;
        *(_DWORD *)(v14 + 24) = v13->fields.id;
        *(_DWORD *)(v14 + 20) = v13->fields.priority;
        *(_DWORD *)(v14 + 28) = v13->fields.imageId;
        if ( System_String__IsNullOrEmpty(itemName, 0) )
          itemName = v13->fields.name;
        *(_QWORD *)(v14 + 32) = itemName;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)itemName, v15, v16, v17, v18, v19, v20);
        detail = v13->fields.detail;
        *(_QWORD *)(v14 + 40) = detail;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 40), (int32_t)detail, v22, v23, v24, v25, v26, v27);
        *(_DWORD *)(v14 + 48) = itemNum;
        Instance = (DataManager_o *)this->fields.usrItemList;
        if ( Instance )
        {
          m_CachedPtr = Instance->fields.m_CachedPtr;
          v35 = Method_System_Collections_Generic_List_UserItemData__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( m_CachedPtr )
          {
            m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v14,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v37 + 32) = v14;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v37 + 32), v14, v28, v29, v30, v31, v32, v33);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_1C71608(Instance, v10);
    }
  }
}


void UserItemListViewManager__add_callbackFunc(
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

  if ( (byte_4CC2432 & 1) == 0 )
  {
    sub_1C713B0(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CC2432 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v7->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C719A4(v7);
  UserItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void UserItemListViewManager__add_callbackFunc2(
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

  if ( (byte_4CC2434 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2434 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C719A4(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
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

  if ( (byte_4CC2444 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_UserItemListViewManager_closeItemDetail__);
    byte_4CC2444 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0) )
    {
      v5 = Method_UserItemListViewManager_closeItemDetail__;
      if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C713C8(Method_UserItemListViewManager_closeItemDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow(Instance, 0, 0);
        return;
      }
LABEL_15:
      sub_1C71608(Instance, v4);
    }
  }
  v7 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C713C8(Method_UserItemListViewManager_closeItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  Instance = (CommonUI_o *)this->fields.itemDetailInfoComp;
  if ( !Instance )
    goto LABEL_15;
  ItemDetailInfoComponent__Close_33448992((ItemDetailInfoComponent_o *)Instance, 0, v9);
}


System_Collections_Generic_List_UserItemListViewObject__o *UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC2437 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2437 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C71608(0, v10);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem((UserItemListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C71608(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C71608(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C71608(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C71608(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


System_Collections_Generic_List_UserItemListViewObject__o *UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC2436 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2436 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


void UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct UserItemListViewItem_o *selectItem; // x8
  int32_t itemType; // w9
  struct UserItemListViewItem_o *v7; // x8
  ItemEntity_o *itemEntity; // x21
  CommonUI_o *v9; // x20
  ItemLinkInfoWindowComponent_CallbackFunc_o *v10; // x22
  struct UserItemData_o *v11; // x8
  System_String_o *name; // x21
  System_String_o *detail; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  UserGameEntity_o *userGameEntity; // x23
  UserExternalPaymentStoneEntity_o *userExternalPaymentStoneEntity; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x25
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x6
  struct UserItemListViewItem_o *v20; // x8
  UserItemData_o *itemData; // x21
  CommonUI_o *v22; // x20
  ItemLinkInfoWindowComponent_CallbackFunc_o *v23; // x22
  UserItemData_o *v24; // x21
  ItemDetailInfoComponent_o *v25; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v26; // x22
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4

  if ( (byte_4CC2443 & 1) == 0 )
  {
    sub_1C713B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_UserItemListViewManager_SelectItemDetail__);
    byte_4CC2443 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (Il2CppObject *)CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_21;
  itemType = selectItem->fields.itemType;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( itemType == 17 || itemType == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = this->fields.selectItem;
      if ( v7 )
      {
        itemEntity = v7->fields.itemEntity;
        v9 = (CommonUI_o *)Instance;
        v10 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C715FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_UserItemListViewManager_SelectItemDetail__,
          0);
        if ( v9 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v9, itemEntity, v10, 1, 0);
          return;
        }
      }
LABEL_21:
      sub_1C71608(Instance, v4);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = this->fields.selectItem;
    if ( !v20 )
      goto LABEL_21;
    itemData = v20->fields.itemData;
    v22 = (CommonUI_o *)Instance;
    v23 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C715FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      0);
    if ( !v22 )
      goto LABEL_21;
    CommonUI__OpenItemLinkInfoDetailWindow_31548364(v22, itemData, v23, 0);
  }
  else if ( itemType == 17 || itemType == 2 )
  {
    v11 = selectItem->fields.itemData;
    if ( !v11 )
      goto LABEL_21;
    name = v11->fields.name;
    detail = v11->fields.detail;
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    userGameEntity = this->fields.userGameEntity;
    userExternalPaymentStoneEntity = this->fields.userExternalPaymentStoneEntity;
    v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C715FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      v18);
    if ( !itemDetailInfoComp )
      goto LABEL_21;
    ItemDetailInfoComponent__ShowStoneDetail(
      itemDetailInfoComp,
      name,
      detail,
      userGameEntity,
      userExternalPaymentStoneEntity,
      v17,
      v19);
  }
  else
  {
    v24 = selectItem->fields.itemData;
    v25 = this->fields.itemDetailInfoComp;
    v26 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C715FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      v27);
    if ( !v25 )
      goto LABEL_21;
    ItemDetailInfoComponent__OpenUserItemInfo(v25, v24, v26, 5, v28);
  }
}


void UserItemListViewManager__remove_callbackFunc(
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

  if ( (byte_4CC2433 & 1) == 0 )
  {
    sub_1C713B0(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_4CC2433 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v7->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C719A4(v7);
  UserItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void UserItemListViewManager__remove_callbackFunc2(
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

  if ( (byte_4CC2435 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2435 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C719A4(v7);
  UserItemListViewManager__get_ObjectList(v10, v11);
}


void UserItemListViewManager_CallbackFunc___ctor(
        UserItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9F5A8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F560;
}


System_IAsyncResult_o *UserItemListViewManager_CallbackFunc__BeginInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CC2446 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    byte_4CC2446 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC2447 & 1) == 0 )
  {
    sub_1C713B0(&UserItemListViewManager___c_TypeInfo);
    byte_4CC2447 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserItemListViewManager___c_TypeInfo->static_fields->__9 = (struct UserItemListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)UserItemListViewManager___c_TypeInfo->static_fields,
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
    sub_1C71608(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}