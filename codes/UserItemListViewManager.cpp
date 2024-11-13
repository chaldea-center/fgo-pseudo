void __fastcall UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v39; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  __int64 v41; // x1
  UILabel_o *infoLb; // x21
  __int64 gameObject; // x0
  __int64 v44; // x1
  UnityEngine_GameObject_o *v45; // x21
  struct UserGameEntity_o *SelfUserGame; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  Il2CppObject *Master_object; // x21
  struct UserExternalPaymentStoneEntity_o *Entity; // x0
  const MethodInfo *v51; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t stone; // w9
  __int64 v54; // d0
  int32_t manaNum; // w8
  UserItemEntity_array *List; // x0
  const MethodInfo *v57; // x2
  __int64 v58; // x3
  __int64 v59; // x8
  UserItemEntity_array *v60; // x21
  unsigned __int64 v61; // x22
  System_Collections_Generic_List_object__o *v62; // x21
  System_Comparison_T__o *v63; // x22
  Il2CppObject *v64; // x23
  struct UserItemListViewManager___c_StaticFields *static_fields; // x0
  int size; // w25
  UILabel_o *nonItemNoticeLb; // x21
  int32_t i; // w21
  Il2CppObject *Item; // x23
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  UserItemListViewItem_o *v73; // x22
  const MethodInfo *v74; // x2
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8

  if ( (byte_4B1168F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserItemData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemData__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemData___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemData__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemData__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_UserItemData__TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_UserItemListViewManager___c__CreateList_b__28_0__, v29, v30);
    sub_1BCA7E0(&UserItemListViewManager___c_TypeInfo, v31, v32);
    sub_1BCA7E0(&UserItemListViewItem_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_9384/*"NONITEM_NOTICE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_7240/*"HEADER_NOTICE_MSG"*/, v37, v38);
    byte_4B1168F = 1;
  }
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserItemData__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v39;
  sub_1BCA784(&this->fields.usrItemList, v39);
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_7240/*"HEADER_NOTICE_MSG"*/, 0LL);
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
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v45 )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(v45, gameObject & 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCA784(&this->fields.userGameEntity, SelfUserGame);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserExternalPaymentStoneMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_55;
  Entity = UserExternalPaymentStoneMaster__GetEntity(
             (UserExternalPaymentStoneMaster_o *)Master_object,
             gameObject,
             4,
             0LL);
  this->fields.userExternalPaymentStoneEntity = Entity;
  gameObject = sub_1BCA784(&this->fields.userExternalPaymentStoneEntity, Entity);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_55;
  stone = userGameEntity->fields.stone;
  this->fields.stoneNum = stone;
  v54 = *(_QWORD *)&userGameEntity->fields.mana;
  *(_QWORD *)&this->fields.manaNum = v54;
  if ( stone < 1 )
  {
    manaNum = v54;
  }
  else
  {
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v51);
    manaNum = this->fields.manaNum;
  }
  if ( manaNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v51);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v51);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_55;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_55;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, 0LL);
  if ( List )
  {
    v59 = *(_QWORD *)&List->max_length;
    v60 = List;
    if ( (int)v59 >= 1 )
    {
      v61 = 0LL;
      do
      {
        if ( v61 >= (unsigned int)v59 )
          sub_1BCAA44(List, v44);
        UserItemListViewManager__SetUsrItemData(this, v60->m_Items[v61], v57);
        LODWORD(v59) = v60->max_length;
        ++v61;
      }
      while ( (__int64)v61 < (int)v59 );
    }
  }
  v62 = (System_Collections_Generic_List_object__o *)*p_usrItemList;
  gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  if ( !UserItemListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserItemListViewManager___c_TypeInfo, v44);
    gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
  }
  v63 = *(System_Comparison_T__o **)(*(_QWORD *)(gameObject + 184) + 8LL);
  if ( !v63 )
  {
    if ( !*(_DWORD *)(gameObject + 224) )
    {
      j_il2cpp_runtime_class_init_0(gameObject, v44);
      gameObject = (__int64)UserItemListViewManager___c_TypeInfo;
    }
    v64 = **(Il2CppObject ***)(gameObject + 184);
    v63 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserItemData__TypeInfo, v44, v57, v58);
    System_Comparison_object____ctor(v63, v64, Method_UserItemListViewManager___c__CreateList_b__28_0__, 0LL);
    static_fields = UserItemListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Comparison_UserItemData__o *)v63;
    gameObject = sub_1BCA784(&static_fields->__9__28_0, v63);
  }
  if ( !v62 )
    goto LABEL_55;
  System_Collections_Generic_List_object___Sort_56244000(
    v62,
    v63,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserItemData__Sort__);
  if ( !*p_usrItemList )
    goto LABEL_55;
  size = (*p_usrItemList)->fields._size;
  nonItemNoticeLb = this->fields.nonItemNoticeLb;
  if ( size < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9384/*"NONITEM_NOTICE"*/, 0LL);
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
    sub_1BCAA3C(gameObject, v44);
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
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserItemData__get_Item__);
    v73 = (UserItemListViewItem_o *)sub_1BCAA2C(UserItemListViewItem_TypeInfo, v70, v71, v72);
    UserItemListViewItem___ctor(v73, (UserItemData_o *)Item, v74);
    gameObject = (__int64)this->fields.itemList;
    if ( !gameObject )
      goto LABEL_55;
    v75 = *(_QWORD *)(gameObject + 16);
    v76 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(gameObject + 28);
    if ( !v75 )
      goto LABEL_55;
    v77 = *(int *)(gameObject + 24);
    if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        (Il2CppObject *)v73,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = v75 + 8 * v77;
      *(_DWORD *)(gameObject + 24) = v77 + 1;
      *(_QWORD *)(v78 + 32) = v73;
      sub_1BCA784(v78 + 32, v73);
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
  __int64 v6; // x2
  UserItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B11692 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&UserItemListViewItem_TypeInfo, v5, v6);
    byte_4B11692 = 1;
  }
  result = (UserItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (UserItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)result,
                                         index,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4B11698 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1BCA7E0(&StringLiteral_11643/*"SELECT_ITEM"*/, obj, method);
    byte_4B11698 = 1;
  }
  if ( !obj
    || (Item = UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v4->fields.selectItem = Item,
        sub_1BCA784(&v4->fields.selectItem, Item),
        (this = (UserItemListViewManager_o *)v4->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11643/*"SELECT_ITEM"*/, 0LL);
}


void __fastcall UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B11697 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11697 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784(&this->fields.callbackFunc2, 0LL);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11695 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_UserItemListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B11695 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      UserItemListViewObject__Init_31678772((UserItemListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_31677744(
        UserItemListViewManager_o *this,
        int32_t mode,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B11696 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_UserItemListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B11696 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)UserItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      UserItemListViewObject__Init_31678856((UserItemListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B1169B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3616/*"CLOSE_DETAIL"*/, isDecide, method);
    byte_4B1169B = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3616/*"CLOSE_DETAIL"*/, 0LL);
}


void __fastcall UserItemListViewManager__SetMode(
        UserItemListViewManager_o *this,
        int32_t mode,
        UserItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  UserItemListViewManager__SetMode_31677560(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_31677560(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4B11694 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                          *(_QWORD *)&mode,
                                          method);
    byte_4B11694 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BCAA3C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v4, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_31677744(v4, 3, v6);
}


void __fastcall UserItemListViewManager__SetMode_31677692(
        UserItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  UserItemListViewManager__SetMode_31677560(this, mode, v6);
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
  if ( (byte_4B11693 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_1BCA7E0(&UserItemListViewObject_TypeInfo, obj, item);
    byte_4B11693 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(UserItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  UserItemListViewObject__Init_31677436((UserItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall UserItemListViewManager__SetUsrItemData(
        UserItemListViewManager_o *this,
        UserItemEntity_o *data,
        const MethodInfo *method)
{
  UserItemListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ItemEntity_o *ItemInfo; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  unsigned int type; // w8
  ItemEntity_o *v12; // x22
  __int64 v13; // x21
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v19; // x8

  v4 = this;
  if ( (byte_4B11691 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemData__Add__, data, method);
    this = (UserItemListViewManager_o *)sub_1BCA7E0(&UserItemData_TypeInfo, v5, v6);
    byte_4B11691 = 1;
  }
  if ( !data )
    goto LABEL_15;
  ItemInfo = UserItemEntity__getItemInfo(data, 0LL);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v12 = ItemInfo;
      if ( type > 0x26 || ((1LL << type) & 0x4020002006LL) == 0 )
      {
        v13 = sub_1BCAA2C(UserItemData_TypeInfo, v8, v9, v10);
        System_Object___ctor((Il2CppObject *)v13, 0LL);
        if ( v13 )
        {
          *(_DWORD *)(v13 + 16) = v12->fields.type;
          *(_DWORD *)(v13 + 24) = v12->fields.id;
          *(_DWORD *)(v13 + 20) = v12->fields.priority;
          *(_DWORD *)(v13 + 28) = v12->fields.imageId;
          name = v12->fields.name;
          *(_QWORD *)(v13 + 32) = name;
          sub_1BCA784(v13 + 32, name);
          detail = v12->fields.detail;
          *(_QWORD *)(v13 + 40) = detail;
          sub_1BCA784(v13 + 40, detail);
          *(_DWORD *)(v13 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v4->fields.usrItemList;
          if ( this )
          {
            v16 = *(_QWORD *)&this->fields.m_CachedPtr;
            v17 = Method_System_Collections_Generic_List_UserItemData__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( v16 )
            {
              m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v16 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v13,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = v16 + 8 * m_CancellationTokenSource_low;
                LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v19 + 32) = v13;
                sub_1BCA784(v19 + 32, v13);
              }
              return;
            }
          }
        }
LABEL_15:
        sub_1BCAA3C(this, data);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  ItemEntity_o *EntityByType; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  ItemEntity_o *v16; // x22
  __int64 v17; // x21
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t rarePriNum; // w8
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v24; // x8

  if ( (byte_4B11690 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemType, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemData__Add__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&UserItemData_TypeInfo, v9, v10);
    byte_4B11690 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(Instance, v12);
  }
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v16 = EntityByType;
    v17 = sub_1BCAA2C(UserItemData_TypeInfo, v12, v14, v15);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_20;
    *(_DWORD *)(v17 + 16) = v16->fields.type;
    *(_DWORD *)(v17 + 24) = v16->fields.id;
    *(_DWORD *)(v17 + 20) = v16->fields.priority;
    *(_DWORD *)(v17 + 28) = v16->fields.imageId;
    name = v16->fields.name;
    *(_QWORD *)(v17 + 32) = name;
    sub_1BCA784(v17 + 32, name);
    detail = v16->fields.detail;
    *(_QWORD *)(v17 + 40) = detail;
    sub_1BCA784(v17 + 40, detail);
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
        *(_DWORD *)(v17 + 48) = rarePriNum;
        break;
    }
  }
  else
  {
    v17 = 0LL;
  }
  Instance = (DataManager_o *)this->fields.usrItemList;
  if ( !Instance )
    goto LABEL_20;
  v21 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_UserItemData__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_20;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v17,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = v21 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v24 + 32) = v17;
    sub_1BCA784(v24 + 32, v17);
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

  if ( (byte_4B11689 & 1) == 0 )
  {
    sub_1BCA7E0(&UserItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11689 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B1168B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1168B = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1BCACFC(v7);
  UserItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B1169A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_UserItemListViewManager_closeItemDetail__, v4, v5);
    byte_4B1169A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow(Instance, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow(Instance, 0LL) )
    {
      v8 = Method_UserItemListViewManager_closeItemDetail__;
      if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCA7F8(Method_UserItemListViewManager_closeItemDetail__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow(Instance, 0LL, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(Instance, v7);
    }
  }
  v10 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_UserItemListViewManager_closeItemDetail__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.itemDetailInfoComp;
  if ( !Instance )
    goto LABEL_15;
  ItemDetailInfoComponent__Close_31668900((ItemDetailInfoComponent_o *)Instance, 0LL, v12);
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1168E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1168E = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem((UserItemListViewObject_o *)Component_object, v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v21;
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1168D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1168D = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_UserItemListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v21;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  struct UserItemListViewItem_o *selectItem; // x8
  int32_t itemType; // w22
  __int64 v16; // x2
  __int64 v17; // x3
  struct UserItemListViewItem_o *v18; // x8
  CommonUI_o *v19; // x20
  ItemEntity_o *itemEntity; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v21; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  UserItemData_o *v23; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *userGameEntity; // x23
  UserExternalPaymentStoneEntity_o *userExternalPaymentStoneEntity; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v28; // x25
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x6
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x22
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x4
  UserItemData_o *itemData; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v35; // x22

  if ( (byte_4B11699 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_UserItemListViewManager_SelectItemDetail__, v8, v9);
    byte_4B11699 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (Il2CppObject *)CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL);
  selectItem = this->fields.selectItem;
  if ( !selectItem )
    goto LABEL_18;
  itemType = selectItem->fields.itemType;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = this->fields.selectItem;
    if ( !v18 )
      goto LABEL_18;
    v19 = (CommonUI_o *)Instance;
    if ( itemType == 2 )
    {
      itemEntity = v18->fields.itemEntity;
      v21 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                            ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                            v11,
                                                            v16,
                                                            v17);
      ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        0LL);
      if ( v19 )
      {
        CommonUI__OpenItemLinkInfoDetailWindow(v19, itemEntity, v21, 1, 0LL);
        return;
      }
LABEL_18:
      sub_1BCAA3C(Instance, v11);
    }
    itemData = v18->fields.itemData;
    v35 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                          v11,
                                                          v16,
                                                          v17);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      Method_UserItemListViewManager_SelectItemDetail__,
      0LL);
    if ( !v19 )
      goto LABEL_18;
    CommonUI__OpenItemLinkInfoDetailWindow_30869992(v19, itemData, v35, 0LL);
  }
  else
  {
    itemDetailInfoComp = this->fields.itemDetailInfoComp;
    v23 = selectItem->fields.itemData;
    if ( itemType == 2 )
    {
      if ( !v23 )
        goto LABEL_18;
      name = v23->fields.name;
      detail = v23->fields.detail;
      userGameEntity = this->fields.userGameEntity;
      userExternalPaymentStoneEntity = this->fields.userExternalPaymentStoneEntity;
      v28 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v11,
                                                        v12,
                                                        v13);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v29);
      if ( !itemDetailInfoComp )
        goto LABEL_18;
      ItemDetailInfoComponent__ShowStoneDetail(
        itemDetailInfoComp,
        name,
        detail,
        userGameEntity,
        userExternalPaymentStoneEntity,
        v28,
        v30);
    }
    else
    {
      v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v11,
                                                        v12,
                                                        v13);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_UserItemListViewManager_SelectItemDetail__,
        v32);
      if ( !itemDetailInfoComp )
        goto LABEL_18;
      ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, v23, v31, 5, v33);
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

  if ( (byte_4B1168A & 1) == 0 )
  {
    sub_1BCA7E0(&UserItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1168A = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B1168C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1168C = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserItemListViewManager_o *)sub_1BCACFC(v7);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05CBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05C74;
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
  if ( (byte_4B1169C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B1169C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1169D & 1) == 0 )
  {
    sub_1BCA7E0(&UserItemListViewManager___c_TypeInfo, v1, v2);
    byte_4B1169D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserItemListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserItemListViewManager___c_TypeInfo->static_fields->__9 = (struct UserItemListViewManager___c_o *)v4;
  sub_1BCA784(UserItemListViewManager___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}