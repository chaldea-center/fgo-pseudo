void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4189F9A & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189F9A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__Callback(
        ServantFrameShortDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v9; // x20
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantFrameShortDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_29322292(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_29322292(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4189F94 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantFrameShortDlgComponent_EndClose__, v10);
    byte_4189F94 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__EndClose(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFrameShortDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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

  if ( (byte_4189F92 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4189F92 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(confirmTitleLabel, method);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4189F98 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189F98 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v7);
}


void __fastcall ServantFrameShortDlgComponent__OnClickPwUp(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4189F95 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189F95 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v7);
}


void __fastcall ServantFrameShortDlgComponent__OnClickSell(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4189F96 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189F96 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v7);
}


void __fastcall ServantFrameShortDlgComponent__OnClickWarehouse(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4189F97 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189F97 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v7);
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
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  System_Int32_array **v55; // x28
  System_String_o *v56; // x0
  __int64 *v57; // x8
  __int64 *v58; // x8
  System_String_o *v59; // x0
  System_Int32_array **v60; // x23
  __int64 *v61; // x8
  __int64 *v62; // x8
  int32_t v63; // w0
  int32_t v64; // w24
  System_String_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Object_array *v72; // x27
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x24
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x23
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x23
  BattleServantConfConponent_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x23
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x23
  System_String_o *v139; // x25
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v141; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v143; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v148; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v151; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v153; // x1
  System_Action_o *v154; // x20
  __int64 v155; // x0
  __int64 v156; // x0
  System_String_o *v157; // [xsp+8h] [xbp-78h]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  System_String_o *v159; // [xsp+18h] [xbp-68h]
  int32_t v160; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v161; // [xsp+28h] [xbp-58h] BYREF
  int32_t v162; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4189F93 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&haveNum);
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantMaster___, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&object___TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_ServantFrameShortDlgComponent_EndOpen__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_12218/*"SHORT_SERVANT_CANCEL"*/, v22);
    sub_B2C35C(&StringLiteral_12231/*"SHORT_SERVANT_FRAME_QUEST"*/, v23);
    sub_B2C35C(&StringLiteral_12225/*"SHORT_SERVANT_EQ_WAREHOUSE"*/, v24);
    sub_B2C35C(&StringLiteral_12229/*"SHORT_SERVANT_FRAME"*/, v25);
    sub_B2C35C(&StringLiteral_12230/*"SHORT_SERVANT_FRAME_LIMIT"*/, v26);
    sub_B2C35C(&StringLiteral_12217/*"SHORT_SERVANT_AREA_IMPROVE"*/, v27);
    sub_B2C35C(&StringLiteral_12233/*"SHORT_SERVANT_SELL"*/, v28);
    sub_B2C35C(&StringLiteral_12223/*"SHORT_SERVANT_EQ_COMBINE"*/, v29);
    sub_B2C35C(&StringLiteral_12232/*"SHORT_SERVANT_QUEST"*/, v30);
    sub_B2C35C(&StringLiteral_12220/*"SHORT_SERVANT_COMMAND_CODE"*/, v31);
    sub_B2C35C(&StringLiteral_12226/*"SHORT_SERVANT_EVENT_RECIPE"*/, v32);
    sub_B2C35C(&StringLiteral_6465/*"FRIEND_GACHA_ADD_LIMIT"*/, v33);
    sub_B2C35C(&StringLiteral_12224/*"SHORT_SERVANT_EQ_SELL"*/, v34);
    sub_B2C35C(&StringLiteral_12236/*"SHORT_SERVANT_WAREHOUSE"*/, v35);
    sub_B2C35C(&StringLiteral_12219/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_B2C35C(&StringLiteral_12227/*"SHORT_SERVANT_EXPEDITION"*/, v37);
    sub_B2C35C(&StringLiteral_12210/*"SHORT_DLG_TITLE"*/, v38);
    sub_B2C35C(&StringLiteral_12222/*"SHORT_SERVANT_EQUIP"*/, v39);
    sub_B2C35C(&StringLiteral_12208/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/, v40);
    sub_B2C35C(&StringLiteral_12221/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, v41);
    sub_B2C35C(&StringLiteral_1/*""*/, v42);
    sub_B2C35C(&StringLiteral_12234/*"SHORT_SERVANT_SERVANT"*/, v43);
    sub_B2C35C(&StringLiteral_12235/*"SHORT_SERVANT_SUMMON"*/, v44);
    byte_4189F93 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_210;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.state = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v157 = LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHORT_DLG_TITLE"*/, 0LL);
  v53 = (System_String_o *)StringLiteral_1/*""*/;
  if ( type == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v55 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v54 = v53;
    v159 = LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12224/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v57 = &StringLiteral_12225/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v54 = (System_String_o *)StringLiteral_1/*""*/;
      v55 = (System_Int32_array **)StringLiteral_1/*""*/;
      v159 = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_23;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12234/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SHORT_SERVANT_SELL"*/, 0LL);
      v57 = &StringLiteral_12236/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    v159 = v56;
    v53 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  }
LABEL_23:
  value = v54;
  if ( isQuest )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = &StringLiteral_12232/*"SHORT_SERVANT_QUEST"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = &StringLiteral_12235/*"SHORT_SERVANT_SUMMON"*/;
  }
  v59 = LocalizationManager__Get((System_String_o *)*v58, 0LL);
  if ( eventType == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = &StringLiteral_12226/*"SHORT_SERVANT_EVENT_RECIPE"*/;
  }
  else if ( eventType == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = &StringLiteral_12217/*"SHORT_SERVANT_AREA_IMPROVE"*/;
  }
  else
  {
    v60 = (System_Int32_array **)v59;
    if ( eventType != 1 )
      goto LABEL_48;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = &StringLiteral_12227/*"SHORT_SERVANT_EXPEDITION"*/;
  }
  v60 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v61, 0LL);
LABEL_48:
  if ( isQuest )
  {
    if ( type == 2 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = &StringLiteral_12208/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = &StringLiteral_12231/*"SHORT_SERVANT_FRAME_QUEST"*/;
    }
    v65 = LocalizationManager__Get((System_String_o *)*v62, 0LL);
    gameObject = (UnityEngine_GameObject_o *)sub_B2C374(object___TypeInfo, 4LL);
    if ( !gameObject )
      goto LABEL_210;
    v72 = (System_Object_array *)gameObject;
    if ( !v55 || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(v55, gameObject->klass->_1.element_class)) != 0LL )
    {
      if ( !v72->max_length )
        goto LABEL_211;
      v72->m_Items[0] = (Il2CppObject *)v55;
      sub_B2C2F8((BattleServantConfConponent_o *)v72->m_Items, v55, v101, v102, v103, v104, v105, v106);
      if ( !v60 || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(v60, v72->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v72->max_length <= 1 )
          goto LABEL_211;
        v72->m_Items[1] = (Il2CppObject *)v60;
        sub_B2C2F8((BattleServantConfConponent_o *)&v72->m_Items[1], v60, v107, v108, v109, v110, v111, v112);
        v162 = haveNum;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
        v119 = (System_Int32_array **)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(gameObject, v72->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v72->max_length <= 2 )
            goto LABEL_211;
          v72->m_Items[2] = (Il2CppObject *)v119;
          sub_B2C2F8((BattleServantConfConponent_o *)&v72->m_Items[2], v119, v113, v114, v115, v116, v117, v118);
          v161 = maxNum;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v161);
          v99 = (System_Int32_array **)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(gameObject, v72->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v72->max_length > 3 )
              goto LABEL_111;
            goto LABEL_211;
          }
        }
      }
    }
    goto LABEL_212;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_210;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !gameObject )
    goto LABEL_210;
  v63 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6465/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  if ( v63 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SHORT_SERVANT_FRAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)sub_B2C374(object___TypeInfo, 4LL);
    if ( !gameObject )
      goto LABEL_210;
    v72 = (System_Object_array *)gameObject;
    if ( !v55 || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(v55, gameObject->klass->_1.element_class)) != 0LL )
    {
      if ( !v72->max_length )
        goto LABEL_211;
      v72->m_Items[0] = (Il2CppObject *)v55;
      sub_B2C2F8((BattleServantConfConponent_o *)v72->m_Items, v55, v120, v121, v122, v123, v124, v125);
      if ( !v60 || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(v60, v72->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v72->max_length <= 1 )
          goto LABEL_211;
        v72->m_Items[1] = (Il2CppObject *)v60;
        sub_B2C2F8((BattleServantConfConponent_o *)&v72->m_Items[1], v60, v126, v127, v128, v129, v130, v131);
        v162 = haveNum;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
        v138 = (System_Int32_array **)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(gameObject, v72->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v72->max_length <= 2 )
            goto LABEL_211;
          v72->m_Items[2] = (Il2CppObject *)v138;
          sub_B2C2F8((BattleServantConfConponent_o *)&v72->m_Items[2], v138, v132, v133, v134, v135, v136, v137);
          v161 = maxNum;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v161);
          v99 = (System_Int32_array **)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(gameObject, v72->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v72->max_length > 3 )
            {
LABEL_111:
              v72->m_Items[3] = (Il2CppObject *)v99;
              v100 = (BattleServantConfConponent_o *)&v72->m_Items[3];
              goto LABEL_112;
            }
LABEL_211:
            v155 = sub_B2C460(gameObject);
            sub_B2C400(v155, 0LL);
          }
        }
      }
    }
LABEL_212:
    v156 = sub_B2C454(gameObject);
    sub_B2C400(v156, 0LL);
  }
  v64 = v63;
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_B2C374(object___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_210;
  v72 = (System_Object_array *)gameObject;
  if ( v55 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(v55, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( !v72->max_length )
    goto LABEL_211;
  v72->m_Items[0] = (Il2CppObject *)v55;
  sub_B2C2F8((BattleServantConfConponent_o *)v72->m_Items, v55, v66, v67, v68, v69, v70, v71);
  v162 = v64;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
  v79 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(gameObject, v72->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v72->max_length <= 1 )
    goto LABEL_211;
  v72->m_Items[1] = (Il2CppObject *)v79;
  sub_B2C2F8((BattleServantConfConponent_o *)&v72->m_Items[1], v79, v73, v74, v75, v76, v77, v78);
  if ( v60 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(v60, v72->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v72->max_length <= 2 )
    goto LABEL_211;
  v72->m_Items[2] = (Il2CppObject *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v72->m_Items[2], v60, v80, v81, v82, v83, v84, v85);
  v161 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v161);
  v92 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(gameObject, v72->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v72->max_length <= 3 )
    goto LABEL_211;
  v72->m_Items[3] = (Il2CppObject *)v92;
  sub_B2C2F8((BattleServantConfConponent_o *)&v72->m_Items[3], v92, v86, v87, v88, v89, v90, v91);
  v160 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v160);
  v99 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B2C41C(gameObject, v72->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v72->max_length <= 4 )
    goto LABEL_211;
  v72->m_Items[4] = (Il2CppObject *)v99;
  v100 = (BattleServantConfConponent_o *)&v72->m_Items[4];
LABEL_112:
  sub_B2C2F8(v100, v99, v93, v94, v95, v96, v97, v98);
  v139 = System_String__Format_44384256(v65, v72, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_210;
    if ( v157 )
      v141 = v157;
    else
      v141 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v141, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_210;
    if ( v139 )
      v143 = v139;
    else
      v143 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v143, 0LL);
  }
  pwUpBtnLb = (UnityEngine_Object_o *)this->fields.pwUpBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pwUpBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, value, 0LL);
  }
  sellBtnLb = (UnityEngine_Object_o *)this->fields.sellBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sellBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, v159, 0LL);
  }
  warehouseBtnLb = (UnityEngine_Object_o *)this->fields.warehouseBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warehouseBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, v53, 0LL);
  }
  cancelBtnLb = (UnityEngine_Object_o *)this->fields.cancelBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    v148 = this->fields.cancelBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v148 )
      goto LABEL_210;
    UILabel__set_text(v148, (System_String_o *)gameObject, 0LL);
  }
  sellBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.sellBtnCommandCodeLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sellBtnCommandCodeLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, v159, 0LL);
  }
  cancelBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.cancelBtnCommandCodeLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnCommandCodeLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
    v151 = this->fields.cancelBtnCommandCodeLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v151 )
      goto LABEL_210;
    UILabel__set_text(v151, (System_String_o *)gameObject, 0LL);
  }
  confirmDetailCommandCodeLabel = (UnityEngine_Object_o *)this->fields.confirmDetailCommandCodeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
          if ( v139 )
            v153 = v139;
          else
            v153 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v153, 0LL);
          goto LABEL_209;
        }
      }
    }
LABEL_210:
    sub_B2C434(gameObject, v46);
  }
LABEL_209:
  v154 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v154, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v154, 0, 0LL);
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

  if ( (byte_4189F90 & 1) == 0 )
  {
    sub_B2C35C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4189F90 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189F99 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4222/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/, method);
    byte_4189F99 = 1;
  }
  return (System_String_o *)StringLiteral_4222/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
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

  if ( (byte_4189F91 & 1) == 0 )
  {
    sub_B2C35C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4189F91 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantFrameShortDlgComponent_CallbackFunc__BeginInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_41853EE & 1) == 0 )
  {
    sub_B2C35C(&ServantFrameShortDlgComponent_resultClicked_TypeInfo, *(_QWORD *)&result);
    byte_41853EE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFrameShortDlgComponent_CallbackFunc__Invoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  ServantFrameShortDlgComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  ServantFrameShortDlgComponent_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (ServantFrameShortDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}