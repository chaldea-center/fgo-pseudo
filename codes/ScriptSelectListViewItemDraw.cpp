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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove1(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_42EE2F8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6059/*"EndSelectDecideMove2"*/, (_DWORD)method, v2, v3);
    byte_42EE2F8 = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_B5D69C(0LL, method);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6059/*"EndSelectDecideMove2"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove2(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EE2F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6042/*"EndMove"*/, (_DWORD)method, v2, v3);
    byte_42EE2F9 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0LL),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseSprite[1].klass) = 6, (baseSprite = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
  {
    sub_B5D69C(baseSprite, method);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6042/*"EndMove"*/,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EE2F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_6042/*"EndMove"*/, v10, v11, v12);
    byte_42EE2F6 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B5D560(
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
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0LL),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseButton->fields.tweenTarget) = 6, (baseButton = this->fields.baseButton) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(baseButton, v13);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6042/*"EndMove"*/,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x1
  UIMessageButton_o *baseButton; // x0
  System_String_o *v24; // x0
  struct ScriptLineMessage_o *effectMessageManager; // x20
  System_String_o *message; // x21
  System_String_o *v27; // x22

  if ( (byte_42EE2F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_6058/*"EndSelectDecideMove1"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11736/*"SCRIPT_ACTION_SELECT_COLOR"*/, v19, v20, v21);
    byte_42EE2F7 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B5D560(
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
                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11736/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
    effectMessageManager = this->fields.effectMessageManager;
    message = this->fields.message;
    v27 = v24;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    baseButton = (UIMessageButton_o *)ScriptMessageLabel__IsExistColorTag(message, 0LL);
    if ( ((unsigned __int8)baseButton & 1) != 0
      || (baseButton = (UIMessageButton_o *)System_String__IsNullOrEmpty(v27, 0LL),
          ((unsigned __int8)baseButton & 1) != 0) )
    {
      v27 = 0LL;
    }
    if ( effectMessageManager )
    {
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))effectMessageManager->klass->vtable._7_SetText.method)(
        effectMessageManager,
        message,
        v27,
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
    sub_B5D69C(baseButton, v22);
  }
LABEL_19:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6058/*"EndSelectDecideMove1"*/,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *v25; // x0
  struct ScriptLineMessage_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  ScriptLineMessage_o *messageManager; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42EE2F5 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11736/*"SCRIPT_ACTION_SELECT_COLOR"*/, v14, v15, v16);
    byte_42EE2F5 = 1;
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
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.message, 0LL, v30, v31, v32, v33, v34, v35);
        this->fields.font = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.font, 0LL, v36, v37, v38, v39, v40, v41);
        return;
      }
    }
    goto LABEL_25;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.font,
    (System_Int32_array **)fontType,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11736/*"SCRIPT_ACTION_SELECT_COLOR"*/, 0LL);
      v26 = this->fields.messageManager;
      v27 = this->fields.message;
      v28 = v25;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v27, 0LL);
      if ( ((unsigned __int8)messageManager & 1) != 0
        || (messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v28, 0LL),
            ((unsigned __int8)messageManager & 1) != 0) )
      {
        v28 = 0LL;
      }
      if ( !v26 )
        goto LABEL_25;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, System_String_o *, System_String_o *, struct UnityEngine_Font_o *, __int64, _QWORD, void *))v26->klass->vtable._7_SetText.method)(
        v26,
        v27,
        v28,
        this->fields.font,
        1LL,
        0LL,
        v26->klass[1]._1.image);
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
    sub_B5D69C(messageManager, item);
  }
}