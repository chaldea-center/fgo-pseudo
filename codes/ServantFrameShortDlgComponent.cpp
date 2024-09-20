void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A562DD & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A562DD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__Callback(
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
    *p_callbackFunc = 0LL;
    sub_1B88554(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_30621468(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_30621468(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A562D7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantFrameShortDlgComponent_EndClose__);
    byte_4A562D7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__EndClose(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFrameShortDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ServantFrameShortDlgComponent__EndOpen(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall ServantFrameShortDlgComponent__Init(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0

  if ( (byte_4A562D5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A562D5 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__OnClickCancel(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A562DB & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_ServantFrameShortDlgComponent_OnClickCancel__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A562DB = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v7);
}


void __fastcall ServantFrameShortDlgComponent__OnClickPwUp(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A562D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_ServantFrameShortDlgComponent_OnClickPwUp__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A562D8 = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickPwUp__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickPwUp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v7);
}


void __fastcall ServantFrameShortDlgComponent__OnClickSell(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A562D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_ServantFrameShortDlgComponent_OnClickSell__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A562D9 = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickSell__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickSell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v7);
}


void __fastcall ServantFrameShortDlgComponent__OnClickWarehouse(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A562DA & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A562DA = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickWarehouse__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickWarehouse__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v7);
}


void __fastcall ServantFrameShortDlgComponent__OpenShortSvt(
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
  System_Object_array *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UnityEngine_GameObject_o *v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  UnityEngine_GameObject_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  UnityEngine_GameObject_o *v41; // x23
  System_String_o *v42; // x28
  System_String_o *v43; // x0
  System_Object_array *v44; // x1
  System_String_o *v45; // x21
  UnityEngine_GameObject_o *v46; // x27
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  UnityEngine_GameObject_o *v50; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  UnityEngine_GameObject_o *v54; // x23
  System_String_o *v55; // x24
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v57; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v59; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v64; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v67; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v69; // x1
  System_Action_o *v70; // x20
  __int64 v71; // x0
  System_String_o *v72; // [xsp+8h] [xbp-88h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int32_t v75; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v76; // [xsp+28h] [xbp-68h] BYREF
  int32_t v77; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A562D6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ServantFrameShortDlgComponent_EndOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12113/*"SHORT_SERVANT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_12127/*"SHORT_SERVANT_FRAME_QUEST"*/);
    sub_1B885B0(&StringLiteral_12120/*"SHORT_SERVANT_EQ_WAREHOUSE"*/);
    sub_1B885B0(&StringLiteral_12125/*"SHORT_SERVANT_FRAME"*/);
    sub_1B885B0(&StringLiteral_12126/*"SHORT_SERVANT_FRAME_LIMIT"*/);
    sub_1B885B0(&StringLiteral_12112/*"SHORT_SERVANT_AREA_IMPROVE"*/);
    sub_1B885B0(&StringLiteral_12129/*"SHORT_SERVANT_SELL"*/);
    sub_1B885B0(&StringLiteral_12118/*"SHORT_SERVANT_EQ_COMBINE"*/);
    sub_1B885B0(&StringLiteral_12128/*"SHORT_SERVANT_QUEST"*/);
    sub_1B885B0(&StringLiteral_12115/*"SHORT_SERVANT_COMMAND_CODE"*/);
    sub_1B885B0(&StringLiteral_12121/*"SHORT_SERVANT_EVENT_RECIPE"*/);
    sub_1B885B0(&StringLiteral_6499/*"FRIEND_GACHA_ADD_LIMIT"*/);
    sub_1B885B0(&StringLiteral_12122/*"SHORT_SERVANT_EVENT_TRADE"*/);
    sub_1B885B0(&StringLiteral_12119/*"SHORT_SERVANT_EQ_SELL"*/);
    sub_1B885B0(&StringLiteral_12132/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_1B885B0(&StringLiteral_12114/*"SHORT_SERVANT_COMBINE"*/);
    sub_1B885B0(&StringLiteral_12123/*"SHORT_SERVANT_EXPEDITION"*/);
    sub_1B885B0(&StringLiteral_12105/*"SHORT_DLG_TITLE"*/);
    sub_1B885B0(&StringLiteral_12117/*"SHORT_SERVANT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_12103/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/);
    sub_1B885B0(&StringLiteral_12116/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_12130/*"SHORT_SERVANT_SERVANT"*/);
    sub_1B885B0(&StringLiteral_12131/*"SHORT_SERVANT_SUMMON"*/);
    byte_4A562D6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  this->fields.state = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SHORT_DLG_TITLE"*/, 0LL);
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  v72 = v16;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12115/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v18 = v17;
    value = LocalizationManager__Get((System_String_o *)StringLiteral_12116/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12117/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12118/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v21 = &StringLiteral_12120/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
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
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12130/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12129/*"SHORT_SERVANT_SELL"*/, 0LL);
      v21 = &StringLiteral_12132/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    value = v20;
    v17 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  }
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isQuest )
    v22 = (System_String_o **)&StringLiteral_12128/*"SHORT_SERVANT_QUEST"*/;
  else
    v22 = (System_String_o **)&StringLiteral_12131/*"SHORT_SERVANT_SUMMON"*/;
  v23 = LocalizationManager__Get(*v22, 0LL);
  switch ( eventType )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12123/*"SHORT_SERVANT_EXPEDITION"*/;
      goto LABEL_37;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12112/*"SHORT_SERVANT_AREA_IMPROVE"*/;
      goto LABEL_37;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12121/*"SHORT_SERVANT_EVENT_RECIPE"*/;
      goto LABEL_37;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = &StringLiteral_12122/*"SHORT_SERVANT_EVENT_TRADE"*/;
LABEL_37:
      v23 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
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
      v26 = &StringLiteral_12103/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    else
      v26 = &StringLiteral_12127/*"SHORT_SERVANT_FRAME_QUEST"*/;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !gameObject )
      goto LABEL_168;
    v27 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6499/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v27 >= 1 )
    {
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12126/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)sub_1B88658(object___TypeInfo, 5LL);
      if ( !gameObject )
        goto LABEL_168;
      v29 = (System_Object_array *)gameObject;
      if ( !v19
        || (gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(v19, gameObject->klass->_1.element_class)) != 0LL )
      {
        if ( !v29->max_length )
          goto LABEL_169;
        v29->m_Items[0] = (Il2CppObject *)v19;
        sub_1B88554(v29->m_Items, v19);
        v77 = v27;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v30, v31, v32);
        v33 = gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v29->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v29->max_length <= 1 )
            goto LABEL_169;
          v29->m_Items[1] = (Il2CppObject *)v33;
          gameObject = (UnityEngine_GameObject_o *)sub_1B88554(&v29->m_Items[1], v33);
          if ( !v25
            || (gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(v25, v29->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v29->max_length <= 2 )
              goto LABEL_169;
            v29->m_Items[2] = (Il2CppObject *)v25;
            sub_1B88554(&v29->m_Items[2], v25);
            v76 = haveNum;
            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v34, v35, v36);
            v37 = gameObject;
            if ( !gameObject
              || (gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v29->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v29->max_length <= 3 )
                goto LABEL_169;
              v29->m_Items[3] = (Il2CppObject *)v37;
              sub_1B88554(&v29->m_Items[3], v37);
              v75 = maxNum;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v38, v39, v40);
              v41 = gameObject;
              if ( !gameObject
                || (gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v29->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v29->max_length > 4 )
                {
                  v29->m_Items[4] = (Il2CppObject *)v41;
                  v42 = v18;
                  sub_1B88554(&v29->m_Items[4], v41);
                  v43 = v28;
                  v44 = v29;
                  goto LABEL_81;
                }
LABEL_169:
                sub_1B88814(gameObject, v15);
              }
            }
          }
        }
      }
LABEL_170:
      v71 = sub_1B88830();
      sub_1B886D8(v71, 0LL);
    }
    v26 = &StringLiteral_12125/*"SHORT_SERVANT_FRAME"*/;
  }
  v45 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_1B88658(object___TypeInfo, 4LL);
  if ( !gameObject )
    goto LABEL_168;
  v46 = gameObject;
  if ( v19 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(v19, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( !LODWORD(v46[1].klass) )
    goto LABEL_169;
  v46[1].monitor = v19;
  gameObject = (UnityEngine_GameObject_o *)sub_1B88554(&v46[1].monitor, v19);
  if ( v25 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(v25, v46->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v46[1].klass) <= 1 )
    goto LABEL_169;
  *(_QWORD *)&v46[1].fields.m_CachedPtr = v25;
  sub_1B88554(&v46[1].fields, v25);
  v77 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v47, v48, v49);
  v50 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v46->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v46[1].klass) <= 2 )
    goto LABEL_169;
  v46[2].klass = (UnityEngine_GameObject_c *)v50;
  sub_1B88554(&v46[2], v50);
  v76 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v51, v52, v53);
  v54 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B886EC(gameObject, v46->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v46[1].klass) <= 3 )
    goto LABEL_169;
  v46[2].monitor = v54;
  v42 = v18;
  sub_1B88554(&v46[2].monitor, v54);
  v43 = v45;
  v44 = (System_Object_array *)v46;
LABEL_81:
  v55 = System_String__Format_61721540(v43, v44, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v72 )
      v57 = v72;
    else
      v57 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v57, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v55 )
      v59 = v55;
    else
      v59 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v59, 0LL);
  }
  pwUpBtnLb = (UnityEngine_Object_o *)this->fields.pwUpBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pwUpBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, v42, 0LL);
  }
  sellBtnLb = (UnityEngine_Object_o *)this->fields.sellBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sellBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, value, 0LL);
  }
  warehouseBtnLb = (UnityEngine_Object_o *)this->fields.warehouseBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warehouseBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, v17, 0LL);
  }
  cancelBtnLb = (UnityEngine_Object_o *)this->fields.cancelBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    v64 = this->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v64 )
      goto LABEL_168;
    UILabel__set_text(v64, (System_String_o *)gameObject, 0LL);
  }
  sellBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.sellBtnCommandCodeLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sellBtnCommandCodeLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_168;
    UILabel__set_text((UILabel_o *)gameObject, value, 0LL);
  }
  cancelBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.cancelBtnCommandCodeLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnCommandCodeLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_168;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
    v67 = this->fields.cancelBtnCommandCodeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v67 )
      goto LABEL_168;
    UILabel__set_text(v67, (System_String_o *)gameObject, 0LL);
  }
  confirmDetailCommandCodeLabel = (UnityEngine_Object_o *)this->fields.confirmDetailCommandCodeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailCommandCodeLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailCommandCodeLabel;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailCommandCodeLabel;
        if ( gameObject )
        {
          if ( v55 )
            v69 = v55;
          else
            v69 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v69, 0LL);
          goto LABEL_167;
        }
      }
    }
LABEL_168:
    sub_1B8880C(gameObject, v15);
  }
LABEL_167:
  v70 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__add_callbackFunc(
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

  if ( (byte_4A562D3 & 1) == 0 )
  {
    sub_1B885B0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_4A562D3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v8->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1B88ACC(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A562DC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4679/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/);
    byte_4A562DC = 1;
  }
  return (System_String_o *)StringLiteral_4679/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
}


void __fastcall ServantFrameShortDlgComponent__remove_callbackFunc(
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

  if ( (byte_4A562D4 & 1) == 0 )
  {
    sub_1B885B0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_4A562D4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v8->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1B88ACC(v8);
  ServantFrameShortDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFrameShortDlgComponent_CallbackFunc___ctor(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C6F50;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C6F08;
}


System_IAsyncResult_o *__fastcall ServantFrameShortDlgComponent_CallbackFunc__BeginInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A562DE & 1) == 0 )
  {
    sub_1B885B0(&ServantFrameShortDlgComponent_resultClicked_TypeInfo);
    byte_4A562DE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__Invoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}