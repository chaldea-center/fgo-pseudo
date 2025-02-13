void __fastcall ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD8905 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    byte_4BD8905 = 1;
  }
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_BFE930;
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  v3 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.lastSvtCommandCodeList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellConfirmMenu__CallOnClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *onClose; // x19
  PartyOrganizationUtility_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1C21DDC(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_int__o *onSellServantConfirm; // x20
  PartyOrganizationUtility_o *p_onSellServantConfirm; // x0

  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    p_onSellServantConfirm = (PartyOrganizationUtility_o *)&this->fields.onSellServantConfirm;
    p_onSellServantConfirm->klass = 0LL;
    sub_1C21DDC(p_onSellServantConfirm, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  if ( (byte_4BD88E7 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4BD88E7 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1C22094(this, method);
  v4 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v4;
}


void __fastcall ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_33840692(this, 0LL, v2);
}


void __fastcall ServantSellConfirmMenu__Close_33840692(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BD88F5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndClose__);
    byte_4BD88F5 = 1;
  }
  this->fields.onClose = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0

  if ( (byte_4BD88FD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD88FD = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0LL, 0LL) )
  {
    v5 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v5 )
      sub_1C22094(0LL, v4);
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
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4BD8903 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_4BD8903 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v4 = (System_Action_object__o *)sub_1C22084(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0LL);
  if ( !servantSellConfirmListViewManager )
    sub_1C22094(v5, v6);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v4;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int64_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantSellConfirmListViewManager__SetMode_33824544(servantSellConfirmListViewManager, 2, v13);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4BD8900 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_4BD8900 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v4 = (System_Action_object__o *)sub_1C22084(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0LL);
  if ( !servantSellConfirmListViewManager )
    sub_1C22094(v5, v6);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v4;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int64_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantSellConfirmListViewManager__SetMode_33824544(servantSellConfirmListViewManager, 2, v13);
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
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4BD88F4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ServantSellConfirmListViewItem__TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    byte_4BD88F4 = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v5 = (System_Action_object__o *)sub_1C22084(System_Action_ServantSellConfirmListViewItem__TypeInfo);
    System_Action_object____ctor(
      v5,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      0LL);
    if ( !servantSellConfirmListViewManager )
      sub_1C22094(v6, v7);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v5;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (int64_t)v5,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ServantSellConfirmListViewManager__SetMode_33824544(servantSellConfirmListViewManager, 2, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowCommandCode(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4BD8902 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8902 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1C22094(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowServant(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4BD88FF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndCloseShowServant__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD88FF = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1C22094(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSellConfirmMenu__GetIsOnlyCloseButton(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  unsigned int v5; // w22
  System_String_o *decideButton; // x0
  UILabel_o *closeLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21

  if ( (byte_4BD88EC & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11862/*"SERVANT_SELL_CLOSE"*/);
    sub_1C21E38(&StringLiteral_11863/*"SERVANT_SELL_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11861/*"SERVANT_SELL_CANCEL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD88EC = 1;
  }
  v5 = kind - 4;
  if ( kind == 4 || v5 > 9 )
  {
    decideLabel = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11863/*"SERVANT_SELL_DECIDE"*/, 0LL);
    if ( decideLabel )
    {
      UILabel__set_text(decideLabel, decideButton, 0LL);
      cancelLabel = this->fields.cancelLabel;
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11861/*"SERVANT_SELL_CANCEL"*/, 0LL);
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
            return kind != 4 && v5 < 0xA;
          }
        }
      }
    }
LABEL_19:
    sub_1C22094(decideButton, *(_QWORD *)&kind);
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
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SERVANT_SELL_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, decideButton, 0LL);
  decideButton = (System_String_o *)this->fields.warningLabel;
  if ( !decideButton )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)decideButton, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  return kind != 4 && v5 < 0xA;
}


bool __fastcall ServantSellConfirmMenu__GetIsQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o **title,
        System_String_o **message,
        System_String_o **getable,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *v9; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  bool v44; // w20
  struct UserGameEntity_o *v46; // x9
  int32_t qp; // w23
  int32_t QpMax; // w8
  struct UserGameEntity_o *v49; // x9
  int32_t v50; // w23
  int32_t getQP; // w24
  System_String_o *v52; // x23
  long double v53; // q0
  _QWORD *v54; // x24
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  System_String_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct UserGameEntity_o *v65; // x8
  System_String_o *v66; // x21
  System_String_o *v67; // x0
  BalanceConfig_c *v68; // x8
  Il2CppObject *v69; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_String_o *v78; // x19
  Il2CppObject *v79; // x0
  System_String_o *v80; // x22
  long double inited; // q0
  _QWORD *v82; // x23
  __int64 v83; // x8
  __int64 v84; // x0
  __int64 v85; // x0
  System_String_o *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct UserGameEntity_o *v93; // x8
  System_String_o *v94; // x20
  System_String_o *NumberFormat; // x0
  BalanceConfig_c *v96; // x8
  Il2CppObject *v97; // x21
  Il2CppObject *v98; // x0

  v9 = (PartyOrganizationUtility_o *)message;
  if ( (byte_4BD88F9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_object___);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12333/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/);
    sub_1C21E38(&StringLiteral_12334/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/);
    sub_1C21E38(&StringLiteral_12331/*"SHOP_SELL_SERVANT_MAX_ALERT"*/);
    sub_1C21E38(&StringLiteral_8690/*"MANA_NAME"*/);
    sub_1C21E38(&StringLiteral_11163/*"RARE_PRI_NAME"*/);
    sub_1C21E38(&StringLiteral_12335/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12336/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/);
    sub_1C21E38(&StringLiteral_12332/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD88F9 = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)title,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)message,
    (int32_t)getable,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v9->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  sub_1C21DDC(v9, (int64_t)StringLiteral_1/*""*/, v12, v13, v14, v15, v16, v17);
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)getable, (int64_t)StringLiteral_1/*""*/, v18, v19, v20, v21, v22, v23);
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
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12331/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
        v31 = &StringLiteral_11163/*"RARE_PRI_NAME"*/;
        goto LABEL_17;
      }
      v46 = this->fields.userGameEntity;
      if ( v46 )
      {
        qp = v46->fields.qp;
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
          v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12333/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0LL);
          v82 = Method_System_Array_Empty_object___;
          v83 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
          if ( !v83 )
          {
            sub_1C73D70(Method_System_Array_Empty_object___);
            v83 = v82[7];
          }
          v84 = *(_QWORD *)(v83 + 16);
          if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
            v84 = sub_1C73D14(inited);
          if ( !*(_DWORD *)(v84 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v84);
          v85 = *(_QWORD *)(v82[7] + 16LL);
          if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
            v85 = sub_1C73D14(inited);
          v86 = System_String__Format_63129984(v80, **(System_Object_array ***)(v85 + 184), 0LL);
          *title = v86;
          sub_1C21DDC((PartyOrganizationUtility_o *)title, (int64_t)v86, v87, v88, v89, v90, v91, v92);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12332/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0LL);
          v93 = this->fields.userGameEntity;
          if ( v93 )
          {
            v94 = (System_String_o *)v24;
            NumberFormat = LocalizationManager__GetNumberFormat(v93->fields.qp, 0LL);
            v96 = BalanceConfig_TypeInfo;
            v97 = (Il2CppObject *)NumberFormat;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v96 = BalanceConfig_TypeInfo;
            }
            v98 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v96->static_fields->QpMax, 0LL);
            v37 = System_String__Format_63129848(v94, v97, v98, 0LL);
            v44 = 1;
            goto LABEL_18;
          }
        }
        else
        {
          v49 = this->fields.userGameEntity;
          if ( v49 )
          {
            v50 = v49->fields.qp;
            getQP = this->fields.getQP;
            if ( !*((_DWORD *)v24 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v24);
              QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
            }
            if ( getQP + v50 <= QpMax )
              return 0;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0LL);
            v54 = Method_System_Array_Empty_object___;
            v55 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
            if ( !v55 )
            {
              sub_1C73D70(Method_System_Array_Empty_object___);
              v55 = v54[7];
            }
            v56 = *(_QWORD *)(v55 + 16);
            if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
              v56 = sub_1C73D14(v53);
            if ( !*(_DWORD *)(v56 + 224) )
              v53 = j_il2cpp_runtime_class_init_0(v56);
            v57 = *(_QWORD *)(v54[7] + 16LL);
            if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
              v57 = sub_1C73D14(v53);
            v58 = System_String__Format_63129984(v52, **(System_Object_array ***)(v57 + 184), 0LL);
            *title = v58;
            sub_1C21DDC((PartyOrganizationUtility_o *)title, (int64_t)v58, v59, v60, v61, v62, v63, v64);
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
            v65 = this->fields.userGameEntity;
            if ( v65 )
            {
              v66 = (System_String_o *)v24;
              v67 = LocalizationManager__GetNumberFormat(v65->fields.qp, 0LL);
              v68 = BalanceConfig_TypeInfo;
              v69 = (Il2CppObject *)v67;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v68 = BalanceConfig_TypeInfo;
              }
              v70 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v68->static_fields->QpMax, 0LL);
              v71 = System_String__Format_63129848(v66, v69, v70, 0LL);
              v9->klass = (PartyOrganizationUtility_c *)v71;
              sub_1C21DDC(v9, (int64_t)v71, v72, v73, v74, v75, v76, v77);
              v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0LL);
              v79 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0LL);
              v37 = System_String__Format(v78, v79, 0LL);
              v44 = 1;
              v9 = (PartyOrganizationUtility_o *)getable;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_57:
    sub_1C22094(v24, v25);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12331/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
  v31 = &StringLiteral_8690/*"MANA_NAME"*/;
LABEL_17:
  v35 = v30;
  v36 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
  v37 = System_String__Format(v35, v36, 0LL);
  v44 = 0;
LABEL_18:
  v9->klass = (PartyOrganizationUtility_c *)v37;
  sub_1C21DDC(v9, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  return v44;
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

  v6 = this;
  if ( (byte_4BD88F2 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11814/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/);
    sub_1C21E38(&StringLiteral_11784/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/);
    sub_1C21E38(&StringLiteral_11813/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/);
    sub_1C21E38(&StringLiteral_11872/*"SERVANT_SELL_MESSAGE_ERROR"*/);
    sub_1C21E38(&StringLiteral_11874/*"SERVANT_SELL_MESSAGE_START"*/);
    sub_1C21E38(&StringLiteral_11873/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/);
    sub_1C21E38(&StringLiteral_11812/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/);
    sub_1C21E38(&StringLiteral_11783/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/);
    sub_1C21E38(&StringLiteral_11754/*"SERVANT_ALL_SELL_MESSAGE_END"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_11782/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/);
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&StringLiteral_11755/*"SERVANT_ALL_SELL_MESSAGE_START"*/);
    byte_4BD88F2 = 1;
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
        v7 = &StringLiteral_11755/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_1C22094(this, *(_QWORD *)&kind);
      max_length = servantTypeFlags->max_length;
      if ( !max_length )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[4] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_11874/*"SERVANT_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
      }
      if ( max_length <= 1 )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[5] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_11814/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
      }
      if ( max_length <= 2 )
LABEL_47:
        sub_1C2209C(this, *(_QWORD *)&kind);
      if ( servantTypeFlags->m_Items[6] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = &StringLiteral_11782/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
        return LocalizationManager__Get((System_String_o *)*v7, 0LL);
      }
      return (System_String_o *)StringLiteral_1/*""*/;
    case 5:
    case 6:
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11754/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11872/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11812/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11783/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11873/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11813/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v7, 0LL);
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_11784/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
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
    sub_1C22094(QpNumLabel, qpWidth);
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
  __int64 *v12; // x8
  struct System_Boolean_array *v13; // x8
  System_String_o *v14; // x19
  System_String_o *v15; // x2
  unsigned int v16; // w8
  struct System_Boolean_array *isRareFlags; // x8
  unsigned int max_length; // w9

  v9 = kind;
  v10 = this;
  if ( (byte_4BD88F3 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11785/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/);
    sub_1C21E38(&StringLiteral_89/*"\r\n"*/);
    sub_1C21E38(&StringLiteral_11881/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_11756/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_11742/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C21E38(&StringLiteral_11864/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/);
    sub_1C21E38(&StringLiteral_11815/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&StringLiteral_11845/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/);
    byte_4BD88F3 = 1;
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
      v12 = &StringLiteral_11742/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0LL);
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
            v12 = &StringLiteral_11845/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_11756/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
      return LocalizationManager__Get((System_String_o *)*v12, 0LL);
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
        v12 = &StringLiteral_11881/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
        return LocalizationManager__Get((System_String_o *)*v12, 0LL);
      }
      if ( max_length > 1 )
      {
        if ( isRareFlags->m_Items[5] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v12 = &StringLiteral_11815/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0LL);
        }
        if ( max_length > 2 )
        {
          if ( !isRareFlags->m_Items[6] )
            return (System_String_o *)StringLiteral_1/*""*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v12 = &StringLiteral_11785/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v12, 0LL);
        }
      }
    }
LABEL_55:
    sub_1C2209C(this, *(_QWORD *)&kind);
  }
  if ( isMaterial )
    goto LABEL_17;
  v13 = v10->fields.isRareFlags;
  if ( !v13 )
LABEL_56:
    sub_1C22094(this, *(_QWORD *)&kind);
  if ( v13->max_length <= 2 )
    goto LABEL_55;
  if ( !v13->m_Items[6] && !v13->m_Items[5] && !v13->m_Items[4] )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_11864/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v12, 0LL);
  }
LABEL_17:
  v10->fields.isTwoLinesWarning = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11881/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11864/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0LL);
  return System_String__Concat_63126736(v14, (System_String_o *)StringLiteral_89/*"\r\n"*/, v15, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(0LL, selectedId);
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void __fastcall ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4BD88FB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Clear__);
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&Method_ServantSellConfirmMenu_OnClickCancel__);
    byte_4BD88FB = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( v2->fields.kind == 4 )
    {
      lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_1C22094(this, method);
      v4 = lastSvtCommandCodeList->fields._version + 1;
      lastSvtCommandCodeList->fields._size = 0;
      lastSvtCommandCodeList->fields._version = v4;
    }
    v2->fields.state = 3;
    v5 = Method_ServantSellConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_ServantSellConfirmMenu_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(v2, 0, v7);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD88FC & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantSellConfirmMenu_OnClickClose__);
    byte_4BD88FC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantSellConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v5);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4BD88F6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_1C21E38(&Method_ServantSellConfirmMenu_OnClickDecide__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD88F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    message = (System_String_o *)StringLiteral_1/*""*/;
    title = (System_String_o *)StringLiteral_1/*""*/;
    getable = (System_String_o *)StringLiteral_1/*""*/;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v2);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1/*""*/, 0LL) || this->fields.isMaxQpChecked )
    {
      ServantSellConfirmMenu__SellServantDecide(this, v5);
    }
    else
    {
      v6 = Method_ServantSellConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C21E50(Method_ServantSellConfirmMenu_OnClickDecide__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
      if ( IsQpMaxAlert )
      {
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v8);
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = message;
        v11 = (CommonUI_o *)Instance;
        v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
        if ( !v11 )
          sub_1C22094(v13, v14);
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
          0LL,
          0.0,
          0LL);
      }
    }
  }
}


void __fastcall ServantSellConfirmMenu__OnEnable(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4BD8904 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15918/*"Window/Objects/CancelButton"*/);
    sub_1C21E38(&StringLiteral_15919/*"Window/Objects/CloseButton"*/);
    byte_4BD8904 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(transform, (System_String_o *)StringLiteral_15918/*"Window/Objects/CancelButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(v4, (System_String_o *)StringLiteral_15919/*"Window/Objects/CloseButton"*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__OnSelectCommandCodeDetail(
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

  if ( (byte_4BD8901 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndShowCommandCode__);
    sub_1C21E38(&Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8901 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (CommonUI_o *)Instance,
          v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0LL),
          !v11) )
    {
      sub_1C22094(v7, v8);
    }
    CommonUI__OpenServantStatusDialog_31140820(v11, 32, UserCommandCodeEntity_k__BackingField, v12, 0LL, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__OnSelectServantDetail(
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
  if ( (byte_4BD88FE & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndShowServant__);
    sub_1C21E38(&Method_ServantSellConfirmMenu_OnSelectServantDetail__);
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD88FE = 1;
  }
  if ( v4->fields.state == 2 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v5 = Method_ServantSellConfirmMenu_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectServantDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C21E50(Method_ServantSellConfirmMenu_OnSelectServantDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v10 = (CommonUI_o *)Instance;
      v11 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v11,
        (Il2CppObject *)v4,
        Method_ServantSellConfirmMenu_EndShowServant__,
        0LL);
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_31137496(v10, 29, servantStatusId, v11, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1C22094(this, selectItem);
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
void __fastcall ServantSellConfirmMenu__Open(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Int64_array *commandCodeIdList,
        System_Action_int__o *onSellServantConfirm,
        const MethodInfo *method)
{
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
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
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v40; // w9
  System_Action_o *v41; // x20
  bool isNoWarning; // [xsp+8h] [xbp-48h] BYREF
  bool isEquipedCommandCode; // [xsp+Ch] [xbp-44h] BYREF
  bool isExceeded; // [xsp+18h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BD88E9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_1C21E38(&StringLiteral_11882/*"SERVANT_SELL_TITLE"*/);
    byte_4BD88E9 = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  isNoWarning = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( !this->fields.state )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    this->fields.kind = kind;
    this->fields.onSellServantConfirm = onSellServantConfirm;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.onSellServantConfirm,
      (int64_t)onSellServantConfirm,
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
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
        (int64_t)SelfUserGame,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_SELL_TITLE"*/, 0LL);
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
                    goto LABEL_21;
                  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
                  if ( lastSvtCommandCodeList )
                  {
                    v40 = lastSvtCommandCodeList->fields._version + 1;
                    lastSvtCommandCodeList->fields._size = 0;
                    lastSvtCommandCodeList->fields._version = v40;
LABEL_21:
                    this->fields.state = 1;
                    v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                    System_Action___ctor(v41, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C22094(gameObject, v18);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x4
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v26; // x20

  if ( (byte_4BD88EB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_1C21E38(&StringLiteral_3791/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_11862/*"SERVANT_SELL_CLOSE"*/);
    sub_1C21E38(&StringLiteral_3792/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_4BD88EB = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_28;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v7 = System_Linq_Enumerable__Distinct_long_(
           lastSvtCommandCodeList,
           (const MethodInfo_2FCD260 *)Method_System_Linq_Enumerable_Distinct_long___);
    v8 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                             v7,
                                                             (const MethodInfo_2FED454 *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v8;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.lastSvtCommandCodeList,
      (int64_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this->fields.onSellServantConfirm = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.onSellServantConfirm,
      (int64_t)callback,
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
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3792/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0LL);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3791/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
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
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_11862/*"SERVANT_SELL_CLOSE"*/, 0LL);
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
                                        v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
    sub_1C22094(lastSvtCommandCodeList, v5);
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
  System_Action_o *v15; // x29
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4BD88F7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__);
    sub_1C21E38(&Method_ServantSellConfirmMenu_SellServantDecide__);
    sub_1C21E38(&Method_ServantSellConfirmMenu_TransitionToCombineScene__);
    sub_1C21E38(&StringLiteral_11877/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11876/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_1C21E38(&StringLiteral_11883/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_4BD88F7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11877/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11876/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v12 = v10;
  v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, (intptr_t)Method_ServantSellConfirmMenu_SellServantDecide__, 0LL);
  onTransition = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_TransitionToCombineScene__,
    0LL);
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
  if ( !servantSellMaxAlertDialog )
    sub_1C22094(v16, v17);
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
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  void *gameObject; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v18; // w9
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UILabel_o *titleLabel; // x21
  const MethodInfo *v27; // x5
  const MethodInfo *v28; // x4
  __int64 v29; // x8
  unsigned __int64 v30; // x26
  int64_t v31; // x22
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_long__o *v34; // x22
  System_Predicate_long__o *v35; // x23
  Il2CppObject *v36; // x24
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  UILabel_o *decideLabel; // x20
  System_Action_o *v52; // x20
  bool isEquipedCommandCode; // [xsp+4h] [xbp-6Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-68h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BD88EA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&System_Predicate_long__TypeInfo);
    sub_1C21E38(&Method_ServantSellConfirmMenu_EndOpen__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__);
    sub_1C21E38(&ServantSellConfirmMenu___c_TypeInfo);
    sub_1C21E38(&StringLiteral_11744/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11743/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_1C21E38(&StringLiteral_11882/*"SERVANT_SELL_TITLE"*/);
    byte_4BD88EA = 1;
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
    v18 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v18;
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.onSellServantConfirm,
      (int64_t)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    *(_QWORD *)&this->fields.getQP = 0LL;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
      (int64_t)SelfUserGame,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_SELL_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_50;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v27);
    gameObject = this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_50;
    ServantSellConfirmListViewManager__CreateSortServantList(
      (ServantSellConfirmListViewManager_o *)gameObject,
      servantIdList,
      isExceeded,
      1,
      v28);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_50;
    v29 = *(_QWORD *)&servantIdList->max_length;
    if ( (int)v29 >= 1 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        if ( v30 >= (unsigned int)v29 )
          sub_1C2209C(gameObject, v10);
        v31 = servantIdList->m_Items[v30];
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        gameObject = DataManager__GetMasterData_object_(
                       (DataManager_o *)gameObject,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !gameObject )
          break;
        gameObject = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                       v31,
                       (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !gameObject )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
        gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
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
                       0LL);
        if ( gameObject )
        {
          v10 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          gameObject = this->fields.lastSvtCommandCodeList;
          if ( !gameObject )
            break;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)gameObject,
            v10,
            (const MethodInfo_36372F4 *)Method_System_Collections_Generic_List_long__AddRange__);
          gameObject = ServantSellConfirmMenu___c_TypeInfo;
          v34 = this->fields.lastSvtCommandCodeList;
          if ( !ServantSellConfirmMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantSellConfirmMenu___c_TypeInfo);
            gameObject = ServantSellConfirmMenu___c_TypeInfo;
          }
          v35 = *(System_Predicate_long__o **)(*((_QWORD *)gameObject + 23) + 8LL);
          if ( !v35 )
          {
            if ( !*((_DWORD *)gameObject + 56) )
            {
              j_il2cpp_runtime_class_init_0(gameObject);
              gameObject = ServantSellConfirmMenu___c_TypeInfo;
            }
            v36 = (Il2CppObject *)**((_QWORD **)gameObject + 23);
            v35 = (System_Predicate_long__o *)sub_1C22084(System_Predicate_long__TypeInfo);
            System_Predicate_long____ctor(
              v35,
              v36,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              0LL);
            static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            static_fields->__9__62_0 = v35;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
              (int64_t)v35,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
          }
          if ( !v34 )
            break;
          gameObject = (void *)System_Collections_Generic_List_long___RemoveAll(
                                 v34,
                                 (System_Predicate_T__o *)v35,
                                 (const MethodInfo_3638710 *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(v29) = servantIdList->max_length;
        if ( (__int64)++v30 >= (int)v29 )
          goto LABEL_40;
      }
LABEL_50:
      sub_1C22094(gameObject, v10);
    }
LABEL_40:
    upperLabel = this->fields.upperLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_50;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
    if ( !lowerLabel )
      goto LABEL_50;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0LL);
    gameObject = this->fields.lowerLabel;
    if ( !gameObject )
      goto LABEL_50;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, -140.0, 0LL);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_50;
    v47 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v47, 44.0, 0LL);
    gameObject = this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_50;
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v48, 94.0, 0LL);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v49);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v50);
    decideLabel = this->fields.decideLabel;
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_50;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v52 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD88FA & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantSellConfirmMenu_SellServantDecide__);
    byte_4BD88FA = 1;
  }
  this->fields.isMaxQpChecked = 1;
  this->fields.state = 3;
  v3 = Method_ServantSellConfirmMenu_SellServantDecide__;
  if ( this->fields.kind > 3u )
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantSellConfirmMenu_SellServantDecide__);
    v4 = 0;
  }
  else
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ServantSellConfirmMenu_SellServantDecide__);
    v4 = 8;
  }
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0LL);
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
  int32_t qp; // w25
  BalanceConfig_c *v26; // x0
  int32_t QpMax; // w26
  UILabel_o *v28; // x20
  System_String_o **v29; // x8
  struct UserGameEntity_o *v30; // x8
  ServantSellConfirmMenu_o *v31; // x21
  Il2CppObject *NumberFormat; // x0
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v34; // x8
  ServantSellConfirmMenu_o *v35; // x21
  Il2CppObject *v36; // x0
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
  int32_t v51; // w21
  UILabel_o *v52; // x20
  int32_t v53; // w23
  struct UserGameEntity_o *v54; // x8
  ServantSellConfirmMenu_o *v55; // x19
  Il2CppObject *v56; // x0
  float v57; // s0
  struct UserGameEntity_o *v58; // x8
  ServantSellConfirmMenu_o *v59; // x21
  Il2CppObject *v60; // x0

  v6 = this;
  if ( (byte_4BD88EF & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11870/*"SERVANT_SELL_INFO7"*/);
    sub_1C21E38(&StringLiteral_11865/*"SERVANT_SELL_INFO2_ALERT"*/);
    sub_1C21E38(&StringLiteral_11869/*"SERVANT_SELL_INFO6"*/);
    sub_1C21E38(&StringLiteral_11867/*"SERVANT_SELL_INFO3"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_11866/*"SERVANT_SELL_INFO2_NORMAL"*/);
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&StringLiteral_11868/*"SERVANT_SELL_INFO5"*/);
    byte_4BD88EF = 1;
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
              this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11869/*"SERVANT_SELL_INFO6"*/, 0LL);
              if ( info1Label )
              {
                UILabel__set_text(info1Label, (System_String_o *)this, 0LL);
                this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  info3Label = v6->fields.info3Label;
                  this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11870/*"SERVANT_SELL_INFO7"*/,
                                                       0LL);
                  if ( info3Label )
                  {
                    UILabel__set_text(info3Label, (System_String_o *)this, 0LL);
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
                    goto LABEL_59;
                  }
                }
              }
            }
          }
        }
LABEL_62:
        sub_1C22094(this, *(_QWORD *)&kind);
      }
      userGameEntity = v6->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_62;
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
      v29 = (System_String_o **)(qp >= QpMax ? &StringLiteral_11865/*"SERVANT_SELL_INFO2_ALERT"*/ : &StringLiteral_11866/*"SERVANT_SELL_INFO2_NORMAL"*/);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(*v29, 0LL);
      v30 = v6->fields.userGameEntity;
      if ( !v30 )
        goto LABEL_62;
      v31 = this;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v30->fields.qp, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v31, NumberFormat, 0LL);
      if ( !v28 )
        goto LABEL_62;
      UILabel__set_text(v28, (System_String_o *)this, 0LL);
      info2Label = v6->fields.info2Label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11867/*"SERVANT_SELL_INFO3"*/, 0LL);
      v34 = v6->fields.userGameEntity;
      if ( !v34 )
        goto LABEL_62;
      v35 = this;
      v36 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v34->fields.mana, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v35, v36, 0LL);
      if ( !info2Label )
        goto LABEL_62;
      UILabel__set_text(info2Label, (System_String_o *)this, 0LL);
      v37 = v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11868/*"SERVANT_SELL_INFO5"*/, 0LL);
      v38 = v6->fields.userGameEntity;
      if ( !v38 )
        goto LABEL_62;
      v39 = this;
      v40 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v38->fields.rarePri, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v39, v40, 0LL);
      if ( !v37 )
        goto LABEL_62;
      UILabel__set_text(v37, (System_String_o *)this, 0LL);
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_62;
      v41 = 100LL;
      if ( qp < QpMax )
        v41 = 104LL;
      v42 = qp >= QpMax ? 49.0 : 10.0;
      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v41), 0LL);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v43, v6->fields.info1Label, v42, v44);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v45, v6->fields.info2Label, -50.0, v46);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v47, v6->fields.info3Label, -110.0, v48);
      v49 = v6->fields.userGameEntity;
      if ( !v49 )
        goto LABEL_62;
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
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11866/*"SERVANT_SELL_INFO2_NORMAL"*/, 0LL);
        v54 = v6->fields.userGameEntity;
        if ( v54 )
        {
          v55 = this;
          v56 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v54->fields.qp, 0LL);
          this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v55, v56, 0LL);
          if ( v52 )
          {
            UILabel__set_text(v52, (System_String_o *)this, 0LL);
            v57 = 10.0;
LABEL_60:
            ServantSellConfirmMenu__SetLabelLocalPositionY(v16, *p_info3Label, v57, v17);
            return;
          }
        }
        goto LABEL_62;
      }
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11865/*"SERVANT_SELL_INFO2_ALERT"*/, 0LL);
      v58 = v6->fields.userGameEntity;
      if ( !v58 )
        goto LABEL_62;
      v59 = this;
      v60 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v58->fields.qp, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v59, v60, 0LL);
      if ( !v52 )
        goto LABEL_62;
      UILabel__set_text(v52, (System_String_o *)this, 0LL);
      this = (ServantSellConfirmMenu_o *)*p_info3Label;
      if ( !*p_info3Label )
        goto LABEL_62;
      UILabel__set_fontSize((UILabel_o *)this, v6->fields.ALERT_MESSAGE_LABEL_FONT_SIZE, 0LL);
      v18 = 1111752704;
    }
LABEL_59:
    v57 = *(float *)&v18;
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
    sub_1C22094(this, label);
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
      sub_1C22094(servantSellConfirmListViewManager, *(_QWORD *)&kind);
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
  int32_t getMana; // w29
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8

  v4 = this;
  if ( (byte_4BD88EE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD88EE = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_1C22094(this, commandCodeIds);
    servantTypeFlags = *(struct System_Boolean_array **)&commandCodeIds->max_length;
    if ( (int)servantTypeFlags >= 1 )
    {
      v6 = 0LL;
      while ( v6 < (unsigned int)servantTypeFlags )
      {
        v7 = commandCodeIds->m_Items[v6];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v7,
                                             (const MethodInfo_325E324 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
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
      sub_1C2209C(this, commandCodeIds);
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
  const MethodInfo_388D058 **v8; // x20
  struct System_Boolean_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Boolean_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x26
  __int64 v26; // x8
  UserServantCommandCodeMaster_o *v27; // x27
  unsigned __int64 v28; // x28
  int64_t *m_Items; // x22
  Il2CppObject *v30; // x21
  const MethodInfo_388D058 **v31; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x29
  void *monitor; // x19
  Il2CppClass *klass; // x20
  Il2CppObject *v35; // x0
  int32_t getQP; // w19
  Il2CppObject *v37; // x29
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v44; // w21
  struct System_Boolean_array *v45; // x8
  unsigned int max_length; // w9
  struct System_Boolean_array *v47; // x8
  NetworkManager_c *v48; // x0
  void *v49; // x20
  Il2CppClass *v50; // x25
  int64_t userIdNumber; // x19
  bool v52; // w8
  struct System_Boolean_array *v53; // x8
  struct System_Boolean_array **p_isRareFlags; // [xsp+8h] [xbp-98h]
  System_Int64_array *v58; // [xsp+28h] [xbp-78h]
  struct System_Boolean_array **p_servantTypeFlags; // [xsp+30h] [xbp-70h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4BD88ED & 1) == 0 )
  {
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD88ED = 1;
  }
  entity = 0LL;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v8 = (const MethodInfo_388D058 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v9 = (struct System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, 3LL);
    this->fields.servantTypeFlags = v9;
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.servantTypeFlags, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    v16 = (struct System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, 3LL);
    this->fields.isRareFlags = v16;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.isRareFlags, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          !servantIds) )
    {
LABEL_53:
      sub_1C22094(Instance, v24);
    }
    v26 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = (UserServantCommandCodeMaster_o *)Instance;
      v28 = 0LL;
      m_Items = servantIds->m_Items;
      v58 = servantIds;
      while ( v28 < (unsigned int)v26 )
      {
        if ( !MasterData_object )
          goto LABEL_53;
        v30 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                m_Items[v28],
                (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v31 = v8;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(*v8);
        if ( !Instance )
          goto LABEL_53;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v30 )
          goto LABEL_53;
        v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        klass = v30[5].klass;
        monitor = v30[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = klass;
        *(_QWORD *)&v61.fields.fakeValue = monitor;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v61, 0LL);
        if ( !v32 )
          goto LABEL_53;
        v35 = DataMasterBase_object__object__int___GetEntity(
                v32,
                (int32_t)Instance,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v37 = v35;
        SellQp = UserServantEntity__getSellQp((UserServantEntity_o *)v30, 0LL);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana((UserServantEntity_o *)v30, 0LL);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)v30, 0LL);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded((UserServantEntity_o *)v30, 0LL) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity((UserServantEntity_o *)v30, 0LL);
        if ( !v37 )
          goto LABEL_53;
        v44 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v37, 0LL);
        v45 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_53;
        max_length = v45->max_length;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( max_length <= 1 )
            break;
          v45->m_Items[5] = 1;
          if ( v44 >= 4 )
          {
            v47 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_53;
            if ( v47->max_length <= 1 )
              break;
            v47->m_Items[5] = 1;
          }
        }
        else
        {
          if ( !max_length )
            break;
          v45->m_Items[4] = 1;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          v48 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v48 = NetworkManager_TypeInfo;
          }
          v50 = v37[1].klass;
          v49 = v37[1].monitor;
          userIdNumber = v48->static_fields->userIdNumber;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v62.fields.currentCryptoKey = v50;
          *(_QWORD *)&v62.fields.fakeValue = v49;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v62, 0LL);
          if ( !v27 )
            goto LABEL_53;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(
                                        v27,
                                        &entity,
                                        userIdNumber,
                                        (int)Instance,
                                        0LL);
          servantIds = v58;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_53;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v52 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_53;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
              v52 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v52;
          }
          if ( v44 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v37, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v37, 0LL),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v53 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_53;
              if ( !v53->max_length )
                break;
              v53->m_Items[4] = 1;
            }
          }
        }
        LODWORD(v26) = servantIds->max_length;
        ++v28;
        v8 = v31;
        if ( (__int64)v28 >= (int)v26 )
          return;
      }
      sub_1C2209C(Instance, v24);
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
  struct UserGameEntity_o *userGameEntity; // x9
  int32_t qp; // w20
  BalanceConfig_c *v16; // x8
  bool v17; // cc
  __int64 v18; // x8
  float v19; // s8

  v4 = this;
  if ( (byte_4BD88F1 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD88F1 = 1;
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
        sub_1C22094(MessageText, v9);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  UILabel_o *ManaLabel; // x22
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UILabel_o *RareLabel; // x21
  UILabel_o *RareNumLabel; // x21
  System_String_o *v29; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UILabel_o *RareLabel2; // x20
  const MethodInfo *v35; // x4
  float NumLabelWidth; // s0
  float v37; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v39; // s0
  float v40; // s8
  UnityEngine_GameObject_o *v41; // x0
  float v42; // s9
  float v43; // s8
  UnityEngine_GameObject_o *v44; // x0
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
  UnityEngine_GameObject_o *v55; // x0
  int32_t v56; // [xsp+0h] [xbp-70h] BYREF
  int32_t v57; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v58; // [xsp+8h] [xbp-68h] BYREF
  float rarePriWidth; // [xsp+Ch] [xbp-64h] BYREF
  float manaWidth[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4BD88F0 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11875/*"SERVANT_SELL_NUM_TEXT"*/);
    sub_1C21E38(&StringLiteral_11878/*"SERVANT_SELL_QP_TEXT"*/);
    sub_1C21E38(&StringLiteral_11880/*"SERVANT_SELL_RARE_TEXT2"*/);
    sub_1C21E38(&StringLiteral_11871/*"SERVANT_SELL_MANA_TEXT"*/);
    sub_1C21E38(&StringLiteral_11879/*"SERVANT_SELL_RARE_TEXT"*/);
    byte_4BD88F0 = 1;
  }
  *(_QWORD *)manaWidth = 0LL;
  rarePriWidth = 0.0;
  if ( (unsigned int)kind <= 4 )
  {
    QpLabel = this->fields.QpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11878/*"SERVANT_SELL_QP_TEXT"*/, 0LL);
    if ( !QpLabel )
      goto LABEL_28;
    UILabel__set_text(QpLabel, v12, 0LL);
    QpNumLabel = this->fields.QpNumLabel;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11875/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v58 = getQp;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v16, v17, v18);
    v12 = System_String__Format(v15, v19, 0LL);
    if ( !QpNumLabel )
      goto LABEL_28;
    UILabel__set_text(QpNumLabel, v12, 0LL);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.QP_NUM_LABEL_SIZE, 0, 0LL);
    ManaLabel = this->fields.ManaLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11871/*"SERVANT_SELL_MANA_TEXT"*/, 0LL);
    if ( !ManaLabel )
      goto LABEL_28;
    UILabel__set_text(ManaLabel, v12, 0LL);
    ManaNumLabel = this->fields.ManaNumLabel;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11875/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v57 = getMana;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v23, v24, v25);
    v12 = System_String__Format(v22, v26, 0LL);
    if ( !ManaNumLabel )
      goto LABEL_28;
    UILabel__set_text(ManaNumLabel, v12, 0LL);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0, 0LL);
    RareLabel = this->fields.RareLabel;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11879/*"SERVANT_SELL_RARE_TEXT"*/, 0LL);
    if ( !RareLabel )
      goto LABEL_28;
    UILabel__set_text(RareLabel, v12, 0LL);
    RareNumLabel = this->fields.RareNumLabel;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11875/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v56 = getRarePri;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v30, v31, v32);
    v12 = System_String__Format(v29, v33, 0LL);
    if ( !RareNumLabel )
      goto LABEL_28;
    UILabel__set_text(RareNumLabel, v12, 0LL);
    v12 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v12 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.PRI_NUM_LABEL_SIZE, 0, 0LL);
    RareLabel2 = this->fields.RareLabel2;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_SELL_RARE_TEXT2"*/, 0LL);
    if ( !RareLabel2 )
      goto LABEL_28;
    UILabel__set_text(RareLabel2, v12, 0LL);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(this, &manaWidth[1], manaWidth, &rarePriWidth, v35);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_28;
    v37 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, v37, 0LL);
    v12 = (System_String_o *)this->fields.QpLabel;
    if ( !v12 )
      goto LABEL_28;
    LODWORD(v39) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0LL);
    v12 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v12 )
      goto LABEL_28;
    v40 = v37 + v39;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    v42 = manaWidth[1];
    GameObjectExtensions__SetLocalPositionX(v41, (float)(v40 + -250.0) + (float)(manaWidth[1] * 0.5), 0LL);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_28;
    v43 = v40 + v42;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(v44, v43, 0LL);
    v12 = (System_String_o *)this->fields.ManaLabel;
    if ( !v12 )
      goto LABEL_28;
    LODWORD(v45) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0LL);
    v12 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v12 )
      goto LABEL_28;
    v46 = v43 + v45;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    v48 = manaWidth[0];
    GameObjectExtensions__SetLocalPositionX(v47, (float)(v46 + -250.0) + (float)(manaWidth[0] * 0.5), 0LL);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12 )
      goto LABEL_28;
    v49 = v46 + v48;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(v50, v49, 0LL);
    v12 = (System_String_o *)this->fields.RareLabel;
    if ( !v12
      || (LODWORD(v51) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v12, 0LL),
          (v12 = (System_String_o *)this->fields.RareNumLabel) == 0LL)
      || (v52 = v49 + v51,
          v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL),
          v54 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v53, (float)(v52 + -250.0) + (float)(rarePriWidth * 0.5), 0LL),
          (v12 = (System_String_o *)this->fields.RareLabel2) == 0LL) )
    {
LABEL_28:
      sub_1C22094(v12, v13);
    }
    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    GameObjectExtensions__SetLocalPositionX(v55, v52 + v54, 0LL);
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
    sub_1C22094(IsOnlyCloseButton, v5);
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
    sub_1C22094(0LL, v10);
  UILabel__set_text(warningLabel, WarningText, 0LL);
}


void __fastcall ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BD88E8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD88E8 = 1;
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
    sub_1C22094(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__TransitionToCombineScene(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD88F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD88F8 = 1;
  }
  this->fields.state = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


bool __fastcall ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v2 = this;
  if ( (byte_4BD88E6 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_4BD88E6 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1C22094(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void __fastcall ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8906 & 1) == 0 )
  {
    sub_1C21E38(&ServantSellConfirmMenu___c_TypeInfo);
    byte_4BD8906 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantSellConfirmMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantSellConfirmMenu___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantSellConfirmMenu___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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