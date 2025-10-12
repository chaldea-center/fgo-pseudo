void ScriptSelectListViewItemDraw___ctor(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptSelectListViewItemDraw__EndMove(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void ScriptSelectListViewItemDraw__EndSelectDecideMove1(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_4C399E9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6027/*"EndSelectDecideMove2"*/);
    byte_4C399E9 = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_1C32E7C(0);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0);
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6027/*"EndSelectDecideMove2"*/, 0.5, 0);
}


void ScriptSelectListViewItemDraw__EndSelectDecideMove2(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C399EA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6009/*"EndMove"*/);
    byte_4C399EA = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0)) == 0)
    || (LODWORD(baseSprite[1].monitor) = 6, (baseSprite = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
  {
    sub_1C32E7C(baseSprite);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6009/*"EndMove"*/, 0.6, 0);
}


void ScriptSelectListViewItemDraw__NoSelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C399E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&StringLiteral_6009/*"EndMove"*/);
    byte_4C399E7 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_10;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0);
  baseButton = this->fields.baseButton;
  if ( !baseButton
    || (baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)baseButton,
                                            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0)) == 0)
    || (LODWORD(baseButton->fields.tweenTarget) = 6, (baseButton = this->fields.baseButton) == 0) )
  {
LABEL_10:
    sub_1C32E7C(baseButton);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6009/*"EndMove"*/, 0.5, 0);
}


void ScriptSelectListViewItemDraw__SelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UIMessageButton_o *baseButton; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x1
  struct ScriptLineMessage_o *effectMessageManager; // x20
  System_String_o *message; // x21
  System_String_o *v11; // x22

  if ( (byte_4C399E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_6026/*"EndSelectDecideMove1"*/);
    sub_1C32C20(&StringLiteral_11501/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4C399E8 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)baseButton,
                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !baseButton )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0);
  if ( this->fields.message )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11501/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0);
    effectMessageManager = this->fields.effectMessageManager;
    message = this->fields.message;
    v11 = v7;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    baseButton = (UIMessageButton_o *)ScriptMessageLabel__IsExistColorTag(message, v8);
    if ( ((unsigned __int8)baseButton & 1) != 0
      || (baseButton = (UIMessageButton_o *)System_String__IsNullOrEmpty(v11, 0), ((unsigned __int8)baseButton & 1) != 0) )
    {
      v11 = 0;
    }
    if ( effectMessageManager )
    {
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, const MethodInfo *))effectMessageManager->klass->vtable._7_SetText.methodPtr)(
        effectMessageManager,
        message,
        v11,
        this->fields.font,
        1,
        0,
        effectMessageManager->klass->vtable._7_SetText.method);
      baseButton = (UIMessageButton_o *)this->fields.effectMessageManager;
      if ( baseButton )
      {
        ScriptLineMessage__EffectScale((ScriptLineMessage_o *)baseButton, 2.0, 0.3, 0);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_1C32E7C(baseButton);
  }
LABEL_17:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6026/*"EndSelectDecideMove1"*/, 0.1, 0);
}


void ScriptSelectListViewItemDraw__SetItem(
        ScriptSelectListViewItemDraw_o *this,
        ScriptSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  struct ScriptLineMessage_o *v13; // x21
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  ScriptLineMessage_o *messageManager; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C399E6 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&StringLiteral_11501/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4C399E6 = 1;
  }
  if ( !item )
  {
    messageManager = this->fields.messageManager;
    if ( messageManager )
    {
      ScriptLineMessage__DeleteLabels(messageManager, 0);
      messageManager = this->fields.effectMessageManager;
      if ( messageManager )
      {
        ScriptLineMessage__DeleteLabels(messageManager, 0);
        this->fields.message = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.message, 0, v17, v18);
        this->fields.font = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.font, 0, v19, v20);
        return;
      }
    }
    goto LABEL_23;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.message, (int32_t)message, mode, method);
  fontType = item->fields.fontType;
  this->fields.font = fontType;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.font, (int32_t)fontType, v9, v10);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11501/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0);
      v13 = this->fields.messageManager;
      v14 = this->fields.message;
      v15 = v11;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v14, v12);
      if ( ((unsigned __int8)messageManager & 1) != 0
        || (messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v15, 0),
            ((unsigned __int8)messageManager & 1) != 0) )
      {
        v15 = 0;
      }
      if ( !v13 )
        goto LABEL_23;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, const MethodInfo *))v13->klass->vtable._7_SetText.methodPtr)(
        v13,
        v14,
        v15,
        this->fields.font,
        1,
        0,
        v13->klass->vtable._7_SetText.method);
    }
    else
    {
      messageManager = this->fields.messageManager;
      if ( !messageManager )
        goto LABEL_23;
      ScriptLineMessage__DeleteLabels(messageManager, 0);
    }
    messageManager = this->fields.effectMessageManager;
    if ( messageManager )
    {
      ScriptLineMessage__DeleteLabels(messageManager, 0);
      return;
    }
LABEL_23:
    sub_1C32E7C(messageManager);
  }
}