void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C1D53D & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1D53D = 1;
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
    sub_1C3B708(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_32411896(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_32411896(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C1D537 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ServantFrameShortDlgComponent_EndClose__, v5);
    byte_4C1D537 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(&this->fields.closeCallbackFunc);
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C3B708(p_closeCallbackFunc);
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

  if ( (byte_4C1D535 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1D535 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C3B9C0(confirmTitleLabel, method);
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

  if ( (byte_4C1D53B & 1) == 0 )
  {
    sub_1C3B764(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C3B764(&Method_ServantFrameShortDlgComponent_OnClickCancel__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4C1D53B = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_ServantFrameShortDlgComponent_OnClickCancel__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2FD93E0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_4C1D538 & 1) == 0 )
  {
    sub_1C3B764(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C3B764(&Method_ServantFrameShortDlgComponent_OnClickPwUp__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4C1D538 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickPwUp__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickPwUp__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_ServantFrameShortDlgComponent_OnClickPwUp__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2FD93E0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_4C1D539 & 1) == 0 )
  {
    sub_1C3B764(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C3B764(&Method_ServantFrameShortDlgComponent_OnClickSell__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4C1D539 = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickSell__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickSell__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_ServantFrameShortDlgComponent_OnClickSell__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2FD93E0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_4C1D53A & 1) == 0 )
  {
    sub_1C3B764(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C3B764(&Method_ServantFrameShortDlgComponent_OnClickWarehouse__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4C1D53A = 1;
  }
  v5 = Method_ServantFrameShortDlgComponent_OnClickWarehouse__;
  if ( (*((_BYTE *)Method_ServantFrameShortDlgComponent_OnClickWarehouse__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_ServantFrameShortDlgComponent_OnClickWarehouse__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    1,
    (const MethodInfo_2FD93E0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
  System_Object_array *v60; // x21
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  UnityEngine_GameObject_o *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  UnityEngine_GameObject_o *v68; // x23
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  UnityEngine_GameObject_o *v72; // x23
  System_String_o *v73; // x28
  System_String_o *v74; // x0
  System_Object_array *v75; // x1
  System_String_o *v76; // x21
  UnityEngine_GameObject_o *v77; // x27
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  UnityEngine_GameObject_o *v81; // x23
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  UnityEngine_GameObject_o *v85; // x23
  System_String_o *v86; // x24
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v88; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v90; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v95; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v98; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v100; // x1
  System_Action_o *v101; // x20
  __int64 v102; // x0
  System_String_o *v103; // [xsp+8h] [xbp-88h]
  System_String_o *value; // [xsp+18h] [xbp-78h]
  int32_t v106; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v107; // [xsp+28h] [xbp-68h] BYREF
  int32_t v108; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C1D536 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&haveNum);
    sub_1C3B764(&Method_DataManager_GetMasterData_ConstantMaster___, v14);
    sub_1C3B764(&int_TypeInfo, v15);
    sub_1C3B764(&LocalizationManager_TypeInfo, v16);
    sub_1C3B764(&object___TypeInfo, v17);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    sub_1C3B764(&Method_ServantFrameShortDlgComponent_EndOpen__, v19);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C3B764(&StringLiteral_12382/*"Serialization Callback '{1}' in type '{0}' must return void."*/, v21);
    sub_1C3B764(&StringLiteral_12396/*"ServantDying"*/, v22);
    sub_1C3B764(&StringLiteral_12389/*"SerializedPropertyCopyName"*/, v23);
    sub_1C3B764(&StringLiteral_12394/*"ServantCombine"*/, v24);
    sub_1C3B764(&StringLiteral_12395/*"ServantCostumeEventBalloon_"*/, v25);
    sub_1C3B764(&StringLiteral_12381/*"Serialization Callback '{1}' in type '{0}' must have a single parameter of type '{2}'."*/, v26);
    sub_1C3B764(&StringLiteral_12398/*"ServantEquipList"*/, v27);
    sub_1C3B764(&StringLiteral_12387/*"Serialized member does not have a ParameterInfo."*/, v28);
    sub_1C3B764(&StringLiteral_12397/*"ServantEQCombine"*/, v29);
    sub_1C3B764(&StringLiteral_12384/*"Serialization binder cannot be null."*/, v30);
    sub_1C3B764(&StringLiteral_12390/*"Servant1"*/, v31);
    sub_1C3B764(&StringLiteral_6661/*"FollowerScene"*/, v32);
    sub_1C3B764(&StringLiteral_12391/*"Servant2"*/, v33);
    sub_1C3B764(&StringLiteral_12388/*"SerializedLoginResult"*/, v34);
    sub_1C3B764(&StringLiteral_12401/*"ServantEquipStatusDialogPrefab(Clone)"*/, v35);
    sub_1C3B764(&StringLiteral_12383/*"Serialization Error Callback '{1}' in type '{0}' must have two parameters of type '{2}' and '{3}'."*/, v36);
    sub_1C3B764(&StringLiteral_12392/*"Servant4"*/, v37);
    sub_1C3B764(&StringLiteral_12374/*"Serbian"*/, v38);
    sub_1C3B764(&StringLiteral_12386/*"Serialized JSON: "*/, v39);
    sub_1C3B764(&StringLiteral_12372/*"Sequence contains no matching element"*/, v40);
    sub_1C3B764(&StringLiteral_12385/*"Serialization error."*/, v41);
    sub_1C3B764(&StringLiteral_1/*""*/, v42);
    sub_1C3B764(&StringLiteral_12399/*"ServantEquipListScene"*/, v43);
    sub_1C3B764(&StringLiteral_12400/*"ServantEquipSimpleDialog"*/, v44);
    byte_4C1D536 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C3B708(&this->fields.callbackFunc);
  this->fields.state = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12374/*"Serbian"*/, 0LL);
  v48 = (System_String_o *)StringLiteral_1/*""*/;
  v103 = v47;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12384/*"Serialization binder cannot be null."*/, 0LL);
    v49 = v48;
    value = LocalizationManager__Get((System_String_o *)StringLiteral_12385/*"Serialization error."*/, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12386/*"Serialized JSON: "*/, 0LL);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12387/*"Serialized member does not have a ParameterInfo."*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12388/*"SerializedLoginResult"*/, 0LL);
      v52 = &StringLiteral_12389/*"SerializedPropertyCopyName"*/;
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
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12399/*"ServantEquipListScene"*/, 0LL);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12383/*"Serialization Error Callback '{1}' in type '{0}' must have two parameters of type '{2}' and '{3}'."*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12398/*"ServantEquipList"*/, 0LL);
      v52 = &StringLiteral_12401/*"ServantEquipStatusDialogPrefab(Clone)"*/;
    }
    value = v51;
    v48 = LocalizationManager__Get((System_String_o *)*v52, 0LL);
  }
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isQuest )
    v53 = (System_String_o **)&StringLiteral_12397/*"ServantEQCombine"*/;
  else
    v53 = (System_String_o **)&StringLiteral_12400/*"ServantEquipSimpleDialog"*/;
  v54 = LocalizationManager__Get(*v53, 0LL);
  switch ( eventType )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12392/*"Servant4"*/;
      goto LABEL_37;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12381/*"Serialization Callback '{1}' in type '{0}' must have a single parameter of type '{2}'."*/;
      goto LABEL_37;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12390/*"Servant1"*/;
      goto LABEL_37;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_12391/*"Servant2"*/;
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
      v57 = &StringLiteral_12372/*"Sequence contains no matching element"*/;
    else
      v57 = &StringLiteral_12396/*"ServantDying"*/;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_168;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !gameObject )
      goto LABEL_168;
    v58 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6661/*"FollowerScene"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v58 >= 1 )
    {
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12395/*"ServantCostumeEventBalloon_"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)sub_1C3B80C(object___TypeInfo, 5LL);
      if ( !gameObject )
        goto LABEL_168;
      v60 = (System_Object_array *)gameObject;
      if ( !v50
        || (gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(v50, gameObject->klass->_1.element_class)) != 0LL )
      {
        if ( !v60->max_length )
          goto LABEL_169;
        v60->m_Items[0] = (Il2CppObject *)v50;
        sub_1C3B708(v60->m_Items);
        v108 = v58;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v61, v62, v63);
        v64 = gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(gameObject, v60->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v60->max_length <= 1 )
            goto LABEL_169;
          v60->m_Items[1] = (Il2CppObject *)v64;
          gameObject = (UnityEngine_GameObject_o *)sub_1C3B708(&v60->m_Items[1]);
          if ( !v56
            || (gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(v56, v60->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v60->max_length <= 2 )
              goto LABEL_169;
            v60->m_Items[2] = (Il2CppObject *)v56;
            sub_1C3B708(&v60->m_Items[2]);
            v107 = haveNum;
            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v107, v65, v66, v67);
            v68 = gameObject;
            if ( !gameObject
              || (gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(gameObject, v60->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v60->max_length <= 3 )
                goto LABEL_169;
              v60->m_Items[3] = (Il2CppObject *)v68;
              sub_1C3B708(&v60->m_Items[3]);
              v106 = maxNum;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v106, v69, v70, v71);
              v72 = gameObject;
              if ( !gameObject
                || (gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(gameObject, v60->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v60->max_length > 4 )
                {
                  v60->m_Items[4] = (Il2CppObject *)v72;
                  v73 = v49;
                  sub_1C3B708(&v60->m_Items[4]);
                  v74 = v59;
                  v75 = v60;
                  goto LABEL_81;
                }
LABEL_169:
                sub_1C3B9C8(gameObject, v46);
              }
            }
          }
        }
      }
LABEL_170:
      v102 = sub_1C3B9E4();
      sub_1C3B88C(v102, 0LL);
    }
    v57 = &StringLiteral_12394/*"ServantCombine"*/;
  }
  v76 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_1C3B80C(object___TypeInfo, 4LL);
  if ( !gameObject )
    goto LABEL_168;
  v77 = gameObject;
  if ( v50 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(v50, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( !LODWORD(v77[1].klass) )
    goto LABEL_169;
  v77[1].monitor = v50;
  gameObject = (UnityEngine_GameObject_o *)sub_1C3B708(&v77[1].monitor);
  if ( v56 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(v56, v77->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v77[1].klass) <= 1 )
    goto LABEL_169;
  *(_QWORD *)&v77[1].fields.m_CachedPtr = v56;
  sub_1C3B708(&v77[1].fields);
  v108 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v78, v79, v80);
  v81 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(gameObject, v77->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v77[1].klass) <= 2 )
    goto LABEL_169;
  v77[2].klass = (UnityEngine_GameObject_c *)v81;
  sub_1C3B708(&v77[2]);
  v107 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v107, v82, v83, v84);
  v85 = gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3B8A0(gameObject, v77->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_170;
  }
  if ( LODWORD(v77[1].klass) <= 3 )
    goto LABEL_169;
  v77[2].monitor = v85;
  v73 = v49;
  sub_1C3B708(&v77[2].monitor);
  v74 = v76;
  v75 = (System_Object_array *)v77;
LABEL_81:
  v86 = System_String__Format_63383120(v74, v75, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_168;
    if ( v103 )
      v88 = v103;
    else
      v88 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v88, 0LL);
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
    if ( v86 )
      v90 = v86;
    else
      v90 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v90, 0LL);
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
    UILabel__set_text((UILabel_o *)gameObject, v73, 0LL);
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
    v95 = this->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12382/*"Serialization Callback '{1}' in type '{0}' must return void."*/, 0LL);
    if ( !v95 )
      goto LABEL_168;
    UILabel__set_text(v95, (System_String_o *)gameObject, 0LL);
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
    v98 = this->fields.cancelBtnCommandCodeLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12382/*"Serialization Callback '{1}' in type '{0}' must return void."*/, 0LL);
    if ( !v98 )
      goto LABEL_168;
    UILabel__set_text(v98, (System_String_o *)gameObject, 0LL);
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
          if ( v86 )
            v100 = v86;
          else
            v100 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v100, 0LL);
          goto LABEL_167;
        }
      }
    }
LABEL_168:
    sub_1C3B9C0(gameObject, v46);
  }
LABEL_167:
  v101 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v101, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v101, 0, 0LL);
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

  if ( (byte_4C1D533 & 1) == 0 )
  {
    sub_1C3B764(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4C1D533 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1C3BC80(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1D53C & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_4762/*"Count_Action"*/, method);
    byte_4C1D53C = 1;
  }
  return (System_String_o *)StringLiteral_4762/*"Count_Action"*/;
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

  if ( (byte_4C1D534 & 1) == 0 )
  {
    sub_1C3B764(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4C1D534 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFrameShortDlgComponent_o *)sub_1C3BC80(v8);
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
  this->fields.m_target = (Il2CppObject *)sub_1A75B24;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A75ADC;
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
  if ( (byte_4C1D53E & 1) == 0 )
  {
    sub_1C3B764(&ServantFrameShortDlgComponent_resultClicked_TypeInfo, *(_QWORD *)&result);
    byte_4C1D53E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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