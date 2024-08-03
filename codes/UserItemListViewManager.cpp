void __fastcall UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v21; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  UILabel_o *infoLb; // x21
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v25; // x21
  Il2CppObject *Master_object; // x21
  const MethodInfo *v27; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t stone; // w9
  __int64 v30; // d0
  int32_t manaNum; // w8
  UserItemEntity_array *List; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  __int64 v35; // x8
  UserItemEntity_array *v36; // x21
  unsigned __int64 v37; // x22
  System_Collections_Generic_List_object__o *v38; // x21
  System_Comparison_T__o *v39; // x22
  Il2CppObject *v40; // x23
  struct UserItemListViewManager___c_StaticFields *static_fields; // x0
  int size; // w25
  UILabel_o *nonItemNoticeLb; // x21
  int32_t i; // w21
  Il2CppObject *Item; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  UserItemListViewItem_o *v48; // x22
  const MethodInfo *v49; // x2
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8

  if ( (byte_49F7AAD & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_UserItemData__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemData__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemData___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemData__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemData__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_UserItemData__TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_UserItemListViewManager___c__CreateList_b__28_0__, v16);
    sub_1B640C8(&UserItemListViewManager___c_TypeInfo, v17);
    sub_1B640C8(&UserItemListViewItem_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_9211/*"NONITEM_NOTICE"*/, v19);
    sub_1B640C8(&StringLiteral_7087/*"HEADER_NOTICE_MSG"*/, v20);
    byte_49F7AAD = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserItemData__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v21;
  sub_1B6406C(&this->fields.usrItemList);
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7087/*"HEADER_NOTICE_MSG"*/, 0LL);
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
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v25 )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(v25, gameObject & 1, 0LL);
  this->fields.userGameEntity = UserGameMaster__getSelfUserGame(0LL);
  sub_1B6406C(&this->fields.userGameEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_55;
  this->fields.userExternalPaymentStoneEntity = UserExternalPaymentStoneMaster__GetEntity(
                                                  (UserExternalPaymentStoneMaster_o *)Master_object,
                                                  gameObject,
                                                  4,
                                                  0LL);
  gameObject = sub_1B6406C(&this->fields.userExternalPaymentStoneEntity);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_55;
  stone = userGameEntity->fields.stone;
  this->fields.stoneNum = stone;
  v30 = *(_QWORD *)&userGameEntity->fields.mana;
  *(_QWORD *)&this->fields.manaNum = v30;
  if ( stone < 1 )
  {
    manaNum = v30;
  }
  else
  {
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v27);
    manaNum = this->fields.manaNum;
  }
  if ( manaNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v27);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v27);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_55;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_55;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, 0LL);
  if ( List )
  {
    v35 = *(_QWORD *)&List->max_length;
    v36 = List;
    if ( (int)v35 >= 1 )
    {
      v37 = 0LL;
      do
      {
        if ( v37 >= (unsigned int)v35 )
          sub_1B6432C(List, v33);
        UserItemListViewManager__SetUsrItemData(this, v36->m_Items[v37], v34);
        LODWORD(v35) = v36->max_length;
        ++v37;
      }
      while ( (__int64)v37 < (int)v35 );
    }
  }
  v38 = (System_Collections_Generic_List_object__o *)*p_usrItemList;
  gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  if ( !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo);
    gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*(_QWORD *)(gameObject + 184) + 8LL);
  if ( !v39 )
  {
    if ( !*(_DWORD *)(gameObject + 224) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
    }
    v40 = **(Il2CppObject ***)(gameObject + 184);
    v39 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserItemData__TypeInfo, v33, v34);
    System_Comparison_object____ctor(v39, v40, Method_UserItemListViewManager___c__CreateList_b__28_0__, 0LL);
    static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_UserItemData__o *)v39;
    gameObject = sub_1B6406C(&static_fields->__9__28_0);
  }
  if ( !v38 )
    goto LABEL_55;
  System_Collections_Generic_List_object___Sort_55243320(
    v38,
    v39,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  if ( !*p_usrItemList )
    goto LABEL_55;
  size = (*p_usrItemList)->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( size < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NONITEM_NOTICE"*/, 0LL);
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
    sub_1B64324(gameObject);
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
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserItemData__get_Item__);
    v48 = (UserItemListViewItem_o *)sub_1B64314(UserItemListViewItem_TypeInfo, v46, v47);
    UserItemListViewItem___ctor(v48, (UserItemData_o *)Item, v49);
    gameObject = (__int64)this->fields.itemList;
    if ( !gameObject )
      goto LABEL_55;
    v50 = *(_QWORD *)(gameObject + 16);
    v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v50 )
      goto LABEL_55;
    v52 = *(int *)(gameObject + 24);
    if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)v48,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = v50 + 8 * v52;
      *(_DWORD *)(gameObject + 24) = v52 + 1;
      *(_QWORD *)(v53 + 32) = v48;
      sub_1B6406C(v53 + 32);
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

  if ( (byte_49F7AB0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&UserItemListViewItem_TypeInfo, v5);
    byte_49F7AB0 = 1;
  }
  result = (UserItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  v4 = this;
  if ( (byte_49F7AB6 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B640C8(&StringLiteral_11450/*"SELECT_ITEM"*/, obj);
    byte_49F7AB6 = 1;
  }
  if ( !obj
    || (v4->fields.selectItem = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        sub_1B6406C(&v4->fields.selectItem),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0LL) )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11450/*"SELECT_ITEM"*/, 0LL);
}


void __fastcall UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F7AB5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7AB5 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B6406C(&this->fields.callbackFunc2);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F7AB3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_UserItemListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F7AB3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      UserItemListViewObject__Init_30847692((UserItemListViewObject_o *)current, mode, v19, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_30846664(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F7AB4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_UserItemListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F7AB4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      UserItemListViewObject__Init_30847776((UserItemListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_49F7AB9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3566/*"CLOSE_DETAIL"*/, isDecide);
    byte_49F7AB9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3566/*"CLOSE_DETAIL"*/, 0LL);
}


void __fastcall UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B6406C(&this->fields.callbackFunc);
  UserItemListViewManager__SetMode_30846480(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_30846480(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_49F7AB2 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B640C8(
                                          &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                          *(_QWORD *)&mode);
    byte_49F7AB2 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1B64324(this);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_30846664(v4, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_30846612(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(&this->fields.callbackFunc2);
  UserItemListViewManager__SetMode_30846480(this, mode, v6);
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
  if ( (byte_49F7AB1 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1B640C8(&UserItemListViewObject_TypeInfo, obj);
    byte_49F7AB1 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserItemListViewObject__Init_30846356((UserItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall UserItemListViewManager__SetUsrItemData(
        UserItemListViewManager_o *this,
        UserItemEntity_o *data,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x20
  __int64 v5; // x1
  ItemEntity_o *ItemInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int type; // w8
  ItemEntity_o *v10; // x22
  __int64 v11; // x21
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v15; // x8

  v4 = this;
  if ( (byte_49F7AAF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemData__Add__, data);
    this = (UserItemListViewManager_o *)sub_1B640C8(&UserItemData_TypeInfo, v5);
    byte_49F7AAF = 1;
  }
  if ( !data )
    goto LABEL_15;
  ItemInfo = UserItemEntity__getItemInfo(data, 0LL);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v10 = ItemInfo;
      if ( type > 0x1D || ((1 << type) & 0x20002006) == 0 )
      {
        v11 = sub_1B64314(UserItemData_TypeInfo, v7, v8);
        System_Object___ctor((Il2CppObject *)v11, 0LL);
        if ( v11 )
        {
          *(_DWORD *)(v11 + 16) = v10->fields.type;
          *(_DWORD *)(v11 + 24) = v10->fields.id;
          *(_DWORD *)(v11 + 20) = v10->fields.priority;
          *(_DWORD *)(v11 + 28) = v10->fields.imageId;
          *(_QWORD *)(v11 + 32) = v10->fields.name;
          sub_1B6406C(v11 + 32);
          *(_QWORD *)(v11 + 40) = v10->fields.detail;
          sub_1B6406C(v11 + 40);
          *(_DWORD *)(v11 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          if ( this )
          {
            v12 = *(_QWORD *)&this->fields.m_CachedPtr;
            v13 = Method_System_Collections_Generic_List_UserItemData__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( v12 )
            {
              m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v12 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                v15 = v12 + 8 * m_CancellationTokenSource_low;
                LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v15 + 32) = v11;
                sub_1B6406C(v15 + 32);
              }
              return;
            }
          }
        }
LABEL_15:
        sub_1B64324(this);
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
  ItemEntity_o *EntityByType; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  ItemEntity_o *v12; // x22
  __int64 v13; // x21
  int32_t rarePriNum; // w8
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v18; // x8

  if ( (byte_49F7AAE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemType);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemData__Add__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&UserItemData_TypeInfo, v7);
    byte_49F7AAE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_20:
    sub_1B64324(Instance);
  }
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v12 = EntityByType;
    v13 = sub_1B64314(UserItemData_TypeInfo, v10, v11);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( !v13 )
      goto LABEL_20;
    *(_DWORD *)(v13 + 16) = v12->fields.type;
    *(_DWORD *)(v13 + 24) = v12->fields.id;
    *(_DWORD *)(v13 + 20) = v12->fields.priority;
    *(_DWORD *)(v13 + 28) = v12->fields.imageId;
    *(_QWORD *)(v13 + 32) = v12->fields.name;
    sub_1B6406C(v13 + 32);
    *(_QWORD *)(v13 + 40) = v12->fields.detail;
    sub_1B6406C(v13 + 40);
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
        *(_DWORD *)(v13 + 48) = rarePriNum;
        break;
    }
  }
  else
  {
    v13 = 0LL;
  }
  Instance = (DataManager_o *)this->fields.usrItemList;
  if ( !Instance )
    goto LABEL_20;
  v15 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v16 = Method_System_Collections_Generic_List_UserItemData__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v15 )
    goto LABEL_20;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v15 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = v15 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v18 + 32) = v13;
    sub_1B6406C(v18 + 32);
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

  if ( (byte_49F7AA7 & 1) == 0 )
  {
    sub_1B640C8(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F7AA7 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F7AA9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7AA9 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B645E4(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F7AB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_UserItemListViewManager_closeItemDetail__, v3);
    byte_49F7AB8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0LL) )
    {
      v5 = Method_UserItemListViewManager_closeItemDetail__;
      if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B640E0(Method_UserItemListViewManager_closeItemDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow(Instance, 0LL, 0LL);
        return;
      }
LABEL_15:
      sub_1B64324(Instance);
    }
  }
  v7 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_UserItemListViewManager_closeItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.itemDetailInfoComp;
  if ( !Instance )
    goto LABEL_15;
  ItemDetailInfoComponent__Close_30837824((ItemDetailInfoComponent_o *)Instance, 0LL, v9);
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F7AAC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F7AAC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserItemListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem((UserItemListViewObject_o *)Component_object, v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_1B64324(v20);
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v20);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v24 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v18;
        sub_1B6406C(v24 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v12;
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F7AAB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F7AAB = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserItemListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v17 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1B6406C(v21 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v12;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UserItemListViewItem_o *selectItem; // x8
  int32_t itemType; // w22
  __int64 v11; // x1
  __int64 v12; // x2
  struct UserItemListViewItem_o *v13; // x8
  CommonUI_o *v14; // x20
  ItemEntity_o *itemEntity; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v16; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  UserItemData_o *v18; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *userGameEntity; // x23
  UserExternalPaymentStoneEntity_o *userExternalPaymentStoneEntity; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x25
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x6
  ItemDetailInfoComponent_CallbackFunc_o *v26; // x22
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4
  UserItemData_o *itemData; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v30; // x22

  if ( (byte_49F7AB7 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_UserItemListViewManager_SelectItemDetail__, v5);
    byte_49F7AB7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (Il2CppObject *)CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_18;
  itemType = selectItem->fields.itemType;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = this->fields.selectItem;
    if ( !v13 )
      goto LABEL_18;
    v14 = (CommonUI_o *)Instance;
    if ( itemType == 2 )
    {
      itemEntity = v13->fields.itemEntity;
      v16 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B64314(
                                                            ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                            v11,
                                                            v12);
      ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        0LL);
      if ( v14 )
      {
        CommonUI__OpenItemLinkInfoDetailWindow(v14, itemEntity, v16, 1, 0LL);
        return;
      }
LABEL_18:
      sub_1B64324(Instance);
    }
    itemData = v13->fields.itemData;
    v30 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B64314(
                                                          ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                          v11,
                                                          v12);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      0LL);
    if ( !v14 )
      goto LABEL_18;
    CommonUI__OpenItemLinkInfoDetailWindow_30436844(v14, itemData, v30, 0LL);
  }
  else
  {
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v18 = selectItem->fields.itemData;
    if ( itemType == 2 )
    {
      if ( !v18 )
        goto LABEL_18;
      name = v18->fields.name;
      detail = v18->fields.detail;
      userGameEntity = this->fields.userGameEntity;
      userExternalPaymentStoneEntity = this->fields.userExternalPaymentStoneEntity;
      v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v7, v8);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v24);
      if ( !itemDetailInfoComp )
        goto LABEL_18;
      ItemDetailInfoComponent__ShowStoneDetail(
        itemDetailInfoComp,
        name,
        detail,
        userGameEntity,
        userExternalPaymentStoneEntity,
        v23,
        v25);
    }
    else
    {
      v26 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v7, v8);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v27);
      if ( !itemDetailInfoComp )
        goto LABEL_18;
      ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, v18, v26, 5, v28);
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

  if ( (byte_49F7AA8 & 1) == 0 )
  {
    sub_1B640C8(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F7AA8 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F7AAA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F7AAA = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1B645E4(v7);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A508C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A5044;
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
  if ( (byte_49F7ABA & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    byte_49F7ABA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7ABB & 1) == 0 )
  {
    sub_1B640C8(&UserItemListViewManager___c_TypeInfo, v1);
    byte_49F7ABB = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserItemListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserItemListViewManager___c_TypeInfo->static_fields->__9 = (struct UserItemListViewManager___c_o *)v3;
  sub_1B6406C(UserItemListViewManager___c_TypeInfo->static_fields);
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
    sub_1B64324(this);
  return a->fields.dispPriority - b->fields.dispPriority;
}