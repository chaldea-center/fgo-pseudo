void ScriptSelectListViewItemDraw___ctor(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptSelectListViewItemDraw__EndMove(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ScriptSelectListViewItemDraw__EndSelectDecideMove1(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_4CF066F & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_6036/*"EndSelectDecideMove2"*/);
    byte_4CF066F = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_1C7BD40(0, method);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0);
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6036/*"EndSelectDecideMove2"*/, 0.5, 0);
}


void ScriptSelectListViewItemDraw__EndSelectDecideMove2(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CF0670 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_6018/*"EndMove"*/);
    byte_4CF0670 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0)) == 0)
    || (LODWORD(baseSprite[1].monitor) = 6, (baseSprite = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
  {
    sub_1C7BD40(baseSprite, method);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6018/*"EndMove"*/, 0.6, 0);
}


void ScriptSelectListViewItemDraw__NoSelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CF066D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&StringLiteral_6018/*"EndMove"*/);
    byte_4CF066D = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_10;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0);
  baseButton = this->fields.baseButton;
  if ( !baseButton
    || (baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)baseButton,
                                            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0)) == 0)
    || (LODWORD(baseButton->fields.tweenTarget) = 6, (baseButton = this->fields.baseButton) == 0) )
  {
LABEL_10:
    sub_1C7BD40(baseButton, v10);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6018/*"EndMove"*/, 0.5, 0);
}


void ScriptSelectListViewItemDraw__SelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  UIMessageButton_o *baseButton; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  struct ScriptLineMessage_o *effectMessageManager; // x20
  System_String_o *message; // x21
  System_String_o *v16; // x22

  if ( (byte_4CF066E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ScriptMessageLabel_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6035/*"EndSelectDecideMove1"*/);
    sub_1C7BAE8(&StringLiteral_11552/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4CF066E = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)baseButton,
                                      (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !baseButton )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0);
  if ( this->fields.message )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0);
    effectMessageManager = this->fields.effectMessageManager;
    message = this->fields.message;
    v16 = v12;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    baseButton = (UIMessageButton_o *)ScriptMessageLabel__IsExistColorTag(message, v13);
    if ( ((unsigned __int8)baseButton & 1) != 0
      || (baseButton = (UIMessageButton_o *)System_String__IsNullOrEmpty(v16, 0), ((unsigned __int8)baseButton & 1) != 0) )
    {
      v16 = 0;
    }
    if ( effectMessageManager )
    {
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, const MethodInfo *))effectMessageManager->klass->vtable._7_SetText.methodPtr)(
        effectMessageManager,
        message,
        v16,
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
    sub_1C7BD40(baseButton, v10);
  }
LABEL_17:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6035/*"EndSelectDecideMove1"*/, 0.1, 0);
}


void ScriptSelectListViewItemDraw__SetItem(
        ScriptSelectListViewItemDraw_o *this,
        ScriptSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_String_o *v19; // x0
  const MethodInfo *v20; // x1
  struct ScriptLineMessage_o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  ScriptLineMessage_o *messageManager; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4CF066C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ScriptMessageLabel_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11552/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4CF066C = 1;
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
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.message, 0, v25, v26, v27, v28, v29, v30);
        this->fields.font = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.font, 0, v31, v32, v33, v34, v35, v36);
        return;
      }
    }
    goto LABEL_23;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.message,
    (int32_t)message,
    mode,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  fontType = item->fields.fontType;
  this->fields.font = fontType;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.font, (int32_t)fontType, v13, v14, v15, v16, v17, v18);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11552/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0);
      v21 = this->fields.messageManager;
      v22 = this->fields.message;
      v23 = v19;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v22, v20);
      if ( ((unsigned __int8)messageManager & 1) != 0
        || (messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v23, 0),
            ((unsigned __int8)messageManager & 1) != 0) )
      {
        v23 = 0;
      }
      if ( !v21 )
        goto LABEL_23;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, const MethodInfo *))v21->klass->vtable._7_SetText.methodPtr)(
        v21,
        v22,
        v23,
        this->fields.font,
        1,
        0,
        v21->klass->vtable._7_SetText.method);
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
    sub_1C7BD40(messageManager, item);
  }
}