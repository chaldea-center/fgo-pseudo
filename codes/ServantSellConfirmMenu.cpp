void __fastcall ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_long__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189C60 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v4);
    byte_4189C60 = 1;
  }
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_31A3FA0;
  v5 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    sub_B2C2F8(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4189C50 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_4189C50 = 1;
  }
  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    this->fields.onSellServantConfirm = 0LL;
    sub_B2C2F8(
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
      (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ServantSellConfirmMenu__ClearCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_4189C41 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4189C41 = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_28878196(this, 0LL, v2);
}


void __fastcall ServantSellConfirmMenu__Close_28878196(
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
  System_Action_o *v11; // x20

  if ( (byte_4189C4F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndClose__, v10);
    byte_4189C4F = 1;
  }
  this->fields.onClose = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0

  if ( (byte_4189C58 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189C58 = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0LL, 0LL) )
  {
    v5 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    ListViewManager__DestroyList(v5, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4189C5E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, method);
    sub_B2C35C(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v3);
    sub_B2C35C(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v4);
    byte_4189C5E = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B2C434(v7, v8);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ServantSellConfirmListViewManager__SetMode_28861976(servantSellConfirmListViewManager, 2, v15);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4189C5B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, method);
    sub_B2C35C(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v3);
    sub_B2C35C(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v4);
    byte_4189C5B = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B2C434(v7, v8);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ServantSellConfirmListViewManager__SetMode_28861976(servantSellConfirmListViewManager, 2, v15);
}


void __fastcall ServantSellConfirmMenu__EndMaxErrorDialog(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v2);
}


void __fastcall ServantSellConfirmMenu__EndOpen(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned int kind; // w8
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_4189C4E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, method);
    sub_B2C35C(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v3);
    sub_B2C35C(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v4);
    byte_4189C4E = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ServantSellConfirmListViewItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
    if ( !servantSellConfirmListViewManager )
      sub_B2C434(v8, v9);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v7;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (System_Int32_array **)v7,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    ServantSellConfirmListViewManager__SetMode_28861976(servantSellConfirmListViewManager, 2, v16);
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
  System_Action_o *v9; // x21

  if ( (byte_4189C5D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4189C5D = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
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
  System_Action_o *v9; // x21

  if ( (byte_4189C5A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndCloseShowServant__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4189C5A = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
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
  System_String_o *closeButton; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20

  if ( (byte_4189C46 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_11768/*"SERVANT_SELL_CLOSE"*/, v5);
    sub_B2C35C(&StringLiteral_11769/*"SERVANT_SELL_DECIDE"*/, v6);
    sub_B2C35C(&StringLiteral_11767/*"SERVANT_SELL_CANCEL"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4189C46 = 1;
  }
  if ( kind != 4 && (unsigned int)(kind - 4) <= 9 )
  {
    closeButton = (System_String_o *)this->fields.closeButton;
    if ( closeButton )
    {
      ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, Il2CppMethodPointer))closeButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
        closeButton,
        0LL,
        0LL,
        closeButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
      closeLabel = this->fields.closeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11768/*"SERVANT_SELL_CLOSE"*/, 0LL);
      if ( closeLabel )
      {
        UILabel__set_text(closeLabel, closeButton, 0LL);
        closeButton = (System_String_o *)this->fields.warningLabel;
        if ( closeButton )
        {
          UILabel__set_text((UILabel_o *)closeButton, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return 1;
        }
      }
    }
LABEL_20:
    sub_B2C434(closeButton, *(_QWORD *)&kind);
  }
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SERVANT_SELL_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_20;
  UILabel__set_text(decideLabel, closeButton, 0LL);
  cancelLabel = this->fields.cancelLabel;
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11767/*"SERVANT_SELL_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_20;
  UILabel__set_text(cancelLabel, closeButton, 0LL);
  closeButton = (System_String_o *)this->fields.decideButton;
  if ( !closeButton )
    goto LABEL_20;
  ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, Il2CppMethodPointer))closeButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    closeButton,
    0LL,
    0LL,
    closeButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
  closeButton = (System_String_o *)this->fields.cancelButton;
  if ( !closeButton )
    goto LABEL_20;
  ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, Il2CppMethodPointer))closeButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    closeButton,
    0LL,
    0LL,
    closeButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
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
  void *v35; // x0
  __int64 v36; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t mana; // w23
  int32_t getMana; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v41; // x0
  __int64 *v42; // x8
  struct UserGameEntity_o *v43; // x9
  int32_t rarePri; // w23
  int32_t getRarePri; // w24
  System_String_o *v46; // x20
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct UserGameEntity_o *v56; // x9
  int32_t qp; // w23
  int32_t QpMax; // w8
  struct UserGameEntity_o *v59; // x9
  int32_t v60; // w23
  int32_t getQP; // w24
  System_String_o *v62; // x23
  _QWORD **v63; // x26
  __int64 v64; // x24
  __int16 v65; // w8
  __int64 v66; // x24
  __int64 v67; // x24
  __int64 v68; // x24
  System_String_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
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
  struct UserGameEntity_o *v113; // x8
  System_String_o *v114; // x20
  System_String_o *NumberFormat; // x0
  BalanceConfig_c *v116; // x8
  Il2CppObject *v117; // x21
  Il2CppObject *v118; // x0

  if ( (byte_4189C54 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_object___, title);
    sub_B2C35C(&BalanceConfig_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_12201/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, v14);
    sub_B2C35C(&StringLiteral_12202/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, v15);
    sub_B2C35C(&StringLiteral_12199/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, v16);
    sub_B2C35C(&StringLiteral_8619/*"MANA_NAME"*/, v17);
    sub_B2C35C(&StringLiteral_11011/*"RARE_PRI_NAME"*/, v18);
    sub_B2C35C(&StringLiteral_12203/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v19);
    sub_B2C35C(&StringLiteral_12204/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, v20);
    sub_B2C35C(&StringLiteral_12200/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_4189C54 = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)message,
    (System_String_array **)getable,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)getable,
    (System_Int32_array **)StringLiteral_1/*""*/,
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
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)v35 + 23);
  if ( getMana + mana > static_fields->ManaMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
    v42 = &StringLiteral_8619/*"MANA_NAME"*/;
LABEL_21:
    v46 = v41;
    v47 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v42, 0LL);
    v48 = System_String__Format(v46, v47, 0LL);
    *message = v48;
    sub_B2C2F8((BattleServantConfConponent_o *)message, (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
    return 0;
  }
  v43 = this->fields.userGameEntity;
  if ( !v43 )
    goto LABEL_72;
  rarePri = v43->fields.rarePri;
  getRarePri = this->fields.getRarePri;
  if ( (*((_BYTE *)v35 + 307) & 4) != 0 && !*((_DWORD *)v35 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( getRarePri + rarePri > static_fields->RarePriMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
    v42 = &StringLiteral_11011/*"RARE_PRI_NAME"*/;
    goto LABEL_21;
  }
  v56 = this->fields.userGameEntity;
  if ( !v56 )
    goto LABEL_72;
  qp = v56->fields.qp;
  if ( (*((_BYTE *)v35 + 307) & 4) != 0 && !*((_DWORD *)v35 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = BalanceConfig_TypeInfo;
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
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12201/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0LL);
    v100 = (_QWORD **)Method_System_Array_Empty_object___;
    v101 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v102 = *(_WORD *)(v101 + 306);
    if ( (v102 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v102 = *(_WORD *)(v101 + 306);
    }
    if ( (v102 & 0x400) != 0 )
    {
      v103 = *v100[6];
      if ( (*(_BYTE *)(v103 + 306) & 1) == 0 )
        sub_AC505C(*v100[6]);
      if ( !*(_DWORD *)(v103 + 224) )
      {
        v104 = *v100[6];
        if ( (*(_BYTE *)(v104 + 306) & 1) == 0 )
          sub_AC505C(*v100[6]);
        j_il2cpp_runtime_class_init_0(v104);
      }
    }
    v105 = *v100[6];
    if ( (*(_BYTE *)(v105 + 306) & 1) == 0 )
      sub_AC505C(*v100[6]);
    v106 = System_String__Format_44384256(v99, **(System_Object_array ***)(v105 + 184), 0LL);
    *title = v106;
    sub_B2C2F8((BattleServantConfConponent_o *)title, (System_Int32_array **)v106, v107, v108, v109, v110, v111, v112);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12200/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    v113 = this->fields.userGameEntity;
    if ( v113 )
    {
      v114 = (System_String_o *)v35;
      NumberFormat = LocalizationManager__GetNumberFormat(v113->fields.qp, 0LL);
      v116 = BalanceConfig_TypeInfo;
      v117 = (Il2CppObject *)NumberFormat;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v116 = BalanceConfig_TypeInfo;
      }
      v118 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v116->static_fields->QpMax, 0LL);
      v91 = System_String__Format_44301068(v114, v117, v118, 0LL);
      *message = v91;
      v98 = message;
      goto LABEL_71;
    }
LABEL_72:
    sub_B2C434(v35, v36);
  }
  v59 = this->fields.userGameEntity;
  if ( !v59 )
    goto LABEL_72;
  v60 = v59->fields.qp;
  getQP = this->fields.getQP;
  if ( (*((_BYTE *)v35 + 307) & 4) != 0 && !*((_DWORD *)v35 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v35);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( getQP + v60 <= QpMax )
    return 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12204/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0LL);
  v63 = (_QWORD **)Method_System_Array_Empty_object___;
  v64 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v65 = *(_WORD *)(v64 + 306);
  if ( (v65 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v65 = *(_WORD *)(v64 + 306);
  }
  if ( (v65 & 0x400) != 0 )
  {
    v66 = *v63[6];
    if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
      sub_AC505C(*v63[6]);
    if ( !*(_DWORD *)(v66 + 224) )
    {
      v67 = *v63[6];
      if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
        sub_AC505C(*v63[6]);
      j_il2cpp_runtime_class_init_0(v67);
    }
  }
  v68 = *v63[6];
  if ( (*(_BYTE *)(v68 + 306) & 1) == 0 )
    sub_AC505C(*v63[6]);
  v69 = System_String__Format_44384256(v62, **(System_Object_array ***)(v68 + 184), 0LL);
  *title = v69;
  sub_B2C2F8((BattleServantConfConponent_o *)title, (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12203/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
  v76 = this->fields.userGameEntity;
  if ( !v76 )
    goto LABEL_72;
  v77 = (System_String_o *)v35;
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
  v82 = System_String__Format_44301068(v77, v80, v81, 0LL);
  *message = v82;
  sub_B2C2F8((BattleServantConfConponent_o *)message, (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12202/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0LL);
  v90 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0LL);
  v91 = System_String__Format(v89, v90, 0LL);
  *getable = v91;
  v98 = getable;
LABEL_71:
  sub_B2C2F8((BattleServantConfConponent_o *)v98, (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
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
  __int64 v23; // x0

  v6 = this;
  if ( (byte_4189C4C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_11711/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/, v7);
    sub_B2C35C(&StringLiteral_11681/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/, v8);
    sub_B2C35C(&StringLiteral_11710/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/, v9);
    sub_B2C35C(&StringLiteral_11778/*"SERVANT_SELL_MESSAGE_ERROR"*/, v10);
    sub_B2C35C(&StringLiteral_11780/*"SERVANT_SELL_MESSAGE_START"*/, v11);
    sub_B2C35C(&StringLiteral_11779/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/, v12);
    sub_B2C35C(&StringLiteral_11709/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/, v13);
    sub_B2C35C(&StringLiteral_11680/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/, v14);
    sub_B2C35C(&StringLiteral_11655/*"SERVANT_ALL_SELL_MESSAGE_END"*/, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    sub_B2C35C(&StringLiteral_11679/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/, v17);
    this = (ServantSellConfirmMenu_o *)sub_B2C35C(&StringLiteral_11656/*"SERVANT_ALL_SELL_MESSAGE_START"*/, v18);
    byte_4189C4C = 1;
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
        v19 = &StringLiteral_11656/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_B2C434(this, *(_QWORD *)&kind);
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
        v19 = &StringLiteral_11780/*"SERVANT_SELL_MESSAGE_START"*/;
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
        v19 = &StringLiteral_11711/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      if ( max_length <= 2 )
      {
LABEL_58:
        v23 = sub_B2C460(this);
        sub_B2C400(v23, 0LL);
      }
      if ( servantTypeFlags->m_Items[6] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v19 = &StringLiteral_11679/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      return (System_String_o *)StringLiteral_1/*""*/;
    case 5:
    case 6:
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11655/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11778/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11709/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11680/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11779/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11710/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_11681/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    default:
      return (System_String_o *)StringLiteral_1/*""*/;
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
  float v12; // s1
  float PRI_NUM_LABEL_SIZE; // s0
  float v14; // s1
  float v15; // s0
  float v16; // s0
  float v17; // s11
  float v18; // s8
  float v19; // s0
  float v20; // s12
  float v21; // s9
  float v22; // s0
  float v23; // s13

  QpNumLabel = this->fields.QpNumLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  x = UILabel__get_printedSize(QpNumLabel, 0LL).fields.x;
  QP_NUM_LABEL_SIZE = (float)this->fields.QP_NUM_LABEL_SIZE;
  if ( x <= QP_NUM_LABEL_SIZE )
  {
    QpNumLabel = this->fields.QpNumLabel;
    if ( !QpNumLabel )
      goto LABEL_18;
    LODWORD(QP_NUM_LABEL_SIZE) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0LL);
  }
  *qpWidth = QP_NUM_LABEL_SIZE;
  QpNumLabel = this->fields.ManaNumLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  v12 = UILabel__get_printedSize(QpNumLabel, 0LL).fields.x;
  PRI_NUM_LABEL_SIZE = (float)this->fields.PRI_NUM_LABEL_SIZE;
  if ( v12 <= PRI_NUM_LABEL_SIZE )
  {
    QpNumLabel = this->fields.ManaNumLabel;
    if ( !QpNumLabel )
      goto LABEL_18;
    LODWORD(PRI_NUM_LABEL_SIZE) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0LL);
  }
  *manaWidth = PRI_NUM_LABEL_SIZE;
  QpNumLabel = this->fields.RareNumLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  v14 = UILabel__get_printedSize(QpNumLabel, 0LL).fields.x;
  v15 = (float)this->fields.PRI_NUM_LABEL_SIZE;
  if ( v14 <= v15 )
  {
    QpNumLabel = this->fields.RareNumLabel;
    if ( !QpNumLabel )
      goto LABEL_18;
    LODWORD(v15) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0LL);
  }
  *rarePriWidth = v15;
  QpNumLabel = this->fields.QpLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  LODWORD(v16) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0LL);
  QpNumLabel = this->fields.ManaLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  v17 = *qpWidth;
  v18 = v16;
  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0LL);
  QpNumLabel = this->fields.RareLabel;
  if ( !QpNumLabel
    || (v20 = *manaWidth,
        v21 = v19,
        LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0LL),
        (QpNumLabel = this->fields.RareLabel2) == 0LL) )
  {
LABEL_18:
    sub_B2C434(QpNumLabel, qpWidth);
  }
  v23 = *rarePriWidth;
  return (float)((float)((float)(v20 + (float)((float)(v17 + (float)(v18 + 0.0)) + v21)) + v22) + v23)
       + UILabel__get_printedSize(QpNumLabel, 0LL).fields.x;
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
  __int64 v28; // x0

  v9 = kind;
  v10 = this;
  if ( (byte_4189C4D & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_11682/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/, v11);
    sub_B2C35C(&StringLiteral_68/*"\r\n"*/, v12);
    sub_B2C35C(&StringLiteral_11787/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_11657/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/, v14);
    sub_B2C35C(&StringLiteral_11645/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/, v15);
    sub_B2C35C(&StringLiteral_11770/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, v16);
    sub_B2C35C(&StringLiteral_11712/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    this = (ServantSellConfirmMenu_o *)sub_B2C35C(&StringLiteral_11742/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/, v19);
    byte_4189C4D = 1;
  }
  if ( v9 >= 5 )
    return (System_String_o *)StringLiteral_1/*""*/;
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
      v21 = &StringLiteral_11645/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
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
            v21 = &StringLiteral_11742/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
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
      v21 = &StringLiteral_11657/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
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
        v21 = &StringLiteral_11787/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
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
          v21 = &StringLiteral_11712/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v21, 0LL);
        }
        if ( max_length > 2 )
        {
          if ( !isRareFlags->m_Items[6] )
            return (System_String_o *)StringLiteral_1/*""*/;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v21 = &StringLiteral_11682/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v21, 0LL);
        }
      }
    }
LABEL_63:
    v28 = sub_B2C460(this);
    sub_B2C400(v28, 0LL);
  }
  if ( isMaterial )
    goto LABEL_18;
  v22 = v10->fields.isRareFlags;
  if ( !v22 )
LABEL_64:
    sub_B2C434(this, *(_QWORD *)&kind);
  if ( v22->max_length <= 2 )
    goto LABEL_63;
  if ( !v22->m_Items[6] && !v22->m_Items[5] && !v22->m_Items[4] )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_11770/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v21, 0LL);
  }
LABEL_18:
  v10->fields.isTwoLinesWarning = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11787/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0LL);
  return System_String__Concat_44307816(v23, (System_String_o *)StringLiteral_68/*"\r\n"*/, v24, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, selectedId);
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void __fastcall ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4189C56 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4189C56 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.kind == 4 )
    {
      lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_B2C434(0LL, method);
      System_Collections_Generic_List_long___Clear(
        lastSvtCommandCodeList,
        (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
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

  if ( (byte_4189C57 & 1) == 0 )
  {
    sub_B2C35C(&Method_ServantSellConfirmMenu_OnClickClose__, method);
    byte_4189C57 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_ServantSellConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  System_Action_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *getable; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-38h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4189C51 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4189C51 = 1;
  }
  title = 0LL;
  getable = 0LL;
  message = 0LL;
  if ( this->fields.state == 2 )
  {
    title = (System_String_o *)StringLiteral_1/*""*/;
    getable = (System_String_o *)StringLiteral_1/*""*/;
    message = (System_String_o *)StringLiteral_1/*""*/;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v2);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1/*""*/, 0LL) || this->fields.isMaxQpChecked )
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = message;
        v13 = (CommonUI_o *)Instance;
        v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
        if ( !v13 )
          sub_B2C434(v15, v16);
        CommonUI__OpenNotificationDialog(
          v13,
          (System_String_o *)StringLiteral_1/*""*/,
          v12,
          v14,
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

  if ( (byte_4189C5F & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15486/*"Window/Objects/CancelButton"*/, v3);
    sub_B2C35C(&StringLiteral_15487/*"Window/Objects/CloseButton"*/, v4);
    byte_4189C5F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_15486/*"Window/Objects/CancelButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21105064(v6, (System_String_o *)StringLiteral_15487/*"Window/Objects/CloseButton"*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__OnSelectCommandCodeDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v12; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4189C5C & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndShowCommandCode__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_4189C5C = 1;
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
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v9),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v12 = (CommonUI_o *)Instance,
          v13 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0LL),
          !v12) )
    {
      sub_B2C434(v8, v9);
    }
    CommonUI__OpenServantStatusDialog_17984316(v12, 32, UserCommandCodeEntity_k__BackingField, v13, 0LL, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__OnSelectServantDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4189C59 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndShowServant__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ServantSellConfirmMenu_o *)sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_4189C59 = 1;
  }
  if ( v4->fields.state == 2 )
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
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v8);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v11 = (CommonUI_o *)Instance;
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        Method_ServantSellConfirmMenu_EndShowServant__,
        0LL);
      if ( v11 )
      {
        CommonUI__OpenServantStatusDialog_17980832(v11, 29, servantStatusId, v12, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B2C434(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(v4, selectItem, v13);
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
  __int64 v22; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UILabel_o *titleLabel; // x23
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  bool v35; // w24
  _BOOL4 v36; // w23
  const MethodInfo *v37; // x6
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x5
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  System_Action_o *v43; // x20
  bool isNoWarning; // [xsp+0h] [xbp-40h] BYREF
  bool isEquipedCommandCode; // [xsp+4h] [xbp-3Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4189C43 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndOpen__, v13);
    sub_B2C35C(&StringLiteral_11788/*"SERVANT_SELL_TITLE"*/, v14);
    byte_4189C43 = 1;
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
    sub_B2C2F8(
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11788/*"SERVANT_SELL_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            gameObject = this->fields.listViewBg;
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v31);
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
                v32);
              ServantSellConfirmMenu__SetMessageStatusByCommandCode(this, commandCodeIdList, v33);
              this->fields.isTwoLinesWarning = 0;
              ServantSellConfirmMenu__SetMessageText(this, kind, v34);
              v35 = isExceeded;
              v36 = isEquipedCommandCode;
              ServantSellConfirmMenu__SetWarningText(
                this,
                kind,
                isMaterial,
                isExceeded,
                isEquipedCommandCode,
                &isNoWarning,
                v37);
              ServantSellConfirmMenu__SetInfoLabels(this, kind, isNoWarning, v38);
              ServantSellConfirmMenu__SetNumLabels(
                this,
                kind,
                this->fields.getQP,
                this->fields.getMana,
                this->fields.getRarePri,
                v39);
              ServantSellConfirmMenu__SetListViewManager(this, kind, servantIdList, commandCodeIdList, v35, v40);
              gameObject = this->fields.listViewBg;
              if ( gameObject )
              {
                v41 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                GameObjectExtensions__SetLocalPositionY(v41, 90.0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
                if ( gameObject )
                {
                  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v42, 140.0, 0LL);
                  if ( v36 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_20;
                  gameObject = (UnityEngine_GameObject_o *)this->fields.lastSvtCommandCodeList;
                  if ( gameObject )
                  {
                    System_Collections_Generic_List_long___Clear(
                      (System_Collections_Generic_List_long__o *)gameObject,
                      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
LABEL_20:
                    this->fields.state = 1;
                    v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                    System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(gameObject, v22);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *lastSvtCommandCodeList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct System_Collections_Generic_List_long__o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x4
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v34; // x20

  if ( (byte_4189C45 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndOpen__, v9);
    sub_B2C35C(&StringLiteral_3243/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v10);
    sub_B2C35C(&StringLiteral_11768/*"SERVANT_SELL_CLOSE"*/, v11);
    sub_B2C35C(&StringLiteral_3244/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v12);
    byte_4189C45 = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_29;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v15 = System_Linq_Enumerable__Distinct_long_(
            lastSvtCommandCodeList,
            (const MethodInfo_1A8D6EC *)Method_System_Linq_Enumerable_Distinct_long___);
    v16 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                              v15,
                                                              (const MethodInfo_1A9DE04 *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v16;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this->fields.onSellServantConfirm = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( lastSvtCommandCodeList )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
      lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.servantSellConfirmListViewManager;
      if ( lastSvtCommandCodeList )
      {
        lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)lastSvtCommandCodeList,
                                                                                        0LL);
        if ( lastSvtCommandCodeList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
          lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.servantSellConfirmListViewManager;
          if ( lastSvtCommandCodeList )
          {
            ServantSellConfirmListViewManager__CreateCommandCodeResultList(
              (ServantSellConfirmListViewManager_o *)lastSvtCommandCodeList,
              this->fields.lastSvtCommandCodeList,
              0,
              0,
              v29);
            lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.listViewBg;
            if ( lastSvtCommandCodeList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
              titleLabel = this->fields.titleLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3244/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0LL);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3243/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
                                                                                                0LL);
                if ( lowerLabel )
                {
                  UILabel__set_text(lowerLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lowerLabel;
                  if ( lastSvtCommandCodeList )
                  {
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)lastSvtCommandCodeList,
                                   0LL);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0LL);
                    lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.decideButton;
                    if ( lastSvtCommandCodeList )
                    {
                      lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0LL);
                      if ( lastSvtCommandCodeList )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 0, 0LL);
                        lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cancelButton;
                        if ( lastSvtCommandCodeList )
                        {
                          lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0LL);
                          if ( lastSvtCommandCodeList )
                          {
                            UnityEngine_GameObject__SetActive(
                              (UnityEngine_GameObject_o *)lastSvtCommandCodeList,
                              0,
                              0LL);
                            lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.closeButton;
                            if ( lastSvtCommandCodeList )
                            {
                              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0LL);
                              if ( lastSvtCommandCodeList )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)lastSvtCommandCodeList,
                                  1,
                                  0LL);
                                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.closeButton;
                                if ( lastSvtCommandCodeList )
                                {
                                  ((void (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD, _QWORD, Il2CppMethodPointer))lastSvtCommandCodeList->klass->vtable[14].method)(
                                    lastSvtCommandCodeList,
                                    0LL,
                                    0LL,
                                    lastSvtCommandCodeList->klass->vtable[15].methodPtr);
                                  closeLabel = this->fields.closeLabel;
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_11768/*"SERVANT_SELL_CLOSE"*/, 0LL);
                                  if ( closeLabel )
                                  {
                                    UILabel__set_text(closeLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                                    lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commonInfoObj;
                                    if ( lastSvtCommandCodeList )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)lastSvtCommandCodeList,
                                        1,
                                        0LL);
                                      lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.sellLastSvtWarningInfoObj;
                                      if ( lastSvtCommandCodeList )
                                      {
                                        UnityEngine_GameObject__SetActive(
                                          (UnityEngine_GameObject_o *)lastSvtCommandCodeList,
                                          0,
                                          0LL);
                                        this->fields.state = 1;
                                        v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v34,
                                          (Il2CppObject *)this,
                                          Method_ServantSellConfirmMenu_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
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
    sub_B2C434(lastSvtCommandCodeList, v13);
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
  System_Action_o *v20; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // [xsp+18h] [xbp-68h]

  if ( (byte_4189C52 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v9);
    sub_B2C35C(&Method_ServantSellConfirmMenu_SellServantDecide__, v10);
    sub_B2C35C(&Method_ServantSellConfirmMenu_TransitionToCombineScene__, v11);
    sub_B2C35C(&StringLiteral_11783/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v12);
    sub_B2C35C(&StringLiteral_11782/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v13);
    sub_B2C35C(&StringLiteral_11789/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v14);
    byte_4189C52 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11783/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11782/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v19 = v17;
  v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantSellConfirmMenu_SellServantDecide__, 0LL);
  onTransition = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_TransitionToCombineScene__,
    0LL);
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
  if ( !servantSellMaxAlertDialog )
    sub_B2C434(v23, v24);
  ServantSellMaxAlertDialog__Open(
    servantSellMaxAlertDialog,
    title,
    message,
    getable,
    v15,
    v16,
    v19,
    v20,
    onTransition,
    v22,
    0,
    v25);
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
  System_Collections_Generic_IEnumerable_T__o *v27; // x1
  int64_t lastSvtCommandCodeList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UILabel_o *titleLabel; // x21
  const MethodInfo *v43; // x5
  const MethodInfo *v44; // x4
  __int64 v45; // x8
  unsigned __int64 v46; // x25
  int64_t v47; // x21
  int32_t SvtId; // w21
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_long__o *v50; // x21
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__62_0; // x22
  Il2CppObject *v53; // x23
  struct ServantSellConfirmMenu___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  UILabel_o *decideLabel; // x20
  System_Action_o *v69; // x20
  __int64 v70; // x0
  bool isEquipedCommandCode; // [xsp+4h] [xbp-5Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-58h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4189C44 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__RemoveAll__, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&Method_System_Predicate_long___ctor__, v17);
    sub_B2C35C(&System_Predicate_long__TypeInfo, v18);
    sub_B2C35C(&Method_ServantSellConfirmMenu_EndOpen__, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__, v21);
    sub_B2C35C(&ServantSellConfirmMenu___c_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_11647/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v23);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_B2C35C(&StringLiteral_11646/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, v25);
    sub_B2C35C(&StringLiteral_11788/*"SERVANT_SELL_TITLE"*/, v26);
    byte_4189C44 = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( kind == 4 && !this->fields.state )
  {
    lastSvtCommandCodeList = (int64_t)this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    System_Collections_Generic_List_long___Clear(
      (System_Collections_Generic_List_long__o *)lastSvtCommandCodeList,
      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    lastSvtCommandCodeList = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
    *(_QWORD *)&this->fields.getQP = 0LL;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    sub_B2C2F8(
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
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11788/*"SERVANT_SELL_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v43);
    lastSvtCommandCodeList = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    lastSvtCommandCodeList = (int64_t)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)lastSvtCommandCodeList,
                                        0LL);
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
    lastSvtCommandCodeList = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    ServantSellConfirmListViewManager__CreateSortServantList(
      (ServantSellConfirmListViewManager_o *)lastSvtCommandCodeList,
      servantIdList,
      isExceeded,
      1,
      v44);
    lastSvtCommandCodeList = (int64_t)this->fields.listViewBg;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    v45 = *(_QWORD *)&servantIdList->max_length;
    if ( (int)v45 >= 1 )
    {
      v46 = 0LL;
      while ( 1 )
      {
        if ( v46 >= (unsigned int)v45 )
        {
          v70 = sub_B2C460(lastSvtCommandCodeList);
          sub_B2C400(v70, 0LL);
        }
        v47 = servantIdList->m_Items[v46];
        lastSvtCommandCodeList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lastSvtCommandCodeList )
          break;
        lastSvtCommandCodeList = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)lastSvtCommandCodeList,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !lastSvtCommandCodeList )
          break;
        lastSvtCommandCodeList = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)lastSvtCommandCodeList,
                                            v47,
                                            (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !lastSvtCommandCodeList )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)lastSvtCommandCodeList, 0LL);
        lastSvtCommandCodeList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lastSvtCommandCodeList )
          break;
        MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)lastSvtCommandCodeList,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        lastSvtCommandCodeList = NetworkManager__get_UserId(0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        lastSvtCommandCodeList = (int64_t)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                            MasterData_WarQuestSelectionMaster,
                                            lastSvtCommandCodeList,
                                            SvtId,
                                            0LL);
        if ( lastSvtCommandCodeList )
        {
          v27 = (System_Collections_Generic_IEnumerable_T__o *)lastSvtCommandCodeList;
          lastSvtCommandCodeList = (int64_t)this->fields.lastSvtCommandCodeList;
          if ( !lastSvtCommandCodeList )
            break;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)lastSvtCommandCodeList,
            v27,
            (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
          lastSvtCommandCodeList = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          v50 = this->fields.lastSvtCommandCodeList;
          if ( (BYTE3(ServantSellConfirmMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantSellConfirmMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantSellConfirmMenu___c_TypeInfo);
            lastSvtCommandCodeList = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          }
          static_fields = *(struct ServantSellConfirmMenu___c_StaticFields **)(lastSvtCommandCodeList + 184);
          _9__62_0 = static_fields->__9__62_0;
          if ( !_9__62_0 )
          {
            if ( (*(_BYTE *)(lastSvtCommandCodeList + 307) & 4) != 0 && !*(_DWORD *)(lastSvtCommandCodeList + 224) )
            {
              j_il2cpp_runtime_class_init_0(lastSvtCommandCodeList);
              static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            }
            v53 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Predicate_long__o *)sub_B2C42C(System_Predicate_long__TypeInfo);
            System_Predicate_long____ctor(
              _9__62_0,
              v53,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              (const MethodInfo_2951B48 *)Method_System_Predicate_long___ctor__);
            v54 = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            v54->__9__62_0 = _9__62_0;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v54->__9__62_0,
              (System_Int32_array **)_9__62_0,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
          }
          if ( !v50 )
            break;
          lastSvtCommandCodeList = System_Collections_Generic_List_long___RemoveAll(
                                     v50,
                                     (System_Predicate_T__o *)_9__62_0,
                                     (const MethodInfo_2F6EACC *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(v45) = servantIdList->max_length;
        if ( (__int64)++v46 >= (int)v45 )
          goto LABEL_40;
      }
LABEL_51:
      sub_B2C434(lastSvtCommandCodeList, v27);
    }
LABEL_40:
    upperLabel = this->fields.upperLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11646/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    lowerLabel = this->fields.lowerLabel;
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11647/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
    if ( !lowerLabel )
      goto LABEL_51;
    UILabel__set_text(lowerLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    lastSvtCommandCodeList = (int64_t)this->fields.lowerLabel;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, -140.0, 0LL);
    lastSvtCommandCodeList = (int64_t)this->fields.listViewBg;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    v64 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 0LL);
    GameObjectExtensions__SetLocalPositionY(v64, 44.0, 0LL);
    lastSvtCommandCodeList = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0LL);
    GameObjectExtensions__SetLocalPositionY(v65, 94.0, 0LL);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v66);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v67);
    decideLabel = this->fields.decideLabel;
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_51;
    UILabel__set_text(decideLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    this->fields.state = 1;
    v69 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v69, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x2

  if ( (byte_4189C55 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189C55 = 1;
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
  ServantSellConfirmMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *info1Label; // x21
  UILabel_o *v16; // x21
  ServantSellConfirmMenu_o *v17; // x0
  const MethodInfo *v18; // x2
  ServantSellConfirmMenu_o *v19; // x0
  const MethodInfo *v20; // x2
  ServantSellConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x2
  float v23; // s0
  int v24; // s8
  ServantSellConfirmMenu_o *v25; // x0
  const MethodInfo *v26; // x2
  UILabel_o *info3Label; // x1
  int v28; // s0
  ServantSellConfirmMenu_o *v29; // x0
  const MethodInfo *v30; // x2
  ServantSellConfirmMenu_o *v31; // x0
  const MethodInfo *v32; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w24
  BalanceConfig_c *v35; // x0
  UILabel_o *v36; // x20
  int32_t QpMax; // w25
  __int64 *v38; // x8
  struct UserGameEntity_o *v39; // x8
  System_String_o *v40; // x21
  Il2CppObject *NumberFormat; // x0
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v43; // x8
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  UILabel_o *v46; // x20
  struct UserGameEntity_o *v47; // x8
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  __int64 v50; // x8
  float v51; // s9
  ServantSellConfirmMenu_o *v52; // x0
  const MethodInfo *v53; // x2
  ServantSellConfirmMenu_o *v54; // x0
  const MethodInfo *v55; // x2
  ServantSellConfirmMenu_o *v56; // x0
  const MethodInfo *v57; // x2
  struct UserGameEntity_o *v58; // x8
  BalanceConfig_c *v59; // x0
  int32_t v60; // w21
  UILabel_o *v61; // x20
  struct UserGameEntity_o *v62; // x8
  System_String_o *v63; // x21
  Il2CppObject *v64; // x0
  struct UserGameEntity_o *v65; // x8
  System_String_o *v66; // x21
  Il2CppObject *v67; // x0

  v6 = this;
  if ( (byte_4189C49 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_11776/*"SERVANT_SELL_INFO7"*/, v8);
    sub_B2C35C(&StringLiteral_11771/*"SERVANT_SELL_INFO2_ALERT"*/, v9);
    sub_B2C35C(&StringLiteral_11775/*"SERVANT_SELL_INFO6"*/, v10);
    sub_B2C35C(&StringLiteral_11773/*"SERVANT_SELL_INFO3"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    sub_B2C35C(&StringLiteral_11772/*"SERVANT_SELL_INFO2_NORMAL"*/, v13);
    this = (ServantSellConfirmMenu_o *)sub_B2C35C(&StringLiteral_11774/*"SERVANT_SELL_INFO5"*/, v14);
    byte_4189C49 = 1;
  }
  if ( (unsigned int)kind <= 0xD )
  {
    if ( ((1 << kind) & 0x3F00) != 0 )
    {
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (ServantSellConfirmMenu_o *)v6->fields.info3Label;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            ServantSellConfirmMenu__SetLabelLocalPositionY(v29, v6->fields.info1Label, -50.0, v30);
            ServantSellConfirmMenu__SetLabelLocalPositionY(v31, v6->fields.info2Label, -78.0, v32);
            info3Label = v6->fields.info3Label;
            v28 = -1026293760;
            goto LABEL_71;
          }
        }
      }
    }
    else if ( ((1 << kind) & 0x1F) != 0 )
    {
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( this )
      {
        UILabel__set_fontSize((UILabel_o *)this, v6->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
        this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
        if ( this )
        {
          UILabel__set_fontSize((UILabel_o *)this, v6->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
          this = (ServantSellConfirmMenu_o *)v6->fields.info3Label;
          if ( this )
          {
            UILabel__set_fontSize((UILabel_o *)this, v6->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
            info1Label = v6->fields.info1Label;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11775/*"SERVANT_SELL_INFO6"*/, 0LL);
            if ( info1Label )
            {
              UILabel__set_text(info1Label, (System_String_o *)this, 0LL);
              this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
              if ( this )
              {
                UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                v16 = v6->fields.info3Label;
                this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SERVANT_SELL_INFO7"*/, 0LL);
                if ( v16 )
                {
                  UILabel__set_text(v16, (System_String_o *)this, 0LL);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v17, v6->fields.info1Label, -92.0, v18);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v19, v6->fields.info2Label, -115.0, v20);
                  v23 = -162.0;
                  v24 = -1022689280;
                  if ( isNoWarning )
                    v23 = -139.0;
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v21, v6->fields.info3Label, v23, v22);
                  if ( v6->fields.isTwoLinesWarning )
                  {
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v25, v6->fields.info3Label, -176.0, v26);
                    info3Label = v6->fields.warningLabel;
                    v28 = -1022164992;
LABEL_71:
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v25, info3Label, *(float *)&v28, v26);
                    return;
                  }
                  info3Label = v6->fields.warningLabel;
LABEL_70:
                  v28 = v24;
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
      userGameEntity = v6->fields.userGameEntity;
      if ( userGameEntity )
      {
        qp = userGameEntity->fields.qp;
        v35 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v35 = BalanceConfig_TypeInfo;
        }
        v36 = v6->fields.info1Label;
        QpMax = v35->static_fields->QpMax;
        if ( qp < QpMax )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v38 = &StringLiteral_11772/*"SERVANT_SELL_INFO2_NORMAL"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v38 = &StringLiteral_11771/*"SERVANT_SELL_INFO2_ALERT"*/;
        }
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v38, 0LL);
        v39 = v6->fields.userGameEntity;
        if ( v39 )
        {
          v40 = (System_String_o *)this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v39->fields.qp, 0LL);
          this = (ServantSellConfirmMenu_o *)System_String__Format(v40, NumberFormat, 0LL);
          if ( v36 )
          {
            UILabel__set_text(v36, (System_String_o *)this, 0LL);
            info2Label = v6->fields.info2Label;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11773/*"SERVANT_SELL_INFO3"*/, 0LL);
            v43 = v6->fields.userGameEntity;
            if ( v43 )
            {
              v44 = (System_String_o *)this;
              v45 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v43->fields.mana, 0LL);
              this = (ServantSellConfirmMenu_o *)System_String__Format(v44, v45, 0LL);
              if ( info2Label )
              {
                UILabel__set_text(info2Label, (System_String_o *)this, 0LL);
                v46 = v6->fields.info3Label;
                this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11774/*"SERVANT_SELL_INFO5"*/, 0LL);
                v47 = v6->fields.userGameEntity;
                if ( v47 )
                {
                  v48 = (System_String_o *)this;
                  v49 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v47->fields.rarePri, 0LL);
                  this = (ServantSellConfirmMenu_o *)System_String__Format(v48, v49, 0LL);
                  if ( v46 )
                  {
                    UILabel__set_text(v46, (System_String_o *)this, 0LL);
                    this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
                    if ( this )
                    {
                      v50 = 96LL;
                      if ( qp >= QpMax )
                        v50 = 92LL;
                      v24 = 1111752704;
                      v51 = qp < QpMax ? 10.0 : 49.0;
                      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v50), 0LL);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v52, v6->fields.info1Label, v51, v53);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v54, v6->fields.info2Label, -50.0, v55);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v56, v6->fields.info3Label, -110.0, v57);
                      v58 = v6->fields.userGameEntity;
                      if ( v58 )
                      {
                        v59 = BalanceConfig_TypeInfo;
                        v60 = v58->fields.qp;
                        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v59 = BalanceConfig_TypeInfo;
                        }
                        v61 = v6->fields.info1Label;
                        if ( v60 >= v59->static_fields->QpMax )
                        {
                          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11771/*"SERVANT_SELL_INFO2_ALERT"*/,
                                                               0LL);
                          v65 = v6->fields.userGameEntity;
                          if ( v65 )
                          {
                            v66 = (System_String_o *)this;
                            v67 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v65->fields.qp, 0LL);
                            this = (ServantSellConfirmMenu_o *)System_String__Format(v66, v67, 0LL);
                            if ( v61 )
                            {
                              UILabel__set_text(v61, (System_String_o *)this, 0LL);
                              this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
                              if ( this )
                              {
                                UILabel__set_fontSize((UILabel_o *)this, v6->fields.ALERT_MESSAGE_LABEL_FONT_SIZE, 0LL);
                                info3Label = v6->fields.info1Label;
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
                          this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11772/*"SERVANT_SELL_INFO2_NORMAL"*/,
                                                               0LL);
                          v62 = v6->fields.userGameEntity;
                          if ( v62 )
                          {
                            v63 = (System_String_o *)this;
                            v64 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v62->fields.qp, 0LL);
                            this = (ServantSellConfirmMenu_o *)System_String__Format(v63, v64, 0LL);
                            if ( v61 )
                            {
                              UILabel__set_text(v61, (System_String_o *)this, 0LL);
                              info3Label = v6->fields.info1Label;
                              v28 = 10.0;
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
    sub_B2C434(this, *(_QWORD *)&kind);
  }
}


void __fastcall ServantSellConfirmMenu__SetLabelLocalPositionY(
        ServantSellConfirmMenu_o *this,
        UILabel_o *label,
        float y,
        const MethodInfo *method)
{
  float x; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !label
    || (this = (ServantSellConfirmMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        x = localPosition.fields.x,
        z = localPosition.fields.z,
        (this = (ServantSellConfirmMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0LL)) == 0LL) )
  {
    sub_B2C434(this, label);
  }
  v9.fields.y = y;
  v9.fields.z = z;
  v9.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall ServantSellConfirmMenu__SetLastServantWarningMessageLabels(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__SetListViewManager(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Int64_array *commandCodeIdList,
        bool isExceeded,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantSellConfirmListViewManager; // x0
  const MethodInfo *v11; // x6

  if ( (unsigned int)kind <= 4 )
  {
    servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager;
    if ( !servantSellConfirmListViewManager
      || (servantSellConfirmListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                           servantSellConfirmListViewManager,
                                                                           0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSellConfirmListViewManager, 1, 0LL),
          (servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager) == 0LL)
      || (ServantSellConfirmListViewManager__CreateList(
            (ServantSellConfirmListViewManager_o *)servantSellConfirmListViewManager,
            3,
            servantIdList,
            commandCodeIdList,
            isExceeded,
            0,
            v11),
          (servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.listViewBg) == 0LL) )
    {
      sub_B2C434(servantSellConfirmListViewManager, *(_QWORD *)&kind);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSellConfirmListViewManager, 1, 0LL);
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
  int32_t getQP; // w28
  UserCommandCodeEntity_o *v11; // x21
  int32_t SellQp; // w0
  int32_t getMana; // w24
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4189C48 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    this = (ServantSellConfirmMenu_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4189C48 = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_B2C434(this, commandCodeIds);
    servantTypeFlags = *(struct System_Boolean_array **)&commandCodeIds->max_length;
    if ( (int)servantTypeFlags >= 1 )
    {
      v8 = 0LL;
      while ( v8 < (unsigned int)servantTypeFlags )
      {
        v9 = commandCodeIds->m_Items[v8];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                             v9,
                                             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_19;
        getQP = v4->fields.getQP;
        v11 = (UserCommandCodeEntity_o *)this;
        SellQp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0LL);
        getMana = v4->fields.getMana;
        v4->fields.getQP = SellQp + getQP;
        SellMana = UserCommandCodeEntity__GetSellMana(v11, 0LL);
        getRarePri = v4->fields.getRarePri;
        v4->fields.getMana = SellMana + getMana;
        v4->fields.getRarePri = UserCommandCodeEntity__GetSellRarePri(v11, 0LL) + getRarePri;
        this = (ServantSellConfirmMenu_o *)UserCommandCodeEntity__GetRarity(v11, 0LL);
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
      v17 = sub_B2C460(this);
      sub_B2C400(v17, 0LL);
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
  struct System_Boolean_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x26
  __int64 v34; // x8
  unsigned __int64 v35; // x22
  UserServantEntity_o *v36; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x28
  __int64 v38; // x19
  __int64 v39; // x20
  WarEntity_o *v40; // x0
  int32_t getQP; // w19
  WarEntity_o *v42; // x28
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v49; // w21
  struct System_Boolean_array *v50; // x8
  unsigned int max_length; // w9
  struct System_Boolean_array *v52; // x8
  int64_t UserId; // x0
  struct System_String_o *age; // x20
  __int64 v55; // x25
  int64_t v56; // x19
  bool v57; // w8
  struct System_Boolean_array *v58; // x8
  __int64 v59; // x0
  struct System_Boolean_array **p_isRareFlags; // [xsp+0h] [xbp-90h]
  System_Int64_array *v64; // [xsp+20h] [xbp-70h]
  UserServantCommandCodeMaster_o *v65; // [xsp+28h] [xbp-68h]
  int64_t *m_Items; // [xsp+30h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v6 = servantIds;
  if ( (byte_4189C47 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, servantIds);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4189C47 = 1;
  }
  entity = 0LL;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v16 = (struct System_Boolean_array *)sub_B2C374(bool___TypeInfo, 3LL);
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    this->fields.servantTypeFlags = v16;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.servantTypeFlags,
      (System_Int32_array **)v16,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = (struct System_Boolean_array *)sub_B2C374(bool___TypeInfo, 3LL);
    this->fields.isRareFlags = v24;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.isRareFlags,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v65 = (UserServantCommandCodeMaster_o *)Instance,
          !v6) )
    {
LABEL_52:
      sub_B2C434(Instance, v32);
    }
    v34 = *(_QWORD *)&v6->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      m_Items = v6->m_Items;
      v64 = v6;
      while ( v35 < (unsigned int)v34 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_52;
        v36 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                MasterData_WarQuestSelectionMaster,
                m_Items[v35],
                (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_52;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v36 )
          goto LABEL_52;
        v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
        v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v68.fields.currentCryptoKey = v39;
        *(_QWORD *)&v68.fields.fakeValue = v38;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v68, 0LL);
        if ( !v37 )
          goto LABEL_52;
        v40 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v37,
                (int32_t)Instance,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v42 = v40;
        SellQp = UserServantEntity__getSellQp(v36, 0LL);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana(v36, 0LL);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri(v36, 0LL);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded(v36, 0LL) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity(v36, 0LL);
        if ( !v42 )
          goto LABEL_52;
        v49 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v42, 0LL);
        v50 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_52;
        max_length = v50->max_length;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( max_length <= 1 )
            break;
          v50->m_Items[5] = 1;
          if ( v49 >= 4 )
          {
            v52 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_52;
            if ( v52->max_length <= 1 )
              break;
            v52->m_Items[5] = 1;
          }
        }
        else
        {
          if ( !max_length )
            break;
          v50->m_Items[4] = 1;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          v55 = *(_QWORD *)&v42->fields.id;
          age = v42->fields.age;
          v56 = UserId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v69.fields.currentCryptoKey = v55;
          *(_QWORD *)&v69.fields.fakeValue = age;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v69, 0LL);
          if ( !v65 )
            goto LABEL_52;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(v65, &entity, v56, (int)Instance, 0LL);
          v6 = v64;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_52;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v57 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_52;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
              v57 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v57;
          }
          if ( v49 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v42, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v42, 0LL),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v58 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_52;
              if ( !v58->max_length )
                break;
              v58->m_Items[4] = 1;
            }
          }
        }
        LODWORD(v34) = v6->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          return;
      }
      v59 = sub_B2C460(Instance);
      sub_B2C400(v59, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v12; // x1
  float v13; // s0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w20
  __int64 v16; // x9
  _BOOL4 v17; // w20

  v4 = this;
  if ( (byte_4189C4B & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    byte_4189C4B = 1;
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
      v12 = v4->fields.messageLabel;
      v13 = 8.0;
    }
    else
    {
      if ( ((1 << kind) & 0x1F) != 0 )
      {
        MessageText = (System_String_o *)v4->fields.messageLabel;
        if ( MessageText )
        {
          UILabel__set_fontSize((UILabel_o *)MessageText, v4->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
          MessageText = (System_String_o *)v4->fields.messageLabel;
          if ( MessageText )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MessageText, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, -68.0, 0LL);
            return;
          }
        }
LABEL_21:
        sub_B2C434(MessageText, v9);
      }
      userGameEntity = v4->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_21;
      qp = userGameEntity->fields.qp;
      MessageText = (System_String_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        MessageText = (System_String_o *)BalanceConfig_TypeInfo;
      }
      if ( !v4->fields.messageLabel )
        goto LABEL_21;
      v16 = 92LL;
      if ( qp < *(_DWORD *)(*(_QWORD *)&MessageText[7].fields + 4LL) )
        v16 = 88LL;
      v17 = qp >= *(_DWORD *)(*(_QWORD *)&MessageText[7].fields + 4LL);
      UILabel__set_fontSize(v4->fields.messageLabel, *(_DWORD *)((char *)&v4->klass + v16), 0LL);
      v13 = flt_31A3F28[v17];
      v12 = v4->fields.messageLabel;
    }
    ServantSellConfirmMenu__SetLabelLocalPositionY((ServantSellConfirmMenu_o *)MessageText, v12, v13, v10);
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
  __int64 v19; // x1
  UILabel_o *QpNumLabel; // x23
  System_String_o *v21; // x24
  Il2CppObject *v22; // x0
  UILabel_o *ManaLabel; // x22
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v25; // x23
  Il2CppObject *v26; // x0
  UILabel_o *RareLabel; // x21
  UILabel_o *RareNumLabel; // x21
  System_String_o *v29; // x22
  Il2CppObject *v30; // x0
  UILabel_o *RareLabel2; // x20
  const MethodInfo *v32; // x4
  float NumLabelWidth; // s0
  float v34; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v36; // s0
  float v37; // s8
  UnityEngine_GameObject_o *v38; // x0
  float v39; // s11
  float v40; // s8
  UnityEngine_GameObject_o *v41; // x0
  float v42; // s0
  float v43; // s8
  UnityEngine_GameObject_o *v44; // x0
  float v45; // s11
  float v46; // s8
  UnityEngine_GameObject_o *v47; // x0
  float v48; // s0
  float v49; // s8
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s11
  UnityEngine_GameObject_o *v52; // x0
  int32_t v53; // [xsp+8h] [xbp-78h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v55; // [xsp+10h] [xbp-70h] BYREF
  float rarePriWidth; // [xsp+14h] [xbp-6Ch] BYREF
  float manaWidth[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4189C4A & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_11781/*"SERVANT_SELL_NUM_TEXT"*/, v12);
    sub_B2C35C(&StringLiteral_11784/*"SERVANT_SELL_QP_TEXT"*/, v13);
    sub_B2C35C(&StringLiteral_11786/*"SERVANT_SELL_RARE_TEXT2"*/, v14);
    sub_B2C35C(&StringLiteral_11777/*"SERVANT_SELL_MANA_TEXT"*/, v15);
    sub_B2C35C(&StringLiteral_11785/*"SERVANT_SELL_RARE_TEXT"*/, v16);
    byte_4189C4A = 1;
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
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11784/*"SERVANT_SELL_QP_TEXT"*/, 0LL);
    if ( !QpLabel )
      goto LABEL_29;
    UILabel__set_text(QpLabel, v18, 0LL);
    QpNumLabel = this->fields.QpNumLabel;
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v55 = getQp;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
    v18 = System_String__Format(v21, v22, 0LL);
    if ( !QpNumLabel )
      goto LABEL_29;
    UILabel__set_text(QpNumLabel, v18, 0LL);
    v18 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v18 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.QP_NUM_LABEL_SIZE, 0LL);
    ManaLabel = this->fields.ManaLabel;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11777/*"SERVANT_SELL_MANA_TEXT"*/, 0LL);
    if ( !ManaLabel )
      goto LABEL_29;
    UILabel__set_text(ManaLabel, v18, 0LL);
    ManaNumLabel = this->fields.ManaNumLabel;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v54 = getMana;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    v18 = System_String__Format(v25, v26, 0LL);
    if ( !ManaNumLabel )
      goto LABEL_29;
    UILabel__set_text(ManaNumLabel, v18, 0LL);
    v18 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v18 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel = this->fields.RareLabel;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11785/*"SERVANT_SELL_RARE_TEXT"*/, 0LL);
    if ( !RareLabel )
      goto LABEL_29;
    UILabel__set_text(RareLabel, v18, 0LL);
    RareNumLabel = this->fields.RareNumLabel;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v53 = getRarePri;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    v18 = System_String__Format(v29, v30, 0LL);
    if ( !RareNumLabel )
      goto LABEL_29;
    UILabel__set_text(RareNumLabel, v18, 0LL);
    v18 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v18 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel2 = this->fields.RareLabel2;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11786/*"SERVANT_SELL_RARE_TEXT2"*/, 0LL);
    if ( !RareLabel2 )
      goto LABEL_29;
    UILabel__set_text(RareLabel2, v18, 0LL);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(this, &manaWidth[1], manaWidth, &rarePriWidth, v32);
    v18 = (System_String_o *)this->fields.QpLabel;
    if ( !v18 )
      goto LABEL_29;
    v34 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, v34, 0LL);
    v18 = (System_String_o *)this->fields.QpLabel;
    if ( !v18 )
      goto LABEL_29;
    LODWORD(v36) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v18, 0LL);
    v18 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v18 )
      goto LABEL_29;
    v37 = v34 + v36;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    v39 = manaWidth[1];
    GameObjectExtensions__SetLocalPositionX(v38, (float)(v37 + -250.0) + (float)(manaWidth[1] * 0.5), 0LL);
    v18 = (System_String_o *)this->fields.ManaLabel;
    if ( !v18 )
      goto LABEL_29;
    v40 = v37 + v39;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(v41, v40, 0LL);
    v18 = (System_String_o *)this->fields.ManaLabel;
    if ( !v18 )
      goto LABEL_29;
    LODWORD(v42) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v18, 0LL);
    v18 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v18 )
      goto LABEL_29;
    v43 = v40 + v42;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    v45 = manaWidth[0];
    GameObjectExtensions__SetLocalPositionX(v44, (float)(v43 + -250.0) + (float)(manaWidth[0] * 0.5), 0LL);
    v18 = (System_String_o *)this->fields.RareLabel;
    if ( !v18 )
      goto LABEL_29;
    v46 = v43 + v45;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(v47, v46, 0LL);
    v18 = (System_String_o *)this->fields.RareLabel;
    if ( !v18
      || (LODWORD(v48) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v18, 0LL),
          (v18 = (System_String_o *)this->fields.RareNumLabel) == 0LL)
      || (v49 = v46 + v48,
          v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL),
          v51 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v50, (float)(v49 + -250.0) + (float)(rarePriWidth * 0.5), 0LL),
          (v18 = (System_String_o *)this->fields.RareLabel2) == 0LL) )
    {
LABEL_29:
      sub_B2C434(v18, v19);
    }
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(v52, v49 + v51, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SetObjectsActive(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsOnlyCloseButton; // x0
  __int64 v5; // x1
  char v6; // w20

  IsOnlyCloseButton = (UnityEngine_GameObject_o *)ServantSellConfirmMenu__GetIsOnlyCloseButton(this, kind, method);
  if ( !this->fields.decideButton )
    goto LABEL_10;
  v6 = (char)IsOnlyCloseButton;
  IsOnlyCloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.decideButton, 0LL);
  if ( !IsOnlyCloseButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(IsOnlyCloseButton, (v6 ^ 1) & 1, 0LL);
  IsOnlyCloseButton = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !IsOnlyCloseButton )
    goto LABEL_10;
  IsOnlyCloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOnlyCloseButton, 0LL);
  if ( !IsOnlyCloseButton
    || (UnityEngine_GameObject__SetActive(IsOnlyCloseButton, (v6 ^ 1) & 1, 0LL),
        (IsOnlyCloseButton = (UnityEngine_GameObject_o *)this->fields.closeButton) == 0LL)
    || (IsOnlyCloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOnlyCloseButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(IsOnlyCloseButton, v6 & 1, 0LL),
        (IsOnlyCloseButton = this->fields.commonInfoObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(IsOnlyCloseButton, 1, 0LL),
        (IsOnlyCloseButton = this->fields.sellLastSvtWarningInfoObj) == 0LL) )
  {
LABEL_10:
    sub_B2C434(IsOnlyCloseButton, v5);
  }
  UnityEngine_GameObject__SetActive(IsOnlyCloseButton, 0, 0LL);
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
  __int64 v10; // x1
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
    sub_B2C434(0LL, v10);
  UILabel__set_text(warningLabel, WarningText, 0LL);
}


void __fastcall ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4189C42 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4189C42 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE, 0LL);
  titleLabel = this->fields.info1Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.info1Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0LL);
  titleLabel = this->fields.info2Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.info2Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0LL);
  titleLabel = this->fields.info3Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.info3Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.QpLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.QpNumLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.ManaLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.ManaNumLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.RareLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.RareNumLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.RareLabel2) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.upperLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.lowerLabel) == 0LL) )
  {
LABEL_26:
    sub_B2C434(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__TransitionToCombineScene(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4189C53 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4189C53 = 1;
  }
  this->fields.state = 3;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
}


bool __fastcall ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v2 = this;
  if ( (byte_4189C40 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, method);
    byte_4189C40 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B2C434(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void __fastcall ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x0

  if ( (byte_4185415 & 1) == 0 )
  {
    sub_B2C35C(&ServantSellConfirmMenu___c_TypeInfo, v1);
    byte_4185415 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantSellConfirmMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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