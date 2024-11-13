void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1100F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1100F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_30941728(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_30941728(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11009 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ServantFrameShortDlgComponent_EndClose__, v5, v6);
    byte_4B11009 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
  __int64 v2; // x2
  UILabel_o *confirmTitleLabel; // x0

  if ( (qword_4B11000 & 0x100000000000000LL) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    HIBYTE(qword_4B11000) = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__OnClickCancel(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1100D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_ServantFrameShortDlgComponent_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    byte_4B1100D = 1;
  }
  v8 = Method_ServantFrameShortDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_ServantFrameShortDlgComponent_OnClickCancel__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v12);
}


void __fastcall ServantFrameShortDlgComponent__OnClickPwUp(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1100A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_ServantFrameShortDlgComponent_OnClickPwUp__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    byte_4B1100A = 1;
  }
  v8 = Method_ServantFrameShortDlgComponent_OnClickPwUp__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickPwUp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_ServantFrameShortDlgComponent_OnClickPwUp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v12);
}


void __fastcall ServantFrameShortDlgComponent__OnClickSell(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1100B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_ServantFrameShortDlgComponent_OnClickSell__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    byte_4B1100B = 1;
  }
  v8 = Method_ServantFrameShortDlgComponent_OnClickSell__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickSell__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_ServantFrameShortDlgComponent_OnClickSell__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v12);
}


void __fastcall ServantFrameShortDlgComponent__OnClickWarehouse(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1100C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_ServantFrameShortDlgComponent_OnClickWarehouse__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    byte_4B1100C = 1;
  }
  v8 = Method_ServantFrameShortDlgComponent_OnClickWarehouse__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickWarehouse__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v12);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v77; // x1
  __int64 v78; // x1
  System_String_o *v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x22
  System_String_o *v82; // x24
  System_String_o *v83; // x28
  System_String_o *v84; // x0
  __int64 *v85; // x8
  System_String_o **v86; // x8
  System_String_o *v87; // x0
  __int64 v88; // x1
  __int64 *v89; // x8
  System_String_o *v90; // x29
  __int64 *v91; // x8
  __int64 v92; // x1
  int32_t v93; // w23
  System_String_o *v94; // x27
  System_Object_array *v95; // x21
  UnityEngine_GameObject_o *v96; // x23
  UnityEngine_GameObject_o *v97; // x23
  UnityEngine_GameObject_o *v98; // x23
  System_String_o *v99; // x28
  System_String_o *v100; // x0
  System_Object_array *v101; // x1
  System_String_o *v102; // x21
  UnityEngine_GameObject_o *v103; // x27
  UnityEngine_GameObject_o *v104; // x23
  UnityEngine_GameObject_o *v105; // x23
  __int64 v106; // x1
  System_String_o *v107; // x24
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v109; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v111; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  __int64 v116; // x1
  UILabel_o *v117; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  __int64 v120; // x1
  UILabel_o *v121; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  __int64 v123; // x2
  __int64 v124; // x3
  System_String_o *v125; // x1
  System_Action_o *v126; // x20
  __int64 v127; // x0
  System_String_o *v128; // [xsp+8h] [xbp-88h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int32_t v131; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v132; // [xsp+28h] [xbp-68h] BYREF
  int32_t v133; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B11008 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&haveNum, *(_QWORD *)&maxNum);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, v14, v15);
    sub_1BCA7E0(&int_TypeInfo, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&object___TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_ServantFrameShortDlgComponent_EndOpen__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_12269/*"SHORT_SERVANT_CANCEL"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_12283/*"SHORT_SERVANT_FRAME_QUEST"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_12276/*"SHORT_SERVANT_EQ_WAREHOUSE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_12281/*"SHORT_SERVANT_FRAME"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_12282/*"SHORT_SERVANT_FRAME_LIMIT"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_12268/*"SHORT_SERVANT_AREA_IMPROVE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_12285/*"SHORT_SERVANT_SELL"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_12274/*"SHORT_SERVANT_EQ_COMBINE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12284/*"SHORT_SERVANT_QUEST"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_12271/*"SHORT_SERVANT_COMMAND_CODE"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_12277/*"SHORT_SERVANT_EVENT_RECIPE"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_6618/*"FRIEND_GACHA_ADD_LIMIT"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_12278/*"SHORT_SERVANT_EVENT_TRADE"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_12275/*"SHORT_SERVANT_EQ_SELL"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_12288/*"SHORT_SERVANT_WAREHOUSE"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_12270/*"SHORT_SERVANT_COMBINE"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_12279/*"SHORT_SERVANT_EXPEDITION"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_12261/*"SHORT_DLG_TITLE"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_12273/*"SHORT_SERVANT_EQUIP"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_12259/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_12272/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_12286/*"SHORT_SERVANT_SERVANT"*/, v72, v73);
    sub_1BCA7E0(&StringLiteral_12287/*"SHORT_SERVANT_SUMMON"*/, v74, v75);
    byte_4B11008 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  this->fields.state = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"SHORT_DLG_TITLE"*/, 0LL);
  v81 = (System_String_o *)StringLiteral_1/*""*/;
  v128 = v79;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v82 = v81;
    value = LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12273/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12274/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12275/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v85 = &StringLiteral_12276/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v82 = (System_String_o *)StringLiteral_1/*""*/;
      v83 = (System_String_o *)StringLiteral_1/*""*/;
      value = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_19;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12286/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SHORT_SERVANT_SELL"*/, 0LL);
      v85 = &StringLiteral_12288/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    value = v84;
    v81 = LocalizationManager__Get((System_String_o *)*v85, 0LL);
  }
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
  if ( isQuest )
    v86 = (System_String_o **)&StringLiteral_12284/*"SHORT_SERVANT_QUEST"*/;
  else
    v86 = (System_String_o **)&StringLiteral_12287/*"SHORT_SERVANT_SUMMON"*/;
  v87 = LocalizationManager__Get(*v86, 0LL);
  switch ( eventType )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
      v89 = &StringLiteral_12279/*"SHORT_SERVANT_EXPEDITION"*/;
      goto LABEL_37;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
      v89 = &StringLiteral_12268/*"SHORT_SERVANT_AREA_IMPROVE"*/;
      goto LABEL_37;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
      v89 = &StringLiteral_12277/*"SHORT_SERVANT_EVENT_RECIPE"*/;
      goto LABEL_37;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
      v89 = &StringLiteral_12278/*"SHORT_SERVANT_EVENT_TRADE"*/;
LABEL_37:
      v87 = LocalizationManager__Get((System_String_o *)*v89, 0LL);
      break;
    default:
      break;
  }
  v90 = v87;
  if ( isQuest )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
    if ( type == 2 )
      v91 = &StringLiteral_12259/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    else
      v91 = &StringLiteral_12283/*"SHORT_SERVANT_FRAME_QUEST"*/;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !gameObject )
      goto LABEL_168;
    v93 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6618/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
    if ( v93 >= 1 )
    {
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)sub_1BCA888(object___TypeInfo, 5LL);
      if ( !gameObject )
        goto LABEL_168;
      v95 = (System_Object_array *)gameObject;
      if ( !v83
        || (gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(v83, gameObject->klass->_1.element_class)) != 0LL )
      {
        if ( !v95->max_length )
          goto LABEL_169;
        v95->m_Items[0] = (Il2CppObject *)v83;
        sub_1BCA784(v95->m_Items, v83);
        v133 = v93;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
        v96 = gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(gameObject, v95->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v95->max_length <= 1 )
            goto LABEL_169;
          v95->m_Items[1] = (Il2CppObject *)v96;
          gameObject = (UnityEngine_GameObject_o *)sub_1BCA784(&v95->m_Items[1], v96);
          if ( !v90
            || (gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(v90, v95->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v95->max_length <= 2 )
              goto LABEL_169;
            v95->m_Items[2] = (Il2CppObject *)v90;
            sub_1BCA784(&v95->m_Items[2], v90);
            v132 = haveNum;
            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
            v97 = gameObject;
            if ( !gameObject
              || (gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(gameObject, v95->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v95->max_length <= 3 )
                goto LABEL_169;
              v95->m_Items[3] = (Il2CppObject *)v97;
              sub_1BCA784(&v95->m_Items[3], v97);
              v131 = maxNum;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
              v98 = gameObject;
              if ( !gameObject
                || (gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(gameObject, v95->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v95->max_length > 4 )
                {
                  v95->m_Items[4] = (Il2CppObject *)v98;
                  v99 = v82;
                  sub_1BCA784(&v95->m_Items[4], v98);
                  v100 = v94;
                  v101 = v95;
                  goto LABEL_81;
                }
LABEL_169:
                sub_1BCAA44(gameObject, v77);
              }
            }
          }
        }
      }
LABEL_170:
      v127 = sub_1BCAA60();
      sub_1BCA908(v127, 0LL);
    }
    v91 = &StringLiteral_12281/*"SHORT_SERVANT_FRAME"*/;
  }
  v102 = LocalizationManager__Get((System_String_o *)*v91, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_1BCA888(object___TypeInfo, 4LL);
  if ( !gameObject )
    goto LABEL_168;
  v103 = gameObject;
  if ( v83 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(v83, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( !LODWORD(v103[1].klass) )
    goto LABEL_169;
  v103[1].monitor = v83;
  gameObject = (UnityEngine_GameObject_o *)sub_1BCA784(&v103[1].monitor, v83);
  if ( v90 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(v90, v103->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v103[1].klass) <= 1 )
    goto LABEL_169;
  *(_QWORD *)&v103[1].fields.m_CachedPtr = v90;
  sub_1BCA784(&v103[1].fields, v90);
  v133 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v133);
  v104 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(gameObject, v103->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v103[1].klass) <= 2 )
    goto LABEL_169;
  v103[2].klass = (UnityEngine_GameObject_c *)v104;
  sub_1BCA784(&v103[2], v104);
  v132 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
  v105 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA91C(gameObject, v103->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v103[1].klass) <= 3 )
    goto LABEL_169;
  v103[2].monitor = v105;
  v99 = v82;
  sub_1BCA784(&v103[2].monitor, v105);
  v100 = v102;
  v101 = (System_Object_array *)v103;
LABEL_81:
  v107 = System_String__Format_62415728(v100, v101, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v106);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v128 )
      v109 = v128;
    else
      v109 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v109, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    if ( v107 )
      v111 = v107;
    else
      v111 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v111, 0LL);
  }
  pwUpBtnLb = (UnityEngine_Object_o *)this->fields.pwUpBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    UILabel__set_text((UILabel_o *)gameObject, v99, 0LL);
  }
  sellBtnLb = (UnityEngine_Object_o *)this->fields.sellBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    UILabel__set_text((UILabel_o *)gameObject, v81, 0LL);
  }
  cancelBtnLb = (UnityEngine_Object_o *)this->fields.cancelBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    v117 = this->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v116);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v117 )
      goto LABEL_168;
    UILabel__set_text(v117, (System_String_o *)gameObject, 0LL);
  }
  sellBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.sellBtnCommandCodeLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    v121 = this->fields.cancelBtnCommandCodeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v120);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v121 )
      goto LABEL_168;
    UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
  }
  confirmDetailCommandCodeLabel = (UnityEngine_Object_o *)this->fields.confirmDetailCommandCodeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
          if ( v107 )
            v125 = v107;
          else
            v125 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v125, 0LL);
          goto LABEL_167;
        }
      }
    }
LABEL_168:
    sub_1BCAA3C(gameObject, v77);
  }
LABEL_167:
  v126 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v77, v123, v124);
  System_Action___ctor(v126, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v126, 0, 0LL);
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

  if ( (qword_4B11000 & 0x10000000000LL) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value, method);
    BYTE5(qword_4B11000) = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1BCACFC(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1100E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4747/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/, method, v2);
    byte_4B1100E = 1;
  }
  return (System_String_o *)StringLiteral_4747/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
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

  if ( (qword_4B11000 & 0x1000000000000LL) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value, method);
    BYTE6(qword_4B11000) = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05270;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05228;
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
  if ( (byte_4B11010 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_resultClicked_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B11010 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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