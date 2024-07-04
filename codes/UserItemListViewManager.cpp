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
  System_Collections_Generic_List_object__o *v17; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  UILabel_o *infoLb; // x21
  void *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t stone; // w9
  __int64 v31; // d0
  int32_t manaNum; // w8
  UserItemEntity_array *List; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x3
  __int64 v36; // x8
  UserItemEntity_array *v37; // x21
  unsigned __int64 v38; // x22
  System_Collections_Generic_List_object__o *v39; // x21
  System_Comparison_T__o *v40; // x22
  Il2CppObject *v41; // x23
  struct UserItemListViewManager___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int size; // w25
  UILabel_o *nonItemNoticeLb; // x21
  int32_t i; // w21
  Il2CppObject *Item; // x23
  UserItemListViewItem_o *v49; // x22
  const MethodInfo *v50; // x2
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8

  if ( (byte_48DE1E0 & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_UserItemData__TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemData__Sort__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemData___ctor__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemData__get_Count__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemData__get_Item__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_UserItemData__TypeInfo, v9);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&Method_UserItemListViewManager___c__CreateList_b__27_0__, v12);
    sub_1B00CCC(&UserItemListViewManager___c_TypeInfo, v13);
    sub_1B00CCC(&UserItemListViewItem_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_9150/*"NONITEM_NOTICE"*/, v15);
    sub_1B00CCC(&StringLiteral_7040/*"HEADER_NOTICE_MSG"*/, v16);
    byte_48DE1E0 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usrItemList, (int32_t)v17, v19, v20);
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_7040/*"HEADER_NOTICE_MSG"*/, 0LL);
  if ( !infoLb )
    goto LABEL_50;
  UILabel__set_text(infoLb, (System_String_o *)gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  gameObject = this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_50;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v24 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v24, (unsigned __int8)gameObject & 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v26, v27);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_50;
  stone = userGameEntity->fields.stone;
  this->fields.stoneNum = stone;
  v31 = *(_QWORD *)&userGameEntity->fields.mana;
  *(_QWORD *)&this->fields.manaNum = v31;
  if ( stone < 1 )
  {
    manaNum = v31;
  }
  else
  {
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v28);
    manaNum = this->fields.manaNum;
  }
  if ( manaNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v28);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v28);
  gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_50;
  gameObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_50;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, 0LL);
  if ( List )
  {
    v36 = *(_QWORD *)&List->max_length;
    v37 = List;
    if ( (int)v36 >= 1 )
    {
      v38 = 0LL;
      do
      {
        if ( v38 >= (unsigned int)v36 )
          sub_1B00F30(List, v23, v34, v35);
        UserItemListViewManager__SetUsrItemData(this, v37->m_Items[v38], v34);
        LODWORD(v36) = v37->max_length;
        ++v38;
      }
      while ( (__int64)v38 < (int)v36 );
    }
  }
  v39 = (System_Collections_Generic_List_object__o *)*p_usrItemList;
  gameObject = UserItemListViewManager___c_TypeInfo;
  if ( !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo);
    gameObject = UserItemListViewManager___c_TypeInfo;
  }
  v40 = *(System_Comparison_T__o **)(*((_QWORD *)gameObject + 23) + 8LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)gameObject + 56) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = UserItemListViewManager___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)gameObject + 23);
    v40 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_object____ctor(v40, v41, Method_UserItemListViewManager___c__CreateList_b__27_0__, 0LL);
    static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Comparison_UserItemData__o *)v40;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)v40, v43, v44);
  }
  if ( !v39 )
    goto LABEL_50;
  System_Collections_Generic_List_object___Sort_54277268(
    v39,
    v40,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  if ( !*p_usrItemList )
    goto LABEL_50;
  size = (*p_usrItemList)->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( size < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9150/*"NONITEM_NOTICE"*/, 0LL);
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
LABEL_50:
    sub_1B00F28(gameObject, v23);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nonItemNoticeLb, 0LL);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  for ( i = 0; i != size; ++i )
  {
    gameObject = *p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_50;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             i,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UserItemData__get_Item__);
    v49 = (UserItemListViewItem_o *)sub_1B00F18(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v49, (UserItemData_o *)Item, v50);
    gameObject = this->fields.itemList;
    if ( !gameObject )
      goto LABEL_50;
    v53 = *((_QWORD *)gameObject + 2);
    v54 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*((_DWORD *)gameObject + 7);
    if ( !v53 )
      goto LABEL_50;
    v55 = *((int *)gameObject + 6);
    if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)v49,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = v53 + 8 * v55;
      *((_DWORD *)gameObject + 6) = v55 + 1;
      *(_QWORD *)(v56 + 32) = v49;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v56 + 32), (int32_t)v49, v51, v52);
    }
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
  UserItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_48DE1E3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B00CCC(&UserItemListViewItem_TypeInfo, v5);
    byte_48DE1E3 = 1;
  }
  result = (UserItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t v6; // w2
  int32_t v7; // w3

  v4 = this;
  if ( (byte_48DE1E9 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B00CCC(&StringLiteral_11315/*"SELECT_ITEM"*/, obj);
    byte_48DE1E9 = 1;
  }
  if ( !obj
    || (Item = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v4->fields.selectItem = Item,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.selectItem, (int32_t)Item, v6, v7),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0LL) )
  {
    sub_1B00F28(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11315/*"SELECT_ITEM"*/, 0LL);
}


void __fastcall UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_48DE1E8 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DE1E8 = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B00F28(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48DE1E6 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v11);
    sub_1B00CCC(&Method_UserItemListViewManager_OnMoveEnd__, v12);
    sub_1B00CCC(&StringLiteral_9825/*"OnMoveEnd"*/, v13);
    byte_48DE1E6 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B00F28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9825/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B00F28(v19, v20);
      UserItemListViewObject__Init_30250732((UserItemListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_30249704(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48DE1E7 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v9);
    sub_1B00CCC(&Method_UserItemListViewManager_OnMoveEnd__, v10);
    sub_1B00CCC(&StringLiteral_9825/*"OnMoveEnd"*/, v11);
    byte_48DE1E7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B00F28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9825/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B00F28(v17, v18);
      UserItemListViewObject__Init_30250816((UserItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_48DE1EC & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3548/*"CLOSE_DETAIL"*/, isDecide);
    byte_48DE1EC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B00F28(0LL, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3548/*"CLOSE_DETAIL"*/, 0LL);
}


void __fastcall UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserItemListViewManager__SetMode_30249520(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_30249520(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_48DE1E5 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B00CCC(
                                          &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                          *(_QWORD *)&mode);
    byte_48DE1E5 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B00F28(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_30249704(v4, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_30249652(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  UserItemListViewManager__SetMode_30249520(this, mode, v6);
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
  if ( (byte_48DE1E4 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B00CCC(&UserItemListViewObject_TypeInfo, obj);
    byte_48DE1E4 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_1B00F28(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserItemListViewObject__Init_30249396((UserItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  ItemEntity_o *v8; // x22
  __int64 v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8

  v4 = this;
  if ( (byte_48DE1E2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemData__Add__, data);
    this = (UserItemListViewManager_o *)sub_1B00CCC(&UserItemData_TypeInfo, v5);
    byte_48DE1E2 = 1;
  }
  if ( !data )
    goto LABEL_15;
  ItemInfo = UserItemEntity__getItemInfo(data, 0LL);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v8 = ItemInfo;
      if ( type > 0x1D || ((1 << type) & 0x20002006) == 0 )
      {
        v9 = sub_1B00F18(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0LL);
        if ( v9 )
        {
          *(_DWORD *)(v9 + 16) = v8->fields.type;
          *(_DWORD *)(v9 + 24) = v8->fields.id;
          *(_DWORD *)(v9 + 20) = v8->fields.priority;
          *(_DWORD *)(v9 + 28) = v8->fields.imageId;
          name = v8->fields.name;
          *(_QWORD *)(v9 + 32) = name;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)name, v10, v11);
          detail = v8->fields.detail;
          *(_QWORD *)(v9 + 40) = detail;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)detail, v14, v15);
          *(_DWORD *)(v9 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          if ( this )
          {
            v18 = *(_QWORD *)&this->fields.m_CachedPtr;
            v19 = Method_System_Collections_Generic_List_UserItemData__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( v18 )
            {
              m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v9,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = v18 + 8 * m_CancellationTokenSource_low;
                LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v21 + 32) = v9;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 32), v9, v16, v17);
              }
              return;
            }
          }
        }
LABEL_15:
        sub_1B00F28(this, data);
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
  int32_t v11; // w2
  int32_t v12; // w3
  ItemEntity_o *v13; // x22
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t rarePriNum; // w8
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8

  if ( (byte_48DE1E1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemType);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemData__Add__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B00CCC(&UserItemData_TypeInfo, v7);
    byte_48DE1E1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_20:
    sub_1B00F28(Instance, v9);
  }
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v13 = EntityByType;
    v14 = sub_1B00F18(UserItemData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_20;
    *(_DWORD *)(v14 + 16) = v13->fields.type;
    *(_DWORD *)(v14 + 24) = v13->fields.id;
    *(_DWORD *)(v14 + 20) = v13->fields.priority;
    *(_DWORD *)(v14 + 28) = v13->fields.imageId;
    name = v13->fields.name;
    *(_QWORD *)(v14 + 32) = name;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)name, v15, v16);
    detail = v13->fields.detail;
    *(_QWORD *)(v14 + 40) = detail;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 40), (int32_t)detail, v19, v20);
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
        *(_DWORD *)(v14 + 48) = rarePriNum;
        break;
    }
  }
  else
  {
    v14 = 0LL;
  }
  Instance = (DataManager_o *)this->fields.usrItemList;
  if ( !Instance )
    goto LABEL_20;
  v22 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v23 = Method_System_Collections_Generic_List_UserItemData__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v22 )
    goto LABEL_20;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v14,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v25 + 32) = v14;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 32), v14, v11, v12);
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

  if ( (byte_48DE1DA & 1) == 0 )
  {
    sub_1B00CCC(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_48DE1DA = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B011E8(v7);
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

  if ( (byte_48DE1DC & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, value);
    byte_48DE1DC = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B011E8(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x0

  if ( (byte_48DE1EB & 1) == 0 )
  {
    sub_1B00CCC(&Method_UserItemListViewManager_closeItemDetail__, method);
    byte_48DE1EB = 1;
  }
  v3 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_UserItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  if ( !itemDetailInfoComp )
    sub_1B00F28(0LL, v5);
  ItemDetailInfoComponent__Close_30241048(itemDetailInfoComp, 0LL, v6);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_48DE1DF & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    byte_48DE1DF = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B00F28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B00F28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B00F28(0LL, v18);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem((UserItemListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1B00F28(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_39433736((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1B00F28(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B00F28(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B00F28(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B00F28(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_48DE1DE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    byte_48DE1DE = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B00F28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B00F28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B00F28(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B00F28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v11;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x20
  __int64 v3; // x1
  void *monitor; // x8
  ItemDetailInfoComponent_o *klass; // x19
  UserItemData_o *v6; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *v9; // x23
  ItemDetailInfoComponent_CallbackFunc_o *v10; // x24
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x5
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4

  v2 = (Il2CppObject *)this;
  if ( (byte_48DE1EA & 1) == 0 )
  {
    sub_1B00CCC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    this = (UserItemListViewManager_o *)sub_1B00CCC(&Method_UserItemListViewManager_SelectItemDetail__, v3);
    byte_48DE1EA = 1;
  }
  monitor = v2[23].monitor;
  if ( !monitor )
    goto LABEL_10;
  klass = (ItemDetailInfoComponent_o *)v2[21].klass;
  v6 = (UserItemData_o *)*((_QWORD *)monitor + 14);
  if ( *((_DWORD *)monitor + 31) == 2 )
  {
    if ( v6 )
    {
      name = v6->fields.name;
      detail = v6->fields.detail;
      v9 = (UserGameEntity_o *)v2[26].klass;
      v10 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B00F18(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(v10, v2, Method_UserItemListViewManager_SelectItemDetail__, v11);
      if ( klass )
      {
        ItemDetailInfoComponent__ShowStoneDetail(klass, name, detail, v9, v10, v12);
        return;
      }
    }
LABEL_10:
    sub_1B00F28(this, method);
  }
  v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B00F18(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(v13, v2, Method_UserItemListViewManager_SelectItemDetail__, v14);
  if ( !klass )
    goto LABEL_10;
  ItemDetailInfoComponent__OpenUserItemInfo(klass, v6, v13, 5, v15);
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

  if ( (byte_48DE1DB & 1) == 0 )
  {
    sub_1B00CCC(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_48DE1DB = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B011E8(v7);
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

  if ( (byte_48DE1DD & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, value);
    byte_48DE1DD = 1;
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
    v8 = sub_1B3C1BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B011E8(v7);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1944390;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1944348;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_48DE1ED & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&result);
    byte_48DE1ED = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DE1EE & 1) == 0 )
  {
    sub_1B00CCC(&UserItemListViewManager___c_TypeInfo, v1);
    byte_48DE1EE = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserItemListViewManager___c_TypeInfo->static_fields->__9 = (struct UserItemListViewManager___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)UserItemListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}