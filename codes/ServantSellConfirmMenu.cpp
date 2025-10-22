void ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C52ED7 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C52ED7 = 1;
  }
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_C12880;
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  v3 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantSellConfirmMenu__CallOnClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onClose; // x19
  CGThumbnailListItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (CGThumbnailListItem_o *)&this->fields.onClose;
    p_onClose->klass = 0;
    sub_1C3E508(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void ServantSellConfirmMenu__CallOnSellServantConfirm(
        ServantSellConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o *onSellServantConfirm; // x20
  CGThumbnailListItem_o *p_onSellServantConfirm; // x0

  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    p_onSellServantConfirm = (CGThumbnailListItem_o *)&this->fields.onSellServantConfirm;
    p_onSellServantConfirm->klass = 0;
    sub_1C3E508(p_onSellServantConfirm, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onSellServantConfirm->fields.invoke_impl)(
      onSellServantConfirm->fields.method_code,
      (unsigned int)result,
      onSellServantConfirm->fields.method);
  }
}


void ServantSellConfirmMenu__ClearCommandCodeRemoveResult(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_4C52EB9 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4C52EB9 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1C3E7C0(this, method);
  v4 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v4;
}


void ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_35160644(this, 0, v2);
}


void ServantSellConfirmMenu__Close_35160644(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C52EC7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndClose__);
    byte_4C52EC7 = 1;
  }
  this->fields.onClose = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0

  if ( (byte_4C52ECF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52ECF = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0, 0) )
  {
    v5 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    ListViewManager__DestroyList(v5, 0);
  }
}


void ServantSellConfirmMenu__EndClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellConfirmMenu__TextClear(this, method);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  ServantSellConfirmMenu__CallOnClose(this, v3);
}


void ServantSellConfirmMenu__EndCloseShowCommandCode(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C52ED5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_4C52ED5 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v4 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0);
  if ( !servantSellConfirmListViewManager )
    sub_1C3E7C0(v5, v6);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  ServantSellConfirmListViewManager__SetMode_35144484(servantSellConfirmListViewManager, 2, v9);
}


void ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C52ED2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_4C52ED2 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v4 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0);
  if ( !servantSellConfirmListViewManager )
    sub_1C3E7C0(v5, v6);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  ServantSellConfirmListViewManager__SetMode_35144484(servantSellConfirmListViewManager, 2, v9);
}


void ServantSellConfirmMenu__EndMaxErrorDialog(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v2);
}


void ServantSellConfirmMenu__EndOpen(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  unsigned int kind; // w8
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C52EC6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_4C52EC6 = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v5 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ServantSellConfirmListViewItem__TypeInfo);
    System_Action_object____ctor(
      v5,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      0);
    if ( !servantSellConfirmListViewManager )
      sub_1C3E7C0(v6, v7);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
    sub_1C3E508((CGThumbnailListItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem, (int32_t)v5, v8, v9);
    ServantSellConfirmListViewManager__SetMode_35144484(servantSellConfirmListViewManager, 2, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmMenu__EndShowCommandCode(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4C52ED4 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C52ED4 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C3E7C0(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmMenu__EndShowServant(ServantSellConfirmMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4C52ED1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndCloseShowServant__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C52ED1 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C3E7C0(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantSellConfirmMenu__GetIsOnlyCloseButton(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  unsigned int v5; // w22
  System_String_o *decideButton; // x0
  UILabel_o *closeLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21

  if ( (byte_4C52EBE & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11679/*"SERVANT_SELL_CLOSE"*/);
    sub_1C3E564(&StringLiteral_11680/*"SERVANT_SELL_DECIDE"*/);
    sub_1C3E564(&StringLiteral_11678/*"SERVANT_SELL_CANCEL"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52EBE = 1;
  }
  v5 = kind - 4;
  if ( kind == 4 || v5 > 9 )
  {
    decideLabel = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11680/*"SERVANT_SELL_DECIDE"*/, 0);
    if ( decideLabel )
    {
      UILabel__set_text(decideLabel, decideButton, 0);
      cancelLabel = this->fields.cancelLabel;
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11678/*"SERVANT_SELL_CANCEL"*/, 0);
      if ( cancelLabel )
      {
        UILabel__set_text(cancelLabel, decideButton, 0);
        decideButton = (System_String_o *)this->fields.decideButton;
        if ( decideButton )
        {
          ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, const MethodInfo *))decideButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
            decideButton,
            0,
            0,
            decideButton->klass->vtable._14_System_IConvertible_ToInt16.method);
          decideButton = (System_String_o *)this->fields.cancelButton;
          if ( decideButton )
          {
            ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, const MethodInfo *))decideButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
              decideButton,
              0,
              0,
              decideButton->klass->vtable._14_System_IConvertible_ToInt16.method);
            return kind != 4 && v5 < 0xA;
          }
        }
      }
    }
LABEL_19:
    sub_1C3E7C0(decideButton, *(_QWORD *)&kind);
  }
  decideButton = (System_String_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_19;
  ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, const MethodInfo *))decideButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    decideButton,
    0,
    0,
    decideButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11679/*"SERVANT_SELL_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, decideButton, 0);
  decideButton = (System_String_o *)this->fields.warningLabel;
  if ( !decideButton )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)decideButton, (System_String_o *)StringLiteral_1/*""*/, 0);
  return kind != 4 && v5 < 0xA;
}


bool ServantSellConfirmMenu__GetIsQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o **title,
        System_String_o **message,
        System_String_o **getable,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v6; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  void *v13; // x0
  __int64 v14; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t mana; // w23
  int32_t getMana; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v19; // x0
  __int64 *v20; // x8
  struct UserGameEntity_o *v21; // x9
  int32_t rarePri; // w23
  int32_t getRarePri; // w24
  System_String_o *v24; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  bool v29; // w20
  struct UserGameEntity_o *v31; // x9
  int64_t qp; // x23
  int64_t QpMax; // x8
  struct UserGameEntity_o *v34; // x9
  int64_t v35; // x23
  __int64 getQP; // x24
  System_String_o *v37; // x23
  long double v38; // q0
  _QWORD *v39; // x24
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  System_String_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct UserGameEntity_o *v46; // x8
  System_String_o *v47; // x21
  System_String_o *v48; // x0
  BalanceConfig_c *v49; // x8
  Il2CppObject *v50; // x23
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_String_o *v55; // x19
  Il2CppObject *NumberFormat; // x0
  System_String_o *v57; // x22
  long double inited; // q0
  _QWORD *v59; // x23
  __int64 v60; // x8
  __int64 v61; // x0
  __int64 v62; // x0
  System_String_o *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct UserGameEntity_o *v66; // x8
  System_String_o *v67; // x20
  System_String_o *NumberFormatLong; // x0
  BalanceConfig_c *v69; // x8
  Il2CppObject *v70; // x21
  Il2CppObject *v71; // x0

  v6 = (CGThumbnailListItem_o *)message;
  if ( (byte_4C52ECB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_object___);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12178/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/);
    sub_1C3E564(&StringLiteral_12179/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/);
    sub_1C3E564(&StringLiteral_12176/*"SHOP_SELL_SERVANT_MAX_ALERT"*/);
    sub_1C3E564(&StringLiteral_8535/*"MANA_NAME"*/);
    sub_1C3E564(&StringLiteral_10960/*"RARE_PRI_NAME"*/);
    sub_1C3E564(&StringLiteral_12180/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12181/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/);
    sub_1C3E564(&StringLiteral_12177/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52ECB = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)title, StringLiteral_1/*""*/, (int32_t)message, (const MethodInfo *)getable);
  v6->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  sub_1C3E508(v6, StringLiteral_1/*""*/, v9, v10);
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)getable, StringLiteral_1/*""*/, v11, v12);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_57;
  mana = userGameEntity->fields.mana;
  getMana = this->fields.getMana;
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)v13 + 23);
  if ( getMana + mana <= static_fields->ManaMax )
  {
    v21 = this->fields.userGameEntity;
    if ( v21 )
    {
      rarePri = v21->fields.rarePri;
      getRarePri = this->fields.getRarePri;
      if ( !*((_DWORD *)v13 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BalanceConfig_TypeInfo;
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      if ( getRarePri + rarePri > static_fields->RarePriMax )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0);
        v20 = &StringLiteral_10960/*"RARE_PRI_NAME"*/;
        goto LABEL_17;
      }
      v31 = this->fields.userGameEntity;
      if ( v31 )
      {
        qp = v31->fields.qp;
        if ( !*((_DWORD *)v13 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = BalanceConfig_TypeInfo;
          static_fields = BalanceConfig_TypeInfo->static_fields;
        }
        QpMax = static_fields->QpMax;
        if ( qp >= QpMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12178/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0);
          v59 = Method_System_Array_Empty_object___;
          v60 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
          if ( !v60 )
          {
            sub_1C8ECD4(Method_System_Array_Empty_object___);
            v60 = v59[7];
          }
          v61 = *(_QWORD *)(v60 + 16);
          if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
            v61 = sub_1C8EC78(inited);
          if ( !*(_DWORD *)(v61 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v61);
          v62 = *(_QWORD *)(v59[7] + 16LL);
          if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
            v62 = sub_1C8EC78(inited);
          v63 = System_String__Format_63677896(v57, **(System_Object_array ***)(v62 + 184), 0);
          *title = v63;
          sub_1C3E508((CGThumbnailListItem_o *)title, (int32_t)v63, v64, v65);
          v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12177/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0);
          v66 = this->fields.userGameEntity;
          if ( v66 )
          {
            v67 = (System_String_o *)v13;
            NumberFormatLong = LocalizationManager__GetNumberFormatLong(v66->fields.qp, 0);
            v69 = BalanceConfig_TypeInfo;
            v70 = (Il2CppObject *)NumberFormatLong;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v69 = BalanceConfig_TypeInfo;
            }
            v71 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v69->static_fields->QpMax, 0);
            v26 = System_String__Format_63677760(v67, v70, v71, 0);
            v29 = 1;
            goto LABEL_18;
          }
        }
        else
        {
          v34 = this->fields.userGameEntity;
          if ( v34 )
          {
            v35 = v34->fields.qp;
            getQP = this->fields.getQP;
            if ( !*((_DWORD *)v13 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v13);
              QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
            }
            if ( v35 + getQP <= QpMax )
              return 0;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0);
            v39 = Method_System_Array_Empty_object___;
            v40 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
            if ( !v40 )
            {
              sub_1C8ECD4(Method_System_Array_Empty_object___);
              v40 = v39[7];
            }
            v41 = *(_QWORD *)(v40 + 16);
            if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
              v41 = sub_1C8EC78(v38);
            if ( !*(_DWORD *)(v41 + 224) )
              v38 = j_il2cpp_runtime_class_init_0(v41);
            v42 = *(_QWORD *)(v39[7] + 16LL);
            if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
              v42 = sub_1C8EC78(v38);
            v43 = System_String__Format_63677896(v37, **(System_Object_array ***)(v42 + 184), 0);
            *title = v43;
            sub_1C3E508((CGThumbnailListItem_o *)title, (int32_t)v43, v44, v45);
            v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0);
            v46 = this->fields.userGameEntity;
            if ( v46 )
            {
              v47 = (System_String_o *)v13;
              v48 = LocalizationManager__GetNumberFormatLong(v46->fields.qp, 0);
              v49 = BalanceConfig_TypeInfo;
              v50 = (Il2CppObject *)v48;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v49 = BalanceConfig_TypeInfo;
              }
              v51 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v49->static_fields->QpMax, 0);
              v52 = System_String__Format_63677760(v47, v50, v51, 0);
              v6->klass = (CGThumbnailListItem_c *)v52;
              sub_1C3E508(v6, (int32_t)v52, v53, v54);
              v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12179/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0);
              NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0);
              v26 = System_String__Format(v55, NumberFormat, 0);
              v29 = 1;
              v6 = (CGThumbnailListItem_o *)getable;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_57:
    sub_1C3E7C0(v13, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0);
  v20 = &StringLiteral_8535/*"MANA_NAME"*/;
LABEL_17:
  v24 = v19;
  v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v20, 0);
  v26 = System_String__Format(v24, v25, 0);
  v29 = 0;
LABEL_18:
  v6->klass = (CGThumbnailListItem_c *)v26;
  sub_1C3E508(v6, (int32_t)v26, v27, v28);
  return v29;
}


bool ServantSellConfirmMenu__GetIsShowCommonInfoObj(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantSellConfirmMenu__GetMessageText(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        bool isBoth,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v6; // x20
  __int64 *v7; // x8
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned int max_length; // w9

  v6 = this;
  if ( (byte_4C52EC4 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11631/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/);
    sub_1C3E564(&StringLiteral_11601/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/);
    sub_1C3E564(&StringLiteral_11630/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/);
    sub_1C3E564(&StringLiteral_11689/*"SERVANT_SELL_MESSAGE_ERROR"*/);
    sub_1C3E564(&StringLiteral_11691/*"SERVANT_SELL_MESSAGE_START"*/);
    sub_1C3E564(&StringLiteral_11690/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/);
    sub_1C3E564(&StringLiteral_11629/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/);
    sub_1C3E564(&StringLiteral_11600/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/);
    sub_1C3E564(&StringLiteral_11571/*"SERVANT_ALL_SELL_MESSAGE_END"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_11599/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/);
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&StringLiteral_11572/*"SERVANT_ALL_SELL_MESSAGE_START"*/);
    byte_4C52EC4 = 1;
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_11572/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_1C3E7C0(this, *(_QWORD *)&kind);
      max_length = servantTypeFlags->max_length;
      if ( !max_length )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[0] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_11691/*"SERVANT_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
      }
      if ( max_length <= 1 )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[1] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_11631/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
      }
      if ( max_length <= 2 )
LABEL_47:
        sub_1C3E7C8(this, *(_QWORD *)&kind);
      if ( servantTypeFlags->m_Items[2] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_11599/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
      }
      return (System_String_o *)StringLiteral_1/*""*/;
    case 5:
    case 6:
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11571/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11689/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11629/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11600/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11690/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11630/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11601/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    default:
      return (System_String_o *)StringLiteral_1/*""*/;
  }
}


float ServantSellConfirmMenu__GetNumLabelWidth(
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
  x = UILabel__get_printedSize(QpNumLabel, 0).fields.x;
  QP_NUM_LABEL_SIZE = (float)this->fields.QP_NUM_LABEL_SIZE;
  if ( x <= QP_NUM_LABEL_SIZE )
  {
    QpNumLabel = this->fields.QpNumLabel;
    if ( !QpNumLabel )
      goto LABEL_18;
    LODWORD(QP_NUM_LABEL_SIZE) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0);
  }
  *qpWidth = QP_NUM_LABEL_SIZE;
  QpNumLabel = this->fields.ManaNumLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  v12 = UILabel__get_printedSize(QpNumLabel, 0).fields.x;
  PRI_NUM_LABEL_SIZE = (float)this->fields.PRI_NUM_LABEL_SIZE;
  if ( v12 <= PRI_NUM_LABEL_SIZE )
  {
    QpNumLabel = this->fields.ManaNumLabel;
    if ( !QpNumLabel )
      goto LABEL_18;
    LODWORD(PRI_NUM_LABEL_SIZE) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0);
  }
  *manaWidth = PRI_NUM_LABEL_SIZE;
  QpNumLabel = this->fields.RareNumLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  v14 = UILabel__get_printedSize(QpNumLabel, 0).fields.x;
  v15 = (float)this->fields.PRI_NUM_LABEL_SIZE;
  if ( v14 <= v15 )
  {
    QpNumLabel = this->fields.RareNumLabel;
    if ( !QpNumLabel )
      goto LABEL_18;
    LODWORD(v15) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0);
  }
  *rarePriWidth = v15;
  QpNumLabel = this->fields.QpLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  LODWORD(v16) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0);
  QpNumLabel = this->fields.ManaLabel;
  if ( !QpNumLabel )
    goto LABEL_18;
  v17 = *qpWidth;
  v18 = v16;
  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0);
  QpNumLabel = this->fields.RareLabel;
  if ( !QpNumLabel
    || (v20 = *manaWidth,
        v21 = v19,
        LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(QpNumLabel, 0),
        (QpNumLabel = this->fields.RareLabel2) == 0) )
  {
LABEL_18:
    sub_1C3E7C0(QpNumLabel, qpWidth);
  }
  v23 = *rarePriWidth;
  return (float)((float)((float)(v20 + (float)((float)(v17 + (float)(v18 + 0.0)) + v21)) + v22) + v23)
       + UILabel__get_printedSize(QpNumLabel, 0).fields.x;
}


int32_t ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
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


int32_t ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(
        int32_t tabKind,
        bool isError,
        const MethodInfo *method)
{
  bool v3; // zf
  int32_t v4; // w8
  int32_t v5; // w9

  if ( tabKind == 2 )
  {
    v3 = !isError;
    v4 = 7;
    v5 = 10;
  }
  else
  {
    v3 = !isError;
    if ( tabKind == 1 )
    {
      v4 = 6;
      v5 = 9;
    }
    else
    {
      v4 = 5;
      v5 = 8;
    }
  }
  if ( v3 )
    return v4;
  else
    return v5;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantSellConfirmMenu__GetWarningText(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        bool isMaterial,
        bool isExceeded,
        bool isEquippedCommandCode,
        const MethodInfo *method)
{
  unsigned int v9; // w23
  ServantSellConfirmMenu_o *v10; // x19
  __int64 *v12; // x8
  struct System_Boolean_array *v13; // x8
  System_String_o *v14; // x19
  System_String_o *v15; // x2
  unsigned int v16; // w8
  struct System_Boolean_array *isRareFlags; // x8
  unsigned int max_length; // w9

  v9 = kind;
  v10 = this;
  if ( (byte_4C52EC5 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11602/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/);
    sub_1C3E564(&StringLiteral_87/*"\r\n"*/);
    sub_1C3E564(&StringLiteral_11698/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_11573/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_11559/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C3E564(&StringLiteral_11681/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/);
    sub_1C3E564(&StringLiteral_11632/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&StringLiteral_11662/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/);
    byte_4C52EC5 = 1;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_11559/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0);
    }
    *(_QWORD *)&kind = v10->fields.isRareFlags;
    if ( isMaterial )
    {
      if ( !*(_QWORD *)&kind )
        goto LABEL_56;
      v16 = *(_DWORD *)(*(_QWORD *)&kind + 24LL);
      if ( !v16 )
        goto LABEL_55;
      if ( !*(_BYTE *)(*(_QWORD *)&kind + 32LL) )
      {
        if ( v16 <= 1 )
          goto LABEL_55;
        if ( !*(_BYTE *)(*(_QWORD *)&kind + 33LL) )
        {
          if ( v16 <= 2 )
            goto LABEL_55;
          if ( !*(_BYTE *)(*(_QWORD *)&kind + 34LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v12 = &StringLiteral_11662/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
            return LocalizationManager__Get((System_String_o *)*v12, 0);
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_11573/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0);
    }
    isRareFlags = v10->fields.isRareFlags;
    if ( !isRareFlags )
      goto LABEL_56;
    max_length = isRareFlags->max_length;
    if ( max_length )
    {
      if ( isRareFlags->m_Items[0] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = &StringLiteral_11698/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
        return LocalizationManager__Get((System_String_o *)*v12, 0);
      }
      if ( max_length > 1 )
      {
        if ( isRareFlags->m_Items[1] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v12 = &StringLiteral_11632/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0);
        }
        if ( max_length > 2 )
        {
          if ( !isRareFlags->m_Items[2] )
            return (System_String_o *)StringLiteral_1/*""*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v12 = &StringLiteral_11602/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0);
        }
      }
    }
LABEL_55:
    sub_1C3E7C8(this, *(_QWORD *)&kind);
  }
  if ( isMaterial )
    goto LABEL_17;
  v13 = v10->fields.isRareFlags;
  if ( !v13 )
LABEL_56:
    sub_1C3E7C0(this, *(_QWORD *)&kind);
  if ( LODWORD(v13->max_length) <= 2 )
    goto LABEL_55;
  if ( !v13->m_Items[2] && !v13->m_Items[1] && !v13->m_Items[0] )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_11681/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v12, 0);
  }
LABEL_17:
  v10->fields.isTwoLinesWarning = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11698/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11681/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0);
  return System_String__Concat_63674716(v14, (System_String_o *)StringLiteral_87/*"\r\n"*/, v15, 0);
}


void ServantSellConfirmMenu__Init(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu__TextClear(this, method);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool ServantSellConfirmMenu__IsBoth(
        ServantSellConfirmMenu_o *this,
        System_Boolean_array *flags,
        const MethodInfo *method)
{
  __int64 max_length; // x10
  __int64 v4; // x8
  int v5; // w9
  bool v6; // w13

  if ( !flags )
    sub_1C3E7C0(this, 0);
  if ( (int)flags->max_length < 1 )
  {
    return 0;
  }
  else
  {
    max_length = (unsigned int)flags->max_length;
    v4 = 0;
    v5 = 0;
    v6 = 1;
    do
    {
      if ( flags->m_Items[v4] && ++v5 > 1 )
        break;
      v6 = ++v4 < (int)max_length;
    }
    while ( max_length != v4 );
  }
  return v6;
}


void ServantSellConfirmMenu__ModifyItem(ServantSellConfirmMenu_o *this, int64_t selectedId, const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0

  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  if ( !servantSellConfirmListViewManager )
    sub_1C3E7C0(0, selectedId);
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4C52ECD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Clear__);
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&Method_ServantSellConfirmMenu_OnClickCancel__);
    byte_4C52ECD = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( v2->fields.kind == 4 )
    {
      lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_1C3E7C0(this, method);
      v4 = lastSvtCommandCodeList->fields._version + 1;
      lastSvtCommandCodeList->fields._size = 0;
      lastSvtCommandCodeList->fields._version = v4;
    }
    v2->fields.state = 3;
    v5 = Method_ServantSellConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmMenu_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
    ServantSellConfirmMenu__CallOnSellServantConfirm(v2, 0, v7);
  }
}


void ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C52ECE & 1) == 0 )
  {
    sub_1C3E564(&Method_ServantSellConfirmMenu_OnClickClose__);
    byte_4C52ECE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v5);
  }
}


void ServantSellConfirmMenu__OnClickDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  bool IsQpMaxAlert; // w20
  const MethodInfo *v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x4
  Il2CppObject *Instance; // x0
  System_String_o *v10; // x20
  CommonUI_o *v11; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *getable; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-40h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4C52EC8 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_1C3E564(&Method_ServantSellConfirmMenu_OnClickDecide__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52EC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    message = (System_String_o *)StringLiteral_1/*""*/;
    title = (System_String_o *)StringLiteral_1/*""*/;
    getable = (System_String_o *)StringLiteral_1/*""*/;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v2);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1/*""*/, 0) || this->fields.isMaxQpChecked )
    {
      ServantSellConfirmMenu__SellServantDecide(this, v5);
    }
    else
    {
      v6 = Method_ServantSellConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmMenu_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      if ( IsQpMaxAlert )
      {
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v8);
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = message;
        v11 = (CommonUI_o *)Instance;
        v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0);
        if ( !v11 )
          sub_1C3E7C0(v13, v14);
        CommonUI__OpenNotificationDialog(
          v11,
          (System_String_o *)StringLiteral_1/*""*/,
          v10,
          v12,
          -1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0.0,
          0,
          0);
      }
    }
  }
}


void ServantSellConfirmMenu__OnEnable(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4C52ED6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15660/*"Window/Objects/CancelButton"*/);
    sub_1C3E564(&StringLiteral_15661/*"Window/Objects/CloseButton"*/);
    byte_4C52ED6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(transform, (System_String_o *)StringLiteral_15660/*"Window/Objects/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(v4, (System_String_o *)StringLiteral_15661/*"Window/Objects/CloseButton"*/, 0);
}


void ServantSellConfirmMenu__OnSelectCommandCodeDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4C52ED3 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndShowCommandCode__);
    sub_1C3E564(&Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C52ED3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (CommonUI_o *)Instance,
          v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0),
          !v11) )
    {
      sub_1C3E7C0(v7, v8);
    }
    CommonUI__OpenServantStatusDialog_31250808(v11, 32, UserCommandCodeEntity_k__BackingField, v12, 0, 0);
  }
}


void ServantSellConfirmMenu__OnSelectServantDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v10; // x21
  ServantStatusDialog_EndDelegate_o *v11; // x22
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4C52ED0 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndShowServant__);
    sub_1C3E564(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C52ED0 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v5 = Method_ServantSellConfirmMenu_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectServantDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmMenu_OnSelectServantDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v10 = (CommonUI_o *)Instance;
      v11 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v11, (Il2CppObject *)v4, Method_ServantSellConfirmMenu_EndShowServant__, 0);
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_31247424(v10, 29, servantStatusId, v11, 0, 0);
        return;
      }
LABEL_13:
      sub_1C3E7C0(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(v4, selectItem, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmMenu__Open(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Int64_array *commandCodeIdList,
        System_Action_int__o *onSellServantConfirm,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *titleLabel; // x23
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  bool v23; // w24
  _BOOL4 v24; // w23
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5
  const MethodInfo *v28; // x5
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v32; // w9
  System_Action_o *v33; // x20
  bool isNoWarning; // [xsp+8h] [xbp-48h] BYREF
  bool isEquipedCommandCode; // [xsp+Ch] [xbp-44h] BYREF
  bool isExceeded; // [xsp+18h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C52EBB & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_1C3E564(&StringLiteral_11699/*"SERVANT_SELL_TITLE"*/);
    byte_4C52EBB = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  isNoWarning = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( !this->fields.state )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    this->fields.kind = kind;
    this->fields.onSellServantConfirm = onSellServantConfirm;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onSellServantConfirm, (int32_t)onSellServantConfirm, v11, v12);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      this->fields.userGameEntity = SelfUserGame;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v16, v17);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11699/*"SERVANT_SELL_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
            gameObject = this->fields.listViewBg;
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, 0, 0);
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v19);
              *(_QWORD *)&this->fields.getQP = 0;
              this->fields.getRarePri = 0;
              if ( kind != 4 )
                this->fields.isMaxQpChecked = 0;
              ServantSellConfirmMenu__SetMessageStatusByServant(
                this,
                servantIdList,
                &isMaterial,
                &isExceeded,
                &isEquipedCommandCode,
                v20);
              ServantSellConfirmMenu__SetMessageStatusByCommandCode(this, commandCodeIdList, v21);
              this->fields.isTwoLinesWarning = 0;
              ServantSellConfirmMenu__SetMessageText(this, kind, v22);
              v23 = isExceeded;
              v24 = isEquipedCommandCode;
              ServantSellConfirmMenu__SetWarningText(
                this,
                kind,
                isMaterial,
                isExceeded,
                isEquipedCommandCode,
                &isNoWarning,
                v25);
              ServantSellConfirmMenu__SetInfoLabels(this, kind, isNoWarning, v26);
              ServantSellConfirmMenu__SetNumLabels(
                this,
                kind,
                this->fields.getQP,
                this->fields.getMana,
                this->fields.getRarePri,
                v27);
              ServantSellConfirmMenu__SetListViewManager(this, kind, servantIdList, commandCodeIdList, v23, v28);
              gameObject = this->fields.listViewBg;
              if ( gameObject )
              {
                v29 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                GameObjectExtensions__SetLocalPositionY(v29, 90.0, 0);
                gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
                if ( gameObject )
                {
                  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  GameObjectExtensions__SetLocalPositionY(v30, 140.0, 0);
                  if ( v24 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_21;
                  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
                  if ( lastSvtCommandCodeList )
                  {
                    v32 = lastSvtCommandCodeList->fields._version + 1;
                    lastSvtCommandCodeList->fields._size = 0;
                    lastSvtCommandCodeList->fields._version = v32;
LABEL_21:
                    this->fields.state = 1;
                    v33 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
                    System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C3E7C0(gameObject, v14);
  }
}


void ServantSellConfirmMenu__OpenCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *lastSvtCommandCodeList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  struct System_Collections_Generic_List_long__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v18; // x20

  if ( (byte_4C52EBD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_1C3E564(&StringLiteral_3663/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_11679/*"SERVANT_SELL_CLOSE"*/);
    sub_1C3E564(&StringLiteral_3664/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_4C52EBD = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_28;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v7 = System_Linq_Enumerable__Distinct_long_(
           lastSvtCommandCodeList,
           (const MethodInfo_311CD94 *)Method_System_Linq_Enumerable_Distinct_long___);
    v8 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                             v7,
                                                             (const MethodInfo_313DD10 *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v8;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v8, v9, v10);
    this->fields.onSellServantConfirm = callback;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onSellServantConfirm, (int32_t)callback, v11, v12);
    lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0);
    if ( lastSvtCommandCodeList )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0);
      lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.servantSellConfirmListViewManager;
      if ( lastSvtCommandCodeList )
      {
        lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)lastSvtCommandCodeList,
                                                                                        0);
        if ( lastSvtCommandCodeList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0);
          lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.servantSellConfirmListViewManager;
          if ( lastSvtCommandCodeList )
          {
            ServantSellConfirmListViewManager__CreateCommandCodeResultList(
              (ServantSellConfirmListViewManager_o *)lastSvtCommandCodeList,
              this->fields.lastSvtCommandCodeList,
              0,
              0,
              v13);
            lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.listViewBg;
            if ( lastSvtCommandCodeList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0);
              titleLabel = this->fields.titleLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3664/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3663/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
                                                                                                0);
                if ( lowerLabel )
                {
                  UILabel__set_text(lowerLabel, (System_String_o *)lastSvtCommandCodeList, 0);
                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lowerLabel;
                  if ( lastSvtCommandCodeList )
                  {
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)lastSvtCommandCodeList,
                                   0);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0);
                    lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.decideButton;
                    if ( lastSvtCommandCodeList )
                    {
                      lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0);
                      if ( lastSvtCommandCodeList )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 0, 0);
                        lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.cancelButton;
                        if ( lastSvtCommandCodeList )
                        {
                          lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0);
                          if ( lastSvtCommandCodeList )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 0, 0);
                            lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.closeButton;
                            if ( lastSvtCommandCodeList )
                            {
                              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0);
                              if ( lastSvtCommandCodeList )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)lastSvtCommandCodeList,
                                  1,
                                  0);
                                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.closeButton;
                                if ( lastSvtCommandCodeList )
                                {
                                  ((void (__fastcall *)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD, _QWORD, const MethodInfo *))lastSvtCommandCodeList->klass->vtable[14].methodPtr)(
                                    lastSvtCommandCodeList,
                                    0,
                                    0,
                                    lastSvtCommandCodeList->klass->vtable[14].method);
                                  closeLabel = this->fields.closeLabel;
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_11679/*"SERVANT_SELL_CLOSE"*/, 0);
                                  if ( closeLabel )
                                  {
                                    UILabel__set_text(closeLabel, (System_String_o *)lastSvtCommandCodeList, 0);
                                    lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commonInfoObj;
                                    if ( lastSvtCommandCodeList )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)lastSvtCommandCodeList,
                                        1,
                                        0);
                                      lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.sellLastSvtWarningInfoObj;
                                      if ( lastSvtCommandCodeList )
                                      {
                                        UnityEngine_GameObject__SetActive(
                                          (UnityEngine_GameObject_o *)lastSvtCommandCodeList,
                                          0,
                                          0);
                                        this->fields.state = 1;
                                        v18 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v18,
                                          (Il2CppObject *)this,
                                          Method_ServantSellConfirmMenu_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0, 0);
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
LABEL_28:
    sub_1C3E7C0(lastSvtCommandCodeList, v5);
  }
}


void ServantSellConfirmMenu__OpenQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *getable,
        const MethodInfo *method)
{
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  System_String_o *v10; // x0
  ServantSellMaxAlertDialog_o *servantSellMaxAlertDialog; // x26
  System_String_o *v12; // x25
  System_Action_o *v13; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v15; // x29
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // [xsp+18h] [xbp-78h]

  if ( (byte_4C52EC9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_1C3E564(&Method_ServantSellConfirmMenu_SellServantDecide__);
    sub_1C3E564(&Method_ServantSellConfirmMenu_TransitionToCombineScene__);
    sub_1C3E564(&StringLiteral_11694/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_1C3E564(&StringLiteral_11693/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_1C3E564(&StringLiteral_11700/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_4C52EC9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11694/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11700/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11693/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v12 = v10;
  v13 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, (intptr_t)Method_ServantSellConfirmMenu_SellServantDecide__, 0);
  onTransition = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(onTransition, (Il2CppObject *)this, Method_ServantSellConfirmMenu_TransitionToCombineScene__, 0);
  v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0);
  if ( !servantSellMaxAlertDialog )
    sub_1C3E7C0(v16, v17);
  ServantSellMaxAlertDialog__Open(
    servantSellMaxAlertDialog,
    title,
    message,
    getable,
    v8,
    v9,
    v12,
    v13,
    onTransition,
    v15,
    0,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  void *gameObject; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v14; // w9
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *titleLabel; // x21
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x26
  int64_t v23; // x22
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_long__o *v26; // x22
  System_Predicate_long__o *v27; // x23
  Il2CppObject *v28; // x24
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  UILabel_o *decideLabel; // x20
  System_Action_o *v40; // x20
  bool isEquipedCommandCode; // [xsp+4h] [xbp-6Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-68h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C52EBC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&System_Predicate_long__TypeInfo);
    sub_1C3E564(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__);
    sub_1C3E564(&ServantSellConfirmMenu___c_TypeInfo);
    sub_1C3E564(&StringLiteral_11561/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C3E564(&StringLiteral_11560/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_1C3E564(&StringLiteral_11699/*"SERVANT_SELL_TITLE"*/);
    byte_4C52EBC = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( kind == 4 && !this->fields.state )
  {
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_50;
    v14 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v14;
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onSellServantConfirm, (int32_t)callback, v11, v12);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    *(_QWORD *)&this->fields.getQP = 0;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    this->fields.userGameEntity = SelfUserGame;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v16, v17);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11699/*"SERVANT_SELL_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_50;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v19);
    gameObject = this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_50;
    ServantSellConfirmListViewManager__CreateSortServantList(
      (ServantSellConfirmListViewManager_o *)gameObject,
      servantIdList,
      isExceeded,
      1,
      v20);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( !servantIdList )
      goto LABEL_50;
    max_length = servantIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)max_length )
          sub_1C3E7C8(gameObject, v10);
        v23 = servantIdList->m_Items[v22];
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !gameObject )
          break;
        gameObject = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                       v23,
                       (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !gameObject )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        gameObject = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          break;
        gameObject = UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                       (UserServantCommandCodeMaster_o *)MasterData_object,
                       *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                       SvtId,
                       0);
        if ( gameObject )
        {
          v10 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          gameObject = this->fields.lastSvtCommandCodeList;
          if ( !gameObject )
            break;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)gameObject,
            v10,
            (const MethodInfo_379D6A0 *)Method_System_Collections_Generic_List_long__AddRange__);
          gameObject = ServantSellConfirmMenu___c_TypeInfo;
          v26 = this->fields.lastSvtCommandCodeList;
          if ( !ServantSellConfirmMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantSellConfirmMenu___c_TypeInfo);
            gameObject = ServantSellConfirmMenu___c_TypeInfo;
          }
          v27 = *(System_Predicate_long__o **)(*((_QWORD *)gameObject + 23) + 8LL);
          if ( !v27 )
          {
            if ( !*((_DWORD *)gameObject + 56) )
            {
              j_il2cpp_runtime_class_init_0(gameObject);
              gameObject = ServantSellConfirmMenu___c_TypeInfo;
            }
            v28 = (Il2CppObject *)**((_QWORD **)gameObject + 23);
            v27 = (System_Predicate_long__o *)sub_1C3E7B0(System_Predicate_long__TypeInfo);
            System_Predicate_long____ctor(
              v27,
              v28,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              0);
            static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            static_fields->__9__62_0 = v27;
            sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)v27, v30, v31);
          }
          if ( !v26 )
            break;
          gameObject = (void *)System_Collections_Generic_List_long___RemoveAll(
                                 v26,
                                 (System_Predicate_T__o *)v27,
                                 (const MethodInfo_379EABC *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(max_length) = servantIdList->max_length;
        if ( (__int64)++v22 >= (int)max_length )
          goto LABEL_40;
      }
LABEL_50:
      sub_1C3E7C0(gameObject, v10);
    }
LABEL_40:
    upperLabel = this->fields.upperLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11560/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0);
    if ( !upperLabel )
      goto LABEL_50;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0);
    lowerLabel = this->fields.lowerLabel;
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11561/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0);
    if ( !lowerLabel )
      goto LABEL_50;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.lowerLabel;
    if ( !gameObject )
      goto LABEL_50;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v34, -140.0, 0);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_50;
    v35 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v35, 44.0, 0);
    gameObject = this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_50;
    v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v36, 94.0, 0);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v37);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v38);
    decideLabel = this->fields.decideLabel;
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_50;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v40 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0, 0);
  }
}


void ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C52ECC & 1) == 0 )
  {
    sub_1C3E564(&Method_ServantSellConfirmMenu_SellServantDecide__);
    byte_4C52ECC = 1;
  }
  this->fields.isMaxQpChecked = 1;
  this->fields.state = 3;
  v3 = Method_ServantSellConfirmMenu_SellServantDecide__;
  if ( this->fields.kind > 3u )
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmMenu_SellServantDecide__);
    v4 = 0;
  }
  else
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_ServantSellConfirmMenu_SellServantDecide__);
    v4 = 8;
  }
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0);
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmMenu__SetInfoLabels(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        bool isNoWarning,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v6; // x19
  UILabel_o *info1Label; // x21
  UILabel_o *info3Label; // x21
  ServantSellConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x2
  ServantSellConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x2
  ServantSellConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x2
  float v15; // s0
  ServantSellConfirmMenu_o *v16; // x0
  const MethodInfo *v17; // x2
  int v18; // w8
  UILabel_o **p_info3Label; // x22
  ServantSellConfirmMenu_o *v20; // x0
  const MethodInfo *v21; // x2
  ServantSellConfirmMenu_o *v22; // x0
  const MethodInfo *v23; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t qp; // x25
  BalanceConfig_c *v26; // x0
  int64_t QpMax; // x26
  UILabel_o *v28; // x20
  System_String_o **v29; // x8
  struct UserGameEntity_o *v30; // x8
  ServantSellConfirmMenu_o *v31; // x21
  Il2CppObject *NumberFormatLong; // x0
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v34; // x8
  ServantSellConfirmMenu_o *v35; // x21
  Il2CppObject *NumberFormat; // x0
  UILabel_o *v37; // x20
  struct UserGameEntity_o *v38; // x8
  ServantSellConfirmMenu_o *v39; // x21
  Il2CppObject *v40; // x0
  __int64 v41; // x8
  float v42; // s8
  ServantSellConfirmMenu_o *v43; // x0
  const MethodInfo *v44; // x2
  ServantSellConfirmMenu_o *v45; // x0
  const MethodInfo *v46; // x2
  ServantSellConfirmMenu_o *v47; // x0
  const MethodInfo *v48; // x2
  struct UserGameEntity_o *v49; // x8
  BalanceConfig_c *v50; // x0
  int64_t v51; // x21
  UILabel_o *v52; // x20
  int64_t v53; // x23
  struct UserGameEntity_o *v54; // x8
  ServantSellConfirmMenu_o *v55; // x19
  Il2CppObject *v56; // x0
  float v57; // s0
  struct UserGameEntity_o *v58; // x8
  ServantSellConfirmMenu_o *v59; // x21
  Il2CppObject *v60; // x0

  v6 = this;
  if ( (byte_4C52EC1 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11687/*"SERVANT_SELL_INFO7"*/);
    sub_1C3E564(&StringLiteral_11682/*"SERVANT_SELL_INFO2_ALERT"*/);
    sub_1C3E564(&StringLiteral_11686/*"SERVANT_SELL_INFO6"*/);
    sub_1C3E564(&StringLiteral_11684/*"SERVANT_SELL_INFO3"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_11683/*"SERVANT_SELL_INFO2_NORMAL"*/);
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&StringLiteral_11685/*"SERVANT_SELL_INFO5"*/);
    byte_4C52EC1 = 1;
  }
  if ( (unsigned int)kind <= 0xD )
  {
    if ( ((1 << kind) & 0x3F00) != 0 )
    {
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_60;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
      if ( !this )
        goto LABEL_60;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      p_info3Label = &v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)v6->fields.info3Label;
      if ( !this )
        goto LABEL_60;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v20, v6->fields.info1Label, -50.0, v21);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v22, v6->fields.info2Label, -78.0, v23);
      v18 = -1026293760;
    }
    else
    {
      if ( ((1 << kind) & 0x1F) != 0 )
      {
        this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
        if ( this )
        {
          UILabel__set_fontSize((UILabel_o *)this, v6->fields.SELL_SELECT_LABEL_FONT_SIZE, 0);
          this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
          if ( this )
          {
            UILabel__set_fontSize((UILabel_o *)this, v6->fields.SELL_SELECT_LABEL_FONT_SIZE, 0);
            this = (ServantSellConfirmMenu_o *)v6->fields.info3Label;
            if ( this )
            {
              UILabel__set_fontSize((UILabel_o *)this, v6->fields.SELL_SELECT_LABEL_FONT_SIZE, 0);
              info1Label = v6->fields.info1Label;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_SELL_INFO6"*/, 0);
              if ( info1Label )
              {
                UILabel__set_text(info1Label, (System_String_o *)this, 0);
                this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
                  info3Label = v6->fields.info3Label;
                  this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SELL_INFO7"*/, 0);
                  if ( info3Label )
                  {
                    UILabel__set_text(info3Label, (System_String_o *)this, 0);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v9, v6->fields.info1Label, -92.0, v10);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v11, v6->fields.info2Label, -115.0, v12);
                    v15 = -162.0;
                    if ( isNoWarning )
                      v15 = -139.0;
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v13, v6->fields.info3Label, v15, v14);
                    if ( v6->fields.isTwoLinesWarning )
                    {
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v16, v6->fields.info3Label, -176.0, v17);
                      v18 = -1022164992;
                    }
                    else
                    {
                      v18 = -1022689280;
                    }
                    p_info3Label = &v6->fields.warningLabel;
                    goto LABEL_57;
                  }
                }
              }
            }
          }
        }
LABEL_60:
        sub_1C3E7C0(this, *(_QWORD *)&kind);
      }
      userGameEntity = v6->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_60;
      qp = userGameEntity->fields.qp;
      v26 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      QpMax = v26->static_fields->QpMax;
      p_info3Label = &v6->fields.info1Label;
      v28 = v6->fields.info1Label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = (System_String_o **)(qp >= QpMax ? &StringLiteral_11682/*"SERVANT_SELL_INFO2_ALERT"*/ : &StringLiteral_11683/*"SERVANT_SELL_INFO2_NORMAL"*/);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(*v29, 0);
      v30 = v6->fields.userGameEntity;
      if ( !v30 )
        goto LABEL_60;
      v31 = this;
      NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v30->fields.qp, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v31, NumberFormatLong, 0);
      if ( !v28 )
        goto LABEL_60;
      UILabel__set_text(v28, (System_String_o *)this, 0);
      info2Label = v6->fields.info2Label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11684/*"SERVANT_SELL_INFO3"*/, 0);
      v34 = v6->fields.userGameEntity;
      if ( !v34 )
        goto LABEL_60;
      v35 = this;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v34->fields.mana, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v35, NumberFormat, 0);
      if ( !info2Label )
        goto LABEL_60;
      UILabel__set_text(info2Label, (System_String_o *)this, 0);
      v37 = v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11685/*"SERVANT_SELL_INFO5"*/, 0);
      v38 = v6->fields.userGameEntity;
      if ( !v38 )
        goto LABEL_60;
      v39 = this;
      v40 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v38->fields.rarePri, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v39, v40, 0);
      if ( !v37 )
        goto LABEL_60;
      UILabel__set_text(v37, (System_String_o *)this, 0);
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_60;
      v41 = 108;
      if ( qp >= QpMax )
      {
        v42 = 49.0;
      }
      else
      {
        v41 = 112;
        v42 = 10.0;
      }
      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v41), 0);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v43, v6->fields.info1Label, v42, v44);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v45, v6->fields.info2Label, -50.0, v46);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v47, v6->fields.info3Label, -110.0, v48);
      v49 = v6->fields.userGameEntity;
      if ( !v49 )
        goto LABEL_60;
      v50 = BalanceConfig_TypeInfo;
      v51 = v49->fields.qp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v50 = BalanceConfig_TypeInfo;
      }
      v52 = *p_info3Label;
      v53 = v50->static_fields->QpMax;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v51 < v53 )
      {
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11683/*"SERVANT_SELL_INFO2_NORMAL"*/, 0);
        v54 = v6->fields.userGameEntity;
        if ( v54 )
        {
          v55 = this;
          v56 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v54->fields.qp, 0);
          this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v55, v56, 0);
          if ( v52 )
          {
            UILabel__set_text(v52, (System_String_o *)this, 0);
            v57 = 10.0;
LABEL_58:
            ServantSellConfirmMenu__SetLabelLocalPositionY(v16, *p_info3Label, v57, v17);
            return;
          }
        }
        goto LABEL_60;
      }
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11682/*"SERVANT_SELL_INFO2_ALERT"*/, 0);
      v58 = v6->fields.userGameEntity;
      if ( !v58 )
        goto LABEL_60;
      v59 = this;
      v60 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v58->fields.qp, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v59, v60, 0);
      if ( !v52 )
        goto LABEL_60;
      UILabel__set_text(v52, (System_String_o *)this, 0);
      this = (ServantSellConfirmMenu_o *)*p_info3Label;
      if ( !*p_info3Label )
        goto LABEL_60;
      UILabel__set_fontSize((UILabel_o *)this, v6->fields.ALERT_MESSAGE_LABEL_FONT_SIZE, 0);
      v18 = 1111752704;
    }
LABEL_57:
    v57 = *(float *)&v18;
    goto LABEL_58;
  }
}


void ServantSellConfirmMenu__SetLabelLocalPositionY(
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
    || (this = (ServantSellConfirmMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        x = localPosition.fields.x,
        z = localPosition.fields.z,
        (this = (ServantSellConfirmMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0)) == 0) )
  {
    sub_1C3E7C0(this, label);
  }
  v9.fields.y = y;
  v9.fields.z = z;
  v9.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0);
}


void ServantSellConfirmMenu__SetLastServantWarningMessageLabels(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmMenu__SetListViewManager(
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
                                                                           0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSellConfirmListViewManager, 1, 0),
          (servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.servantSellConfirmListViewManager) == 0)
      || (ServantSellConfirmListViewManager__CreateList(
            (ServantSellConfirmListViewManager_o *)servantSellConfirmListViewManager,
            3,
            servantIdList,
            commandCodeIdList,
            isExceeded,
            0,
            v11),
          (servantSellConfirmListViewManager = (UnityEngine_Component_o *)this->fields.listViewBg) == 0) )
    {
      sub_1C3E7C0(servantSellConfirmListViewManager, *(_QWORD *)&kind);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSellConfirmListViewManager, 1, 0);
  }
}


void ServantSellConfirmMenu__SetMessageStatusByCommandCode(
        ServantSellConfirmMenu_o *this,
        System_Int64_array *commandCodeIds,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  int64_t v7; // x21
  int32_t getQP; // w28
  UserCommandCodeEntity_o *v9; // x21
  int32_t SellQp; // w0
  int32_t getMana; // w29
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8

  v4 = this;
  if ( (byte_4C52EC0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C52EC0 = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_1C3E7C0(this, commandCodeIds);
    max_length = commandCodeIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      while ( v6 < (unsigned int)max_length )
      {
        v7 = commandCodeIds->m_Items[v6];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v7,
                                             (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_19;
        getQP = v4->fields.getQP;
        v9 = (UserCommandCodeEntity_o *)this;
        SellQp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0);
        getMana = v4->fields.getMana;
        v4->fields.getQP = SellQp + getQP;
        SellMana = UserCommandCodeEntity__GetSellMana(v9, 0);
        getRarePri = v4->fields.getRarePri;
        v4->fields.getMana = SellMana + getMana;
        v4->fields.getRarePri = UserCommandCodeEntity__GetSellRarePri(v9, 0) + getRarePri;
        this = (ServantSellConfirmMenu_o *)UserCommandCodeEntity__GetRarity(v9, 0);
        if ( (int)this >= 3 )
        {
          isRareFlags = v4->fields.isRareFlags;
          if ( !isRareFlags )
            goto LABEL_19;
          if ( LODWORD(isRareFlags->max_length) <= 2 )
            break;
          isRareFlags->m_Items[2] = 1;
        }
        max_length = (il2cpp_array_size_t)v4->fields.servantTypeFlags;
        if ( !max_length )
          goto LABEL_19;
        if ( *(_DWORD *)(max_length + 24) <= 2u )
          break;
        *(_BYTE *)(max_length + 34) = 1;
        LODWORD(max_length) = commandCodeIds->max_length;
        if ( (__int64)++v6 >= (int)max_length )
          return;
      }
      sub_1C3E7C8(this, commandCodeIds);
    }
  }
}


void ServantSellConfirmMenu__SetMessageStatusByServant(
        ServantSellConfirmMenu_o *this,
        System_Int64_array *servantIds,
        bool *isMaterial,
        bool *isExceeded,
        bool *isEquipedCommandCode,
        const MethodInfo *method)
{
  const MethodInfo_39FF5A8 **v8; // x20
  struct System_Boolean_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Boolean_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x26
  il2cpp_array_size_t max_length; // x8
  UserServantCommandCodeMaster_o *v19; // x27
  unsigned __int64 v20; // x28
  int64_t *m_Items; // x22
  Il2CppObject *v22; // x21
  const MethodInfo_39FF5A8 **v23; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x29
  void *monitor; // x19
  Il2CppClass *klass; // x20
  Il2CppObject *v27; // x0
  int32_t getQP; // w19
  Il2CppObject *v29; // x29
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v36; // w21
  struct System_Boolean_array *v37; // x8
  unsigned int v38; // w9
  struct System_Boolean_array *v39; // x8
  NetworkManager_c *v40; // x0
  void *v41; // x20
  Il2CppClass *v42; // x25
  int64_t userIdNumber; // x19
  bool v44; // w8
  struct System_Boolean_array *v45; // x8
  struct System_Boolean_array **p_isRareFlags; // [xsp+8h] [xbp-98h]
  System_Int64_array *v50; // [xsp+28h] [xbp-78h]
  struct System_Boolean_array **p_servantTypeFlags; // [xsp+30h] [xbp-70h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4C52EBF & 1) == 0 )
  {
    sub_1C3E564(&bool___TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C52EBF = 1;
  }
  entity = 0;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v8 = (const MethodInfo_39FF5A8 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v9 = (struct System_Boolean_array *)sub_1C3E60C(bool___TypeInfo, 3);
    this->fields.servantTypeFlags = v9;
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.servantTypeFlags, (int32_t)v9, v10, v11);
    v12 = (struct System_Boolean_array *)sub_1C3E60C(bool___TypeInfo, 3);
    this->fields.isRareFlags = v12;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.isRareFlags, (int32_t)v12, v13, v14);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          !servantIds) )
    {
LABEL_53:
      sub_1C3E7C0(Instance, v16);
    }
    max_length = servantIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v19 = (UserServantCommandCodeMaster_o *)Instance;
      v20 = 0;
      m_Items = servantIds->m_Items;
      v50 = servantIds;
      while ( v20 < (unsigned int)max_length )
      {
        if ( !MasterData_object )
          goto LABEL_53;
        v22 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                m_Items[v20],
                (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v23 = v8;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(*v8);
        if ( !Instance )
          goto LABEL_53;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v22 )
          goto LABEL_53;
        v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        klass = v22[5].klass;
        monitor = v22[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = klass;
        *(_QWORD *)&v53.fields.fakeValue = monitor;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v53, 0);
        if ( !v24 )
          goto LABEL_53;
        v27 = DataMasterBase_object__object__int___GetEntity(
                v24,
                (int32_t)Instance,
                (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v29 = v27;
        SellQp = UserServantEntity__getSellQp((UserServantEntity_o *)v22, 0);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana((UserServantEntity_o *)v22, 0);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)v22, 0);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded((UserServantEntity_o *)v22, 0) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity((UserServantEntity_o *)v22, 0);
        if ( !v29 )
          goto LABEL_53;
        v36 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v29, 0);
        v37 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_53;
        v38 = v37->max_length;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v38 <= 1 )
            break;
          v37->m_Items[1] = 1;
          if ( v36 >= 4 )
          {
            v39 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_53;
            if ( LODWORD(v39->max_length) <= 1 )
              break;
            v39->m_Items[1] = 1;
          }
        }
        else
        {
          if ( !v38 )
            break;
          v37->m_Items[0] = 1;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C50AE2 )
          {
            sub_1C3E564(&NetworkManager_TypeInfo);
            byte_4C50AE2 = 1;
          }
          v40 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v40 = NetworkManager_TypeInfo;
          }
          v42 = v29[1].klass;
          v41 = v29[1].monitor;
          userIdNumber = v40->static_fields->userIdNumber;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v54.fields.currentCryptoKey = v42;
          *(_QWORD *)&v54.fields.fakeValue = v41;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v54, 0);
          if ( !v19 )
            goto LABEL_53;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                        v19,
                                        &entity,
                                        userIdNumber,
                                        (int)Instance,
                                        0);
          servantIds = v50;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_53;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v44 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_53;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0);
              v44 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v44;
          }
          if ( v36 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v29, 0);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v29, 0),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v45 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_53;
              if ( !LODWORD(v45->max_length) )
                break;
              v45->m_Items[0] = 1;
            }
          }
        }
        LODWORD(max_length) = servantIds->max_length;
        ++v20;
        v8 = v23;
        if ( (__int64)v20 >= (int)max_length )
          return;
      }
      sub_1C3E7C8(Instance, v16);
    }
  }
}


void ServantSellConfirmMenu__SetMessageText(ServantSellConfirmMenu_o *this, int32_t kind, const MethodInfo *method)
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
  struct UserGameEntity_o *userGameEntity; // x9
  int64_t qp; // x20
  BalanceConfig_c *v16; // x8
  bool v17; // cc
  __int64 v18; // x8
  float v19; // s8

  v4 = this;
  if ( (byte_4C52EC3 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52EC3 = 1;
  }
  messageLabel = v4->fields.messageLabel;
  IsBoth = ServantSellConfirmMenu__IsBoth(this, v4->fields.servantTypeFlags, method);
  MessageText = ServantSellConfirmMenu__GetMessageText(v4, kind, IsBoth, v7);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, MessageText, 0);
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
          UILabel__set_fontSize((UILabel_o *)MessageText, v4->fields.SELL_SELECT_LABEL_FONT_SIZE, 0);
          MessageText = (System_String_o *)v4->fields.messageLabel;
          if ( MessageText )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MessageText, 0);
            GameObjectExtensions__SetLocalPositionY(gameObject, -68.0, 0);
            return;
          }
        }
LABEL_21:
        sub_1C3E7C0(MessageText, v9);
      }
      userGameEntity = v4->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_21;
      qp = userGameEntity->fields.qp;
      v16 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      MessageText = (System_String_o *)v4->fields.messageLabel;
      if ( !MessageText )
        goto LABEL_21;
      v17 = qp < v16->static_fields->QpMax;
      v18 = 104;
      if ( v17 )
      {
        v19 = 100.0;
      }
      else
      {
        v18 = 108;
        v19 = 144.0;
      }
      UILabel__set_fontSize((UILabel_o *)MessageText, *(_DWORD *)((char *)&v4->klass + v18), 0);
      v12 = v4->fields.messageLabel;
      v13 = v19;
    }
    ServantSellConfirmMenu__SetLabelLocalPositionY((ServantSellConfirmMenu_o *)MessageText, v12, v13, v10);
  }
}


void ServantSellConfirmMenu__SetNumLabels(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        int32_t getQp,
        int32_t getMana,
        int32_t getRarePri,
        const MethodInfo *method)
{
  UILabel_o *QpLabel; // x23
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *QpNumLabel; // x23
  System_String_o *v15; // x24
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  UILabel_o *ManaLabel; // x22
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  UILabel_o *RareLabel; // x21
  UILabel_o *RareNumLabel; // x21
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  UILabel_o *RareLabel2; // x20
  const MethodInfo *v44; // x4
  float NumLabelWidth; // s0
  float v46; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v48; // s0
  float v49; // s8
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s9
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  float v54; // s0
  float v55; // s8
  UnityEngine_GameObject_o *v56; // x0
  float v57; // s9
  float v58; // s8
  UnityEngine_GameObject_o *v59; // x0
  float v60; // s0
  float v61; // s8
  UnityEngine_GameObject_o *v62; // x0
  float v63; // s9
  UnityEngine_GameObject_o *v64; // x0
  int32_t v65; // [xsp+0h] [xbp-70h] BYREF
  int32_t v66; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v67; // [xsp+8h] [xbp-68h] BYREF
  float rarePriWidth; // [xsp+Ch] [xbp-64h] BYREF
  __int64 manaWidth; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C52EC2 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11692/*"SERVANT_SELL_NUM_TEXT"*/);
    sub_1C3E564(&StringLiteral_11695/*"SERVANT_SELL_QP_TEXT"*/);
    sub_1C3E564(&StringLiteral_11697/*"SERVANT_SELL_RARE_TEXT2"*/);
    sub_1C3E564(&StringLiteral_11688/*"SERVANT_SELL_MANA_TEXT"*/);
    sub_1C3E564(&StringLiteral_11696/*"SERVANT_SELL_RARE_TEXT"*/);
    byte_4C52EC2 = 1;
  }
  manaWidth = 0;
  rarePriWidth = 0.0;
  if ( (unsigned int)kind <= 4 )
  {
    QpLabel = this->fields.QpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11695/*"SERVANT_SELL_QP_TEXT"*/, 0);
    if ( !QpLabel )
      goto LABEL_28;
    UILabel__set_text(QpLabel, v12, 0);
    QpNumLabel = this->fields.QpNumLabel;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_SELL_NUM_TEXT"*/, 0);
    v67 = getQp;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v16, v17, v18, v19, v20, v21);
    v12 = System_String__Format(v15, v22, 0);
    if ( !QpNumLabel )
      goto LABEL_28;
    UILabel__set_text(QpNumLabel, v12, 0);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.QP_NUM_LABEL_SIZE, 0, 0);
    ManaLabel = this->fields.ManaLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11688/*"SERVANT_SELL_MANA_TEXT"*/, 0);
    if ( !ManaLabel )
      goto LABEL_28;
    UILabel__set_text(ManaLabel, v12, 0);
    ManaNumLabel = this->fields.ManaNumLabel;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_SELL_NUM_TEXT"*/, 0);
    v66 = getMana;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v26, v27, v28, v29, v30, v31);
    v12 = System_String__Format(v25, v32, 0);
    if ( !ManaNumLabel )
      goto LABEL_28;
    UILabel__set_text(ManaNumLabel, v12, 0);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0, 0);
    RareLabel = this->fields.RareLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11696/*"SERVANT_SELL_RARE_TEXT"*/, 0);
    if ( !RareLabel )
      goto LABEL_28;
    UILabel__set_text(RareLabel, v12, 0);
    RareNumLabel = this->fields.RareNumLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_SELL_NUM_TEXT"*/, 0);
    v65 = getRarePri;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v36, v37, v38, v39, v40, v41);
    v12 = System_String__Format(v35, v42, 0);
    if ( !RareNumLabel )
      goto LABEL_28;
    UILabel__set_text(RareNumLabel, v12, 0);
    v12 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0, 0);
    RareLabel2 = this->fields.RareLabel2;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11697/*"SERVANT_SELL_RARE_TEXT2"*/, 0);
    if ( !RareLabel2 )
      goto LABEL_28;
    UILabel__set_text(RareLabel2, v12, 0);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(
                      this,
                      (float *)&manaWidth + 1,
                      (float *)&manaWidth,
                      &rarePriWidth,
                      v44);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_28;
    v46 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(gameObject, v46, 0);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_28;
    LODWORD(v48) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_28;
    v49 = v46 + v48;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    v51 = *((float *)&manaWidth + 1);
    GameObjectExtensions__SetLocalPositionX(v50, (float)(v49 + -250.0) + (float)(*((float *)&manaWidth + 1) * 0.5), 0);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_28;
    v52 = v49 + v51;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(v53, v52, 0);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_28;
    LODWORD(v54) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_28;
    v55 = v52 + v54;
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    v57 = *(float *)&manaWidth;
    GameObjectExtensions__SetLocalPositionX(v56, (float)(v55 + -250.0) + (float)(*(float *)&manaWidth * 0.5), 0);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12 )
      goto LABEL_28;
    v58 = v55 + v57;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(v59, v58, 0);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12
      || (LODWORD(v60) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0),
          (v12 = (System_String_o *)this->fields.RareNumLabel) == 0)
      || (v61 = v58 + v60,
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0),
          v63 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v62, (float)(v61 + -250.0) + (float)(rarePriWidth * 0.5), 0),
          (v12 = (System_String_o *)this->fields.RareLabel2) == 0) )
    {
LABEL_28:
      sub_1C3E7C0(v12, v13);
    }
    v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(v64, v61 + v63, 0);
  }
}


void ServantSellConfirmMenu__SetObjectsActive(ServantSellConfirmMenu_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsOnlyCloseButton; // x0
  __int64 v5; // x1
  char v6; // w20

  IsOnlyCloseButton = (UnityEngine_GameObject_o *)ServantSellConfirmMenu__GetIsOnlyCloseButton(this, kind, method);
  if ( !this->fields.decideButton )
    goto LABEL_10;
  v6 = (char)IsOnlyCloseButton;
  IsOnlyCloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.decideButton, 0);
  if ( !IsOnlyCloseButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(IsOnlyCloseButton, (v6 ^ 1) & 1, 0);
  IsOnlyCloseButton = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !IsOnlyCloseButton )
    goto LABEL_10;
  IsOnlyCloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOnlyCloseButton, 0);
  if ( !IsOnlyCloseButton
    || (UnityEngine_GameObject__SetActive(IsOnlyCloseButton, (v6 ^ 1) & 1, 0),
        (IsOnlyCloseButton = (UnityEngine_GameObject_o *)this->fields.closeButton) == 0)
    || (IsOnlyCloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOnlyCloseButton, 0)) == 0
    || (UnityEngine_GameObject__SetActive(IsOnlyCloseButton, v6 & 1, 0),
        (IsOnlyCloseButton = this->fields.commonInfoObj) == 0)
    || (UnityEngine_GameObject__SetActive(IsOnlyCloseButton, 1, 0),
        (IsOnlyCloseButton = this->fields.sellLastSvtWarningInfoObj) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(IsOnlyCloseButton, v5);
  }
  UnityEngine_GameObject__SetActive(IsOnlyCloseButton, 0, 0);
}


void ServantSellConfirmMenu__SetWarningText(
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
  *isNoWarning = System_String__IsNullOrEmpty(WarningText, 0);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    sub_1C3E7C0(0, v10);
  UILabel__set_text(warningLabel, WarningText, 0);
}


void ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C52EBA & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52EBA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE, 0);
  titleLabel = this->fields.info1Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.info1Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0);
  titleLabel = this->fields.info2Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.info2Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0);
  titleLabel = this->fields.info3Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.info3Label;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_INFO_LABEL_FONT_SIZE, 0);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.QpLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.QpNumLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.ManaLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.ManaNumLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.RareLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.RareNumLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.RareLabel2) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.upperLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.lowerLabel) == 0) )
  {
LABEL_26:
    sub_1C3E7C0(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ServantSellConfirmMenu__TransitionToCombineScene(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C52ECA & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C52ECA = 1;
  }
  this->fields.state = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
}


bool ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v2 = this;
  if ( (byte_4C52EB8 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4C52EB8 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1C3E7C0(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C52ED8 & 1) == 0 )
  {
    sub_1C3E564(&ServantSellConfirmMenu___c_TypeInfo);
    byte_4C52ED8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ServantSellConfirmMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSellConfirmMenu___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ServantSellConfirmMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantSellConfirmMenu___c___ctor(ServantSellConfirmMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantSellConfirmMenu___c___OpenSellEquippedLastSvtWarning_b__62_0(
        ServantSellConfirmMenu___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s == 0;
}