void __fastcall BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FB164 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB164 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x19

  if ( (byte_40FB161 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&OptionManager_TypeInfo, v8);
    sub_B16FFC(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, v9);
    sub_B16FFC(&BoostItemMenu___c__DisplayClass25_0_TypeInfo, v10);
    byte_40FB161 = 1;
  }
  v11 = sub_B170CC(BoostItemMenu___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index, method, v4);
  BoostItemMenu___c__DisplayClass25_0___ctor((BoostItemMenu___c__DisplayClass25_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = result;
  *(_DWORD *)(v11 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)v11, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0LL);
  OptionManager__SaveData(v23, 0LL);
}


void __fastcall BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_27217648(this, 0LL, v2);
}


void __fastcall BoostItemMenu__Close_27217648(
        BoostItemMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BoostItemListViewManager_o *itemListViewManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20

  if ( (byte_40FB160 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_BoostItemMenu_EndClose__, v5);
    byte_40FB160 = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B170D4();
  BoostItemListViewManager__SetMode_27212148(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 4;
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
}


void __fastcall BoostItemMenu__EndClose(BoostItemMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostItemMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v23; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_40FB15F & 1) == 0 )
  {
    sub_B16FFC(&Method_BoostItemMenu_OnSelectItem__, method);
    sub_B16FFC(&BoostItemListViewManager_CallbackFunc_TypeInfo, v6);
    byte_40FB15F = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v8 = (BoostItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                    BoostItemListViewManager_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  BoostItemListViewManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_BoostItemMenu_OnSelectItem__, 0LL);
  if ( !itemListViewManager )
    sub_B170D4();
  itemListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&itemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BoostItemListViewManager__SetMode_27212148(itemListViewManager, 2, v15);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v23 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B16F98(p_openCallbackFunc, 0LL, v16, v17, v18, v19, v20, v21);
    System_Action__Invoke(v23, 0LL);
  }
}


BoostItemListViewItem_o *__fastcall BoostItemMenu__GetItem(
        BoostItemMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B170D4();
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B170D4();
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostItemMenu__OnClickCancel(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 0, -1, v2);
  }
}


void __fastcall BoostItemMenu__OnClickDecide(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 1, -1, v2);
  }
}


void __fastcall BoostItemMenu__OnClickInfomation(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    BoostItemMenu__Callback(this, 2, -1, v2);
  }
}


void __fastcall BoostItemMenu__OnClickSetupConfirm(BoostItemMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v7; // x8

  if ( (byte_40FB163 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, v3);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v4);
    byte_40FB163 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_B170D4();
    if ( isBoostItemUseConfirm )
      v7 = &StringLiteral_16939/*"btn_off"*/;
    else
      v7 = &StringLiteral_16940/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__OnSelectItem(BoostItemMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  BoostItemListViewManager_o *itemListViewManager; // x0
  BoostItemListViewItem_o *Item; // x0
  struct BoostItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BoostItemListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  BoostItemMenu_o *v25; // x0
  int32_t v26; // w1

  if ( (byte_40FB162 & 1) == 0 )
  {
    sub_B16FFC(&Method_BoostItemMenu_OnSelectItem__, *(_QWORD *)&kind);
    sub_B16FFC(&BoostItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40FB162 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      itemListViewManager = this->fields.itemListViewManager;
      if ( !itemListViewManager )
        goto LABEL_20;
      Item = BoostItemListViewManager__GetItem(itemListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 1 )
    {
      if ( !Item )
        goto LABEL_20;
      if ( Item->fields.isCanNotSelect )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        v11 = this->fields.itemListViewManager;
        v16 = (BoostItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                           BoostItemListViewManager_CallbackFunc_TypeInfo,
                                                           v12,
                                                           v13,
                                                           v14,
                                                           v15);
        BoostItemListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BoostItemMenu_OnSelectItem__,
          0LL);
        if ( v11 )
        {
          v11->fields.callbackFunc = v16;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v11->fields.callbackFunc,
            (System_Int32_array **)v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          BoostItemListViewManager__SetMode_27212148(v11, 2, v23);
          return;
        }
LABEL_20:
        sub_B170D4();
      }
      v26 = 1;
      v25 = this;
      v24 = n;
      this->fields.state = 3;
    }
    else
    {
      v24 = -1;
      this->fields.state = 3;
      v25 = this;
      v26 = 0;
    }
    BoostItemMenu__Callback(v25, v26, v24, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__Open(
        BoostItemMenu_o *this,
        EventUpValSetupInfo_o *setupInfo,
        BoostItemMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        bool IsFriendChocolate,
        bool IsAvailableFriendChocolate,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  int32_t state; // w8
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *BoostItemList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array *v46; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x23
  System_String_o *v49; // x0
  UILabel_o *titleDetailLabel; // x22
  System_String_o *v51; // x0
  UILabel_o *useConfirmOptionLabel; // x22
  System_String_o *v53; // x0
  UnityEngine_Component_o *informationButton; // x0
  UnityEngine_GameObject_o *v55; // x0
  bool v56; // w1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x1
  struct System_Action_o *openCallbackFunc; // x8
  System_String_o *v65; // x0
  UILabel_o *v66; // x22
  System_String_o *v67; // x0
  UILabel_o *v68; // x22
  System_String_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  UILabel_o *decideLabel; // x22
  System_String_o *v72; // x0
  UILabel_o *cancelLabel; // x22
  System_String_o *v74; // x0
  const MethodInfo *v75; // x3
  BoostItemListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v77; // x2
  BoostItemListViewManager_o *v78; // x0
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v80; // x8
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Action_o *v85; // x20

  if ( (byte_40FB15E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, setupInfo);
    sub_B16FFC(&Method_BoostItemMenu_EndOpen__, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&OptionManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&SoundManager_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_2583/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, v20);
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, v21);
    sub_B16FFC(&StringLiteral_2585/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, v22);
    sub_B16FFC(&StringLiteral_2580/*"BOOST_ITEM_USE_DETAIL"*/, v23);
    sub_B16FFC(&StringLiteral_2573/*"BOOST_ITEM_USE_CANCEL"*/, v24);
    sub_B16FFC(&StringLiteral_2579/*"BOOST_ITEM_USE_DECIDE"*/, v25);
    sub_B16FFC(&StringLiteral_2582/*"BOOST_ITEM_USE_OPTION"*/, v26);
    sub_B16FFC(&StringLiteral_2584/*"BOOST_ITEM_USE_TITILE"*/, v27);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v28);
    sub_B16FFC(&StringLiteral_2581/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, v29);
    byte_40FB15E = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
      (System_Int32_array **)openCallback,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    BoostItemMenu__EndOpen(this, v63);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
      (System_Int32_array **)openCallback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        BoostItemList = ItemMaster__GetBoostItemList(MasterData_WarQuestSelectionMaster, setupInfo, 0LL);
        if ( BoostItemList )
        {
          if ( !IsAvailableFriendChocolate && IsFriendChocolate
            || (v46 = BoostItemList, !*(_QWORD *)&BoostItemList->max_length) )
          {
            openCallbackFunc = this->fields.openCallbackFunc;
            this->fields.state = 3;
            if ( openCallbackFunc )
            {
              this->fields.openCallbackFunc = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
                0LL,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
              if ( !openCallback )
                goto LABEL_56;
              System_Action__Invoke(openCallback, 0LL);
            }
            BoostItemMenu__Callback(this, 1, -1, (const MethodInfo *)v41);
            return;
          }
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            titleLabel = this->fields.titleLabel;
            if ( IsFriendChocolate )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2585/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, v49, 0LL);
              titleDetailLabel = this->fields.titleDetailLabel;
              v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2581/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleDetailLabel )
                goto LABEL_56;
              UILabel__set_text(titleDetailLabel, v51, 0LL);
              useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
              v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2583/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !useConfirmOptionLabel )
                goto LABEL_56;
              UILabel__set_text(useConfirmOptionLabel, v53, 0LL);
              informationButton = (UnityEngine_Component_o *)this->fields.informationButton;
              if ( !informationButton )
                goto LABEL_56;
              v55 = UnityEngine_Component__get_gameObject(informationButton, 0LL);
              if ( !v55 )
                goto LABEL_56;
              v56 = 0;
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v65 = LocalizationManager__Get((System_String_o *)StringLiteral_2584/*"BOOST_ITEM_USE_TITILE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, v65, 0LL);
              v66 = this->fields.titleDetailLabel;
              v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2580/*"BOOST_ITEM_USE_DETAIL"*/, 0LL);
              if ( !v66 )
                goto LABEL_56;
              UILabel__set_text(v66, v67, 0LL);
              v68 = this->fields.useConfirmOptionLabel;
              v69 = LocalizationManager__Get((System_String_o *)StringLiteral_2582/*"BOOST_ITEM_USE_OPTION"*/, 0LL);
              if ( !v68 )
                goto LABEL_56;
              UILabel__set_text(v68, v69, 0LL);
              v70 = (UnityEngine_Component_o *)this->fields.informationButton;
              if ( !v70 )
                goto LABEL_56;
              v55 = UnityEngine_Component__get_gameObject(v70, 0LL);
              if ( !v55 )
                goto LABEL_56;
              v56 = 1;
            }
            UnityEngine_GameObject__SetActive(v55, v56, 0LL);
            decideLabel = this->fields.decideLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v72 = LocalizationManager__Get((System_String_o *)StringLiteral_2579/*"BOOST_ITEM_USE_DECIDE"*/, 0LL);
            if ( decideLabel )
            {
              UILabel__set_text(decideLabel, v72, 0LL);
              cancelLabel = this->fields.cancelLabel;
              v74 = LocalizationManager__Get((System_String_o *)StringLiteral_2573/*"BOOST_ITEM_USE_CANCEL"*/, 0LL);
              if ( cancelLabel )
              {
                UILabel__set_text(cancelLabel, v74, 0LL);
                if ( setupInfo )
                {
                  itemListViewManager = this->fields.itemListViewManager;
                  if ( itemListViewManager )
                  {
                    BoostItemListViewManager__CreateList(itemListViewManager, v46, setupInfo->fields.questId, v75);
                    v78 = this->fields.itemListViewManager;
                    if ( v78 )
                    {
                      BoostItemListViewManager__SetMode_27212148(v78, 1, v77);
                      setupConfirmSprite = this->fields.setupConfirmSprite;
                      if ( setupConfirmSprite )
                      {
                        if ( this->fields.isBoostItemUseConfirm )
                          v80 = &StringLiteral_16940/*"btn_on"*/;
                        else
                          v80 = &StringLiteral_16939/*"btn_off"*/;
                        UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v80, 0LL);
                        this->fields.state = 1;
                        v85 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v81, v82, v83, v84);
                        System_Action___ctor(v85, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v85, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_B170D4();
  }
}


void __fastcall BoostItemMenu__add_callbackFunc(
        BoostItemMenu_o *this,
        BoostItemMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostItemMenu_o *v11; // x0
  BoostItemMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FB15C & 1) == 0 )
  {
    sub_B16FFC(&BoostItemMenu_CallbackFunc_TypeInfo, value);
    byte_40FB15C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v8->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_B173C8(v8);
  BoostItemMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall BoostItemMenu__remove_callbackFunc(
        BoostItemMenu_o *this,
        BoostItemMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostItemMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_40FB15D & 1) == 0 )
  {
    sub_B16FFC(&BoostItemMenu_CallbackFunc_TypeInfo, value);
    byte_40FB15D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v8->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostItemMenu_o *)sub_B173C8(v8);
  BoostItemMenu__GetItem(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu_CallbackFunc___ctor(
        BoostItemMenu_CallbackFunc_o *this,
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BoostItemMenu_CallbackFunc__BeginInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = result;
  if ( (byte_40F709F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&BoostItemMenu_ResultKind_TypeInfo, v9);
    byte_40F709F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu_CallbackFunc__Invoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  BoostItemMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BoostItemMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  BoostItemMenu_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BoostItemMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)index, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)index, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)index, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)index,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)index, v22);
    goto LABEL_38;
  }
}


void __fastcall BoostItemMenu___c__DisplayClass25_0___ctor(
        BoostItemMenu___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoostItemMenu___c__DisplayClass25_0___Callback_b__0(
        BoostItemMenu___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BoostItemMenu_o *_4__this; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x0
  BoostItemMenu_CallbackFunc_o *v11; // x20
  BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  const MethodInfo *v13; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&_4__this->fields.callbackFunc;
  v11 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    BoostItemMenu_CallbackFunc__Invoke(v11, this->fields.result, this->fields.index, v13);
}