void ScriptSelectListViewItemDraw___ctor(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptSelectListViewItemDraw__EndMove(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ScriptSelectListViewItemDraw__EndSelectDecideMove1(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_5972901 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6285/*"EndSelectDecideMove2"*/);
    byte_5972901 = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_2213CDC(0, method);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0);
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6285/*"EndSelectDecideMove2"*/, 0.5, 0);
}


void ScriptSelectListViewItemDraw__EndSelectDecideMove2(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x8

  if ( (byte_5972902 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6264/*"EndMove"*/);
    byte_5972902 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0)) == 0)
    || (v5 = baseSprite,
        baseSprite = (UnityEngine_Component_o *)this->fields.baseButton,
        LODWORD(v5[1].monitor) = 6,
        !baseSprite) )
  {
    sub_2213CDC(baseSprite, method);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6264/*"EndMove"*/, 0.6, 0);
}


void ScriptSelectListViewItemDraw__NoSelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIMessageButton_o *v13; // x8

  if ( (byte_59728FF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&StringLiteral_6264/*"EndMove"*/);
    byte_59728FF = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
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
  if ( !baseButton )
    goto LABEL_10;
  baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)baseButton,
                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !baseButton
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0)) == 0)
    || (v13 = baseButton, baseButton = this->fields.baseButton, LODWORD(v13->fields.tweenTarget) = 6, !baseButton) )
  {
LABEL_10:
    sub_2213CDC(baseButton, v10);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6264/*"EndMove"*/, 0.5, 0);
}


void ScriptSelectListViewItemDraw__SelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UIMessageButton_o *baseButton; // x0
  __int64 v12; // x1
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  struct ScriptLineMessage_o *effectMessageManager; // x20
  System_String_o *v16; // x22
  System_String_o *message; // x21
  System_String_o *v18; // x2

  if ( (byte_5972900 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_6284/*"EndSelectDecideMove1"*/);
    sub_2213A60(&StringLiteral_12010/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_5972900 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_20;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_20;
  baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)baseButton,
                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !baseButton )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0);
  if ( this->fields.message )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12010/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0);
    effectMessageManager = this->fields.effectMessageManager;
    v16 = v13;
    message = this->fields.message;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v14);
    baseButton = (UIMessageButton_o *)ScriptMessageLabel__IsExistColorTag(message, v14);
    if ( ((unsigned __int8)baseButton & 1) != 0 )
    {
      v18 = 0;
    }
    else
    {
      baseButton = (UIMessageButton_o *)System_String__IsNullOrEmpty(v16, 0);
      if ( ((unsigned __int8)baseButton & 1) != 0 )
        v18 = 0;
      else
        v18 = v16;
    }
    if ( effectMessageManager )
    {
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, const MethodInfo *))effectMessageManager->klass->vtable._7_SetText.methodPtr)(
        effectMessageManager,
        message,
        v18,
        this->fields.font,
        1,
        0,
        effectMessageManager->klass->vtable._7_SetText.method);
      baseButton = (UIMessageButton_o *)this->fields.effectMessageManager;
      if ( baseButton )
      {
        ScriptLineMessage__EffectScale((ScriptLineMessage_o *)baseButton, 2.0, 0.3, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_2213CDC(baseButton, v10);
  }
LABEL_19:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6284/*"EndSelectDecideMove1"*/, 0.1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectListViewItemDraw__SetItem(
        ScriptSelectListViewItemDraw_o *this,
        ScriptSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  System_String_o *v20; // x23
  struct ScriptLineMessage_o *v21; // x21
  System_String_o *v22; // x22
  ScriptLineMessage_o *messageManager; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_59728FE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ScriptMessageLabel_TypeInfo);
    sub_2213A60(&StringLiteral_12010/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_59728FE = 1;
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.message, 0, v25, v26, v27, v28, v29, v30);
        this->fields.font = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.font, 0, v31, v32, v33, v34, v35, v36);
        return;
      }
    }
    goto LABEL_25;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.message,
    (int32_t)message,
    *(System_String_o **)&mode,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  fontType = item->fields.fontType;
  this->fields.font = fontType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.font, (int32_t)fontType, v13, v14, v15, v16, v17, v18);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12010/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0);
      v21 = this->fields.messageManager;
      v22 = this->fields.message;
      if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v19);
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v22, v19);
      if ( ((unsigned __int8)messageManager & 1) != 0 )
      {
        v24 = 0;
      }
      else
      {
        messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v20, 0);
        if ( ((unsigned __int8)messageManager & 1) != 0 )
          v24 = 0;
        else
          v24 = v20;
      }
      if ( !v21 )
        goto LABEL_25;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, const MethodInfo *))v21->klass->vtable._7_SetText.methodPtr)(
        v21,
        v22,
        v24,
        this->fields.font,
        1,
        0,
        v21->klass->vtable._7_SetText.method);
    }
    else
    {
      messageManager = this->fields.messageManager;
      if ( !messageManager )
        goto LABEL_25;
      ScriptLineMessage__DeleteLabels(messageManager, 0);
    }
    messageManager = this->fields.effectMessageManager;
    if ( messageManager )
    {
      ScriptLineMessage__DeleteLabels(messageManager, 0);
      return;
    }
LABEL_25:
    sub_2213CDC(messageManager, item);
  }
}