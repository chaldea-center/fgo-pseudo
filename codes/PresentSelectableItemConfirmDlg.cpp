void PresentSelectableItemConfirmDlg___ctor(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F46B & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596F46B = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentSelectableItemConfirmDlg__Close(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableItemConfirmDlg__Close_47133424(this, 0, v2);
}


void PresentSelectableItemConfirmDlg__Close_47133424(
        PresentSelectableItemConfirmDlg_o *this,
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

  if ( (byte_596F467 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentSelectableItemConfirmDlg_EndClose__);
    byte_596F467 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PresentSelectableItemConfirmDlg__EndClose(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PresentSelectableItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void PresentSelectableItemConfirmDlg__EndOpen(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PresentSelectableItemConfirmDlg__Init(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemSelectEntity, 0, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentSelectableItemConfirmDlg__OnClickCancel(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_596F469 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentSelectableItemConfirmDlg_OnClickCancel__);
    sub_2213A60(&Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__);
    byte_596F469 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableItemConfirmDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentSelectableItemConfirmDlg_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PresentSelectableItemConfirmDlg_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, 0);
    PresentSelectableItemConfirmDlg__Close_47133424(this, v5, v6);
  }
}


void PresentSelectableItemConfirmDlg__OnClickDecide(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_596F468 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentSelectableItemConfirmDlg_OnClickDecide__);
    sub_2213A60(&Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__);
    byte_596F468 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableItemConfirmDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentSelectableItemConfirmDlg_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PresentSelectableItemConfirmDlg_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, 0);
    PresentSelectableItemConfirmDlg__Close_47133424(this, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void PresentSelectableItemConfirmDlg__Open(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *TitleLabel; // x24
  UILabel_o *DetailLabel; // x24
  UILabel_o *priceNumLabel; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  BalanceConfig_c *v30; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v32; // x21
  __int64 *v33; // x8
  const MethodInfo *v34; // x5
  System_Action_o *v35; // x20

  if ( (byte_596F466 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PresentSelectableItemConfirmDlg_EndOpen__);
    sub_2213A60(&StringLiteral_10879/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/);
    sub_2213A60(&StringLiteral_10899/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/);
    sub_2213A60(&StringLiteral_10878/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/);
    sub_2213A60(&StringLiteral_10898/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/);
    byte_596F466 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)itemEnt,
      *(System_String_o **)&itemHold,
      (int32_t)ticketEnt,
      ticketsHave,
      (bool)callback,
      btnSpriteId);
    this->fields.itemSelectEntity = entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.itemSelectEntity,
      (int32_t)entity,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    TitleLabel = this->fields.TitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10879/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, 0);
    if ( !TitleLabel )
      goto LABEL_32;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10878/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, 0);
    if ( !DetailLabel )
      goto LABEL_32;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0);
    if ( !ticketEnt )
      goto LABEL_32;
    gameObject = (UnityEngine_GameObject_o *)this->fields.priceDataLabel;
    if ( !gameObject )
      goto LABEL_32;
    UILabel__set_text((UILabel_o *)gameObject, ticketEnt->fields.name, 0);
    if ( !entity )
      goto LABEL_32;
    priceNumLabel = this->fields.priceNumLabel;
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)entity + 28, 0);
    if ( !priceNumLabel )
      goto LABEL_32;
    UILabel__set_text(priceNumLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ticketIcon;
    if ( !gameObject )
      goto LABEL_32;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, ticketEnt->fields.imageId, 0);
    v30 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28, v29);
      v30 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v30->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v32 = this->fields.DetailLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      v33 = &StringLiteral_10898/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( !*(&v30->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v30, v28, v29);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( UserItemMax > itemHold )
      {
        v22 = 0;
LABEL_29:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            v22,
            1,
            gameObject->klass[1]._1.implementedInterfaces);
          gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfo;
          if ( gameObject )
          {
            PresentSelectableItemComponent__setItemInfo(
              (PresentSelectableItemComponent_o *)gameObject,
              this->fields.itemSelectEntity,
              ticketsHave,
              0,
              0,
              v34);
            this->fields.state = 1;
            v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v35, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
            return;
          }
        }
LABEL_32:
        sub_2213CDC(gameObject, v22);
      }
      v32 = this->fields.DetailLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
      v33 = &StringLiteral_10899/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v33, 0);
    if ( !v32 )
      goto LABEL_32;
    UILabel__set_text(v32, (System_String_o *)gameObject, 0);
    v22 = 3;
    goto LABEL_29;
  }
}


void PresentSelectableItemConfirmDlg___OnClickCancel_b__26_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    0,
    callbackFunc->fields.method);
}


void PresentSelectableItemConfirmDlg___OnClickDecide_b__25_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    1,
    callbackFunc->fields.method);
}


void PresentSelectableItemConfirmDlg__add_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PresentSelectableItemConfirmDlg_o *v13; // x0
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596F464 & 1) == 0 )
  {
    sub_2213A60(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_596F464 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, v9, v10);
  PresentSelectableItemConfirmDlg__remove_callbackFunc(v13, v14, v15);
}


UnityEngine_GameObject_o *PresentSelectableItemConfirmDlg__get_closeBtnObject(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596F46A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F46A = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void PresentSelectableItemConfirmDlg__remove_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PresentSelectableItemConfirmDlg_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596F465 & 1) == 0 )
  {
    sub_2213A60(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_596F465 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, v9, v10);
  PresentSelectableItemConfirmDlg__Init(v13, v14);
}


void PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200BEAC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200BE64;
}


System_IAsyncResult_o *PresentSelectableItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void PresentSelectableItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}