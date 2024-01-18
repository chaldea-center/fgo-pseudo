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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove1(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_418D3AF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5980/*"EndSelectDecideMove2"*/, method);
    byte_418D3AF = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_B2C434(0LL, method);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5980/*"EndSelectDecideMove2"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove2(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_418D3B0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5963/*"EndMove"*/, method);
    byte_418D3B0 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0LL),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseSprite[1].klass) = 6, (baseSprite = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
  {
    sub_B2C434(baseSprite, method);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5963/*"EndMove"*/,
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
  __int64 v11; // x1
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_418D3AD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, callback);
    sub_B2C35C(&StringLiteral_5963/*"EndMove"*/, v10);
    byte_418D3AD = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
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
                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0LL),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseButton->fields.tweenTarget) = 6, (baseButton = this->fields.baseButton) == 0LL) )
  {
LABEL_10:
    sub_B2C434(baseButton, v11);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5963/*"EndMove"*/,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UIMessageButton_o *baseButton; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  struct ScriptLineMessage_o *effectMessageManager; // x20
  System_String_o *message; // x21
  System_String_o *v20; // x22

  if ( (byte_418D3AE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, callback);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_5979/*"EndSelectDecideMove1"*/, v12);
    sub_B2C35C(&StringLiteral_11603/*"SCRIPT_ACTION_SELECT_COLOR"*/, v13);
    byte_418D3AE = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
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
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11603/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
    effectMessageManager = this->fields.effectMessageManager;
    message = this->fields.message;
    v20 = v16;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    baseButton = (UIMessageButton_o *)ScriptMessageLabel__IsExistColorTag(message, v17);
    if ( ((unsigned __int8)baseButton & 1) != 0
      || (baseButton = (UIMessageButton_o *)System_String__IsNullOrEmpty(v20, 0LL),
          ((unsigned __int8)baseButton & 1) != 0) )
    {
      v20 = 0LL;
    }
    if ( effectMessageManager )
    {
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))effectMessageManager->klass->vtable._7_SetText.method)(
        effectMessageManager,
        message,
        v20,
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
    sub_B2C434(baseButton, v14);
  }
LABEL_19:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5979/*"EndSelectDecideMove1"*/,
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
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  struct ScriptLineMessage_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  ScriptLineMessage_o *messageManager; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_418D3AC & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_11603/*"SCRIPT_ACTION_SELECT_COLOR"*/, v12);
    byte_418D3AC = 1;
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
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.message, 0LL, v27, v28, v29, v30, v31, v32);
        this->fields.font = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.font, 0LL, v33, v34, v35, v36, v37, v38);
        return;
      }
    }
    goto LABEL_25;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.font,
    (System_Int32_array **)fontType,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11603/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
      v23 = this->fields.messageManager;
      v24 = this->fields.message;
      v25 = v21;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v24, v22);
      if ( ((unsigned __int8)messageManager & 1) != 0
        || (messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v25, 0LL),
            ((unsigned __int8)messageManager & 1) != 0) )
      {
        v25 = 0LL;
      }
      if ( !v23 )
        goto LABEL_25;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))v23->klass->vtable._7_SetText.method)(
        v23,
        v24,
        v25,
        this->fields.font,
        1LL,
        0LL,
        v23->klass[1]._1.image);
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
    sub_B2C434(messageManager, item);
  }
}