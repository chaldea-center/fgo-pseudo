void ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B089 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B089 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantFrameShortDlgComponent__Callback(
        ServantFrameShortDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct ServantFrameShortDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  struct ServantFrameShortDlgComponent_CallbackFunc_o *v4; // x20
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C93A78(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
  }
}


void ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_32844628(this, 0, v2);
}


void ServantFrameShortDlgComponent__Close_32844628(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4D2B083 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ServantFrameShortDlgComponent_EndClose__);
    byte_4D2B083 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(&this->fields.closeCallbackFunc, callback);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void ServantFrameShortDlgComponent__EndClose(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFrameShortDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C93A78(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void ServantFrameShortDlgComponent__EndOpen(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void ServantFrameShortDlgComponent__Init(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0

  if ( (byte_4D2B081 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B081 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantFrameShortDlgComponent__OnClickCancel(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2B087 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C93AD4(&Method_ServantFrameShortDlgComponent_OnClickCancel__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B087 = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ServantFrameShortDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_318C1B8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v7);
}


void ServantFrameShortDlgComponent__OnClickPwUp(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2B084 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C93AD4(&Method_ServantFrameShortDlgComponent_OnClickPwUp__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B084 = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickPwUp__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickPwUp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ServantFrameShortDlgComponent_OnClickPwUp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_318C1B8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v7);
}


void ServantFrameShortDlgComponent__OnClickSell(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2B085 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C93AD4(&Method_ServantFrameShortDlgComponent_OnClickSell__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B085 = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickSell__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickSell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ServantFrameShortDlgComponent_OnClickSell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_318C1B8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v7);
}


void ServantFrameShortDlgComponent__OnClickWarehouse(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2B086 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C93AD4(&Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B086 = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickWarehouse__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickWarehouse__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_318C1B8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v7);
}


void ServantFrameShortDlgComponent__OpenShortSvt(
        ServantFrameShortDlgComponent_o *this,
        int32_t haveNum,
        int32_t maxNum,
        int32_t type,
        bool isQuest,
        ServantFrameShortDlgComponent_CallbackFunc_o *callback,
        int32_t eventType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  System_String_o *v17; // x22
  System_String_o *v18; // x24
  System_String_o *v19; // x28
  System_String_o *v20; // x0
  __int64 *v21; // x8
  System_String_o **v22; // x8
  System_String_o *v23; // x0
  __int64 *v24; // x8
  System_String_o *v25; // x29
  __int64 *v26; // x8
  int32_t v27; // w23
  System_String_o *v28; // x27
  UnityEngine_GameObject_o *v29; // x21
  UnityEngine_GameObject_o *v30; // x23
  UnityEngine_GameObject_o *v31; // x23
  UnityEngine_GameObject_o *v32; // x23
  System_String_o *v33; // x28
  System_String_o *v34; // x0
  System_Object_array *v35; // x1
  System_String_o *v36; // x21
  UnityEngine_GameObject_o *v37; // x27
  UnityEngine_GameObject_o *v38; // x23
  UnityEngine_GameObject_o *v39; // x23
  System_String_o *v40; // x24
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v42; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v44; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v49; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v52; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v54; // x1
  System_Action_o *v55; // x20
  __int64 v56; // x0
  System_String_o *v57; // [xsp+8h] [xbp-88h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int32_t v60; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v61; // [xsp+28h] [xbp-68h] BYREF
  int32_t v62; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D2B082 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ServantFrameShortDlgComponent_EndOpen__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12280/*"SHORT_SERVANT_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12294/*"SHORT_SERVANT_FRAME_QUEST"*/);
    sub_1C93AD4(&StringLiteral_12287/*"SHORT_SERVANT_EQ_WAREHOUSE"*/);
    sub_1C93AD4(&StringLiteral_12292/*"SHORT_SERVANT_FRAME"*/);
    sub_1C93AD4(&StringLiteral_12293/*"SHORT_SERVANT_FRAME_LIMIT"*/);
    sub_1C93AD4(&StringLiteral_12279/*"SHORT_SERVANT_AREA_IMPROVE"*/);
    sub_1C93AD4(&StringLiteral_12296/*"SHORT_SERVANT_SELL"*/);
    sub_1C93AD4(&StringLiteral_12285/*"SHORT_SERVANT_EQ_COMBINE"*/);
    sub_1C93AD4(&StringLiteral_12295/*"SHORT_SERVANT_QUEST"*/);
    sub_1C93AD4(&StringLiteral_12282/*"SHORT_SERVANT_COMMAND_CODE"*/);
    sub_1C93AD4(&StringLiteral_12288/*"SHORT_SERVANT_EVENT_RECIPE"*/);
    sub_1C93AD4(&StringLiteral_6561/*"FRIEND_GACHA_ADD_LIMIT"*/);
    sub_1C93AD4(&StringLiteral_12289/*"SHORT_SERVANT_EVENT_TRADE"*/);
    sub_1C93AD4(&StringLiteral_12286/*"SHORT_SERVANT_EQ_SELL"*/);
    sub_1C93AD4(&StringLiteral_12299/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_1C93AD4(&StringLiteral_12281/*"SHORT_SERVANT_COMBINE"*/);
    sub_1C93AD4(&StringLiteral_12290/*"SHORT_SERVANT_EXPEDITION"*/);
    sub_1C93AD4(&StringLiteral_12272/*"SHORT_DLG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12284/*"SHORT_SERVANT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_12270/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/);
    sub_1C93AD4(&StringLiteral_12283/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_12297/*"SHORT_SERVANT_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_12298/*"SHORT_SERVANT_SUMMON"*/);
    byte_4D2B082 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C93A78(&this->fields.callbackFunc, callback);
  this->fields.state = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SHORT_DLG_TITLE"*/, 0);
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  v57 = v16;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SHORT_SERVANT_COMMAND_CODE"*/, 0);
    v18 = v17;
    value = LocalizationManager__Get((System_String_o *)StringLiteral_12283/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0);
  }
  else
  {
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12284/*"SHORT_SERVANT_EQUIP"*/, 0);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SHORT_SERVANT_EQ_COMBINE"*/, 0);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12286/*"SHORT_SERVANT_EQ_SELL"*/, 0);
      v21 = &StringLiteral_12287/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      v19 = (System_String_o *)StringLiteral_1/*""*/;
      value = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_19;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12297/*"SHORT_SERVANT_SERVANT"*/, 0);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12281/*"SHORT_SERVANT_COMBINE"*/, 0);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"SHORT_SERVANT_SELL"*/, 0);
      v21 = &StringLiteral_12299/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    value = v20;
    v17 = LocalizationManager__Get((System_String_o *)*v21, 0);
  }
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isQuest )
    v22 = (System_String_o **)&StringLiteral_12295/*"SHORT_SERVANT_QUEST"*/;
  else
    v22 = (System_String_o **)&StringLiteral_12298/*"SHORT_SERVANT_SUMMON"*/;
  v23 = LocalizationManager__Get(*v22, 0);
  switch ( eventType )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12290/*"SHORT_SERVANT_EXPEDITION"*/;
      goto LABEL_37;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12279/*"SHORT_SERVANT_AREA_IMPROVE"*/;
      goto LABEL_37;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12288/*"SHORT_SERVANT_EVENT_RECIPE"*/;
      goto LABEL_37;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12289/*"SHORT_SERVANT_EVENT_TRADE"*/;
LABEL_37:
      v23 = LocalizationManager__Get((System_String_o *)*v24, 0);
      break;
    default:
      break;
  }
  v25 = v23;
  if ( isQuest )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( type == 2 )
      v26 = &StringLiteral_12270/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    else
      v26 = &StringLiteral_12294/*"SHORT_SERVANT_FRAME_QUEST"*/;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !gameObject )
      goto LABEL_168;
    v27 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6561/*"FRIEND_GACHA_ADD_LIMIT"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v27 >= 1 )
    {
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12293/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0);
      gameObject = (UnityEngine_GameObject_o *)sub_1C93B7C(object___TypeInfo, 5);
      if ( !gameObject )
        goto LABEL_168;
      v29 = gameObject;
      if ( !v19 || (gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(v19, gameObject->klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v29[1].klass) )
          goto LABEL_169;
        v29[1].monitor = v19;
        sub_1C93A78(&v29[1].monitor, v19);
        v62 = v27;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
        v30 = gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v29->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v29[1].klass) <= 1 )
            goto LABEL_169;
          v29[1].fields.m_CachedPtr = (intptr_t)v30;
          gameObject = (UnityEngine_GameObject_o *)sub_1C93A78(&v29[1].fields, v30);
          if ( !v25 || (gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(v25, v29->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v29[1].klass) <= 2 )
              goto LABEL_169;
            v29[2].klass = (UnityEngine_GameObject_c *)v25;
            sub_1C93A78(&v29[2], v25);
            v61 = haveNum;
            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v31 = gameObject;
            if ( !gameObject
              || (gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v29->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v29[1].klass) <= 3 )
                goto LABEL_169;
              v29[2].monitor = v31;
              sub_1C93A78(&v29[2].monitor, v31);
              v60 = maxNum;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
              v32 = gameObject;
              if ( !gameObject
                || (gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v29->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v29[1].klass) > 4 )
                {
                  v29[2].fields.m_CachedPtr = (intptr_t)v32;
                  v33 = v18;
                  sub_1C93A78(&v29[2].fields, v32);
                  v34 = v28;
                  v35 = (System_Object_array *)v29;
                  goto LABEL_81;
                }
LABEL_169:
                sub_1C93D34(gameObject);
              }
            }
          }
        }
      }
LABEL_170:
      v56 = sub_1C93D50();
      sub_1C93BFC(v56, 0);
    }
    v26 = &StringLiteral_12292/*"SHORT_SERVANT_FRAME"*/;
  }
  v36 = LocalizationManager__Get((System_String_o *)*v26, 0);
  gameObject = (UnityEngine_GameObject_o *)sub_1C93B7C(object___TypeInfo, 4);
  if ( !gameObject )
    goto LABEL_168;
  v37 = gameObject;
  if ( v19 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(v19, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( !LODWORD(v37[1].klass) )
    goto LABEL_169;
  v37[1].monitor = v19;
  gameObject = (UnityEngine_GameObject_o *)sub_1C93A78(&v37[1].monitor, v19);
  if ( v25 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(v25, v37->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v37[1].klass) <= 1 )
    goto LABEL_169;
  v37[1].fields.m_CachedPtr = (intptr_t)v25;
  sub_1C93A78(&v37[1].fields, v25);
  v62 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  v38 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v37->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v37[1].klass) <= 2 )
    goto LABEL_169;
  v37[2].klass = (UnityEngine_GameObject_c *)v38;
  sub_1C93A78(&v37[2], v38);
  v61 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
  v39 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C93C10(gameObject, v37->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v37[1].klass) <= 3 )
    goto LABEL_169;
  v37[2].monitor = v39;
  v33 = v18;
  sub_1C93A78(&v37[2].monitor, v39);
  v34 = v36;
  v35 = (System_Object_array *)v37;
LABEL_81:
  v40 = System_String__Format_64467168(v34, v35, 0);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v57 )
      v42 = v57;
    else
      v42 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v42, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v40 )
      v44 = v40;
    else
      v44 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v44, 0);
  }
  pwUpBtnLb = (UnityEngine_Object_o *)this->fields.pwUpBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pwUpBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, v33, 0);
  }
  sellBtnLb = (UnityEngine_Object_o *)this->fields.sellBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sellBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, value, 0);
  }
  warehouseBtnLb = (UnityEngine_Object_o *)this->fields.warehouseBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warehouseBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, v17, 0);
  }
  cancelBtnLb = (UnityEngine_Object_o *)this->fields.cancelBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    v49 = this->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHORT_SERVANT_CANCEL"*/, 0);
    if ( !v49 )
      goto LABEL_168;
    UILabel__set_text(v49, (System_String_o *)gameObject, 0);
  }
  sellBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.sellBtnCommandCodeLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sellBtnCommandCodeLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, value, 0);
  }
  cancelBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.cancelBtnCommandCodeLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnCommandCodeLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0);
    v52 = this->fields.cancelBtnCommandCodeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHORT_SERVANT_CANCEL"*/, 0);
    if ( !v52 )
      goto LABEL_168;
    UILabel__set_text(v52, (System_String_o *)gameObject, 0);
  }
  confirmDetailCommandCodeLabel = (UnityEngine_Object_o *)this->fields.confirmDetailCommandCodeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailCommandCodeLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailCommandCodeLabel;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, type == 2, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailCommandCodeLabel;
        if ( gameObject )
        {
          if ( v40 )
            v54 = v40;
          else
            v54 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v54, 0);
          goto LABEL_167;
        }
      }
    }
LABEL_168:
    sub_1C93D2C(gameObject, v15);
  }
LABEL_167:
  v55 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0, 0);
}


void ServantFrameShortDlgComponent__add_callbackFunc(
        ServantFrameShortDlgComponent_o *this,
        ServantFrameShortDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFrameShortDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFrameShortDlgComponent_o *v11; // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B07F & 1) == 0 )
  {
    sub_1C93AD4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_4D2B07F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v8->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1C940C8(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B088 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4670/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/);
    byte_4D2B088 = 1;
  }
  return (System_String_o *)StringLiteral_4670/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
}


void ServantFrameShortDlgComponent__remove_callbackFunc(
        ServantFrameShortDlgComponent_o *this,
        ServantFrameShortDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFrameShortDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFrameShortDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2B080 & 1) == 0 )
  {
    sub_1C93AD4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_4D2B080 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v8->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1C940C8(v8);
  ServantFrameShortDlgComponent__Init(v11, v12);
}


void ServantFrameShortDlgComponent_CallbackFunc___ctor(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C93A78(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC028C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0244;
}


System_IAsyncResult_o *ServantFrameShortDlgComponent_CallbackFunc__BeginInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4D2B08A & 1) == 0 )
  {
    sub_1C93AD4(&ServantFrameShortDlgComponent_resultClicked_TypeInfo);
    byte_4D2B08A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void ServantFrameShortDlgComponent_CallbackFunc__Invoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}