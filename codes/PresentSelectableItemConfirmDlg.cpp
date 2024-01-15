void __fastcall PresentSelectableItemConfirmDlg___ctor(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA00C & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA00C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__Close(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableItemConfirmDlg__Close_25206940(this, 0LL, v2);
}


void __fastcall PresentSelectableItemConfirmDlg__Close_25206940(
        PresentSelectableItemConfirmDlg_o *this,
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

  if ( (byte_40FA008 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PresentSelectableItemConfirmDlg_EndClose__, v10);
    byte_40FA008 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__EndClose(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PresentSelectableItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall PresentSelectableItemConfirmDlg__EndOpen(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentSelectableItemConfirmDlg__Init(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemSelectEntity, 0LL, v4, v5, v6, v7, v8, v9);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__OnClickCancel(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA00A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA00A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, 0LL);
    PresentSelectableItemConfirmDlg__Close_25206940(this, v9, v10);
  }
}


void __fastcall PresentSelectableItemConfirmDlg__OnClickDecide(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA009 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA009 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, 0LL);
    PresentSelectableItemConfirmDlg__Close_25206940(this, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg__Open(
        PresentSelectableItemConfirmDlg_o *this,
        ItemSelectEntity_o *entity,
        ItemEntity_o *itemEnt,
        int32_t itemHold,
        ItemEntity_o *ticketEnt,
        int32_t ticketsHave,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *callback,
        int32_t btnSpriteId,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *TitleLabel; // x24
  System_String_o *v30; // x0
  UILabel_o *DetailLabel; // x24
  System_String_o *v32; // x0
  UILabel_o *priceDataLabel; // x0
  UILabel_o *priceNumLabel; // x24
  System_String_o *v35; // x0
  ItemIconComponent_o *ticketIcon; // x0
  BalanceConfig_c *v37; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v39; // x21
  __int64 *v40; // x8
  System_String_o *v41; // x0
  __int64 v42; // x1
  struct UICommonButton_o *decideButton; // x0
  const MethodInfo *v44; // x5
  PresentSelectableItemComponent_o *itemInfo; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x20

  if ( (byte_40FA007 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&BalanceConfig_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_PresentSelectableItemConfirmDlg_EndOpen__, v17);
    sub_B16FFC(&StringLiteral_10469/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, v18);
    sub_B16FFC(&StringLiteral_10489/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/, v19);
    sub_B16FFC(&StringLiteral_10468/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, v20);
    sub_B16FFC(&StringLiteral_10488/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/, v21);
    byte_40FA007 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)itemEnt,
      *(System_String_array ***)&itemHold,
      (System_Boolean_array **)ticketEnt,
      *(System_Int32_array ***)&ticketsHave,
      (System_Int32_array *)callback,
      *(System_Int32_array **)&btnSpriteId);
    this->fields.itemSelectEntity = entity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.itemSelectEntity,
      (System_Int32_array **)entity,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    TitleLabel = this->fields.TitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, 0LL);
    if ( !TitleLabel )
      goto LABEL_37;
    UILabel__set_text(TitleLabel, v30, 0LL);
    DetailLabel = this->fields.DetailLabel;
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10468/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, 0LL);
    if ( !DetailLabel )
      goto LABEL_37;
    UILabel__set_text(DetailLabel, v32, 0LL);
    if ( !ticketEnt )
      goto LABEL_37;
    priceDataLabel = this->fields.priceDataLabel;
    if ( !priceDataLabel )
      goto LABEL_37;
    UILabel__set_text(priceDataLabel, ticketEnt->fields.name, 0LL);
    if ( !entity )
      goto LABEL_37;
    priceNumLabel = this->fields.priceNumLabel;
    v35 = System_Int32__ToString((int)entity + 28, 0LL);
    if ( !priceNumLabel )
      goto LABEL_37;
    UILabel__set_text(priceNumLabel, v35, 0LL);
    ticketIcon = this->fields.ticketIcon;
    if ( !ticketIcon )
      goto LABEL_37;
    ItemIconComponent__SetItemImage(ticketIcon, ticketEnt->fields.imageId, 0LL);
    v37 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v37->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v39 = this->fields.DetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = &StringLiteral_10488/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( itemHold + 1 <= UserItemMax )
      {
        v42 = 0LL;
LABEL_34:
        decideButton = this->fields.decideButton;
        if ( decideButton )
        {
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
            decideButton,
            v42,
            1LL,
            decideButton->klass->vtable._15_OnPress.methodPtr);
          itemInfo = this->fields.itemInfo;
          if ( itemInfo )
          {
            PresentSelectableItemComponent__setItemInfo(
              itemInfo,
              this->fields.itemSelectEntity,
              ticketsHave,
              0,
              0LL,
              v44);
            this->fields.state = 1;
            v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
            System_Action___ctor(v50, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
            return;
          }
        }
LABEL_37:
        sub_B170D4();
      }
      v39 = this->fields.DetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = &StringLiteral_10489/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    v41 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
    if ( !v39 )
      goto LABEL_37;
    UILabel__set_text(v39, v41, 0LL);
    v42 = 3LL;
    goto LABEL_34;
  }
}


void __fastcall PresentSelectableItemConfirmDlg___OnClickCancel_b__26_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B170D4();
  PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg___OnClickDecide_b__25_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B170D4();
  PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 1, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__add_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableItemConfirmDlg_o *v11; // x0
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FA005 & 1) == 0 )
  {
    sub_B16FFC(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_40FA005 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableItemConfirmDlg_o *)sub_B173C8(v8);
  PresentSelectableItemConfirmDlg__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableItemConfirmDlg__get_closeBtnObject(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FA00B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA00B = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__remove_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableItemConfirmDlg_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FA006 & 1) == 0 )
  {
    sub_B16FFC(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_40FA006 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableItemConfirmDlg_o *)sub_B173C8(v8);
  PresentSelectableItemConfirmDlg__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PresentSelectableItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_40F83A6 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    byte_40F83A6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PresentSelectableItemConfirmDlg_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PresentSelectableItemConfirmDlg_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)result, v20);
    goto LABEL_37;
  }
}