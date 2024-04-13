void __fastcall BoostItemMenu___ctor(BoostItemMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E86CF & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E86CF = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostItemMenu__Callback(BoostItemMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v26; // x19

  if ( (byte_42E86CC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, index, method);
    sub_B5D5C4(&OptionManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, v10, v11, v12);
    sub_B5D5C4(&BoostItemMenu___c__DisplayClass25_0_TypeInfo, v13, v14, v15);
    byte_42E86CC = 1;
  }
  v16 = sub_B5D694(BoostItemMenu___c__DisplayClass25_0_TypeInfo);
  BoostItemMenu___c__DisplayClass25_0___ctor((BoostItemMenu___c__DisplayClass25_0_o *)v16, 0LL);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 24) = result;
  *(_DWORD *)(v16 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v16, Method_BoostItemMenu___c__DisplayClass25_0__Callback_b__0__, 0LL);
  OptionManager__SaveData(v26, 0LL);
}


void __fastcall BoostItemMenu__Close(BoostItemMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostItemMenu__Close_24956864(this, 0LL, v2);
}


void __fastcall BoostItemMenu__Close_24956864(
        BoostItemMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BoostItemListViewManager_o *itemListViewManager; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_42E86CB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BoostItemMenu_EndClose__, v6, v7, v8);
    byte_42E86CB = 1;
  }
  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B5D69C(0LL, callback);
  BoostItemListViewManager__SetMode_24951364(itemListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_BoostItemMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall BoostItemMenu__EndOpen(BoostItemMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BoostItemListViewManager_o *itemListViewManager; // x20
  BoostItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v26; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_42E86CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BoostItemMenu_OnSelectItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BoostItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E86CA = 1;
  }
  this->fields.state = 2;
  itemListViewManager = this->fields.itemListViewManager;
  v9 = (BoostItemListViewManager_CallbackFunc_o *)sub_B5D694(BoostItemListViewManager_CallbackFunc_TypeInfo);
  BoostItemListViewManager_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_BoostItemMenu_OnSelectItem__, 0LL);
  if ( !itemListViewManager )
    sub_B5D69C(v10, v11);
  itemListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&itemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BoostItemListViewManager__SetMode_24951364(itemListViewManager, 2, v18);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v26 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_B5D560(p_openCallbackFunc, 0LL, v19, v20, v21, v22, v23, v24);
    System_Action__Invoke(v26, 0LL);
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
    sub_B5D69C(0LL, index);
  return BoostItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostItemMenu__Init(BoostItemMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v14; // x8

  if ( (byte_42E86CE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v8, v9, v10);
    byte_42E86CE = 1;
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
      sub_B5D69C(0LL, v11);
    if ( isBoostItemUseConfirm )
      v14 = &StringLiteral_17214/*"btn_off"*/;
    else
      v14 = &StringLiteral_17215/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu__OnSelectItem(BoostItemMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BoostItemListViewManager_o *itemListViewManager; // x0
  struct BoostItemListViewManager_o *v14; // x20
  BoostItemListViewManager_CallbackFunc_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  BoostItemMenu_o *v24; // x0
  int32_t v25; // w1

  if ( (byte_42E86CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BoostItemMenu_OnSelectItem__, kind, n, method);
    sub_B5D5C4(&BoostItemListViewManager_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SoundManager_TypeInfo, v10, v11, v12);
    byte_42E86CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) != 0 )
    {
      itemListViewManager = 0LL;
    }
    else
    {
      itemListViewManager = this->fields.itemListViewManager;
      if ( !itemListViewManager )
        goto LABEL_20;
      itemListViewManager = (BoostItemListViewManager_o *)BoostItemListViewManager__GetItem(
                                                            itemListViewManager,
                                                            n,
                                                            *(const MethodInfo **)&n);
    }
    if ( kind == 1 )
    {
      if ( !itemListViewManager )
        goto LABEL_20;
      if ( LOBYTE(itemListViewManager->fields.dropList) )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        v14 = this->fields.itemListViewManager;
        v15 = (BoostItemListViewManager_CallbackFunc_o *)sub_B5D694(BoostItemListViewManager_CallbackFunc_TypeInfo);
        BoostItemListViewManager_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BoostItemMenu_OnSelectItem__,
          0LL);
        if ( v14 )
        {
          v14->fields.callbackFunc = v15;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v14->fields.callbackFunc,
            (System_Int32_array **)v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          BoostItemListViewManager__SetMode_24951364(v14, 2, v22);
          return;
        }
LABEL_20:
        sub_B5D69C(itemListViewManager, *(_QWORD *)&kind);
      }
      v25 = 1;
      v24 = this;
      v23 = n;
      this->fields.state = 3;
    }
    else
    {
      v23 = -1;
      this->fields.state = 3;
      v24 = this;
      v25 = 0;
    }
    BoostItemMenu__Callback(v24, v25, v23, method);
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
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int32_t state; // w8
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  DataManager_o *Instance; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array *v77; // x21
  UILabel_o *titleLabel; // x23
  UILabel_o *titleDetailLabel; // x22
  UILabel_o *useConfirmOptionLabel; // x22
  bool v81; // w1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  const MethodInfo *v88; // x1
  struct System_Action_o *openCallbackFunc; // x8
  UILabel_o *v90; // x22
  UILabel_o *v91; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x2
  __int64 *v96; // x8
  System_Action_o *v97; // x20

  if ( (byte_42E86C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)setupInfo, (_DWORD)callback, openCallback);
    sub_B5D5C4(&Method_BoostItemMenu_EndOpen__, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&OptionManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&SoundManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_2648/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_2650/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_2645/*"BOOST_ITEM_USE_DETAIL"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_2638/*"BOOST_ITEM_USE_CANCEL"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_2644/*"BOOST_ITEM_USE_DECIDE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_2647/*"BOOST_ITEM_USE_OPTION"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_2649/*"BOOST_ITEM_USE_TITILE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_2646/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, v59, v60, v61);
    byte_42E86C9 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
      (System_Int32_array **)openCallback,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
    BoostItemMenu__EndOpen(this, v88);
    return;
  }
  if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)openCallback,
      (System_Boolean_array **)IsFriendChocolate,
      (System_Int32_array **)IsAvailableFriendChocolate,
      (System_Int32_array *)method,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
      (System_Int32_array **)openCallback,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)ItemMaster__GetBoostItemList((ItemMaster_o *)Instance, setupInfo, 0LL);
        if ( Instance )
        {
          if ( !IsAvailableFriendChocolate && IsFriendChocolate
            || (v77 = (System_Int32_array *)Instance, !Instance->fields.datalist) )
          {
            openCallbackFunc = this->fields.openCallbackFunc;
            this->fields.state = 3;
            if ( openCallbackFunc )
            {
              this->fields.openCallbackFunc = 0LL;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
                0LL,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76);
              if ( !openCallback )
                goto LABEL_56;
              System_Action__Invoke(openCallback, 0LL);
            }
            BoostItemMenu__Callback(this, 1, -1, (const MethodInfo *)v72);
            return;
          }
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            titleLabel = this->fields.titleLabel;
            if ( IsFriendChocolate )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2650/*"BOOST_ITEM_USE_TITLE_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              titleDetailLabel = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2646/*"BOOST_ITEM_USE_DETAIL_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !titleDetailLabel )
                goto LABEL_56;
              UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
              useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2648/*"BOOST_ITEM_USE_OPTION_FRIEND_CHOCOLATE"*/, 0LL);
              if ( !useConfirmOptionLabel )
                goto LABEL_56;
              UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
              Instance = (DataManager_o *)this->fields.informationButton;
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
              if ( !Instance )
                goto LABEL_56;
              v81 = 0;
            }
            else
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2649/*"BOOST_ITEM_USE_TITILE"*/, 0LL);
              if ( !titleLabel )
                goto LABEL_56;
              UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
              v90 = this->fields.titleDetailLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2645/*"BOOST_ITEM_USE_DETAIL"*/, 0LL);
              if ( !v90 )
                goto LABEL_56;
              UILabel__set_text(v90, (System_String_o *)Instance, 0LL);
              v91 = this->fields.useConfirmOptionLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2647/*"BOOST_ITEM_USE_OPTION"*/, 0LL);
              if ( !v91 )
                goto LABEL_56;
              UILabel__set_text(v91, (System_String_o *)Instance, 0LL);
              Instance = (DataManager_o *)this->fields.informationButton;
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
              if ( !Instance )
                goto LABEL_56;
              v81 = 1;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v81, 0LL);
            decideLabel = this->fields.decideLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2644/*"BOOST_ITEM_USE_DECIDE"*/, 0LL);
            if ( decideLabel )
            {
              UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
              cancelLabel = this->fields.cancelLabel;
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2638/*"BOOST_ITEM_USE_CANCEL"*/, 0LL);
              if ( cancelLabel )
              {
                UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
                if ( setupInfo )
                {
                  Instance = (DataManager_o *)this->fields.itemListViewManager;
                  if ( Instance )
                  {
                    BoostItemListViewManager__CreateList(
                      (BoostItemListViewManager_o *)Instance,
                      v77,
                      setupInfo->fields.questId,
                      v94);
                    Instance = (DataManager_o *)this->fields.itemListViewManager;
                    if ( Instance )
                    {
                      BoostItemListViewManager__SetMode_24951364((BoostItemListViewManager_o *)Instance, 1, v95);
                      Instance = (DataManager_o *)this->fields.setupConfirmSprite;
                      if ( Instance )
                      {
                        if ( this->fields.isBoostItemUseConfirm )
                          v96 = &StringLiteral_17215/*"btn_on"*/;
                        else
                          v96 = &StringLiteral_17214/*"btn_off"*/;
                        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v96, 0LL);
                        this->fields.state = 1;
                        v97 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                        System_Action___ctor(v97, (Il2CppObject *)this, Method_BoostItemMenu_EndOpen__, 0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v97, 0, 0LL);
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
    sub_B5D69C(Instance, v70);
  }
}


void __fastcall BoostItemMenu__add_callbackFunc(
        BoostItemMenu_o *this,
        BoostItemMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostItemMenu_o *v12; // x0
  BoostItemMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E86C7 & 1) == 0 )
  {
    sub_B5D5C4(&BoostItemMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E86C7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v9->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostItemMenu_o *)sub_B5D990(v9);
  BoostItemMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall BoostItemMenu__remove_callbackFunc(
        BoostItemMenu_o *this,
        BoostItemMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostItemMenu_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_42E86C8 & 1) == 0 )
  {
    sub_B5D5C4(&BoostItemMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E86C8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (BoostItemMenu_CallbackFunc_c *)v9->klass != BoostItemMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostItemMenu_o *)sub_B5D990(v9);
  BoostItemMenu__GetItem(v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemMenu_CallbackFunc___ctor(
        BoostItemMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall BoostItemMenu_CallbackFunc__BeginInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = index;
  v15 = result;
  if ( (byte_42E5E2F & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, index, callback);
    sub_B5D5C4(&BoostItemMenu_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5E2F = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(BoostItemMenu_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall BoostItemMenu_CallbackFunc__EndInvoke(
        BoostItemMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BoostItemMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  BoostItemMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
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
  struct BoostItemMenu_o *_4__this; // x0
  struct BoostItemMenu_CallbackFunc_o **p_callbackFunc; // x0
  BoostItemMenu_CallbackFunc_o *v5; // x20
  BoostItemMenu_CallbackFunc_o *callbackFunc; // t1
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_B5D560(p_callbackFunc);
  if ( callbackFunc )
    BoostItemMenu_CallbackFunc__Invoke(v5, this->fields.result, this->fields.index, v7);
}