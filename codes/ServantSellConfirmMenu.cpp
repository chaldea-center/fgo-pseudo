void ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__c *v3; // x0
  System_Collections_Generic_List_long__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_596C766 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_596C766 = 1;
  }
  v3 = System_Collections_Generic_List_long__TypeInfo;
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_E9D5D0;
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  v4 = (System_Collections_Generic_List_long__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lastSvtCommandCodeList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantSellConfirmMenu__CallOnClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onClose; // x19

  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o *onSellServantConfirm; // x20

  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    this->fields.onSellServantConfirm = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSellServantConfirm,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  if ( (byte_596C748 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    byte_596C748 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_2213CDC(this, method);
  v4 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v4;
}


void ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_41873872(this, 0, v2);
}


void ServantSellConfirmMenu__Close_41873872(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596C756 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndClose__);
    byte_596C756 = 1;
  }
  this->fields.onClose = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0

  if ( (byte_596C75E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C75E = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0, 0) )
  {
    v6 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v6 )
      sub_2213CDC(0, v5);
    ListViewManager__DestroyList(v6, 0);
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
  System_Action_ServantSellConfirmListViewItem__c *v3; // x0
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596C764 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_596C764 = 1;
  }
  v3 = System_Action_ServantSellConfirmListViewItem__TypeInfo;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  this->fields.state = 2;
  v5 = (System_Action_object__o *)sub_2213CCC(v3);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0);
  if ( !servantSellConfirmListViewManager )
    sub_2213CDC(v6, v7);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int32_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantSellConfirmListViewManager__SetMode_41857580(servantSellConfirmListViewManager, 2, v14);
}


void ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_Action_ServantSellConfirmListViewItem__c *v3; // x0
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596C761 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_596C761 = 1;
  }
  ActionExtensions__Call(this->fields.onModifyServantAction, 0);
  v3 = System_Action_ServantSellConfirmListViewItem__TypeInfo;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  this->fields.state = 2;
  v5 = (System_Action_object__o *)sub_2213CCC(v3);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0);
  if ( !servantSellConfirmListViewManager )
    sub_2213CDC(v6, v7);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int32_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantSellConfirmListViewManager__SetMode_41857580(servantSellConfirmListViewManager, 2, v14);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596C755 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_596C755 = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v5 = (System_Action_object__o *)sub_2213CCC(System_Action_ServantSellConfirmListViewItem__TypeInfo);
    System_Action_object____ctor(
      v5,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      0);
    if ( !servantSellConfirmListViewManager )
      sub_2213CDC(v6, v7);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (int32_t)v5,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ServantSellConfirmListViewManager__SetMode_41857580(servantSellConfirmListViewManager, 2, v14);
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

  if ( (byte_596C763 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C763 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellConfirmMenu__EndShowServant(ServantSellConfirmMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_596C760 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C760 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantSellConfirmMenu__GetIsOnlyCloseButton(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  unsigned int v5; // w21
  System_String_o *decideButton; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20

  if ( (byte_596C74D & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12185/*"SERVANT_SELL_CLOSE"*/);
    sub_2213A60(&StringLiteral_12186/*"SERVANT_SELL_DECIDE"*/);
    sub_2213A60(&StringLiteral_12184/*"SERVANT_SELL_CANCEL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C74D = 1;
  }
  v5 = kind - 5;
  if ( (unsigned int)(kind - 5) > 8 )
  {
    decideLabel = this->fields.decideLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, method);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SERVANT_SELL_DECIDE"*/, 0);
    if ( decideLabel )
    {
      UILabel__set_text(decideLabel, decideButton, 0);
      cancelLabel = this->fields.cancelLabel;
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SERVANT_SELL_CANCEL"*/, 0);
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
            return v5 < 9;
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(decideButton, *(_QWORD *)&kind);
  }
  decideButton = (System_String_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_18;
  ((void (__fastcall *)(System_String_o *, _QWORD, _QWORD, const MethodInfo *))decideButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
    decideButton,
    0,
    0,
    decideButton->klass->vtable._14_System_IConvertible_ToInt16.method);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SERVANT_SELL_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_18;
  UILabel__set_text(closeLabel, decideButton, 0);
  decideButton = (System_String_o *)this->fields.warningLabel;
  if ( !decideButton )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)decideButton, (System_String_o *)StringLiteral_1/*""*/, 0);
  return v5 < 9;
}


bool ServantSellConfirmMenu__GetIsQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o **title,
        System_String_o **message,
        System_String_o **getable,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v12; // w1
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  void *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t mana; // w23
  int32_t getMana; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v34; // x0
  __int64 *v35; // x8
  struct UserGameEntity_o *v36; // x9
  int32_t rarePri; // w23
  int32_t getRarePri; // w24
  System_String_o *v39; // x20
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct UserGameEntity_o *v49; // x9
  int64_t qp; // x23
  int64_t QpMax; // x8
  struct UserGameEntity_o *v52; // x9
  int64_t v53; // x23
  __int64 getQP; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  System_String_o *v57; // x23
  long double v58; // q0
  _QWORD *v59; // x24
  __int64 v60; // x8
  __int64 v61; // x0
  __int64 v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct UserGameEntity_o *v70; // x8
  System_String_o *v71; // x21
  System_String_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  BalanceConfig_c *v75; // x8
  Il2CppObject *v76; // x23
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_String_o *v85; // x19
  Il2CppObject *NumberFormat; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t v94; // w1
  System_String_o **v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  System_String_o *v98; // x22
  long double v99; // q0
  _QWORD *v100; // x23
  __int64 v101; // x8
  __int64 v102; // x0
  __int64 v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct UserGameEntity_o *v111; // x8
  System_String_o *v112; // x20
  System_String_o *NumberFormatLong; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  BalanceConfig_c *v116; // x8
  Il2CppObject *v117; // x21
  Il2CppObject *v118; // x0
  System_String_o *v119; // x0

  if ( (byte_596C75A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12692/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/);
    sub_2213A60(&StringLiteral_12693/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/);
    sub_2213A60(&StringLiteral_12690/*"SHOP_SELL_SERVANT_MAX_ALERT"*/);
    sub_2213A60(&StringLiteral_8897/*"MANA_NAME"*/);
    sub_2213A60(&StringLiteral_11435/*"RARE_PRI_NAME"*/);
    sub_2213A60(&StringLiteral_12694/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12695/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/);
    sub_2213A60(&StringLiteral_12691/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C75A = 1;
  }
  v12 = (int)StringLiteral_1/*""*/;
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)title,
    v12,
    (System_String_o *)message,
    (System_String_o *)getable,
    (int32_t)method,
    v5,
    v6,
    v7);
  v13 = (int)StringLiteral_1/*""*/;
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)message, v13, v14, v15, v16, v17, v18, v19);
  v20 = (int)StringLiteral_1/*""*/;
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)getable, v20, v21, v22, v23, v24, v25, v26);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_56;
  mana = userGameEntity->fields.mana;
  getMana = this->fields.getMana;
  v27 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28, v29);
    v27 = BalanceConfig_TypeInfo;
  }
  static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)v27 + 23);
  if ( getMana + mana > static_fields->ManaMax )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12690/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0);
    v35 = &StringLiteral_8897/*"MANA_NAME"*/;
LABEL_17:
    v39 = v34;
    v40 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v35, 0);
    v41 = System_String__Format(v39, v40, 0);
    *message = v41;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)message, (int32_t)v41, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  v36 = this->fields.userGameEntity;
  if ( !v36 )
    goto LABEL_56;
  rarePri = v36->fields.rarePri;
  getRarePri = this->fields.getRarePri;
  if ( !*((_DWORD *)v27 + 57) )
  {
    j_il2cpp_runtime_class_init_0(v27, v28, v29);
    v27 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( getRarePri + rarePri > static_fields->RarePriMax )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12690/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0);
    v35 = &StringLiteral_11435/*"RARE_PRI_NAME"*/;
    goto LABEL_17;
  }
  v49 = this->fields.userGameEntity;
  if ( !v49 )
    goto LABEL_56;
  qp = v49->fields.qp;
  if ( !*((_DWORD *)v27 + 57) )
  {
    j_il2cpp_runtime_class_init_0(v27, v28, v29);
    v27 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  QpMax = static_fields->QpMax;
  if ( qp >= QpMax )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12692/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0);
    v100 = Method_System_Array_Empty_object___;
    v101 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v101 )
    {
      sub_224B964(Method_System_Array_Empty_object___);
      v101 = v100[7];
    }
    v102 = *(_QWORD *)(v101 + 16);
    if ( (*(_WORD *)(v102 + 309) & 1) == 0 )
      v102 = sub_224B908(v99);
    if ( !*(_DWORD *)(v102 + 228) )
      *(__n128 *)&v99 = j_il2cpp_runtime_class_init_0(v102, v96, v97);
    v103 = *(_QWORD *)(v100[7] + 16LL);
    if ( (*(_WORD *)(v103 + 309) & 1) == 0 )
      v103 = sub_224B908(v99);
    v104 = System_String__Format_75698016(v98, **(System_Object_array ***)(v103 + 184), 0);
    *title = v104;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)v104, v105, v106, v107, v108, v109, v110);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12691/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0);
    v111 = this->fields.userGameEntity;
    if ( v111 )
    {
      v112 = (System_String_o *)v27;
      NumberFormatLong = LocalizationManager__GetNumberFormatLong(v111->fields.qp, 0);
      v116 = BalanceConfig_TypeInfo;
      v117 = (Il2CppObject *)NumberFormatLong;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v114, v115);
        v116 = BalanceConfig_TypeInfo;
      }
      v118 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v116->static_fields->QpMax, 0);
      v119 = System_String__Format_75697880(v112, v117, v118, 0);
      v94 = (int)v119;
      *message = v119;
      v95 = message;
      goto LABEL_55;
    }
LABEL_56:
    sub_2213CDC(v27, v28);
  }
  v52 = this->fields.userGameEntity;
  if ( !v52 )
    goto LABEL_56;
  v53 = v52->fields.qp;
  getQP = this->fields.getQP;
  if ( !*((_DWORD *)v27 + 57) )
  {
    j_il2cpp_runtime_class_init_0(v27, v28, v29);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( v53 + getQP <= QpMax )
    return 0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12695/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0);
  v59 = Method_System_Array_Empty_object___;
  v60 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v60 )
  {
    sub_224B964(Method_System_Array_Empty_object___);
    v60 = v59[7];
  }
  v61 = *(_QWORD *)(v60 + 16);
  if ( (*(_WORD *)(v61 + 309) & 1) == 0 )
    v61 = sub_224B908(v58);
  if ( !*(_DWORD *)(v61 + 228) )
    *(__n128 *)&v58 = j_il2cpp_runtime_class_init_0(v61, v55, v56);
  v62 = *(_QWORD *)(v59[7] + 16LL);
  if ( (*(_WORD *)(v62 + 309) & 1) == 0 )
    v62 = sub_224B908(v58);
  v63 = System_String__Format_75698016(v57, **(System_Object_array ***)(v62 + 184), 0);
  *title = v63;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)title, (int32_t)v63, v64, v65, v66, v67, v68, v69);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12694/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0);
  v70 = this->fields.userGameEntity;
  if ( !v70 )
    goto LABEL_56;
  v71 = (System_String_o *)v27;
  v72 = LocalizationManager__GetNumberFormatLong(v70->fields.qp, 0);
  v75 = BalanceConfig_TypeInfo;
  v76 = (Il2CppObject *)v72;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v73, v74);
    v75 = BalanceConfig_TypeInfo;
  }
  v77 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v75->static_fields->QpMax, 0);
  v78 = System_String__Format_75697880(v71, v76, v77, 0);
  *message = v78;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)message, (int32_t)v78, v79, v80, v81, v82, v83, v84);
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12693/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0);
  v87 = System_String__Format(v85, NumberFormat, 0);
  v94 = (int)v87;
  *getable = v87;
  v95 = getable;
LABEL_55:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v95, v94, v88, v89, v90, v91, v92, v93);
  return 1;
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
  ServantSellConfirmMenu_o *v6; // x21
  __int64 *v7; // x8
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned int max_length; // w9

  v6 = this;
  if ( (byte_596C753 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12137/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/);
    sub_2213A60(&StringLiteral_12107/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/);
    sub_2213A60(&StringLiteral_12136/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/);
    sub_2213A60(&StringLiteral_12195/*"SERVANT_SELL_MESSAGE_ERROR"*/);
    sub_2213A60(&StringLiteral_12197/*"SERVANT_SELL_MESSAGE_START"*/);
    sub_2213A60(&StringLiteral_12196/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/);
    sub_2213A60(&StringLiteral_12135/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/);
    sub_2213A60(&StringLiteral_12106/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/);
    sub_2213A60(&StringLiteral_12077/*"SERVANT_ALL_SELL_MESSAGE_END"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12105/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/);
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&StringLiteral_12078/*"SERVANT_ALL_SELL_MESSAGE_START"*/);
    byte_596C753 = 1;
  }
  if ( kind > 7 )
  {
    if ( kind <= 10 )
    {
      if ( kind == 8 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
        v7 = &StringLiteral_12195/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      }
      else if ( kind == 9 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
        v7 = &StringLiteral_12135/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
        v7 = &StringLiteral_12106/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
    switch ( kind )
    {
      case 11:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
        v7 = &StringLiteral_12196/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
      case 12:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
        v7 = &StringLiteral_12136/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
      case 13:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
        v7 = &StringLiteral_12107/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
  }
  else if ( (unsigned int)kind >= 5 )
  {
    if ( (unsigned int)(kind - 5) < 3 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
      v7 = &StringLiteral_12077/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
  }
  else
  {
    if ( isBoth )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
      v7 = &StringLiteral_12078/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
    servantTypeFlags = v6->fields.servantTypeFlags;
    if ( !servantTypeFlags )
      sub_2213CDC(this, *(_QWORD *)&kind);
    max_length = servantTypeFlags->max_length;
    if ( !max_length )
      goto LABEL_55;
    if ( servantTypeFlags->m_Items[0] )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
      v7 = &StringLiteral_12197/*"SERVANT_SELL_MESSAGE_START"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
    if ( max_length == 1 )
      goto LABEL_55;
    if ( servantTypeFlags->m_Items[1] )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
      v7 = &StringLiteral_12137/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
    if ( max_length <= 2 )
LABEL_55:
      sub_2213CE4(this);
    if ( servantTypeFlags->m_Items[2] )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
      v7 = &StringLiteral_12105/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0);
    }
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


float ServantSellConfirmMenu__GetNumLabelWidth(
        ServantSellConfirmMenu_o *this,
        float *qpWidth,
        float *manaWidth,
        float *rarePriWidth,
        const MethodInfo *method)
{
  UILabel_o *QpNumLabel; // x0
  float x; // s0
  float QP_NUM_LABEL_SIZE; // s1
  float v12; // s0
  float PRI_NUM_LABEL_SIZE; // s1
  float v14; // s0
  float v15; // s1
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
  QpNumLabel = this->fields.ManaNumLabel;
  *qpWidth = QP_NUM_LABEL_SIZE;
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
  QpNumLabel = this->fields.RareNumLabel;
  *manaWidth = PRI_NUM_LABEL_SIZE;
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
  QpNumLabel = this->fields.QpLabel;
  *rarePriWidth = v15;
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
    sub_2213CDC(QpNumLabel, qpWidth);
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
  int32_t v3; // w8
  int32_t v4; // w9
  int v5; // w10

  if ( isError )
    v3 = 10;
  else
    v3 = 7;
  if ( isError )
    v4 = 8;
  else
    v4 = 5;
  if ( isError )
    v5 = 9;
  else
    v5 = 6;
  if ( tabKind == 1 )
    v4 = v5;
  if ( tabKind == 2 )
    return v3;
  else
    return v4;
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
  __int64 v17; // x2
  struct System_Boolean_array *isRareFlags; // x8
  unsigned int max_length; // w9

  v9 = kind;
  v10 = this;
  if ( (byte_596C754 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12108/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/);
    sub_2213A60(&StringLiteral_87/*"\r\n"*/);
    sub_2213A60(&StringLiteral_12204/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12079/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12065/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_12187/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_12138/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&StringLiteral_12168/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/);
    byte_596C754 = 1;
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isMaterial);
      v12 = &StringLiteral_12065/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
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
        if ( v16 == 1 )
          goto LABEL_55;
        if ( !*(_BYTE *)(*(_QWORD *)&kind + 33LL) )
        {
          if ( v16 <= 2 )
            goto LABEL_55;
          if ( !*(_BYTE *)(*(_QWORD *)&kind + 34LL) )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isMaterial);
            v12 = &StringLiteral_12168/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v17);
      v12 = &StringLiteral_12079/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
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
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v17);
        v12 = &StringLiteral_12204/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
        return LocalizationManager__Get((System_String_o *)*v12, 0);
      }
      if ( max_length != 1 )
      {
        if ( isRareFlags->m_Items[1] )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v17);
          v12 = &StringLiteral_12138/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0);
        }
        if ( max_length > 2 )
        {
          if ( !isRareFlags->m_Items[2] )
            return (System_String_o *)StringLiteral_1/*""*/;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v17);
          v12 = &StringLiteral_12108/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0);
        }
      }
    }
LABEL_55:
    sub_2213CE4(this);
  }
  if ( isMaterial )
    goto LABEL_17;
  v13 = v10->fields.isRareFlags;
  if ( !v13 )
LABEL_56:
    sub_2213CDC(this, *(_QWORD *)&kind);
  if ( LODWORD(v13->max_length) <= 2 )
    goto LABEL_55;
  if ( !v13->m_Items[2] && !v13->m_Items[1] && !v13->m_Items[0] )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isMaterial);
    v12 = &StringLiteral_12187/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v12, 0);
  }
LABEL_17:
  v10->fields.isTwoLinesWarning = 1;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isMaterial);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12204/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12187/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0);
  return System_String__Concat_75694928(v14, (System_String_o *)StringLiteral_87/*"\r\n"*/, v15, 0);
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
  __int64 v3; // x8
  int v4; // w9
  unsigned __int64 max_length; // x10
  bool v6; // w12

  if ( !flags )
    sub_2213CDC(this, 0);
  if ( (int)flags->max_length < 1 )
  {
    return 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    max_length = (unsigned int)flags->max_length;
    v6 = 1;
    do
    {
      if ( flags->m_Items[v3] && ++v4 > 1 )
        break;
      v6 = ++v3 < max_length;
    }
    while ( max_length != v3 );
  }
  return v6;
}


void ServantSellConfirmMenu__ModifyItem(ServantSellConfirmMenu_o *this, int64_t selectedId, const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0

  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  if ( !servantSellConfirmListViewManager )
    sub_2213CDC(0, selectedId);
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
  if ( (byte_596C75C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&Method_ServantSellConfirmMenu_OnClickCancel__);
    byte_596C75C = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( v2->fields.kind == 4 )
    {
      lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_2213CDC(this, method);
      v4 = lastSvtCommandCodeList->fields._version + 1;
      lastSvtCommandCodeList->fields._size = 0;
      lastSvtCommandCodeList->fields._version = v4;
    }
    v2->fields.state = 3;
    v5 = Method_ServantSellConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ServantSellConfirmMenu_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
    ServantSellConfirmMenu__CallOnSellServantConfirm(v2, 0, v7);
  }
}


void ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C75D & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSellConfirmMenu_OnClickClose__);
    byte_596C75D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSellConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v5);
  }
}


void ServantSellConfirmMenu__OnClickDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t state; // w8
  bool IsQpMaxAlert; // w20
  const MethodInfo *v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x4
  Il2CppObject *Instance; // x21
  System_String_o *v11; // x20
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *getable; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-40h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_596C757 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_2213A60(&Method_ServantSellConfirmMenu_OnClickDecide__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C757 = 1;
  }
  state = this->fields.state;
  message = 0;
  title = 0;
  getable = 0;
  if ( state == 2 )
  {
    message = (System_String_o *)StringLiteral_1/*""*/;
    title = (System_String_o *)StringLiteral_1/*""*/;
    getable = (System_String_o *)StringLiteral_1/*""*/;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v2);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1/*""*/, 0) || this->fields.isMaxQpChecked )
    {
      ServantSellConfirmMenu__SellServantDecide(this, v6);
    }
    else
    {
      v7 = Method_ServantSellConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_ServantSellConfirmMenu_OnClickDecide__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      if ( IsQpMaxAlert )
      {
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v9);
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = message;
        v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0);
        if ( !Instance )
          sub_2213CDC(v13, v14);
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v11,
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

  if ( (byte_596C765 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16268/*"Window/Objects/CancelButton"*/);
    sub_2213A60(&StringLiteral_16269/*"Window/Objects/CloseButton"*/);
    byte_596C765 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16268/*"Window/Objects/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v4, (System_String_o *)StringLiteral_16269/*"Window/Objects/CloseButton"*/, 0);
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
  Il2CppObject *Instance; // x21
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  ServantStatusDialog_EndDelegate_o *v11; // x22

  if ( (byte_596C762 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndShowCommandCode__);
    sub_2213A60(&Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C762 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v11,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0),
          !Instance) )
    {
      sub_2213CDC(v7, v8);
    }
    CommonUI__OpenServantStatusDialog_37385832(
      (CommonUI_o *)Instance,
      32,
      UserCommandCodeEntity_k__BackingField,
      v11,
      0,
      0);
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
  Il2CppObject *Instance; // x21
  int64_t servantStatusId; // x20
  ServantStatusDialog_EndDelegate_o *v10; // x22
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_596C75F & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndShowServant__);
    sub_2213A60(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C75F = 1;
  }
  if ( v4->fields.state == 2 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v5 = Method_ServantSellConfirmMenu_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectServantDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ServantSellConfirmMenu_OnSelectServantDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v10 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v10, (Il2CppObject *)v4, Method_ServantSellConfirmMenu_EndShowServant__, 0);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_37382644((CommonUI_o *)Instance, 29, servantStatusId, v10, 0, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(v4, selectItem, v11);
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
        System_Action_o *onModifyServant,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *titleLabel; // x23
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x5
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  bool v41; // w24
  _BOOL4 v42; // w23
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x5
  const MethodInfo *v46; // x5
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v50; // w9
  System_Action_o *v51; // x20
  bool isNoWarning; // [xsp+0h] [xbp-50h] BYREF
  bool isEquipedCommandCode; // [xsp+4h] [xbp-4Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-48h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596C74A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_2213A60(&StringLiteral_12205/*"SERVANT_SELL_TITLE"*/);
    byte_596C74A = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  isNoWarning = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( !this->fields.state )
  {
    this->fields.onModifyServantAction = onModifyServant;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onModifyServantAction,
      (int32_t)onModifyServant,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    this->fields.kind = kind;
    this->fields.onSellServantConfirm = onSellServantConfirm;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSellServantConfirm,
      (int32_t)onSellServantConfirm,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      this->fields.userGameEntity = SelfUserGame;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
        (int32_t)SelfUserGame,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      titleLabel = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SERVANT_SELL_TITLE"*/, 0);
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
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v37);
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
                v38);
              ServantSellConfirmMenu__SetMessageStatusByCommandCode(this, commandCodeIdList, v39);
              this->fields.isTwoLinesWarning = 0;
              ServantSellConfirmMenu__SetMessageText(this, kind, v40);
              v41 = isExceeded;
              v42 = isEquipedCommandCode;
              ServantSellConfirmMenu__SetWarningText(
                this,
                kind,
                isMaterial,
                isExceeded,
                isEquipedCommandCode,
                &isNoWarning,
                v43);
              ServantSellConfirmMenu__SetInfoLabels(this, kind, isNoWarning, v44);
              ServantSellConfirmMenu__SetNumLabels(
                this,
                kind,
                this->fields.getQP,
                this->fields.getMana,
                this->fields.getRarePri,
                v45);
              ServantSellConfirmMenu__SetListViewManager(this, kind, servantIdList, commandCodeIdList, v41, v46);
              gameObject = this->fields.listViewBg;
              if ( gameObject )
              {
                v47 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                GameObjectExtensions__SetLocalPositionY(v47, 90.0, 0);
                gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
                if ( gameObject )
                {
                  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  GameObjectExtensions__SetLocalPositionY(v48, 140.0, 0);
                  if ( v42 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_21;
                  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
                  if ( lastSvtCommandCodeList )
                  {
                    v50 = lastSvtCommandCodeList->fields._version + 1;
                    lastSvtCommandCodeList->fields._size = 0;
                    lastSvtCommandCodeList->fields._version = v50;
LABEL_21:
                    this->fields.state = 1;
                    v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(v51, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_2213CDC(gameObject, v26);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x4
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v28; // x20

  if ( (byte_596C74C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_long___);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_2213A60(&StringLiteral_3805/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12185/*"SERVANT_SELL_CLOSE"*/);
    sub_2213A60(&StringLiteral_3806/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_596C74C = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_28;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v7 = System_Linq_Enumerable__Distinct_long_(
           lastSvtCommandCodeList,
           (const MethodInfo_387C648 *)Method_System_Linq_Enumerable_Distinct_long___);
    v8 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                             v7,
                                                             (const MethodInfo_38A0C70 *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.lastSvtCommandCodeList,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this->fields.onSellServantConfirm = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSellServantConfirm,
      (int32_t)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
              v21);
            lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.listViewBg;
            if ( lastSvtCommandCodeList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0);
              titleLabel = this->fields.titleLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3806/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3805/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
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
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SERVANT_SELL_CLOSE"*/, 0);
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
                                        v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v28,
                                          (Il2CppObject *)this,
                                          Method_ServantSellConfirmMenu_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0, 0);
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
    sub_2213CDC(lastSvtCommandCodeList, v5);
  }
}


void ServantSellConfirmMenu__OpenQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *getable,
        const MethodInfo *method)
{
  System_String_o *v9; // x23
  System_String_o *v10; // x24
  System_String_o *v11; // x0
  ServantSellMaxAlertDialog_o *servantSellMaxAlertDialog; // x26
  System_String_o *v13; // x25
  System_Action_o *v14; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v16; // x29
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // [xsp+18h] [xbp-68h]

  if ( (byte_596C758 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_2213A60(&Method_ServantSellConfirmMenu_SellServantDecide__);
    sub_2213A60(&Method_ServantSellConfirmMenu_TransitionToCombineScene__);
    sub_2213A60(&StringLiteral_12200/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_2213A60(&StringLiteral_12199/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_2213A60(&StringLiteral_12206/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_596C758 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, title, message);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12200/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12206/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12199/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v13 = v11;
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, (intptr_t)Method_ServantSellConfirmMenu_SellServantDecide__, 0);
  onTransition = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(onTransition, (Il2CppObject *)this, Method_ServantSellConfirmMenu_TransitionToCombineScene__, 0);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0);
  if ( !servantSellMaxAlertDialog )
    sub_2213CDC(v17, v18);
  ServantSellMaxAlertDialog__Open(
    servantSellMaxAlertDialog,
    title,
    message,
    getable,
    v9,
    v10,
    v13,
    v14,
    onTransition,
    v16,
    0,
    v19);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int32_t version; // w9
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *titleLabel; // x21
  const MethodInfo *v29; // x5
  const MethodInfo *v30; // x4
  __int64 v31; // x2
  il2cpp_array_size_t max_length; // x8
  const MethodInfo_47A29F8 **v33; // x27
  const MethodInfo_385636C **v34; // x24
  const MethodInfo_3F13190 **v35; // x28
  const MethodInfo_385636C **v36; // x25
  const MethodInfo_446C4A8 **v37; // x29
  unsigned __int64 v38; // x26
  int64_t v39; // x22
  int32_t SvtId; // w22
  __int64 v41; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v43; // x2
  System_Collections_Generic_List_long__o *v44; // x22
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__63_0; // x23
  ServantSellConfirmMenu_o *v47; // x21
  const MethodInfo_446C4A8 **v48; // x19
  const MethodInfo_47A29F8 **v49; // x29
  const MethodInfo_385636C **v50; // x27
  System_Int64_array *v51; // x25
  const MethodInfo_3F13190 **v52; // x20
  const MethodInfo_385636C **v53; // x28
  Il2CppObject *v54; // x24
  struct ServantSellConfirmMenu___c_StaticFields *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  UILabel_o *decideLabel; // x20
  System_Action_o *v70; // x20
  int64_t *m_Items; // [xsp+8h] [xbp-78h]
  bool isEquipedCommandCode; // [xsp+14h] [xbp-6Ch] BYREF
  bool isExceeded; // [xsp+18h] [xbp-68h] BYREF
  bool isMaterial; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_596C74B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_Predicate_long__TypeInfo);
    sub_2213A60(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__63_0__);
    sub_2213A60(&ServantSellConfirmMenu___c_TypeInfo);
    sub_2213A60(&StringLiteral_12067/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12066/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_2213A60(&StringLiteral_12205/*"SERVANT_SELL_TITLE"*/);
    byte_596C74B = 1;
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
    version = lastSvtCommandCodeList->fields._version;
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = version + 1;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSellServantConfirm,
      (int32_t)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    *(_QWORD *)&this->fields.getQP = 0;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    this->fields.userGameEntity = SelfUserGame;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
      (int32_t)SelfUserGame,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SERVANT_SELL_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_50;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v29);
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
      v30);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( !servantIdList )
      goto LABEL_50;
    max_length = servantIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v33 = (const MethodInfo_47A29F8 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
      v34 = (const MethodInfo_385636C **)&Method_DataManager_GetMasterData_UserServantMaster___;
      v35 = (const MethodInfo_3F13190 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
      v36 = (const MethodInfo_385636C **)&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___;
      v37 = (const MethodInfo_446C4A8 **)&Method_System_Collections_Generic_List_long__AddRange__;
      v38 = 0;
      m_Items = servantIdList->m_Items;
      while ( 1 )
      {
        if ( v38 >= (unsigned int)max_length )
          sub_2213CE4(gameObject);
        v39 = m_Items[v38];
        gameObject = SingletonMonoBehaviour_object___get_Instance(*v33);
        if ( !gameObject )
          break;
        gameObject = DataManager__GetMasterData_object_((DataManager_o *)gameObject, *v34);
        if ( !gameObject )
          break;
        gameObject = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                       v39,
                       *v35);
        if ( !gameObject )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0);
        gameObject = SingletonMonoBehaviour_object___get_Instance(*v33);
        if ( !gameObject )
          break;
        MasterData_object = DataManager__GetMasterData_object_((DataManager_o *)gameObject, *v36);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v41);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        gameObject = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v41);
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
            *v37);
          v44 = this->fields.lastSvtCommandCodeList;
          gameObject = ServantSellConfirmMenu___c_TypeInfo;
          if ( !*(&ServantSellConfirmMenu___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantSellConfirmMenu___c_TypeInfo, v10, v43);
            gameObject = ServantSellConfirmMenu___c_TypeInfo;
          }
          static_fields = (struct ServantSellConfirmMenu___c_StaticFields *)*((_QWORD *)gameObject + 23);
          _9__63_0 = static_fields->__9__63_0;
          if ( !_9__63_0 )
          {
            v47 = this;
            v48 = v37;
            v49 = v33;
            v50 = v36;
            v51 = servantIdList;
            v52 = v35;
            v53 = v34;
            if ( !*((_DWORD *)gameObject + 57) )
            {
              j_il2cpp_runtime_class_init_0(gameObject, v10, v43);
              static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            }
            v54 = (Il2CppObject *)static_fields->__9;
            _9__63_0 = (System_Predicate_long__o *)sub_2213CCC(System_Predicate_long__TypeInfo);
            System_Predicate_long____ctor(
              _9__63_0,
              v54,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__63_0__,
              0);
            v55 = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            v55->__9__63_0 = _9__63_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v55->__9__63_0,
              (int32_t)_9__63_0,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            v34 = v53;
            v35 = v52;
            servantIdList = v51;
            v36 = v50;
            v33 = v49;
            v37 = v48;
            this = v47;
          }
          if ( !v44 )
            break;
          gameObject = (void *)System_Collections_Generic_List_long___RemoveAll(
                                 v44,
                                 (System_Predicate_T__o *)_9__63_0,
                                 (const MethodInfo_446D890 *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(max_length) = servantIdList->max_length;
        if ( (__int64)++v38 >= (int)max_length )
          goto LABEL_40;
      }
LABEL_50:
      sub_2213CDC(gameObject, v10);
    }
LABEL_40:
    upperLabel = this->fields.upperLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v31);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0);
    if ( !upperLabel )
      goto LABEL_50;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0);
    lowerLabel = this->fields.lowerLabel;
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12067/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0);
    if ( !lowerLabel )
      goto LABEL_50;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0);
    gameObject = this->fields.lowerLabel;
    if ( !gameObject )
      goto LABEL_50;
    v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v64, -140.0, 0);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_50;
    v65 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v65, 44.0, 0);
    gameObject = this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_50;
    v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v66, 94.0, 0);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v67);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v68);
    decideLabel = this->fields.decideLabel;
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_50;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v70 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0, 0);
  }
}


void ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _BYTE *v3; // x0
  unsigned int kind; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_596C75B & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSellConfirmMenu_SellServantDecide__);
    byte_596C75B = 1;
  }
  v3 = Method_ServantSellConfirmMenu_SellServantDecide__;
  this->fields.isMaxQpChecked = 1;
  kind = this->fields.kind;
  this->fields.state = 3;
  if ( (v3[83] & 2) != 0 )
    v3 = (_BYTE *)sub_2213A78(v3);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, *((_QWORD *)v3 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind < 4), 0, 0);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *info1Label; // x21
  UILabel_o *info3Label; // x21
  ServantSellConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x2
  ServantSellConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x2
  ServantSellConfirmMenu_o *v15; // x0
  const MethodInfo *v16; // x2
  float v17; // s0
  ServantSellConfirmMenu_o *v18; // x0
  const MethodInfo *v19; // x2
  int v20; // w8
  UILabel_o **p_info3Label; // x22
  ServantSellConfirmMenu_o *v22; // x0
  const MethodInfo *v23; // x2
  ServantSellConfirmMenu_o *v24; // x0
  const MethodInfo *v25; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t qp; // x25
  BalanceConfig_c *v28; // x0
  UILabel_o *v29; // x20
  int64_t QpMax; // x26
  int v31; // w8
  __int64 *v32; // x8
  struct UserGameEntity_o *v33; // x8
  ServantSellConfirmMenu_o *v34; // x21
  Il2CppObject *NumberFormatLong; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v39; // x8
  ServantSellConfirmMenu_o *v40; // x21
  Il2CppObject *NumberFormat; // x0
  UILabel_o *v42; // x20
  struct UserGameEntity_o *v43; // x8
  ServantSellConfirmMenu_o *v44; // x21
  Il2CppObject *v45; // x0
  __int64 v46; // x8
  float v47; // s8
  ServantSellConfirmMenu_o *v48; // x0
  const MethodInfo *v49; // x2
  ServantSellConfirmMenu_o *v50; // x0
  const MethodInfo *v51; // x2
  ServantSellConfirmMenu_o *v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x2
  struct UserGameEntity_o *v55; // x8
  BalanceConfig_c *v56; // x0
  int64_t v57; // x21
  UILabel_o *v58; // x20
  int v59; // w8
  struct UserGameEntity_o *v60; // x8
  ServantSellConfirmMenu_o *v61; // x19
  Il2CppObject *v62; // x0
  float v63; // s0
  struct UserGameEntity_o *v64; // x8
  ServantSellConfirmMenu_o *v65; // x21
  Il2CppObject *v66; // x0

  v6 = this;
  if ( (byte_596C750 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12193/*"SERVANT_SELL_INFO7"*/);
    sub_2213A60(&StringLiteral_12188/*"SERVANT_SELL_INFO2_ALERT"*/);
    sub_2213A60(&StringLiteral_12192/*"SERVANT_SELL_INFO6"*/);
    sub_2213A60(&StringLiteral_12190/*"SERVANT_SELL_INFO3"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12189/*"SERVANT_SELL_INFO2_NORMAL"*/);
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&StringLiteral_12191/*"SERVANT_SELL_INFO5"*/);
    byte_596C750 = 1;
  }
  if ( (unsigned int)kind <= 0xD )
  {
    if ( ((1 << kind) & 0x3F00) != 0 )
    {
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_64;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
      if ( !this )
        goto LABEL_64;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      p_info3Label = &v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)v6->fields.info3Label;
      if ( !this )
        goto LABEL_64;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v22, v6->fields.info1Label, -50.0, v23);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v24, v6->fields.info2Label, -78.0, v25);
      v20 = -1026293760;
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
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
              this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12192/*"SERVANT_SELL_INFO6"*/, 0);
              if ( info1Label )
              {
                UILabel__set_text(info1Label, (System_String_o *)this, 0);
                this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
                  info3Label = v6->fields.info3Label;
                  this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"SERVANT_SELL_INFO7"*/, 0);
                  if ( info3Label )
                  {
                    UILabel__set_text(info3Label, (System_String_o *)this, 0);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v11, v6->fields.info1Label, -92.0, v12);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v13, v6->fields.info2Label, -115.0, v14);
                    v17 = -162.0;
                    if ( isNoWarning )
                      v17 = -139.0;
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v15, v6->fields.info3Label, v17, v16);
                    if ( v6->fields.isTwoLinesWarning )
                    {
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v18, v6->fields.info3Label, -176.0, v19);
                      v20 = -1022164992;
                    }
                    else
                    {
                      v20 = -1022689280;
                    }
                    p_info3Label = &v6->fields.warningLabel;
                    goto LABEL_61;
                  }
                }
              }
            }
          }
        }
LABEL_64:
        sub_2213CDC(this, *(_QWORD *)&kind);
      }
      userGameEntity = v6->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_64;
      qp = userGameEntity->fields.qp;
      v28 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind, isNoWarning);
        v28 = BalanceConfig_TypeInfo;
      }
      p_info3Label = &v6->fields.info1Label;
      v29 = v6->fields.info1Label;
      QpMax = v28->static_fields->QpMax;
      v31 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( qp >= QpMax )
      {
        if ( !v31 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isNoWarning);
        v32 = &StringLiteral_12188/*"SERVANT_SELL_INFO2_ALERT"*/;
      }
      else
      {
        if ( !v31 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, isNoWarning);
        v32 = &StringLiteral_12189/*"SERVANT_SELL_INFO2_NORMAL"*/;
      }
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v32, 0);
      v33 = v6->fields.userGameEntity;
      if ( !v33 )
        goto LABEL_64;
      v34 = this;
      NumberFormatLong = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v33->fields.qp, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v34, NumberFormatLong, 0);
      if ( !v29 )
        goto LABEL_64;
      UILabel__set_text(v29, (System_String_o *)this, 0);
      info2Label = v6->fields.info2Label;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12190/*"SERVANT_SELL_INFO3"*/, 0);
      v39 = v6->fields.userGameEntity;
      if ( !v39 )
        goto LABEL_64;
      v40 = this;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v39->fields.mana, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v40, NumberFormat, 0);
      if ( !info2Label )
        goto LABEL_64;
      UILabel__set_text(info2Label, (System_String_o *)this, 0);
      v42 = v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12191/*"SERVANT_SELL_INFO5"*/, 0);
      v43 = v6->fields.userGameEntity;
      if ( !v43 )
        goto LABEL_64;
      v44 = this;
      v45 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v43->fields.rarePri, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v44, v45, 0);
      if ( !v42 )
        goto LABEL_64;
      UILabel__set_text(v42, (System_String_o *)this, 0);
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_64;
      v46 = 108;
      if ( qp >= QpMax )
      {
        v47 = 49.0;
      }
      else
      {
        v46 = 112;
        v47 = 10.0;
      }
      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v46), 0);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v48, v6->fields.info1Label, v47, v49);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v50, v6->fields.info2Label, -50.0, v51);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v52, v6->fields.info3Label, -110.0, v53);
      v55 = v6->fields.userGameEntity;
      if ( !v55 )
        goto LABEL_64;
      v56 = BalanceConfig_TypeInfo;
      v57 = v55->fields.qp;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind, v54);
        v56 = BalanceConfig_TypeInfo;
      }
      v58 = *p_info3Label;
      v59 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v57 < v56->static_fields->QpMax )
      {
        if ( !v59 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v54);
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12189/*"SERVANT_SELL_INFO2_NORMAL"*/, 0);
        v60 = v6->fields.userGameEntity;
        if ( v60 )
        {
          v61 = this;
          v62 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v60->fields.qp, 0);
          this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v61, v62, 0);
          if ( v58 )
          {
            UILabel__set_text(v58, (System_String_o *)this, 0);
            v63 = 10.0;
LABEL_62:
            ServantSellConfirmMenu__SetLabelLocalPositionY(v18, *p_info3Label, v63, v19);
            return;
          }
        }
        goto LABEL_64;
      }
      if ( !v59 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v54);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SERVANT_SELL_INFO2_ALERT"*/, 0);
      v64 = v6->fields.userGameEntity;
      if ( !v64 )
        goto LABEL_64;
      v65 = this;
      v66 = (Il2CppObject *)LocalizationManager__GetNumberFormatLong(v64->fields.qp, 0);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v65, v66, 0);
      if ( !v58 )
        goto LABEL_64;
      UILabel__set_text(v58, (System_String_o *)this, 0);
      this = (ServantSellConfirmMenu_o *)*p_info3Label;
      if ( !*p_info3Label )
        goto LABEL_64;
      UILabel__set_fontSize((UILabel_o *)this, v6->fields.ALERT_MESSAGE_LABEL_FONT_SIZE, 0);
      v20 = 1111752704;
    }
LABEL_61:
    v63 = *(float *)&v20;
    goto LABEL_62;
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
    sub_2213CDC(this, label);
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
      sub_2213CDC(servantSellConfirmListViewManager, *(_QWORD *)&kind);
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
  struct System_Boolean_array *servantTypeFlags; // x9

  v4 = this;
  if ( (byte_596C74F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C74F = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_2213CDC(this, commandCodeIds);
    max_length = commandCodeIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      while ( v6 < (unsigned int)max_length )
      {
        v7 = commandCodeIds->m_Items[v6];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v7,
                                             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
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
        servantTypeFlags = v4->fields.servantTypeFlags;
        if ( !servantTypeFlags )
          goto LABEL_19;
        if ( LODWORD(servantTypeFlags->max_length) <= 2 )
          break;
        LODWORD(max_length) = commandCodeIds->max_length;
        ++v6;
        servantTypeFlags->m_Items[2] = 1;
        if ( (__int64)v6 >= (int)max_length )
          return;
      }
      sub_2213CE4(this);
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
  struct System_Boolean_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Boolean_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo_47A29F8 **v22; // x19
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x21
  NetworkManager_c **v28; // x29
  Il2CppObject *v29; // x28
  const MethodInfo_47A29F8 **v30; // x25
  NetworkManager_c **v31; // x26
  __int64 v32; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x27
  void *monitor; // x19
  Il2CppClass *klass; // x29
  Il2CppObject *v36; // x0
  int32_t getQP; // w19
  Il2CppObject *v38; // x27
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v45; // w28
  __int64 v46; // x2
  struct System_Boolean_array *servantTypeFlags; // x8
  struct System_Boolean_array *isRareFlags; // x8
  bool *m_Items; // x8
  NetworkManager_c *v50; // x0
  NetworkManager_c *v51; // x0
  Il2CppClass *v52; // x19
  void *v53; // x20
  int64_t userIdNumber; // x29
  bool v55; // w8
  struct System_Boolean_array *v56; // x8
  UserServantCommandCodeMaster_o *v59; // [xsp+10h] [xbp-80h]
  UserServantCommandCodeEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_596C74E & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C74E = 1;
  }
  entity = 0;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v8 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 3);
    this->fields.servantTypeFlags = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantTypeFlags,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v15 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 3);
    this->fields.isRareFlags = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.isRareFlags,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = (const MethodInfo_47A29F8 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v59 = (UserServantCommandCodeMaster_o *)Instance,
          !servantIds) )
    {
LABEL_54:
      sub_2213CDC(Instance, v24);
    }
    max_length = servantIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v27 = 0;
      v28 = &NetworkManager_TypeInfo;
      do
      {
        if ( v27 >= (unsigned int)max_length )
LABEL_55:
          sub_2213CE4(Instance);
        if ( !MasterData_object )
          goto LABEL_54;
        v29 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                servantIds->m_Items[v27],
                (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v30 = v22;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(*v22);
        if ( !Instance )
          goto LABEL_54;
        v31 = v28;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v29 )
          goto LABEL_54;
        v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        klass = v29[5].klass;
        monitor = v29[5].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v32);
        *(_QWORD *)&v62.fields.currentCryptoKey = klass;
        *(_QWORD *)&v62.fields.fakeValue = monitor;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v62, 0);
        if ( !v33 )
          goto LABEL_54;
        v36 = DataMasterBase_object__object__int___GetEntity(
                v33,
                (int32_t)Instance,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v38 = v36;
        SellQp = UserServantEntity__getSellQp((UserServantEntity_o *)v29, 0);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana((UserServantEntity_o *)v29, 0);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)v29, 0);
        kind = this->fields.kind;
        v28 = v31;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded((UserServantEntity_o *)v29, 0) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity((UserServantEntity_o *)v29, 0);
        if ( !v38 )
          goto LABEL_54;
        v45 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v38, 0);
        servantTypeFlags = this->fields.servantTypeFlags;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !servantTypeFlags )
            goto LABEL_54;
          if ( (servantTypeFlags->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_55;
          servantTypeFlags->m_Items[1] = 1;
          if ( v45 >= 4 )
          {
            isRareFlags = this->fields.isRareFlags;
            if ( !isRareFlags )
              goto LABEL_54;
            if ( (isRareFlags->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_55;
            m_Items = &isRareFlags->m_Items[1];
LABEL_51:
            *m_Items = 1;
          }
        }
        else
        {
          if ( !servantTypeFlags )
            goto LABEL_54;
          if ( !LODWORD(servantTypeFlags->max_length) )
            goto LABEL_55;
          v50 = *v31;
          servantTypeFlags->m_Items[0] = 1;
          if ( !*(&v50->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v50, v24, v46);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(v31);
            byte_5969EF2 = 1;
          }
          v51 = *v31;
          if ( !*(&(*v31)->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v51, v24, v46);
            v51 = *v31;
          }
          v52 = v38[1].klass;
          v53 = v38[1].monitor;
          userIdNumber = v51->static_fields->userIdNumber;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v46);
          *(_QWORD *)&v63.fields.currentCryptoKey = v52;
          *(_QWORD *)&v63.fields.fakeValue = v53;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v63, 0);
          if ( !v59 )
            goto LABEL_54;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                        v59,
                                        &entity,
                                        userIdNumber,
                                        (int)Instance,
                                        0);
          v28 = v31;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_54;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v55 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_54;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0);
              v55 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v55;
          }
          if ( v45 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v38, 0);
            m_Items = isMaterial;
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v38, 0);
              m_Items = isMaterial;
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                v56 = this->fields.isRareFlags;
                if ( !v56 )
                  goto LABEL_54;
                if ( !LODWORD(v56->max_length) )
                  goto LABEL_55;
                m_Items = v56->m_Items;
              }
            }
            goto LABEL_51;
          }
        }
        LODWORD(max_length) = servantIds->max_length;
        ++v27;
        v22 = v30;
      }
      while ( (__int64)v27 < (int)max_length );
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
  float v12; // s0
  UILabel_o *v13; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t qp; // x20
  __int64 v16; // x8
  float v17; // s8

  v4 = this;
  if ( (byte_596C752 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596C752 = 1;
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
      v12 = 8.0;
      v13 = v4->fields.messageLabel;
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
        sub_2213CDC(MessageText, v9);
      }
      userGameEntity = v4->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_21;
      qp = userGameEntity->fields.qp;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v10);
      MessageText = (System_String_o *)v4->fields.messageLabel;
      if ( !MessageText )
        goto LABEL_21;
      v16 = 108;
      if ( qp >= BalanceConfig_TypeInfo->static_fields->QpMax )
      {
        v17 = 144.0;
      }
      else
      {
        v16 = 104;
        v17 = 100.0;
      }
      UILabel__set_fontSize((UILabel_o *)MessageText, *(_DWORD *)((char *)&v4->klass + v16), 0);
      v13 = v4->fields.messageLabel;
      v12 = v17;
    }
    ServantSellConfirmMenu__SetLabelLocalPositionY((ServantSellConfirmMenu_o *)MessageText, v13, v12, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  float v33; // s9
  float v34; // s8
  UnityEngine_GameObject_o *v35; // x0
  float v36; // s0
  float v37; // s8
  UnityEngine_GameObject_o *v38; // x0
  float v39; // s9
  float v40; // s8
  UnityEngine_GameObject_o *v41; // x0
  float v42; // s0
  float v43; // s8
  UnityEngine_GameObject_o *v44; // x0
  float v45; // s9
  UnityEngine_GameObject_o *v46; // x0
  int32_t v47; // [xsp+0h] [xbp-70h] BYREF
  int32_t v48; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v49; // [xsp+8h] [xbp-68h] BYREF
  float rarePriWidth; // [xsp+Ch] [xbp-64h] BYREF
  __int64 manaWidth; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_596C751 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12198/*"SERVANT_SELL_NUM_TEXT"*/);
    sub_2213A60(&StringLiteral_12201/*"SERVANT_SELL_QP_TEXT"*/);
    sub_2213A60(&StringLiteral_12203/*"SERVANT_SELL_RARE_TEXT2"*/);
    sub_2213A60(&StringLiteral_12194/*"SERVANT_SELL_MANA_TEXT"*/);
    sub_2213A60(&StringLiteral_12202/*"SERVANT_SELL_RARE_TEXT"*/);
    byte_596C751 = 1;
  }
  manaWidth = 0;
  rarePriWidth = 0.0;
  if ( (unsigned int)kind <= 4 )
  {
    QpLabel = this->fields.QpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&getQp);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12201/*"SERVANT_SELL_QP_TEXT"*/, 0);
    if ( !QpLabel )
      goto LABEL_28;
    UILabel__set_text(QpLabel, v12, 0);
    QpNumLabel = this->fields.QpNumLabel;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12198/*"SERVANT_SELL_NUM_TEXT"*/, 0);
    v49 = getQp;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v49);
    v12 = System_String__Format(v15, v16, 0);
    if ( !QpNumLabel )
      goto LABEL_28;
    UILabel__set_text(QpNumLabel, v12, 0);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.QP_NUM_LABEL_SIZE, 0, 0);
    ManaLabel = this->fields.ManaLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12194/*"SERVANT_SELL_MANA_TEXT"*/, 0);
    if ( !ManaLabel )
      goto LABEL_28;
    UILabel__set_text(ManaLabel, v12, 0);
    ManaNumLabel = this->fields.ManaNumLabel;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12198/*"SERVANT_SELL_NUM_TEXT"*/, 0);
    v48 = getMana;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v48);
    v12 = System_String__Format(v19, v20, 0);
    if ( !ManaNumLabel )
      goto LABEL_28;
    UILabel__set_text(ManaNumLabel, v12, 0);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0, 0);
    RareLabel = this->fields.RareLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12202/*"SERVANT_SELL_RARE_TEXT"*/, 0);
    if ( !RareLabel )
      goto LABEL_28;
    UILabel__set_text(RareLabel, v12, 0);
    RareNumLabel = this->fields.RareNumLabel;
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12198/*"SERVANT_SELL_NUM_TEXT"*/, 0);
    v47 = getRarePri;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v47);
    v12 = System_String__Format(v23, v24, 0);
    if ( !RareNumLabel )
      goto LABEL_28;
    UILabel__set_text(RareNumLabel, v12, 0);
    v12 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0, 0);
    RareLabel2 = this->fields.RareLabel2;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12203/*"SERVANT_SELL_RARE_TEXT2"*/, 0);
    if ( !RareLabel2 )
      goto LABEL_28;
    UILabel__set_text(RareLabel2, v12, 0);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(
                      this,
                      (float *)&manaWidth + 1,
                      (float *)&manaWidth,
                      &rarePriWidth,
                      v26);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_28;
    v28 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(gameObject, v28, 0);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_28;
    LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_28;
    v31 = v28 + v30;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    v33 = *((float *)&manaWidth + 1);
    GameObjectExtensions__SetLocalPositionX(v32, (float)(v31 + -250.0) + (float)(*((float *)&manaWidth + 1) * 0.5), 0);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_28;
    v34 = v31 + v33;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(v35, v34, 0);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_28;
    LODWORD(v36) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_28;
    v37 = v34 + v36;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    v39 = *(float *)&manaWidth;
    GameObjectExtensions__SetLocalPositionX(v38, (float)(v37 + -250.0) + (float)(*(float *)&manaWidth * 0.5), 0);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12 )
      goto LABEL_28;
    v40 = v37 + v39;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(v41, v40, 0);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12
      || (LODWORD(v42) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0),
          (v12 = (System_String_o *)this->fields.RareNumLabel) == 0)
      || (v43 = v40 + v42,
          v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0),
          v45 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v44, (float)(v43 + -250.0) + (float)(rarePriWidth * 0.5), 0),
          (v12 = (System_String_o *)this->fields.RareLabel2) == 0) )
    {
LABEL_28:
      sub_2213CDC(v12, v13);
    }
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
    GameObjectExtensions__SetLocalPositionX(v46, v43 + v45, 0);
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
    sub_2213CDC(IsOnlyCloseButton, v5);
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
    sub_2213CDC(0, v10);
  UILabel__set_text(warningLabel, WarningText, 0);
}


void ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596C749 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C749 = 1;
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
    sub_2213CDC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ServantSellConfirmMenu__TransitionToCombineScene(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596C759 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C759 = 1;
  }
  v3 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  this->fields.state = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    sub_2213CDC(0, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
}


bool ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v2 = this;
  if ( (byte_596C747 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_596C747 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_2213CDC(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C767 & 1) == 0 )
  {
    sub_2213A60(&ServantSellConfirmMenu___c_TypeInfo);
    byte_596C767 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantSellConfirmMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantSellConfirmMenu___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantSellConfirmMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantSellConfirmMenu___c___ctor(ServantSellConfirmMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantSellConfirmMenu___c___OpenSellEquippedLastSvtWarning_b__63_0(
        ServantSellConfirmMenu___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s == 0;
}