void __fastcall PresentSelectableItemConfirmDlg___ctor(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187A52 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187A52 = 1;
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

  PresentSelectableItemConfirmDlg__Close_25199072(this, 0LL, v2);
}


void __fastcall PresentSelectableItemConfirmDlg__Close_25199072(
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
  System_Action_o *v11; // x20

  if ( (byte_4187A4E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PresentSelectableItemConfirmDlg_EndClose__, v10);
    byte_4187A4E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__EndClose(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PresentSelectableItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.itemSelectEntity, 0LL, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__OnClickCancel(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4187A50 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4187A50 = 1;
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
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, 0LL);
    PresentSelectableItemConfirmDlg__Close_25199072(this, v5, v6);
  }
}


void __fastcall PresentSelectableItemConfirmDlg__OnClickDecide(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4187A4F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4187A4F = 1;
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
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, 0LL);
    PresentSelectableItemConfirmDlg__Close_25199072(this, v5, v6);
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
  __int64 v29; // x1
  UILabel_o *TitleLabel; // x24
  UILabel_o *DetailLabel; // x24
  UILabel_o *priceNumLabel; // x24
  BalanceConfig_c *v33; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v35; // x21
  __int64 *v36; // x8
  const MethodInfo *v37; // x5
  System_Action_o *v38; // x20

  if ( (byte_4187A4D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entity);
    sub_B2C35C(&BalanceConfig_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_PresentSelectableItemConfirmDlg_EndOpen__, v17);
    sub_B2C35C(&StringLiteral_10502/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, v18);
    sub_B2C35C(&StringLiteral_10522/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/, v19);
    sub_B2C35C(&StringLiteral_10501/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, v20);
    sub_B2C35C(&StringLiteral_10521/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/, v21);
    byte_4187A4D = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)itemEnt,
      *(System_String_array ***)&itemHold,
      (System_Boolean_array **)ticketEnt,
      *(System_Int32_array ***)&ticketsHave,
      (System_Int32_array *)callback,
      *(System_Int32_array **)&btnSpriteId);
    this->fields.itemSelectEntity = entity;
    sub_B2C2F8(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10502/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, 0LL);
    if ( !TitleLabel )
      goto LABEL_37;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0LL);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10501/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, 0LL);
    if ( !DetailLabel )
      goto LABEL_37;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0LL);
    if ( !ticketEnt )
      goto LABEL_37;
    gameObject = (UnityEngine_GameObject_o *)this->fields.priceDataLabel;
    if ( !gameObject )
      goto LABEL_37;
    UILabel__set_text((UILabel_o *)gameObject, ticketEnt->fields.name, 0LL);
    if ( !entity )
      goto LABEL_37;
    priceNumLabel = this->fields.priceNumLabel;
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)entity + 28, 0LL);
    if ( !priceNumLabel )
      goto LABEL_37;
    UILabel__set_text(priceNumLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ticketIcon;
    if ( !gameObject )
      goto LABEL_37;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, ticketEnt->fields.imageId, 0LL);
    v33 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v33->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v35 = this->fields.DetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_10521/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( itemHold + 1 <= UserItemMax )
      {
        v29 = 0LL;
LABEL_34:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v29,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfo;
          if ( gameObject )
          {
            PresentSelectableItemComponent__setItemInfo(
              (PresentSelectableItemComponent_o *)gameObject,
              this->fields.itemSelectEntity,
              ticketsHave,
              0,
              0LL,
              v37);
            this->fields.state = 1;
            v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v38, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
            return;
          }
        }
LABEL_37:
        sub_B2C434(gameObject, v29);
      }
      v35 = this->fields.DetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_10522/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v36, 0LL);
    if ( !v35 )
      goto LABEL_37;
    UILabel__set_text(v35, (System_String_o *)gameObject, 0LL);
    v29 = 3LL;
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
    sub_B2C434(0LL, method);
  PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg___OnClickDecide_b__25_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B2C434(0LL, method);
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

  if ( (byte_4187A4B & 1) == 0 )
  {
    sub_B2C35C(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_4187A4B = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableItemConfirmDlg_o *)sub_B2C728(v8);
  PresentSelectableItemConfirmDlg__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableItemConfirmDlg__get_closeBtnObject(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4187A51 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187A51 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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

  if ( (byte_4187A4C & 1) == 0 )
  {
    sub_B2C35C(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_4187A4C = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableItemConfirmDlg_o *)sub_B2C728(v8);
  PresentSelectableItemConfirmDlg__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41852BC & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    byte_41852BC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PresentSelectableItemConfirmDlg_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PresentSelectableItemConfirmDlg_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}