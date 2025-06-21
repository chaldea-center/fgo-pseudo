void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B170A9 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B170A9 = 1;
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
    sub_1BCAF9C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_31916976(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_31916976(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4B170A3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_ServantFrameShortDlgComponent_EndClose__, v5);
    byte_4B170A3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C(&this->fields.closeCallbackFunc);
  v6 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc);
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

  if ( (byte_4B170A1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B170A1 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCB254(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__OnClickCancel(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B170A7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_ServantFrameShortDlgComponent_OnClickCancel__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B170A7 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_ServantFrameShortDlgComponent_OnClickCancel__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v9);
}


void __fastcall ServantFrameShortDlgComponent__OnClickPwUp(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B170A4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_ServantFrameShortDlgComponent_OnClickPwUp__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B170A4 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickPwUp__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickPwUp__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_ServantFrameShortDlgComponent_OnClickPwUp__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v9);
}


void __fastcall ServantFrameShortDlgComponent__OnClickSell(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B170A5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_ServantFrameShortDlgComponent_OnClickSell__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B170A5 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickSell__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickSell__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_ServantFrameShortDlgComponent_OnClickSell__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v9);
}


void __fastcall ServantFrameShortDlgComponent__OnClickWarehouse(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B170A6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_ServantFrameShortDlgComponent_OnClickWarehouse__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4B170A6 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickWarehouse__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickWarehouse__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v9);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v46; // x1
  System_String_o *v47; // x0
  System_String_o *v48; // x22
  System_String_o *v49; // x24
  System_String_o *v50; // x28
  System_String_o *v51; // x0
  __int64 *v52; // x8
  System_String_o **v53; // x8
  System_String_o *v54; // x0
  __int64 *v55; // x8
  System_String_o *v56; // x29
  __int64 *v57; // x8
  int32_t v58; // w23
  System_String_o *v59; // x27
  __int64 v60; // x2
  System_Object_array *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  UnityEngine_GameObject_o *v65; // x23
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  UnityEngine_GameObject_o *v69; // x23
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  UnityEngine_GameObject_o *v73; // x23
  System_String_o *v74; // x28
  System_String_o *v75; // x0
  System_Object_array *v76; // x1
  System_String_o *v77; // x21
  UnityEngine_GameObject_o *v78; // x27
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  UnityEngine_GameObject_o *v82; // x23
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  UnityEngine_GameObject_o *v86; // x23
  System_String_o *v87; // x24
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v89; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v91; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v96; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v99; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v101; // x1
  System_Action_o *v102; // x20
  __int64 v103; // x0
  System_String_o *v104; // [xsp+8h] [xbp-88h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int32_t v107; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v108; // [xsp+28h] [xbp-68h] BYREF
  int32_t v109; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B170A2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&haveNum);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ConstantMaster___, v14);
    sub_1BCAFF8(&int_TypeInfo, v15);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v16);
    sub_1BCAFF8(&object___TypeInfo, v17);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v18);
    sub_1BCAFF8(&Method_ServantFrameShortDlgComponent_EndOpen__, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BCAFF8(&StringLiteral_12091/*"SHORT_SERVANT_CANCEL"*/, v21);
    sub_1BCAFF8(&StringLiteral_12105/*"SHORT_SERVANT_FRAME_QUEST"*/, v22);
    sub_1BCAFF8(&StringLiteral_12098/*"SHORT_SERVANT_EQ_WAREHOUSE"*/, v23);
    sub_1BCAFF8(&StringLiteral_12103/*"SHORT_SERVANT_FRAME"*/, v24);
    sub_1BCAFF8(&StringLiteral_12104/*"SHORT_SERVANT_FRAME_LIMIT"*/, v25);
    sub_1BCAFF8(&StringLiteral_12090/*"SHORT_SERVANT_AREA_IMPROVE"*/, v26);
    sub_1BCAFF8(&StringLiteral_12107/*"SHORT_SERVANT_SELL"*/, v27);
    sub_1BCAFF8(&StringLiteral_12096/*"SHORT_SERVANT_EQ_COMBINE"*/, v28);
    sub_1BCAFF8(&StringLiteral_12106/*"SHORT_SERVANT_QUEST"*/, v29);
    sub_1BCAFF8(&StringLiteral_12093/*"SHORT_SERVANT_COMMAND_CODE"*/, v30);
    sub_1BCAFF8(&StringLiteral_12099/*"SHORT_SERVANT_EVENT_RECIPE"*/, v31);
    sub_1BCAFF8(&StringLiteral_6482/*"FRIEND_GACHA_ADD_LIMIT"*/, v32);
    sub_1BCAFF8(&StringLiteral_12100/*"SHORT_SERVANT_EVENT_TRADE"*/, v33);
    sub_1BCAFF8(&StringLiteral_12097/*"SHORT_SERVANT_EQ_SELL"*/, v34);
    sub_1BCAFF8(&StringLiteral_12110/*"SHORT_SERVANT_WAREHOUSE"*/, v35);
    sub_1BCAFF8(&StringLiteral_12092/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_1BCAFF8(&StringLiteral_12101/*"SHORT_SERVANT_EXPEDITION"*/, v37);
    sub_1BCAFF8(&StringLiteral_12083/*"SHORT_DLG_TITLE"*/, v38);
    sub_1BCAFF8(&StringLiteral_12095/*"SHORT_SERVANT_EQUIP"*/, v39);
    sub_1BCAFF8(&StringLiteral_12081/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/, v40);
    sub_1BCAFF8(&StringLiteral_12094/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, v41);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v42);
    sub_1BCAFF8(&StringLiteral_12108/*"SHORT_SERVANT_SERVANT"*/, v43);
    sub_1BCAFF8(&StringLiteral_12109/*"SHORT_SERVANT_SUMMON"*/, v44);
    byte_4B170A2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCAF9C(&this->fields.callbackFunc);
  this->fields.state = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SHORT_DLG_TITLE"*/, 0LL);
  v48 = (System_String_o *)StringLiteral_1/*""*/;
  v104 = v47;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v49 = v48;
    value = LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12095/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12096/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12097/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v52 = &StringLiteral_12098/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v49 = (System_String_o *)StringLiteral_1/*""*/;
      v50 = (System_String_o *)StringLiteral_1/*""*/;
      value = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_19;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12108/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SHORT_SERVANT_SELL"*/, 0LL);
      v52 = &StringLiteral_12110/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    value = v51;
    v48 = LocalizationManager__Get((System_String_o *)*v52, 0LL);
  }
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isQuest )
    v53 = (System_String_o **)&StringLiteral_12106/*"SHORT_SERVANT_QUEST"*/;
  else
    v53 = (System_String_o **)&StringLiteral_12109/*"SHORT_SERVANT_SUMMON"*/;
  v54 = LocalizationManager__Get(*v53, 0LL);
  switch ( eventType )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12101/*"SHORT_SERVANT_EXPEDITION"*/;
      goto LABEL_37;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12090/*"SHORT_SERVANT_AREA_IMPROVE"*/;
      goto LABEL_37;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12099/*"SHORT_SERVANT_EVENT_RECIPE"*/;
      goto LABEL_37;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12100/*"SHORT_SERVANT_EVENT_TRADE"*/;
LABEL_37:
      v54 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
      break;
    default:
      break;
  }
  v56 = v54;
  if ( isQuest )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( type == 2 )
      v57 = &StringLiteral_12081/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    else
      v57 = &StringLiteral_12105/*"SHORT_SERVANT_FRAME_QUEST"*/;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !gameObject )
      goto LABEL_168;
    v58 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6482/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v58 >= 1 )
    {
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)sub_1BCB0A0(object___TypeInfo, 5LL);
      if ( !gameObject )
        goto LABEL_168;
      v61 = (System_Object_array *)gameObject;
      if ( !v50
        || (gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(v50, gameObject->klass->_1.element_class)) != 0LL )
      {
        if ( !v61->max_length )
          goto LABEL_169;
        v61->m_Items[0] = (Il2CppObject *)v50;
        sub_1BCAF9C(v61->m_Items);
        v109 = v58;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v109, v62, v63, v64);
        v65 = gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(gameObject, v61->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v61->max_length <= 1 )
            goto LABEL_169;
          v61->m_Items[1] = (Il2CppObject *)v65;
          gameObject = (UnityEngine_GameObject_o *)sub_1BCAF9C(&v61->m_Items[1]);
          if ( !v56
            || (gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(v56, v61->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v61->max_length <= 2 )
              goto LABEL_169;
            v61->m_Items[2] = (Il2CppObject *)v56;
            sub_1BCAF9C(&v61->m_Items[2]);
            v108 = haveNum;
            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v66, v67, v68);
            v69 = gameObject;
            if ( !gameObject
              || (gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(gameObject, v61->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v61->max_length <= 3 )
                goto LABEL_169;
              v61->m_Items[3] = (Il2CppObject *)v69;
              sub_1BCAF9C(&v61->m_Items[3]);
              v107 = maxNum;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v107, v70, v71, v72);
              v73 = gameObject;
              if ( !gameObject
                || (gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(gameObject, v61->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v61->max_length > 4 )
                {
                  v61->m_Items[4] = (Il2CppObject *)v73;
                  v74 = v49;
                  sub_1BCAF9C(&v61->m_Items[4]);
                  v75 = v59;
                  v76 = v61;
                  goto LABEL_81;
                }
LABEL_169:
                sub_1BCB25C(gameObject, v46, v60);
              }
            }
          }
        }
      }
LABEL_170:
      v103 = sub_1BCB278();
      sub_1BCB120(v103, 0LL);
    }
    v57 = &StringLiteral_12103/*"SHORT_SERVANT_FRAME"*/;
  }
  v77 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_1BCB0A0(object___TypeInfo, 4LL);
  if ( !gameObject )
    goto LABEL_168;
  v78 = gameObject;
  if ( v50 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(v50, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( !LODWORD(v78[1].klass) )
    goto LABEL_169;
  v78[1].monitor = v50;
  gameObject = (UnityEngine_GameObject_o *)sub_1BCAF9C(&v78[1].monitor);
  if ( v56 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(v56, v78->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v78[1].klass) <= 1 )
    goto LABEL_169;
  *(_QWORD *)&v78[1].fields.m_CachedPtr = v56;
  sub_1BCAF9C(&v78[1].fields);
  v109 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v109, v79, v80, v81);
  v82 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(gameObject, v78->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v78[1].klass) <= 2 )
    goto LABEL_169;
  v78[2].klass = (UnityEngine_GameObject_c *)v82;
  sub_1BCAF9C(&v78[2]);
  v108 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v83, v84, v85);
  v86 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCB134(gameObject, v78->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v78[1].klass) <= 3 )
    goto LABEL_169;
  v78[2].monitor = v86;
  v74 = v49;
  sub_1BCAF9C(&v78[2].monitor);
  v75 = v77;
  v76 = (System_Object_array *)v78;
LABEL_81:
  v87 = System_String__Format_62491852(v75, v76, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v104 )
      v89 = v104;
    else
      v89 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v89, 0LL);
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
    if ( v87 )
      v91 = v87;
    else
      v91 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v91, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v74, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v48, 0LL);
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
    v96 = this->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v96 )
      goto LABEL_168;
    UILabel__set_text(v96, (System_String_o *)gameObject, 0LL);
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
    v99 = this->fields.cancelBtnCommandCodeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v99 )
      goto LABEL_168;
    UILabel__set_text(v99, (System_String_o *)gameObject, 0LL);
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
          if ( v87 )
            v101 = v87;
          else
            v101 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v101, 0LL);
          goto LABEL_167;
        }
      }
    }
LABEL_168:
    sub_1BCB254(gameObject, v46);
  }
LABEL_167:
  v102 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0LL);
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

  if ( (byte_4B1709F & 1) == 0 )
  {
    sub_1BCAFF8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4B1709F = 1;
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
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1BCB514(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B170A8 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4612/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/, method);
    byte_4B170A8 = 1;
  }
  return (System_String_o *)StringLiteral_4612/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
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

  if ( (byte_4B170A0 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4B170A0 = 1;
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
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1BCB514(v8);
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
  sub_1BCAF9C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0D334;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D2EC;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B170AA & 1) == 0 )
  {
    sub_1BCAFF8(&ServantFrameShortDlgComponent_resultClicked_TypeInfo, *(_QWORD *)&result);
    byte_4B170AA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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