void __fastcall FriendOperationConfirmMenu___ctor(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C1CF94 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1CF94 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__Callback(
        FriendOperationConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct FriendOperationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct FriendOperationConfirmMenu_CallbackFunc_o *v4; // x20
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C3B708(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendOperationConfirmMenu__Close(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendOperationConfirmMenu__Close_31911360(this, 0LL, v2);
}


void __fastcall FriendOperationConfirmMenu__Close_31911360(
        FriendOperationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C1CF90 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_FriendOperationConfirmMenu_EndClose__, v5);
    byte_4C1CF90 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall FriendOperationConfirmMenu__EndClose(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendOperationConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C3B708(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendOperationConfirmMenu__EndOpen(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall FriendOperationConfirmMenu__Init(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4C1CF8E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1CF8E = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_1C3B9C0(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__OnClickCancel(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1CF92 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendOperationConfirmMenu_OnClickCancel__, method);
    byte_4C1CF92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_FriendOperationConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    FriendOperationConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall FriendOperationConfirmMenu__OnClickDecide(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1CF91 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendOperationConfirmMenu_OnClickDecide__, method);
    byte_4C1CF91 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_FriendOperationConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    FriendOperationConfirmMenu__Callback(this, 1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationConfirmMenu__Open(
        FriendOperationConfirmMenu_o *this,
        int32_t kind,
        OtherUserGameEntity_o *entity,
        FriendOperationConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v37; // x8
  UILabel_o *v38; // x21
  UILabel_o *v39; // x20
  UILabel_o *v40; // x21
  UILabel_o *v41; // x20
  UILabel_o *v42; // x21
  UILabel_o *v43; // x20
  UILabel_o *v44; // x21
  UILabel_o *v45; // x20
  UILabel_o *v46; // x21
  UILabel_o *v47; // x20
  UILabel_o *v48; // x21
  UILabel_o *v49; // x20
  System_Action_o *v50; // x20

  if ( (byte_4C1CF8F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&Method_FriendOperationConfirmMenu_EndOpen__, v9);
    sub_1C3B764(&LocalizationManager_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_6690/*"ForceAttackFunctionTargetAll"*/, v11);
    sub_1C3B764(&StringLiteral_6652/*"First argument of delegate must be CallSite"*/, v12);
    sub_1C3B764(&StringLiteral_6692/*"ForceReadNewProfiles"*/, v13);
    sub_1C3B764(&StringLiteral_6689/*"Forbidden"*/, v14);
    sub_1C3B764(&StringLiteral_6604/*"Finger"*/, v15);
    sub_1C3B764(&StringLiteral_6654/*"Flag   : back"*/, v16);
    sub_1C3B764(&StringLiteral_6688/*"For security reasons DTD is prohibited in this XML document. To enable DTD processing set the DtdProcessing property on XmlReaderSettings to Parse and pass the settings into XmlReader.Create method."*/, v17);
    sub_1C3B764(&StringLiteral_6653/*"Flag   : "*/, v18);
    sub_1C3B764(&StringLiteral_6658/*"FloralWhite"*/, v19);
    sub_1C3B764(&StringLiteral_6677/*"FontAsset.TryAddGlyphMarker"*/, v20);
    sub_1C3B764(&StringLiteral_6605/*"Finger Event Detectors"*/, v21);
    sub_1C3B764(&StringLiteral_6656/*"Float"*/, v22);
    sub_1C3B764(&StringLiteral_6691/*"ForcePlayBgmInTreasureDeviceAnim"*/, v23);
    sub_1C3B764(&StringLiteral_6600/*"Fill"*/, v24);
    sub_1C3B764(&StringLiteral_6603/*"Find finds a row based on a Sort order, and no Sort order is specified."*/, v25);
    sub_1C3B764(&StringLiteral_6678/*"FontAsset.UpdateDiacriticalAdjustmentRecords"*/, v26);
    sub_1C3B764(&StringLiteral_6601/*"Fill Area"*/, v27);
    sub_1C3B764(&StringLiteral_6602/*"Filter expression '{0}' does not evaluate to a Boolean term."*/, v28);
    sub_1C3B764(&StringLiteral_6679/*"FontAsset.UpdateFontAssetData"*/, v29);
    sub_1C3B764(&StringLiteral_6657/*"FloorRewardPrefabName"*/, v30);
    sub_1C3B764(&StringLiteral_6687/*"For element declaration, either the name or the ref attribute must be present."*/, v31);
    byte_4C1CF8F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C3B708(&this->fields.callbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6679/*"FontAsset.UpdateFontAssetData"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !messageLabel )
          goto LABEL_51;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6678/*"FontAsset.UpdateDiacriticalAdjustmentRecords"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_51;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v37 = &StringLiteral_6677/*"FontAsset.TryAddGlyphMarker"*/;
        break;
      case 2:
        v38 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6654/*"Flag   : back"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v38 )
          goto LABEL_51;
        UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
        v39 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6653/*"Flag   : "*/, 0LL);
        if ( !v39 )
          goto LABEL_51;
        UILabel__set_text(v39, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v37 = &StringLiteral_6652/*"First argument of delegate must be CallSite"*/;
        break;
      case 3:
        v40 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6689/*"Forbidden"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v40 )
          goto LABEL_51;
        UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
        v41 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6688/*"For security reasons DTD is prohibited in this XML document. To enable DTD processing set the DtdProcessing property on XmlReaderSettings to Parse and pass the settings into XmlReader.Create method."*/, 0LL);
        if ( !v41 )
          goto LABEL_51;
        UILabel__set_text(v41, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v37 = &StringLiteral_6687/*"For element declaration, either the name or the ref attribute must be present."*/;
        break;
      case 4:
        v42 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6658/*"FloralWhite"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v42 )
          goto LABEL_51;
        UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
        v43 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6657/*"FloorRewardPrefabName"*/, 0LL);
        if ( !v43 )
          goto LABEL_51;
        UILabel__set_text(v43, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v37 = &StringLiteral_6656/*"Float"*/;
        break;
      case 5:
        v44 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6692/*"ForceReadNewProfiles"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v44 )
          goto LABEL_51;
        UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
        v45 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6691/*"ForcePlayBgmInTreasureDeviceAnim"*/, 0LL);
        if ( !v45 )
          goto LABEL_51;
        UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v37 = &StringLiteral_6690/*"ForceAttackFunctionTargetAll"*/;
        break;
      case 6:
        v46 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6602/*"Filter expression '{0}' does not evaluate to a Boolean term."*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v46 )
          goto LABEL_51;
        UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
        v47 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6601/*"Fill Area"*/, 0LL);
        if ( !v47 )
          goto LABEL_51;
        UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v37 = &StringLiteral_6600/*"Fill"*/;
        break;
      case 7:
        v48 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6605/*"Finger Event Detectors"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v48 )
          goto LABEL_51;
        UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
        v49 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6604/*"Finger"*/, 0LL);
        if ( !v49 )
          goto LABEL_51;
        UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v37 = &StringLiteral_6603/*"Find finds a row based on a Sort order, and no Sort order is specified."*/;
        break;
      default:
        goto LABEL_50;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v37, 0LL);
    if ( !cancelLabel )
LABEL_51:
      sub_1C3B9C0(gameObject, v33);
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_50:
    this->fields.state = 1;
    v50 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
  }
}


void __fastcall FriendOperationConfirmMenu__add_callbackFunc(
        FriendOperationConfirmMenu_o *this,
        FriendOperationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendOperationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationConfirmMenu_o *v11; // x0
  FriendOperationConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C1CF8C & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4C1CF8C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendOperationConfirmMenu_CallbackFunc_c *)v8->klass != FriendOperationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationConfirmMenu_o *)sub_1C3BC80(v8);
  FriendOperationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendOperationConfirmMenu__get_closeBtnPath(
        FriendOperationConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1CF93 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_4760/*"Count must be positive and count must refer to a location within the string/array/collection."*/, method);
    byte_4C1CF93 = 1;
  }
  return (System_String_o *)StringLiteral_4760/*"Count must be positive and count must refer to a location within the string/array/collection."*/;
}


void __fastcall FriendOperationConfirmMenu__remove_callbackFunc(
        FriendOperationConfirmMenu_o *this,
        FriendOperationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendOperationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C1CF8D & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4C1CF8D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendOperationConfirmMenu_CallbackFunc_c *)v8->klass != FriendOperationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationConfirmMenu_o *)sub_1C3BC80(v8);
  FriendOperationConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationConfirmMenu_CallbackFunc___ctor(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A74CF4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A74CAC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FriendOperationConfirmMenu_CallbackFunc__BeginInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C1CF95 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C1CF95 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall FriendOperationConfirmMenu_CallbackFunc__EndInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall FriendOperationConfirmMenu_CallbackFunc__Invoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}