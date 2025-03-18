void __fastcall ScriptSelectListViewItemDraw___ctor(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndMove(ScriptSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C3B708(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove1(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ScriptLineMessage_o *effectMessageManager; // x0

  if ( (byte_4C23CF8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6146/*"EventUI/DownloadEventUI"*/, method);
    byte_4C23CF8 = 1;
  }
  if ( this->fields.message )
  {
    effectMessageManager = this->fields.effectMessageManager;
    if ( !effectMessageManager )
      sub_1C3B9C0(0LL, method);
    ScriptLineMessage__Fadeout(effectMessageManager, 0.2, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6146/*"EventUI/DownloadEventUI"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__EndSelectDecideMove2(
        ScriptSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C23CF9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6126/*"EventRetryMove2"*/, method);
    byte_4C23CF9 = 1;
  }
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (gameObject = UnityEngine_Component__get_gameObject(baseSprite, 0LL),
        (baseSprite = (UnityEngine_Component_o *)TweenAlpha__Begin(gameObject, 0.6, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseSprite[1].monitor) = 6, (baseSprite = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
  {
    sub_1C3B9C0(baseSprite, method);
  }
  UIMessageButton__Fadeout((UIMessageButton_o *)baseSprite, 0.6, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6126/*"EventRetryMove2"*/,
    0.6,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__NoSelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  UIMessageButton_o *baseButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C23CF6 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, callback);
    sub_1C3B764(&StringLiteral_6126/*"EventRetryMove2"*/, v10);
    byte_4C23CF6 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)method,
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
    || (baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)baseButton,
                                            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL),
        (baseButton = (UIMessageButton_o *)this->fields.baseSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseButton, 0LL),
        (baseButton = (UIMessageButton_o *)TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL)) == 0LL)
    || (LODWORD(baseButton->fields.tweenTarget) = 6, (baseButton = this->fields.baseButton) == 0LL) )
  {
LABEL_10:
    sub_1C3B9C0(baseButton, v11);
  }
  UIMessageButton__Fadeout(baseButton, 0.5, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6126/*"EventRetryMove2"*/,
    0.5,
    0LL);
}


void __fastcall ScriptSelectListViewItemDraw__SelectDecide(
        ScriptSelectListViewItemDraw_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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

  if ( (byte_4C23CF7 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, callback);
    sub_1C3B764(&LocalizationManager_TypeInfo, v10);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_6145/*"EventTradeSweetsWithdrawalConfirmDialog"*/, v12);
    sub_1C3B764(&StringLiteral_11712/*"SETUP_OK"*/, v13);
    byte_4C23CF7 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  UIMessageButton__UpdateColor(baseButton, 1, 0, 0LL);
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_18;
  baseButton = (UIMessageButton_o *)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)baseButton,
                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !baseButton )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseButton, 0, 0LL);
  if ( this->fields.message )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11712/*"SETUP_OK"*/, 0LL);
    effectMessageManager = this->fields.effectMessageManager;
    message = this->fields.message;
    v20 = v16;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
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
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_1C3B9C0(baseButton, v14);
  }
LABEL_17:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6145/*"EventTradeSweetsWithdrawalConfirmDialog"*/,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_String_o *message; // x1
  struct UnityEngine_Font_o *fontType; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  struct ScriptLineMessage_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  ScriptLineMessage_o *messageManager; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4C23CF5 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_11712/*"SETUP_OK"*/, v12);
    byte_4C23CF5 = 1;
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
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.message, 0LL, v27, v28, v29, v30, v31, v32);
        this->fields.font = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.font, 0LL, v33, v34, v35, v36, v37, v38);
        return;
      }
    }
    goto LABEL_23;
  }
  message = item->fields.message;
  this->fields.message = message;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.message,
    (int64_t)message,
    *(int64_t *)&mode,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  fontType = item->fields.fontType;
  this->fields.font = fontType;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.font, (int64_t)fontType, v15, v16, v17, v18, v19, v20);
  if ( mode )
  {
    if ( this->fields.message )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11712/*"SETUP_OK"*/, 0LL);
      v23 = this->fields.messageManager;
      v24 = this->fields.message;
      v25 = v21;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      messageManager = (ScriptLineMessage_o *)ScriptMessageLabel__IsExistColorTag(v24, v22);
      if ( ((unsigned __int8)messageManager & 1) != 0
        || (messageManager = (ScriptLineMessage_o *)System_String__IsNullOrEmpty(v25, 0LL),
            ((unsigned __int8)messageManager & 1) != 0) )
      {
        v25 = 0LL;
      }
      if ( !v23 )
        goto LABEL_23;
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
    sub_1C3B9C0(messageManager, item);
  }
}