void __fastcall ServantSellConfirmMenu___ctor(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_long__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EAAD5 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v8, v9, v10);
    byte_42EAAD5 = 1;
  }
  *(_QWORD *)&this->fields.QP_NUM_LABEL_SIZE = 0x4C0000006ELL;
  *(_OWORD *)&this->fields.DEFAULT_MESSAGE_LABEL_FONT_SIZE = xmmword_32A51B0;
  v11 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_B5D560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42EAAC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, result, (_DWORD)method, v3);
    byte_42EAAC5 = 1;
  }
  onSellServantConfirm = this->fields.onSellServantConfirm;
  if ( onSellServantConfirm )
  {
    this->fields.onSellServantConfirm = 0LL;
    sub_B5D560(
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
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ServantSellConfirmMenu__ClearCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_42EAAB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    byte_42EAAB6 = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall ServantSellConfirmMenu__Close(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantSellConfirmMenu__Close_29078308(this, 0LL, v2);
}


void __fastcall ServantSellConfirmMenu__Close_29078308(
        ServantSellConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EAAC4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndClose__, v10, v11, v12);
    byte_42EAAC4 = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ServantSellConfirmMenu__DestroyList(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *servantSellConfirmListViewManager; // x20
  __int64 v6; // x1
  ListViewManager_o *v7; // x0

  if ( (byte_42EAACD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAACD = 1;
  }
  servantSellConfirmListViewManager = (UnityEngine_Object_o *)this->fields.servantSellConfirmListViewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(servantSellConfirmListViewManager, 0LL, 0LL) )
  {
    v7 = (ListViewManager_o *)this->fields.servantSellConfirmListViewManager;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    ListViewManager__DestroyList(v7, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_42EAAD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v8, v9, v10);
    byte_42EAAD3 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_258B320 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B5D69C(v13, v14);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v12,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ServantSellConfirmListViewManager__SetMode_29062088(servantSellConfirmListViewManager, 2, v21);
}


void __fastcall ServantSellConfirmMenu__EndCloseShowServant(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_42EAAD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v8, v9, v10);
    byte_42EAAD0 = 1;
  }
  this->fields.state = 2;
  servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ServantSellConfirmListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_OnSelectServantDetail__,
    (const MethodInfo_258B320 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
  if ( !servantSellConfirmListViewManager )
    sub_B5D69C(v13, v14);
  servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
    (System_Int32_array **)v12,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ServantSellConfirmListViewManager__SetMode_29062088(servantSellConfirmListViewManager, 2, v21);
}


void __fastcall ServantSellConfirmMenu__EndMaxErrorDialog(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v2);
}


void __fastcall ServantSellConfirmMenu__EndOpen(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  unsigned int kind; // w8
  struct ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2

  if ( (byte_42EAAC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantSellConfirmListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_ServantSellConfirmListViewItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_OnSelectServantDetail__, v8, v9, v10);
    byte_42EAAC3 = 1;
  }
  kind = this->fields.kind;
  this->fields.state = 2;
  if ( kind <= 4 )
  {
    servantSellConfirmListViewManager = this->fields.servantSellConfirmListViewManager;
    v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ServantSellConfirmListViewItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v13,
      (Il2CppObject *)this,
      Method_ServantSellConfirmMenu_OnSelectServantDetail__,
      (const MethodInfo_258B320 *)Method_System_Action_ServantSellConfirmListViewItem___ctor__);
    if ( !servantSellConfirmListViewManager )
      sub_B5D69C(v14, v15);
    servantSellConfirmListViewManager->fields.onSelectItem = (struct System_Action_ServantSellConfirmListViewItem__o *)v13;
    sub_B5D560(
      (BattleServantConfConponent_o *)&servantSellConfirmListViewManager->fields.onSelectItem,
      (System_Int32_array **)v13,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    ServantSellConfirmListViewManager__SetMode_29062088(servantSellConfirmListViewManager, 2, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowCommandCode(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42EAAD2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EAAD2 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__EndShowServant(
        ServantSellConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantSellConfirmListViewManager_o *servantSellConfirmListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42EAACF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndCloseShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EAACF = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(servantSellConfirmListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantSellConfirmMenu__GetIsOnlyCloseButton(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_o *closeButton; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20

  if ( (byte_42EAABB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11898/*"SERVANT_SELL_CLOSE"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11899/*"SERVANT_SELL_DECIDE"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11897/*"SERVANT_SELL_CANCEL"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAABB = 1;
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
      closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_SELL_CLOSE"*/, 0LL);
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
    sub_B5D69C(closeButton, *(_QWORD *)&kind);
  }
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11899/*"SERVANT_SELL_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_20;
  UILabel__set_text(decideLabel, closeButton, 0LL);
  cancelLabel = this->fields.cancelLabel;
  closeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11897/*"SERVANT_SELL_CANCEL"*/, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  void *v57; // x0
  __int64 v58; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t mana; // w23
  int32_t getMana; // w24
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v63; // x0
  __int64 *v64; // x8
  struct UserGameEntity_o *v65; // x9
  int32_t rarePri; // w23
  int32_t getRarePri; // w24
  System_String_o *v68; // x20
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct UserGameEntity_o *v78; // x9
  int32_t qp; // w23
  int32_t QpMax; // w8
  struct UserGameEntity_o *v81; // x9
  int32_t v82; // w23
  int32_t getQP; // w24
  System_String_o *v84; // x23
  _QWORD **v85; // x26
  __int64 v86; // x24
  __int16 v87; // w8
  __int64 v88; // x24
  __int64 v89; // x24
  __int64 v90; // x24
  System_String_o *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct UserGameEntity_o *v98; // x8
  System_String_o *v99; // x21
  System_String_o *v100; // x0
  BalanceConfig_c *v101; // x8
  Il2CppObject *v102; // x23
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_o *v111; // x19
  Il2CppObject *v112; // x0
  System_String_o *v113; // x1
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_o **v120; // x0
  System_String_o *v121; // x22
  _QWORD **v122; // x24
  __int64 v123; // x23
  __int16 v124; // w8
  __int64 v125; // x23
  __int64 v126; // x23
  __int64 v127; // x23
  System_String_o *v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  struct UserGameEntity_o *v135; // x8
  System_String_o *v136; // x20
  System_String_o *NumberFormat; // x0
  BalanceConfig_c *v138; // x8
  Il2CppObject *v139; // x21
  Il2CppObject *v140; // x0

  if ( (byte_42EAAC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_object___, (_DWORD)title, (_DWORD)message, getable);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12348/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12349/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12346/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_8706/*"MANA_NAME"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_11144/*"RARE_PRI_NAME"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12350/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12351/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12347/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    byte_42EAAC9 = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)title,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)message,
    (System_String_array **)getable,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  *getable = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)getable,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_72;
  mana = userGameEntity->fields.mana;
  getMana = this->fields.getMana;
  v57 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
  }
  static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)v57 + 23);
  if ( getMana + mana > static_fields->ManaMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12346/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
    v64 = &StringLiteral_8706/*"MANA_NAME"*/;
LABEL_21:
    v68 = v63;
    v69 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)*v64, 0LL);
    v70 = System_String__Format(v68, v69, 0LL);
    *message = v70;
    sub_B5D560((BattleServantConfConponent_o *)message, (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
    return 0;
  }
  v65 = this->fields.userGameEntity;
  if ( !v65 )
    goto LABEL_72;
  rarePri = v65->fields.rarePri;
  getRarePri = this->fields.getRarePri;
  if ( (*((_BYTE *)v57 + 307) & 4) != 0 && !*((_DWORD *)v57 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( getRarePri + rarePri > static_fields->RarePriMax )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12346/*"SHOP_SELL_SERVANT_MAX_ALERT"*/, 0LL);
    v64 = &StringLiteral_11144/*"RARE_PRI_NAME"*/;
    goto LABEL_21;
  }
  v78 = this->fields.userGameEntity;
  if ( !v78 )
    goto LABEL_72;
  qp = v78->fields.qp;
  if ( (*((_BYTE *)v57 + 307) & 4) != 0 && !*((_DWORD *)v57 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = BalanceConfig_TypeInfo;
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
    v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12348/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_TITLE"*/, 0LL);
    v122 = (_QWORD **)Method_System_Array_Empty_object___;
    v123 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v124 = *(_WORD *)(v123 + 306);
    if ( (v124 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v124 = *(_WORD *)(v123 + 306);
    }
    if ( (v124 & 0x400) != 0 )
    {
      v125 = *v122[6];
      if ( (*(_BYTE *)(v125 + 306) & 1) == 0 )
        sub_AF52C4(*v122[6]);
      if ( !*(_DWORD *)(v125 + 224) )
      {
        v126 = *v122[6];
        if ( (*(_BYTE *)(v126 + 306) & 1) == 0 )
          sub_AF52C4(*v122[6]);
        j_il2cpp_runtime_class_init_0(v126);
      }
    }
    v127 = *v122[6];
    if ( (*(_BYTE *)(v127 + 306) & 1) == 0 )
      sub_AF52C4(*v122[6]);
    v128 = System_String__Format_44656512(v121, **(System_Object_array ***)(v127 + 184), 0LL);
    *title = v128;
    sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)v128, v129, v130, v131, v132, v133, v134);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12347/*"SHOP_SELL_SERVANT_QP_MAX_ALERT_MESSAGE"*/, 0LL);
    v135 = this->fields.userGameEntity;
    if ( v135 )
    {
      v136 = (System_String_o *)v57;
      NumberFormat = LocalizationManager__GetNumberFormat(v135->fields.qp, 0LL);
      v138 = BalanceConfig_TypeInfo;
      v139 = (Il2CppObject *)NumberFormat;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v138 = BalanceConfig_TypeInfo;
      }
      v140 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v138->static_fields->QpMax, 0LL);
      v113 = System_String__Format_44573324(v136, v139, v140, 0LL);
      *message = v113;
      v120 = message;
      goto LABEL_71;
    }
LABEL_72:
    sub_B5D69C(v57, v58);
  }
  v81 = this->fields.userGameEntity;
  if ( !v81 )
    goto LABEL_72;
  v82 = v81->fields.qp;
  getQP = this->fields.getQP;
  if ( (*((_BYTE *)v57 + 307) & 4) != 0 && !*((_DWORD *)v57 + 56) )
  {
    j_il2cpp_runtime_class_init_0(v57);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  if ( getQP + v82 <= QpMax )
    return 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_TITLE"*/, 0LL);
  v85 = (_QWORD **)Method_System_Array_Empty_object___;
  v86 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v87 = *(_WORD *)(v86 + 306);
  if ( (v87 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v87 = *(_WORD *)(v86 + 306);
  }
  if ( (v87 & 0x400) != 0 )
  {
    v88 = *v85[6];
    if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
      sub_AF52C4(*v85[6]);
    if ( !*(_DWORD *)(v88 + 224) )
    {
      v89 = *v85[6];
      if ( (*(_BYTE *)(v89 + 306) & 1) == 0 )
        sub_AF52C4(*v85[6]);
      j_il2cpp_runtime_class_init_0(v89);
    }
  }
  v90 = *v85[6];
  if ( (*(_BYTE *)(v90 + 306) & 1) == 0 )
    sub_AF52C4(*v85[6]);
  v91 = System_String__Format_44656512(v84, **(System_Object_array ***)(v90 + 184), 0LL);
  *title = v91;
  sub_B5D560((BattleServantConfConponent_o *)title, (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12350/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
  v98 = this->fields.userGameEntity;
  if ( !v98 )
    goto LABEL_72;
  v99 = (System_String_o *)v57;
  v100 = LocalizationManager__GetNumberFormat(v98->fields.qp, 0LL);
  v101 = BalanceConfig_TypeInfo;
  v102 = (Il2CppObject *)v100;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v101 = BalanceConfig_TypeInfo;
  }
  v103 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v101->static_fields->QpMax, 0LL);
  v104 = System_String__Format_44573324(v99, v102, v103, 0LL);
  *message = v104;
  sub_B5D560((BattleServantConfConponent_o *)message, (System_Int32_array **)v104, v105, v106, v107, v108, v109, v110);
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_12349/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_GETABLE"*/, 0LL);
  v112 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.getQP, 0LL);
  v113 = System_String__Format(v111, v112, 0LL);
  *getable = v113;
  v120 = getable;
LABEL_71:
  sub_B5D560((BattleServantConfConponent_o *)v120, (System_Int32_array **)v113, v114, v115, v116, v117, v118, v119);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  __int64 *v43; // x8
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned int max_length; // w9
  __int64 v47; // x0

  v6 = this;
  if ( (byte_42EAAC1 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, kind, isBoth, method);
    sub_B5D5C4(&StringLiteral_11850/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11820/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11849/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11908/*"SERVANT_SELL_MESSAGE_ERROR"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11910/*"SERVANT_SELL_MESSAGE_START"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11909/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11848/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11819/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_11790/*"SERVANT_ALL_SELL_MESSAGE_END"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11818/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/, v37, v38, v39);
    this = (ServantSellConfirmMenu_o *)sub_B5D5C4(&StringLiteral_11791/*"SERVANT_ALL_SELL_MESSAGE_START"*/, v40, v41, v42);
    byte_42EAAC1 = 1;
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
        v43 = &StringLiteral_11791/*"SERVANT_ALL_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v43, 0LL);
      }
      servantTypeFlags = v6->fields.servantTypeFlags;
      if ( !servantTypeFlags )
        sub_B5D69C(this, *(_QWORD *)&kind);
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
        v43 = &StringLiteral_11910/*"SERVANT_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v43, 0LL);
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
        v43 = &StringLiteral_11850/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/;
        return LocalizationManager__Get((System_String_o *)*v43, 0LL);
      }
      if ( max_length <= 2 )
      {
LABEL_58:
        v47 = sub_B5D6C8(this);
        sub_B5D668(v47, 0LL);
      }
      if ( servantTypeFlags->m_Items[6] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = &StringLiteral_11818/*"SERVANT_COMMANDCODE_SELL_MSG_START"*/;
        return LocalizationManager__Get((System_String_o *)*v43, 0LL);
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
      v43 = &StringLiteral_11790/*"SERVANT_ALL_SELL_MESSAGE_END"*/;
      return LocalizationManager__Get((System_String_o *)*v43, 0LL);
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_11908/*"SERVANT_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v43, 0LL);
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_11848/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v43, 0LL);
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_11819/*"SERVANT_COMMAND_CODE_SELLE_MSG_ERROR"*/;
      return LocalizationManager__Get((System_String_o *)*v43, 0LL);
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_11909/*"SERVANT_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v43, 0LL);
    case 12:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_11849/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v43, 0LL);
    case 13:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = &StringLiteral_11820/*"SERVANT_COMMAND_CODE_SELL_MSG_NO_SELECT"*/;
      return LocalizationManager__Get((System_String_o *)*v43, 0LL);
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
    sub_B5D69C(QpNumLabel, qpWidth);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
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
  __int64 *v39; // x8
  struct System_Boolean_array *v40; // x8
  System_String_o *v41; // x19
  System_String_o *v42; // x2
  unsigned int v43; // w8
  struct System_Boolean_array *isRareFlags; // x8
  unsigned int max_length; // w9
  __int64 v46; // x0

  v9 = kind;
  v10 = this;
  if ( (byte_42EAAC2 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, kind, isMaterial, isExceeded);
    sub_B5D5C4(&StringLiteral_11821/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_69/*"\r\n"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11917/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11792/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11780/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11900/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_11851/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    this = (ServantSellConfirmMenu_o *)sub_B5D5C4(&StringLiteral_11881/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/, v35, v36, v37);
    byte_42EAAC2 = 1;
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
      v39 = &StringLiteral_11780/*"SELL_EXCEEDED_MATERIAL_INFO_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v39, 0LL);
    }
    *(_QWORD *)&kind = v10->fields.isRareFlags;
    if ( isMaterial )
    {
      if ( !*(_QWORD *)&kind )
        goto LABEL_64;
      v43 = *(_DWORD *)(*(_QWORD *)&kind + 24LL);
      if ( !v43 )
        goto LABEL_63;
      if ( !*(_BYTE *)(*(_QWORD *)&kind + 32LL) )
      {
        if ( v43 <= 1 )
          goto LABEL_63;
        if ( !*(_BYTE *)(*(_QWORD *)&kind + 33LL) )
        {
          if ( v43 <= 2 )
            goto LABEL_63;
          if ( !*(_BYTE *)(*(_QWORD *)&kind + 34LL) )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v39 = &StringLiteral_11881/*"SERVANT_MATERIAL_SELL_REQUEST_RARITY_MESSAGE"*/;
            return LocalizationManager__Get((System_String_o *)*v39, 0LL);
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
      v39 = &StringLiteral_11792/*"SERVANT_ALL_SELL_REQUEST_RARITY_MESSAGE"*/;
      return LocalizationManager__Get((System_String_o *)*v39, 0LL);
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
        v39 = &StringLiteral_11917/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/;
        return LocalizationManager__Get((System_String_o *)*v39, 0LL);
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
          v39 = &StringLiteral_11851/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/;
          return LocalizationManager__Get((System_String_o *)*v39, 0LL);
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
          v39 = &StringLiteral_11821/*"SERVANT_COMMAND_CODE_SELL_REQUEST_RARITY_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v39, 0LL);
        }
      }
    }
LABEL_63:
    v46 = sub_B5D6C8(this);
    sub_B5D668(v46, 0LL);
  }
  if ( isMaterial )
    goto LABEL_18;
  v40 = v10->fields.isRareFlags;
  if ( !v40 )
LABEL_64:
    sub_B5D69C(this, *(_QWORD *)&kind);
  if ( v40->max_length <= 2 )
    goto LABEL_63;
  if ( !v40->m_Items[6] && !v40->m_Items[5] && !v40->m_Items[4] )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = &StringLiteral_11900/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v39, 0LL);
  }
LABEL_18:
  v10->fields.isTwoLinesWarning = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SERVANT_SELL_REQUEST_RARITY_MESSAGE"*/, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11900/*"SERVANT_SELL_EQUIP_CMD_CODE_WARNING_MSG"*/, 0LL);
  return System_String__Concat_44580072(v41, (System_String_o *)StringLiteral_69/*"\r\n"*/, v42, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, selectedId);
  ServantSellConfirmListViewManager__ModifyItem(servantSellConfirmListViewManager, selectedId, method);
}


void __fastcall ServantSellConfirmMenu__OnClickCancel(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v9; // x2

  if ( (byte_42EAACB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAACB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.kind == 4 )
    {
      lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
      if ( !lastSvtCommandCodeList )
        sub_B5D69C(0LL, method);
      System_Collections_Generic_List_long___Clear(
        lastSvtCommandCodeList,
        (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v9);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickClose(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EAACC & 1) == 0 )
  {
    sub_B5D5C4(&Method_ServantSellConfirmMenu_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EAACC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_ServantSellConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellConfirmMenu_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_ServantSellConfirmMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    ServantSellConfirmMenu__CallOnSellServantConfirm(this, 0, v7);
  }
}


void __fastcall ServantSellConfirmMenu__OnClickDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  bool IsQpMaxAlert; // w20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x4
  WebViewManager_o *Instance; // x0
  System_String_o *v22; // x20
  CommonUI_o *v23; // x21
  System_Action_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *getable; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+38h] [xbp-38h] BYREF
  System_String_o *title; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_42EAAC6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAAC6 = 1;
  }
  title = 0LL;
  getable = 0LL;
  message = 0LL;
  if ( this->fields.state == 2 )
  {
    title = (System_String_o *)StringLiteral_1/*""*/;
    getable = (System_String_o *)StringLiteral_1/*""*/;
    message = (System_String_o *)StringLiteral_1/*""*/;
    IsQpMaxAlert = ServantSellConfirmMenu__GetIsQpMaxAlert(this, &title, &message, &getable, v4);
    if ( System_String__op_Equality(message, (System_String_o *)StringLiteral_1/*""*/, 0LL) || this->fields.isMaxQpChecked )
    {
      ServantSellConfirmMenu__SellServantDecide(this, v19);
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
        ServantSellConfirmMenu__OpenQpMaxAlert(this, title, message, getable, v20);
      }
      else
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v22 = message;
        v23 = (CommonUI_o *)Instance;
        v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
        if ( !v23 )
          sub_B5D69C(v25, v26);
        CommonUI__OpenNotificationDialog(
          v23,
          (System_String_o *)StringLiteral_1/*""*/,
          v22,
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
          0LL);
      }
    }
  }
}


void __fastcall ServantSellConfirmMenu__OnEnable(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v12; // x0

  if ( (byte_42EAAD4 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15676/*"Window/Objects/CancelButton"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_15677/*"Window/Objects/CloseButton"*/, v8, v9, v10);
    byte_42EAAD4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_15676/*"Window/Objects/CancelButton"*/, 0LL);
  v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21237572(v12, (System_String_o *)StringLiteral_15677/*"Window/Objects/CloseButton"*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__OnSelectCommandCodeDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v19; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x22

  if ( (byte_42EAAD1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndShowCommandCode__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42EAAD1 = 1;
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
      || (this->fields.commandCodeStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(selectItem, v16),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v19 = (CommonUI_o *)Instance,
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v20,
            (Il2CppObject *)this,
            Method_ServantSellConfirmMenu_EndShowCommandCode__,
            0LL),
          !v19) )
    {
      sub_B5D69C(v15, v16);
    }
    CommonUI__OpenServantStatusDialog_18215196(v19, 32, UserCommandCodeEntity_k__BackingField, v20, 0LL, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__OnSelectServantDetail(
        ServantSellConfirmMenu_o *this,
        ServantSellConfirmListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantSellConfirmMenu_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x1
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v18; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22
  const MethodInfo *v20; // x2

  v5 = this;
  if ( (byte_42EAACE & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    this = (ServantSellConfirmMenu_o *)sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42EAACE = 1;
  }
  if ( v5->fields.state == 2 )
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
      v5->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserSvtId(selectItem, v15);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v5->fields.servantStatusId;
      v18 = (CommonUI_o *)Instance;
      v19 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v19,
        (Il2CppObject *)v5,
        Method_ServantSellConfirmMenu_EndShowServant__,
        0LL);
      if ( v18 )
      {
        CommonUI__OpenServantStatusDialog_18211624(v18, 29, servantStatusId, v19, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v5->fields.servantStatusId = ServantSellConfirmListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      ServantSellConfirmMenu__OnSelectCommandCodeDetail(v5, selectItem, v20);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UILabel_o *titleLabel; // x23
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x5
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  bool v43; // w24
  _BOOL4 v44; // w23
  const MethodInfo *v45; // x6
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x5
  const MethodInfo *v48; // x5
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  System_Action_o *v51; // x20
  bool isNoWarning; // [xsp+0h] [xbp-40h] BYREF
  bool isEquipedCommandCode; // [xsp+4h] [xbp-3Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-38h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EAAB8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)servantIdList, commandCodeIdList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndOpen__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11918/*"SERVANT_SELL_TITLE"*/, v20, v21, v22);
    byte_42EAAB8 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)onSellServantConfirm,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SERVANT_SELL_TITLE"*/, 0LL);
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
              ServantSellConfirmMenu__SetObjectsActive(this, kind, v39);
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
                v40);
              ServantSellConfirmMenu__SetMessageStatusByCommandCode(this, commandCodeIdList, v41);
              this->fields.isTwoLinesWarning = 0;
              ServantSellConfirmMenu__SetMessageText(this, kind, v42);
              v43 = isExceeded;
              v44 = isEquipedCommandCode;
              ServantSellConfirmMenu__SetWarningText(
                this,
                kind,
                isMaterial,
                isExceeded,
                isEquipedCommandCode,
                &isNoWarning,
                v45);
              ServantSellConfirmMenu__SetInfoLabels(this, kind, isNoWarning, v46);
              ServantSellConfirmMenu__SetNumLabels(
                this,
                kind,
                this->fields.getQP,
                this->fields.getMana,
                this->fields.getRarePri,
                v47);
              ServantSellConfirmMenu__SetListViewManager(this, kind, servantIdList, commandCodeIdList, v43, v48);
              gameObject = this->fields.listViewBg;
              if ( gameObject )
              {
                v49 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
                GameObjectExtensions__SetLocalPositionY(v49, 90.0, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.servantSellConfirmListViewManager;
                if ( gameObject )
                {
                  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v50, 140.0, 0LL);
                  if ( v44 || (unsigned int)(this->fields.kind - 5) < 3 )
                    goto LABEL_20;
                  gameObject = (UnityEngine_GameObject_o *)this->fields.lastSvtCommandCodeList;
                  if ( gameObject )
                  {
                    System_Collections_Generic_List_long___Clear(
                      (System_Collections_Generic_List_long__o *)gameObject,
                      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
LABEL_20:
                    this->fields.state = 1;
                    v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                    System_Action___ctor(v51, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B5D69C(gameObject, v30);
  }
}


void __fastcall ServantSellConfirmMenu__OpenCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x1
  System_Collections_Generic_IEnumerable_TSource__o *lastSvtCommandCodeList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  struct System_Collections_Generic_List_long__o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x4
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *closeLabel; // x20
  System_Action_o *v51; // x20

  if ( (byte_42EAABA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_long___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_long___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndOpen__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3308/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11898/*"SERVANT_SELL_CLOSE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3309/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v27, v28, v29);
    byte_42EAABA = 1;
  }
  ServantSellConfirmMenu__TextClear(this, (const MethodInfo *)callback);
  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_29;
  if ( SLODWORD(lastSvtCommandCodeList[1].monitor) >= 1 && !this->fields.state )
  {
    v32 = System_Linq_Enumerable__Distinct_long_(
            lastSvtCommandCodeList,
            (const MethodInfo_1CA8E00 *)Method_System_Linq_Enumerable_Distinct_long___);
    v33 = (struct System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                              v32,
                                                              (const MethodInfo_1CBA69C *)Method_System_Linq_Enumerable_ToList_long___);
    this->fields.lastSvtCommandCodeList = v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    this->fields.onSellServantConfirm = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
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
              v46);
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
                                                                                              (System_String_o *)StringLiteral_3309/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/,
                                                                                              0LL);
              if ( titleLabel )
              {
                UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
                lowerLabel = this->fields.lowerLabel;
                lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get(
                                                                                                (System_String_o *)StringLiteral_3308/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/,
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
                                  lastSvtCommandCodeList = (System_Collections_Generic_IEnumerable_TSource__o *)LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_SELL_CLOSE"*/, 0LL);
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
                                        v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v51,
                                          (Il2CppObject *)this,
                                          Method_ServantSellConfirmMenu_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
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
    sub_B5D69C(lastSvtCommandCodeList, v30);
  }
}


void __fastcall ServantSellConfirmMenu__OpenQpMaxAlert(
        ServantSellConfirmMenu_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *getable,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
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
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  System_String_o *v31; // x0
  ServantSellMaxAlertDialog_o *servantSellMaxAlertDialog; // x26
  System_String_o *v33; // x25
  System_Action_o *v34; // x27
  System_Action_o *onTransition; // x28
  System_Action_o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // [xsp+18h] [xbp-68h]

  if ( (byte_42EAAC7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, getable);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndMaxErrorDialog__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_SellServantDecide__, v14, v15, v16);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_TransitionToCombineScene__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11913/*"SERVANT_SELL_QP_MAX_DECIDE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11912/*"SERVANT_SELL_QP_MAX_CLOSE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11919/*"SERVANT_SELL_TRANSITION_COMBINE"*/, v26, v27, v28);
    byte_42EAAC7 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11919/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  servantSellMaxAlertDialog = this->fields.servantSellMaxAlertDialog;
  v33 = v31;
  v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_ServantSellConfirmMenu_SellServantDecide__, 0LL);
  onTransition = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    onTransition,
    (Il2CppObject *)this,
    Method_ServantSellConfirmMenu_TransitionToCombineScene__,
    0LL);
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndMaxErrorDialog__, 0LL);
  if ( !servantSellMaxAlertDialog )
    sub_B5D69C(v37, v38);
  ServantSellMaxAlertDialog__Open(
    servantSellMaxAlertDialog,
    title,
    message,
    getable,
    v29,
    v30,
    v33,
    v34,
    onTransition,
    v36,
    0,
    v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        System_Int64_array *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  System_Collections_Generic_IEnumerable_T__o *v63; // x1
  int64_t lastSvtCommandCodeList; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UILabel_o *titleLabel; // x21
  const MethodInfo *v79; // x5
  const MethodInfo *v80; // x4
  __int64 v81; // x8
  unsigned __int64 v82; // x25
  int64_t v83; // x21
  int32_t SvtId; // w21
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_long__o *v86; // x21
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__62_0; // x22
  Il2CppObject *v89; // x23
  struct ServantSellConfirmMenu___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  UILabel_o *upperLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  const MethodInfo *v102; // x2
  const MethodInfo *v103; // x2
  UILabel_o *decideLabel; // x20
  System_Action_o *v105; // x20
  __int64 v106; // x0
  bool isEquipedCommandCode; // [xsp+4h] [xbp-5Ch] BYREF
  bool isExceeded; // [xsp+8h] [xbp-58h] BYREF
  bool isMaterial; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EAAB9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)servantIdList, callback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__AddRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__RemoveAll__, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Predicate_long___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Predicate_long__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_ServantSellConfirmMenu_EndOpen__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__, v45, v46, v47);
    sub_B5D5C4(&ServantSellConfirmMenu___c_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_11782/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_11781/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_11918/*"SERVANT_SELL_TITLE"*/, v60, v61, v62);
    byte_42EAAB9 = 1;
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
      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
    this->fields.kind = 4;
    this->fields.onSellServantConfirm = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onSellServantConfirm,
      (System_Int32_array **)callback,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    lastSvtCommandCodeList = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
    *(_QWORD *)&this->fields.getQP = 0LL;
    this->fields.getRarePri = 0;
    this->fields.isMaxQpChecked = 0;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userGameEntity,
      (System_Int32_array **)SelfUserGame,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SERVANT_SELL_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    ServantSellConfirmMenu__SetMessageStatusByServant(
      this,
      servantIdList,
      &isMaterial,
      &isExceeded,
      &isEquipedCommandCode,
      v79);
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
      v80);
    lastSvtCommandCodeList = (int64_t)this->fields.listViewBg;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    v81 = *(_QWORD *)&servantIdList->max_length;
    if ( (int)v81 >= 1 )
    {
      v82 = 0LL;
      while ( 1 )
      {
        if ( v82 >= (unsigned int)v81 )
        {
          v106 = sub_B5D6C8(lastSvtCommandCodeList);
          sub_B5D668(v106, 0LL);
        }
        v83 = servantIdList->m_Items[v82];
        lastSvtCommandCodeList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lastSvtCommandCodeList )
          break;
        lastSvtCommandCodeList = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)lastSvtCommandCodeList,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !lastSvtCommandCodeList )
          break;
        lastSvtCommandCodeList = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)lastSvtCommandCodeList,
                                            v83,
                                            (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !lastSvtCommandCodeList )
          break;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)lastSvtCommandCodeList, 0LL);
        lastSvtCommandCodeList = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lastSvtCommandCodeList )
          break;
        MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)lastSvtCommandCodeList,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
          v63 = (System_Collections_Generic_IEnumerable_T__o *)lastSvtCommandCodeList;
          lastSvtCommandCodeList = (int64_t)this->fields.lastSvtCommandCodeList;
          if ( !lastSvtCommandCodeList )
            break;
          System_Collections_Generic_List_long___AddRange(
            (System_Collections_Generic_List_long__o *)lastSvtCommandCodeList,
            v63,
            (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
          lastSvtCommandCodeList = (int64_t)ServantSellConfirmMenu___c_TypeInfo;
          v86 = this->fields.lastSvtCommandCodeList;
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
            v89 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Predicate_long__o *)sub_B5D694(System_Predicate_long__TypeInfo);
            System_Predicate_long____ctor(
              _9__62_0,
              v89,
              Method_ServantSellConfirmMenu___c__OpenSellEquippedLastSvtWarning_b__62_0__,
              (const MethodInfo_2B92170 *)Method_System_Predicate_long___ctor__);
            v90 = ServantSellConfirmMenu___c_TypeInfo->static_fields;
            v90->__9__62_0 = _9__62_0;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v90->__9__62_0,
              (System_Int32_array **)_9__62_0,
              v91,
              v92,
              v93,
              v94,
              v95,
              v96);
          }
          if ( !v86 )
            break;
          lastSvtCommandCodeList = System_Collections_Generic_List_long___RemoveAll(
                                     v86,
                                     (System_Predicate_T__o *)_9__62_0,
                                     (const MethodInfo_30492AC *)Method_System_Collections_Generic_List_long__RemoveAll__);
        }
        LODWORD(v81) = servantIdList->max_length;
        if ( (__int64)++v82 >= (int)v81 )
          goto LABEL_40;
      }
LABEL_51:
      sub_B5D69C(lastSvtCommandCodeList, v63);
    }
LABEL_40:
    upperLabel = this->fields.upperLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SELL_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    lowerLabel = this->fields.lowerLabel;
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11782/*"SELL_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
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
    v100 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)lastSvtCommandCodeList, 0LL);
    GameObjectExtensions__SetLocalPositionY(v100, 44.0, 0LL);
    lastSvtCommandCodeList = (int64_t)this->fields.servantSellConfirmListViewManager;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lastSvtCommandCodeList, 0LL);
    GameObjectExtensions__SetLocalPositionY(v101, 94.0, 0LL);
    ServantSellConfirmMenu__SetObjectsActive(this, 4, v102);
    ServantSellConfirmMenu__GetIsOnlyCloseButton(this, 4, v103);
    decideLabel = this->fields.decideLabel;
    lastSvtCommandCodeList = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_51;
    UILabel__set_text(decideLabel, (System_String_o *)lastSvtCommandCodeList, 0LL);
    this->fields.state = 1;
    v105 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v105, (Il2CppObject *)this, Method_ServantSellConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v105, 0, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SellServantDecide(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w0
  const MethodInfo *v6; // x2

  if ( (byte_42EAACA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAACA = 1;
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
    v5 = 0;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v5 = 8;
  }
  SoundManager__playSystemSe(v5, 0LL);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  UILabel_o *info1Label; // x21
  UILabel_o *v32; // x21
  ServantSellConfirmMenu_o *v33; // x0
  const MethodInfo *v34; // x2
  ServantSellConfirmMenu_o *v35; // x0
  const MethodInfo *v36; // x2
  ServantSellConfirmMenu_o *v37; // x0
  const MethodInfo *v38; // x2
  float v39; // s0
  int v40; // s8
  ServantSellConfirmMenu_o *v41; // x0
  const MethodInfo *v42; // x2
  UILabel_o *info3Label; // x1
  int v44; // s0
  ServantSellConfirmMenu_o *v45; // x0
  const MethodInfo *v46; // x2
  ServantSellConfirmMenu_o *v47; // x0
  const MethodInfo *v48; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w24
  BalanceConfig_c *v51; // x0
  UILabel_o *v52; // x20
  int32_t QpMax; // w25
  __int64 *v54; // x8
  struct UserGameEntity_o *v55; // x8
  System_String_o *v56; // x21
  Il2CppObject *NumberFormat; // x0
  UILabel_o *info2Label; // x20
  struct UserGameEntity_o *v59; // x8
  System_String_o *v60; // x21
  Il2CppObject *v61; // x0
  UILabel_o *v62; // x20
  struct UserGameEntity_o *v63; // x8
  System_String_o *v64; // x21
  Il2CppObject *v65; // x0
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
  struct UserGameEntity_o *v78; // x8
  System_String_o *v79; // x21
  Il2CppObject *v80; // x0
  struct UserGameEntity_o *v81; // x8
  System_String_o *v82; // x21
  Il2CppObject *v83; // x0

  v6 = this;
  if ( (byte_42EAABE & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, isNoWarning, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11906/*"SERVANT_SELL_INFO7"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11901/*"SERVANT_SELL_INFO2_ALERT"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11905/*"SERVANT_SELL_INFO6"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11903/*"SERVANT_SELL_INFO3"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11902/*"SERVANT_SELL_INFO2_NORMAL"*/, v25, v26, v27);
    this = (ServantSellConfirmMenu_o *)sub_B5D5C4(&StringLiteral_11904/*"SERVANT_SELL_INFO5"*/, v28, v29, v30);
    byte_42EAABE = 1;
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
            ServantSellConfirmMenu__SetLabelLocalPositionY(v45, v6->fields.info1Label, -50.0, v46);
            ServantSellConfirmMenu__SetLabelLocalPositionY(v47, v6->fields.info2Label, -78.0, v48);
            info3Label = v6->fields.info3Label;
            v44 = -1026293760;
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
            this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SERVANT_SELL_INFO6"*/, 0LL);
            if ( info1Label )
            {
              UILabel__set_text(info1Label, (System_String_o *)this, 0LL);
              this = (ServantSellConfirmMenu_o *)v6->fields.info2Label;
              if ( this )
              {
                UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                v32 = v6->fields.info3Label;
                this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_SELL_INFO7"*/, 0LL);
                if ( v32 )
                {
                  UILabel__set_text(v32, (System_String_o *)this, 0LL);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v33, v6->fields.info1Label, -92.0, v34);
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v35, v6->fields.info2Label, -115.0, v36);
                  v39 = -162.0;
                  v40 = -1022689280;
                  if ( isNoWarning )
                    v39 = -139.0;
                  ServantSellConfirmMenu__SetLabelLocalPositionY(v37, v6->fields.info3Label, v39, v38);
                  if ( v6->fields.isTwoLinesWarning )
                  {
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v41, v6->fields.info3Label, -176.0, v42);
                    info3Label = v6->fields.warningLabel;
                    v44 = -1022164992;
LABEL_71:
                    ServantSellConfirmMenu__SetLabelLocalPositionY(v41, info3Label, *(float *)&v44, v42);
                    return;
                  }
                  info3Label = v6->fields.warningLabel;
LABEL_70:
                  v44 = v40;
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
        v51 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v51 = BalanceConfig_TypeInfo;
        }
        v52 = v6->fields.info1Label;
        QpMax = v51->static_fields->QpMax;
        if ( qp < QpMax )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v54 = &StringLiteral_11902/*"SERVANT_SELL_INFO2_NORMAL"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v54 = &StringLiteral_11901/*"SERVANT_SELL_INFO2_ALERT"*/;
        }
        this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)*v54, 0LL);
        v55 = v6->fields.userGameEntity;
        if ( v55 )
        {
          v56 = (System_String_o *)this;
          NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v55->fields.qp, 0LL);
          this = (ServantSellConfirmMenu_o *)System_String__Format(v56, NumberFormat, 0LL);
          if ( v52 )
          {
            UILabel__set_text(v52, (System_String_o *)this, 0LL);
            info2Label = v6->fields.info2Label;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11903/*"SERVANT_SELL_INFO3"*/, 0LL);
            v59 = v6->fields.userGameEntity;
            if ( v59 )
            {
              v60 = (System_String_o *)this;
              v61 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v59->fields.mana, 0LL);
              this = (ServantSellConfirmMenu_o *)System_String__Format(v60, v61, 0LL);
              if ( info2Label )
              {
                UILabel__set_text(info2Label, (System_String_o *)this, 0LL);
                v62 = v6->fields.info3Label;
                this = (ServantSellConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11904/*"SERVANT_SELL_INFO5"*/, 0LL);
                v63 = v6->fields.userGameEntity;
                if ( v63 )
                {
                  v64 = (System_String_o *)this;
                  v65 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v63->fields.rarePri, 0LL);
                  this = (ServantSellConfirmMenu_o *)System_String__Format(v64, v65, 0LL);
                  if ( v62 )
                  {
                    UILabel__set_text(v62, (System_String_o *)this, 0LL);
                    this = (ServantSellConfirmMenu_o *)v6->fields.info1Label;
                    if ( this )
                    {
                      v66 = 96LL;
                      if ( qp >= QpMax )
                        v66 = 92LL;
                      v40 = 1111752704;
                      v67 = qp < QpMax ? 10.0 : 49.0;
                      UILabel__set_fontSize((UILabel_o *)this, *(_DWORD *)((char *)&v6->klass + v66), 0LL);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v68, v6->fields.info1Label, v67, v69);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v70, v6->fields.info2Label, -50.0, v71);
                      ServantSellConfirmMenu__SetLabelLocalPositionY(v72, v6->fields.info3Label, -110.0, v73);
                      v74 = v6->fields.userGameEntity;
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
                        v77 = v6->fields.info1Label;
                        if ( v76 >= v75->static_fields->QpMax )
                        {
                          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          this = (ServantSellConfirmMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11901/*"SERVANT_SELL_INFO2_ALERT"*/,
                                                               0LL);
                          v81 = v6->fields.userGameEntity;
                          if ( v81 )
                          {
                            v82 = (System_String_o *)this;
                            v83 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v81->fields.qp, 0LL);
                            this = (ServantSellConfirmMenu_o *)System_String__Format(v82, v83, 0LL);
                            if ( v77 )
                            {
                              UILabel__set_text(v77, (System_String_o *)this, 0LL);
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
                                                               (System_String_o *)StringLiteral_11902/*"SERVANT_SELL_INFO2_NORMAL"*/,
                                                               0LL);
                          v78 = v6->fields.userGameEntity;
                          if ( v78 )
                          {
                            v79 = (System_String_o *)this;
                            v80 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v78->fields.qp, 0LL);
                            this = (ServantSellConfirmMenu_o *)System_String__Format(v79, v80, 0LL);
                            if ( v77 )
                            {
                              UILabel__set_text(v77, (System_String_o *)this, 0LL);
                              info3Label = v6->fields.info1Label;
                              v44 = 10.0;
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
    sub_B5D69C(this, *(_QWORD *)&kind);
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
    sub_B5D69C(this, label);
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
      sub_B5D69C(servantSellConfirmListViewManager, *(_QWORD *)&kind);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSellConfirmListViewManager, 1, 0LL);
  }
}


void __fastcall ServantSellConfirmMenu__SetMessageStatusByCommandCode(
        ServantSellConfirmMenu_o *this,
        System_Int64_array *commandCodeIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantSellConfirmMenu_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Boolean_array *servantTypeFlags; // x8
  unsigned __int64 v13; // x22
  int64_t v14; // x21
  int32_t getQP; // w28
  UserCommandCodeEntity_o *v16; // x21
  int32_t SellQp; // w0
  int32_t getMana; // w24
  int32_t SellMana; // w0
  int32_t getRarePri; // w28
  struct System_Boolean_array *isRareFlags; // x8
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42EAABD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, (_DWORD)commandCodeIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6, v7, v8);
    this = (ServantSellConfirmMenu_o *)sub_B5D5C4(
                                         &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                         v9,
                                         v10,
                                         v11);
    byte_42EAABD = 1;
  }
  if ( v5->fields.kind <= 4u )
  {
    if ( !commandCodeIds )
LABEL_19:
      sub_B5D69C(this, commandCodeIds);
    servantTypeFlags = *(struct System_Boolean_array **)&commandCodeIds->max_length;
    if ( (int)servantTypeFlags >= 1 )
    {
      v13 = 0LL;
      while ( v13 < (unsigned int)servantTypeFlags )
      {
        v14 = commandCodeIds->m_Items[v13];
        this = (ServantSellConfirmMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
        if ( !this )
          goto LABEL_19;
        this = (ServantSellConfirmMenu_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                             v14,
                                             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_19;
        getQP = v5->fields.getQP;
        v16 = (UserCommandCodeEntity_o *)this;
        SellQp = UserCommandCodeEntity__GetSellQp((UserCommandCodeEntity_o *)this, 0LL);
        getMana = v5->fields.getMana;
        v5->fields.getQP = SellQp + getQP;
        SellMana = UserCommandCodeEntity__GetSellMana(v16, 0LL);
        getRarePri = v5->fields.getRarePri;
        v5->fields.getMana = SellMana + getMana;
        v5->fields.getRarePri = UserCommandCodeEntity__GetSellRarePri(v16, 0LL) + getRarePri;
        this = (ServantSellConfirmMenu_o *)UserCommandCodeEntity__GetRarity(v16, 0LL);
        if ( (int)this >= 3 )
        {
          isRareFlags = v5->fields.isRareFlags;
          if ( !isRareFlags )
            goto LABEL_19;
          if ( isRareFlags->max_length <= 2 )
            break;
          isRareFlags->m_Items[6] = 1;
        }
        servantTypeFlags = v5->fields.servantTypeFlags;
        if ( !servantTypeFlags )
          goto LABEL_19;
        if ( servantTypeFlags->max_length <= 2 )
          break;
        servantTypeFlags->m_Items[6] = 1;
        LODWORD(servantTypeFlags) = commandCodeIds->max_length;
        if ( (__int64)++v13 >= (int)servantTypeFlags )
          return;
      }
      v22 = sub_B5D6C8(this);
      sub_B5D668(v22, 0LL);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
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
  struct System_Boolean_array *v32; // x0
  struct System_Boolean_array **p_servantTypeFlags; // x27
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Boolean_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x26
  __int64 v50; // x8
  unsigned __int64 v51; // x22
  UserServantEntity_o *v52; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x28
  __int64 v54; // x19
  __int64 v55; // x20
  WarEntity_o *v56; // x0
  int32_t getQP; // w19
  WarEntity_o *v58; // x28
  int32_t SellQp; // w0
  int32_t getMana; // w20
  int32_t SellMana; // w0
  int32_t getRarePri; // w19
  int32_t SellRarePri; // w0
  int32_t kind; // w8
  int v65; // w21
  struct System_Boolean_array *v66; // x8
  unsigned int max_length; // w9
  struct System_Boolean_array *v68; // x8
  int64_t UserId; // x0
  struct System_String_o *age; // x20
  __int64 v71; // x25
  int64_t v72; // x19
  bool v73; // w8
  struct System_Boolean_array *v74; // x8
  __int64 v75; // x0
  struct System_Boolean_array **p_isRareFlags; // [xsp+0h] [xbp-90h]
  System_Int64_array *v80; // [xsp+20h] [xbp-70h]
  UserServantCommandCodeMaster_o *v81; // [xsp+28h] [xbp-68h]
  int64_t *m_Items; // [xsp+30h] [xbp-60h]
  UserServantCommandCodeEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  v6 = servantIds;
  if ( (byte_42EAABC & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)servantIds, (_DWORD)isMaterial, isExceeded);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42EAABC = 1;
  }
  entity = 0LL;
  *isMaterial = 0;
  *isExceeded = 0;
  *isEquipedCommandCode = 0;
  if ( this->fields.kind <= 4u )
  {
    v32 = (struct System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, 3LL);
    p_servantTypeFlags = &this->fields.servantTypeFlags;
    this->fields.servantTypeFlags = v32;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.servantTypeFlags,
      (System_Int32_array **)v32,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v40 = (struct System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, 3LL);
    this->fields.isRareFlags = v40;
    p_isRareFlags = &this->fields.isRareFlags;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.isRareFlags,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v81 = (UserServantCommandCodeMaster_o *)Instance,
          !v6) )
    {
LABEL_52:
      sub_B5D69C(Instance, v48);
    }
    v50 = *(_QWORD *)&v6->max_length;
    if ( (int)v50 >= 1 )
    {
      v51 = 0LL;
      m_Items = v6->m_Items;
      v80 = v6;
      while ( v51 < (unsigned int)v50 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_52;
        v52 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                MasterData_WarQuestSelectionMaster,
                m_Items[v51],
                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_52;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v52 )
          goto LABEL_52;
        v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
        v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v84.fields.currentCryptoKey = v55;
        *(_QWORD *)&v84.fields.fakeValue = v54;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v84, 0LL);
        if ( !v53 )
          goto LABEL_52;
        v56 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v53,
                (int32_t)Instance,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        getQP = this->fields.getQP;
        v58 = v56;
        SellQp = UserServantEntity__getSellQp(v52, 0LL);
        getMana = this->fields.getMana;
        this->fields.getQP = SellQp + getQP;
        SellMana = UserServantEntity__getSellMana(v52, 0LL);
        getRarePri = this->fields.getRarePri;
        this->fields.getMana = SellMana + getMana;
        SellRarePri = UserServantEntity__getSellRarePri(v52, 0LL);
        kind = this->fields.kind;
        this->fields.getRarePri = SellRarePri + getRarePri;
        if ( kind == 2 && UserServantEntity__isExceeded(v52, 0LL) )
          *isExceeded = 1;
        Instance = (DataManager_o *)UserServantEntity__getRarity(v52, 0LL);
        if ( !v58 )
          goto LABEL_52;
        v65 = (int)Instance;
        Instance = (DataManager_o *)ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)v58, 0LL);
        v66 = *p_servantTypeFlags;
        if ( !*p_servantTypeFlags )
          goto LABEL_52;
        max_length = v66->max_length;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( max_length <= 1 )
            break;
          v66->m_Items[5] = 1;
          if ( v65 >= 4 )
          {
            v68 = *p_isRareFlags;
            if ( !*p_isRareFlags )
              goto LABEL_52;
            if ( v68->max_length <= 1 )
              break;
            v68->m_Items[5] = 1;
          }
        }
        else
        {
          if ( !max_length )
            break;
          v66->m_Items[4] = 1;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          v71 = *(_QWORD *)&v58->fields.id;
          age = v58->fields.age;
          v72 = UserId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v85.fields.currentCryptoKey = v71;
          *(_QWORD *)&v85.fields.fakeValue = age;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v85, 0LL);
          if ( !v81 )
            goto LABEL_52;
          Instance = (DataManager_o *)UserServantCommandCodeMaster__TryGetEntity(v81, &entity, v72, (int)Instance, 0LL);
          v6 = v80;
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              goto LABEL_52;
            Instance = (DataManager_o *)UserServantCommandCodeEntity__IsEquipedCommandCode(entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v73 = 1;
            }
            else
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_52;
              Instance = (DataManager_o *)UserServantCommandCodeEntity__IsCommandCardSlotOpen(entity, 0LL);
              v73 = (unsigned __int8)Instance & 1;
            }
            *isEquipedCommandCode = v73;
          }
          if ( v65 >= 4 )
          {
            Instance = (DataManager_o *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v58, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0
              || (Instance = (DataManager_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)v58, 0LL),
                  ((unsigned __int8)Instance & 1) != 0) )
            {
              *isMaterial = 1;
            }
            else
            {
              v74 = *p_isRareFlags;
              if ( !*p_isRareFlags )
                goto LABEL_52;
              if ( !v74->max_length )
                break;
              v74->m_Items[4] = 1;
            }
          }
        }
        LODWORD(v50) = v6->max_length;
        if ( (__int64)++v51 >= (int)v50 )
          return;
      }
      v75 = sub_B5D6C8(Instance);
      sub_B5D668(v75, 0LL);
    }
  }
}


void __fastcall ServantSellConfirmMenu__SetMessageText(
        ServantSellConfirmMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantSellConfirmMenu_o *v5; // x19
  UILabel_o *messageLabel; // x21
  bool IsBoth; // w0
  const MethodInfo *v8; // x3
  System_String_o *MessageText; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v13; // x1
  float v14; // s0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t qp; // w20
  __int64 v17; // x9
  _BOOL4 v18; // w20

  v5 = this;
  if ( (byte_42EAAC0 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, kind, (_DWORD)method, v3);
    byte_42EAAC0 = 1;
  }
  messageLabel = v5->fields.messageLabel;
  IsBoth = ServantSellConfirmMenu__IsBoth(this, v5->fields.servantTypeFlags, method);
  MessageText = ServantSellConfirmMenu__GetMessageText(v5, kind, IsBoth, v8);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, MessageText, 0LL);
  if ( (unsigned int)kind <= 0xD )
  {
    if ( ((1 << kind) & 0x3F00) != 0 )
    {
      v13 = v5->fields.messageLabel;
      v14 = 8.0;
    }
    else
    {
      if ( ((1 << kind) & 0x1F) != 0 )
      {
        MessageText = (System_String_o *)v5->fields.messageLabel;
        if ( MessageText )
        {
          UILabel__set_fontSize((UILabel_o *)MessageText, v5->fields.SELL_SELECT_LABEL_FONT_SIZE, 0LL);
          MessageText = (System_String_o *)v5->fields.messageLabel;
          if ( MessageText )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MessageText, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, -68.0, 0LL);
            return;
          }
        }
LABEL_21:
        sub_B5D69C(MessageText, v10);
      }
      userGameEntity = v5->fields.userGameEntity;
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
      if ( !v5->fields.messageLabel )
        goto LABEL_21;
      v17 = 92LL;
      if ( qp < *(_DWORD *)(*(_QWORD *)&MessageText[7].fields + 4LL) )
        v17 = 88LL;
      v18 = qp >= *(_DWORD *)(*(_QWORD *)&MessageText[7].fields + 4LL);
      UILabel__set_fontSize(v5->fields.messageLabel, *(_DWORD *)((char *)&v5->klass + v17), 0LL);
      v14 = flt_32A5138[v18];
      v13 = v5->fields.messageLabel;
    }
    ServantSellConfirmMenu__SetLabelLocalPositionY((ServantSellConfirmMenu_o *)MessageText, v13, v14, v11);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
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
  UILabel_o *QpLabel; // x23
  System_String_o *v30; // x0
  __int64 v31; // x1
  UILabel_o *QpNumLabel; // x23
  System_String_o *v33; // x24
  Il2CppObject *v34; // x0
  UILabel_o *ManaLabel; // x22
  UILabel_o *ManaNumLabel; // x22
  System_String_o *v37; // x23
  Il2CppObject *v38; // x0
  UILabel_o *RareLabel; // x21
  UILabel_o *RareNumLabel; // x21
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  UILabel_o *RareLabel2; // x20
  const MethodInfo *v44; // x4
  float NumLabelWidth; // s0
  float v46; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v48; // s0
  float v49; // s8
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s11
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  float v54; // s0
  float v55; // s8
  UnityEngine_GameObject_o *v56; // x0
  float v57; // s11
  float v58; // s8
  UnityEngine_GameObject_o *v59; // x0
  float v60; // s0
  float v61; // s8
  UnityEngine_GameObject_o *v62; // x0
  float v63; // s11
  UnityEngine_GameObject_o *v64; // x0
  int32_t v65; // [xsp+8h] [xbp-78h] BYREF
  int32_t v66; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v67; // [xsp+10h] [xbp-70h] BYREF
  float rarePriWidth; // [xsp+14h] [xbp-6Ch] BYREF
  float manaWidth[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_42EAABF & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, getQp, *(_QWORD *)&getMana);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11911/*"SERVANT_SELL_NUM_TEXT"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11914/*"SERVANT_SELL_QP_TEXT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11916/*"SERVANT_SELL_RARE_TEXT2"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_11907/*"SERVANT_SELL_MANA_TEXT"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11915/*"SERVANT_SELL_RARE_TEXT"*/, v26, v27, v28);
    byte_42EAABF = 1;
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
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SERVANT_SELL_QP_TEXT"*/, 0LL);
    if ( !QpLabel )
      goto LABEL_29;
    UILabel__set_text(QpLabel, v30, 0LL);
    QpNumLabel = this->fields.QpNumLabel;
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v67 = getQp;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    v30 = System_String__Format(v33, v34, 0LL);
    if ( !QpNumLabel )
      goto LABEL_29;
    UILabel__set_text(QpNumLabel, v30, 0LL);
    v30 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v30 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v30, this->fields.QP_NUM_LABEL_SIZE, 0LL);
    ManaLabel = this->fields.ManaLabel;
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_SELL_MANA_TEXT"*/, 0LL);
    if ( !ManaLabel )
      goto LABEL_29;
    UILabel__set_text(ManaLabel, v30, 0LL);
    ManaNumLabel = this->fields.ManaNumLabel;
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v66 = getMana;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
    v30 = System_String__Format(v37, v38, 0LL);
    if ( !ManaNumLabel )
      goto LABEL_29;
    UILabel__set_text(ManaNumLabel, v30, 0LL);
    v30 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v30 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v30, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel = this->fields.RareLabel;
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11915/*"SERVANT_SELL_RARE_TEXT"*/, 0LL);
    if ( !RareLabel )
      goto LABEL_29;
    UILabel__set_text(RareLabel, v30, 0LL);
    RareNumLabel = this->fields.RareNumLabel;
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_SELL_NUM_TEXT"*/, 0LL);
    v65 = getRarePri;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
    v30 = System_String__Format(v41, v42, 0LL);
    if ( !RareNumLabel )
      goto LABEL_29;
    UILabel__set_text(RareNumLabel, v30, 0LL);
    v30 = (System_String_o *)this->fields.RareNumLabel;
    if ( !v30 )
      goto LABEL_29;
    UILabel__SetCondensedScale((UILabel_o *)v30, this->fields.PRI_NUM_LABEL_SIZE, 0LL);
    RareLabel2 = this->fields.RareLabel2;
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SERVANT_SELL_RARE_TEXT2"*/, 0LL);
    if ( !RareLabel2 )
      goto LABEL_29;
    UILabel__set_text(RareLabel2, v30, 0LL);
    NumLabelWidth = ServantSellConfirmMenu__GetNumLabelWidth(this, &manaWidth[1], manaWidth, &rarePriWidth, v44);
    v30 = (System_String_o *)this->fields.QpLabel;
    if ( !v30 )
      goto LABEL_29;
    v46 = (float)(NumLabelWidth * -0.5) + 250.0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, v46, 0LL);
    v30 = (System_String_o *)this->fields.QpLabel;
    if ( !v30 )
      goto LABEL_29;
    LODWORD(v48) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v30, 0LL);
    v30 = (System_String_o *)this->fields.QpNumLabel;
    if ( !v30 )
      goto LABEL_29;
    v49 = v46 + v48;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    v51 = manaWidth[1];
    GameObjectExtensions__SetLocalPositionX(v50, (float)(v49 + -250.0) + (float)(manaWidth[1] * 0.5), 0LL);
    v30 = (System_String_o *)this->fields.ManaLabel;
    if ( !v30 )
      goto LABEL_29;
    v52 = v49 + v51;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    GameObjectExtensions__SetLocalPositionX(v53, v52, 0LL);
    v30 = (System_String_o *)this->fields.ManaLabel;
    if ( !v30 )
      goto LABEL_29;
    LODWORD(v54) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v30, 0LL);
    v30 = (System_String_o *)this->fields.ManaNumLabel;
    if ( !v30 )
      goto LABEL_29;
    v55 = v52 + v54;
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    v57 = manaWidth[0];
    GameObjectExtensions__SetLocalPositionX(v56, (float)(v55 + -250.0) + (float)(manaWidth[0] * 0.5), 0LL);
    v30 = (System_String_o *)this->fields.RareLabel;
    if ( !v30 )
      goto LABEL_29;
    v58 = v55 + v57;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    GameObjectExtensions__SetLocalPositionX(v59, v58, 0LL);
    v30 = (System_String_o *)this->fields.RareLabel;
    if ( !v30
      || (LODWORD(v60) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v30, 0LL),
          (v30 = (System_String_o *)this->fields.RareNumLabel) == 0LL)
      || (v61 = v58 + v60,
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL),
          v63 = rarePriWidth,
          GameObjectExtensions__SetLocalPositionX(v62, (float)(v61 + -250.0) + (float)(rarePriWidth * 0.5), 0LL),
          (v30 = (System_String_o *)this->fields.RareLabel2) == 0LL) )
    {
LABEL_29:
      sub_B5D69C(v30, v31);
    }
    v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
    GameObjectExtensions__SetLocalPositionX(v64, v61 + v63, 0LL);
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
    sub_B5D69C(IsOnlyCloseButton, v5);
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
    sub_B5D69C(0LL, v10);
  UILabel__set_text(warningLabel, WarningText, 0LL);
}


void __fastcall ServantSellConfirmMenu__TextClear(ServantSellConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EAAB7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EAAB7 = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall ServantSellConfirmMenu__TransitionToCombineScene(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EAAC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAAC8 = 1;
  }
  this->fields.state = 3;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
}


bool __fastcall ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(
        ServantSellConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantSellConfirmMenu_o *v4; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8

  v4 = this;
  if ( (byte_42EAAB5 & 1) == 0 )
  {
    this = (ServantSellConfirmMenu_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_long__get_Count__,
                                         (_DWORD)method,
                                         v2,
                                         v3);
    byte_42EAAB5 = 1;
  }
  lastSvtCommandCodeList = v4->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B5D69C(this, method);
  return lastSvtCommandCodeList->fields._size > 0;
}


void __fastcall ServantSellConfirmMenu___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantSellConfirmMenu___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D8E & 1) == 0 )
  {
    sub_B5D5C4(&ServantSellConfirmMenu___c_TypeInfo, v1, v2, v3);
    byte_42E5D8E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantSellConfirmMenu___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantSellConfirmMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantSellConfirmMenu___c_o *)v4;
  sub_B5D560(static_fields);
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