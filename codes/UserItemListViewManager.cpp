void __fastcall UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  UILabel_o *infoLb; // x21
  __int64 gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *Master_object; // x21
  struct UserExternalPaymentStoneEntity_o *Entity; // x0
  const MethodInfo *v12; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t stone; // w9
  __int64 v15; // d0
  int32_t manaNum; // w8
  UserItemEntity_array *List; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  UserItemEntity_array *v20; // x21
  unsigned __int64 v21; // x22
  System_Collections_Generic_List_object__o *v22; // x21
  System_Comparison_T__o *v23; // x22
  Il2CppObject *v24; // x23
  struct UserItemListViewManager___c_StaticFields *static_fields; // x0
  int size; // w25
  UILabel_o *nonItemNoticeLb; // x21
  int32_t i; // w21
  Il2CppObject *Item; // x23
  UserItemListViewItem_o *v30; // x22
  const MethodInfo *v31; // x2
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8

  if ( (byte_4A5676D & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_UserItemData__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserItemData__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserItemListViewManager___c__CreateList_b__28_0__);
    sub_1B885B0(&UserItemListViewManager___c_TypeInfo);
    sub_1B885B0(&UserItemListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_9253/*"NONITEM_NOTICE"*/);
    sub_1B885B0(&StringLiteral_7115/*"HEADER_NOTICE_MSG"*/);
    byte_4A5676D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v3;
  sub_1B88554(&this->fields.usrItemList, v3);
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7115/*"HEADER_NOTICE_MSG"*/, 0LL);
  if ( !infoLb )
    goto LABEL_55;
  UILabel__set_text(infoLb, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  gameObject = (__int64)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_55;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v8 )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(v8, gameObject & 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B88554(&this->fields.userGameEntity, SelfUserGame);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_55;
  Entity = UserExternalPaymentStoneMaster__GetEntity(
             (UserExternalPaymentStoneMaster_o *)Master_object,
             gameObject,
             4,
             0LL);
  this->fields.userExternalPaymentStoneEntity = Entity;
  gameObject = sub_1B88554(&this->fields.userExternalPaymentStoneEntity, Entity);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_55;
  stone = userGameEntity->fields.stone;
  this->fields.stoneNum = stone;
  v15 = *(_QWORD *)&userGameEntity->fields.mana;
  *(_QWORD *)&this->fields.manaNum = v15;
  if ( stone < 1 )
  {
    manaNum = v15;
  }
  else
  {
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v12);
    manaNum = this->fields.manaNum;
  }
  if ( manaNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v12);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v12);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_55;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_55;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, 0LL);
  if ( List )
  {
    v19 = *(_QWORD *)&List->max_length;
    v20 = List;
    if ( (int)v19 >= 1 )
    {
      v21 = 0LL;
      do
      {
        if ( v21 >= (unsigned int)v19 )
          sub_1B88814(List, v7);
        UserItemListViewManager__SetUsrItemData(this, v20->m_Items[v21], v18);
        LODWORD(v19) = v20->max_length;
        ++v21;
      }
      while ( (__int64)v21 < (int)v19 );
    }
  }
  v22 = (System_Collections_Generic_List_object__o *)*p_usrItemList;
  gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  if ( !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo);
    gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*(_QWORD *)(gameObject + 184) + 8LL);
  if ( !v23 )
  {
    if ( !*(_DWORD *)(gameObject + 224) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
    }
    v24 = **(Il2CppObject ***)(gameObject + 184);
    v23 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_UserItemListViewManager___c__CreateList_b__28_0__, 0LL);
    static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_UserItemData__o *)v23;
    gameObject = sub_1B88554(&static_fields->__9__28_0, v23);
  }
  if ( !v22 )
    goto LABEL_55;
  System_Collections_Generic_List_object___Sort_55571192(
    v22,
    v23,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  if ( !*p_usrItemList )
    goto LABEL_55;
  size = (*p_usrItemList)->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( size < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NONITEM_NOTICE"*/, 0LL);
    if ( nonItemNoticeLb )
    {
      UILabel__set_text(nonItemNoticeLb, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.nonItemNoticeLb;
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          return;
        }
      }
    }
LABEL_55:
    sub_1B8880C(gameObject, v7);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_55;
  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                          (UnityEngine_Component_o *)this->fields.nonItemNoticeLb,
                          0LL);
  if ( !gameObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  for ( i = 0; i != size; ++i )
  {
    gameObject = (__int64)*p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_55;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             i,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserItemData__get_Item__);
    v30 = (UserItemListViewItem_o *)sub_1B887FC(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v30, (UserItemData_o *)Item, v31);
    gameObject = (__int64)this->fields.itemList;
    if ( !gameObject )
      goto LABEL_55;
    v32 = *(_QWORD *)(gameObject + 16);
    v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v32 )
      goto LABEL_55;
    v34 = *(int *)(gameObject + 24);
    if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)v30,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v32 + 8 * v34;
      *(_DWORD *)(gameObject + 24) = v34 + 1;
      *(_QWORD *)(v35 + 32) = v30;
      sub_1B88554(v35 + 32, v30);
    }
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
  UserItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56770 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&UserItemListViewItem_TypeInfo);
    byte_4A56770 = 1;
  }
  result = (UserItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(UserItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (UserItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserItemListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall UserItemListViewManager__OnClickListView(
        UserItemListViewManager_o *this,
        UserItemListViewObject_o *obj,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  UserItemListViewItem_o *Item; // x0

  v4 = this;
  if ( (byte_4A56776 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B885B0(&StringLiteral_11505/*"SELECT_ITEM"*/);
    byte_4A56776 = 1;
  }
  if ( !obj
    || (Item = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v4->fields.selectItem = Item,
        sub_1B88554(&v4->fields.selectItem, Item),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0LL) )
  {
    sub_1B8880C(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11505/*"SELECT_ITEM"*/, 0LL);
}


void __fastcall UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A56775 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56775 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554(&this->fields.callbackFunc2, 0LL);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A56773 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_1B885B0(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56773 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      UserItemListViewObject__Init_31104848((UserItemListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_31103820(
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

  if ( (byte_4A56774 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__);
    sub_1B885B0(&Method_UserItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56774 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      UserItemListViewObject__Init_31104932((UserItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A56779 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3588/*"CLOSE_DETAIL"*/);
    byte_4A56779 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B8880C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3588/*"CLOSE_DETAIL"*/, 0LL);
}


void __fastcall UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  UserItemListViewManager__SetMode_31103636(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_31103636(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4A56772 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A56772 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B8880C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_31103820(v4, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_31103768(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(&this->fields.callbackFunc2, callback);
  UserItemListViewManager__SetMode_31103636(this, mode, v6);
}


void __fastcall UserItemListViewManager__SetObjectItem(
        UserItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A56771 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B885B0(&UserItemListViewObject_TypeInfo);
    byte_4A56771 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserItemListViewObject__Init_31103512((UserItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall UserItemListViewManager__SetUsrItemData(
        UserItemListViewManager_o *this,
        UserItemEntity_o *data,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x20
  ItemEntity_o *ItemInfo; // x0
  unsigned int type; // w8
  ItemEntity_o *v7; // x22
  __int64 v8; // x21
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v14; // x8

  v4 = this;
  if ( (byte_4A5676F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemData__Add__);
    this = (UserItemListViewManager_o *)sub_1B885B0(&UserItemData_TypeInfo);
    byte_4A5676F = 1;
  }
  if ( !data )
    goto LABEL_15;
  ItemInfo = UserItemEntity__getItemInfo(data, 0LL);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v7 = ItemInfo;
      if ( type > 0x1D || ((1 << type) & 0x20002006) == 0 )
      {
        v8 = sub_1B887FC(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v8, 0LL);
        if ( v8 )
        {
          *(_DWORD *)(v8 + 16) = v7->fields.type;
          *(_DWORD *)(v8 + 24) = v7->fields.id;
          *(_DWORD *)(v8 + 20) = v7->fields.priority;
          *(_DWORD *)(v8 + 28) = v7->fields.imageId;
          name = v7->fields.name;
          *(_QWORD *)(v8 + 32) = name;
          sub_1B88554(v8 + 32, name);
          detail = v7->fields.detail;
          *(_QWORD *)(v8 + 40) = detail;
          sub_1B88554(v8 + 40, detail);
          *(_DWORD *)(v8 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          if ( this )
          {
            v11 = *(_QWORD *)&this->fields.m_CachedPtr;
            v12 = Method_System_Collections_Generic_List_UserItemData__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( v11 )
            {
              m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v11 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v8,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
              }
              else
              {
                v14 = v11 + 8 * m_CancellationTokenSource_low;
                LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v14 + 32) = v8;
                sub_1B88554(v14 + 32, v8);
              }
              return;
            }
          }
        }
LABEL_15:
        sub_1B8880C(this, data);
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
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t rarePriNum; // w8
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v16; // x8

  if ( (byte_4A5676E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemData__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserItemData_TypeInfo);
    byte_4A5676E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(Instance, v6);
  }
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v8 = EntityByType;
    v9 = sub_1B887FC(UserItemData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( !v9 )
      goto LABEL_20;
    *(_DWORD *)(v9 + 16) = v8->fields.type;
    *(_DWORD *)(v9 + 24) = v8->fields.id;
    *(_DWORD *)(v9 + 20) = v8->fields.priority;
    *(_DWORD *)(v9 + 28) = v8->fields.imageId;
    name = v8->fields.name;
    *(_QWORD *)(v9 + 32) = name;
    sub_1B88554(v9 + 32, name);
    detail = v8->fields.detail;
    *(_QWORD *)(v9 + 40) = detail;
    sub_1B88554(v9 + 40, detail);
    switch ( itemType )
    {
      case 22:
        rarePriNum = this->fields.rarePriNum;
        goto LABEL_14;
      case 5:
        rarePriNum = this->fields.manaNum;
        goto LABEL_14;
      case 2:
        rarePriNum = this->fields.stoneNum;
LABEL_14:
        *(_DWORD *)(v9 + 48) = rarePriNum;
        break;
    }
  }
  else
  {
    v9 = 0LL;
  }
  Instance = (DataManager_o *)this->fields.usrItemList;
  if ( !Instance )
    goto LABEL_20;
  v13 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v14 = Method_System_Collections_Generic_List_UserItemData__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v13 )
    goto LABEL_20;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = v13 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v16 + 32) = v9;
    sub_1B88554(v16 + 32, v9);
  }
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

  if ( (byte_4A56767 & 1) == 0 )
  {
    sub_1B885B0(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A56767 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A56769 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56769 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B88ACC(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4A56778 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserItemListViewManager_closeItemDetail__);
    byte_4A56778 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0LL) )
    {
      v5 = Method_UserItemListViewManager_closeItemDetail__;
      if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B885C8(Method_UserItemListViewManager_closeItemDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow(Instance, 0LL, 0LL);
        return;
      }
LABEL_15:
      sub_1B8880C(Instance, v4);
    }
  }
  v7 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_UserItemListViewManager_closeItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.itemDetailInfoComp;
  if ( !Instance )
    goto LABEL_15;
  ItemDetailInfoComponent__Close_31094980((ItemDetailInfoComponent_o *)Instance, 0LL, v9);
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ClippingObjectList(
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5676C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5676C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem((UserItemListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1B8880C(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1B88554(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ObjectList(
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
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5676B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5676B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1B88554(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v3;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct UserItemListViewItem_o *selectItem; // x8
  int32_t itemType; // w22
  struct UserItemListViewItem_o *v7; // x8
  CommonUI_o *v8; // x20
  ItemEntity_o *itemEntity; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v10; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  UserItemData_o *v12; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *userGameEntity; // x23
  UserExternalPaymentStoneEntity_o *userExternalPaymentStoneEntity; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x25
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x6
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x4
  UserItemData_o *itemData; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v24; // x22

  if ( (byte_4A56777 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_UserItemListViewManager_SelectItemDetail__);
    byte_4A56777 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (Il2CppObject *)CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_18;
  itemType = selectItem->fields.itemType;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.selectItem;
    if ( !v7 )
      goto LABEL_18;
    v8 = (CommonUI_o *)Instance;
    if ( itemType == 2 )
    {
      itemEntity = v7->fields.itemEntity;
      v10 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
      ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        0LL);
      if ( v8 )
      {
        CommonUI__OpenItemLinkInfoDetailWindow(v8, itemEntity, v10, 1, 0LL);
        return;
      }
LABEL_18:
      sub_1B8880C(Instance, v4);
    }
    itemData = v7->fields.itemData;
    v24 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      0LL);
    if ( !v8 )
      goto LABEL_18;
    CommonUI__OpenItemLinkInfoDetailWindow_30585972(v8, itemData, v24, 0LL);
  }
  else
  {
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v12 = selectItem->fields.itemData;
    if ( itemType == 2 )
    {
      if ( !v12 )
        goto LABEL_18;
      name = v12->fields.name;
      detail = v12->fields.detail;
      userGameEntity = this->fields.userGameEntity;
      userExternalPaymentStoneEntity = this->fields.userExternalPaymentStoneEntity;
      v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v18);
      if ( !itemDetailInfoComp )
        goto LABEL_18;
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
      v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v21);
      if ( !itemDetailInfoComp )
        goto LABEL_18;
      ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, v12, v20, 5, v22);
    }
  }
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

  if ( (byte_4A56768 & 1) == 0 )
  {
    sub_1B885B0(&UserItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A56768 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A5676A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5676A = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B88ACC(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C7880;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C7838;
}


System_IAsyncResult_o *__fastcall UserItemListViewManager_CallbackFunc__BeginInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A5677A & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5677A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall UserItemListViewManager_CallbackFunc__Invoke(
        UserItemListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall UserItemListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A5677B & 1) == 0 )
  {
    sub_1B885B0(&UserItemListViewManager___c_TypeInfo);
    byte_4A5677B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserItemListViewManager___c_TypeInfo->static_fields->__9 = (struct UserItemListViewManager___c_o *)v1;
  sub_1B88554(UserItemListViewManager___c_TypeInfo->static_fields, v1);
}


void __fastcall UserItemListViewManager___c___ctor(UserItemListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserItemListViewManager___c___CreateList_b__28_0(
        UserItemListViewManager___c_o *this,
        UserItemData_o *a,
        UserItemData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}