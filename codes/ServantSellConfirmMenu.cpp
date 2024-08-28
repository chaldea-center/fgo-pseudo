void __fastcall ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_long__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A0521A & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_1B686D4(&System_Collections_Generic_List_long__TypeInfo, v4);
    byte_4A0521A = 1;
  }
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_BA6AA0;
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  v5 = (System_Collections_Generic_List_long__o *)sub_1B68920(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_34A3A58 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v5;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellConfirmMenu__CallOnClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *onClose; // x19
  ServantStatusBattleListViewItem_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1B68678(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
  }
}


void __fastcall ServantSellConfirmMenu__CallOnSellServantConfirm(
        ServantSellConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_int__o *onSellServantConfirm; // x20
  ServantStatusBattleListViewItem_o *p_onSellServantConfirm; // x0

  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    p_onSellServantConfirm = (ServantStatusBattleListViewItem_o *)&this->fields.onSellServantConfirm;
    p_onSellServantConfirm->klass = 0LL;
    sub_1B68678(p_onSellServantConfirm, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onSellServantConfirm->fields.m_target)(
      onSellServantConfirm->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onSellServantConfirm->fields.extra_arg);
  }
}


void __fastcall ServantSellConfirmMenu__ClearCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_4A051FC & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4A051FC = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1B68930(this, method);
  v4 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v4;
}


void __fastcall ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_32570584(this, 0LL, v2);
}


void __fastcall ServantSellConfirmMenu__Close_32570584(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A0520A & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndClose__, v6);
    byte_4A0520A = 1;
  }
  this->fields.onClose = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0

  if ( (byte_4A05212 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A05212 = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0LL, 0LL) )
  {
    v5 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v5 )
      sub_1B68930(0LL, v4);
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
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A05218 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_ServantSellConfirmListViewItem__TypeInfo, method);
    sub_1B686D4(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v3);
    byte_4A05218 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v5 = (System_Action_object__o *)sub_1B68920(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0LL);
  if ( !servantSellConfirmListViewManager )
    sub_1B68930(v6, v7);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int32_t)v5,
    v8,
    v9);
  ServantSellConfirmListViewManager__SetMode_32554544(servantSellConfirmListViewManager, 2, v10);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A05215 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_ServantSellConfirmListViewItem__TypeInfo, method);
    sub_1B686D4(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v3);
    byte_4A05215 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v5 = (System_Action_object__o *)sub_1B68920(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0LL);
  if ( !servantSellConfirmListViewManager )
    sub_1B68930(v6, v7);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int32_t)v5,
    v8,
    v9);
  ServantSellConfirmListViewManager__SetMode_32554544(servantSellConfirmListViewManager, 2, v10);
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
  unsigned int kind; // w8
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_4A05209 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_ServantSellConfirmListViewItem__TypeInfo, method);
    sub_1B686D4(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v3);
    byte_4A05209 = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v6 = (System_Action_object__o *)sub_1B68920(System_Action_ServantSellConfirmListViewItem__TypeInfo);
    System_Action_object____ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      0LL);
    if ( !servantSellConfirmListViewManager )
      sub_1B68930(v7, v8);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v6;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (int32_t)v6,
      v9,
      v10);
    ServantSellConfirmListViewManager__SetMode_32554544(servantSellConfirmListViewManager, 2, v11);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_4A05217 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDecide);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A05217 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B68930(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_4A05214 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDecide);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndCloseShowServant__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A05214 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B68930(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
  unsigned int v9; // w22
  System_String_o *decideButton; // x0
  UILabel_o *closeLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21

  if ( (byte_4A05201 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&StringLiteral_11594/*"SERVANT_SELL_CLOSE"*/, v5);
    sub_1B686D4(&StringLiteral_11595/*"SERVANT_SELL_DECIDE"*/, v6);
    sub_1B686D4(&StringLiteral_11593/*"SERVANT_SELL_CANCEL"*/, v7);
    sub_1B686D4(&StringLiteral_1/*""*/, v8);
    byte_4A05201 = 1;
  }
  v9 = kind - 4;
  if ( kind == 4 || v9 > 9 )
  {
    decideLabel = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11595/*"SERVANT_SELL_DECIDE"*/, 0LL);
    if ( decideLabel )
    {
      UILabel__set_text(decideLabel, decideButton, 0LL);
      cancelLabel = this->fields.cancelLabel;
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11593/*"SERVANT_SELL_CANCEL"*/, 0LL);
      if ( cancelLabel )
      {
        UILabel__set_text(cancelLabel, decideButton, 0LL);
        decideButton = (System_String_o *)this->fields.decideButton;
        if ( decideButton )
        {
          ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
            decideButton,
            0LL,
            0LL,
            decideButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
          decideButton = (System_String_o *)this->fields.cancelButton;
          if ( decideButton )
          {
            ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
              decideButton,
              0LL,
              0LL,
              decideButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
            return kind != 4 && v9 < 0xA;
          }
        }
      }
    }
LABEL_19:
    sub_1B68930(decideButton, *(_QWORD *)&kind);
  }
  decideButton = (System_String_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_19;
  ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
    decideButton,
    0LL,
    0LL,
    decideButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SERVANT_SELL_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, decideButton, 0LL);
  decideButton = (System_String_o *)this->fields.warningLabel;
  if ( !decideButton )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)decideButton, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  return kind != 4 && v9 < 0xA;
}


bool __fastcall ServantSellConfirmMenu__GetIsQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o **title,
        System_String_o **message,
        System_String_o **getable,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v6; // x19
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  void *v24; // x0
  __int64 v25; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t mana; // w23
  int32_t getMana; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v30; // x0
  __int64 *v31; // x8
  struct UserGameEntity_o *v32; // x9
  int32_t rarePri; // w23
  int32_t getRarePri; // w24
  System_String_o *v35; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  bool v40; // w20
  struct UserGameEntity_o *v42; // x9
  int32_t qp; // w23
  int32_t QpMax; // w8
  struct UserGameEntity_o *v45; // x9
  int32_t v46; // w23
  int32_t getQP; // w24
  System_String_o *v48; // x23
  _QWORD *v49; // x24
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  System_String_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct UserGameEntity_o *v56; // x8
  System_String_o *v57; // x21
  System_String_o *v58; // x0
  BalanceConfig_c *v59; // x8
  Il2CppObject *v60; // x23
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x19
  Il2CppObject *v66; // x0
  System_String_o *v67; // x22
  _QWORD *v68; // x23
  __int64 v69; // x8
  __int64 v70; // x0
  __int64 v71; // x0
  System_String_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  struct UserGameEntity_o *v75; // x8
  System_String_o *v76; // x20
  System_String_o *NumberFormat; // x0
  BalanceConfig_c *v78; // x8
  Il2CppObject *v79; // x21
  Il2CppObject *v80; // x0

  v6 = (ServantStatusBattleListViewItem_o *)message;
  if ( (byte_4A0520E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Array_Empty_object___, title);
    sub_1B686D4(&BalanceConfig_TypeInfo, v9);
    sub_1B686D4(&LocalizationManager_TypeInfo, v10);
    sub_1B686D4(&StringLiteral_12046/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, v11);
    sub_1B686D4(&StringLiteral_12047/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, v12);
    sub_1B686D4(&StringLiteral_12044/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, v13);
    sub_1B686D4(&StringLiteral_8471/*"MANA_NAME"*/, v14);
    sub_1B686D4(&StringLiteral_10903/*"RARE_PRI_NAME"*/, v15);
    sub_1B686D4(&StringLiteral_12048/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v16);
    sub_1B686D4(&StringLiteral_12049/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, v17);
    sub_1B686D4(&StringLiteral_12045/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, v18);
    sub_1B686D4(&StringLiteral_1/*""*/, v19);
    byte_4A0520E = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)title, (int32_t)StringLiteral_1/*""*/, (int32_t)message, (int32_t)getable);
  v6->klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  sub_1B68678(v6, (int32_t)StringLiteral_1/*""*/, v20, v21);
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)getable, (int32_t)StringLiteral_1/*""*/, v22, v23);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_57;
  mana = userGameEntity->fields.mana;
  getMana = this->fields.getMana;
  v24 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)v24 + 23);
  if ( getMana + mana <= static_fields->ManaMax )
  {
    v32 = this->fields.userGameEntity;
    if ( v32 )
    {
      rarePri = v32->fields.rarePri;
      getRarePri = this->fields.getRarePri;
      if ( !*((_DWORD *)v24 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = BalanceConfig_TypeInfo;
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      if ( getRarePri + rarePri > static_fields->RarePriMax )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12044/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
        v31 = &StringLiteral_10903/*"RARE_PRI_NAME"*/;
        goto LABEL_17;
      }
      v42 = this->fields.userGameEntity;
      if ( v42 )
      {
        qp = v42->fields.qp;
        if ( !*((_DWORD *)v24 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = BalanceConfig_TypeInfo;
          static_fields = BalanceConfig_TypeInfo->static_fields;
        }
        QpMax = static_fields->QpMax;
        if ( qp >= QpMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12046/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0LL);
          v68 = Method_System_Array_Empty_object___;
          v69 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
          if ( !v69 )
          {
            sub_1BBA60C(Method_System_Array_Empty_object___);
            v69 = v68[7];
          }
          v70 = *(_QWORD *)(v69 + 16);
          if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
            v70 = sub_1BBA5B0(v70);
          if ( !*(_DWORD *)(v70 + 224) )
            j_il2cpp_runtime_class_init_0(v70);
          v71 = *(_QWORD *)(v68[7] + 16LL);
          if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
            v71 = sub_1BBA5B0(v71);
          v72 = System_String__Format_61433976(v67, **(System_Object_array ***)(v71 + 184), 0LL);
          *title = v72;
          sub_1B68678((ServantStatusBattleListViewItem_o *)title, (int32_t)v72, v73, v74);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12045/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0LL);
          v75 = this->fields.userGameEntity;
          if ( v75 )
          {
            v76 = (System_String_o *)v24;
            NumberFormat = LocalizationManager__GetNumberFormat(v75->fields.qp, 0LL);
            v78 = BalanceConfig_TypeInfo;
            v79 = (Il2CppObject *)NumberFormat;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v78 = BalanceConfig_TypeInfo;
            }
            v80 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v78->static_fields->QpMax, 0LL);
            v37 = System_String__Format_61433840(v76, v79, v80, 0LL);
            v40 = 1;
            goto LABEL_18;
          }
        }
        else
        {
          v45 = this->fields.userGameEntity;
          if ( v45 )
          {
            v46 = v45->fields.qp;
            getQP = this->fields.getQP;
            if ( !*((_DWORD *)v24 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v24);
              QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
            }
            if ( getQP + v46 <= QpMax )
              return 0;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12049/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0LL);
            v49 = Method_System_Array_Empty_object___;
            v50 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
            if ( !v50 )
            {
              sub_1BBA60C(Method_System_Array_Empty_object___);
              v50 = v49[7];
            }
            v51 = *(_QWORD *)(v50 + 16);
            if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
              v51 = sub_1BBA5B0(v51);
            if ( !*(_DWORD *)(v51 + 224) )
              j_il2cpp_runtime_class_init_0(v51);
            v52 = *(_QWORD *)(v49[7] + 16LL);
            if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
              v52 = sub_1BBA5B0(v52);
            v53 = System_String__Format_61433976(v48, **(System_Object_array ***)(v52 + 184), 0LL);
            *title = v53;
            sub_1B68678((ServantStatusBattleListViewItem_o *)title, (int32_t)v53, v54, v55);
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12048/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
            v56 = this->fields.userGameEntity;
            if ( v56 )
            {
              v57 = (System_String_o *)v24;
              v58 = LocalizationManager__GetNumberFormat(v56->fields.qp, 0LL);
              v59 = BalanceConfig_TypeInfo;
              v60 = (Il2CppObject *)v58;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v59 = BalanceConfig_TypeInfo;
              }
              v61 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v59->static_fields->QpMax, 0LL);
              v62 = System_String__Format_61433840(v57, v60, v61, 0LL);
              v6->klass = (ServantStatusBattleListViewItem_c *)v62;
              sub_1B68678(v6, (int32_t)v62, v63, v64);
              v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12047/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0LL);
              v66 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0LL);
              v37 = System_String__Format(v65, v66, 0LL);
              v40 = 1;
              v6 = (ServantStatusBattleListViewItem_o *)getable;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_57:
    sub_1B68930(v24, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12044/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
  v31 = &StringLiteral_8471/*"MANA_NAME"*/;
LABEL_17:
  v35 = v30;
  v36 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
  v37 = System_String__Format(v35, v36, 0LL);
  v40 = 0;
LABEL_18:
  v6->klass = (ServantStatusBattleListViewItem_c *)v37;
  sub_1B68678(v6, (int32_t)v37, v38, v39);
  return v40;
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
  if ( (byte_4A05207 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&StringLiteral_11546/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/, v7);
    sub_1B686D4(&StringLiteral_11516/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/, v8);
    sub_1B686D4(&StringLiteral_11545/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/, v9);
    sub_1B686D4(&StringLiteral_11604/*"SERVANT_SELL_MESSAGE_ERROR"*/, v10);
    sub_1B686D4(&StringLiteral_11606/*"SERVANT_SELL_MESSAGE_START"*/, v11);
    sub_1B686D4(&StringLiteral_11605/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/, v12);
    sub_1B686D4(&StringLiteral_11544/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/, v13);
    sub_1B686D4(&StringLiteral_11515/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/, v14);
    sub_1B686D4(&StringLiteral_11486/*"SERVANT_ALL_SELL_MESSAGE_END"*/, v15);
    sub_1B686D4(&StringLiteral_1/*""*/, v16);
    sub_1B686D4(&StringLiteral_11514/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/, v17);
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&StringLiteral_11487/*"SERVANT_ALL_SELL_MESSAGE_START"*/, v18);
    byte_4A05207 = 1;
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
        v19 = &StringLiteral_11487/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_1B68930(this, *(_QWORD *)&kind);
      max_length = servantTypeFlags->max_length;
      if ( !max_length )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[4] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11606/*"SERVANT_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      if ( max_length <= 1 )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[5] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11546/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      if ( max_length <= 2 )
LABEL_47:
        sub_1B68938(this, *(_QWORD *)&kind);
      if ( servantTypeFlags->m_Items[6] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = &StringLiteral_11514/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
        return LocalizationManager__Get((System_String_o *)*v19, 0LL);
      }
      return (System_String_o *)StringLiteral_1/*""*/;
    case 5:
    case 6:
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11486/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11604/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11544/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11515/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11605/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11545/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v19, 0LL);
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_11516/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
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
    sub_1B68930(QpNumLabel, qpWidth);
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
  if ( (byte_4A05208 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&StringLiteral_11517/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/, v11);
    sub_1B686D4(&StringLiteral_89/*"\r\n"*/, v12);
    sub_1B686D4(&StringLiteral_11613/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, v13);
    sub_1B686D4(&StringLiteral_11488/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/, v14);
    sub_1B686D4(&StringLiteral_11474/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/, v15);
    sub_1B686D4(&StringLiteral_11596/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, v16);
    sub_1B686D4(&StringLiteral_11547/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/, v17);
    sub_1B686D4(&StringLiteral_1/*""*/, v18);
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&StringLiteral_11577/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/, v19);
    byte_4A05208 = 1;
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
      v21 = &StringLiteral_11474/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v21, 0LL);
    }
    *(_QWORD *)&kind = v10->fields.isRareFlags;
    if ( isMaterial )
    {
      if ( !*(_QWORD *)&kind )
        goto LABEL_56;
      v25 = *(_DWORD *)(*(_QWORD *)&kind + 24LL);
      if ( !v25 )
        goto LABEL_55;
      if ( !*(_BYTE *)(*(_QWORD *)&kind + 32LL) )
      {
        if ( v25 <= 1 )
          goto LABEL_55;
        if ( !*(_BYTE *)(*(_QWORD *)&kind + 33LL) )
        {
          if ( v25 <= 2 )
            goto LABEL_55;
          if ( !*(_BYTE *)(*(_QWORD *)&kind + 34LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v21 = &StringLiteral_11577/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_11488/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
      return LocalizationManager__Get((System_String_o *)*v21, 0LL);
    }
    isRareFlags = v10->fields.isRareFlags;
    if ( !isRareFlags )
      goto LABEL_56;
    max_length = isRareFlags->max_length;
    if ( max_length )
    {
      if ( isRareFlags->m_Items[4] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = &StringLiteral_11613/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
        return LocalizationManager__Get((System_String_o *)*v21, 0LL);
      }
      if ( max_length > 1 )
      {
        if ( isRareFlags->m_Items[5] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v21 = &StringLiteral_11547/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v21, 0LL);
        }
        if ( max_length > 2 )
        {
          if ( !isRareFlags->m_Items[6] )
            return (System_String_o *)StringLiteral_1/*""*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v21 = &StringLiteral_11517/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v21, 0LL);
        }
      }
    }
LABEL_55:
    sub_1B68938(this, *(_QWORD *)&kind);
  }
  if ( isMaterial )
    goto LABEL_17;
  v22 = v10->fields.isRareFlags;
  if ( !v22 )
LABEL_56:
    sub_1B68930(this, *(_QWORD *)&kind);
  if ( v22->max_length <= 2 )
    goto LABEL_55;
  if ( !v22->m_Items[6] && !v22->m_Items[5] && !v22->m_Items[4] )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_11596/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v21, 0LL);
  }
LABEL_17:
  v10->fields.isTwoLinesWarning = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11613/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11596/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0LL);
  return System_String__Concat_61430728(v23, (System_String_o *)StringLiteral_89/*"\r\n"*/, v24, 0LL);
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
  bool v6; // w13

  if ( !flags )
    sub_1B68930(this, 0LL);
  if ( (int)*(_QWORD *)&flags->max_length < 1 )
  {
    return 0;
  }
  else
  {
    v3 = (unsigned int)*(_QWORD *)&flags->max_length;
    v4 = 0LL;
    v5 = 0;
    v6 = 1;
    do
    {
      if ( flags->m_Items[v4 + 4] && ++v5 > 1 )
        break;
      v6 = ++v4 < (int)v3;
    }
    while ( v3 != v4 );
  }
  return v6;
}


void __fastcall ServantSellConfirmMenu__ModifyItem(
        ServantSellConfirmMenu_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0

  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  if ( !servantSellConfirmListViewManager )
    sub_1B68930(0LL, selectedId);
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void __fastcall ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v5; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4A05210 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_long__Clear__, method);
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&Method_ServantSellConfirmMenu_OnClickCancel__, v3);
    byte_4A05210 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( v2->fields.kind == 4 )
    {
      lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_1B68930(this, method);
      v5 = lastSvtCommandCodeList->fields._version + 1;
      lastSvtCommandCodeList->fields._size = 0;
      lastSvtCommandCodeList->fields._version = v5;
    }
    v2->fields.state = 3;
    v6 = Method_ServantSellConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B686EC(Method_ServantSellConfirmMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(v2, 0, v8);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A05211 & 1) == 0 )
  {
    sub_1B686D4(&Method_ServantSellConfirmMenu_OnClickClose__, method);
    byte_4A05211 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_ServantSellConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x4
  Il2CppObject *Instance; // x0
  System_String_o *v14; // x20
  CommonUI_o *v15; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *getable; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-40h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A0520B & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v4);
    sub_1B686D4(&Method_ServantSellConfirmMenu_OnClickDecide__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&StringLiteral_1/*""*/, v7);
    byte_4A0520B = 1;
  }
  if ( this->fields.state == 2 )
  {
    message = (System_String_o *)StringLiteral_1/*""*/;
    title = (System_String_o *)StringLiteral_1/*""*/;
    getable = (System_String_o *)StringLiteral_1/*""*/;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v2);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1/*""*/, 0LL) || this->fields.isMaxQpChecked )
    {
      ServantSellConfirmMenu__SellServantDecide(this, v9);
    }
    else
    {
      v10 = Method_ServantSellConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B686EC(Method_ServantSellConfirmMenu_OnClickDecide__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B686B8(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      if ( IsQpMaxAlert )
      {
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v12);
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = message;
        v15 = (CommonUI_o *)Instance;
        v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
        if ( !v15 )
          sub_1B68930(v17, v18);
        CommonUI__OpenNotificationDialog(
          v15,
          (System_String_o *)StringLiteral_1/*""*/,
          v14,
          v16,
          -1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0LL,
          0.0,
          0LL);
      }
    }
  }
}


void __fastcall ServantSellConfirmMenu__OnEnable(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4A05219 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_15584/*"Window/Objects/CancelButton"*/, method);
    sub_1B686D4(&StringLiteral_15585/*"Window/Objects/CloseButton"*/, v3);
    byte_4A05219 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41516588(transform, (System_String_o *)StringLiteral_15584/*"Window/Objects/CancelButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41516588(v5, (System_String_o *)StringLiteral_15585/*"Window/Objects/CloseButton"*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__OnSelectCommandCodeDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22

  if ( (byte_4A05216 & 1) == 0 )
  {
    sub_1B686D4(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndShowCommandCode__, v5);
    sub_1B686D4(&Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A05216 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B686EC(Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B686B8(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v11),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v14 = (CommonUI_o *)Instance,
          v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B68920(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v15,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0LL),
          !v14) )
    {
      sub_1B68930(v10, v11);
    }
    CommonUI__OpenServantStatusDialog_30375632(v14, 32, UserCommandCodeEntity_k__BackingField, v15, 0LL, 0LL);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v13; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  const MethodInfo *v15; // x2

  v4 = this;
  if ( (byte_4A05213 & 1) == 0 )
  {
    sub_1B686D4(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndShowServant__, v5);
    sub_1B686D4(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v6);
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A05213 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v8 = Method_ServantSellConfirmMenu_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectServantDetail__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B686EC(Method_ServantSellConfirmMenu_OnSelectServantDetail__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B686B8(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v10);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v13 = (CommonUI_o *)Instance;
      v14 = (ServantStatusDialog_EndDelegate_o *)sub_1B68920(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_ServantSellConfirmMenu_EndShowServant__,
        0LL);
      if ( v13 )
      {
        CommonUI__OpenServantStatusDialog_30372308(v13, 29, servantStatusId, v14, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1B68930(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(v4, selectItem, v15);
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
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UILabel_o *titleLabel; // x23
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  bool v28; // w24
  _BOOL4 v29; // w23
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x5
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v37; // w9
  System_Action_o *v38; // x20
  bool isNoWarning; // [xsp+8h] [xbp-48h] BYREF
  bool isEquipedCommandCode; // [xsp+Ch] [xbp-44h] BYREF
  bool isExceeded; // [xsp+18h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A051FE & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_1B686D4(&LocalizationManager_TypeInfo, v12);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndOpen__, v13);
    sub_1B686D4(&StringLiteral_11614/*"SERVANT_SELL_TITLE"*/, v14);
    byte_4A051FE = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  isNoWarning = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( !this->fields.state )
  {
    if ( !byte_4A03901 )
    {
      sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4A03901 = 1;
    }
    this->fields.kind = kind;
    this->fields.onSellServantConfirm = onSellServantConfirm;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.onSellServantConfirm,
      (int32_t)onSellServantConfirm,
      v16,
      v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v21, v22);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11614/*"SERVANT_SELL_TITLE"*/, 0LL);
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
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v24);
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
                v25);
              ServantSellConfirmMenu__SetMessageStatusByCommandCode(this, commandCodeIdList, v26);
              this->fields.isTwoLinesWarning = 0;
              ServantSellConfirmMenu__SetMessageText(this, kind, v27);
              v28 = isExceeded;
              v29 = isEquipedCommandCode;
              ServantSellConfirmMenu__SetWarningText(
                this,
                kind,
                isMaterial,
                isExceeded,
                isEquipedCommandCode,
                &isNoWarning,
                v30);
              ServantSellConfirmMenu__SetInfoLabels(this, kind, isNoWarning, v31);
              ServantSellConfirmMenu__SetNumLabels(
                this,
                kind,
                this->fields.getQP,
                this->fields.getMana,
                this->fields.getRarePri,
                v32);
              ServantSellConfirmMenu__SetListViewManager(this, kind, servantIdList, commandCodeIdList, v28, v33);
              gameObject = this->fields.listViewBg;
              if ( gameObject )
              {
                v34 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                GameObjectExtensions__SetLocalPositionY(v34, 90.0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
                if ( gameObject )
                {
                  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v35, 140.0, 0LL);
                  if ( v29 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_21;
                  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
                  if ( lastSvtCommandCodeList )
                  {
                    v37 = lastSvtCommandCodeList->fields._version + 1;
                    lastSvtCommandCodeList->fields._size = 0;
                    lastSvtCommandCodeList->fields._version = v37;
LABEL_21:
                    this->fields.state = 1;
                    v38 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
                    System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1B68930(gameObject, v19);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x4
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v26; // x20

  if ( (byte_4A05200 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_1B686D4(&LocalizationManager_TypeInfo, v8);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndOpen__, v9);
    sub_1B686D4(&StringLiteral_3712/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v10);
    sub_1B686D4(&StringLiteral_11594/*"SERVANT_SELL_CLOSE"*/, v11);
    sub_1B686D4(&StringLiteral_3713/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v12);
    byte_4A05200 = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_28;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v15 = System_Linq_Enumerable__Distinct_long_(
            lastSvtCommandCodeList,
            (const MethodInfo_2E68A8C *)Method_System_Linq_Enumerable_Distinct_long___);
    v16 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                              v15,
                                                              (const MethodInfo_2E85920 *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v16;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v16, v17, v18);
    this->fields.onSellServantConfirm = callback;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.onSellServantConfirm, (int32_t)callback, v19, v20);
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
              v21);
            lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.listViewBg;
            if ( lastSvtCommandCodeList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
              titleLabel = this->fields.titleLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3713/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0LL);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3712/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
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
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SERVANT_SELL_CLOSE"*/, 0LL);
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
                                        v26 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v26,
                                          (Il2CppObject *)this,
                                          Method_ServantSellConfirmMenu_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
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
    sub_1B68930(lastSvtCommandCodeList, v13);
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
  System_Action_o *v22; // x29
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // [xsp+18h] [xbp-78h]

  if ( (byte_4A0520C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, title);
    sub_1B686D4(&LocalizationManager_TypeInfo, v8);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v9);
    sub_1B686D4(&Method_ServantSellConfirmMenu_SellServantDecide__, v10);
    sub_1B686D4(&Method_ServantSellConfirmMenu_TransitionToCombineScene__, v11);
    sub_1B686D4(&StringLiteral_11609/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v12);
    sub_1B686D4(&StringLiteral_11608/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v13);
    sub_1B686D4(&StringLiteral_11615/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v14);
    byte_4A0520C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11609/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11615/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11608/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v19 = v17;
  v20 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, (intptr_t)Method_ServantSellConfirmMenu_SellServantDecide__, 0LL);
  onTransition = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_TransitionToCombineScene__,
    0LL);
  v22 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
  if ( !servantSellMaxAlertDialog )
    sub_1B68930(v23, v24);
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
  int64_t gameObject; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v31; // w9
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UILabel_o *titleLabel; // x21
  const MethodInfo *v36; // x5
  const MethodInfo *v37; // x4
  __int64 v38; // x8
  unsigned __int64 v39; // x25
  int64_t v40; // x21
  int32_t SvtId; // w21
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_long__o *v43; // x21
  System_Predicate_long__o *v44; // x22
  Il2CppObject *v45; // x23
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  UILabel_o *decideLabel; // x20
  System_Action_o *v57; // x20
  bool isEquipedCommandCode; // [xsp+4h] [xbp-6Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-68h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A051FF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__Clear__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_long__RemoveAll__, v14);
    sub_1B686D4(&LocalizationManager_TypeInfo, v15);
    sub_1B686D4(&NetworkManager_TypeInfo, v16);
    sub_1B686D4(&System_Predicate_long__TypeInfo, v17);
    sub_1B686D4(&Method_ServantSellConfirmMenu_EndOpen__, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B686D4(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__, v20);
    sub_1B686D4(&ServantSellConfirmMenu___c_TypeInfo, v21);
    sub_1B686D4(&StringLiteral_11476/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v22);
    sub_1B686D4(&StringLiteral_3733/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_1B686D4(&StringLiteral_11475/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, v24);
    sub_1B686D4(&StringLiteral_11614/*"SERVANT_SELL_TITLE"*/, v25);
    byte_4A051FF = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( kind == 4 && !this->fields.state )
  {
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_46;
    v31 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v31;
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.onSellServantConfirm, (int32_t)callback, v28, v29);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    *(_QWORD *)&this->fields.getQP = 0LL;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v33, v34);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11614/*"SERVANT_SELL_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_46;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v36);
    gameObject = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_46;
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_46;
    ServantSellConfirmListViewManager__CreateSortServantList(
      (ServantSellConfirmListViewManager_o *)gameObject,
      servantIdList,
      isExceeded,
      1,
      v37);
    gameObject = (int64_t)this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_46;
    v38 = *(_QWORD *)&servantIdList->max_length;
    if ( (int)v38 >= 1 )
    {
      v39 = 0LL;
      while ( 1 )
      {
        if ( v39 >= (unsigned int)v38 )
          sub_1B68938(gameObject, v27);
        v40 = servantIdList->m_Items[v39];
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !gameObject )
          break;
        gameObject = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                v40,
                                (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !gameObject )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager__get_UserId(0LL);
        if ( !MasterData_object )
          break;
        gameObject = (int64_t)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                (UserServantCommandCodeMaster_o *)MasterData_object,
                                gameObject,
                                SvtId,
                                0LL);
        if ( gameObject )
        {
          v27 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          gameObject = (int64_t)this->fields.lastSvtCommandCodeList;
          if ( !gameObject )
            break;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)gameObject,
            v27,
            (const MethodInfo_34A44B8 *)Method_System_Collections_Generic_List_long__AddRange__);
          gameObject = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          v43 = this->fields.lastSvtCommandCodeList;
          if ( !ServantSellConfirmMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantSellConfirmMenu___c_TypeInfo);
            gameObject = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          }
          v44 = *(System_Predicate_long__o **)(*(_QWORD *)(gameObject + 184) + 8LL);
          if ( !v44 )
          {
            if ( !*(_DWORD *)(gameObject + 224) )
            {
              j_il2cpp_runtime_class_init_0(gameObject);
              gameObject = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
            }
            v45 = **(Il2CppObject ***)(gameObject + 184);
            v44 = (System_Predicate_long__o *)sub_1B68920(System_Predicate_long__TypeInfo);
            System_Predicate_long____ctor(
              v44,
              v45,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              0LL);
            static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            static_fields->__9__62_0 = v44;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)v44, v47, v48);
          }
          if ( !v43 )
            break;
          gameObject = System_Collections_Generic_List_long___RemoveAll(
                         v43,
                         (System_Predicate_T__o *)v44,
                         (const MethodInfo_34A58D4 *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(v38) = servantIdList->max_length;
        if ( (__int64)++v39 >= (int)v38 )
          goto LABEL_36;
      }
LABEL_46:
      sub_1B68930(gameObject, v27);
    }
LABEL_36:
    upperLabel = this->fields.upperLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11475/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_46;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11476/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
    if ( !lowerLabel )
      goto LABEL_46;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (int64_t)this->fields.lowerLabel;
    if ( !gameObject )
      goto LABEL_46;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v51, -140.0, 0LL);
    gameObject = (int64_t)this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_46;
    v52 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v52, 44.0, 0LL);
    gameObject = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_46;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v53, 94.0, 0LL);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v54);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v55);
    decideLabel = this->fields.decideLabel;
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_46;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v57 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A0520F & 1) == 0 )
  {
    sub_1B686D4(&Method_ServantSellConfirmMenu_SellServantDecide__, method);
    byte_4A0520F = 1;
  }
  this->fields.isMaxQpChecked = 1;
  this->fields.state = 3;
  v3 = Method_ServantSellConfirmMenu_SellServantDecide__;
  if ( this->fields.kind > 3u )
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_ServantSellConfirmMenu_SellServantDecide__);
    v4 = 0;
  }
  else
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_ServantSellConfirmMenu_SellServantDecide__);
    v4 = 8;
  }
  v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0LL);
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 1, v6);
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
  UILabel_o *info3Label; // x21
  ServantSellConfirmMenu_o *v17; // x0
  const MethodInfo *v18; // x2
  ServantSellConfirmMenu_o *v19; // x0
  const MethodInfo *v20; // x2
  ServantSellConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x2
  float v23; // s0
  ServantSellConfirmMenu_o *v24; // x0
  const MethodInfo *v25; // x2
  int v26; // w8
  UILabel_o **p_info3Label; // x22
  ServantSellConfirmMenu_o *v28; // x0
  const MethodInfo *v29; // x2
  ServantSellConfirmMenu_o *v30; // x0
  const MethodInfo *v31; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w25
  BalanceConfig_c *v34; // x0
  int32_t QpMax; // w26
  UILabel_o *v36; // x20
  System_String_o **v37; // x8
  struct UserGameEntity_o *v38; // x8
  ServantSellConfirmMenu_o *v39; // x21
  Il2CppObject *NumberFormat; // x0
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v42; // x8
  ServantSellConfirmMenu_o *v43; // x21
  Il2CppObject *v44; // x0
  UILabel_o *v45; // x20
  struct UserGameEntity_o *v46; // x8
  ServantSellConfirmMenu_o *v47; // x21
  Il2CppObject *v48; // x0
  __int64 v49; // x8
  float v50; // s8
  ServantSellConfirmMenu_o *v51; // x0
  const MethodInfo *v52; // x2
  ServantSellConfirmMenu_o *v53; // x0
  const MethodInfo *v54; // x2
  ServantSellConfirmMenu_o *v55; // x0
  const MethodInfo *v56; // x2
  struct UserGameEntity_o *v57; // x8
  BalanceConfig_c *v58; // x0
  int32_t v59; // w21
  UILabel_o *v60; // x20
  int32_t v61; // w23
  struct UserGameEntity_o *v62; // x8
  ServantSellConfirmMenu_o *v63; // x19
  Il2CppObject *v64; // x0
  float v65; // s0
  struct UserGameEntity_o *v66; // x8
  ServantSellConfirmMenu_o *v67; // x21
  Il2CppObject *v68; // x0

  v6 = this;
  if ( (byte_4A05204 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_11602/*"SERVANT_SELL_INFO7"*/, v8);
    sub_1B686D4(&StringLiteral_11597/*"SERVANT_SELL_INFO2_ALERT"*/, v9);
    sub_1B686D4(&StringLiteral_11601/*"SERVANT_SELL_INFO6"*/, v10);
    sub_1B686D4(&StringLiteral_11599/*"SERVANT_SELL_INFO3"*/, v11);
    sub_1B686D4(&StringLiteral_1/*""*/, v12);
    sub_1B686D4(&StringLiteral_11598/*"SERVANT_SELL_INFO2_NORMAL"*/, v13);
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&StringLiteral_11600/*"SERVANT_SELL_INFO5"*/, v14);
    byte_4A05204 = 1;
  }
  if ( (unsigned int)kind <= 0xD )
  {
    if ( ((1 << kind) & 0x3F00) != 0 )
    {
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_62;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
      if ( !this )
        goto LABEL_62;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      p_info3Label = &v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)v6->fields.info3Label;
      if ( !this )
        goto LABEL_62;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v28, v6->fields.info1Label, -50.0, v29);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v30, v6->fields.info2Label, -78.0, v31);
      v26 = -1026293760;
    }
    else
    {
      if ( ((1 << kind) & 0x1F) != 0 )
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
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SERVANT_SELL_INFO6"*/, 0LL);
              if ( info1Label )
              {
                UILabel__set_text(info1Label, (System_String_o *)this, 0LL);
                this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  info3Label = v6->fields.info3Label;
                  this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11602/*"SERVANT_SELL_INFO7"*/,
                                                       0LL);
                  if ( info3Label )
                  {
                    UILabel__set_text(info3Label, (System_String_o *)this, 0LL);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v17, v6->fields.info1Label, -92.0, v18);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v19, v6->fields.info2Label, -115.0, v20);
                    v23 = -162.0;
                    if ( isNoWarning )
                      v23 = -139.0;
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v21, v6->fields.info3Label, v23, v22);
                    if ( v6->fields.isTwoLinesWarning )
                    {
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v24, v6->fields.info3Label, -176.0, v25);
                      v26 = -1022164992;
                    }
                    else
                    {
                      v26 = -1022689280;
                    }
                    p_info3Label = &v6->fields.warningLabel;
                    goto LABEL_59;
                  }
                }
              }
            }
          }
        }
LABEL_62:
        sub_1B68930(this, *(_QWORD *)&kind);
      }
      userGameEntity = v6->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_62;
      qp = userGameEntity->fields.qp;
      v34 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v34 = BalanceConfig_TypeInfo;
      }
      QpMax = v34->static_fields->QpMax;
      p_info3Label = &v6->fields.info1Label;
      v36 = v6->fields.info1Label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = (System_String_o **)(qp >= QpMax ? &StringLiteral_11597/*"SERVANT_SELL_INFO2_ALERT"*/ : &StringLiteral_11598/*"SERVANT_SELL_INFO2_NORMAL"*/);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(*v37, 0LL);
      v38 = v6->fields.userGameEntity;
      if ( !v38 )
        goto LABEL_62;
      v39 = this;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v38->fields.qp, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v39, NumberFormat, 0LL);
      if ( !v36 )
        goto LABEL_62;
      UILabel__set_text(v36, (System_String_o *)this, 0LL);
      info2Label = v6->fields.info2Label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11599/*"SERVANT_SELL_INFO3"*/, 0LL);
      v42 = v6->fields.userGameEntity;
      if ( !v42 )
        goto LABEL_62;
      v43 = this;
      v44 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v42->fields.mana, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v43, v44, 0LL);
      if ( !info2Label )
        goto LABEL_62;
      UILabel__set_text(info2Label, (System_String_o *)this, 0LL);
      v45 = v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11600/*"SERVANT_SELL_INFO5"*/, 0LL);
      v46 = v6->fields.userGameEntity;
      if ( !v46 )
        goto LABEL_62;
      v47 = this;
      v48 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v46->fields.rarePri, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v47, v48, 0LL);
      if ( !v45 )
        goto LABEL_62;
      UILabel__set_text(v45, (System_String_o *)this, 0LL);
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_62;
      v49 = 100LL;
      if ( qp < QpMax )
        v49 = 104LL;
      v50 = qp >= QpMax ? 49.0 : 10.0;
      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v49), 0LL);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v51, v6->fields.info1Label, v50, v52);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v53, v6->fields.info2Label, -50.0, v54);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v55, v6->fields.info3Label, -110.0, v56);
      v57 = v6->fields.userGameEntity;
      if ( !v57 )
        goto LABEL_62;
      v58 = BalanceConfig_TypeInfo;
      v59 = v57->fields.qp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v58 = BalanceConfig_TypeInfo;
      }
      v60 = *p_info3Label;
      v61 = v58->static_fields->QpMax;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v59 < v61 )
      {
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11598/*"SERVANT_SELL_INFO2_NORMAL"*/, 0LL);
        v62 = v6->fields.userGameEntity;
        if ( v62 )
        {
          v63 = this;
          v64 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v62->fields.qp, 0LL);
          this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v63, v64, 0LL);
          if ( v60 )
          {
            UILabel__set_text(v60, (System_String_o *)this, 0LL);
            v65 = 10.0;
LABEL_60:
            ServantSellConfirmMenu__SetLabelLocalPositionY(v24, *p_info3Label, v65, v25);
            return;
          }
        }
        goto LABEL_62;
      }
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11597/*"SERVANT_SELL_INFO2_ALERT"*/, 0LL);
      v66 = v6->fields.userGameEntity;
      if ( !v66 )
        goto LABEL_62;
      v67 = this;
      v68 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v66->fields.qp, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v67, v68, 0LL);
      if ( !v60 )
        goto LABEL_62;
      UILabel__set_text(v60, (System_String_o *)this, 0LL);
      this = (ServantSellConfirmMenu_o *)*p_info3Label;
      if ( !*p_info3Label )
        goto LABEL_62;
      UILabel__set_fontSize((UILabel_o *)this, v6->fields.ALERT_MESSAGE_LABEL_FONT_SIZE, 0LL);
      v26 = 1111752704;
    }
LABEL_59:
    v65 = *(float *)&v26;
    goto LABEL_60;
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
    sub_1B68930(this, label);
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
      sub_1B68930(servantSellConfirmListViewManager, *(_QWORD *)&kind);
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
  int32_t getMana; // w29
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8

  v4 = this;
  if ( (byte_4A05203 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds);
    sub_1B686D4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A05203 = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_1B68930(this, commandCodeIds);
    servantTypeFlags = *(struct System_Boolean_array **)&commandCodeIds->max_length;
    if ( (int)servantTypeFlags >= 1 )
    {
      v8 = 0LL;
      while ( v8 < (unsigned int)servantTypeFlags )
      {
        v9 = commandCodeIds->m_Items[v8];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v9,
                                             (const MethodInfo_30E466C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
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
      sub_1B68938(this, commandCodeIds);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  const MethodInfo_36F769C **v16; // x21
  struct System_Boolean_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Boolean_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x26
  __int64 v26; // x8
  unsigned __int64 v27; // x25
  Il2CppObject *v28; // x29
  const MethodInfo_36F769C **v29; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x28
  Il2CppClass *klass; // x19
  void *monitor; // x21
  Il2CppObject *v33; // x0
  int32_t getQP; // w19
  Il2CppObject *v35; // x28
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v42; // w29
  struct System_Boolean_array *v43; // x8
  unsigned int max_length; // w9
  struct System_Boolean_array *v45; // x8
  int64_t UserId; // x0
  void *v47; // x19
  Il2CppClass *v48; // x20
  int64_t v49; // x21
  bool v50; // w8
  struct System_Boolean_array *v51; // x8
  struct System_Boolean_array **p_isRareFlags; // [xsp+8h] [xbp-98h]
  UserServantCommandCodeMaster_o *v56; // [xsp+28h] [xbp-78h]
  struct System_Boolean_array **p_servantTypeFlags; // [xsp+30h] [xbp-70h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4A05202 & 1) == 0 )
  {
    sub_1B686D4(&bool___TypeInfo, servantIds);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1B686D4(&NetworkManager_TypeInfo, v13);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A05202 = 1;
  }
  entity = 0LL;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v16 = (const MethodInfo_36F769C **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v17 = (struct System_Boolean_array *)sub_1B6877C(bool___TypeInfo, 3LL);
    this->fields.servantTypeFlags = v17;
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantTypeFlags, (int32_t)v17, v18, v19);
    v20 = (struct System_Boolean_array *)sub_1B6877C(bool___TypeInfo, 3LL);
    this->fields.isRareFlags = v20;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.isRareFlags, (int32_t)v20, v21, v22);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v56 = (UserServantCommandCodeMaster_o *)Instance,
          !servantIds) )
    {
LABEL_49:
      sub_1B68930(Instance, v24);
    }
    v26 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( v27 < (unsigned int)v26 )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v28 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                servantIds->m_Items[v27],
                (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v29 = v16;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(*v16);
        if ( !Instance )
          goto LABEL_49;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v28 )
          goto LABEL_49;
        v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        klass = v28[5].klass;
        monitor = v28[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v59.fields.currentCryptoKey = klass;
        *(_QWORD *)&v59.fields.fakeValue = monitor;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v59, 0LL);
        if ( !v30 )
          goto LABEL_49;
        v33 = DataMasterBase_object__object__int___GetEntity(
                v30,
                (int32_t)Instance,
                (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v35 = v33;
        SellQp = UserServantEntity__getSellQp((UserServantEntity_o *)v28, 0LL);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana((UserServantEntity_o *)v28, 0LL);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)v28, 0LL);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded((UserServantEntity_o *)v28, 0LL) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity((UserServantEntity_o *)v28, 0LL);
        if ( !v35 )
          goto LABEL_49;
        v42 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v35, 0LL);
        v43 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_49;
        max_length = v43->max_length;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( max_length <= 1 )
            break;
          v43->m_Items[5] = 1;
          if ( v42 >= 4 )
          {
            v45 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_49;
            if ( v45->max_length <= 1 )
              break;
            v45->m_Items[5] = 1;
          }
        }
        else
        {
          if ( !max_length )
            break;
          v43->m_Items[4] = 1;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          UserId = NetworkManager__get_UserId(0LL);
          v48 = v35[1].klass;
          v47 = v35[1].monitor;
          v49 = UserId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v60.fields.currentCryptoKey = v48;
          *(_QWORD *)&v60.fields.fakeValue = v47;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v60, 0LL);
          if ( !v56 )
            goto LABEL_49;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(v56, &entity, v49, (int)Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_49;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v50 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_49;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
              v50 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v50;
          }
          if ( v42 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v35, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v35, 0LL),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v51 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_49;
              if ( !v51->max_length )
                break;
              v51->m_Items[4] = 1;
            }
          }
        }
        LODWORD(v26) = servantIds->max_length;
        ++v27;
        v16 = v29;
        if ( (__int64)v27 >= (int)v26 )
          return;
      }
      sub_1B68938(Instance, v24);
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
  struct UserGameEntity_o *userGameEntity; // x9
  int32_t qp; // w20
  BalanceConfig_c *v16; // x8
  bool v17; // cc
  __int64 v18; // x8
  float v19; // s8

  v4 = this;
  if ( (byte_4A05206 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    byte_4A05206 = 1;
  }
  messageLabel = v4->fields.messageLabel;
  IsBoth = ServantSellConfirmMenu__IsBoth(this, v4->fields.servantTypeFlags, method);
  MessageText = ServantSellConfirmMenu__GetMessageText(v4, kind, IsBoth, v7);
  if ( !messageLabel )
    goto LABEL_23;
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
LABEL_23:
        sub_1B68930(MessageText, v9);
      }
      userGameEntity = v4->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_23;
      qp = userGameEntity->fields.qp;
      v16 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      MessageText = (System_String_o *)v4->fields.messageLabel;
      if ( !MessageText )
        goto LABEL_23;
      v17 = qp < v16->static_fields->QpMax;
      v18 = 96LL;
      if ( !v17 )
        v18 = 100LL;
      if ( v17 )
        v19 = 100.0;
      else
        v19 = 144.0;
      UILabel__set_fontSize((UILabel_o *)MessageText, *(_DWORD *)((char *)&v4->klass + v18), 0LL);
      v12 = v4->fields.messageLabel;
      v13 = v19;
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  UILabel_o *ManaLabel; // x22
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  UILabel_o *RareLabel; // x21
  UILabel_o *RareNumLabel; // x21
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  UILabel_o *RareLabel2; // x20
  const MethodInfo *v41; // x4
  float NumLabelWidth; // s0
  float v43; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v45; // s0
  float v46; // s8
  UnityEngine_GameObject_o *v47; // x0
  float v48; // s9
  float v49; // s8
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s0
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  float v54; // s9
  float v55; // s8
  UnityEngine_GameObject_o *v56; // x0
  float v57; // s0
  float v58; // s8
  UnityEngine_GameObject_o *v59; // x0
  float v60; // s9
  UnityEngine_GameObject_o *v61; // x0
  int32_t v62; // [xsp+0h] [xbp-70h] BYREF
  int32_t v63; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v64; // [xsp+8h] [xbp-68h] BYREF
  float rarePriWidth; // [xsp+Ch] [xbp-64h] BYREF
  float manaWidth[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A05205 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B686D4(&LocalizationManager_TypeInfo, v11);
    sub_1B686D4(&StringLiteral_11607/*"SERVANT_SELL_NUM_TEXT"*/, v12);
    sub_1B686D4(&StringLiteral_11610/*"SERVANT_SELL_QP_TEXT"*/, v13);
    sub_1B686D4(&StringLiteral_11612/*"SERVANT_SELL_RARE_TEXT2"*/, v14);
    sub_1B686D4(&StringLiteral_11603/*"SERVANT_SELL_MANA_TEXT"*/, v15);
    sub_1B686D4(&StringLiteral_11611/*"SERVANT_SELL_RARE_TEXT"*/, v16);
    byte_4A05205 = 1;
  }
  *(_QWORD *)manaWidth = 0LL;
  rarePriWidth = 0.0;
  if ( (unsigned int)kind <= 4 )
  {
    QpLabel = this->fields.QpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11610/*"SERVANT_SELL_QP_TEXT"*/, 0LL);
    if ( !QpLabel )
      goto LABEL_28;
    UILabel__set_text(QpLabel, v18, 0LL);
    QpNumLabel = this->fields.QpNumLabel;
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v64 = getQp;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v22, v23, v24);
    v18 = System_String__Format(v21, v25, 0LL);
    if ( !QpNumLabel )
      goto LABEL_28;
    UILabel__set_text(QpNumLabel, v18, 0LL);
    v18 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v18 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.QP_NUM_LABEL_SIZE, 0LL);
    ManaLabel = this->fields.ManaLabel;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11603/*"SERVANT_SELL_MANA_TEXT"*/, 0LL);
    if ( !ManaLabel )
      goto LABEL_28;
    UILabel__set_text(ManaLabel, v18, 0LL);
    ManaNumLabel = this->fields.ManaNumLabel;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v63 = getMana;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v29, v30, v31);
    v18 = System_String__Format(v28, v32, 0LL);
    if ( !ManaNumLabel )
      goto LABEL_28;
    UILabel__set_text(ManaNumLabel, v18, 0LL);
    v18 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v18 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel = this->fields.RareLabel;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11611/*"SERVANT_SELL_RARE_TEXT"*/, 0LL);
    if ( !RareLabel )
      goto LABEL_28;
    UILabel__set_text(RareLabel, v18, 0LL);
    RareNumLabel = this->fields.RareNumLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v62 = getRarePri;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v36, v37, v38);
    v18 = System_String__Format(v35, v39, 0LL);
    if ( !RareNumLabel )
      goto LABEL_28;
    UILabel__set_text(RareNumLabel, v18, 0LL);
    v18 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v18 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v18, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel2 = this->fields.RareLabel2;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11612/*"SERVANT_SELL_RARE_TEXT2"*/, 0LL);
    if ( !RareLabel2 )
      goto LABEL_28;
    UILabel__set_text(RareLabel2, v18, 0LL);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(this, &manaWidth[1], manaWidth, &rarePriWidth, v41);
    v18 = (System_String_o *)this->fields.QpLabel;
    if ( !v18 )
      goto LABEL_28;
    v43 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, v43, 0LL);
    v18 = (System_String_o *)this->fields.QpLabel;
    if ( !v18 )
      goto LABEL_28;
    LODWORD(v45) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v18, 0LL);
    v18 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v18 )
      goto LABEL_28;
    v46 = v43 + v45;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    v48 = manaWidth[1];
    GameObjectExtensions__SetLocalPositionX(v47, (float)(v46 + -250.0) + (float)(manaWidth[1] * 0.5), 0LL);
    v18 = (System_String_o *)this->fields.ManaLabel;
    if ( !v18 )
      goto LABEL_28;
    v49 = v46 + v48;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(v50, v49, 0LL);
    v18 = (System_String_o *)this->fields.ManaLabel;
    if ( !v18 )
      goto LABEL_28;
    LODWORD(v51) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v18, 0LL);
    v18 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v18 )
      goto LABEL_28;
    v52 = v49 + v51;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    v54 = manaWidth[0];
    GameObjectExtensions__SetLocalPositionX(v53, (float)(v52 + -250.0) + (float)(manaWidth[0] * 0.5), 0LL);
    v18 = (System_String_o *)this->fields.RareLabel;
    if ( !v18 )
      goto LABEL_28;
    v55 = v52 + v54;
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(v56, v55, 0LL);
    v18 = (System_String_o *)this->fields.RareLabel;
    if ( !v18
      || (LODWORD(v57) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v18, 0LL),
          (v18 = (System_String_o *)this->fields.RareNumLabel) == 0LL)
      || (v58 = v55 + v57,
          v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL),
          v60 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v59, (float)(v58 + -250.0) + (float)(rarePriWidth * 0.5), 0LL),
          (v18 = (System_String_o *)this->fields.RareLabel2) == 0LL) )
    {
LABEL_28:
      sub_1B68930(v18, v19);
    }
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
    GameObjectExtensions__SetLocalPositionX(v61, v58 + v60, 0LL);
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
    sub_1B68930(IsOnlyCloseButton, v5);
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
    sub_1B68930(0LL, v10);
  UILabel__set_text(warningLabel, WarningText, 0LL);
}


void __fastcall ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A051FD & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A051FD = 1;
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
    sub_1B68930(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__TransitionToCombineScene(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A0520D & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A0520D = 1;
  }
  this->fields.state = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


bool __fastcall ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v2 = this;
  if ( (byte_4A051FB & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1B686D4(&Method_System_Collections_Generic_List_long__get_Count__, method);
    byte_4A051FB = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1B68930(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void __fastcall ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0521B & 1) == 0 )
  {
    sub_1B686D4(&ServantSellConfirmMenu___c_TypeInfo, v1);
    byte_4A0521B = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(ServantSellConfirmMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantSellConfirmMenu___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)ServantSellConfirmMenu___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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