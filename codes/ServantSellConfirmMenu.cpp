void __fastcall ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FBC1C & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_40FBC1C = 1;
  }
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_3137810;
  v8 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellConfirmMenu__CallOnClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onClose; // x19
  BattleServantConfConponent_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_B16F98(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClose, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__CallOnSellServantConfirm(
        ServantSellConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *onSellServantConfirm; // x21

  if ( (byte_40FBC0C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_40FBC0C = 1;
  }
  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    this->fields.onSellServantConfirm = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(
      onSellServantConfirm,
      result,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ServantSellConfirmMenu__ClearCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_40FBBFD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_40FBBFD = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B170D4();
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_28320208(this, 0LL, v2);
}


void __fastcall ServantSellConfirmMenu__Close_28320208(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FBC0B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndClose__, v10);
    byte_40FBC0B = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  ListViewManager_o *v4; // x0

  if ( (byte_40FBC14 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBC14 = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0LL, 0LL) )
  {
    v4 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v4 )
      sub_B170D4();
    ListViewManager__DestroyList(v4, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__EndClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellConfirmMenu__TextClear(this, method);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ServantSellConfirmMenu__CallOnClose(this, v3);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowCommandCode(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FBC1A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, method);
    sub_B16FFC(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v6);
    sub_B16FFC(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v7);
    byte_40FBC1A = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_ServantSellConfirmListViewItem__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_24B7310 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B170D4();
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ServantSellConfirmListViewManager__SetMode_28303988(servantSellConfirmListViewManager, 2, v16);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FBC17 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, method);
    sub_B16FFC(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v6);
    sub_B16FFC(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v7);
    byte_40FBC17 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_ServantSellConfirmListViewItem__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_24B7310 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B170D4();
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ServantSellConfirmListViewManager__SetMode_28303988(servantSellConfirmListViewManager, 2, v16);
}


void __fastcall ServantSellConfirmMenu__EndMaxErrorDialog(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v2);
}


void __fastcall ServantSellConfirmMenu__EndOpen(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int kind; // w8
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_40FBC0A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, method);
    sub_B16FFC(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v6);
    sub_B16FFC(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v7);
    byte_40FBC0A = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_ServantSellConfirmListViewItem__TypeInfo,
                                                                                 method,
                                                                                 v2,
                                                                                 v3,
                                                                                 v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      (const MethodInfo_24B7310 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
    if ( !servantSellConfirmListViewManager )
      sub_B170D4();
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ServantSellConfirmListViewManager__SetMode_28303988(servantSellConfirmListViewManager, 2, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowCommandCode(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FBC19 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FBC19 = 1;
  }
  if ( isDecide )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    if ( !servantSellConfirmListViewManager )
      goto LABEL_8;
    ServantSellConfirmListViewManager__ModifyItem(
      servantSellConfirmListViewManager,
      this->fields.commandCodeStatusId,
      method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowServant(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FBC16 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndCloseShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FBC16 = 1;
  }
  if ( isDecide )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    if ( !servantSellConfirmListViewManager )
      goto LABEL_8;
    ServantSellConfirmListViewManager__ModifyItem(
      servantSellConfirmListViewManager,
      this->fields.servantStatusId,
      method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSellConfirmMenu__GetIsOnlyCloseButton(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UICommonButton_o *closeButton; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v11; // x0
  UILabel_o *warningLabel; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v15; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v17; // x0
  struct UICommonButton_o *decideButton; // x0
  struct UICommonButton_o *cancelButton; // x0

  if ( (byte_40FBC02 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_11718, v5);
    sub_B16FFC(&StringLiteral_11719, v6);
    sub_B16FFC(&StringLiteral_11717, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FBC02 = 1;
  }
  if ( kind != 4 && (unsigned int)(kind - 4) <= 9 )
  {
    closeButton = this->fields.closeButton;
    if ( closeButton )
    {
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))closeButton->klass->vtable._14_SetState.method)(
        closeButton,
        0LL,
        0LL,
        closeButton->klass->vtable._15_OnPress.methodPtr);
      closeLabel = this->fields.closeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11718, 0LL);
      if ( closeLabel )
      {
        UILabel__set_text(closeLabel, v11, 0LL);
        warningLabel = this->fields.warningLabel;
        if ( warningLabel )
        {
          UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
          return 1;
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11719, 0LL);
  if ( !decideLabel )
    goto LABEL_20;
  UILabel__set_text(decideLabel, v15, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11717, 0LL);
  if ( !cancelLabel )
    goto LABEL_20;
  UILabel__set_text(cancelLabel, v17, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_20;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    0LL,
    0LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_20;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))cancelButton->klass->vtable._14_SetState.method)(
    cancelButton,
    0LL,
    0LL,
    cancelButton->klass->vtable._15_OnPress.methodPtr);
  return 0;
}


bool __fastcall ServantSellConfirmMenu__GetIsQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o **title,
        System_String_o **message,
        System_String_o **getable,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t mana; // w23
  int32_t getMana; // w24
  BalanceConfig_c *v38; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v40; // x0
  __int64 *v41; // x8
  struct UserGameEntity_o *v42; // x9
  int32_t rarePri; // w23
  int32_t getRarePri; // w24
  System_String_o *v45; // x20
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UserGameEntity_o *v55; // x9
  int32_t qp; // w23
  int32_t QpMax; // w8
  struct UserGameEntity_o *v58; // x9
  int32_t v59; // w23
  int32_t getQP; // w24
  System_String_o *v61; // x23
  _QWORD **v62; // x26
  __int64 v63; // x24
  __int16 v64; // w8
  __int64 v65; // x24
  __int64 v66; // x24
  __int64 v67; // x24
  System_String_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_o *v75; // x0
  struct UserGameEntity_o *v76; // x8
  System_String_o *v77; // x21
  System_String_o *v78; // x0
  BalanceConfig_c *v79; // x8
  Il2CppObject *v80; // x23
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_o *v89; // x19
  Il2CppObject *v90; // x0
  System_String_o *v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_o **v98; // x0
  System_String_o *v99; // x22
  _QWORD **v100; // x24
  __int64 v101; // x23
  __int16 v102; // w8
  __int64 v103; // x23
  __int64 v104; // x23
  __int64 v105; // x23
  System_String_o *v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_o *v113; // x0
  struct UserGameEntity_o *v114; // x8
  System_String_o *v115; // x20
  System_String_o *NumberFormat; // x0
  BalanceConfig_c *v117; // x8
  Il2CppObject *v118; // x21
  Il2CppObject *v119; // x0

  if ( (byte_40FBC10 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_object___, title);
    sub_B16FFC(&BalanceConfig_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_12148, v14);
    sub_B16FFC(&StringLiteral_12149, v15);
    sub_B16FFC(&StringLiteral_12146, v16);
    sub_B16FFC(&StringLiteral_8590, v17);
    sub_B16FFC(&StringLiteral_10975, v18);
    sub_B16FFC(&StringLiteral_12150, v19);
    sub_B16FFC(&StringLiteral_12151, v20);
    sub_B16FFC(&StringLiteral_12147, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    byte_40FBC10 = 1;
  }
  *title = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1,
    (System_String_array **)message,
    (System_String_array **)getable,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *message = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *getable = (System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)getable,
    (System_Int32_array **)StringLiteral_1,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_72;
  mana = userGameEntity->fields.mana;
  getMana = this->fields.getMana;
  v38 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  static_fields = v38->static_fields;
  if ( getMana + mana > static_fields->ManaMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12146, 0LL);
    v41 = &StringLiteral_8590;
LABEL_21:
    v45 = v40;
    v46 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v41, 0LL);
    v47 = System_String__Format(v45, v46, 0LL);
    *message = v47;
    sub_B16F98((BattleServantConfConponent_o *)message, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 0;
  }
  v42 = this->fields.userGameEntity;
  if ( !v42 )
    goto LABEL_72;
  rarePri = v42->fields.rarePri;
  getRarePri = this->fields.getRarePri;
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( getRarePri + rarePri > static_fields->RarePriMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12146, 0LL);
    v41 = &StringLiteral_10975;
    goto LABEL_21;
  }
  v55 = this->fields.userGameEntity;
  if ( !v55 )
    goto LABEL_72;
  qp = v55->fields.qp;
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  QpMax = static_fields->QpMax;
  if ( qp >= QpMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12148, 0LL);
    v100 = (_QWORD **)Method_System_Array_Empty_object___;
    v101 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v102 = *(_WORD *)(v101 + 306);
    if ( (v102 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v102 = *(_WORD *)(v101 + 306);
    }
    if ( (v102 & 0x400) != 0 )
    {
      v103 = *v100[6];
      if ( (*(_BYTE *)(v103 + 306) & 1) == 0 )
        sub_AAFCFC(*v100[6]);
      if ( !*(_DWORD *)(v103 + 224) )
      {
        v104 = *v100[6];
        if ( (*(_BYTE *)(v104 + 306) & 1) == 0 )
          sub_AAFCFC(*v100[6]);
        j_il2cpp_runtime_class_init_0(v104);
      }
    }
    v105 = *v100[6];
    if ( (*(_BYTE *)(v105 + 306) & 1) == 0 )
      sub_AAFCFC(*v100[6]);
    v106 = System_String__Format_43822456(v99, **(System_Object_array ***)(v105 + 184), 0LL);
    *title = v106;
    sub_B16F98((BattleServantConfConponent_o *)title, (System_Int32_array **)v106, v107, v108, v109, v110, v111, v112);
    v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12147, 0LL);
    v114 = this->fields.userGameEntity;
    if ( v114 )
    {
      v115 = v113;
      NumberFormat = LocalizationManager__GetNumberFormat(v114->fields.qp, 0LL);
      v117 = BalanceConfig_TypeInfo;
      v118 = (Il2CppObject *)NumberFormat;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v117 = BalanceConfig_TypeInfo;
      }
      v119 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v117->static_fields->QpMax, 0LL);
      v91 = System_String__Format_43739268(v115, v118, v119, 0LL);
      *message = v91;
      v98 = message;
      goto LABEL_71;
    }
LABEL_72:
    sub_B170D4();
  }
  v58 = this->fields.userGameEntity;
  if ( !v58 )
    goto LABEL_72;
  v59 = v58->fields.qp;
  getQP = this->fields.getQP;
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( getQP + v59 <= QpMax )
    return 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12151, 0LL);
  v62 = (_QWORD **)Method_System_Array_Empty_object___;
  v63 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v64 = *(_WORD *)(v63 + 306);
  if ( (v64 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v64 = *(_WORD *)(v63 + 306);
  }
  if ( (v64 & 0x400) != 0 )
  {
    v65 = *v62[6];
    if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
      sub_AAFCFC(*v62[6]);
    if ( !*(_DWORD *)(v65 + 224) )
    {
      v66 = *v62[6];
      if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
        sub_AAFCFC(*v62[6]);
      j_il2cpp_runtime_class_init_0(v66);
    }
  }
  v67 = *v62[6];
  if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
    sub_AAFCFC(*v62[6]);
  v68 = System_String__Format_43822456(v61, **(System_Object_array ***)(v67 + 184), 0LL);
  *title = v68;
  sub_B16F98((BattleServantConfConponent_o *)title, (System_Int32_array **)v68, v69, v70, v71, v72, v73, v74);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12150, 0LL);
  v76 = this->fields.userGameEntity;
  if ( !v76 )
    goto LABEL_72;
  v77 = v75;
  v78 = LocalizationManager__GetNumberFormat(v76->fields.qp, 0LL);
  v79 = BalanceConfig_TypeInfo;
  v80 = (Il2CppObject *)v78;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v79 = BalanceConfig_TypeInfo;
  }
  v81 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v79->static_fields->QpMax, 0LL);
  v82 = System_String__Format_43739268(v77, v80, v81, 0LL);
  *message = v82;
  sub_B16F98((BattleServantConfConponent_o *)message, (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12149, 0LL);
  v90 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0LL);
  v91 = System_String__Format(v89, v90, 0LL);
  *getable = v91;
  v98 = getable;
LABEL_71:
  sub_B16F98((BattleServantConfConponent_o *)v98, (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
  return 1;
}


bool __fastcall ServantSellConfirmMenu__GetIsShowCommonInfoObj(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSellConfirmMenu__GetMessageText(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        bool isBoth,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v6; // x20
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
  __int64 *v19; // x8
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned int max_length; // w9

  v6 = this;
  if ( (byte_40FBC08 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_11672, v7);
    sub_B16FFC(&StringLiteral_11642, v8);
    sub_B16FFC(&StringLiteral_11671, v9);
    sub_B16FFC(&StringLiteral_11728, v10);
    sub_B16FFC(&StringLiteral_11730, v11);
    sub_B16FFC(&StringLiteral_11729, v12);
    sub_B16FFC(&StringLiteral_11670, v13);
    sub_B16FFC(&StringLiteral_11641, v14);
    sub_B16FFC(&StringLiteral_11619, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    sub_B16FFC(&StringLiteral_11640, v17);
    this = (ServantSellConfirmMenu_o *)sub_B16FFC(&StringLiteral_11620, v18);
    byte_40FBC08 = 1;
  }
  switch ( kind )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      if ( isBoth )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_11620;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_B170D4();
      max_length = servantTypeFlags->max_length;
      if ( !max_length )
        goto LABEL_58;
      if ( servantTypeFlags->m_Items[4] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_11730;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      if ( max_length <= 1 )
        goto LABEL_58;
      if ( servantTypeFlags->m_Items[5] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_11672;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      if ( max_length <= 2 )
      {
LABEL_58:
        sub_B17100(this, *(_QWORD *)&kind, isBoth);
        sub_B170A0();
      }
      if ( servantTypeFlags->m_Items[6] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_11640;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      return (System_String_o *)StringLiteral_1;
    case 5:
    case 6:
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11619;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11728;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11670;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11641;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11729;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11671;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11642;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    default:
      return (System_String_o *)StringLiteral_1;
  }
}


float __fastcall ServantSellConfirmMenu__GetNumLabelWidth(
        ServantSellConfirmMenu_o *this,
        float *qpWidth,
        float *manaWidth,
        float *rarePriWidth,
        const MethodInfo *method)
{
  UILabel_o *QpNumLabel; // x0
  float x; // s1
  float QP_NUM_LABEL_SIZE; // s0
  UILabel_o *v12; // x0
  UILabel_o *ManaNumLabel; // x0
  float v14; // s1
  float PRI_NUM_LABEL_SIZE; // s0
  UILabel_o *v16; // x0
  UILabel_o *RareNumLabel; // x0
  float v18; // s1
  float v19; // s0
  UILabel_o *v20; // x0
  UILabel_o *QpLabel; // x0
  float v22; // s0
  UILabel_o *ManaLabel; // x0
  float v24; // s11
  float v25; // s8
  float v26; // s0
  UILabel_o *RareLabel; // x0
  float v28; // s12
  float v29; // s9
  float v30; // s0
  UILabel_o *RareLabel2; // x0
  float v32; // s13

  QpNumLabel = this->fields.QpNumLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  x = UILabel__get_printedSize(QpNumLabel, 0LL).fields.x;
  QP_NUM_LABEL_SIZE = (float)this->fields.QP_NUM_LABEL_SIZE;
  if ( x <= QP_NUM_LABEL_SIZE )
  {
    v12 = this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_18;
    LODWORD(QP_NUM_LABEL_SIZE) = *(_QWORD *)&UILabel__get_printedSize(v12, 0LL);
  }
  *qpWidth = QP_NUM_LABEL_SIZE;
  ManaNumLabel = this->fields.ManaNumLabel;
  if ( !ManaNumLabel )
    goto LABEL_18;
  v14 = UILabel__get_printedSize(ManaNumLabel, 0LL).fields.x;
  PRI_NUM_LABEL_SIZE = (float)this->fields.PRI_NUM_LABEL_SIZE;
  if ( v14 <= PRI_NUM_LABEL_SIZE )
  {
    v16 = this->fields.ManaNumLabel;
    if ( !v16 )
      goto LABEL_18;
    LODWORD(PRI_NUM_LABEL_SIZE) = *(_QWORD *)&UILabel__get_printedSize(v16, 0LL);
  }
  *manaWidth = PRI_NUM_LABEL_SIZE;
  RareNumLabel = this->fields.RareNumLabel;
  if ( !RareNumLabel )
    goto LABEL_18;
  v18 = UILabel__get_printedSize(RareNumLabel, 0LL).fields.x;
  v19 = (float)this->fields.PRI_NUM_LABEL_SIZE;
  if ( v18 <= v19 )
  {
    v20 = this->fields.RareNumLabel;
    if ( !v20 )
      goto LABEL_18;
    LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize(v20, 0LL);
  }
  *rarePriWidth = v19;
  QpLabel = this->fields.QpLabel;
  if ( !QpLabel )
    goto LABEL_18;
  LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(QpLabel, 0LL);
  ManaLabel = this->fields.ManaLabel;
  if ( !ManaLabel )
    goto LABEL_18;
  v24 = *qpWidth;
  v25 = v22;
  LODWORD(v26) = *(_QWORD *)&UILabel__get_printedSize(ManaLabel, 0LL);
  RareLabel = this->fields.RareLabel;
  if ( !RareLabel
    || (v28 = *manaWidth,
        v29 = v26,
        LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize(RareLabel, 0LL),
        (RareLabel2 = this->fields.RareLabel2) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  v32 = *rarePriWidth;
  return (float)((float)((float)(v28 + (float)((float)(v24 + (float)(v25 + 0.0)) + v29)) + v30) + v32)
       + UILabel__get_printedSize(RareLabel2, 0LL).fields.x;
}


int32_t __fastcall ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
        int32_t tabKind,
        bool isNoServant,
        bool isSellEquipedCommandCodeLastServant,
        const MethodInfo *method)
{
  if ( isSellEquipedCommandCodeLastServant )
    return 4;
  if ( tabKind == 2 )
  {
    if ( isNoServant )
      return 13;
    else
      return 3;
  }
  else if ( tabKind == 1 )
  {
    if ( isNoServant )
      return 12;
    else
      return 1;
  }
  else if ( isNoServant )
  {
    return 11;
  }
  else
  {
    return 0;
  }
}


int32_t __fastcall ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(
        int32_t tabKind,
        bool isError,
        const MethodInfo *method)
{
  int32_t v4; // w8
  int32_t v5; // w9

  if ( tabKind == 1 )
  {
    if ( isError )
      return 9;
    else
      return 6;
  }
  else
  {
    if ( isError )
      v4 = 10;
    else
      v4 = 7;
    if ( isError )
      v5 = 8;
    else
      v5 = 5;
    if ( tabKind == 2 )
      return v4;
    else
      return v5;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSellConfirmMenu__GetWarningText(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        bool isMaterial,
        bool isExceeded,
        bool isEquippedCommandCode,
        const MethodInfo *method)
{
  unsigned int v9; // w23
  ServantSellConfirmMenu_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 *v21; // x8
  struct System_Boolean_array *v22; // x8
  System_String_o *v23; // x19
  System_String_o *v24; // x2
  unsigned int v25; // w8
  struct System_Boolean_array *isRareFlags; // x8
  unsigned int max_length; // w9

  v9 = kind;
  v10 = this;
  if ( (byte_40FBC09 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_11643, v11);
    sub_B16FFC(&StringLiteral_68, v12);
    sub_B16FFC(&StringLiteral_11737, v13);
    sub_B16FFC(&StringLiteral_11621, v14);
    sub_B16FFC(&StringLiteral_11609, v15);
    sub_B16FFC(&StringLiteral_11720, v16);
    sub_B16FFC(&StringLiteral_11673, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    this = (ServantSellConfirmMenu_o *)sub_B16FFC(&StringLiteral_11703, v19);
    byte_40FBC09 = 1;
  }
  if ( v9 >= 5 )
    return (System_String_o *)StringLiteral_1;
  if ( v9 == 2 )
    goto LABEL_6;
  if ( !isEquippedCommandCode )
  {
    if ( isExceeded )
    {
LABEL_6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_11609;
      return LocalizationManager__Get((System_String_o *)*v21, 0LL);
    }
    *(_QWORD *)&kind = v10->fields.isRareFlags;
    if ( isMaterial )
    {
      if ( !*(_QWORD *)&kind )
        goto LABEL_64;
      v25 = *(_DWORD *)(*(_QWORD *)&kind + 24LL);
      if ( !v25 )
        goto LABEL_63;
      if ( !*(_BYTE *)(*(_QWORD *)&kind + 32LL) )
      {
        if ( v25 <= 1 )
          goto LABEL_63;
        if ( !*(_BYTE *)(*(_QWORD *)&kind + 33LL) )
        {
          if ( v25 <= 2 )
            goto LABEL_63;
          if ( !*(_BYTE *)(*(_QWORD *)&kind + 34LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v21 = &StringLiteral_11703;
            return LocalizationManager__Get((System_String_o *)*v21, 0LL);
          }
        }
      }
    }
    this = (ServantSellConfirmMenu_o *)ServantSellConfirmMenu__IsBoth(
                                         this,
                                         *(System_Boolean_array **)&kind,
                                         (const MethodInfo *)isMaterial);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_11621;
      return LocalizationManager__Get((System_String_o *)*v21, 0LL);
    }
    isRareFlags = v10->fields.isRareFlags;
    if ( !isRareFlags )
      goto LABEL_64;
    max_length = isRareFlags->max_length;
    if ( max_length )
    {
      if ( isRareFlags->m_Items[4] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = &StringLiteral_11737;
        return LocalizationManager__Get((System_String_o *)*v21, 0LL);
      }
      if ( max_length > 1 )
      {
        if ( isRareFlags->m_Items[5] )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v21 = &StringLiteral_11673;
          return LocalizationManager__Get((System_String_o *)*v21, 0LL);
        }
        if ( max_length > 2 )
        {
          if ( !isRareFlags->m_Items[6] )
            return (System_String_o *)StringLiteral_1;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v21 = &StringLiteral_11643;
          return LocalizationManager__Get((System_String_o *)*v21, 0LL);
        }
      }
    }
LABEL_63:
    sub_B17100(this, *(_QWORD *)&kind, isMaterial);
    sub_B170A0();
  }
  if ( isMaterial )
    goto LABEL_18;
  v22 = v10->fields.isRareFlags;
  if ( !v22 )
LABEL_64:
    sub_B170D4();
  if ( v22->max_length <= 2 )
    goto LABEL_63;
  if ( !v22->m_Items[6] && !v22->m_Items[5] && !v22->m_Items[4] )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_11720;
    return LocalizationManager__Get((System_String_o *)*v21, 0LL);
  }
LABEL_18:
  v10->fields.isTwoLinesWarning = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11737, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11720, 0LL);
  return System_String__Concat_43746016(v23, (System_String_o *)StringLiteral_68, v24, 0LL);
}


void __fastcall ServantSellConfirmMenu__Init(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu__TextClear(this, method);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall ServantSellConfirmMenu__IsBoth(
        ServantSellConfirmMenu_o *this,
        System_Boolean_array *flags,
        const MethodInfo *method)
{
  __int64 v3; // x10
  __int64 v4; // x8
  int v5; // w9

  if ( !flags )
    sub_B170D4();
  v3 = *(_QWORD *)&flags->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v4 = 0LL;
  v5 = 0;
  while ( !flags->m_Items[v4 + 4] || ++v5 <= 1 )
  {
    if ( ++v4 >= (int)v3 )
      return 0;
  }
  return 1;
}


void __fastcall ServantSellConfirmMenu__ModifyItem(
        ServantSellConfirmMenu_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0

  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  if ( !servantSellConfirmListViewManager )
    sub_B170D4();
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void __fastcall ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FBC12 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FBC12 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.kind == 4 )
    {
      lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_B170D4();
      System_Collections_Generic_List_long___Clear(
        lastSvtCommandCodeList,
        (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v5);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FBC13 & 1) == 0 )
  {
    sub_B16FFC(&Method_ServantSellConfirmMenu_OnClickClose__, method);
    byte_40FBC13 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_ServantSellConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v5);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool IsQpMaxAlert; // w20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x4
  WebViewManager_o *Instance; // x0
  System_String_o *v12; // x20
  CommonUI_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  System_String_o *getable; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-38h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_40FBC0D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FBC0D = 1;
  }
  title = 0LL;
  getable = 0LL;
  message = 0LL;
  if ( this->fields.state == 2 )
  {
    title = (System_String_o *)StringLiteral_1;
    getable = (System_String_o *)StringLiteral_1;
    message = (System_String_o *)StringLiteral_1;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v2);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1, 0LL) || this->fields.isMaxQpChecked )
    {
      ServantSellConfirmMenu__SellServantDecide(this, v9);
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( IsQpMaxAlert )
      {
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v10);
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = message;
        v13 = (CommonUI_o *)Instance;
        v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
        if ( !v13 )
          sub_B170D4();
        CommonUI__OpenNotificationDialog(
          v13,
          (System_String_o *)StringLiteral_1,
          v12,
          v18,
          -1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0LL,
          0LL);
      }
    }
  }
}


void __fastcall ServantSellConfirmMenu__OnEnable(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x0

  if ( (byte_40FBC1B & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15423, v3);
    sub_B16FFC(&StringLiteral_15424, v4);
    byte_40FBC1B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15423, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21111220(v6, (System_String_o *)StringLiteral_15424, 0LL);
}


void __fastcall ServantSellConfirmMenu__OnSelectCommandCodeDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantStatusDialog_EndDelegate_o *v16; // x22

  if ( (byte_40FBC18 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndShowCommandCode__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FBC18 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (CommonUI_o *)Instance,
          v16 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14,
                                                       v15),
          ServantStatusDialog_EndDelegate___ctor(
            v16,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0LL),
          !v11) )
    {
      sub_B170D4();
    }
    CommonUI__OpenServantStatusDialog_18250552(v11, 32, UserCommandCodeEntity_k__BackingField, v16, 0LL, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__OnSelectServantDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  ServantStatusDialog_EndDelegate_o *v16; // x22
  const MethodInfo *v17; // x2

  if ( (byte_40FBC15 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FBC15 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !selectItem )
      goto LABEL_14;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      this->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v8);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = this->fields.servantStatusId;
      v11 = (CommonUI_o *)Instance;
      v16 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v12,
                                                   v13,
                                                   v14,
                                                   v15);
      ServantStatusDialog_EndDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantSellConfirmMenu_EndShowServant__,
        0LL);
      if ( v11 )
      {
        CommonUI__OpenServantStatusDialog_18247068(v11, 29, servantStatusId, v16, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      this->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                       selectItem,
                                       (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(this, selectItem, v17);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__Open(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Int64_array *commandCodeIdList,
        System_Action_int__o *onSellServantConfirm,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UILabel_o *titleLabel; // x23
  System_String_o *v30; // x0
  UnityEngine_Component_o *servantSellConfirmListViewManager; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *listViewBg; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  bool v38; // w24
  _BOOL4 v39; // w23
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x5
  const MethodInfo *v43; // x5
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  System_Action_o *v53; // x20
  bool isNoWarning; // [xsp+0h] [xbp-40h] BYREF
  bool isEquipedCommandCode; // [xsp+4h] [xbp-3Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FBBFF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndOpen__, v13);
    sub_B16FFC(&StringLiteral_11738, v14);
    byte_40FBBFF = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  isNoWarning = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( !this->fields.state )
  {
    UnityEngine_Vector3__get_zero(0LL);
    this->fields.kind = kind;
    this->fields.onSellServantConfirm = onSellServantConfirm;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)onSellServantConfirm,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11738, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, v30, 0LL);
        servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager;
        if ( servantSellConfirmListViewManager )
        {
          v32 = UnityEngine_Component__get_gameObject(servantSellConfirmListViewManager, 0LL);
          if ( v32 )
          {
            UnityEngine_GameObject__SetActive(v32, 0, 0LL);
            listViewBg = this->fields.listViewBg;
            if ( listViewBg )
            {
              UnityEngine_GameObject__SetActive(listViewBg, 0, 0LL);
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v34);
              *(_QWORD *)&this->fields.getQP = 0LL;
              this->fields.getRarePri = 0;
              if ( kind != 4 )
                this->fields.isMaxQpChecked = 0;
              ServantSellConfirmMenu__SetMessageStatusByServant(
                this,
                servantIdList,
                &isMaterial,
                &isExceeded,
                &isEquipedCommandCode,
                v35);
              ServantSellConfirmMenu__SetMessageStatusByCommandCode(this, commandCodeIdList, v36);
              this->fields.isTwoLinesWarning = 0;
              ServantSellConfirmMenu__SetMessageText(this, kind, v37);
              v38 = isExceeded;
              v39 = isEquipedCommandCode;
              ServantSellConfirmMenu__SetWarningText(
                this,
                kind,
                isMaterial,
                isExceeded,
                isEquipedCommandCode,
                &isNoWarning,
                v40);
              ServantSellConfirmMenu__SetInfoLabels(this, kind, isNoWarning, v41);
              ServantSellConfirmMenu__SetNumLabels(
                this,
                kind,
                this->fields.getQP,
                this->fields.getMana,
                this->fields.getRarePri,
                v42);
              ServantSellConfirmMenu__SetListViewManager(this, kind, servantIdList, commandCodeIdList, v38, v43);
              v44 = this->fields.listViewBg;
              if ( v44 )
              {
                v45 = UnityEngine_GameObject__get_gameObject(v44, 0LL);
                GameObjectExtensions__SetLocalPositionY(v45, 90.0, 0LL);
                v46 = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager;
                if ( v46 )
                {
                  v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v47, 140.0, 0LL);
                  if ( v39 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_20;
                  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
                  if ( lastSvtCommandCodeList )
                  {
                    System_Collections_Generic_List_long___Clear(
                      lastSvtCommandCodeList,
                      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
LABEL_20:
                    this->fields.state = 1;
                    v53 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
                    System_Action___ctor(v53, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantSellConfirmMenu__OpenCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  struct System_Collections_Generic_List_long__o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *servantSellConfirmListViewManager; // x0
  UnityEngine_GameObject_o *v30; // x0
  const MethodInfo *v31; // x4
  ServantSellConfirmListViewManager_o *v32; // x0
  UnityEngine_GameObject_o *listViewBg; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v35; // x0
  UILabel_o *lowerLabel; // x20
  System_String_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v45; // x0
  struct UICommonButton_o *v46; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v48; // x0
  UnityEngine_GameObject_o *commonInfoObj; // x0
  UnityEngine_GameObject_o *sellLastSvtWarningInfoObj; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_o *v55; // x20

  if ( (byte_40FBC01 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndOpen__, v9);
    sub_B16FFC(&StringLiteral_3234, v10);
    sub_B16FFC(&StringLiteral_11718, v11);
    sub_B16FFC(&StringLiteral_3235, v12);
    byte_40FBC01 = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_29;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !this->fields.state )
  {
    v14 = System_Linq_Enumerable__Distinct_long_(
            (System_Collections_Generic_IEnumerable_TSource__o *)lastSvtCommandCodeList,
            (const MethodInfo_18D4E34 *)Method_System_Linq_Enumerable_Distinct_long___);
    v15 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                              v14,
                                                              (const MethodInfo_19C7A08 *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v15;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    this->fields.onSellServantConfirm = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager;
      if ( servantSellConfirmListViewManager )
      {
        v30 = UnityEngine_Component__get_gameObject(servantSellConfirmListViewManager, 0LL);
        if ( v30 )
        {
          UnityEngine_GameObject__SetActive(v30, 1, 0LL);
          v32 = this->fields.servantSellConfirmListViewManager;
          if ( v32 )
          {
            ServantSellConfirmListViewManager__CreateCommandCodeResultList(
              v32,
              this->fields.lastSvtCommandCodeList,
              0,
              0,
              v31);
            listViewBg = this->fields.listViewBg;
            if ( listViewBg )
            {
              UnityEngine_GameObject__SetActive(listViewBg, 1, 0LL);
              titleLabel = this->fields.titleLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3235, 0LL);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, v35, 0LL);
                lowerLabel = this->fields.lowerLabel;
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3234, 0LL);
                if ( lowerLabel )
                {
                  UILabel__set_text(lowerLabel, v37, 0LL);
                  v38 = (UnityEngine_Component_o *)this->fields.lowerLabel;
                  if ( v38 )
                  {
                    v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
                    GameObjectExtensions__SetLocalPositionY(v39, -120.0, 0LL);
                    decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
                    if ( decideButton )
                    {
                      v41 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
                      if ( v41 )
                      {
                        UnityEngine_GameObject__SetActive(v41, 0, 0LL);
                        cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
                        if ( cancelButton )
                        {
                          v43 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
                          if ( v43 )
                          {
                            UnityEngine_GameObject__SetActive(v43, 0, 0LL);
                            closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
                            if ( closeButton )
                            {
                              v45 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
                              if ( v45 )
                              {
                                UnityEngine_GameObject__SetActive(v45, 1, 0LL);
                                v46 = this->fields.closeButton;
                                if ( v46 )
                                {
                                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v46->klass->vtable._14_SetState.method)(
                                    v46,
                                    0LL,
                                    0LL,
                                    v46->klass->vtable._15_OnPress.methodPtr);
                                  closeLabel = this->fields.closeLabel;
                                  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11718, 0LL);
                                  if ( closeLabel )
                                  {
                                    UILabel__set_text(closeLabel, v48, 0LL);
                                    commonInfoObj = this->fields.commonInfoObj;
                                    if ( commonInfoObj )
                                    {
                                      UnityEngine_GameObject__SetActive(commonInfoObj, 1, 0LL);
                                      sellLastSvtWarningInfoObj = this->fields.sellLastSvtWarningInfoObj;
                                      if ( sellLastSvtWarningInfoObj )
                                      {
                                        UnityEngine_GameObject__SetActive(sellLastSvtWarningInfoObj, 0, 0LL);
                                        this->fields.state = 1;
                                        v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
                                        System_Action___ctor(
                                          v55,
                                          (Il2CppObject *)this,
                                          Method_ServantSellConfirmMenu_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
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
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
}


void __fastcall ServantSellConfirmMenu__OpenQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *getable,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x23
  System_String_o *v16; // x24
  System_String_o *v17; // x0
  ServantSellMaxAlertDialog_o *servantSellMaxAlertDialog; // x26
  System_String_o *v19; // x25
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x27
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_o *onTransition; // x28
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x19
  const MethodInfo *v35; // [xsp+18h] [xbp-68h]

  if ( (byte_40FBC0E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v9);
    sub_B16FFC(&Method_ServantSellConfirmMenu_SellServantDecide__, v10);
    sub_B16FFC(&Method_ServantSellConfirmMenu_TransitionToCombineScene__, v11);
    sub_B16FFC(&StringLiteral_11733, v12);
    sub_B16FFC(&StringLiteral_11732, v13);
    sub_B16FFC(&StringLiteral_11739, v14);
    byte_40FBC0E = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11733, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11739, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11732, 0LL);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v19 = v17;
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantSellConfirmMenu_SellServantDecide__, 0LL);
  onTransition = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_TransitionToCombineScene__,
    0LL);
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
  if ( !servantSellMaxAlertDialog )
    sub_B170D4();
  ServantSellMaxAlertDialog__Open(
    servantSellMaxAlertDialog,
    title,
    message,
    getable,
    v15,
    v16,
    v19,
    v24,
    onTransition,
    v34,
    0,
    v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v43; // x0
  const MethodInfo *v44; // x5
  UnityEngine_Component_o *servantSellConfirmListViewManager; // x0
  UnityEngine_GameObject_o *v46; // x0
  const MethodInfo *v47; // x4
  ServantSellConfirmListViewManager_o *v48; // x0
  UnityEngine_GameObject_o *listViewBg; // x0
  System_Collections_Generic_List_long__o *UserSvtCommandCodeIdList; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x8
  unsigned __int64 v54; // x25
  int64_t v55; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  int32_t SvtId; // w21
  WebViewManager_o *v60; // x0
  UserServantCommandCodeMaster_o *v61; // x22
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_T__o *v63; // x1
  System_Collections_Generic_List_long__o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  ServantSellConfirmMenu___c_c *v69; // x0
  System_Collections_Generic_List_long__o *v70; // x21
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__62_0; // x22
  Il2CppObject *v73; // x23
  struct ServantSellConfirmMenu___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UILabel_o *upperLabel; // x20
  System_String_o *v82; // x0
  UILabel_o *lowerLabel; // x20
  System_String_o *v84; // x0
  UnityEngine_Component_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_Component_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x2
  UILabel_o *decideLabel; // x20
  System_String_o *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  System_Action_o *v99; // x20
  bool isEquipedCommandCode; // [xsp+4h] [xbp-5Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-58h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FBC00 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__RemoveAll__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_System_Predicate_long___ctor__, v17);
    sub_B16FFC(&System_Predicate_long__TypeInfo, v18);
    sub_B16FFC(&Method_ServantSellConfirmMenu_EndOpen__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__, v21);
    sub_B16FFC(&ServantSellConfirmMenu___c_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_11611, v23);
    sub_B16FFC(&StringLiteral_3253, v24);
    sub_B16FFC(&StringLiteral_11610, v25);
    sub_B16FFC(&StringLiteral_11738, v26);
    byte_40FBC00 = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( kind == 4 && !this->fields.state )
  {
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    System_Collections_Generic_List_long___Clear(
      lastSvtCommandCodeList,
      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    *(_QWORD *)&this->fields.getQP = 0LL;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userGameEntity,
      (System_Int32_array **)SelfUserGame,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11738, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, v43, 0LL);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v44);
    servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager;
    if ( !servantSellConfirmListViewManager )
      goto LABEL_51;
    v46 = UnityEngine_Component__get_gameObject(servantSellConfirmListViewManager, 0LL);
    if ( !v46 )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(v46, 1, 0LL);
    v48 = this->fields.servantSellConfirmListViewManager;
    if ( !v48 )
      goto LABEL_51;
    ServantSellConfirmListViewManager__CreateSortServantList(v48, servantIdList, isExceeded, 1, v47);
    listViewBg = this->fields.listViewBg;
    if ( !listViewBg )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(listViewBg, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    v53 = *(_QWORD *)&servantIdList->max_length;
    if ( (int)v53 >= 1 )
    {
      v54 = 0LL;
      while ( 1 )
      {
        if ( v54 >= (unsigned int)v53 )
        {
          sub_B17100(UserSvtCommandCodeIdList, v51, v52);
          sub_B170A0();
        }
        v55 = servantIdList->m_Items[v54];
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v55,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Entity )
          break;
        SvtId = UserServantEntity__getSvtId(Entity, 0LL);
        v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v60 )
          break;
        v61 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)v60,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v61 )
          break;
        UserSvtCommandCodeIdList = UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(v61, UserId, SvtId, 0LL);
        if ( UserSvtCommandCodeIdList )
        {
          v63 = (System_Collections_Generic_IEnumerable_T__o *)UserSvtCommandCodeIdList;
          v64 = this->fields.lastSvtCommandCodeList;
          if ( !v64 )
            break;
          System_Collections_Generic_List_long___AddRange(
            v64,
            v63,
            (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
          v69 = ServantSellConfirmMenu___c_TypeInfo;
          v70 = this->fields.lastSvtCommandCodeList;
          if ( (BYTE3(ServantSellConfirmMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantSellConfirmMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantSellConfirmMenu___c_TypeInfo);
            v69 = ServantSellConfirmMenu___c_TypeInfo;
          }
          static_fields = v69->static_fields;
          _9__62_0 = static_fields->__9__62_0;
          if ( !_9__62_0 )
          {
            if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v69);
              static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            }
            v73 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Predicate_long__o *)sub_B170CC(System_Predicate_long__TypeInfo, v65, v66, v67, v68);
            System_Predicate_long____ctor(
              _9__62_0,
              v73,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              (const MethodInfo_2B0A168 *)Method_System_Predicate_long___ctor__);
            v74 = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            v74->__9__62_0 = _9__62_0;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v74->__9__62_0,
              (System_Int32_array **)_9__62_0,
              v75,
              v76,
              v77,
              v78,
              v79,
              v80);
          }
          if ( !v70 )
            break;
          UserSvtCommandCodeIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___RemoveAll(
                                                                                  v70,
                                                                                  (System_Predicate_T__o *)_9__62_0,
                                                                                  (const MethodInfo_2F17FC4 *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(v53) = servantIdList->max_length;
        if ( (__int64)++v54 >= (int)v53 )
          goto LABEL_40;
      }
LABEL_51:
      sub_B170D4();
    }
LABEL_40:
    upperLabel = this->fields.upperLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11610, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, v82, 0LL);
    lowerLabel = this->fields.lowerLabel;
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11611, 0LL);
    if ( !lowerLabel )
      goto LABEL_51;
    UILabel__set_text(lowerLabel, v84, 0LL);
    v85 = (UnityEngine_Component_o *)this->fields.lowerLabel;
    if ( !v85 )
      goto LABEL_51;
    v86 = UnityEngine_Component__get_gameObject(v85, 0LL);
    GameObjectExtensions__SetLocalPositionY(v86, -140.0, 0LL);
    v87 = this->fields.listViewBg;
    if ( !v87 )
      goto LABEL_51;
    v88 = UnityEngine_GameObject__get_gameObject(v87, 0LL);
    GameObjectExtensions__SetLocalPositionY(v88, 44.0, 0LL);
    v89 = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v89 )
      goto LABEL_51;
    v90 = UnityEngine_Component__get_gameObject(v89, 0LL);
    GameObjectExtensions__SetLocalPositionY(v90, 94.0, 0LL);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v91);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v92);
    decideLabel = this->fields.decideLabel;
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
    if ( !decideLabel )
      goto LABEL_51;
    UILabel__set_text(decideLabel, v94, 0LL);
    this->fields.state = 1;
    v99 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v95, v96, v97, v98);
    System_Action___ctor(v99, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v99, 0, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x2

  if ( (byte_40FBC11 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBC11 = 1;
  }
  this->fields.isMaxQpChecked = 1;
  this->fields.state = 3;
  if ( this->fields.kind > 3u )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v3 = 0;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v3 = 8;
  }
  SoundManager__playSystemSe(v3, 0LL);
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__SetInfoLabels(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        bool isNoWarning,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *v15; // x0
  UILabel_o *v16; // x0
  UILabel_o *v17; // x0
  UILabel_o *v18; // x21
  System_String_o *v19; // x0
  UILabel_o *v20; // x0
  UILabel_o *v21; // x21
  System_String_o *v22; // x0
  ServantSellConfirmMenu_o *v23; // x0
  const MethodInfo *v24; // x2
  ServantSellConfirmMenu_o *v25; // x0
  const MethodInfo *v26; // x2
  ServantSellConfirmMenu_o *v27; // x0
  const MethodInfo *v28; // x2
  float v29; // s0
  int v30; // s8
  ServantSellConfirmMenu_o *v31; // x0
  const MethodInfo *v32; // x2
  UILabel_o *warningLabel; // x1
  int v34; // s0
  UILabel_o *info1Label; // x0
  UILabel_o *info2Label; // x0
  UILabel_o *info3Label; // x0
  ServantSellConfirmMenu_o *v38; // x0
  const MethodInfo *v39; // x2
  ServantSellConfirmMenu_o *v40; // x0
  const MethodInfo *v41; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w24
  BalanceConfig_c *v44; // x0
  UILabel_o *v45; // x20
  int32_t QpMax; // w25
  __int64 *v47; // x8
  System_String_o *v48; // x0
  struct UserGameEntity_o *v49; // x8
  System_String_o *v50; // x21
  Il2CppObject *NumberFormat; // x0
  System_String_o *v52; // x0
  UILabel_o *v53; // x20
  System_String_o *v54; // x0
  struct UserGameEntity_o *v55; // x8
  System_String_o *v56; // x21
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  UILabel_o *v59; // x20
  System_String_o *v60; // x0
  struct UserGameEntity_o *v61; // x8
  System_String_o *v62; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  UILabel_o *v65; // x0
  __int64 v66; // x8
  float v67; // s9
  ServantSellConfirmMenu_o *v68; // x0
  const MethodInfo *v69; // x2
  ServantSellConfirmMenu_o *v70; // x0
  const MethodInfo *v71; // x2
  ServantSellConfirmMenu_o *v72; // x0
  const MethodInfo *v73; // x2
  struct UserGameEntity_o *v74; // x8
  BalanceConfig_c *v75; // x0
  int32_t v76; // w21
  UILabel_o *v77; // x20
  System_String_o *v78; // x0
  struct UserGameEntity_o *v79; // x8
  System_String_o *v80; // x21
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  struct UserGameEntity_o *v84; // x8
  System_String_o *v85; // x21
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  UILabel_o *v88; // x0

  if ( (byte_40FBC05 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_11726, v8);
    sub_B16FFC(&StringLiteral_11721, v9);
    sub_B16FFC(&StringLiteral_11725, v10);
    sub_B16FFC(&StringLiteral_11723, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    sub_B16FFC(&StringLiteral_11722, v13);
    sub_B16FFC(&StringLiteral_11724, v14);
    byte_40FBC05 = 1;
  }
  if ( (unsigned int)kind <= 0xD )
  {
    if ( ((1 << kind) & 0x3F00) != 0 )
    {
      info1Label = this->fields.info1Label;
      if ( info1Label )
      {
        UILabel__set_text(info1Label, (System_String_o *)StringLiteral_1, 0LL);
        info2Label = this->fields.info2Label;
        if ( info2Label )
        {
          UILabel__set_text(info2Label, (System_String_o *)StringLiteral_1, 0LL);
          info3Label = this->fields.info3Label;
          if ( info3Label )
          {
            UILabel__set_text(info3Label, (System_String_o *)StringLiteral_1, 0LL);
            ServantSellConfirmMenu__SetLabelLocalPositionY(v38, this->fields.info1Label, -50.0, v39);
            ServantSellConfirmMenu__SetLabelLocalPositionY(v40, this->fields.info2Label, -78.0, v41);
            warningLabel = this->fields.info3Label;
            v34 = -1026293760;
            goto LABEL_71;
          }
        }
      }
    }
    else if ( ((1 << kind) & 0x1F) != 0 )
    {
      v15 = this->fields.info1Label;
      if ( v15 )
      {
        UILabel__set_fontSize(v15, this->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
        v16 = this->fields.info2Label;
        if ( v16 )
        {
          UILabel__set_fontSize(v16, this->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
          v17 = this->fields.info3Label;
          if ( v17 )
          {
            UILabel__set_fontSize(v17, this->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
            v18 = this->fields.info1Label;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11725, 0LL);
            if ( v18 )
            {
              UILabel__set_text(v18, v19, 0LL);
              v20 = this->fields.info2Label;
              if ( v20 )
              {
                UILabel__set_text(v20, (System_String_o *)StringLiteral_1, 0LL);
                v21 = this->fields.info3Label;
                v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11726, 0LL);
                if ( v21 )
                {
                  UILabel__set_text(v21, v22, 0LL);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v23, this->fields.info1Label, -92.0, v24);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v25, this->fields.info2Label, -115.0, v26);
                  v29 = -162.0;
                  v30 = -1022689280;
                  if ( isNoWarning )
                    v29 = -139.0;
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v27, this->fields.info3Label, v29, v28);
                  if ( this->fields.isTwoLinesWarning )
                  {
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v31, this->fields.info3Label, -176.0, v32);
                    warningLabel = this->fields.warningLabel;
                    v34 = -1022164992;
LABEL_71:
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v31, warningLabel, *(float *)&v34, v32);
                    return;
                  }
                  warningLabel = this->fields.warningLabel;
LABEL_70:
                  v34 = v30;
                  goto LABEL_71;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      userGameEntity = this->fields.userGameEntity;
      if ( userGameEntity )
      {
        qp = userGameEntity->fields.qp;
        v44 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v44 = BalanceConfig_TypeInfo;
        }
        v45 = this->fields.info1Label;
        QpMax = v44->static_fields->QpMax;
        if ( qp < QpMax )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v47 = &StringLiteral_11722;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v47 = &StringLiteral_11721;
        }
        v48 = LocalizationManager__Get((System_String_o *)*v47, 0LL);
        v49 = this->fields.userGameEntity;
        if ( v49 )
        {
          v50 = v48;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v49->fields.qp, 0LL);
          v52 = System_String__Format(v50, NumberFormat, 0LL);
          if ( v45 )
          {
            UILabel__set_text(v45, v52, 0LL);
            v53 = this->fields.info2Label;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11723, 0LL);
            v55 = this->fields.userGameEntity;
            if ( v55 )
            {
              v56 = v54;
              v57 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v55->fields.mana, 0LL);
              v58 = System_String__Format(v56, v57, 0LL);
              if ( v53 )
              {
                UILabel__set_text(v53, v58, 0LL);
                v59 = this->fields.info3Label;
                v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11724, 0LL);
                v61 = this->fields.userGameEntity;
                if ( v61 )
                {
                  v62 = v60;
                  v63 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v61->fields.rarePri, 0LL);
                  v64 = System_String__Format(v62, v63, 0LL);
                  if ( v59 )
                  {
                    UILabel__set_text(v59, v64, 0LL);
                    v65 = this->fields.info1Label;
                    if ( v65 )
                    {
                      v66 = 96LL;
                      if ( qp >= QpMax )
                        v66 = 92LL;
                      v30 = 1111752704;
                      v67 = qp < QpMax ? 10.0 : 49.0;
                      UILabel__set_fontSize(v65, *(_DWORD *)((char *)&this->klass + v66), 0LL);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v68, this->fields.info1Label, v67, v69);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v70, this->fields.info2Label, -50.0, v71);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v72, this->fields.info3Label, -110.0, v73);
                      v74 = this->fields.userGameEntity;
                      if ( v74 )
                      {
                        v75 = BalanceConfig_TypeInfo;
                        v76 = v74->fields.qp;
                        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v75 = BalanceConfig_TypeInfo;
                        }
                        v77 = this->fields.info1Label;
                        if ( v76 >= v75->static_fields->QpMax )
                        {
                          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_11721, 0LL);
                          v84 = this->fields.userGameEntity;
                          if ( v84 )
                          {
                            v85 = v83;
                            v86 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v84->fields.qp, 0LL);
                            v87 = System_String__Format(v85, v86, 0LL);
                            if ( v77 )
                            {
                              UILabel__set_text(v77, v87, 0LL);
                              v88 = this->fields.info1Label;
                              if ( v88 )
                              {
                                UILabel__set_fontSize(v88, this->fields.ALERT_MESSAGE_LABEL_FONT_SIZE, 0LL);
                                warningLabel = this->fields.info1Label;
                                goto LABEL_70;
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11722, 0LL);
                          v79 = this->fields.userGameEntity;
                          if ( v79 )
                          {
                            v80 = v78;
                            v81 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v79->fields.qp, 0LL);
                            v82 = System_String__Format(v80, v81, 0LL);
                            if ( v77 )
                            {
                              UILabel__set_text(v77, v82, 0LL);
                              warningLabel = this->fields.info1Label;
                              v34 = 10.0;
                              goto LABEL_71;
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
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantSellConfirmMenu__SetLabelLocalPositionY(
        ServantSellConfirmMenu_o *this,
        UILabel_o *label,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float x; // s10
  float z; // s9
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( !label
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        x = localPosition.fields.x,
        z = localPosition.fields.z,
        (v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.x = x;
  UnityEngine_Transform__set_localPosition(v9, v11, 0LL);
}


void __fastcall ServantSellConfirmMenu__SetLastServantWarningMessageLabels(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantSellConfirmMenu__SetListViewManager(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Int64_array *commandCodeIdList,
        bool isExceeded,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantSellConfirmListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x6
  ServantSellConfirmListViewManager_o *v13; // x0
  UnityEngine_GameObject_o *listViewBg; // x0

  if ( (unsigned int)kind <= 4 )
  {
    servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager;
    if ( !servantSellConfirmListViewManager
      || (gameObject = UnityEngine_Component__get_gameObject(servantSellConfirmListViewManager, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (v13 = this->fields.servantSellConfirmListViewManager) == 0LL)
      || (ServantSellConfirmListViewManager__CreateList(v13, 3, servantIdList, commandCodeIdList, isExceeded, 0, v12),
          (listViewBg = this->fields.listViewBg) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(listViewBg, 1, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SetMessageStatusByCommandCode(
        ServantSellConfirmMenu_o *this,
        System_Int64_array *commandCodeIds,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  int32_t getQP; // w28
  UserCommandCodeEntity_o *v14; // x21
  int32_t SellQp; // w0
  int32_t getMana; // w24
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8

  v4 = this;
  if ( (byte_40FBC04 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    this = (ServantSellConfirmMenu_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FBC04 = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_B170D4();
    servantTypeFlags = *(struct System_Boolean_array **)&commandCodeIds->max_length;
    if ( (int)servantTypeFlags >= 1 )
    {
      v8 = 0LL;
      while ( v8 < (unsigned int)servantTypeFlags )
      {
        v9 = commandCodeIds->m_Items[v8];
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_19;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_19;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v9,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        if ( !Entity )
          goto LABEL_19;
        getQP = v4->fields.getQP;
        v14 = (UserCommandCodeEntity_o *)Entity;
        SellQp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)Entity, 0LL);
        getMana = v4->fields.getMana;
        v4->fields.getQP = SellQp + getQP;
        SellMana = UserCommandCodeEntity__GetSellMana(v14, 0LL);
        getRarePri = v4->fields.getRarePri;
        v4->fields.getMana = SellMana + getMana;
        v4->fields.getRarePri = UserCommandCodeEntity__GetSellRarePri(v14, 0LL) + getRarePri;
        this = (ServantSellConfirmMenu_o *)UserCommandCodeEntity__GetRarity(v14, 0LL);
        if ( (int)this >= 3 )
        {
          isRareFlags = v4->fields.isRareFlags;
          if ( !isRareFlags )
            goto LABEL_19;
          if ( isRareFlags->max_length <= 2 )
            break;
          isRareFlags->m_Items[6] = 1;
        }
        servantTypeFlags = v4->fields.servantTypeFlags;
        if ( !servantTypeFlags )
          goto LABEL_19;
        if ( servantTypeFlags->max_length <= 2 )
          break;
        servantTypeFlags->m_Items[6] = 1;
        LODWORD(servantTypeFlags) = commandCodeIds->max_length;
        if ( (__int64)++v8 >= (int)servantTypeFlags )
          return;
      }
      sub_B17100(this, commandCodeIds, method);
      sub_B170A0();
    }
  }
}


void __fastcall ServantSellConfirmMenu__SetMessageStatusByServant(
        ServantSellConfirmMenu_o *this,
        System_Int64_array *servantIds,
        bool *isMaterial,
        bool *isExceeded,
        bool *isEquipedCommandCode,
        const MethodInfo *method)
{
  System_Int64_array *v6; // x25
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Boolean_array *v16; // x0
  struct System_Boolean_array **p_servantTypeFlags; // x27
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  struct System_Boolean_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x26
  WebViewManager_o *v34; // x0
  WarQuestSelectionMaster_o *IsKeepServantEquip; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x8
  unsigned __int64 v39; // x22
  UserServantEntity_o *v40; // x21
  WebViewManager_o *v41; // x0
  WarQuestSelectionMaster_o *v42; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x28
  __int64 v44; // x19
  __int64 v45; // x20
  int32_t v46; // w0
  WarEntity_o *v47; // x0
  int32_t getQP; // w19
  WarEntity_o *v49; // x28
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int32_t Rarity; // w0
  int v57; // w21
  struct System_Boolean_array *v58; // x8
  unsigned int max_length; // w9
  struct System_Boolean_array *v60; // x8
  int64_t UserId; // x0
  struct System_String_o *age; // x20
  __int64 v63; // x25
  int64_t v64; // x19
  int32_t v65; // w0
  bool v66; // w8
  struct System_Boolean_array *v67; // x8
  struct System_Boolean_array **p_isRareFlags; // [xsp+0h] [xbp-90h]
  System_Int64_array *v72; // [xsp+20h] [xbp-70h]
  UserServantCommandCodeMaster_o *v73; // [xsp+28h] [xbp-68h]
  int64_t *m_Items; // [xsp+30h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  v6 = servantIds;
  if ( (byte_40FBC03 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, servantIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FBC03 = 1;
  }
  entity = 0LL;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v16 = (struct System_Boolean_array *)sub_B17014(bool___TypeInfo, 3LL, isMaterial);
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    this->fields.servantTypeFlags = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.servantTypeFlags,
      (System_Int32_array **)v16,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v25 = (struct System_Boolean_array *)sub_B17014(bool___TypeInfo, 3LL, v24);
    this->fields.isRareFlags = v25;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.isRareFlags,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (IsKeepServantEquip = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v34,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v73 = (UserServantCommandCodeMaster_o *)IsKeepServantEquip,
          !v6) )
    {
LABEL_52:
      sub_B170D4();
    }
    v38 = *(_QWORD *)&v6->max_length;
    if ( (int)v38 >= 1 )
    {
      v39 = 0LL;
      m_Items = v6->m_Items;
      v72 = v6;
      while ( v39 < (unsigned int)v38 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_52;
        v40 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                MasterData_WarQuestSelectionMaster,
                m_Items[v39],
                (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v41 )
          goto LABEL_52;
        v42 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v41,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v40 )
          goto LABEL_52;
        v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)v42;
        v45 = *(_QWORD *)&v40->fields.svtId.fields.currentCryptoKey;
        v44 = *(_QWORD *)&v40->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v76.fields.currentCryptoKey = v45;
        *(_QWORD *)&v76.fields.fakeValue = v44;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v76, 0LL);
        if ( !v43 )
          goto LABEL_52;
        v47 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v43,
                v46,
                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v49 = v47;
        SellQp = UserServantEntity__getSellQp(v40, 0LL);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana(v40, 0LL);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri(v40, 0LL);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded(v40, 0LL) )
          *isExceeded = 1;
        Rarity = UserServantEntity__getRarity(v40, 0LL);
        if ( !v49 )
          goto LABEL_52;
        v57 = Rarity;
        IsKeepServantEquip = (WarQuestSelectionMaster_o *)ServantEntity__get_IsKeepServantEquip(
                                                            (ServantEntity_o *)v49,
                                                            0LL);
        v58 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_52;
        max_length = v58->max_length;
        if ( ((unsigned __int8)IsKeepServantEquip & 1) != 0 )
        {
          if ( max_length <= 1 )
            break;
          v58->m_Items[5] = 1;
          if ( v57 >= 4 )
          {
            v60 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_52;
            if ( v60->max_length <= 1 )
              break;
            v60->m_Items[5] = 1;
          }
        }
        else
        {
          if ( !max_length )
            break;
          v58->m_Items[4] = 1;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          v63 = *(_QWORD *)&v49->fields.id;
          age = v49->fields.age;
          v64 = UserId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v77.fields.currentCryptoKey = v63;
          *(_QWORD *)&v77.fields.fakeValue = age;
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v77, 0LL);
          if ( !v73 )
            goto LABEL_52;
          IsKeepServantEquip = (WarQuestSelectionMaster_o *)UserServantCommandCodeMaster__TryGetEntity(
                                                              v73,
                                                              &entity,
                                                              v64,
                                                              v65,
                                                              0LL);
          v6 = v72;
          if ( ((unsigned __int8)IsKeepServantEquip & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_52;
            IsKeepServantEquip = (WarQuestSelectionMaster_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(
                                                                entity,
                                                                0LL);
            if ( ((unsigned __int8)IsKeepServantEquip & 1) != 0 )
            {
              v66 = 1;
            }
            else
            {
              if ( !entity )
                goto LABEL_52;
              IsKeepServantEquip = (WarQuestSelectionMaster_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(
                                                                  entity,
                                                                  0LL);
              v66 = (unsigned __int8)IsKeepServantEquip & 1;
            }
            *isEquipedCommandCode = v66;
          }
          if ( v57 >= 4 )
          {
            IsKeepServantEquip = (WarQuestSelectionMaster_o *)ServantEntity__get_IsCombineMaterial(
                                                                (ServantEntity_o *)v49,
                                                                0LL);
            if ( ((unsigned __int8)IsKeepServantEquip & 1) != 0
              || (IsKeepServantEquip = (WarQuestSelectionMaster_o *)ServantEntity__get_IsStatusUp(
                                                                      (ServantEntity_o *)v49,
                                                                      0LL),
                  ((unsigned __int8)IsKeepServantEquip & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v67 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_52;
              if ( !v67->max_length )
                break;
              v67->m_Items[4] = 1;
            }
          }
        }
        LODWORD(v38) = v6->max_length;
        if ( (__int64)++v39 >= (int)v38 )
          return;
      }
      sub_B17100(IsKeepServantEquip, v36, v37);
      sub_B170A0();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__SetMessageText(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v4; // x19
  UILabel_o *messageLabel; // x21
  bool IsBoth; // w0
  const MethodInfo *v7; // x3
  System_String_o *MessageText; // x0
  ServantSellConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x2
  UILabel_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v14; // x1
  float v15; // s0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w20
  BalanceConfig_c *v18; // x0
  __int64 v19; // x9
  _BOOL4 v20; // w20

  v4 = this;
  if ( (byte_40FBC07 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    byte_40FBC07 = 1;
  }
  messageLabel = v4->fields.messageLabel;
  IsBoth = ServantSellConfirmMenu__IsBoth(this, v4->fields.servantTypeFlags, method);
  MessageText = ServantSellConfirmMenu__GetMessageText(v4, kind, IsBoth, v7);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, MessageText, 0LL);
  if ( (unsigned int)kind <= 0xD )
  {
    if ( ((1 << kind) & 0x3F00) != 0 )
    {
      v14 = v4->fields.messageLabel;
      v15 = 8.0;
    }
    else
    {
      if ( ((1 << kind) & 0x1F) != 0 )
      {
        v11 = v4->fields.messageLabel;
        if ( v11 )
        {
          UILabel__set_fontSize(v11, v4->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
          v12 = (UnityEngine_Component_o *)v4->fields.messageLabel;
          if ( v12 )
          {
            gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, -68.0, 0LL);
            return;
          }
        }
LABEL_21:
        sub_B170D4();
      }
      userGameEntity = v4->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_21;
      qp = userGameEntity->fields.qp;
      v18 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( !v4->fields.messageLabel )
        goto LABEL_21;
      v19 = 92LL;
      if ( qp < v18->static_fields->QpMax )
        v19 = 88LL;
      v20 = qp >= v18->static_fields->QpMax;
      UILabel__set_fontSize(v4->fields.messageLabel, *(_DWORD *)((char *)&v4->klass + v19), 0LL);
      v15 = flt_3137790[v20];
      v14 = v4->fields.messageLabel;
    }
    ServantSellConfirmMenu__SetLabelLocalPositionY(v9, v14, v15, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__SetNumLabels(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        int32_t getQp,
        int32_t getMana,
        int32_t getRarePri,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *QpLabel; // x23
  System_String_o *v18; // x0
  UILabel_o *QpNumLabel; // x23
  System_String_o *v20; // x24
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *v23; // x0
  UILabel_o *ManaLabel; // x22
  System_String_o *v25; // x0
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *v30; // x0
  UILabel_o *RareLabel; // x21
  System_String_o *v32; // x0
  UILabel_o *RareNumLabel; // x21
  System_String_o *v34; // x22
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  UILabel_o *v37; // x0
  UILabel_o *RareLabel2; // x20
  System_String_o *v39; // x0
  const MethodInfo *v40; // x4
  float NumLabelWidth; // s0
  UnityEngine_Component_o *v42; // x0
  float v43; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v45; // x0
  float v46; // s0
  UnityEngine_Component_o *v47; // x0
  float v48; // s8
  UnityEngine_GameObject_o *v49; // x0
  float v50; // s11
  UnityEngine_Component_o *v51; // x0
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  UILabel_o *v54; // x0
  float v55; // s0
  UnityEngine_Component_o *v56; // x0
  float v57; // s8
  UnityEngine_GameObject_o *v58; // x0
  float v59; // s11
  UnityEngine_Component_o *v60; // x0
  float v61; // s8
  UnityEngine_GameObject_o *v62; // x0
  UILabel_o *v63; // x0
  float v64; // s0
  UnityEngine_Component_o *v65; // x0
  float v66; // s8
  UnityEngine_GameObject_o *v67; // x0
  float v68; // s11
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  int32_t v71; // [xsp+8h] [xbp-78h] BYREF
  int32_t v72; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v73; // [xsp+10h] [xbp-70h] BYREF
  float rarePriWidth; // [xsp+14h] [xbp-6Ch] BYREF
  float manaWidth[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_40FBC06 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11731, v12);
    sub_B16FFC(&StringLiteral_11734, v13);
    sub_B16FFC(&StringLiteral_11736, v14);
    sub_B16FFC(&StringLiteral_11727, v15);
    sub_B16FFC(&StringLiteral_11735, v16);
    byte_40FBC06 = 1;
  }
  *(_QWORD *)manaWidth = 0LL;
  rarePriWidth = 0.0;
  if ( (unsigned int)kind <= 4 )
  {
    QpLabel = this->fields.QpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11734, 0LL);
    if ( !QpLabel )
      goto LABEL_29;
    UILabel__set_text(QpLabel, v18, 0LL);
    QpNumLabel = this->fields.QpNumLabel;
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11731, 0LL);
    v73 = getQp;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
    v22 = System_String__Format(v20, v21, 0LL);
    if ( !QpNumLabel )
      goto LABEL_29;
    UILabel__set_text(QpNumLabel, v22, 0LL);
    v23 = this->fields.QpNumLabel;
    if ( !v23 )
      goto LABEL_29;
    UILabel__SetCondensedScale(v23, this->fields.QP_NUM_LABEL_SIZE, 0LL);
    ManaLabel = this->fields.ManaLabel;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11727, 0LL);
    if ( !ManaLabel )
      goto LABEL_29;
    UILabel__set_text(ManaLabel, v25, 0LL);
    ManaNumLabel = this->fields.ManaNumLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11731, 0LL);
    v72 = getMana;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
    v29 = System_String__Format(v27, v28, 0LL);
    if ( !ManaNumLabel )
      goto LABEL_29;
    UILabel__set_text(ManaNumLabel, v29, 0LL);
    v30 = this->fields.ManaNumLabel;
    if ( !v30 )
      goto LABEL_29;
    UILabel__SetCondensedScale(v30, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel = this->fields.RareLabel;
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11735, 0LL);
    if ( !RareLabel )
      goto LABEL_29;
    UILabel__set_text(RareLabel, v32, 0LL);
    RareNumLabel = this->fields.RareNumLabel;
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11731, 0LL);
    v71 = getRarePri;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
    v36 = System_String__Format(v34, v35, 0LL);
    if ( !RareNumLabel )
      goto LABEL_29;
    UILabel__set_text(RareNumLabel, v36, 0LL);
    v37 = this->fields.RareNumLabel;
    if ( !v37 )
      goto LABEL_29;
    UILabel__SetCondensedScale(v37, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel2 = this->fields.RareLabel2;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11736, 0LL);
    if ( !RareLabel2 )
      goto LABEL_29;
    UILabel__set_text(RareLabel2, v39, 0LL);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(this, &manaWidth[1], manaWidth, &rarePriWidth, v40);
    v42 = (UnityEngine_Component_o *)this->fields.QpLabel;
    if ( !v42 )
      goto LABEL_29;
    v43 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, v43, 0LL);
    v45 = this->fields.QpLabel;
    if ( !v45 )
      goto LABEL_29;
    LODWORD(v46) = *(_QWORD *)&UILabel__get_printedSize(v45, 0LL);
    v47 = (UnityEngine_Component_o *)this->fields.QpNumLabel;
    if ( !v47 )
      goto LABEL_29;
    v48 = v43 + v46;
    v49 = UnityEngine_Component__get_gameObject(v47, 0LL);
    v50 = manaWidth[1];
    GameObjectExtensions__SetLocalPositionX(v49, (float)(v48 + -250.0) + (float)(manaWidth[1] * 0.5), 0LL);
    v51 = (UnityEngine_Component_o *)this->fields.ManaLabel;
    if ( !v51 )
      goto LABEL_29;
    v52 = v48 + v50;
    v53 = UnityEngine_Component__get_gameObject(v51, 0LL);
    GameObjectExtensions__SetLocalPositionX(v53, v52, 0LL);
    v54 = this->fields.ManaLabel;
    if ( !v54 )
      goto LABEL_29;
    LODWORD(v55) = *(_QWORD *)&UILabel__get_printedSize(v54, 0LL);
    v56 = (UnityEngine_Component_o *)this->fields.ManaNumLabel;
    if ( !v56 )
      goto LABEL_29;
    v57 = v52 + v55;
    v58 = UnityEngine_Component__get_gameObject(v56, 0LL);
    v59 = manaWidth[0];
    GameObjectExtensions__SetLocalPositionX(v58, (float)(v57 + -250.0) + (float)(manaWidth[0] * 0.5), 0LL);
    v60 = (UnityEngine_Component_o *)this->fields.RareLabel;
    if ( !v60 )
      goto LABEL_29;
    v61 = v57 + v59;
    v62 = UnityEngine_Component__get_gameObject(v60, 0LL);
    GameObjectExtensions__SetLocalPositionX(v62, v61, 0LL);
    v63 = this->fields.RareLabel;
    if ( !v63
      || (LODWORD(v64) = *(_QWORD *)&UILabel__get_printedSize(v63, 0LL),
          (v65 = (UnityEngine_Component_o *)this->fields.RareNumLabel) == 0LL)
      || (v66 = v61 + v64,
          v67 = UnityEngine_Component__get_gameObject(v65, 0LL),
          v68 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v67, (float)(v66 + -250.0) + (float)(rarePriWidth * 0.5), 0LL),
          (v69 = (UnityEngine_Component_o *)this->fields.RareLabel2) == 0LL) )
    {
LABEL_29:
      sub_B170D4();
    }
    v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
    GameObjectExtensions__SetLocalPositionX(v70, v66 + v68, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SetObjectsActive(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  bool IsOnlyCloseButton; // w0
  bool v5; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *commonInfoObj; // x0
  UnityEngine_GameObject_o *sellLastSvtWarningInfoObj; // x0

  IsOnlyCloseButton = ServantSellConfirmMenu__GetIsOnlyCloseButton(this, kind, method);
  if ( !this->fields.decideButton )
    goto LABEL_10;
  v5 = IsOnlyCloseButton;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.decideButton, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, !v5, 0LL);
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_10;
  v8 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( !v8
    || (UnityEngine_GameObject__SetActive(v8, !v5, 0LL),
        (closeButton = (UnityEngine_Component_o *)this->fields.closeButton) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject(closeButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v10, v5, 0LL), (commonInfoObj = this->fields.commonInfoObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(commonInfoObj, 1, 0LL),
        (sellLastSvtWarningInfoObj = this->fields.sellLastSvtWarningInfoObj) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(sellLastSvtWarningInfoObj, 0, 0LL);
}


void __fastcall ServantSellConfirmMenu__SetWarningText(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        bool isMaterial,
        bool isExceeded,
        bool isEquippedCommandCode,
        bool *isNoWarning,
        const MethodInfo *method)
{
  System_String_o *WarningText; // x19
  UILabel_o *warningLabel; // x0

  WarningText = ServantSellConfirmMenu__GetWarningText(
                  this,
                  kind,
                  isMaterial,
                  isExceeded,
                  isEquippedCommandCode,
                  (const MethodInfo *)isNoWarning);
  *isNoWarning = System_String__IsNullOrEmpty(WarningText, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    sub_B170D4();
  UILabel__set_text(warningLabel, WarningText, 0LL);
}


void __fastcall ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *v5; // x0
  UILabel_o *info1Label; // x0
  UILabel_o *v7; // x0
  UILabel_o *info2Label; // x0
  UILabel_o *v9; // x0
  UILabel_o *info3Label; // x0
  UILabel_o *v11; // x0
  UILabel_o *warningLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0
  UILabel_o *QpLabel; // x0
  UILabel_o *QpNumLabel; // x0
  UILabel_o *ManaLabel; // x0
  UILabel_o *ManaNumLabel; // x0
  UILabel_o *RareLabel; // x0
  UILabel_o *RareNumLabel; // x0
  UILabel_o *RareLabel2; // x0
  UILabel_o *upperLabel; // x0
  UILabel_o *lowerLabel; // x0

  if ( (byte_40FBBFE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FBBFE = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_26;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  v5 = this->fields.messageLabel;
  if ( !v5 )
    goto LABEL_26;
  UILabel__set_fontSize(v5, this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE, 0LL);
  info1Label = this->fields.info1Label;
  if ( !info1Label )
    goto LABEL_26;
  UILabel__set_text(info1Label, (System_String_o *)StringLiteral_1, 0LL);
  v7 = this->fields.info1Label;
  if ( !v7 )
    goto LABEL_26;
  UILabel__set_fontSize(v7, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0LL);
  info2Label = this->fields.info2Label;
  if ( !info2Label )
    goto LABEL_26;
  UILabel__set_text(info2Label, (System_String_o *)StringLiteral_1, 0LL);
  v9 = this->fields.info2Label;
  if ( !v9 )
    goto LABEL_26;
  UILabel__set_fontSize(v9, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0LL);
  info3Label = this->fields.info3Label;
  if ( !info3Label )
    goto LABEL_26;
  UILabel__set_text(info3Label, (System_String_o *)StringLiteral_1, 0LL);
  v11 = this->fields.info3Label;
  if ( !v11 )
    goto LABEL_26;
  UILabel__set_fontSize(v11, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_26;
  UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !decideLabel )
    goto LABEL_26;
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelLabel = this->fields.cancelLabel;
  if ( !cancelLabel )
    goto LABEL_26;
  UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !closeLabel )
    goto LABEL_26;
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1, 0LL);
  QpLabel = this->fields.QpLabel;
  if ( !QpLabel )
    goto LABEL_26;
  UILabel__set_text(QpLabel, (System_String_o *)StringLiteral_1, 0LL);
  QpNumLabel = this->fields.QpNumLabel;
  if ( !QpNumLabel )
    goto LABEL_26;
  UILabel__set_text(QpNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  ManaLabel = this->fields.ManaLabel;
  if ( !ManaLabel )
    goto LABEL_26;
  UILabel__set_text(ManaLabel, (System_String_o *)StringLiteral_1, 0LL);
  ManaNumLabel = this->fields.ManaNumLabel;
  if ( !ManaNumLabel )
    goto LABEL_26;
  UILabel__set_text(ManaNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  RareLabel = this->fields.RareLabel;
  if ( !RareLabel )
    goto LABEL_26;
  UILabel__set_text(RareLabel, (System_String_o *)StringLiteral_1, 0LL);
  RareNumLabel = this->fields.RareNumLabel;
  if ( !RareNumLabel
    || (UILabel__set_text(RareNumLabel, (System_String_o *)StringLiteral_1, 0LL),
        (RareLabel2 = this->fields.RareLabel2) == 0LL)
    || (UILabel__set_text(RareLabel2, (System_String_o *)StringLiteral_1, 0LL),
        (upperLabel = this->fields.upperLabel) == 0LL)
    || (UILabel__set_text(upperLabel, (System_String_o *)StringLiteral_1, 0LL),
        (lowerLabel = this->fields.lowerLabel) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  UILabel__set_text(lowerLabel, (System_String_o *)StringLiteral_1, 0LL);
}


void __fastcall ServantSellConfirmMenu__TransitionToCombineScene(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FBC0F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FBC0F = 1;
  }
  this->fields.state = 3;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
}


bool __fastcall ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  if ( (byte_40FBBFC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, method);
    byte_40FBBFC = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B170D4();
  return lastSvtCommandCodeList->fields._size > 0;
}


void __fastcall ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7659 & 1) == 0 )
  {
    sub_B16FFC(&ServantSellConfirmMenu___c_TypeInfo, v1);
    byte_40F7659 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantSellConfirmMenu___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantSellConfirmMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantSellConfirmMenu___c___ctor(ServantSellConfirmMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantSellConfirmMenu___c___OpenSellEquippedLastSvtWarning_b__62_0(
        ServantSellConfirmMenu___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s == 0;
}