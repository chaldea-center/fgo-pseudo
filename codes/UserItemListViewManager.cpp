void __fastcall UserItemListViewManager___ctor(UserItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall UserItemListViewManager__CreateList(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x21
  struct System_Collections_Generic_List_UserItemData__o **p_usrItemList; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UILabel_o *infoLb; // x21
  void *gameObject; // x0
  const MethodInfo *v60; // x1
  UnityEngine_GameObject_o *v61; // x21
  const MethodInfo *v62; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x2
  struct UserGameEntity_o *userGameEntity; // x9
  int32_t stone; // w10
  int mana; // w8
  UserItemEntity_array *List; // x0
  const MethodInfo *v75; // x2
  __int64 v76; // x8
  UserItemEntity_array *v77; // x21
  unsigned __int64 v78; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v79; // x21
  struct UserItemListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__27_0; // x22
  Il2CppObject *v82; // x23
  struct UserItemListViewManager___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  signed __int64 size; // x23
  UILabel_o *nonItemNoticeLb; // x21
  unsigned __int64 i; // x24
  struct System_Collections_Generic_List_UserItemData__o *v93; // x21
  UserItemData_o *v94; // x22
  UserItemListViewItem_o *v95; // x21
  const MethodInfo *v96; // x2
  __int64 v97; // x0

  if ( (byte_42E7179 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserItemData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_UserItemData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemData__Sort__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemData___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemData__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemData__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_UserItemData__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_UserItemListViewManager___c__CreateList_b__27_0__, v35, v36, v37);
    sub_B5D5C4(&UserItemListViewManager___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UserItemListViewItem_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_9407/*"NONITEM_NOTICE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_7127/*"HEADER_NOTICE_MSG"*/, v47, v48, v49);
    byte_42E7179 = 1;
  }
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserItemData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserItemData___ctor__);
  p_usrItemList = &this->fields.usrItemList;
  this->fields.usrItemList = (struct System_Collections_Generic_List_UserItemData__o *)v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrItemList,
    (System_Int32_array **)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_7127/*"HEADER_NOTICE_MSG"*/, 0LL);
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
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (void *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v61 )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(v61, (unsigned __int8)gameObject & 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(v62);
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
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
    UserItemListViewManager__SetUsrItemDataByType(this, 2, v70);
    mana = this->fields.manaNum;
  }
  if ( mana >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 5, v70);
  if ( this->fields.rarePriNum >= 1 )
    UserItemListViewManager__SetUsrItemDataByType(this, 22, v70);
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_51;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !gameObject )
    goto LABEL_51;
  List = UserItemMaster__getList((UserItemMaster_o *)gameObject, v60);
  if ( List )
  {
    v76 = *(_QWORD *)&List->max_length;
    v77 = List;
    if ( (int)v76 >= 1 )
    {
      v78 = 0LL;
      do
      {
        if ( v78 >= (unsigned int)v76 )
        {
          v97 = sub_B5D6C8(List);
          sub_B5D668(v97, 0LL);
        }
        UserItemListViewManager__SetUsrItemData(this, v77->m_Items[v78], v75);
        LODWORD(v76) = v77->max_length;
        ++v78;
      }
      while ( (__int64)v78 < (int)v76 );
    }
  }
  v79 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_usrItemList;
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
    v82 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserItemData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__27_0,
      v82,
      Method_UserItemListViewManager___c__CreateList_b__27_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserItemData___ctor__);
    v83 = UserItemListViewManager___c_TypeInfo->static_fields;
    v83->__9__27_0 = (struct System_Comparison_UserItemData__o *)_9__27_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v83->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  if ( !v79 )
    goto LABEL_51;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v79,
    (System_Comparison_T__o *)_9__27_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserItemData__Sort__);
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9407/*"NONITEM_NOTICE"*/, 0LL);
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
    sub_B5D69C(gameObject, v60);
  }
  if ( !nonItemNoticeLb )
    goto LABEL_51;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nonItemNoticeLb, 0LL);
  if ( !gameObject )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  for ( i = 0LL; (__int64)i < size; ++i )
  {
    v93 = *p_usrItemList;
    if ( !*p_usrItemList )
      goto LABEL_51;
    if ( i >= (unsigned int)v93->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v94 = v93->fields._items->m_Items[i];
    v95 = (UserItemListViewItem_o *)sub_B5D694(UserItemListViewItem_TypeInfo);
    UserItemListViewItem___ctor(v95, v94, v96);
    gameObject = this->fields.itemList;
    if ( !gameObject )
      goto LABEL_51;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E717C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&UserItemListViewItem_TypeInfo, v6, v7, v8);
    byte_42E717C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&UserItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (UserItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == UserItemListViewItem_TypeInfo )
    return (UserItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall UserItemListViewManager__OnClickListView(
        UserItemListViewManager_o *this,
        UserItemListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserItemListViewManager_o *v5; // x19
  System_Int32_array **Item; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v5 = this;
  if ( (byte_42E7182 & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B5D5C4(&StringLiteral_11761/*"SELECT_ITEM"*/, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E7182 = 1;
  }
  if ( !obj
    || (Item = (System_Int32_array **)UserItemListViewObject__GetItem(obj, (const MethodInfo *)obj),
        v5->fields.selectItem = (struct UserItemListViewItem_o *)Item,
        sub_B5D560((BattleServantConfConponent_o *)&v5->fields.selectItem, Item, v7, v8, v9, v10, v11, v12),
        (this = (UserItemListViewManager_o *)v5->fields.myRoomFsm) == 0LL) )
  {
    sub_B5D69C(this, obj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11761/*"SELECT_ITEM"*/, 0LL);
}


void __fastcall UserItemListViewManager__OnMoveEnd(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42E7181 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7181 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E717F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_UserItemListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E717F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__RequestListObject_22517984(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E7180 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_UserItemListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42E7180 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_UserItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      UserItemListViewObject__Init(
        (UserItemListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SelectItemDetail(
        UserItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42E7185 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3161/*"CLOSE_DETAIL"*/, isDecide, (_DWORD)method, v3);
    byte_42E7185 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3161/*"CLOSE_DETAIL"*/, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_22517780(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserItemListViewManager__SetMode_22517780(
        UserItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserItemListViewManager_o *v5; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  const MethodInfo *v7; // x2

  v5 = this;
  if ( (byte_42E717E & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                          mode,
                                          (_DWORD)method,
                                          v3);
    byte_42E717E = 1;
  }
  objectList = v5->fields.objectList;
  v5->fields.initMode = mode;
  if ( !objectList )
    sub_B5D69C(this, *(_QWORD *)&mode);
  v5->fields.callbackCount = objectList->fields._size;
  ListViewManager__set_IsInput((ListViewManager_o *)v5, mode == 1, 0LL);
  if ( mode == 1 )
    UserItemListViewManager__RequestListObject_22517984(v5, 3, v7);
}


void __fastcall UserItemListViewManager__SetMode_22517928(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  UserItemListViewManager__SetMode_22517780(this, mode, v10);
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
  if ( (byte_42E717D & 1) == 0 )
  {
    this = (UserItemListViewManager_o *)sub_B5D5C4(&UserItemListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    byte_42E717D = 1;
  }
  if ( !obj
    || (v6 = *(&UserItemListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (UserItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != UserItemListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  __int64 v3; // x3
  UserItemListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ItemEntity_o *ItemInfo; // x0
  unsigned int type; // w8
  ItemEntity_o *v11; // x21
  __int64 v12; // x22
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

  v5 = this;
  if ( (byte_42E717B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemData__Add__, (_DWORD)data, (_DWORD)method, v3);
    this = (UserItemListViewManager_o *)sub_B5D5C4(&UserItemData_TypeInfo, v6, v7, v8);
    byte_42E717B = 1;
  }
  if ( !data )
    goto LABEL_12;
  ItemInfo = UserItemEntity__getItemInfo(data, (const MethodInfo *)data);
  if ( ItemInfo )
  {
    if ( data->fields.num >= 1 )
    {
      type = ItemInfo->fields.type;
      v11 = ItemInfo;
      if ( type > 0x1D || ((1 << type) & 0x20002006) == 0 )
      {
        v12 = sub_B5D694(UserItemData_TypeInfo);
        System_Object___ctor((Il2CppObject *)v12, 0LL);
        if ( v12 )
        {
          *(_DWORD *)(v12 + 16) = v11->fields.type;
          *(_DWORD *)(v12 + 24) = v11->fields.id;
          *(_DWORD *)(v12 + 20) = v11->fields.priority;
          *(_DWORD *)(v12 + 28) = v11->fields.imageId;
          name = (System_Int32_array **)v11->fields.name;
          *(_QWORD *)(v12 + 32) = name;
          sub_B5D560((BattleServantConfConponent_o *)(v12 + 32), name, v13, v14, v15, v16, v17, v18);
          detail = (System_Int32_array **)v11->fields.detail;
          *(_QWORD *)(v12 + 40) = detail;
          sub_B5D560((BattleServantConfConponent_o *)(v12 + 40), detail, v21, v22, v23, v24, v25, v26);
          *(_DWORD *)(v12 + 48) = data->fields.num;
          this = (UserItemListViewManager_o *)v5->fields.usrItemList;
          if ( this )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserItemData__Add__);
            return;
          }
        }
LABEL_12:
        sub_B5D69C(this, data);
      }
    }
  }
}


void __fastcall UserItemListViewManager__SetUsrItemDataByType(
        UserItemListViewManager_o *this,
        int32_t itemType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  ItemEntity_o *EntityByType; // x0
  ItemEntity_o *v18; // x22
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **name; // x1
  System_Int32_array **detail; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t rarePriNum; // w8

  if ( (byte_42E717A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, itemType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemData__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&UserItemData_TypeInfo, v12, v13, v14);
    byte_42E717A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_17:
    sub_B5D69C(Instance, v16);
  }
  EntityByType = ItemMaster__GetEntityByType((ItemMaster_o *)Instance, itemType, 0LL);
  if ( EntityByType )
  {
    v18 = EntityByType;
    v19 = sub_B5D694(UserItemData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( !v19 )
      goto LABEL_17;
    *(_DWORD *)(v19 + 16) = v18->fields.type;
    *(_DWORD *)(v19 + 24) = v18->fields.id;
    *(_DWORD *)(v19 + 20) = v18->fields.priority;
    *(_DWORD *)(v19 + 28) = v18->fields.imageId;
    name = (System_Int32_array **)v18->fields.name;
    *(_QWORD *)(v19 + 32) = name;
    sub_B5D560((BattleServantConfConponent_o *)(v19 + 32), name, v20, v21, v22, v23, v24, v25);
    detail = (System_Int32_array **)v18->fields.detail;
    *(_QWORD *)(v19 + 40) = detail;
    sub_B5D560((BattleServantConfConponent_o *)(v19 + 40), detail, v28, v29, v30, v31, v32, v33);
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
    *(_DWORD *)(v19 + 48) = rarePriNum;
  }
  else
  {
    v19 = 0LL;
  }
LABEL_15:
  Instance = (DataManager_o *)this->fields.usrItemList;
  if ( !Instance )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserItemData__Add__);
}


void __fastcall UserItemListViewManager__add_callbackFunc(
        UserItemListViewManager_o *this,
        UserItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct UserItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  UserItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E7173 & 1) == 0 )
  {
    sub_B5D5C4(&UserItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7173 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v8->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_B5D990(v8);
  UserItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall UserItemListViewManager__add_callbackFunc2(
        UserItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E7175 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7175 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_B5D990(v8);
  UserItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void __fastcall UserItemListViewManager__closeItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x0

  if ( (byte_42E7184 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UserItemListViewManager_closeItemDetail__, (_DWORD)method, v2, v3);
    byte_42E7184 = 1;
  }
  v5 = Method_UserItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_UserItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_UserItemListViewManager_closeItemDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  if ( !itemDetailInfoComp )
    sub_B5D69C(0LL, v7);
  ItemDetailInfoComponent__Close(itemDetailInfoComp, 0LL);
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ClippingObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  UserItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E7178 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E7178 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (UserItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)current,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)UserItemListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v29;
}


System_Collections_Generic_List_UserItemListViewObject__o *__fastcall UserItemListViewManager__get_ObjectList(
        UserItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E7177 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E7177 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UserItemListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_UserItemListViewObject__o *)v29;
}


void __fastcall UserItemListViewManager__openItemDetail(UserItemListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  ItemDetailInfoComponent_o *monitor; // x19
  UserItemData_o *interopData; // x21
  System_String_o *detail; // x21
  System_String_o *name; // x22
  UserGameEntity_o *v13; // x23
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x24
  ItemDetailInfoComponent_CallbackFunc_o *v15; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E7183 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    this = (UserItemListViewManager_o *)sub_B5D5C4(&Method_UserItemListViewManager_SelectItemDetail__, v5, v6, v7);
    byte_42E7183 = 1;
  }
  klass = v4[23].klass;
  if ( !klass )
    goto LABEL_10;
  monitor = (ItemDetailInfoComponent_o *)v4[20].monitor;
  interopData = (UserItemData_o *)klass->_1.interopData;
  if ( HIDWORD(klass->_1.klass) == 2 )
  {
    if ( interopData )
    {
      name = interopData->fields.name;
      detail = interopData->fields.detail;
      v13 = (UserGameEntity_o *)v4[25].monitor;
      v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(v14, v4, Method_UserItemListViewManager_SelectItemDetail__, 0LL);
      if ( monitor )
      {
        ItemDetailInfoComponent__ShowStoneDetail(monitor, name, detail, v13, v14, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B5D69C(this, method);
  }
  v15 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(v15, v4, Method_UserItemListViewManager_SelectItemDetail__, 0LL);
  if ( !monitor )
    goto LABEL_10;
  ItemDetailInfoComponent__OpenUserItemInfo(monitor, interopData, v15, 5, 0LL);
}


void __fastcall UserItemListViewManager__remove_callbackFunc(
        UserItemListViewManager_o *this,
        UserItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct UserItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E7174 & 1) == 0 )
  {
    sub_B5D5C4(&UserItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7174 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserItemListViewManager_CallbackFunc_c *)v8->klass != UserItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_B5D990(v8);
  UserItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall UserItemListViewManager__remove_callbackFunc2(
        UserItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E7176 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7176 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserItemListViewManager_o *)sub_B5D990(v8);
  UserItemListViewManager__get_ObjectList(v11, v12);
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
  sub_B5D560(
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
  if ( (byte_42E7003 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, (_DWORD)callback, object);
    byte_42E7003 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall UserItemListViewManager_CallbackFunc__EndInvoke(
        UserItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  UserItemListViewManager_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  UserItemListViewManager_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)result, v21);
    goto LABEL_37;
  }
}


void __fastcall UserItemListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7002 & 1) == 0 )
  {
    sub_B5D5C4(&UserItemListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E7002 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserItemListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserItemListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return a->fields.dispPriority - b->fields.dispPriority;
}