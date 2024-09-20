void __fastcall ScriptSelectListViewItemDraw___ctor(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndMove(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove1(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_4A5CDCC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5993/*"EndSelectDecideMove2"*/);
    byte_4A5CDCC = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_1B8880C(0LL, method);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5993/*"EndSelectDecideMove2"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove2(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A5CDCD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5975/*"EndMove"*/);
    byte_4A5CDCD = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0LL),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseSprite[1].monitor) = 6, (baseSprite = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
  {
    sub_1B8880C(baseSprite, method);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5975/*"EndMove"*/,
    0.6,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__NoSelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A5CDCA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&StringLiteral_5975/*"EndMove"*/);
    byte_4A5CDCA = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_10;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0LL);
  baseButton = this->fields.baseButton;
  if ( !baseButton
    || (baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)baseButton,
                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0LL),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseButton->fields.tweenTarget) = 6, (baseButton = this->fields.baseButton) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(baseButton, v6);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5975/*"EndMove"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__SelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  UIMessageButton_o *baseButton; // x0
  System_String_o *v8; // x0
  struct ScriptLineMessage_o *effectMessageManager; // x20
  System_String_o *message; // x21
  System_String_o *v11; // x22

  if ( (byte_4A5CDCB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_5992/*"EndSelectDecideMove1"*/);
    sub_1B885B0(&StringLiteral_11477/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4A5CDCB = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0LL);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)baseButton,
                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !baseButton )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL);
  if ( this->fields.message )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11477/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
    effectMessageManager = this->fields.effectMessageManager;
    message = this->fields.message;
    v11 = v8;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    baseButton = (UIMessageButton_o *)ScriptMessageLabel__IsExistColorTag(message, 0LL);
    if ( ((unsigned __int8)baseButton & 1) != 0
      || (baseButton = (UIMessageButton_o *)System_String__IsNullOrEmpty(v11, 0LL),
          ((unsigned __int8)baseButton & 1) != 0) )
    {
      v11 = 0LL;
    }
    if ( effectMessageManager )
    {
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))effectMessageManager->klass->vtable._7_SetText.method)(
        effectMessageManager,
        message,
        v11,
        this->fields.font,
        1LL,
        0LL,
        effectMessageManager->klass[1]._1.image);
      baseButton = (UIMessageButton_o *)this->fields.effectMessageManager;
      if ( baseButton )
      {
        ScriptLineMessage__EffectScale((ScriptLineMessage_o *)baseButton, 2.0, 0.3, 0LL);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_1B8880C(baseButton, v6);
  }
LABEL_17:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5992/*"EndSelectDecideMove1"*/,
    0.1,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__SetItem(
        ScriptSelectListViewItemDraw_o *this,
        ScriptSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x0
  struct ScriptLineMessage_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  ScriptLineMessage_o *messageManager; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5CDC9 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_11477/*"SCRIPT_ACTION_SELECT_COLOR"*/);
    byte_4A5CDC9 = 1;
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.message, 0, v16, v17);
        this->fields.font = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.font, 0, v18, v19);
        return;
      }
    }
    goto LABEL_23;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.message, (int32_t)message, mode, (int32_t)method);
  fontType = item->fields.fontType;
  this->fields.font = fontType;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.font, (int32_t)fontType, v9, v10);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11477/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
      v12 = this->fields.messageManager;
      v13 = this->fields.message;
      v14 = v11;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v13, 0LL);
      if ( ((unsigned __int8)messageManager & 1) != 0
        || (messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v14, 0LL),
            ((unsigned __int8)messageManager & 1) != 0) )
      {
        v14 = 0LL;
      }
      if ( !v12 )
        goto LABEL_23;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))v12->klass->vtable._7_SetText.method)(
        v12,
        v13,
        v14,
        this->fields.font,
        1LL,
        0LL,
        v12->klass[1]._1.image);
    }
    else
    {
      messageManager = this->fields.messageManager;
      if ( !messageManager )
        goto LABEL_23;
      ScriptLineMessage__DeleteLabels(messageManager, 0LL);
    }
    messageManager = this->fields.effectMessageManager;
    if ( messageManager )
    {
      ScriptLineMessage__DeleteLabels(messageManager, 0LL);
      return;
    }
LABEL_23:
    sub_1B8880C(messageManager, item);
  }
}