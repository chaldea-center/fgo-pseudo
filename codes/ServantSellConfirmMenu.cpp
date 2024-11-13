void __fastcall ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_long__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B12654 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v7, v8);
    byte_4B12654 = 1;
  }
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_BD2FB0;
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  v9 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.lastSvtCommandCodeList,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16);
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
    sub_1BCA784(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1BCA784(p_onSellServantConfirm, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  ServantSellConfirmMenu_o *v3; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v5; // w9

  v3 = this;
  if ( (byte_4B12636 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, method, v2);
    byte_4B12636 = 1;
  }
  lastSvtCommandCodeList = v3->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1BCAA3C(this, method);
  v5 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v5;
}


void __fastcall ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_33398248(this, 0LL, v2);
}


void __fastcall ServantSellConfirmMenu__Close_33398248(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B12644 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndClose__, v10, v11);
    byte_4B12644 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0

  if ( (byte_4B1264C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1264C = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0LL, 0LL) )
  {
    v6 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    ListViewManager__DestroyList(v6, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4B12652 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantSellConfirmListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v5, v6);
    byte_4B12652 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v8 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ServantSellConfirmListViewItem__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0LL);
  if ( !servantSellConfirmListViewManager )
    sub_1BCAA3C(v9, v10);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantSellConfirmListViewManager__SetMode_33382208(servantSellConfirmListViewManager, 2, v17);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4B1264F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantSellConfirmListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v5, v6);
    byte_4B1264F = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v8 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ServantSellConfirmListViewItem__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    0LL);
  if ( !servantSellConfirmListViewManager )
    sub_1BCAA3C(v9, v10);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantSellConfirmListViewManager__SetMode_33382208(servantSellConfirmListViewManager, 2, v17);
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
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned int kind; // w8
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_object__o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B12643 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantSellConfirmListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v5, v6);
    byte_4B12643 = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v9 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ServantSellConfirmListViewItem__TypeInfo, method, v2, v3);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      0LL);
    if ( !servantSellConfirmListViewManager )
      sub_1BCAA3C(v10, v11);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v9;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (int64_t)v9,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    ServantSellConfirmListViewManager__SetMode_33382208(servantSellConfirmListViewManager, 2, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowCommandCode(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21

  if ( (byte_4B12651 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B12651 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowServant(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21

  if ( (byte_4B1264E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndCloseShowServant__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B1264E = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSellConfirmMenu__GetIsOnlyCloseButton(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned int v13; // w22
  System_String_o *decideButton; // x0
  __int64 v15; // x1
  UILabel_o *closeLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21

  if ( (byte_4B1263B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&StringLiteral_11782/*"SERVANT_SELL_CLOSE"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_11783/*"SERVANT_SELL_DECIDE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11781/*"SERVANT_SELL_CANCEL"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B1263B = 1;
  }
  v13 = kind - 4;
  if ( kind == 4 || v13 > 9 )
  {
    decideLabel = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11783/*"SERVANT_SELL_DECIDE"*/, 0LL);
    if ( decideLabel )
    {
      UILabel__set_text(decideLabel, decideButton, 0LL);
      cancelLabel = this->fields.cancelLabel;
      decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SERVANT_SELL_CANCEL"*/, 0LL);
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
            return kind != 4 && v13 < 0xA;
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(decideButton, *(_QWORD *)&kind);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_11782/*"SERVANT_SELL_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, decideButton, 0LL);
  decideButton = (System_String_o *)this->fields.warningLabel;
  if ( !decideButton )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)decideButton, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  return kind != 4 && v13 < 0xA;
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  void *v46; // x0
  __int64 v47; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t mana; // w23
  int32_t getMana; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v52; // x0
  __int64 *v53; // x8
  struct UserGameEntity_o *v54; // x9
  int32_t rarePri; // w23
  int32_t getRarePri; // w24
  System_String_o *v57; // x20
  Il2CppObject *v58; // x0
  System_String_o *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  bool v66; // w20
  struct UserGameEntity_o *v68; // x9
  int32_t qp; // w23
  int32_t QpMax; // w8
  struct UserGameEntity_o *v71; // x9
  int32_t v72; // w23
  int32_t getQP; // w24
  __int64 v74; // x1
  System_String_o *v75; // x23
  long double v76; // q0
  _QWORD *v77; // x24
  __int64 v78; // x8
  __int64 v79; // x0
  __int64 v80; // x0
  System_String_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct UserGameEntity_o *v88; // x8
  System_String_o *v89; // x21
  System_String_o *v90; // x0
  __int64 v91; // x1
  BalanceConfig_c *v92; // x8
  Il2CppObject *v93; // x23
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_String_o *v102; // x19
  Il2CppObject *v103; // x0
  __int64 v104; // x1
  System_String_o *v105; // x22
  long double inited; // q0
  _QWORD *v107; // x23
  __int64 v108; // x8
  __int64 v109; // x0
  __int64 v110; // x0
  System_String_o *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct UserGameEntity_o *v118; // x8
  System_String_o *v119; // x20
  System_String_o *NumberFormat; // x0
  __int64 v121; // x1
  BalanceConfig_c *v122; // x8
  Il2CppObject *v123; // x21
  Il2CppObject *v124; // x0

  v9 = (PartyOrganizationUtility_o *)message;
  if ( (byte_4B12648 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_object___, title, message);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_12252/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_12253/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12250/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8632/*"MANA_NAME"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_11086/*"RARE_PRI_NAME"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12254/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12255/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_12251/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    byte_4B12648 = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)title,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)message,
    (int32_t)getable,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v9->klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  sub_1BCA784(v9, (int64_t)StringLiteral_1/*""*/, v34, v35, v36, v37, v38, v39);
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)getable, (int64_t)StringLiteral_1/*""*/, v40, v41, v42, v43, v44, v45);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_57;
  mana = userGameEntity->fields.mana;
  getMana = this->fields.getMana;
  v46 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47);
    v46 = BalanceConfig_TypeInfo;
  }
  static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)v46 + 23);
  if ( getMana + mana <= static_fields->ManaMax )
  {
    v54 = this->fields.userGameEntity;
    if ( v54 )
    {
      rarePri = v54->fields.rarePri;
      getRarePri = this->fields.getRarePri;
      if ( !*((_DWORD *)v46 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v46, v47);
        v46 = BalanceConfig_TypeInfo;
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      if ( getRarePri + rarePri > static_fields->RarePriMax )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12250/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
        v53 = &StringLiteral_11086/*"RARE_PRI_NAME"*/;
        goto LABEL_17;
      }
      v68 = this->fields.userGameEntity;
      if ( v68 )
      {
        qp = v68->fields.qp;
        if ( !*((_DWORD *)v46 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v46, v47);
          v46 = BalanceConfig_TypeInfo;
          static_fields = BalanceConfig_TypeInfo->static_fields;
        }
        QpMax = static_fields->QpMax;
        if ( qp >= QpMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
          v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0LL);
          v107 = Method_System_Array_Empty_object___;
          v108 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
          if ( !v108 )
          {
            sub_1C1C718(Method_System_Array_Empty_object___, v104);
            v108 = v107[7];
          }
          v109 = *(_QWORD *)(v108 + 16);
          if ( (*(_BYTE *)(v109 + 309) & 1) == 0 )
            v109 = sub_1C1C6BC(inited);
          if ( !*(_DWORD *)(v109 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v109, v104);
          v110 = *(_QWORD *)(v107[7] + 16LL);
          if ( (*(_BYTE *)(v110 + 309) & 1) == 0 )
            v110 = sub_1C1C6BC(inited);
          v111 = System_String__Format_62415728(v105, **(System_Object_array ***)(v110 + 184), 0LL);
          *title = v111;
          sub_1BCA784((PartyOrganizationUtility_o *)title, (int64_t)v111, v112, v113, v114, v115, v116, v117);
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0LL);
          v118 = this->fields.userGameEntity;
          if ( v118 )
          {
            v119 = (System_String_o *)v46;
            NumberFormat = LocalizationManager__GetNumberFormat(v118->fields.qp, 0LL);
            v122 = BalanceConfig_TypeInfo;
            v123 = (Il2CppObject *)NumberFormat;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v121);
              v122 = BalanceConfig_TypeInfo;
            }
            v124 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v122->static_fields->QpMax, 0LL);
            v59 = System_String__Format_62415592(v119, v123, v124, 0LL);
            v66 = 1;
            goto LABEL_18;
          }
        }
        else
        {
          v71 = this->fields.userGameEntity;
          if ( v71 )
          {
            v72 = v71->fields.qp;
            getQP = this->fields.getQP;
            if ( !*((_DWORD *)v46 + 56) )
            {
              j_il2cpp_runtime_class_init_0(v46, v47);
              QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
            }
            if ( getQP + v72 <= QpMax )
              return 0;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
            v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12255/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0LL);
            v77 = Method_System_Array_Empty_object___;
            v78 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
            if ( !v78 )
            {
              sub_1C1C718(Method_System_Array_Empty_object___, v74);
              v78 = v77[7];
            }
            v79 = *(_QWORD *)(v78 + 16);
            if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
              v79 = sub_1C1C6BC(v76);
            if ( !*(_DWORD *)(v79 + 224) )
              v76 = j_il2cpp_runtime_class_init_0(v79, v74);
            v80 = *(_QWORD *)(v77[7] + 16LL);
            if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
              v80 = sub_1C1C6BC(v76);
            v81 = System_String__Format_62415728(v75, **(System_Object_array ***)(v80 + 184), 0LL);
            *title = v81;
            sub_1BCA784((PartyOrganizationUtility_o *)title, (int64_t)v81, v82, v83, v84, v85, v86, v87);
            v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12254/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
            v88 = this->fields.userGameEntity;
            if ( v88 )
            {
              v89 = (System_String_o *)v46;
              v90 = LocalizationManager__GetNumberFormat(v88->fields.qp, 0LL);
              v92 = BalanceConfig_TypeInfo;
              v93 = (Il2CppObject *)v90;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v91);
                v92 = BalanceConfig_TypeInfo;
              }
              v94 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v92->static_fields->QpMax, 0LL);
              v95 = System_String__Format_62415592(v89, v93, v94, 0LL);
              v9->klass = (PartyOrganizationUtility_c *)v95;
              sub_1BCA784(v9, (int64_t)v95, v96, v97, v98, v99, v100, v101);
              v102 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0LL);
              v103 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0LL);
              v59 = System_String__Format(v102, v103, 0LL);
              v66 = 1;
              v9 = (PartyOrganizationUtility_o *)getable;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_57:
    sub_1BCAA3C(v46, v47);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12250/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
  v53 = &StringLiteral_8632/*"MANA_NAME"*/;
LABEL_17:
  v57 = v52;
  v58 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v53, 0LL);
  v59 = System_String__Format(v57, v58, 0LL);
  v66 = 0;
LABEL_18:
  v9->klass = (PartyOrganizationUtility_c *)v59;
  sub_1BCA784(v9, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v66;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 *v31; // x8
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned int max_length; // w9

  v6 = this;
  if ( (byte_4B12641 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&kind, isBoth);
    sub_1BCA7E0(&StringLiteral_11734/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11704/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11733/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11792/*"SERVANT_SELL_MESSAGE_ERROR"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11794/*"SERVANT_SELL_MESSAGE_START"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11793/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11732/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11703/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11674/*"SERVANT_ALL_SELL_MESSAGE_END"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11702/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/, v27, v28);
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_11675/*"SERVANT_ALL_SELL_MESSAGE_START"*/, v29, v30);
    byte_4B12641 = 1;
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v31 = &StringLiteral_11675/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v31, 0LL);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_1BCAA3C(this, *(_QWORD *)&kind);
      max_length = servantTypeFlags->max_length;
      if ( !max_length )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[4] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v31 = &StringLiteral_11794/*"SERVANT_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v31, 0LL);
      }
      if ( max_length <= 1 )
        goto LABEL_47;
      if ( servantTypeFlags->m_Items[5] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v31 = &StringLiteral_11734/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v31, 0LL);
      }
      if ( max_length <= 2 )
LABEL_47:
        sub_1BCAA44(this, *(_QWORD *)&kind);
      if ( servantTypeFlags->m_Items[6] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v31 = &StringLiteral_11702/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
        return LocalizationManager__Get((System_String_o *)*v31, 0LL);
      }
      return (System_String_o *)StringLiteral_1/*""*/;
    case 5:
    case 6:
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v31 = &StringLiteral_11674/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v31, 0LL);
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v31 = &StringLiteral_11792/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v31, 0LL);
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v31 = &StringLiteral_11732/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v31, 0LL);
    case 10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v31 = &StringLiteral_11703/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v31, 0LL);
    case 11:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v31 = &StringLiteral_11793/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v31, 0LL);
    case 12:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v31 = &StringLiteral_11733/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v31, 0LL);
    case 13:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v31 = &StringLiteral_11704/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v31, 0LL);
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
    sub_1BCAA3C(QpNumLabel, qpWidth);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 *v30; // x8
  struct System_Boolean_array *v31; // x8
  System_String_o *v32; // x19
  System_String_o *v33; // x2
  unsigned int v34; // w8
  struct System_Boolean_array *isRareFlags; // x8
  unsigned int max_length; // w9

  v9 = kind;
  v10 = this;
  if ( (byte_4B12642 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&kind, isMaterial);
    sub_1BCA7E0(&StringLiteral_11705/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_88/*"\r\n"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11801/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11676/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11662/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11784/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11735/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_11765/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/, v27, v28);
    byte_4B12642 = 1;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v30 = &StringLiteral_11662/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v30, 0LL);
    }
    *(_QWORD *)&kind = v10->fields.isRareFlags;
    if ( isMaterial )
    {
      if ( !*(_QWORD *)&kind )
        goto LABEL_56;
      v34 = *(_DWORD *)(*(_QWORD *)&kind + 24LL);
      if ( !v34 )
        goto LABEL_55;
      if ( !*(_BYTE *)(*(_QWORD *)&kind + 32LL) )
      {
        if ( v34 <= 1 )
          goto LABEL_55;
        if ( !*(_BYTE *)(*(_QWORD *)&kind + 33LL) )
        {
          if ( v34 <= 2 )
            goto LABEL_55;
          if ( !*(_BYTE *)(*(_QWORD *)&kind + 34LL) )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
            v30 = &StringLiteral_11765/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
            return LocalizationManager__Get((System_String_o *)*v30, 0LL);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v30 = &StringLiteral_11676/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
      return LocalizationManager__Get((System_String_o *)*v30, 0LL);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
        v30 = &StringLiteral_11801/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
        return LocalizationManager__Get((System_String_o *)*v30, 0LL);
      }
      if ( max_length > 1 )
      {
        if ( isRareFlags->m_Items[5] )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
          v30 = &StringLiteral_11735/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v30, 0LL);
        }
        if ( max_length > 2 )
        {
          if ( !isRareFlags->m_Items[6] )
            return (System_String_o *)StringLiteral_1/*""*/;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
          v30 = &StringLiteral_11705/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v30, 0LL);
        }
      }
    }
LABEL_55:
    sub_1BCAA44(this, *(_QWORD *)&kind);
  }
  if ( isMaterial )
    goto LABEL_17;
  v31 = v10->fields.isRareFlags;
  if ( !v31 )
LABEL_56:
    sub_1BCAA3C(this, *(_QWORD *)&kind);
  if ( v31->max_length <= 2 )
    goto LABEL_55;
  if ( !v31->m_Items[6] && !v31->m_Items[5] && !v31->m_Items[4] )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    v30 = &StringLiteral_11784/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v30, 0LL);
  }
LABEL_17:
  v10->fields.isTwoLinesWarning = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11784/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0LL);
  return System_String__Concat_62412480(v32, (System_String_o *)StringLiteral_88/*"\r\n"*/, v33, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(0LL, selectedId);
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void __fastcall ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSellConfirmMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v7; // w9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B1264A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, method, v2);
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnClickCancel__, v4, v5);
    byte_4B1264A = 1;
  }
  if ( v3->fields.state == 2 )
  {
    if ( v3->fields.kind == 4 )
    {
      lastSvtCommandCodeList = v3->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_1BCAA3C(this, method);
      v7 = lastSvtCommandCodeList->fields._version + 1;
      lastSvtCommandCodeList->fields._size = 0;
      lastSvtCommandCodeList->fields._version = v7;
    }
    v3->fields.state = 3;
    v8 = Method_ServantSellConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantSellConfirmMenu_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(v3, 0, v10);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1264B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnClickClose__, method, v2);
    byte_4B1264B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSellConfirmMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v6);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  bool IsQpMaxAlert; // w20
  const MethodInfo *v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x4
  Il2CppObject *Instance; // x0
  System_String_o *v19; // x20
  CommonUI_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *getable; // [xsp+38h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+40h] [xbp-40h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B12645 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v5, v6);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnClickDecide__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12645 = 1;
  }
  if ( this->fields.state == 2 )
  {
    message = (System_String_o *)StringLiteral_1/*""*/;
    title = (System_String_o *)StringLiteral_1/*""*/;
    getable = (System_String_o *)StringLiteral_1/*""*/;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v3);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1/*""*/, 0LL) || this->fields.isMaxQpChecked )
    {
      ServantSellConfirmMenu__SellServantDecide(this, v14);
    }
    else
    {
      v15 = Method_ServantSellConfirmMenu_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_ServantSellConfirmMenu_OnClickDecide__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      if ( IsQpMaxAlert )
      {
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v17);
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v19 = message;
        v20 = (CommonUI_o *)Instance;
        v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
        if ( !v20 )
          sub_1BCAA3C(v25, v26);
        CommonUI__OpenNotificationDialog(
          v20,
          (System_String_o *)StringLiteral_1/*""*/,
          v19,
          v24,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4B12653 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15817/*"Window/Objects/CancelButton"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_15818/*"Window/Objects/CloseButton"*/, v4, v5);
    byte_4B12653 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15817/*"Window/Objects/CancelButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(v7, (System_String_o *)StringLiteral_15818/*"Window/Objects/CloseButton"*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__OnSelectCommandCodeDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  ServantStatusDialog_EndDelegate_o *v21; // x22

  if ( (byte_4B12650 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem, method);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndShowCommandCode__, v5, v6);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B12650 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v11 = Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_ServantSellConfirmMenu_OnSelectCommandCodeDetail__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v14),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v17 = (CommonUI_o *)Instance,
          v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20),
          ServantStatusDialog_EndDelegate___ctor(
            v21,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0LL),
          !v17) )
    {
      sub_1BCAA3C(v13, v14);
    }
    CommonUI__OpenServantStatusDialog_30778960(v17, 32, UserCommandCodeEntity_k__BackingField, v21, 0LL, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__OnSelectServantDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantStatusDialog_EndDelegate_o *v20; // x22
  const MethodInfo *v21; // x2

  v4 = this;
  if ( (byte_4B1264D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, selectItem, method);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndShowServant__, v5, v6);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v7, v8);
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B1264D = 1;
  }
  if ( v4->fields.state == 2 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v11 = Method_ServantSellConfirmMenu_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnSelectServantDetail__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BCA7F8(Method_ServantSellConfirmMenu_OnSelectServantDetail__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v13);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v16 = (CommonUI_o *)Instance;
      v20 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v17, v18, v19);
      ServantStatusDialog_EndDelegate___ctor(
        v20,
        (Il2CppObject *)v4,
        Method_ServantSellConfirmMenu_EndShowServant__,
        0LL);
      if ( v16 )
      {
        CommonUI__OpenServantStatusDialog_30775636(v16, 29, servantStatusId, v20, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(v4, selectItem, v21);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
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
  __int64 v49; // x2
  __int64 v50; // x3
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v52; // w9
  System_Action_o *v53; // x20
  bool isNoWarning; // [xsp+8h] [xbp-48h] BYREF
  bool isEquipedCommandCode; // [xsp+Ch] [xbp-44h] BYREF
  bool isExceeded; // [xsp+18h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B12638 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, servantIdList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndOpen__, v15, v16);
    sub_1BCA7E0(&StringLiteral_11802/*"SERVANT_SELL_TITLE"*/, v17, v18);
    byte_4B12638 = 1;
  }
  isMaterial = 0;
  isExceeded = 0;
  isEquipedCommandCode = 0;
  isNoWarning = 0;
  ServantSellConfirmMenu__TextClear(this, *(const MethodInfo **)&kind);
  if ( !this->fields.state )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v20);
      byte_4B109C1 = 1;
    }
    this->fields.kind = kind;
    this->fields.onSellServantConfirm = onSellServantConfirm;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onSellServantConfirm,
      (int64_t)onSellServantConfirm,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
        (int64_t)SelfUserGame,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11802/*"SERVANT_SELL_TITLE"*/, 0LL);
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
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v37);
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
                v47 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                GameObjectExtensions__SetLocalPositionY(v47, 90.0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
                if ( gameObject )
                {
                  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v48, 140.0, 0LL);
                  if ( v42 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_21;
                  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
                  if ( lastSvtCommandCodeList )
                  {
                    v52 = lastSvtCommandCodeList->fields._version + 1;
                    lastSvtCommandCodeList->fields._size = 0;
                    lastSvtCommandCodeList->fields._version = v52;
LABEL_21:
                    this->fields.state = 1;
                    v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v49, v50);
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
    sub_1BCAA3C(gameObject, v27);
  }
}


void __fastcall ServantSellConfirmMenu__OpenCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *lastSvtCommandCodeList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  struct System_Collections_Generic_List_long__o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x4
  __int64 v38; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x20

  if ( (byte_4B1263A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_long___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_long___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_3767/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11782/*"SERVANT_SELL_CLOSE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3768/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v19, v20);
    byte_4B1263A = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_28;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v23 = System_Linq_Enumerable__Distinct_long_(
            lastSvtCommandCodeList,
            (const MethodInfo_2F300D0 *)Method_System_Linq_Enumerable_Distinct_long___);
    v24 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                              v23,
                                                              (const MethodInfo_2F4F5F0 *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v24;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.lastSvtCommandCodeList,
      (int64_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    this->fields.onSellServantConfirm = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onSellServantConfirm,
      (int64_t)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
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
              v37);
            lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.listViewBg;
            if ( lastSvtCommandCodeList )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
              titleLabel = this->fields.titleLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
              lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                              (System_String_o *)StringLiteral_3768/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0LL);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3767/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
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
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_11782/*"SERVANT_SELL_CLOSE"*/, 0LL);
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
                                        v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
                                        System_Action___ctor(
                                          v46,
                                          (Il2CppObject *)this,
                                          Method_ServantSellConfirmMenu_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
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
    sub_1BCAA3C(lastSvtCommandCodeList, v21);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x23
  System_String_o *v23; // x24
  System_String_o *v24; // x0
  ServantSellMaxAlertDialog_o *servantSellMaxAlertDialog; // x26
  System_String_o *v26; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x27
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_o *onTransition; // x28
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x29
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // [xsp+18h] [xbp-78h]

  if ( (byte_4B12646 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v10, v11);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_SellServantDecide__, v12, v13);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_TransitionToCombineScene__, v14, v15);
    sub_1BCA7E0(&StringLiteral_11797/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_11796/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11803/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v20, v21);
    byte_4B12646 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, title);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v26 = v24;
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(v30, (Il2CppObject *)this, (intptr_t)Method_ServantSellConfirmMenu_SellServantDecide__, 0LL);
  onTransition = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_TransitionToCombineScene__,
    0LL);
  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
  if ( !servantSellMaxAlertDialog )
    sub_1BCAA3C(v39, v40);
  ServantSellMaxAlertDialog__Open(
    servantSellMaxAlertDialog,
    title,
    message,
    getable,
    v22,
    v23,
    v26,
    v30,
    onTransition,
    v38,
    0,
    v41);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int64_t gameObject; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v52; // w9
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  UILabel_o *titleLabel; // x21
  const MethodInfo *v62; // x5
  const MethodInfo *v63; // x4
  __int64 v64; // x8
  unsigned __int64 v65; // x25
  int64_t v66; // x21
  int32_t SvtId; // w21
  __int64 v68; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_List_long__o *v72; // x21
  System_Predicate_long__o *v73; // x22
  Il2CppObject *v74; // x23
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x2
  UILabel_o *decideLabel; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Action_o *v93; // x20
  bool isEquipedCommandCode; // [xsp+4h] [xbp-6Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-68h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B12639 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, servantIdList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__AddRange__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__RemoveAll__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Predicate_long__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_EndOpen__, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__, v31, v32);
    sub_1BCA7E0(&ServantSellConfirmMenu___c_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_11664/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_11663/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_11802/*"SERVANT_SELL_TITLE"*/, v41, v42);
    byte_4B12639 = 1;
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
    v52 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v52;
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onSellServantConfirm,
      (int64_t)callback,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    *(_QWORD *)&this->fields.getQP = 0LL;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
      (int64_t)SelfUserGame,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11802/*"SERVANT_SELL_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_46;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v62);
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
      v63);
    gameObject = (int64_t)this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_46;
    v64 = *(_QWORD *)&servantIdList->max_length;
    if ( (int)v64 >= 1 )
    {
      v65 = 0LL;
      while ( 1 )
      {
        if ( v65 >= (unsigned int)v64 )
          sub_1BCAA44(gameObject, v44);
        v66 = servantIdList->m_Items[v65];
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        gameObject = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !gameObject )
          break;
        gameObject = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                v66,
                                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !gameObject )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)gameObject, 0LL);
        gameObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v68);
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
          v44 = (System_Collections_Generic_IEnumerable_T__o *)gameObject;
          gameObject = (int64_t)this->fields.lastSvtCommandCodeList;
          if ( !gameObject )
            break;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)gameObject,
            v44,
            (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
          gameObject = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          v72 = this->fields.lastSvtCommandCodeList;
          if ( !ServantSellConfirmMenu___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantSellConfirmMenu___c_TypeInfo, v44);
            gameObject = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          }
          v73 = *(System_Predicate_long__o **)(*(_QWORD *)(gameObject + 184) + 8LL);
          if ( !v73 )
          {
            if ( !*(_DWORD *)(gameObject + 224) )
            {
              j_il2cpp_runtime_class_init_0(gameObject, v44);
              gameObject = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
            }
            v74 = **(Il2CppObject ***)(gameObject + 184);
            v73 = (System_Predicate_long__o *)sub_1BCAA2C(System_Predicate_long__TypeInfo, v44, v70, v71);
            System_Predicate_long____ctor(
              v73,
              v74,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              0LL);
            static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            static_fields->__9__62_0 = v73;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
              (int64_t)v73,
              v76,
              v77,
              v78,
              v79,
              v80,
              v81);
          }
          if ( !v72 )
            break;
          gameObject = System_Collections_Generic_List_long___RemoveAll(
                         v72,
                         (System_Predicate_T__o *)v73,
                         (const MethodInfo_358B2B8 *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(v64) = servantIdList->max_length;
        if ( (__int64)++v65 >= (int)v64 )
          goto LABEL_36;
      }
LABEL_46:
      sub_1BCAA3C(gameObject, v44);
    }
LABEL_36:
    upperLabel = this->fields.upperLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11663/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_46;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11664/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
    if ( !lowerLabel )
      goto LABEL_46;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (int64_t)this->fields.lowerLabel;
    if ( !gameObject )
      goto LABEL_46;
    v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v84, -140.0, 0LL);
    gameObject = (int64_t)this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_46;
    v85 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v85, 44.0, 0LL);
    gameObject = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !gameObject )
      goto LABEL_46;
    v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v86, 94.0, 0LL);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v87);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v88);
    decideLabel = this->fields.decideLabel;
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_46;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v93 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v90, v91, v92);
    System_Action___ctor(v93, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v93, 0, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  int32_t v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B12649 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSellConfirmMenu_SellServantDecide__, method, v2);
    byte_4B12649 = 1;
  }
  this->fields.isMaxQpChecked = 1;
  this->fields.state = 3;
  v4 = Method_ServantSellConfirmMenu_SellServantDecide__;
  if ( this->fields.kind > 3u )
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSellConfirmMenu_SellServantDecide__);
    v5 = 0;
  }
  else
  {
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_SellServantDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSellConfirmMenu_SellServantDecide__);
    v5 = 8;
  }
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0LL);
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 1, v7);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  UILabel_o *info1Label; // x21
  UILabel_o *info3Label; // x21
  ServantSellConfirmMenu_o *v26; // x0
  const MethodInfo *v27; // x2
  ServantSellConfirmMenu_o *v28; // x0
  const MethodInfo *v29; // x2
  ServantSellConfirmMenu_o *v30; // x0
  const MethodInfo *v31; // x2
  float v32; // s0
  ServantSellConfirmMenu_o *v33; // x0
  const MethodInfo *v34; // x2
  int v35; // w8
  UILabel_o **p_info3Label; // x22
  ServantSellConfirmMenu_o *v37; // x0
  const MethodInfo *v38; // x2
  ServantSellConfirmMenu_o *v39; // x0
  const MethodInfo *v40; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w25
  BalanceConfig_c *v43; // x0
  int32_t QpMax; // w26
  UILabel_o *v45; // x20
  System_String_o **v46; // x8
  struct UserGameEntity_o *v47; // x8
  ServantSellConfirmMenu_o *v48; // x21
  Il2CppObject *NumberFormat; // x0
  __int64 v50; // x1
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v52; // x8
  ServantSellConfirmMenu_o *v53; // x21
  Il2CppObject *v54; // x0
  UILabel_o *v55; // x20
  struct UserGameEntity_o *v56; // x8
  ServantSellConfirmMenu_o *v57; // x21
  Il2CppObject *v58; // x0
  __int64 v59; // x8
  float v60; // s8
  ServantSellConfirmMenu_o *v61; // x0
  const MethodInfo *v62; // x2
  ServantSellConfirmMenu_o *v63; // x0
  const MethodInfo *v64; // x2
  ServantSellConfirmMenu_o *v65; // x0
  const MethodInfo *v66; // x2
  struct UserGameEntity_o *v67; // x8
  BalanceConfig_c *v68; // x0
  int32_t v69; // w21
  UILabel_o *v70; // x20
  int32_t v71; // w23
  struct UserGameEntity_o *v72; // x8
  ServantSellConfirmMenu_o *v73; // x19
  Il2CppObject *v74; // x0
  float v75; // s0
  struct UserGameEntity_o *v76; // x8
  ServantSellConfirmMenu_o *v77; // x21
  Il2CppObject *v78; // x0

  v6 = this;
  if ( (byte_4B1263E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, isNoWarning);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_11790/*"SERVANT_SELL_INFO7"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11785/*"SERVANT_SELL_INFO2_ALERT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11789/*"SERVANT_SELL_INFO6"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11787/*"SERVANT_SELL_INFO3"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11786/*"SERVANT_SELL_INFO2_NORMAL"*/, v19, v20);
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&StringLiteral_11788/*"SERVANT_SELL_INFO5"*/, v21, v22);
    byte_4B1263E = 1;
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
      ServantSellConfirmMenu__SetLabelLocalPositionY(v37, v6->fields.info1Label, -50.0, v38);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v39, v6->fields.info2Label, -78.0, v40);
      v35 = -1026293760;
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
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
              this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_SELL_INFO6"*/, 0LL);
              if ( info1Label )
              {
                UILabel__set_text(info1Label, (System_String_o *)this, 0LL);
                this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  info3Label = v6->fields.info3Label;
                  this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11790/*"SERVANT_SELL_INFO7"*/,
                                                       0LL);
                  if ( info3Label )
                  {
                    UILabel__set_text(info3Label, (System_String_o *)this, 0LL);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v26, v6->fields.info1Label, -92.0, v27);
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v28, v6->fields.info2Label, -115.0, v29);
                    v32 = -162.0;
                    if ( isNoWarning )
                      v32 = -139.0;
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v30, v6->fields.info3Label, v32, v31);
                    if ( v6->fields.isTwoLinesWarning )
                    {
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v33, v6->fields.info3Label, -176.0, v34);
                      v35 = -1022164992;
                    }
                    else
                    {
                      v35 = -1022689280;
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
        sub_1BCAA3C(this, *(_QWORD *)&kind);
      }
      userGameEntity = v6->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_62;
      qp = userGameEntity->fields.qp;
      v43 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
        v43 = BalanceConfig_TypeInfo;
      }
      QpMax = v43->static_fields->QpMax;
      p_info3Label = &v6->fields.info1Label;
      v45 = v6->fields.info1Label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v46 = (System_String_o **)(qp >= QpMax ? &StringLiteral_11785/*"SERVANT_SELL_INFO2_ALERT"*/ : &StringLiteral_11786/*"SERVANT_SELL_INFO2_NORMAL"*/);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(*v46, 0LL);
      v47 = v6->fields.userGameEntity;
      if ( !v47 )
        goto LABEL_62;
      v48 = this;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v47->fields.qp, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v48, NumberFormat, 0LL);
      if ( !v45 )
        goto LABEL_62;
      UILabel__set_text(v45, (System_String_o *)this, 0LL);
      info2Label = v6->fields.info2Label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11787/*"SERVANT_SELL_INFO3"*/, 0LL);
      v52 = v6->fields.userGameEntity;
      if ( !v52 )
        goto LABEL_62;
      v53 = this;
      v54 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v52->fields.mana, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v53, v54, 0LL);
      if ( !info2Label )
        goto LABEL_62;
      UILabel__set_text(info2Label, (System_String_o *)this, 0LL);
      v55 = v6->fields.info3Label;
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11788/*"SERVANT_SELL_INFO5"*/, 0LL);
      v56 = v6->fields.userGameEntity;
      if ( !v56 )
        goto LABEL_62;
      v57 = this;
      v58 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v56->fields.rarePri, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v57, v58, 0LL);
      if ( !v55 )
        goto LABEL_62;
      UILabel__set_text(v55, (System_String_o *)this, 0LL);
      this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
      if ( !this )
        goto LABEL_62;
      v59 = 100LL;
      if ( qp < QpMax )
        v59 = 104LL;
      v60 = qp >= QpMax ? 49.0 : 10.0;
      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v59), 0LL);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v61, v6->fields.info1Label, v60, v62);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v63, v6->fields.info2Label, -50.0, v64);
      ServantSellConfirmMenu__SetLabelLocalPositionY(v65, v6->fields.info3Label, -110.0, v66);
      v67 = v6->fields.userGameEntity;
      if ( !v67 )
        goto LABEL_62;
      v68 = BalanceConfig_TypeInfo;
      v69 = v67->fields.qp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
        v68 = BalanceConfig_TypeInfo;
      }
      v70 = *p_info3Label;
      v71 = v68->static_fields->QpMax;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      if ( v69 < v71 )
      {
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11786/*"SERVANT_SELL_INFO2_NORMAL"*/, 0LL);
        v72 = v6->fields.userGameEntity;
        if ( v72 )
        {
          v73 = this;
          v74 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v72->fields.qp, 0LL);
          this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v73, v74, 0LL);
          if ( v70 )
          {
            UILabel__set_text(v70, (System_String_o *)this, 0LL);
            v75 = 10.0;
LABEL_60:
            ServantSellConfirmMenu__SetLabelLocalPositionY(v33, *p_info3Label, v75, v34);
            return;
          }
        }
        goto LABEL_62;
      }
      this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11785/*"SERVANT_SELL_INFO2_ALERT"*/, 0LL);
      v76 = v6->fields.userGameEntity;
      if ( !v76 )
        goto LABEL_62;
      v77 = this;
      v78 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v76->fields.qp, 0LL);
      this = (ServantSellConfirmMenu_o *)System_String__Format((System_String_o *)v77, v78, 0LL);
      if ( !v70 )
        goto LABEL_62;
      UILabel__set_text(v70, (System_String_o *)this, 0LL);
      this = (ServantSellConfirmMenu_o *)*p_info3Label;
      if ( !*p_info3Label )
        goto LABEL_62;
      UILabel__set_fontSize((UILabel_o *)this, v6->fields.ALERT_MESSAGE_LABEL_FONT_SIZE, 0LL);
      v35 = 1111752704;
    }
LABEL_59:
    v75 = *(float *)&v35;
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
    sub_1BCAA3C(this, label);
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
      sub_1BCAA3C(servantSellConfirmListViewManager, *(_QWORD *)&kind);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned __int64 v10; // x22
  int64_t v11; // x21
  int32_t getQP; // w28
  UserCommandCodeEntity_o *v13; // x21
  int32_t SellQp; // w0
  int32_t getMana; // w29
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8

  v4 = this;
  if ( (byte_4B1263D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, commandCodeIds, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5, v6);
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1263D = 1;
  }
  if ( v4->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_1BCAA3C(this, commandCodeIds);
    servantTypeFlags = *(struct System_Boolean_array **)&commandCodeIds->max_length;
    if ( (int)servantTypeFlags >= 1 )
    {
      v10 = 0LL;
      while ( v10 < (unsigned int)servantTypeFlags )
      {
        v11 = commandCodeIds->m_Items[v10];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v11,
                                             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_19;
        getQP = v4->fields.getQP;
        v13 = (UserCommandCodeEntity_o *)this;
        SellQp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0LL);
        getMana = v4->fields.getMana;
        v4->fields.getQP = SellQp + getQP;
        SellMana = UserCommandCodeEntity__GetSellMana(v13, 0LL);
        getRarePri = v4->fields.getRarePri;
        v4->fields.getMana = SellMana + getMana;
        v4->fields.getRarePri = UserCommandCodeEntity__GetSellRarePri(v13, 0LL) + getRarePri;
        this = (ServantSellConfirmMenu_o *)UserCommandCodeEntity__GetRarity(v13, 0LL);
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
        if ( (__int64)++v10 >= (int)servantTypeFlags )
          return;
      }
      sub_1BCAA44(this, commandCodeIds);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo_37DEB14 **v24; // x21
  struct System_Boolean_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Boolean_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x26
  __int64 v42; // x8
  unsigned __int64 v43; // x25
  Il2CppObject *v44; // x29
  const MethodInfo_37DEB14 **v45; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x28
  Il2CppClass *klass; // x19
  void *monitor; // x21
  Il2CppObject *v49; // x0
  int32_t getQP; // w19
  Il2CppObject *v51; // x28
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v58; // w29
  struct System_Boolean_array *v59; // x8
  unsigned int max_length; // w9
  struct System_Boolean_array *v61; // x8
  int64_t UserId; // x0
  __int64 v63; // x1
  void *v64; // x19
  Il2CppClass *v65; // x20
  int64_t v66; // x21
  bool v67; // w8
  struct System_Boolean_array *v68; // x8
  struct System_Boolean_array **p_isRareFlags; // [xsp+8h] [xbp-98h]
  UserServantCommandCodeMaster_o *v73; // [xsp+28h] [xbp-78h]
  struct System_Boolean_array **p_servantTypeFlags; // [xsp+30h] [xbp-70h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4B1263C & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, servantIds, isMaterial);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B1263C = 1;
  }
  entity = 0LL;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v24 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v25 = (struct System_Boolean_array *)sub_1BCA888(bool___TypeInfo, 3LL);
    this->fields.servantTypeFlags = v25;
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.servantTypeFlags,
      (int64_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v32 = (struct System_Boolean_array *)sub_1BCA888(bool___TypeInfo, 3LL);
    this->fields.isRareFlags = v32;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.isRareFlags, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v73 = (UserServantCommandCodeMaster_o *)Instance,
          !servantIds) )
    {
LABEL_49:
      sub_1BCAA3C(Instance, v40);
    }
    v42 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v42 >= 1 )
    {
      v43 = 0LL;
      while ( v43 < (unsigned int)v42 )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v44 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                servantIds->m_Items[v43],
                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        v45 = v24;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(*v24);
        if ( !Instance )
          goto LABEL_49;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v44 )
          goto LABEL_49;
        v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        klass = v44[5].klass;
        monitor = v44[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
        *(_QWORD *)&v76.fields.currentCryptoKey = klass;
        *(_QWORD *)&v76.fields.fakeValue = monitor;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76, 0LL);
        if ( !v46 )
          goto LABEL_49;
        v49 = DataMasterBase_object__object__int___GetEntity(
                v46,
                (int32_t)Instance,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v51 = v49;
        SellQp = UserServantEntity__getSellQp((UserServantEntity_o *)v44, 0LL);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana((UserServantEntity_o *)v44, 0LL);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri((UserServantEntity_o *)v44, 0LL);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded((UserServantEntity_o *)v44, 0LL) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity((UserServantEntity_o *)v44, 0LL);
        if ( !v51 )
          goto LABEL_49;
        v58 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v51, 0LL);
        v59 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_49;
        max_length = v59->max_length;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( max_length <= 1 )
            break;
          v59->m_Items[5] = 1;
          if ( v58 >= 4 )
          {
            v61 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_49;
            if ( v61->max_length <= 1 )
              break;
            v61->m_Items[5] = 1;
          }
        }
        else
        {
          if ( !max_length )
            break;
          v59->m_Items[4] = 1;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
          UserId = NetworkManager__get_UserId(0LL);
          v65 = v51[1].klass;
          v64 = v51[1].monitor;
          v66 = UserId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
          *(_QWORD *)&v77.fields.currentCryptoKey = v65;
          *(_QWORD *)&v77.fields.fakeValue = v64;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v77, 0LL);
          if ( !v73 )
            goto LABEL_49;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(v73, &entity, v66, (int)Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_49;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v67 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_49;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
              v67 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v67;
          }
          if ( v58 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v51, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v51, 0LL),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v68 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_49;
              if ( !v68->max_length )
                break;
              v68->m_Items[4] = 1;
            }
          }
        }
        LODWORD(v42) = servantIds->max_length;
        ++v43;
        v24 = v45;
        if ( (__int64)v43 >= (int)v42 )
          return;
      }
      sub_1BCAA44(Instance, v40);
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
  if ( (byte_4B12640 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, method);
    byte_4B12640 = 1;
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
        sub_1BCAA3C(MessageText, v9);
      }
      userGameEntity = v4->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_23;
      qp = userGameEntity->fields.qp;
      v16 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *QpLabel; // x23
  System_String_o *v24; // x0
  __int64 v25; // x1
  UILabel_o *QpNumLabel; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x0
  UILabel_o *ManaLabel; // x22
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  UILabel_o *RareLabel; // x21
  UILabel_o *RareNumLabel; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  UILabel_o *RareLabel2; // x20
  const MethodInfo *v38; // x4
  float NumLabelWidth; // s0
  float v40; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v42; // s0
  float v43; // s8
  UnityEngine_GameObject_o *v44; // x0
  float v45; // s9
  float v46; // s8
  UnityEngine_GameObject_o *v47; // x0
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
  UnityEngine_GameObject_o *v58; // x0
  int32_t v59; // [xsp+0h] [xbp-70h] BYREF
  int32_t v60; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v61; // [xsp+8h] [xbp-68h] BYREF
  float rarePriWidth; // [xsp+Ch] [xbp-64h] BYREF
  float manaWidth[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B1263F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&getQp);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_11795/*"SERVANT_SELL_NUM_TEXT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11798/*"SERVANT_SELL_QP_TEXT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11800/*"SERVANT_SELL_RARE_TEXT2"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11791/*"SERVANT_SELL_MANA_TEXT"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11799/*"SERVANT_SELL_RARE_TEXT"*/, v21, v22);
    byte_4B1263F = 1;
  }
  *(_QWORD *)manaWidth = 0LL;
  rarePriWidth = 0.0;
  if ( (unsigned int)kind <= 4 )
  {
    QpLabel = this->fields.QpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11798/*"SERVANT_SELL_QP_TEXT"*/, 0LL);
    if ( !QpLabel )
      goto LABEL_28;
    UILabel__set_text(QpLabel, v24, 0LL);
    QpNumLabel = this->fields.QpNumLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v61 = getQp;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
    v24 = System_String__Format(v27, v28, 0LL);
    if ( !QpNumLabel )
      goto LABEL_28;
    UILabel__set_text(QpNumLabel, v24, 0LL);
    v24 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v24 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v24, this->fields.QP_NUM_LABEL_SIZE, 0LL);
    ManaLabel = this->fields.ManaLabel;
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11791/*"SERVANT_SELL_MANA_TEXT"*/, 0LL);
    if ( !ManaLabel )
      goto LABEL_28;
    UILabel__set_text(ManaLabel, v24, 0LL);
    ManaNumLabel = this->fields.ManaNumLabel;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v60 = getMana;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v24 = System_String__Format(v31, v32, 0LL);
    if ( !ManaNumLabel )
      goto LABEL_28;
    UILabel__set_text(ManaNumLabel, v24, 0LL);
    v24 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v24 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v24, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel = this->fields.RareLabel;
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11799/*"SERVANT_SELL_RARE_TEXT"*/, 0LL);
    if ( !RareLabel )
      goto LABEL_28;
    UILabel__set_text(RareLabel, v24, 0LL);
    RareNumLabel = this->fields.RareNumLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11795/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v59 = getRarePri;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
    v24 = System_String__Format(v35, v36, 0LL);
    if ( !RareNumLabel )
      goto LABEL_28;
    UILabel__set_text(RareNumLabel, v24, 0LL);
    v24 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v24 )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)v24, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel2 = this->fields.RareLabel2;
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_SELL_RARE_TEXT2"*/, 0LL);
    if ( !RareLabel2 )
      goto LABEL_28;
    UILabel__set_text(RareLabel2, v24, 0LL);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(this, &manaWidth[1], manaWidth, &rarePriWidth, v38);
    v24 = (System_String_o *)this->fields.QpLabel;
    if ( !v24 )
      goto LABEL_28;
    v40 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, v40, 0LL);
    v24 = (System_String_o *)this->fields.QpLabel;
    if ( !v24 )
      goto LABEL_28;
    LODWORD(v42) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v24, 0LL);
    v24 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v24 )
      goto LABEL_28;
    v43 = v40 + v42;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
    v45 = manaWidth[1];
    GameObjectExtensions__SetLocalPositionX(v44, (float)(v43 + -250.0) + (float)(manaWidth[1] * 0.5), 0LL);
    v24 = (System_String_o *)this->fields.ManaLabel;
    if ( !v24 )
      goto LABEL_28;
    v46 = v43 + v45;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
    GameObjectExtensions__SetLocalPositionX(v47, v46, 0LL);
    v24 = (System_String_o *)this->fields.ManaLabel;
    if ( !v24 )
      goto LABEL_28;
    LODWORD(v48) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v24, 0LL);
    v24 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v24 )
      goto LABEL_28;
    v49 = v46 + v48;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
    v51 = manaWidth[0];
    GameObjectExtensions__SetLocalPositionX(v50, (float)(v49 + -250.0) + (float)(manaWidth[0] * 0.5), 0LL);
    v24 = (System_String_o *)this->fields.RareLabel;
    if ( !v24 )
      goto LABEL_28;
    v52 = v49 + v51;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
    GameObjectExtensions__SetLocalPositionX(v53, v52, 0LL);
    v24 = (System_String_o *)this->fields.RareLabel;
    if ( !v24
      || (LODWORD(v54) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v24, 0LL),
          (v24 = (System_String_o *)this->fields.RareNumLabel) == 0LL)
      || (v55 = v52 + v54,
          v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL),
          v57 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v56, (float)(v55 + -250.0) + (float)(rarePriWidth * 0.5), 0LL),
          (v24 = (System_String_o *)this->fields.RareLabel2) == 0LL) )
    {
LABEL_28:
      sub_1BCAA3C(v24, v25);
    }
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
    GameObjectExtensions__SetLocalPositionX(v58, v55 + v57, 0LL);
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
    sub_1BCAA3C(IsOnlyCloseButton, v5);
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
    sub_1BCAA3C(0LL, v10);
  UILabel__set_text(warningLabel, WarningText, 0LL);
}


void __fastcall ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B12637 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12637 = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__TransitionToCombineScene(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B12647 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12647 = 1;
  }
  this->fields.state = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


bool __fastcall ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantSellConfirmMenu_o *v3; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v3 = this;
  if ( (byte_4B12635 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_List_long__get_Count__,
                                         method,
                                         v2);
    byte_4B12635 = 1;
  }
  lastSvtCommandCodeList = v3->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1BCAA3C(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void __fastcall ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12655 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSellConfirmMenu___c_TypeInfo, v1, v2);
    byte_4B12655 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantSellConfirmMenu___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantSellConfirmMenu___c_TypeInfo->static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantSellConfirmMenu___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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