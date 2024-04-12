void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B2455 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B2455 = 1;
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantFrameShortDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_29268636(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_29268636(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B244F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantFrameShortDlgComponent_EndClose__);
    byte_42B244F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_42B244D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B244D = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__OnClickCancel(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42B2453 & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2453 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v5);
}


void __fastcall ServantFrameShortDlgComponent__OnClickPwUp(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42B2450 & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2450 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v5);
}


void __fastcall ServantFrameShortDlgComponent__OnClickSell(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42B2451 & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2451 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v5);
}


void __fastcall ServantFrameShortDlgComponent__OnClickWarehouse(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42B2452 & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2452 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v5);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_Int32_array **v25; // x28
  System_String_o *v26; // x0
  __int64 *v27; // x8
  __int64 *v28; // x8
  System_String_o *v29; // x0
  System_Int32_array **v30; // x23
  __int64 *v31; // x8
  __int64 *v32; // x8
  int32_t v33; // w0
  int32_t v34; // w24
  System_String_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Object_array *v42; // x27
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x24
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x23
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x23
  BattleServantConfConponent_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x23
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x23
  System_String_o *v109; // x25
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v111; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v113; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v118; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v121; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v123; // x1
  System_Action_o *v124; // x20
  __int64 v125; // x0
  __int64 v126; // x0
  System_String_o *v127; // [xsp+8h] [xbp-78h]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  System_String_o *v129; // [xsp+18h] [xbp-68h]
  int32_t v130; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v131; // [xsp+28h] [xbp-58h] BYREF
  int32_t v132; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42B244E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_ServantFrameShortDlgComponent_EndOpen__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_12307/*"SHORT_SERVANT_CANCEL"*/);
    sub_B52984(&StringLiteral_12320/*"SHORT_SERVANT_FRAME_QUEST"*/);
    sub_B52984(&StringLiteral_12314/*"SHORT_SERVANT_EQ_WAREHOUSE"*/);
    sub_B52984(&StringLiteral_12318/*"SHORT_SERVANT_FRAME"*/);
    sub_B52984(&StringLiteral_12319/*"SHORT_SERVANT_FRAME_LIMIT"*/);
    sub_B52984(&StringLiteral_12306/*"SHORT_SERVANT_AREA_IMPROVE"*/);
    sub_B52984(&StringLiteral_12322/*"SHORT_SERVANT_SELL"*/);
    sub_B52984(&StringLiteral_12312/*"SHORT_SERVANT_EQ_COMBINE"*/);
    sub_B52984(&StringLiteral_12321/*"SHORT_SERVANT_QUEST"*/);
    sub_B52984(&StringLiteral_12309/*"SHORT_SERVANT_COMMAND_CODE"*/);
    sub_B52984(&StringLiteral_12315/*"SHORT_SERVANT_EVENT_RECIPE"*/);
    sub_B52984(&StringLiteral_6508/*"FRIEND_GACHA_ADD_LIMIT"*/);
    sub_B52984(&StringLiteral_12313/*"SHORT_SERVANT_EQ_SELL"*/);
    sub_B52984(&StringLiteral_12325/*"SHORT_SERVANT_WAREHOUSE"*/);
    sub_B52984(&StringLiteral_12308/*"SHORT_SERVANT_COMBINE"*/);
    sub_B52984(&StringLiteral_12316/*"SHORT_SERVANT_EXPEDITION"*/);
    sub_B52984(&StringLiteral_12299/*"SHORT_DLG_TITLE"*/);
    sub_B52984(&StringLiteral_12311/*"SHORT_SERVANT_EQUIP"*/);
    sub_B52984(&StringLiteral_12297/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/);
    sub_B52984(&StringLiteral_12310/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_12323/*"SHORT_SERVANT_SERVANT"*/);
    sub_B52984(&StringLiteral_12324/*"SHORT_SERVANT_SUMMON"*/);
    byte_42B244E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_210;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.state = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v127 = LocalizationManager__Get((System_String_o *)StringLiteral_12299/*"SHORT_DLG_TITLE"*/, 0LL);
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  if ( type == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12309/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v24 = v23;
    v129 = LocalizationManager__Get((System_String_o *)StringLiteral_12310/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
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
      v25 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12311/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12312/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12313/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v27 = &StringLiteral_12314/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      v25 = (System_Int32_array **)StringLiteral_1/*""*/;
      v129 = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_23;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12308/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12322/*"SHORT_SERVANT_SELL"*/, 0LL);
      v27 = &StringLiteral_12325/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    v129 = v26;
    v23 = LocalizationManager__Get((System_String_o *)*v27, 0LL);
  }
LABEL_23:
  value = v24;
  if ( isQuest )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_12321/*"SHORT_SERVANT_QUEST"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = &StringLiteral_12324/*"SHORT_SERVANT_SUMMON"*/;
  }
  v29 = LocalizationManager__Get((System_String_o *)*v28, 0LL);
  if ( eventType == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = &StringLiteral_12315/*"SHORT_SERVANT_EVENT_RECIPE"*/;
  }
  else if ( eventType == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = &StringLiteral_12306/*"SHORT_SERVANT_AREA_IMPROVE"*/;
  }
  else
  {
    v30 = (System_Int32_array **)v29;
    if ( eventType != 1 )
      goto LABEL_48;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = &StringLiteral_12316/*"SHORT_SERVANT_EXPEDITION"*/;
  }
  v30 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v31, 0LL);
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
      v32 = &StringLiteral_12297/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = &StringLiteral_12320/*"SHORT_SERVANT_FRAME_QUEST"*/;
    }
    v35 = LocalizationManager__Get((System_String_o *)*v32, 0LL);
    gameObject = (UnityEngine_GameObject_o *)sub_B5299C(object___TypeInfo, 4LL);
    if ( !gameObject )
      goto LABEL_210;
    v42 = (System_Object_array *)gameObject;
    if ( !v25 || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(v25, gameObject->klass->_1.element_class)) != 0LL )
    {
      if ( !v42->max_length )
        goto LABEL_211;
      v42->m_Items[0] = (Il2CppObject *)v25;
      sub_B52920((BattleServantConfConponent_o *)v42->m_Items, v25, v71, v72, v73, v74, v75, v76);
      if ( !v30 || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(v30, v42->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v42->max_length <= 1 )
          goto LABEL_211;
        v42->m_Items[1] = (Il2CppObject *)v30;
        sub_B52920((BattleServantConfConponent_o *)&v42->m_Items[1], v30, v77, v78, v79, v80, v81, v82);
        v132 = haveNum;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
        v89 = (System_Int32_array **)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(gameObject, v42->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v42->max_length <= 2 )
            goto LABEL_211;
          v42->m_Items[2] = (Il2CppObject *)v89;
          sub_B52920((BattleServantConfConponent_o *)&v42->m_Items[2], v89, v83, v84, v85, v86, v87, v88);
          v131 = maxNum;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          v69 = (System_Int32_array **)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(gameObject, v42->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v42->max_length > 3 )
              goto LABEL_111;
            goto LABEL_211;
          }
        }
      }
    }
    goto LABEL_212;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_210;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !gameObject )
    goto LABEL_210;
  v33 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6508/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  if ( v33 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"SHORT_SERVANT_FRAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)sub_B5299C(object___TypeInfo, 4LL);
    if ( !gameObject )
      goto LABEL_210;
    v42 = (System_Object_array *)gameObject;
    if ( !v25 || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(v25, gameObject->klass->_1.element_class)) != 0LL )
    {
      if ( !v42->max_length )
        goto LABEL_211;
      v42->m_Items[0] = (Il2CppObject *)v25;
      sub_B52920((BattleServantConfConponent_o *)v42->m_Items, v25, v90, v91, v92, v93, v94, v95);
      if ( !v30 || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(v30, v42->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v42->max_length <= 1 )
          goto LABEL_211;
        v42->m_Items[1] = (Il2CppObject *)v30;
        sub_B52920((BattleServantConfConponent_o *)&v42->m_Items[1], v30, v96, v97, v98, v99, v100, v101);
        v132 = haveNum;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
        v108 = (System_Int32_array **)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(gameObject, v42->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v42->max_length <= 2 )
            goto LABEL_211;
          v42->m_Items[2] = (Il2CppObject *)v108;
          sub_B52920((BattleServantConfConponent_o *)&v42->m_Items[2], v108, v102, v103, v104, v105, v106, v107);
          v131 = maxNum;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          v69 = (System_Int32_array **)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_GameObject_o *)sub_B52A44(gameObject, v42->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v42->max_length > 3 )
            {
LABEL_111:
              v42->m_Items[3] = (Il2CppObject *)v69;
              v70 = (BattleServantConfConponent_o *)&v42->m_Items[3];
              goto LABEL_112;
            }
LABEL_211:
            v125 = sub_B52A88(gameObject);
            sub_B52A28(v125, 0LL);
          }
        }
      }
    }
LABEL_212:
    v126 = sub_B52A7C(gameObject);
    sub_B52A28(v126, 0LL);
  }
  v34 = v33;
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_B5299C(object___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_210;
  v42 = (System_Object_array *)gameObject;
  if ( v25 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B52A44(v25, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( !v42->max_length )
    goto LABEL_211;
  v42->m_Items[0] = (Il2CppObject *)v25;
  sub_B52920((BattleServantConfConponent_o *)v42->m_Items, v25, v36, v37, v38, v39, v40, v41);
  v132 = v34;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v132);
  v49 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B52A44(gameObject, v42->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v42->max_length <= 1 )
    goto LABEL_211;
  v42->m_Items[1] = (Il2CppObject *)v49;
  sub_B52920((BattleServantConfConponent_o *)&v42->m_Items[1], v49, v43, v44, v45, v46, v47, v48);
  if ( v30 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B52A44(v30, v42->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v42->max_length <= 2 )
    goto LABEL_211;
  v42->m_Items[2] = (Il2CppObject *)v30;
  sub_B52920((BattleServantConfConponent_o *)&v42->m_Items[2], v30, v50, v51, v52, v53, v54, v55);
  v131 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
  v62 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B52A44(gameObject, v42->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v42->max_length <= 3 )
    goto LABEL_211;
  v42->m_Items[3] = (Il2CppObject *)v62;
  sub_B52920((BattleServantConfConponent_o *)&v42->m_Items[3], v62, v56, v57, v58, v59, v60, v61);
  v130 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
  v69 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B52A44(gameObject, v42->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v42->max_length <= 4 )
    goto LABEL_211;
  v42->m_Items[4] = (Il2CppObject *)v69;
  v70 = (BattleServantConfConponent_o *)&v42->m_Items[4];
LABEL_112:
  sub_B52920(v70, v69, v63, v64, v65, v66, v67, v68);
  v109 = System_String__Format_44647040(v35, v42, 0LL);
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
    if ( v127 )
      v111 = v127;
    else
      v111 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v111, 0LL);
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
    if ( v109 )
      v113 = v109;
    else
      v113 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v113, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v129, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v23, 0LL);
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
    v118 = this->fields.cancelBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12307/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v118 )
      goto LABEL_210;
    UILabel__set_text(v118, (System_String_o *)gameObject, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v129, 0LL);
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
    v121 = this->fields.cancelBtnCommandCodeLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12307/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v121 )
      goto LABEL_210;
    UILabel__set_text(v121, (System_String_o *)gameObject, 0LL);
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
          if ( v109 )
            v123 = v109;
          else
            v123 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v123, 0LL);
          goto LABEL_209;
        }
      }
    }
LABEL_210:
    sub_B52A5C(gameObject, v16);
  }
LABEL_209:
  v124 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v124, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v124, 0, 0LL);
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

  if ( (byte_42B244B & 1) == 0 )
  {
    sub_B52984(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_42B244B = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B2454 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4260/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/);
    byte_42B2454 = 1;
  }
  return (System_String_o *)StringLiteral_4260/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
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

  if ( (byte_42B244C & 1) == 0 )
  {
    sub_B52984(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    byte_42B244C = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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
  sub_B52920(p_method);
}


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
  if ( (byte_42AD348 & 1) == 0 )
  {
    sub_B52984(&ServantFrameShortDlgComponent_resultClicked_TypeInfo);
    byte_42AD348 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v9, v11);
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