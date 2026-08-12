void ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B171 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B171 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantFrameShortDlgComponent__Callback(
        ServantFrameShortDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantFrameShortDlgComponent_CallbackFunc_o *v9; // x20
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_39450832(this, 0, v2);
}


void ServantFrameShortDlgComponent__Close_39450832(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_596B16B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantFrameShortDlgComponent_EndClose__);
    byte_596B16B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ServantFrameShortDlgComponent__EndClose(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFrameShortDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
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

  if ( (byte_596B169 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B169 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(confirmTitleLabel, method);
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

  if ( (byte_596B16F & 1) == 0 )
  {
    sub_2213A60(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_2213A60(&Method_ServantFrameShortDlgComponent_OnClickCancel__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B16F = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantFrameShortDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_380E3DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v7);
}


void ServantFrameShortDlgComponent__OnClickPwUp(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596B16C & 1) == 0 )
  {
    sub_2213A60(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_2213A60(&Method_ServantFrameShortDlgComponent_OnClickPwUp__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B16C = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickPwUp__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickPwUp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantFrameShortDlgComponent_OnClickPwUp__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_380E3DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v7);
}


void ServantFrameShortDlgComponent__OnClickSell(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596B16D & 1) == 0 )
  {
    sub_2213A60(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_2213A60(&Method_ServantFrameShortDlgComponent_OnClickSell__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B16D = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickSell__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickSell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantFrameShortDlgComponent_OnClickSell__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_380E3DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v7);
}


void ServantFrameShortDlgComponent__OnClickWarehouse(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596B16E & 1) == 0 )
  {
    sub_2213A60(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_2213A60(&Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B16E = 1;
  }
  v3 = Method_ServantFrameShortDlgComponent_OnClickWarehouse__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickWarehouse__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_380E3DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  LocalizationManager_c *v24; // x0
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x22
  System_String_o *v29; // x25
  System_String_o *v30; // x28
  System_String_o *v31; // x0
  __int64 *v32; // x8
  System_String_o **v33; // x8
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x21
  LocalizationManager_c *v37; // x0
  __int64 *v38; // x21
  int v39; // w8
  __int64 *v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  int32_t v43; // w23
  int v44; // w8
  System_String_o *v45; // x27
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Object_array *v52; // x29
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x23
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  Il2CppObject *v73; // x21
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  Il2CppObject *v80; // x21
  System_String_o *v81; // x28
  MissionNaviTransitionBoardItem_o *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  Il2CppObject *v101; // x21
  __int64 v102; // x1
  __int64 v103; // x2
  System_String_o *v104; // x25
  UnityEngine_Object_o *confirmTitleLabel; // x21
  __int64 v106; // x2
  System_String_o *v107; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  __int64 v109; // x2
  System_String_o *v110; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  __int64 v112; // x2
  UnityEngine_Object_o *sellBtnLb; // x21
  __int64 v114; // x2
  UnityEngine_Object_o *warehouseBtnLb; // x21
  __int64 v116; // x2
  UnityEngine_Object_o *cancelBtnLb; // x21
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  UILabel_o *v121; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  __int64 v123; // x2
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  __int64 v125; // x2
  __int64 v126; // x1
  __int64 v127; // x2
  UILabel_o *v128; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v130; // x1
  System_Action_o *v131; // x20
  __int64 v132; // x0
  System_String_o *v133; // [xsp+8h] [xbp-88h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int32_t v136; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v137; // [xsp+28h] [xbp-68h] BYREF
  int32_t v138; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_596B16A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantFrameShortDlgComponent_EndOpen__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12709/*"SHORT_SERVANT_CANCEL"*/);
    sub_2213A60(&StringLiteral_12723/*"SHORT_SERVANT_FRAME_QUEST"*/);
    sub_2213A60(&StringLiteral_12716/*"SHORT_SERVANT_EQ_WAREHOUSE"*/);
    sub_2213A60(&StringLiteral_12721/*"SHORT_SERVANT_FRAME"*/);
    sub_2213A60(&StringLiteral_12722/*"SHORT_SERVANT_FRAME_LIMIT"*/);
    sub_2213A60(&StringLiteral_12708/*"SHORT_SERVANT_AREA_IMPROVE"*/);
    sub_2213A60(&StringLiteral_12725/*"SHORT_SERVANT_SELL"*/);
    sub_2213A60(&StringLiteral_12714/*"SHORT_SERVANT_EQ_COMBINE"*/);
    sub_2213A60(&StringLiteral_12724/*"SHORT_SERVANT_QUEST"*/);
    sub_2213A60(&StringLiteral_12711/*"SHORT_SERVANT_COMMAND_CODE"*/);
    sub_2213A60(&StringLiteral_12717/*"SHORT_SERVANT_EVENT_RECIPE"*/);
    sub_2213A60(&StringLiteral_6816/*"FRIEND_GACHA_ADD_LIMIT"*/);
    sub_2213A60(&StringLiteral_12718/*"SHORT_SERVANT_EVENT_TRADE"*/);
    sub_2213A60(&StringLiteral_12715/*"SHORT_SERVANT_EQ_SELL"*/);
    sub_2213A60(&StringLiteral_12728/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_2213A60(&StringLiteral_12710/*"SHORT_SERVANT_COMBINE"*/);
    sub_2213A60(&StringLiteral_12719/*"SHORT_SERVANT_EXPEDITION"*/);
    sub_2213A60(&StringLiteral_12701/*"SHORT_DLG_TITLE"*/);
    sub_2213A60(&StringLiteral_12713/*"SHORT_SERVANT_EQUIP"*/);
    sub_2213A60(&StringLiteral_12699/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/);
    sub_2213A60(&StringLiteral_12712/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12726/*"SHORT_SERVANT_SERVANT"*/);
    sub_2213A60(&StringLiteral_12727/*"SHORT_SERVANT_SUMMON"*/);
    byte_596B16A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_172;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = LocalizationManager_TypeInfo;
  this->fields.state = 1;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v22, v23);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12701/*"SHORT_DLG_TITLE"*/, 0);
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  v133 = v25;
  if ( type == 2 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12711/*"SHORT_SERVANT_COMMAND_CODE"*/, 0);
    v29 = v28;
    value = LocalizationManager__Get((System_String_o *)StringLiteral_12712/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0);
  }
  else
  {
    if ( type == 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12713/*"SHORT_SERVANT_EQUIP"*/, 0);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12714/*"SHORT_SERVANT_EQ_COMBINE"*/, 0);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12715/*"SHORT_SERVANT_EQ_SELL"*/, 0);
      v32 = &StringLiteral_12716/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v29 = (System_String_o *)StringLiteral_1/*""*/;
      v30 = (System_String_o *)StringLiteral_1/*""*/;
      value = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_19;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12726/*"SHORT_SERVANT_SERVANT"*/, 0);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12710/*"SHORT_SERVANT_COMBINE"*/, 0);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12725/*"SHORT_SERVANT_SELL"*/, 0);
      v32 = &StringLiteral_12728/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    value = v31;
    v28 = LocalizationManager__Get((System_String_o *)*v32, 0);
  }
LABEL_19:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
  if ( isQuest )
    v33 = (System_String_o **)&StringLiteral_12724/*"SHORT_SERVANT_QUEST"*/;
  else
    v33 = (System_String_o **)&StringLiteral_12727/*"SHORT_SERVANT_SUMMON"*/;
  v36 = LocalizationManager__Get(*v33, 0);
  if ( eventType <= 2 )
  {
    if ( eventType == 1 )
    {
      v37 = LocalizationManager_TypeInfo;
      v38 = &StringLiteral_12719/*"SHORT_SERVANT_EXPEDITION"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_29;
    }
    else
    {
      if ( eventType != 2 )
        goto LABEL_30;
      v37 = LocalizationManager_TypeInfo;
      v38 = &StringLiteral_12708/*"SHORT_SERVANT_AREA_IMPROVE"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( eventType == 3 )
  {
    v37 = LocalizationManager_TypeInfo;
    v38 = &StringLiteral_12717/*"SHORT_SERVANT_EVENT_RECIPE"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_29;
LABEL_28:
    j_il2cpp_runtime_class_init_0(v37, v34, v35);
LABEL_29:
    v36 = LocalizationManager__Get((System_String_o *)*v38, 0);
    goto LABEL_30;
  }
  if ( eventType == 4 )
  {
    v37 = LocalizationManager_TypeInfo;
    v38 = &StringLiteral_12718/*"SHORT_SERVANT_EVENT_TRADE"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_30:
  if ( isQuest )
  {
    v39 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( type == 2 )
    {
      if ( !v39 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
      v40 = &StringLiteral_12699/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    }
    else
    {
      if ( !v39 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
      v40 = &StringLiteral_12723/*"SHORT_SERVANT_FRAME_QUEST"*/;
    }
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !gameObject )
      goto LABEL_172;
    v43 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6816/*"FRIEND_GACHA_ADD_LIMIT"*/, 0);
    v44 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v43 >= 1 )
    {
      if ( !v44 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12722/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0);
      gameObject = (UnityEngine_GameObject_o *)sub_2213B20(object___TypeInfo, 5);
      if ( !gameObject )
        goto LABEL_172;
      v52 = (System_Object_array *)gameObject;
      if ( !v30 || (gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(v30, gameObject->klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v52->max_length) )
          goto LABEL_173;
        v52->m_Items[0] = (Il2CppObject *)v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)v52->m_Items, (int32_t)v30, v46, v47, v48, v49, v50, v51);
        v138 = v43;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984348, &v138);
        v60 = (Il2CppObject *)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v52->obj.klass->_1.element_class)) != 0 )
        {
          if ( (v52->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_173;
          v52->m_Items[1] = v60;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->m_Items[1], (int32_t)v60, v54, v55, v56, v57, v58, v59);
          if ( !v36
            || (gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(v36, v52->obj.klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v52->max_length) <= 2 )
              goto LABEL_173;
            v52->m_Items[2] = (Il2CppObject *)v36;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v52->m_Items[2],
              (int32_t)v36,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66);
            v137 = haveNum;
            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984348, &v137);
            v73 = (Il2CppObject *)gameObject;
            if ( !gameObject
              || (gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v52->obj.klass->_1.element_class)) != 0 )
            {
              if ( (v52->max_length & 0xFFFFFFFC) == 0 )
                goto LABEL_173;
              v52->m_Items[3] = v73;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v52->m_Items[3],
                (int32_t)v73,
                v67,
                v68,
                v69,
                v70,
                v71,
                v72);
              v136 = maxNum;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984348, &v136);
              v80 = (Il2CppObject *)gameObject;
              if ( !gameObject
                || (gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v52->obj.klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v52->max_length) > 4 )
                {
                  v81 = v29;
                  v52->m_Items[4] = v80;
                  v82 = (MissionNaviTransitionBoardItem_o *)&v52->m_Items[4];
                  goto LABEL_85;
                }
LABEL_173:
                sub_2213CE4(gameObject);
              }
            }
          }
        }
      }
LABEL_174:
      v132 = sub_2213D00(gameObject, v53);
      sub_2213BA0(v132, 0);
    }
    if ( !v44 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    v40 = &StringLiteral_12721/*"SHORT_SERVANT_FRAME"*/;
  }
  v45 = LocalizationManager__Get((System_String_o *)*v40, 0);
  gameObject = (UnityEngine_GameObject_o *)sub_2213B20(object___TypeInfo, 4);
  if ( !gameObject )
    goto LABEL_172;
  v52 = (System_Object_array *)gameObject;
  if ( v30 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(v30, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_174;
  }
  if ( !LODWORD(v52->max_length) )
    goto LABEL_173;
  v52->m_Items[0] = (Il2CppObject *)v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v52->m_Items, (int32_t)v30, v83, v84, v85, v86, v87, v88);
  if ( v36 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(v36, v52->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_174;
  }
  if ( (v52->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_173;
  v52->m_Items[1] = (Il2CppObject *)v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->m_Items[1], (int32_t)v36, v89, v90, v91, v92, v93, v94);
  v138 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984348, &v138);
  v101 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v52->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_174;
  }
  if ( LODWORD(v52->max_length) <= 2 )
    goto LABEL_173;
  v52->m_Items[2] = v101;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->m_Items[2], (int32_t)v101, v95, v96, v97, v98, v99, v100);
  v137 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984348, &v137);
  v80 = (Il2CppObject *)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213BB4(gameObject, v52->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_174;
  }
  if ( (v52->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_173;
  v81 = v29;
  v52->m_Items[3] = v80;
  v82 = (MissionNaviTransitionBoardItem_o *)&v52->m_Items[3];
LABEL_85:
  sub_2213A04(v82, (int32_t)v80, v74, v75, v76, v77, v78, v79);
  v104 = System_String__Format_75698016(v45, v52, 0);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102, v103);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_172;
    if ( v133 )
      v107 = v133;
    else
      v107 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v107, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v106);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_172;
    if ( v104 )
      v110 = v104;
    else
      v110 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v110, 0);
  }
  pwUpBtnLb = (UnityEngine_Object_o *)this->fields.pwUpBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v109);
  if ( UnityEngine_Object__op_Inequality(pwUpBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_172;
    UILabel__set_text((UILabel_o *)gameObject, v81, 0);
  }
  sellBtnLb = (UnityEngine_Object_o *)this->fields.sellBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v112);
  if ( UnityEngine_Object__op_Inequality(sellBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_172;
    UILabel__set_text((UILabel_o *)gameObject, value, 0);
  }
  warehouseBtnLb = (UnityEngine_Object_o *)this->fields.warehouseBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v114);
  if ( UnityEngine_Object__op_Inequality(warehouseBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_172;
    UILabel__set_text((UILabel_o *)gameObject, v28, 0);
  }
  cancelBtnLb = (UnityEngine_Object_o *)this->fields.cancelBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v116);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0);
    v121 = this->fields.cancelBtnLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v119, v120);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12709/*"SHORT_SERVANT_CANCEL"*/, 0);
    if ( !v121 )
      goto LABEL_172;
    UILabel__set_text(v121, (System_String_o *)gameObject, 0);
  }
  sellBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.sellBtnCommandCodeLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v118);
  if ( UnityEngine_Object__op_Inequality(sellBtnCommandCodeLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_172;
    UILabel__set_text((UILabel_o *)gameObject, value, 0);
  }
  cancelBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.cancelBtnCommandCodeLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v123);
  if ( UnityEngine_Object__op_Inequality(cancelBtnCommandCodeLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_172;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0);
    v128 = this->fields.cancelBtnCommandCodeLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v126, v127);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12709/*"SHORT_SERVANT_CANCEL"*/, 0);
    if ( !v128 )
      goto LABEL_172;
    UILabel__set_text(v128, (System_String_o *)gameObject, 0);
  }
  confirmDetailCommandCodeLabel = (UnityEngine_Object_o *)this->fields.confirmDetailCommandCodeLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v125);
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
          if ( v104 )
            v130 = v104;
          else
            v130 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v130, 0);
          goto LABEL_171;
        }
      }
    }
LABEL_172:
    sub_2213CDC(gameObject, v15);
  }
LABEL_171:
  v131 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v131, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v131, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantFrameShortDlgComponent_o *v13; // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B167 & 1) == 0 )
  {
    sub_2213A60(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_596B167 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantFrameShortDlgComponent_o *)sub_221405C(v8, ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  ServantFrameShortDlgComponent__remove_callbackFunc(v13, v14, v15);
}


System_String_o *ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_596B170 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4828/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/);
    byte_596B170 = 1;
  }
  return (System_String_o *)StringLiteral_4828/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantFrameShortDlgComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B168 & 1) == 0 )
  {
    sub_2213A60(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_596B168 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantFrameShortDlgComponent_o *)sub_221405C(v8, ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  ServantFrameShortDlgComponent__Init(v13, v14);
}


void ServantFrameShortDlgComponent_CallbackFunc___ctor(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20012C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001280;
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
  if ( (byte_596B172 & 1) == 0 )
  {
    sub_2213A60(&ServantFrameShortDlgComponent_resultClicked_TypeInfo);
    byte_596B172 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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