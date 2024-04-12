void __fastcall ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B2176 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    byte_42B2176 = 1;
  }
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_327E050;
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_B52920(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClose, 0LL);
  }
}


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

  if ( (byte_42B2166 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    byte_42B2166 = 1;
  }
  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    this->fields.onSellServantConfirm = 0LL;
    sub_B52920(
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
      (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ServantSellConfirmMenu__ClearCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_42B2157 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    byte_42B2157 = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_29001040(this, 0LL, v2);
}


void __fastcall ServantSellConfirmMenu__Close_29001040(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B2165 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndClose__);
    byte_42B2165 = 1;
  }
  this->fields.onClose = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0

  if ( (byte_42B216E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B216E = 1;
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
      sub_B52A5C(0LL, v4);
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
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_42B2174 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ServantSellConfirmListViewItem___ctor__);
    sub_B52984(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_42B2174 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_2627780 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B52A5C(v5, v6);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantSellConfirmListViewManager__SetMode_28984820(servantSellConfirmListViewManager, 2, v13);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_42B2171 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ServantSellConfirmListViewItem___ctor__);
    sub_B52984(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_42B2171 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_2627780 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B52A5C(v5, v6);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantSellConfirmListViewManager__SetMode_28984820(servantSellConfirmListViewManager, 2, v13);
}


void __fastcall ServantSellConfirmMenu__EndMaxErrorDialog(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v2);
}


void __fastcall ServantSellConfirmMenu__EndOpen(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  unsigned int kind; // w8
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_42B2164 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ServantSellConfirmListViewItem___ctor__);
    sub_B52984(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_42B2164 = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ServantSellConfirmListViewItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v5,
      (Il2CppObject *)this,
      Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      (const MethodInfo_2627780 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
    if ( !servantSellConfirmListViewManager )
      sub_B52A5C(v6, v7);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
    sub_B52920(
      (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (System_Int32_array **)v5,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ServantSellConfirmListViewManager__SetMode_28984820(servantSellConfirmListViewManager, 2, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowCommandCode(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_42B2173 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2173 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B52A5C(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowServant(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_42B2170 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndCloseShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B2170 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B52A5C(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSellConfirmMenu__GetIsOnlyCloseButton(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_String_o *closeButton; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20

  if ( (byte_42B215C & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11842/*"SERVANT_SELL_CLOSE"*/);
    sub_B52984(&StringLiteral_11843/*"SERVANT_SELL_DECIDE"*/);
    sub_B52984(&StringLiteral_11841/*"SERVANT_SELL_CANCEL"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B215C = 1;
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
      closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_SELL_CLOSE"*/, 0LL);
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
    sub_B52A5C(closeButton, *(_QWORD *)&kind);
  }
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_SELL_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_20;
  UILabel__set_text(decideLabel, closeButton, 0LL);
  cancelLabel = this->fields.cancelLabel;
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_SELL_CANCEL"*/, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
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
  System_String_o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UserGameEntity_o *v45; // x9
  int32_t qp; // w23
  int32_t QpMax; // w8
  struct UserGameEntity_o *v48; // x9
  int32_t v49; // w23
  int32_t getQP; // w24
  System_String_o *v51; // x23
  _QWORD **v52; // x26
  __int64 v53; // x24
  __int16 v54; // w8
  __int64 v55; // x24
  __int64 v56; // x24
  __int64 v57; // x24
  System_String_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct UserGameEntity_o *v65; // x8
  System_String_o *v66; // x21
  System_String_o *v67; // x0
  BalanceConfig_c *v68; // x8
  Il2CppObject *v69; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_o *v78; // x19
  Il2CppObject *v79; // x0
  System_String_o *v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_o **v87; // x0
  System_String_o *v88; // x22
  _QWORD **v89; // x24
  __int64 v90; // x23
  __int16 v91; // w8
  __int64 v92; // x23
  __int64 v93; // x23
  __int64 v94; // x23
  System_String_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct UserGameEntity_o *v102; // x8
  System_String_o *v103; // x20
  System_String_o *NumberFormat; // x0
  BalanceConfig_c *v105; // x8
  Il2CppObject *v106; // x21
  Il2CppObject *v107; // x0

  if ( (byte_42B216A & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_object___);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12290/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/);
    sub_B52984(&StringLiteral_12291/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/);
    sub_B52984(&StringLiteral_12288/*"SHOP_SELL_SERVANT_MAX_ALERT"*/);
    sub_B52984(&StringLiteral_8669/*"MANA_NAME"*/);
    sub_B52984(&StringLiteral_11098/*"RARE_PRI_NAME"*/);
    sub_B52984(&StringLiteral_12292/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_B52984(&StringLiteral_12293/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/);
    sub_B52984(&StringLiteral_12289/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B216A = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)message,
    (System_String_array **)getable,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(
    (BattleServantConfConponent_o *)getable,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_72;
  mana = userGameEntity->fields.mana;
  getMana = this->fields.getMana;
  v24 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)v24 + 23);
  if ( getMana + mana > static_fields->ManaMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
    v31 = &StringLiteral_8669/*"MANA_NAME"*/;
LABEL_21:
    v35 = v30;
    v36 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
    v37 = System_String__Format(v35, v36, 0LL);
    *message = v37;
    sub_B52920((BattleServantConfConponent_o *)message, (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
    return 0;
  }
  v32 = this->fields.userGameEntity;
  if ( !v32 )
    goto LABEL_72;
  rarePri = v32->fields.rarePri;
  getRarePri = this->fields.getRarePri;
  if ( (*((_BYTE *)v24 + 307) & 4) != 0 && !*((_DWORD *)v24 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( getRarePri + rarePri > static_fields->RarePriMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12288/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
    v31 = &StringLiteral_11098/*"RARE_PRI_NAME"*/;
    goto LABEL_21;
  }
  v45 = this->fields.userGameEntity;
  if ( !v45 )
    goto LABEL_72;
  qp = v45->fields.qp;
  if ( (*((_BYTE *)v24 + 307) & 4) != 0 && !*((_DWORD *)v24 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = BalanceConfig_TypeInfo;
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
    v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12290/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0LL);
    v89 = (_QWORD **)Method_System_Array_Empty_object___;
    v90 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v91 = *(_WORD *)(v90 + 306);
    if ( (v91 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v91 = *(_WORD *)(v90 + 306);
    }
    if ( (v91 & 0x400) != 0 )
    {
      v92 = *v89[6];
      if ( (*(_BYTE *)(v92 + 306) & 1) == 0 )
        sub_AEB684(*v89[6]);
      if ( !*(_DWORD *)(v92 + 224) )
      {
        v93 = *v89[6];
        if ( (*(_BYTE *)(v93 + 306) & 1) == 0 )
          sub_AEB684(*v89[6]);
        j_il2cpp_runtime_class_init_0(v93);
      }
    }
    v94 = *v89[6];
    if ( (*(_BYTE *)(v94 + 306) & 1) == 0 )
      sub_AEB684(*v89[6]);
    v95 = System_String__Format_44647040(v88, **(System_Object_array ***)(v94 + 184), 0LL);
    *title = v95;
    sub_B52920((BattleServantConfConponent_o *)title, (System_Int32_array **)v95, v96, v97, v98, v99, v100, v101);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12289/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    v102 = this->fields.userGameEntity;
    if ( v102 )
    {
      v103 = (System_String_o *)v24;
      NumberFormat = LocalizationManager__GetNumberFormat(v102->fields.qp, 0LL);
      v105 = BalanceConfig_TypeInfo;
      v106 = (Il2CppObject *)NumberFormat;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v105 = BalanceConfig_TypeInfo;
      }
      v107 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v105->static_fields->QpMax, 0LL);
      v80 = System_String__Format_44563852(v103, v106, v107, 0LL);
      *message = v80;
      v87 = message;
      goto LABEL_71;
    }
LABEL_72:
    sub_B52A5C(v24, v25);
  }
  v48 = this->fields.userGameEntity;
  if ( !v48 )
    goto LABEL_72;
  v49 = v48->fields.qp;
  getQP = this->fields.getQP;
  if ( (*((_BYTE *)v24 + 307) & 4) != 0 && !*((_DWORD *)v24 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v24);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( getQP + v49 <= QpMax )
    return 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0LL);
  v52 = (_QWORD **)Method_System_Array_Empty_object___;
  v53 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v54 = *(_WORD *)(v53 + 306);
  if ( (v54 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v54 = *(_WORD *)(v53 + 306);
  }
  if ( (v54 & 0x400) != 0 )
  {
    v55 = *v52[6];
    if ( (*(_BYTE *)(v55 + 306) & 1) == 0 )
      sub_AEB684(*v52[6]);
    if ( !*(_DWORD *)(v55 + 224) )
    {
      v56 = *v52[6];
      if ( (*(_BYTE *)(v56 + 306) & 1) == 0 )
        sub_AEB684(*v52[6]);
      j_il2cpp_runtime_class_init_0(v56);
    }
  }
  v57 = *v52[6];
  if ( (*(_BYTE *)(v57 + 306) & 1) == 0 )
    sub_AEB684(*v52[6]);
  v58 = System_String__Format_44647040(v51, **(System_Object_array ***)(v57 + 184), 0LL);
  *title = v58;
  sub_B52920((BattleServantConfConponent_o *)title, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12292/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
  v65 = this->fields.userGameEntity;
  if ( !v65 )
    goto LABEL_72;
  v66 = (System_String_o *)v24;
  v67 = LocalizationManager__GetNumberFormat(v65->fields.qp, 0LL);
  v68 = BalanceConfig_TypeInfo;
  v69 = (Il2CppObject *)v67;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
  }
  v70 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v68->static_fields->QpMax, 0LL);
  v71 = System_String__Format_44563852(v66, v69, v70, 0LL);
  *message = v71;
  sub_B52920((BattleServantConfConponent_o *)message, (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12291/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0LL);
  v79 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0LL);
  v80 = System_String__Format(v78, v79, 0LL);
  *getable = v80;
  v87 = getable;
LABEL_71:
  sub_B52920((BattleServantConfConponent_o *)v87, (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
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
  __int64 *v7; // x8
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned int max_length; // w9
  __int64 v11; // x0

  v6 = this;
  if ( (byte_42B2162 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11796/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/);
    sub_B52984(&StringLiteral_11766/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/);
    sub_B52984(&StringLiteral_11795/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/);
    sub_B52984(&StringLiteral_11852/*"SERVANT_SELL_MESSAGE_ERROR"*/);
    sub_B52984(&StringLiteral_11854/*"SERVANT_SELL_MESSAGE_START"*/);
    sub_B52984(&StringLiteral_11853/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/);
    sub_B52984(&StringLiteral_11794/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/);
    sub_B52984(&StringLiteral_11765/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/);
    sub_B52984(&StringLiteral_11742/*"SERVANT_ALL_SELL_MESSAGE_END"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_11764/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/);
    this = (ServantSellConfirmMenu_o *)sub_B52984(&StringLiteral_11743/*"SERVANT_ALL_SELL_MESSAGE_START"*/);
    byte_42B2162 = 1;
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
        v7 = &StringLiteral_11743/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_B52A5C(this, *(_QWORD *)&kind);
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
        v7 = &StringLiteral_11854/*"SERVANT_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
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
        v7 = &StringLiteral_11796/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
      }
      if ( max_length <= 2 )
      {
LABEL_58:
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      if ( servantTypeFlags->m_Items[6] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v7 = &StringLiteral_11764/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
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
      v7 = &StringLiteral_11742/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_11852/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_11794/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_11765/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_11853/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_11795/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = &StringLiteral_11766/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
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
    sub_B52A5C(QpNumLabel, qpWidth);
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
  __int64 *v12; // x8
  struct System_Boolean_array *v13; // x8
  System_String_o *v14; // x19
  System_String_o *v15; // x2
  unsigned int v16; // w8
  struct System_Boolean_array *isRareFlags; // x8
  unsigned int max_length; // w9
  __int64 v19; // x0

  v9 = kind;
  v10 = this;
  if ( (byte_42B2163 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11767/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/);
    sub_B52984(&StringLiteral_69/*"\r\n"*/);
    sub_B52984(&StringLiteral_11861/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_B52984(&StringLiteral_11744/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_B52984(&StringLiteral_11732/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_B52984(&StringLiteral_11844/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/);
    sub_B52984(&StringLiteral_11797/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    this = (ServantSellConfirmMenu_o *)sub_B52984(&StringLiteral_11827/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/);
    byte_42B2163 = 1;
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
      v12 = &StringLiteral_11732/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0LL);
    }
    *(_QWORD *)&kind = v10->fields.isRareFlags;
    if ( isMaterial )
    {
      if ( !*(_QWORD *)&kind )
        goto LABEL_64;
      v16 = *(_DWORD *)(*(_QWORD *)&kind + 24LL);
      if ( !v16 )
        goto LABEL_63;
      if ( !*(_BYTE *)(*(_QWORD *)&kind + 32LL) )
      {
        if ( v16 <= 1 )
          goto LABEL_63;
        if ( !*(_BYTE *)(*(_QWORD *)&kind + 33LL) )
        {
          if ( v16 <= 2 )
            goto LABEL_63;
          if ( !*(_BYTE *)(*(_QWORD *)&kind + 34LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v12 = &StringLiteral_11827/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
            return LocalizationManager__Get((System_String_o *)*v12, 0LL);
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
      v12 = &StringLiteral_11744/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0LL);
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
        v12 = &StringLiteral_11861/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
        return LocalizationManager__Get((System_String_o *)*v12, 0LL);
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
          v12 = &StringLiteral_11797/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0LL);
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
          v12 = &StringLiteral_11767/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0LL);
        }
      }
    }
LABEL_63:
    v19 = sub_B52A88(this);
    sub_B52A28(v19, 0LL);
  }
  if ( isMaterial )
    goto LABEL_18;
  v13 = v10->fields.isRareFlags;
  if ( !v13 )
LABEL_64:
    sub_B52A5C(this, *(_QWORD *)&kind);
  if ( v13->max_length <= 2 )
    goto LABEL_63;
  if ( !v13->m_Items[6] && !v13->m_Items[5] && !v13->m_Items[4] )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_11844/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v12, 0LL);
  }
LABEL_18:
  v10->fields.isTwoLinesWarning = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11861/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0LL);
  return System_String__Concat_44570600(v14, (System_String_o *)StringLiteral_69/*"\r\n"*/, v15, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(0LL, selectedId);
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void __fastcall ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42B216C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B216C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.kind == 4 )
    {
      lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_B52A5C(0LL, method);
      System_Collections_Generic_List_long___Clear(
        lastSvtCommandCodeList,
        (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v4);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42B216D & 1) == 0 )
  {
    sub_B52984(&Method_ServantSellConfirmMenu_OnClickClose__);
    byte_42B216D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_ServantSellConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v5);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  bool IsQpMaxAlert; // w20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x4
  WebViewManager_o *Instance; // x0
  System_String_o *v8; // x20
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *getable; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-38h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42B2167 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2167 = 1;
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
      ServantSellConfirmMenu__SellServantDecide(this, v5);
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
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v6);
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v8 = message;
        v9 = (CommonUI_o *)Instance;
        v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
        if ( !v9 )
          sub_B52A5C(v11, v12);
        CommonUI__OpenNotificationDialog(
          v9,
          (System_String_o *)StringLiteral_1/*""*/,
          v8,
          v10,
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
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_42B2175 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_15591/*"Window/Objects/CancelButton"*/);
    sub_B52984(&StringLiteral_15592/*"Window/Objects/CloseButton"*/);
    byte_42B2175 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_15591/*"Window/Objects/CancelButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21195324(v4, (System_String_o *)StringLiteral_15592/*"Window/Objects/CloseButton"*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__OnSelectCommandCodeDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v9; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_42B2172 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndShowCommandCode__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2172 = 1;
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
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v6),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v9 = (CommonUI_o *)Instance,
          v10 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0LL),
          !v9) )
    {
      sub_B52A5C(v5, v6);
    }
    CommonUI__OpenServantStatusDialog_18171260(v9, 32, UserCommandCodeEntity_k__BackingField, v10, 0LL, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__OnSelectServantDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v4; // x19
  const MethodInfo *v5; // x1
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v8; // x21
  ServantStatusDialog_EndDelegate_o *v9; // x22
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_42B216F & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantSellConfirmMenu_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B216F = 1;
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
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v5);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v8 = (CommonUI_o *)Instance;
      v9 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v9,
        (Il2CppObject *)v4,
        Method_ServantSellConfirmMenu_EndShowServant__,
        0LL);
      if ( v8 )
      {
        CommonUI__OpenServantStatusDialog_18167688(v8, 29, servantStatusId, v9, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B52A5C(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(v4, selectItem, v10);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UILabel_o *titleLabel; // x23
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  bool v31; // w24
  _BOOL4 v32; // w23
  const MethodInfo *v33; // x6
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x5
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  System_Action_o *v39; // x20
  bool isNoWarning; // [xsp+0h] [xbp-40h] BYREF
  bool isEquipedCommandCode; // [xsp+4h] [xbp-3Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B2159 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_B52984(&StringLiteral_11862/*"SERVANT_SELL_TITLE"*/);
    byte_42B2159 = 1;
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)onSellServantConfirm,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SERVANT_SELL_TITLE"*/, 0LL);
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
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v27);
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
                v28);
              ServantSellConfirmMenu__SetMessageStatusByCommandCode(this, commandCodeIdList, v29);
              this->fields.isTwoLinesWarning = 0;
              ServantSellConfirmMenu__SetMessageText(this, kind, v30);
              v31 = isExceeded;
              v32 = isEquipedCommandCode;
              ServantSellConfirmMenu__SetWarningText(
                this,
                kind,
                isMaterial,
                isExceeded,
                isEquipedCommandCode,
                &isNoWarning,
                v33);
              ServantSellConfirmMenu__SetInfoLabels(this, kind, isNoWarning, v34);
              ServantSellConfirmMenu__SetNumLabels(
                this,
                kind,
                this->fields.getQP,
                this->fields.getMana,
                this->fields.getRarePri,
                v35);
              ServantSellConfirmMenu__SetListViewManager(this, kind, servantIdList, commandCodeIdList, v31, v36);
              gameObject = this->fields.listViewBg;
              if ( gameObject )
              {
                v37 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                GameObjectExtensions__SetLocalPositionY(v37, 90.0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
                if ( gameObject )
                {
                  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v38, 140.0, 0LL);
                  if ( v32 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_20;
                  gameObject = (UnityEngine_GameObject_o *)this->fields.lastSvtCommandCodeList;
                  if ( gameObject )
                  {
                    System_Collections_Generic_List_long___Clear(
                      (System_Collections_Generic_List_long__o *)gameObject,
                      (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
LABEL_20:
                    this->fields.state = 1;
                    v39 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                    System_Action___ctor(v39, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B52A5C(gameObject, v18);
  }
}


void __fastcall ServantSellConfirmMenu__OpenCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *lastSvtCommandCodeList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  struct System_Collections_Generic_List_long__o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x4
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v26; // x20

  if ( (byte_42B215B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_long___);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_B52984(&StringLiteral_3275/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    sub_B52984(&StringLiteral_11842/*"SERVANT_SELL_CLOSE"*/);
    sub_B52984(&StringLiteral_3276/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_42B215B = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_29;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v7 = System_Linq_Enumerable__Distinct_long_(
           lastSvtCommandCodeList,
           (const MethodInfo_1B5FF28 *)Method_System_Linq_Enumerable_Distinct_long___);
    v8 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                             v7,
                                                             (const MethodInfo_1B7144C *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v8;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this->fields.onSellServantConfirm = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3276/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0LL);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3275/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
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
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_SELL_CLOSE"*/, 0LL);
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
                                        v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
LABEL_29:
    sub_B52A5C(lastSvtCommandCodeList, v5);
  }
}


void __fastcall ServantSellConfirmMenu__OpenQpMaxAlert(
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
  System_Action_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // [xsp+18h] [xbp-68h]

  if ( (byte_42B2168 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_B52984(&Method_ServantSellConfirmMenu_SellServantDecide__);
    sub_B52984(&Method_ServantSellConfirmMenu_TransitionToCombineScene__);
    sub_B52984(&StringLiteral_11857/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_B52984(&StringLiteral_11856/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_B52984(&StringLiteral_11863/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_42B2168 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11857/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11863/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v12 = v10;
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellConfirmMenu_SellServantDecide__, 0LL);
  onTransition = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_TransitionToCombineScene__,
    0LL);
  v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
  if ( !servantSellMaxAlertDialog )
    sub_B52A5C(v16, v17);
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
void __fastcall ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v9; // x1
  int64_t lastSvtCommandCodeList; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UILabel_o *titleLabel; // x21
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x4
  __int64 v27; // x8
  unsigned __int64 v28; // x25
  int64_t v29; // x21
  int32_t SvtId; // w21
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_long__o *v32; // x21
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__62_0; // x22
  Il2CppObject *v35; // x23
  struct ServantSellConfirmMenu___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  UILabel_o *decideLabel; // x20
  System_Action_o *v51; // x20
  __int64 v52; // x0
  bool isEquipedCommandCode; // [xsp+4h] [xbp-5Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-58h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B215A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_long___ctor__);
    sub_B52984(&System_Predicate_long__TypeInfo);
    sub_B52984(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__);
    sub_B52984(&ServantSellConfirmMenu___c_TypeInfo);
    sub_B52984(&StringLiteral_11734/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_11733/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_B52984(&StringLiteral_11862/*"SERVANT_SELL_TITLE"*/);
    byte_42B215A = 1;
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
      (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    lastSvtCommandCodeList = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
    *(_QWORD *)&this->fields.getQP = 0LL;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.userGameEntity,
      (System_Int32_array **)SelfUserGame,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SERVANT_SELL_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v25);
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
      v26);
    lastSvtCommandCodeList = (int64_t)this->fields.listViewBg;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    v27 = *(_QWORD *)&servantIdList->max_length;
    if ( (int)v27 >= 1 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)v27 )
        {
          v52 = sub_B52A88(lastSvtCommandCodeList);
          sub_B52A28(v52, 0LL);
        }
        v29 = servantIdList->m_Items[v28];
        lastSvtCommandCodeList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lastSvtCommandCodeList )
          break;
        lastSvtCommandCodeList = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)lastSvtCommandCodeList,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !lastSvtCommandCodeList )
          break;
        lastSvtCommandCodeList = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)lastSvtCommandCodeList,
                                            v29,
                                            (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !lastSvtCommandCodeList )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)lastSvtCommandCodeList, 0LL);
        lastSvtCommandCodeList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lastSvtCommandCodeList )
          break;
        MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)lastSvtCommandCodeList,
                                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
          v9 = (System_Collections_Generic_IEnumerable_T__o *)lastSvtCommandCodeList;
          lastSvtCommandCodeList = (int64_t)this->fields.lastSvtCommandCodeList;
          if ( !lastSvtCommandCodeList )
            break;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)lastSvtCommandCodeList,
            v9,
            (const MethodInfo_2FE2020 *)Method_System_Collections_Generic_List_long__AddRange__);
          lastSvtCommandCodeList = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          v32 = this->fields.lastSvtCommandCodeList;
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
            v35 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Predicate_long__o *)sub_B52A54(System_Predicate_long__TypeInfo);
            System_Predicate_long____ctor(
              _9__62_0,
              v35,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              (const MethodInfo_28D1D20 *)Method_System_Predicate_long___ctor__);
            v36 = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            v36->__9__62_0 = _9__62_0;
            sub_B52920(
              (BattleServantConfConponent_o *)&v36->__9__62_0,
              (System_Int32_array **)_9__62_0,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
          }
          if ( !v32 )
            break;
          lastSvtCommandCodeList = System_Collections_Generic_List_long___RemoveAll(
                                     v32,
                                     (System_Predicate_T__o *)_9__62_0,
                                     (const MethodInfo_2FE38F0 *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(v27) = servantIdList->max_length;
        if ( (__int64)++v28 >= (int)v27 )
          goto LABEL_40;
      }
LABEL_51:
      sub_B52A5C(lastSvtCommandCodeList, v9);
    }
LABEL_40:
    upperLabel = this->fields.upperLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11733/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    lowerLabel = this->fields.lowerLabel;
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11734/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
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
    v46 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, 44.0, 0LL);
    lastSvtCommandCodeList = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0LL);
    GameObjectExtensions__SetLocalPositionY(v47, 94.0, 0LL);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v48);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v49);
    decideLabel = this->fields.decideLabel;
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_51;
    UILabel__set_text(decideLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    this->fields.state = 1;
    v51 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x2

  if ( (byte_42B216B & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B216B = 1;
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
  UILabel_o *info1Label; // x21
  UILabel_o *v8; // x21
  ServantSellConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x2
  ServantSellConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x2
  ServantSellConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x2
  float v15; // s0
  int v16; // s8
  ServantSellConfirmMenu_o *v17; // x0
  const MethodInfo *v18; // x2
  UILabel_o *info3Label; // x1
  int v20; // s0
  ServantSellConfirmMenu_o *v21; // x0
  const MethodInfo *v22; // x2
  ServantSellConfirmMenu_o *v23; // x0
  const MethodInfo *v24; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w24
  BalanceConfig_c *v27; // x0
  UILabel_o *v28; // x20
  int32_t QpMax; // w25
  __int64 *v30; // x8
  struct UserGameEntity_o *v31; // x8
  System_String_o *v32; // x21
  Il2CppObject *NumberFormat; // x0
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v35; // x8
  System_String_o *v36; // x21
  Il2CppObject *v37; // x0
  UILabel_o *v38; // x20
  struct UserGameEntity_o *v39; // x8
  System_String_o *v40; // x21
  Il2CppObject *v41; // x0
  __int64 v42; // x8
  float v43; // s9
  ServantSellConfirmMenu_o *v44; // x0
  const MethodInfo *v45; // x2
  ServantSellConfirmMenu_o *v46; // x0
  const MethodInfo *v47; // x2
  ServantSellConfirmMenu_o *v48; // x0
  const MethodInfo *v49; // x2
  struct UserGameEntity_o *v50; // x8
  BalanceConfig_c *v51; // x0
  int32_t v52; // w21
  UILabel_o *v53; // x20
  struct UserGameEntity_o *v54; // x8
  System_String_o *v55; // x21
  Il2CppObject *v56; // x0
  struct UserGameEntity_o *v57; // x8
  System_String_o *v58; // x21
  Il2CppObject *v59; // x0

  v6 = this;
  if ( (byte_42B215F & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11850/*"SERVANT_SELL_INFO7"*/);
    sub_B52984(&StringLiteral_11845/*"SERVANT_SELL_INFO2_ALERT"*/);
    sub_B52984(&StringLiteral_11849/*"SERVANT_SELL_INFO6"*/);
    sub_B52984(&StringLiteral_11847/*"SERVANT_SELL_INFO3"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_11846/*"SERVANT_SELL_INFO2_NORMAL"*/);
    this = (ServantSellConfirmMenu_o *)sub_B52984(&StringLiteral_11848/*"SERVANT_SELL_INFO5"*/);
    byte_42B215F = 1;
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
            ServantSellConfirmMenu__SetLabelLocalPositionY(v21, v6->fields.info1Label, -50.0, v22);
            ServantSellConfirmMenu__SetLabelLocalPositionY(v23, v6->fields.info2Label, -78.0, v24);
            info3Label = v6->fields.info3Label;
            v20 = -1026293760;
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
            this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11849/*"SERVANT_SELL_INFO6"*/, 0LL);
            if ( info1Label )
            {
              UILabel__set_text(info1Label, (System_String_o *)this, 0LL);
              this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
              if ( this )
              {
                UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                v8 = v6->fields.info3Label;
                this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SERVANT_SELL_INFO7"*/, 0LL);
                if ( v8 )
                {
                  UILabel__set_text(v8, (System_String_o *)this, 0LL);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v9, v6->fields.info1Label, -92.0, v10);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v11, v6->fields.info2Label, -115.0, v12);
                  v15 = -162.0;
                  v16 = -1022689280;
                  if ( isNoWarning )
                    v15 = -139.0;
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v13, v6->fields.info3Label, v15, v14);
                  if ( v6->fields.isTwoLinesWarning )
                  {
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v17, v6->fields.info3Label, -176.0, v18);
                    info3Label = v6->fields.warningLabel;
                    v20 = -1022164992;
LABEL_71:
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v17, info3Label, *(float *)&v20, v18);
                    return;
                  }
                  info3Label = v6->fields.warningLabel;
LABEL_70:
                  v20 = v16;
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
        v27 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v27 = BalanceConfig_TypeInfo;
        }
        v28 = v6->fields.info1Label;
        QpMax = v27->static_fields->QpMax;
        if ( qp < QpMax )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v30 = &StringLiteral_11846/*"SERVANT_SELL_INFO2_NORMAL"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v30 = &StringLiteral_11845/*"SERVANT_SELL_INFO2_ALERT"*/;
        }
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v30, 0LL);
        v31 = v6->fields.userGameEntity;
        if ( v31 )
        {
          v32 = (System_String_o *)this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v31->fields.qp, 0LL);
          this = (ServantSellConfirmMenu_o *)System_String__Format(v32, NumberFormat, 0LL);
          if ( v28 )
          {
            UILabel__set_text(v28, (System_String_o *)this, 0LL);
            info2Label = v6->fields.info2Label;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11847/*"SERVANT_SELL_INFO3"*/, 0LL);
            v35 = v6->fields.userGameEntity;
            if ( v35 )
            {
              v36 = (System_String_o *)this;
              v37 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v35->fields.mana, 0LL);
              this = (ServantSellConfirmMenu_o *)System_String__Format(v36, v37, 0LL);
              if ( info2Label )
              {
                UILabel__set_text(info2Label, (System_String_o *)this, 0LL);
                v38 = v6->fields.info3Label;
                this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11848/*"SERVANT_SELL_INFO5"*/, 0LL);
                v39 = v6->fields.userGameEntity;
                if ( v39 )
                {
                  v40 = (System_String_o *)this;
                  v41 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v39->fields.rarePri, 0LL);
                  this = (ServantSellConfirmMenu_o *)System_String__Format(v40, v41, 0LL);
                  if ( v38 )
                  {
                    UILabel__set_text(v38, (System_String_o *)this, 0LL);
                    this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
                    if ( this )
                    {
                      v42 = 96LL;
                      if ( qp >= QpMax )
                        v42 = 92LL;
                      v16 = 1111752704;
                      v43 = qp < QpMax ? 10.0 : 49.0;
                      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v42), 0LL);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v44, v6->fields.info1Label, v43, v45);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v46, v6->fields.info2Label, -50.0, v47);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v48, v6->fields.info3Label, -110.0, v49);
                      v50 = v6->fields.userGameEntity;
                      if ( v50 )
                      {
                        v51 = BalanceConfig_TypeInfo;
                        v52 = v50->fields.qp;
                        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          v51 = BalanceConfig_TypeInfo;
                        }
                        v53 = v6->fields.info1Label;
                        if ( v52 >= v51->static_fields->QpMax )
                        {
                          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11845/*"SERVANT_SELL_INFO2_ALERT"*/,
                                                               0LL);
                          v57 = v6->fields.userGameEntity;
                          if ( v57 )
                          {
                            v58 = (System_String_o *)this;
                            v59 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v57->fields.qp, 0LL);
                            this = (ServantSellConfirmMenu_o *)System_String__Format(v58, v59, 0LL);
                            if ( v53 )
                            {
                              UILabel__set_text(v53, (System_String_o *)this, 0LL);
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
                                                               (System_String_o *)StringLiteral_11846/*"SERVANT_SELL_INFO2_NORMAL"*/,
                                                               0LL);
                          v54 = v6->fields.userGameEntity;
                          if ( v54 )
                          {
                            v55 = (System_String_o *)this;
                            v56 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v54->fields.qp, 0LL);
                            this = (ServantSellConfirmMenu_o *)System_String__Format(v55, v56, 0LL);
                            if ( v53 )
                            {
                              UILabel__set_text(v53, (System_String_o *)this, 0LL);
                              info3Label = v6->fields.info1Label;
                              v20 = 10.0;
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
    sub_B52A5C(this, *(_QWORD *)&kind);
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
    sub_B52A5C(this, label);
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
      sub_B52A5C(servantSellConfirmListViewManager, *(_QWORD *)&kind);
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
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned __int64 v6; // x22
  int64_t v7; // x21
  int32_t getQP; // w28
  UserCommandCodeEntity_o *v9; // x21
  int32_t SellQp; // w0
  int32_t getMana; // w24
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42B215E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    this = (ServantSellConfirmMenu_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B215E = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_B52A5C(this, commandCodeIds);
    servantTypeFlags = *(struct System_Boolean_array **)&commandCodeIds->max_length;
    if ( (int)servantTypeFlags >= 1 )
    {
      v6 = 0LL;
      while ( v6 < (unsigned int)servantTypeFlags )
      {
        v7 = commandCodeIds->m_Items[v6];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                             v7,
                                             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_19;
        getQP = v4->fields.getQP;
        v9 = (UserCommandCodeEntity_o *)this;
        SellQp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0LL);
        getMana = v4->fields.getMana;
        v4->fields.getQP = SellQp + getQP;
        SellMana = UserCommandCodeEntity__GetSellMana(v9, 0LL);
        getRarePri = v4->fields.getRarePri;
        v4->fields.getMana = SellMana + getMana;
        v4->fields.getRarePri = UserCommandCodeEntity__GetSellRarePri(v9, 0LL) + getRarePri;
        this = (ServantSellConfirmMenu_o *)UserCommandCodeEntity__GetRarity(v9, 0LL);
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
        if ( (__int64)++v6 >= (int)servantTypeFlags )
          return;
      }
      v15 = sub_B52A88(this);
      sub_B52A28(v15, 0LL);
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
  struct System_Boolean_array *v8; // x0
  struct System_Boolean_array **p_servantTypeFlags; // x27
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Boolean_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x26
  __int64 v26; // x8
  unsigned __int64 v27; // x22
  UserServantEntity_o *v28; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x28
  __int64 v30; // x19
  __int64 v31; // x20
  WarEntity_o *v32; // x0
  int32_t getQP; // w19
  WarEntity_o *v34; // x28
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v41; // w21
  struct System_Boolean_array *v42; // x8
  unsigned int max_length; // w9
  struct System_Boolean_array *v44; // x8
  int64_t UserId; // x0
  struct System_String_o *age; // x20
  __int64 v47; // x25
  int64_t v48; // x19
  bool v49; // w8
  struct System_Boolean_array *v50; // x8
  __int64 v51; // x0
  struct System_Boolean_array **p_isRareFlags; // [xsp+0h] [xbp-90h]
  System_Int64_array *v56; // [xsp+20h] [xbp-70h]
  UserServantCommandCodeMaster_o *v57; // [xsp+28h] [xbp-68h]
  int64_t *m_Items; // [xsp+30h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42B215D & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B215D = 1;
  }
  entity = 0LL;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v8 = (struct System_Boolean_array *)sub_B5299C(bool___TypeInfo, 3LL);
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    this->fields.servantTypeFlags = v8;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.servantTypeFlags,
      (System_Int32_array **)v8,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (struct System_Boolean_array *)sub_B5299C(bool___TypeInfo, 3LL);
    this->fields.isRareFlags = v16;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.isRareFlags,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v57 = (UserServantCommandCodeMaster_o *)Instance,
          !servantIds) )
    {
LABEL_52:
      sub_B52A5C(Instance, v24);
    }
    v26 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      m_Items = servantIds->m_Items;
      v56 = servantIds;
      while ( v27 < (unsigned int)v26 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_52;
        v28 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                MasterData_WarQuestSelectionMaster,
                m_Items[v27],
                (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_52;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v28 )
          goto LABEL_52;
        v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v31 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
        v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v60.fields.currentCryptoKey = v31;
        *(_QWORD *)&v60.fields.fakeValue = v30;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v60, 0LL);
        if ( !v29 )
          goto LABEL_52;
        v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v29,
                (int32_t)Instance,
                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v34 = v32;
        SellQp = UserServantEntity__getSellQp(v28, 0LL);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana(v28, 0LL);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri(v28, 0LL);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded(v28, 0LL) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity(v28, 0LL);
        if ( !v34 )
          goto LABEL_52;
        v41 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v34, 0LL);
        v42 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_52;
        max_length = v42->max_length;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( max_length <= 1 )
            break;
          v42->m_Items[5] = 1;
          if ( v41 >= 4 )
          {
            v44 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_52;
            if ( v44->max_length <= 1 )
              break;
            v44->m_Items[5] = 1;
          }
        }
        else
        {
          if ( !max_length )
            break;
          v42->m_Items[4] = 1;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          v47 = *(_QWORD *)&v34->fields.id;
          age = v34->fields.age;
          v48 = UserId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v61.fields.currentCryptoKey = v47;
          *(_QWORD *)&v61.fields.fakeValue = age;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v61, 0LL);
          if ( !v57 )
            goto LABEL_52;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(v57, &entity, v48, (int)Instance, 0LL);
          servantIds = v56;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_52;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v49 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_52;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
              v49 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v49;
          }
          if ( v41 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v34, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v34, 0LL),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v50 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_52;
              if ( !v50->max_length )
                break;
              v50->m_Items[4] = 1;
            }
          }
        }
        LODWORD(v26) = servantIds->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          return;
      }
      v51 = sub_B52A88(Instance);
      sub_B52A28(v51, 0LL);
    }
  }
}


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
  if ( (byte_42B2161 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B2161 = 1;
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
        sub_B52A5C(MessageText, v9);
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
      v13 = flt_327DFD0[v17];
      v12 = v4->fields.messageLabel;
    }
    ServantSellConfirmMenu__SetLabelLocalPositionY((ServantSellConfirmMenu_o *)MessageText, v12, v13, v10);
  }
}


void __fastcall ServantSellConfirmMenu__SetNumLabels(
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
  Il2CppObject *v16; // x0
  UILabel_o *ManaLabel; // x22
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  UILabel_o *RareLabel; // x21
  UILabel_o *RareNumLabel; // x21
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  UILabel_o *RareLabel2; // x20
  const MethodInfo *v26; // x4
  float NumLabelWidth; // s0
  float v28; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v30; // s0
  float v31; // s8
  UnityEngine_GameObject_o *v32; // x0
  float v33; // s11
  float v34; // s8
  UnityEngine_GameObject_o *v35; // x0
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
  UnityEngine_GameObject_o *v46; // x0
  int32_t v47; // [xsp+8h] [xbp-78h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v49; // [xsp+10h] [xbp-70h] BYREF
  float rarePriWidth; // [xsp+14h] [xbp-6Ch] BYREF
  float manaWidth[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_42B2160 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11855/*"SERVANT_SELL_NUM_TEXT"*/);
    sub_B52984(&StringLiteral_11858/*"SERVANT_SELL_QP_TEXT"*/);
    sub_B52984(&StringLiteral_11860/*"SERVANT_SELL_RARE_TEXT2"*/);
    sub_B52984(&StringLiteral_11851/*"SERVANT_SELL_MANA_TEXT"*/);
    sub_B52984(&StringLiteral_11859/*"SERVANT_SELL_RARE_TEXT"*/);
    byte_42B2160 = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11858/*"SERVANT_SELL_QP_TEXT"*/, 0LL);
    if ( !QpLabel )
      goto LABEL_29;
    UILabel__set_text(QpLabel, v12, 0LL);
    QpNumLabel = this->fields.QpNumLabel;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v49 = getQp;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v12 = System_String__Format(v15, v16, 0LL);
    if ( !QpNumLabel )
      goto LABEL_29;
    UILabel__set_text(QpNumLabel, v12, 0LL);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.QP_NUM_LABEL_SIZE, 0LL);
    ManaLabel = this->fields.ManaLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_SELL_MANA_TEXT"*/, 0LL);
    if ( !ManaLabel )
      goto LABEL_29;
    UILabel__set_text(ManaLabel, v12, 0LL);
    ManaNumLabel = this->fields.ManaNumLabel;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v48 = getMana;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v12 = System_String__Format(v19, v20, 0LL);
    if ( !ManaNumLabel )
      goto LABEL_29;
    UILabel__set_text(ManaNumLabel, v12, 0LL);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel = this->fields.RareLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11859/*"SERVANT_SELL_RARE_TEXT"*/, 0LL);
    if ( !RareLabel )
      goto LABEL_29;
    UILabel__set_text(RareLabel, v12, 0LL);
    RareNumLabel = this->fields.RareNumLabel;
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v47 = getRarePri;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
    v12 = System_String__Format(v23, v24, 0LL);
    if ( !RareNumLabel )
      goto LABEL_29;
    UILabel__set_text(RareNumLabel, v12, 0LL);
    v12 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v12 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel2 = this->fields.RareLabel2;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11860/*"SERVANT_SELL_RARE_TEXT2"*/, 0LL);
    if ( !RareLabel2 )
      goto LABEL_29;
    UILabel__set_text(RareLabel2, v12, 0LL);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(this, &manaWidth[1], manaWidth, &rarePriWidth, v26);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_29;
    v28 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, v28, 0LL);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_29;
    LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0LL);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_29;
    v31 = v28 + v30;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    v33 = manaWidth[1];
    GameObjectExtensions__SetLocalPositionX(v32, (float)(v31 + -250.0) + (float)(manaWidth[1] * 0.5), 0LL);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_29;
    v34 = v31 + v33;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(v35, v34, 0LL);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_29;
    LODWORD(v36) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0LL);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_29;
    v37 = v34 + v36;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    v39 = manaWidth[0];
    GameObjectExtensions__SetLocalPositionX(v38, (float)(v37 + -250.0) + (float)(manaWidth[0] * 0.5), 0LL);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12 )
      goto LABEL_29;
    v40 = v37 + v39;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(v41, v40, 0LL);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12
      || (LODWORD(v42) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0LL),
          (v12 = (System_String_o *)this->fields.RareNumLabel) == 0LL)
      || (v43 = v40 + v42,
          v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL),
          v45 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v44, (float)(v43 + -250.0) + (float)(rarePriWidth * 0.5), 0LL),
          (v12 = (System_String_o *)this->fields.RareLabel2) == 0LL) )
    {
LABEL_29:
      sub_B52A5C(v12, v13);
    }
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(v46, v43 + v45, 0LL);
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
    sub_B52A5C(IsOnlyCloseButton, v5);
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
    sub_B52A5C(0LL, v10);
  UILabel__set_text(warningLabel, WarningText, 0LL);
}


void __fastcall ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_42B2158 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2158 = 1;
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
    sub_B52A5C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__TransitionToCombineScene(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B2169 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42B2169 = 1;
  }
  this->fields.state = 3;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
}


bool __fastcall ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v2 = this;
  if ( (byte_42B2156 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_42B2156 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B52A5C(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void __fastcall ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x0

  if ( (byte_42AD376 & 1) == 0 )
  {
    sub_B52984(&ServantSellConfirmMenu___c_TypeInfo);
    byte_42AD376 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantSellConfirmMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v1;
  sub_B52920(static_fields);
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