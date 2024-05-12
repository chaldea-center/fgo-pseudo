void __fastcall ScriptSelectListViewItemDraw___ctor(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndMove(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove1(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_4390C72 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6128/*"EndSelectDecideMove2"*/);
    byte_4390C72 = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_B7769C(0LL, method);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6128/*"EndSelectDecideMove2"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove2(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4390C73 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6111/*"EndMove"*/);
    byte_4390C73 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0LL),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseSprite[1].klass) = 6, (baseSprite = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
  {
    sub_B7769C(baseSprite, method);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6111/*"EndMove"*/,
    0.6,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__NoSelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4390C70 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&StringLiteral_6111/*"EndMove"*/);
    byte_4390C70 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_10;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0LL);
  baseButton = this->fields.baseButton;
  if ( !baseButton
    || (baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)baseButton,
                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0LL),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseButton->fields.tweenTarget) = 6, (baseButton = this->fields.baseButton) == 0LL) )
  {
LABEL_10:
    sub_B7769C(baseButton, v10);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6111/*"EndMove"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__SelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UIMessageButton_o *baseButton; // x0
  System_String_o *v12; // x0
  struct ScriptLineMessage_o *effectMessageManager; // x20
  System_String_o *message; // x21
  System_String_o *v15; // x22

  if ( (byte_4390C71 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ScriptMessageLabel_TypeInfo);
    sub_B775C4(&StringLiteral_6127/*"EndSelectDecideMove1"*/);
    sub_B775C4(&StringLiteral_11819/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4390C71 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_20;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0LL);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_20;
  baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)baseButton,
                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !baseButton )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL);
  if ( this->fields.message )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11819/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
    effectMessageManager = this->fields.effectMessageManager;
    message = this->fields.message;
    v15 = v12;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    baseButton = (UIMessageButton_o *)ScriptMessageLabel__IsExistColorTag(message, 0LL);
    if ( ((unsigned __int8)baseButton & 1) != 0
      || (baseButton = (UIMessageButton_o *)System_String__IsNullOrEmpty(v15, 0LL),
          ((unsigned __int8)baseButton & 1) != 0) )
    {
      v15 = 0LL;
    }
    if ( effectMessageManager )
    {
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))effectMessageManager->klass->vtable._7_SetText.method)(
        effectMessageManager,
        message,
        v15,
        this->fields.font,
        1LL,
        0LL,
        effectMessageManager->klass[1]._1.image);
      baseButton = (UIMessageButton_o *)this->fields.effectMessageManager;
      if ( baseButton )
      {
        ScriptLineMessage__EffectScale((ScriptLineMessage_o *)baseButton, 2.0, 0.3, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_B7769C(baseButton, v10);
  }
LABEL_19:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6127/*"EndSelectDecideMove1"*/,
    0.1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewItemDraw__SetItem(
        ScriptSelectListViewItemDraw_o *this,
        ScriptSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_o *v19; // x0
  struct ScriptLineMessage_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  ScriptLineMessage_o *messageManager; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4390C6F & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ScriptMessageLabel_TypeInfo);
    sub_B775C4(&StringLiteral_11819/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4390C6F = 1;
  }
  if ( !item )
  {
    messageManager = this->fields.messageManager;
    if ( messageManager )
    {
      ScriptLineMessage__DeleteLabels(messageManager, 0LL);
      messageManager = this->fields.effectMessageManager;
      if ( messageManager )
      {
        ScriptLineMessage__DeleteLabels(messageManager, 0LL);
        this->fields.message = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.message, 0LL, v24, v25, v26, v27, v28, v29);
        this->fields.font = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.font, 0LL, v30, v31, v32, v33, v34, v35);
        return;
      }
    }
    goto LABEL_25;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.message,
    (System_Int32_array **)message,
    *(System_String_array ***)&mode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  fontType = item->fields.fontType;
  this->fields.font = fontType;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.font,
    (System_Int32_array **)fontType,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11819/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
      v20 = this->fields.messageManager;
      v21 = this->fields.message;
      v22 = v19;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v21, 0LL);
      if ( ((unsigned __int8)messageManager & 1) != 0
        || (messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v22, 0LL),
            ((unsigned __int8)messageManager & 1) != 0) )
      {
        v22 = 0LL;
      }
      if ( !v20 )
        goto LABEL_25;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))v20->klass->vtable._7_SetText.method)(
        v20,
        v21,
        v22,
        this->fields.font,
        1LL,
        0LL,
        v20->klass[1]._1.image);
    }
    else
    {
      messageManager = this->fields.messageManager;
      if ( !messageManager )
        goto LABEL_25;
      ScriptLineMessage__DeleteLabels(messageManager, 0LL);
    }
    messageManager = this->fields.effectMessageManager;
    if ( messageManager )
    {
      ScriptLineMessage__DeleteLabels(messageManager, 0LL);
      return;
    }
LABEL_25:
    sub_B7769C(messageManager, item);
  }
}