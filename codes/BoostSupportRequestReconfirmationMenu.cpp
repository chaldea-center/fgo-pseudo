void __fastcall BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA558 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA558 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Awake(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Callback(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _BOOL4 isBoostItemUseConfirm; // w20
  System_Action_o *v12; // x20

  if ( (byte_42EA554 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    byte_42EA554 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, 0LL);
  OptionManager__SaveData(v12, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostSupportRequestReconfirmationMenu__Close_28518840(this, 0LL, v2);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close_28518840(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA553 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BoostSupportRequestReconfirmationMenu_EndClose__, v10, v11, v12);
    byte_42EA553 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__EndClose(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *closeCallbackFunc; // t1

  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v9 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EA555 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v4, v5, v6);
    byte_42EA555 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu(Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EA556 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EA556 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  BoostSupportRequestReconfirmationMenu__Callback(this, v8);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu(Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Open(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostEntity_o *boostEntity,
        BoostFunctionUtility_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *Instance; // x0
  __int64 v46; // x1
  SkillEntity_o *Entity; // x0
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v49; // x21
  UILabel_o *skillDetailLabel; // x22
  UILabel_o *consumptionLabel; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v53; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20

  if ( (byte_42EA551 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, (_DWORD)boostEntity, (_DWORD)callback, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&OptionManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2640/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_2657/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_2638/*"BOOST_ITEM_USE_CANCEL"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_3334/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v35, v36, v37);
    byte_42EA551 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.serectBoostEntity = boostEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.serectBoostEntity,
    (System_Int32_array **)boostEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2657/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_31;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              boostEntity->fields.skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v49 = Entity;
    Instance = SkillEntity__getName(Entity, 0LL);
    if ( !Instance )
      goto LABEL_31;
    Instance = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Instance->klass->vtable._3_ToString.method)(
                                    Instance,
                                    Instance->klass->vtable._4_CompareTo.methodPtr);
    if ( !skillNameLabel )
      goto LABEL_31;
    UILabel__set_text(skillNameLabel, Instance, 0LL);
    skillDetailLabel = this->fields.skillDetailLabel;
    Instance = SkillEntity__getEffectExplanation(v49, 0, 0LL);
    if ( !skillDetailLabel )
      goto LABEL_31;
    UILabel__set_text(skillDetailLabel, Instance, 0LL);
    Instance = (System_String_o *)this->fields.skillDetailLabel;
    if ( !Instance )
      goto LABEL_31;
    UILabel__set_alignment(
      (UILabel_o *)Instance,
      *(_DWORD *)&Instance[6].fields.m_firstChar > SLODWORD(Instance[17].monitor),
      0LL);
  }
  consumptionLabel = this->fields.consumptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3334/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_31;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)this->fields.consumptionLabel;
  if ( !Instance )
    goto LABEL_31;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_31;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0LL);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v53);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2640/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2638/*"BOOST_ITEM_USE_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0LL),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(Instance, v46);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 1, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu___Callback_b__24_0(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  BoostFunctionUtility_CallbackFunc_o *v10; // x19
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  __int64 v12; // x0
  __int64 v13; // x1
  struct BoostEntity_o *serectBoostEntity; // x8

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_B5D69C(v12, v13);
    BoostFunctionUtility_CallbackFunc__Invoke(v10, 2, serectBoostEntity->fields.id, 0LL);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__add_callbackFunc(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostSupportRequestReconfirmationMenu_o *v12; // x0
  BoostFunctionUtility_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA54F & 1) == 0 )
  {
    sub_B5D5C4(&BoostFunctionUtility_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA54F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v9->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostSupportRequestReconfirmationMenu_o *)sub_B5D990(v9);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v12, v13, v14);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  bool v6; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42EA557 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA557 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
    return this->fields.closeButton;
  return result;
}


void __fastcall BoostSupportRequestReconfirmationMenu__remove_callbackFunc(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostSupportRequestReconfirmationMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA550 & 1) == 0 )
  {
    sub_B5D5C4(&BoostFunctionUtility_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA550 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v9->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostSupportRequestReconfirmationMenu_o *)sub_B5D990(v9);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v10; // x21
  struct UISprite_array **p_itemIcon; // x23
  __int64 v12; // x24
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v14; // w26
  __int64 v15; // x8
  struct UISprite_array *v16; // x9
  UISprite_o *v17; // x21
  int32_t v18; // w22
  struct UILabel_array *v19; // x8
  UILabel_o *v20; // x21
  struct UILabel_array *v21; // x8
  UIWidget_o *v22; // x21
  int v23; // s0
  struct UISprite_array *v27; // x8
  struct UILabel_array *v28; // x8
  struct UISprite_array *v29; // x8
  __int64 v30; // x22
  __int64 v31; // x8
  struct UILabel_array *v32; // x8
  struct UISprite_array *v33; // x8
  struct UILabel_array *v34; // x8
  float v35; // s0
  struct UILabel_array *v36; // x9
  UILabel_o *v37; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  __int64 v39; // x0
  int v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA552 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)commonConsumeEntityList, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EA552 = 1;
  }
  v40 = 0;
  if ( commonConsumeEntityList && *(_QWORD *)&commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0LL);
    v40 = 0;
    LODWORD(v10) = commonConsumeEntityList->max_length;
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)v10 > 0 )
    {
      v12 = 4LL;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_54;
        v14 = v12 - 4;
        if ( (int)v12 - 4 >= (signed int)itemNumLabel->max_length )
          break;
        if ( v14 >= (unsigned int)v10 )
          goto LABEL_55;
        v15 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v12);
        if ( !v15 )
          goto LABEL_54;
        v40 = *(_DWORD *)(v15 + 32);
        v16 = *p_itemIcon;
        if ( !*p_itemIcon )
          goto LABEL_54;
        if ( v14 >= v16->max_length )
          goto LABEL_55;
        v17 = (UISprite_o *)*((_QWORD *)&v16->obj.klass + v12);
        v18 = *(_DWORD *)(v15 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v17, v18, 0LL);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          goto LABEL_54;
        if ( v14 >= v19->max_length )
          goto LABEL_55;
        v20 = (UILabel_o *)*((_QWORD *)&v19->obj.klass + v12);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v40, 0LL);
        if ( !v20 )
          goto LABEL_54;
        UILabel__set_text(v20, (System_String_o *)consumeItem, 0LL);
        v21 = this->fields.itemNumLabel;
        if ( !v21 )
          goto LABEL_54;
        if ( v14 >= v21->max_length )
          goto LABEL_55;
        v22 = (UIWidget_o *)*((_QWORD *)&v21->obj.klass + v12);
        *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_yellow(0LL);
        if ( !v22 )
          goto LABEL_54;
        UIWidget__set_color(v22, *(UnityEngine_Color_o *)&v23, 0LL);
        v27 = *p_itemIcon;
        if ( !*p_itemIcon )
          goto LABEL_54;
        if ( v14 >= v27->max_length )
          goto LABEL_55;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v27->obj.klass + v12);
        if ( !consumeItem )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v28 = this->fields.itemNumLabel;
        if ( !v28 )
          goto LABEL_54;
        if ( v14 >= v28->max_length )
          goto LABEL_55;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v28->obj.klass + v12);
        if ( !consumeItem )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v10 = *(_QWORD *)&commonConsumeEntityList->max_length;
      }
      while ( (int)++v12 - 4 < (int)v10 );
    }
    v29 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_54;
    v30 = 8LL * (int)v10 + 32;
    while ( 1 )
    {
      v31 = *(_QWORD *)&v29->max_length;
      if ( (int)v10 >= (int)v31 )
        break;
      v32 = this->fields.itemNumLabel;
      if ( !v32 )
        goto LABEL_54;
      if ( (unsigned int)v10 >= v32->max_length )
        goto LABEL_55;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v32->obj.klass + v30);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v33 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)v10 >= v33->max_length )
            goto LABEL_55;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v33->obj.klass + v30);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
            v34 = this->fields.itemNumLabel;
            if ( v34 )
            {
              if ( (unsigned int)v10 >= v34->max_length )
                goto LABEL_55;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v34->obj.klass + v30);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
                v29 = *p_itemIcon;
                LODWORD(v10) = v10 + 1;
                v30 += 8LL;
                if ( *p_itemIcon )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    v35 = 0.0;
    if ( v40 <= 9 )
    {
      v36 = this->fields.itemNumLabel;
      if ( !v36 )
        goto LABEL_54;
      if ( !v36->max_length )
      {
LABEL_55:
        v39 = sub_B5D6C8(consumeItem);
        sub_B5D668(v39, 0LL);
      }
      v37 = v36->m_Items[0];
      if ( !v37 )
LABEL_54:
        sub_B5D69C(consumeItem, commonConsumeEntityList);
      v35 = (float)(v37->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v35
    + (float)((float)(consumeItemIconGrid->fields.cellHeight * 0.5) * (float)(v31 - commonConsumeEntityList->max_length)),
      0LL);
    consumeItem = (UnityEngine_GameObject_o *)this->fields.consumeItemIconGrid;
    if ( !consumeItem )
      goto LABEL_54;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))consumeItem->klass[1]._1.castClass)(
      consumeItem,
      consumeItem->klass[1]._1.declaringType);
  }
  else
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(consumeItem, 0, 0LL);
  }
}