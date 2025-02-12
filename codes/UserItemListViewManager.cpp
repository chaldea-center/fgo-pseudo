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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  UILabel_o *infoLb; // x21
  __int64 gameObject; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x21
  Il2CppObject *Master_object; // x21
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
  __int64 v42; // x8
  UserItemEntity_array *v43; // x21
  unsigned __int64 v44; // x22
  System_Collections_Generic_List_object__o *v45; // x21
  System_Comparison_T__o *v46; // x22
  Il2CppObject *v47; // x23
  struct UserItemListViewManager___c_StaticFields *static_fields; // x0
  int size; // w25
  UILabel_o *nonItemNoticeLb; // x21
  int32_t i; // w21
  Il2CppObject *Item; // x23
  UserItemListViewItem_o *v53; // x22
  const MethodInfo *v54; // x2
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8

  if ( (byte_4BC2E83 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Comparison_UserItemData__TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___, v4);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemData__Sort__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemData___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemData__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemData__get_Item__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_UserItemData__TypeInfo, v11);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C1ABD4(&Method_UserItemListViewManager___c__CreateList_b__28_0__, v15);
    sub_1C1ABD4(&UserItemListViewManager___c_TypeInfo, v16);
    sub_1C1ABD4(&UserItemListViewItem_TypeInfo, v17);
    sub_1C1ABD4(&StringLiteral_6643/*"FREE_STONE_ITEM_NAME"*/, v18);
    sub_1C1ABD4(&StringLiteral_9436/*"NONITEM_NOTICE"*/, v19);
    sub_1C1ABD4(&StringLiteral_3495/*"CHARGE_STONE_ITEM_NAME"*/, v20);
    sub_1C1ABD4(&StringLiteral_7282/*"HEADER_NOTICE_MSG"*/, v21);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v22);
    byte_4BC2E83 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v23;
  sub_1C1AB78(&this->fields.usrItemList);
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7282/*"HEADER_NOTICE_MSG"*/, 0LL);
  if ( !infoLb )
    goto LABEL_53;
  UILabel__set_text(infoLb, (System_String_o *)gameObject, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  gameObject = (__int64)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_53;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v28 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v28, gameObject & 1, 0LL);
  this->fields.userGameEntity = UserGameMaster__getSelfUserGame(0LL);
  sub_1C1AB78(&this->fields.userGameEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v27);
    byte_4BC2585 = 1;
  }
  gameObject = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    gameObject = (__int64)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_53;
  this->fields.userExternalPaymentStoneEntity = UserExternalPaymentStoneMaster__GetEntity(
                                                  (UserExternalPaymentStoneMaster_o *)Master_object,
                                                  *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                                  4,
                                                  0LL);
  gameObject = sub_1C1AB78(&this->fields.userExternalPaymentStoneEntity);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_53;
  this->fields.stoneNum = userGameEntity->fields.stone;
  *(_QWORD *)&this->fields.manaNum = *(_QWORD *)&userGameEntity->fields.mana;
  chargeStone = userGameEntity->fields.chargeStone;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3495/*"CHARGE_STONE_ITEM_NAME"*/, 0LL);
  UserItemListViewManager__SetUsrItemDataByType(this, 17, chargeStone, v32, v33);
  v34 = this->fields.userGameEntity;
  if ( !v34 )
    goto LABEL_53;
  freeStone = v34->fields.freeStone;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6643/*"FREE_STONE_ITEM_NAME"*/, 0LL);
  UserItemListViewManager__SetUsrItemDataByType(this, 2, freeStone, v36, v37);
  UserItemListViewManager__SetUsrItemDataByType(this, 5, this->fields.manaNum, (System_String_o *)StringLiteral_1/*""*/, v38);
  UserItemListViewManager__SetUsrItemDataByType(
    this,
    22,
    this->fields.rarePriNum,
    (System_String_o *)StringLiteral_1/*""*/,
    v39);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_53;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_53;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, 0LL);
  if ( List )
  {
    v42 = *(_QWORD *)&List->max_length;
    v43 = List;
    if ( (int)v42 >= 1 )
    {
      v44 = 0LL;
      do
      {
        if ( v44 >= (unsigned int)v42 )
          sub_1C1AE38(List, v27);
        UserItemListViewManager__SetUsrItemData(this, v43->m_Items[v44], v41);
        LODWORD(v42) = v43->max_length;
        ++v44;
      }
      while ( (__int64)v44 < (int)v42 );
    }
  }
  v45 = (System_Collections_Generic_List_object__o *)*p_usrItemList;
  gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  if ( !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo);
    gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  }
  v46 = *(System_Comparison_T__o **)(*(_QWORD *)(gameObject + 184) + 8LL);
  if ( !v46 )
  {
    if ( !*(_DWORD *)(gameObject + 224) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
    }
    v47 = **(Il2CppObject ***)(gameObject + 184);
    v46 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_object____ctor(v46, v47, Method_UserItemListViewManager___c__CreateList_b__28_0__, 0LL);
    static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_UserItemData__o *)v46;
    gameObject = sub_1C1AB78(&static_fields->__9__28_0);
  }
  if ( !v45 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_56877908(
    v45,
    v46,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  if ( !*p_usrItemList )
    goto LABEL_53;
  size = (*p_usrItemList)->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( size < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9436/*"NONITEM_NOTICE"*/, 0LL);
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
LABEL_53:
    sub_1C1AE30(gameObject, v27);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_53;
  gameObject = (__int64)UnityEngine_Component__get_gameObject(
                          (UnityEngine_Component_o *)this->fields.nonItemNoticeLb,
                          0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  for ( i = 0; i != size; ++i )
  {
    gameObject = (__int64)*p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_53;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             i,
             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UserItemData__get_Item__);
    v53 = (UserItemListViewItem_o *)sub_1C1AE20(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v53, (UserItemData_o *)Item, v54);
    gameObject = (__int64)this->fields.itemList;
    if ( !gameObject )
      goto LABEL_53;
    v55 = *(_QWORD *)(gameObject + 16);
    v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v55 )
      goto LABEL_53;
    v57 = *(int *)(gameObject + 24);
    if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)v53,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = v55 + 8 * v57;
      *(_DWORD *)(gameObject + 24) = v57 + 1;
      *(_QWORD *)(v58 + 32) = v53;
      sub_1C1AB78(v58 + 32);
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

  if ( (byte_4BC2E87 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C1ABD4(&UserItemListViewItem_TypeInfo, v5);
    byte_4BC2E87 = 1;
  }
  result = (UserItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserItemListViewManager__IsDispItem(
        UserItemListViewManager_o *this,
        int32_t itemId,
        int32_t itemNum,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4BC2E86 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&itemId);
    sub_1C1ABD4(&DataManager_TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_8973/*"MYROOM_ITEM_NUM_MINUS_DISP"*/, v7);
    byte_4BC2E86 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( itemNum > 0 )
    return 1;
  if ( !itemNum )
    return 0;
  if ( !Master_object )
    sub_1C1AE30(0LL, v9);
  return ConstantStrMaster__ExistValueArray(
           (ConstantStrMaster_o *)Master_object,
           (System_String_o *)StringLiteral_8973/*"MYROOM_ITEM_NUM_MINUS_DISP"*/,
           itemId,
           0LL);
}


void __fastcall UserItemListViewManager__OnClickListView(
        UserItemListViewManager_o *this,
        UserItemListViewObject_o *obj,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19

  v4 = this;
  if ( (byte_4BC2E8D & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1C1ABD4(&StringLiteral_11713/*"SELECT_ITEM"*/, obj);
    byte_4BC2E8D = 1;
  }
  if ( !obj
    || (v4->fields.selectItem = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        sub_1C1AB78(&v4->fields.selectItem),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0LL) )
  {
    sub_1C1AE30(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11713/*"SELECT_ITEM"*/, 0LL);
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

  if ( (byte_4BC2E8C & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC2E8C = 1;
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
          sub_1C1AE30(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C1AB78(&this->fields.callbackFunc2);
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

  if ( (byte_4BC2E8A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v11);
    sub_1C1ABD4(&Method_UserItemListViewManager_OnMoveEnd__, v12);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v13);
    byte_4BC2E8A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v19, v20);
      UserItemListViewObject__Init_32022312((UserItemListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_32021284(
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

  if ( (byte_4BC2E8B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v9);
    sub_1C1ABD4(&Method_UserItemListViewManager_OnMoveEnd__, v10);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v11);
    byte_4BC2E8B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v17, v18);
      UserItemListViewObject__Init_32022396((UserItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BC2E90 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3631/*"CLOSE_DETAIL"*/, isDecide);
    byte_4BC2E90 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C1AE30(0LL, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3631/*"CLOSE_DETAIL"*/, 0LL);
}


void __fastcall UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C1AB78(&this->fields.callbackFunc);
  UserItemListViewManager__SetMode_32021100(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_32021100(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4BC2E89 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1C1ABD4(
                                          &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                          *(_QWORD *)&mode);
    byte_4BC2E89 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C1AE30(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_32021284(v4, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_32021232(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C1AB78(&this->fields.callbackFunc2);
  UserItemListViewManager__SetMode_32021100(this, mode, v6);
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
  if ( (byte_4BC2E88 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1C1ABD4(&UserItemListViewObject_TypeInfo, obj);
    byte_4BC2E88 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserItemListViewObject__Init_32020976((UserItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall UserItemListViewManager__SetUsrItemData(
        UserItemListViewManager_o *this,
        UserItemEntity_o *data,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x20
  __int64 v5; // x1
  UserItemListViewManager_o *ItemInfo; // x0
  const MethodInfo *v7; // x3
  UserItemListViewManager_o *v8; // x22
  unsigned int emptyMessageBase; // w8
  __int64 v10; // x21
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v14; // x8

  v4 = this;
  if ( (byte_4BC2E85 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemData__Add__, data);
    this = (UserItemListViewManager_o *)sub_1C1ABD4(&UserItemData_TypeInfo, v5);
    byte_4BC2E85 = 1;
  }
  if ( !data )
    goto LABEL_15;
  ItemInfo = (UserItemListViewManager_o *)UserItemEntity__getItemInfo(data, 0LL);
  if ( ItemInfo )
  {
    v8 = ItemInfo;
    if ( UserItemListViewManager__IsDispItem(ItemInfo, ItemInfo->fields.m_CachedPtr, data->fields.num, v7) )
    {
      emptyMessageBase = (unsigned int)v8->fields.emptyMessageBase;
      if ( emptyMessageBase > 0x26 || ((1LL << emptyMessageBase) & 0x4020002006LL) == 0 )
      {
        v10 = sub_1C1AE20(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0LL);
        if ( v10 )
        {
          *(_DWORD *)(v10 + 16) = v8->fields.emptyMessageBase;
          *(_DWORD *)(v10 + 24) = v8->fields.m_CachedPtr;
          *(_DWORD *)(v10 + 20) = HIDWORD(v8->fields.sortOrderSprite);
          *(_DWORD *)(v10 + 28) = v8->fields.indicator;
          *(_QWORD *)(v10 + 32) = v8->fields.m_CancellationTokenSource;
          sub_1C1AB78(v10 + 32);
          *(_QWORD *)(v10 + 40) = v8->fields.dropObjectList;
          sub_1C1AB78(v10 + 40);
          *(_DWORD *)(v10 + 48) = data->fields.num;
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
                  (Il2CppObject *)v10,
                  *(const MethodInfo_363C890 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
              }
              else
              {
                v14 = v11 + 8 * m_CancellationTokenSource_low;
                LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v14 + 32) = v10;
                sub_1C1AB78(v14 + 32);
              }
              return;
            }
          }
        }
LABEL_15:
        sub_1C1AE30(this, data);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetUsrItemDataByType(
        UserItemListViewManager_o *this,
        int32_t itemType,
        int32_t itemNum,
        System_String_o *itemName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserItemListViewManager_o *EntityByType; // x0
  const MethodInfo *v15; // x3
  UserItemListViewManager_o *v16; // x23
  __int64 v17; // x22
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8

  if ( (byte_4BC2E84 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemType);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemData__Add__, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C1ABD4(&UserItemData_TypeInfo, v11);
    byte_4BC2E84 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_16;
  EntityByType = (UserItemListViewManager_o *)ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v16 = EntityByType;
    if ( UserItemListViewManager__IsDispItem(EntityByType, EntityByType->fields.m_CachedPtr, itemNum, v15) )
    {
      v17 = sub_1C1AE20(UserItemData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 16) = v16->fields.emptyMessageBase;
        *(_DWORD *)(v17 + 24) = v16->fields.m_CachedPtr;
        *(_DWORD *)(v17 + 20) = HIDWORD(v16->fields.sortOrderSprite);
        *(_DWORD *)(v17 + 28) = v16->fields.indicator;
        if ( System_String__IsNullOrEmpty(itemName, 0LL) )
          itemName = (System_String_o *)v16->fields.m_CancellationTokenSource;
        *(_QWORD *)(v17 + 32) = itemName;
        sub_1C1AB78(v17 + 32);
        *(_QWORD *)(v17 + 40) = v16->fields.dropObjectList;
        sub_1C1AB78(v17 + 40);
        *(_DWORD *)(v17 + 48) = itemNum;
        Instance = (DataManager_o *)this->fields.usrItemList;
        if ( Instance )
        {
          v18 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v19 = Method_System_Collections_Generic_List_UserItemData__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( v18 )
          {
            m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                (Il2CppObject *)v17,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = v18 + 8 * m_CancellationTokenSource_low;
              LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v21 + 32) = v17;
              sub_1C1AB78(v21 + 32);
            }
            return;
          }
        }
      }
LABEL_16:
      sub_1C1AE30(Instance, v13);
    }
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

  if ( (byte_4BC2E7D & 1) == 0 )
  {
    sub_1C1ABD4(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC2E7D = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C1B0F0(v7);
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

  if ( (byte_4BC2E7F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC2E7F = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C1B0F0(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4BC2E8F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C1ABD4(&Method_UserItemListViewManager_closeItemDetail__, v3);
    byte_4BC2E8F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0LL) )
    {
      v6 = Method_UserItemListViewManager_closeItemDetail__;
      if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C1ABEC(Method_UserItemListViewManager_closeItemDetail__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow(Instance, 0LL, 0LL);
        return;
      }
LABEL_15:
      sub_1C1AE30(Instance, v5);
    }
  }
  v8 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C1ABEC(Method_UserItemListViewManager_closeItemDetail__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.itemDetailInfoComp;
  if ( !Instance )
    goto LABEL_15;
  ItemDetailInfoComponent__Close_32012056((ItemDetailInfoComponent_o *)Instance, 0LL, v10);
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC2E82 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC2E82 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C1AE30(0LL, v18);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem((UserItemListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1C1AE30(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_41959744((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1C1AE30(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C1AE30(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C1AE30(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C1AE30(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C1AB78(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC2E81 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BC2E81 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C1AE30(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C1AE30(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C1AE30(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C1AB78(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v11;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct UserItemListViewItem_o *selectItem; // x8
  int32_t itemType; // w9
  struct UserItemListViewItem_o *v10; // x8
  ItemEntity_o *itemEntity; // x21
  CommonUI_o *v12; // x20
  ItemLinkInfoWindowComponent_CallbackFunc_o *v13; // x22
  struct UserItemData_o *v14; // x8
  System_String_o *name; // x21
  System_String_o *detail; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  UserGameEntity_o *userGameEntity; // x23
  UserExternalPaymentStoneEntity_o *userExternalPaymentStoneEntity; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x25
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x6
  struct UserItemListViewItem_o *v23; // x8
  UserItemData_o *itemData; // x21
  CommonUI_o *v25; // x20
  ItemLinkInfoWindowComponent_CallbackFunc_o *v26; // x22
  UserItemData_o *v27; // x21
  ItemDetailInfoComponent_o *v28; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v29; // x22
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x4

  if ( (byte_4BC2E8E & 1) == 0 )
  {
    sub_1C1ABD4(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&Method_UserItemListViewManager_SelectItemDetail__, v5);
    byte_4BC2E8E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (Il2CppObject *)CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_21;
  itemType = selectItem->fields.itemType;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( itemType == 17 || itemType == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = this->fields.selectItem;
      if ( v10 )
      {
        itemEntity = v10->fields.itemEntity;
        v12 = (CommonUI_o *)Instance;
        v13 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C1AE20(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_UserItemListViewManager_SelectItemDetail__,
          0LL);
        if ( v12 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v12, itemEntity, v13, 1, 0LL);
          return;
        }
      }
LABEL_21:
      sub_1C1AE30(Instance, v7);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = this->fields.selectItem;
    if ( !v23 )
      goto LABEL_21;
    itemData = v23->fields.itemData;
    v25 = (CommonUI_o *)Instance;
    v26 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C1AE20(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      0LL);
    if ( !v25 )
      goto LABEL_21;
    CommonUI__OpenItemLinkInfoDetailWindow_31203444(v25, itemData, v26, 0LL);
  }
  else if ( itemType == 17 || itemType == 2 )
  {
    v14 = selectItem->fields.itemData;
    if ( !v14 )
      goto LABEL_21;
    name = v14->fields.name;
    detail = v14->fields.detail;
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    userGameEntity = this->fields.userGameEntity;
    userExternalPaymentStoneEntity = this->fields.userExternalPaymentStoneEntity;
    v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C1AE20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      v21);
    if ( !itemDetailInfoComp )
      goto LABEL_21;
    ItemDetailInfoComponent__ShowStoneDetail(
      itemDetailInfoComp,
      name,
      detail,
      userGameEntity,
      userExternalPaymentStoneEntity,
      v20,
      v22);
  }
  else
  {
    v27 = selectItem->fields.itemData;
    v28 = this->fields.itemDetailInfoComp;
    v29 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C1AE20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v29,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      v30);
    if ( !v28 )
      goto LABEL_21;
    ItemDetailInfoComponent__OpenUserItemInfo(v28, v27, v29, 5, v31);
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

  if ( (byte_4BC2E7E & 1) == 0 )
  {
    sub_1C1ABD4(&UserItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4BC2E7E = 1;
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
    v8 = sub_1C560C4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C1B0F0(v7);
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

  if ( (byte_4BC2E80 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BC2E80 = 1;
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
    v8 = sub_1C560C4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1C1B0F0(v7);
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
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A54FBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A54F74;
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
  if ( (byte_4BC2E91 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&result);
    byte_4BC2E91 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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

  if ( (byte_4BC2E92 & 1) == 0 )
  {
    sub_1C1ABD4(&UserItemListViewManager___c_TypeInfo, v1);
    byte_4BC2E92 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserItemListViewManager___c_TypeInfo->static_fields->__9 = (struct UserItemListViewManager___c_o *)v2;
  sub_1C1AB78(UserItemListViewManager___c_TypeInfo->static_fields);
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
    sub_1C1AE30(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}