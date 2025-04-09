void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49B62E6 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B62E6 = 1;
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ServantFrameShortDlgComponent_CallbackFunc_o *v5; // x20
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B4CF34(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_31368904(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_31368904(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49B62E0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_ServantFrameShortDlgComponent_EndClose__, v6);
    byte_49B62E0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__EndClose(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFrameShortDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B4CF34(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
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

  if ( (byte_49B62DE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49B62DE = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(confirmTitleLabel, method);
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

  if ( (byte_49B62E4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B4CF90(&Method_ServantFrameShortDlgComponent_OnClickCancel__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49B62E4 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_ServantFrameShortDlgComponent_OnClickCancel__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EEAD00 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_49B62E1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B4CF90(&Method_ServantFrameShortDlgComponent_OnClickPwUp__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49B62E1 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickPwUp__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickPwUp__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_ServantFrameShortDlgComponent_OnClickPwUp__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2EEAD00 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_49B62E2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B4CF90(&Method_ServantFrameShortDlgComponent_OnClickSell__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49B62E2 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickSell__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickSell__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_ServantFrameShortDlgComponent_OnClickSell__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2EEAD00 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_49B62E3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B4CF90(&Method_ServantFrameShortDlgComponent_OnClickWarehouse__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49B62E3 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickWarehouse__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickWarehouse__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2EEAD00 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_String_o *v49; // x0
  System_String_o *v50; // x22
  System_String_o *v51; // x24
  System_String_o *v52; // x28
  System_String_o *v53; // x0
  __int64 *v54; // x8
  System_String_o **v55; // x8
  System_String_o *v56; // x0
  __int64 *v57; // x8
  System_String_o *v58; // x29
  __int64 *v59; // x8
  int32_t v60; // w23
  System_String_o *v61; // x27
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UnityEngine_GameObject_o *v64; // x21
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  UnityEngine_GameObject_o *v70; // x23
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  UnityEngine_GameObject_o *v78; // x23
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  UnityEngine_GameObject_o *v84; // x23
  System_String_o *v85; // x28
  System_String_o *v86; // x0
  System_Object_array *v87; // x1
  System_String_o *v88; // x21
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  UnityEngine_GameObject_o *v91; // x27
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  UnityEngine_GameObject_o *v99; // x23
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  UnityEngine_GameObject_o *v105; // x23
  System_String_o *v106; // x24
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v108; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v110; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v115; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v118; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v120; // x1
  System_Action_o *v121; // x20
  __int64 v122; // x0
  System_String_o *v123; // [xsp+8h] [xbp-88h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int32_t v126; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v127; // [xsp+28h] [xbp-68h] BYREF
  int32_t v128; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49B62DF & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&haveNum);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ConstantMaster___, v14);
    sub_1B4CF90(&int_TypeInfo, v15);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v16);
    sub_1B4CF90(&object___TypeInfo, v17);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v18);
    sub_1B4CF90(&Method_ServantFrameShortDlgComponent_EndOpen__, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B4CF90(&StringLiteral_11916/*"SHORT_SERVANT_CANCEL"*/, v21);
    sub_1B4CF90(&StringLiteral_11930/*"SHORT_SERVANT_FRAME_QUEST"*/, v22);
    sub_1B4CF90(&StringLiteral_11923/*"SHORT_SERVANT_EQ_WAREHOUSE"*/, v23);
    sub_1B4CF90(&StringLiteral_11928/*"SHORT_SERVANT_FRAME"*/, v24);
    sub_1B4CF90(&StringLiteral_11929/*"SHORT_SERVANT_FRAME_LIMIT"*/, v25);
    sub_1B4CF90(&StringLiteral_11915/*"SHORT_SERVANT_AREA_IMPROVE"*/, v26);
    sub_1B4CF90(&StringLiteral_11932/*"SHORT_SERVANT_SELL"*/, v27);
    sub_1B4CF90(&StringLiteral_11921/*"SHORT_SERVANT_EQ_COMBINE"*/, v28);
    sub_1B4CF90(&StringLiteral_11931/*"SHORT_SERVANT_QUEST"*/, v29);
    sub_1B4CF90(&StringLiteral_11918/*"SHORT_SERVANT_COMMAND_CODE"*/, v30);
    sub_1B4CF90(&StringLiteral_11924/*"SHORT_SERVANT_EVENT_RECIPE"*/, v31);
    sub_1B4CF90(&StringLiteral_6421/*"FRIEND_GACHA_ADD_LIMIT"*/, v32);
    sub_1B4CF90(&StringLiteral_11925/*"SHORT_SERVANT_EVENT_TRADE"*/, v33);
    sub_1B4CF90(&StringLiteral_11922/*"SHORT_SERVANT_EQ_SELL"*/, v34);
    sub_1B4CF90(&StringLiteral_11935/*"SHORT_SERVANT_WAREHOUSE"*/, v35);
    sub_1B4CF90(&StringLiteral_11917/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_1B4CF90(&StringLiteral_11926/*"SHORT_SERVANT_EXPEDITION"*/, v37);
    sub_1B4CF90(&StringLiteral_11908/*"SHORT_DLG_TITLE"*/, v38);
    sub_1B4CF90(&StringLiteral_11920/*"SHORT_SERVANT_EQUIP"*/, v39);
    sub_1B4CF90(&StringLiteral_11906/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/, v40);
    sub_1B4CF90(&StringLiteral_11919/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, v41);
    sub_1B4CF90(&StringLiteral_1/*""*/, v42);
    sub_1B4CF90(&StringLiteral_11933/*"SHORT_SERVANT_SERVANT"*/, v43);
    sub_1B4CF90(&StringLiteral_11934/*"SHORT_SERVANT_SUMMON"*/, v44);
    byte_49B62DF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v47, v48);
  this->fields.state = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SHORT_DLG_TITLE"*/, 0LL);
  v50 = (System_String_o *)StringLiteral_1/*""*/;
  v123 = v49;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11918/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v51 = v50;
    value = LocalizationManager__Get((System_String_o *)StringLiteral_11919/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11920/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11921/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11922/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v54 = &StringLiteral_11923/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v51 = (System_String_o *)StringLiteral_1/*""*/;
      v52 = (System_String_o *)StringLiteral_1/*""*/;
      value = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_19;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11933/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11917/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11932/*"SHORT_SERVANT_SELL"*/, 0LL);
      v54 = &StringLiteral_11935/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    value = v53;
    v50 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  }
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isQuest )
    v55 = (System_String_o **)&StringLiteral_11931/*"SHORT_SERVANT_QUEST"*/;
  else
    v55 = (System_String_o **)&StringLiteral_11934/*"SHORT_SERVANT_SUMMON"*/;
  v56 = LocalizationManager__Get(*v55, 0LL);
  switch ( eventType )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = &StringLiteral_11926/*"SHORT_SERVANT_EXPEDITION"*/;
      goto LABEL_37;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = &StringLiteral_11915/*"SHORT_SERVANT_AREA_IMPROVE"*/;
      goto LABEL_37;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = &StringLiteral_11924/*"SHORT_SERVANT_EVENT_RECIPE"*/;
      goto LABEL_37;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = &StringLiteral_11925/*"SHORT_SERVANT_EVENT_TRADE"*/;
LABEL_37:
      v56 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
      break;
    default:
      break;
  }
  v58 = v56;
  if ( isQuest )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( type == 2 )
      v59 = &StringLiteral_11906/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    else
      v59 = &StringLiteral_11930/*"SHORT_SERVANT_FRAME_QUEST"*/;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !gameObject )
      goto LABEL_168;
    v60 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6421/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v60 >= 1 )
    {
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)sub_1B4D038(object___TypeInfo, 5LL);
      if ( !gameObject )
        goto LABEL_168;
      v64 = gameObject;
      if ( !v52
        || (gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(v52, gameObject->klass->_1.element_class)) != 0LL )
      {
        if ( !LODWORD(v64[1].klass) )
          goto LABEL_169;
        v64[1].monitor = v52;
        sub_1B4CF34((CGThumbnailListItem_o *)&v64[1].monitor, (int32_t)v52, v62, v63);
        v128 = v60;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v128, v65, v66, v67);
        v70 = gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(gameObject, v64->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v64[1].klass) <= 1 )
            goto LABEL_169;
          *(_QWORD *)&v64[1].fields.m_CachedPtr = v70;
          sub_1B4CF34((CGThumbnailListItem_o *)&v64[1].fields, (int32_t)v70, v68, v69);
          if ( !v58 || (gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(v58, v64->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v64[1].klass) <= 2 )
              goto LABEL_169;
            v64[2].klass = (UnityEngine_GameObject_c *)v58;
            sub_1B4CF34((CGThumbnailListItem_o *)&v64[2], (int32_t)v58, v71, v72);
            v127 = haveNum;
            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v127, v73, v74, v75);
            v78 = gameObject;
            if ( !gameObject
              || (gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(gameObject, v64->klass->_1.element_class)) != 0LL )
            {
              if ( LODWORD(v64[1].klass) <= 3 )
                goto LABEL_169;
              v64[2].monitor = v78;
              sub_1B4CF34((CGThumbnailListItem_o *)&v64[2].monitor, (int32_t)v78, v76, v77);
              v126 = maxNum;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v126, v79, v80, v81);
              v84 = gameObject;
              if ( !gameObject
                || (gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(gameObject, v64->klass->_1.element_class)) != 0LL )
              {
                if ( LODWORD(v64[1].klass) > 4 )
                {
                  *(_QWORD *)&v64[2].fields.m_CachedPtr = v84;
                  v85 = v51;
                  sub_1B4CF34((CGThumbnailListItem_o *)&v64[2].fields, (int32_t)v84, v82, v83);
                  v86 = v61;
                  v87 = (System_Object_array *)v64;
                  goto LABEL_81;
                }
LABEL_169:
                sub_1B4D1F4(gameObject, v46);
              }
            }
          }
        }
      }
LABEL_170:
      v122 = sub_1B4D210();
      sub_1B4D0B8(v122, 0LL);
    }
    v59 = &StringLiteral_11928/*"SHORT_SERVANT_FRAME"*/;
  }
  v88 = LocalizationManager__Get((System_String_o *)*v59, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_1B4D038(object___TypeInfo, 4LL);
  if ( !gameObject )
    goto LABEL_168;
  v91 = gameObject;
  if ( v52 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(v52, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( !LODWORD(v91[1].klass) )
    goto LABEL_169;
  v91[1].monitor = v52;
  sub_1B4CF34((CGThumbnailListItem_o *)&v91[1].monitor, (int32_t)v52, v89, v90);
  if ( v58 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(v58, v91->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v91[1].klass) <= 1 )
    goto LABEL_169;
  *(_QWORD *)&v91[1].fields.m_CachedPtr = v58;
  sub_1B4CF34((CGThumbnailListItem_o *)&v91[1].fields, (int32_t)v58, v92, v93);
  v128 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v128, v94, v95, v96);
  v99 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(gameObject, v91->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v91[1].klass) <= 2 )
    goto LABEL_169;
  v91[2].klass = (UnityEngine_GameObject_c *)v99;
  sub_1B4CF34((CGThumbnailListItem_o *)&v91[2], (int32_t)v99, v97, v98);
  v127 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v127, v100, v101, v102);
  v105 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B4D0CC(gameObject, v91->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v91[1].klass) <= 3 )
    goto LABEL_169;
  v91[2].monitor = v105;
  v85 = v51;
  sub_1B4CF34((CGThumbnailListItem_o *)&v91[2].monitor, (int32_t)v105, v103, v104);
  v86 = v88;
  v87 = (System_Object_array *)v91;
LABEL_81:
  v106 = System_String__Format_61134896(v86, v87, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v123 )
      v108 = v123;
    else
      v108 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v108, 0LL);
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
    if ( v106 )
      v110 = v106;
    else
      v110 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v110, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v85, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v50, 0LL);
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
    v115 = this->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v115 )
      goto LABEL_168;
    UILabel__set_text(v115, (System_String_o *)gameObject, 0LL);
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
    v118 = this->fields.cancelBtnCommandCodeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11916/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v118 )
      goto LABEL_168;
    UILabel__set_text(v118, (System_String_o *)gameObject, 0LL);
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
          if ( v106 )
            v120 = v106;
          else
            v120 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v120, 0LL);
          goto LABEL_167;
        }
      }
    }
LABEL_168:
    sub_1B4D1EC(gameObject, v46);
  }
LABEL_167:
  v121 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v121, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v121, 0, 0LL);
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

  if ( (byte_49B62DC & 1) == 0 )
  {
    sub_1B4CF90(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_49B62DC = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1B4D4AC(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B62E5 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_4590/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/, method);
    byte_49B62E5 = 1;
  }
  return (System_String_o *)StringLiteral_4590/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
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

  if ( (byte_49B62DD & 1) == 0 )
  {
    sub_1B4CF90(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_49B62DD = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1B4D4AC(v8);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1995728;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19956E0;
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
  if ( (byte_49B62E7 & 1) == 0 )
  {
    sub_1B4CF90(&ServantFrameShortDlgComponent_resultClicked_TypeInfo, *(_QWORD *)&result);
    byte_49B62E7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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