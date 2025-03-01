void __fastcall BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BF8178 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BF8178 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Callback(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 isBoostItemUseConfirm; // w22
  System_Action_o *v6; // x20

  if ( (byte_4BF8174 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, v3);
    sub_1C2E12C(&OptionManager_TypeInfo, v4);
    byte_4BF8174 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, 0LL);
  OptionManager__SaveData(v6, 0LL);
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

  BoostSupportRequestReconfirmationMenu__Close_31127308(this, 0LL, v2);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close_31127308(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BF8173 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_BoostSupportRequestReconfirmationMenu_EndClose__, v5);
    byte_4BF8173 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2E0D0(&this->fields.closeCallbackFunc);
  v6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
}


void __fastcall BoostSupportRequestReconfirmationMenu__EndClose(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *closeCallbackFunc; // t1

  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v3 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C2E0D0(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BF8175 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4BF8175 = 1;
  }
  v3 = Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2E144();
  v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v6);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BF8176 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BF8176 = 1;
  }
  v4 = Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2E144();
  v5 = (System_Reflection_MethodBase_o *)sub_1C2E110(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
  BoostSupportRequestReconfirmationMenu__Callback(this, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v8);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Open(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostEntity_o *boostEntity,
        BoostFunctionUtility_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v21; // x21
  UILabel_o *skillDetailLabel; // x22
  UILabel_o *consumptionLabel; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v25; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  const MethodInfo *v28; // x3

  if ( (byte_4BF8171 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, boostEntity);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SkillMaster___, v7);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v9);
    sub_1C2E12C(&OptionManager_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C2E12C(&StringLiteral_3096/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, v12);
    sub_1C2E12C(&StringLiteral_3114/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, v13);
    sub_1C2E12C(&StringLiteral_3094/*"BOOST_ITEM_USE_CANCEL"*/, v14);
    sub_1C2E12C(&StringLiteral_3808/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v15);
    byte_4BF8171 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2E0D0(&this->fields.callbackFunc);
  this->fields.serectBoostEntity = boostEntity;
  sub_1C2E0D0(&this->fields.serectBoostEntity);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3114/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             boostEntity->fields.skillId,
             (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v21 = (SkillEntity_o *)Entity;
    Instance = SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
    if ( !Instance )
      goto LABEL_28;
    Instance = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Instance->klass->vtable._3_ToString.method)(
                                    Instance,
                                    Instance->klass->vtable._4_CompareTo.methodPtr);
    if ( !skillNameLabel )
      goto LABEL_28;
    UILabel__set_text(skillNameLabel, Instance, 0LL);
    skillDetailLabel = this->fields.skillDetailLabel;
    Instance = SkillEntity__getEffectExplanation(v21, 0, 0LL);
    if ( !skillDetailLabel )
      goto LABEL_28;
    UILabel__set_text(skillDetailLabel, Instance, 0LL);
    Instance = (System_String_o *)this->fields.skillDetailLabel;
    if ( !Instance )
      goto LABEL_28;
    UILabel__set_alignment((UILabel_o *)Instance, SHIDWORD(Instance[7].klass) > Instance[17].fields._stringLength, 0LL);
  }
  consumptionLabel = this->fields.consumptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3808/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_28;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)this->fields.consumptionLabel;
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_28;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0LL);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v25);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3096/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3094/*"BOOST_ITEM_USE_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0LL),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_28:
    sub_1C2E388(Instance, v18);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 1, v28);
}


void __fastcall BoostSupportRequestReconfirmationMenu___Callback_b__24_0(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x0
  struct BoostFunctionUtility_CallbackFunc_o *v4; // x20
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  __int64 v6; // x0
  __int64 v7; // x1
  struct BoostEntity_o *serectBoostEntity; // x8

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0LL;
  v6 = sub_1C2E0D0(p_callbackFunc);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_1C2E388(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      2LL,
      (unsigned int)serectBoostEntity->fields.id,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__add_callbackFunc(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestReconfirmationMenu_o *v11; // x0
  BoostFunctionUtility_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BF816F & 1) == 0 )
  {
    sub_1C2E12C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4BF816F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1C2E648(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4BF8177 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF8177 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


void __fastcall BoostSupportRequestReconfirmationMenu__remove_callbackFunc(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestReconfirmationMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BF8170 & 1) == 0 )
  {
    sub_1C2E12C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4BF8170 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1C2E648(v8);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v11, v12);
}


void __fastcall BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 v10; // x23
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v12; // w25
  __int64 v13; // x8
  struct UISprite_array *itemIcon; // x9
  UISprite_o *v15; // x21
  int32_t v16; // w22
  struct UILabel_array *v17; // x8
  UILabel_o *v18; // x21
  struct UILabel_array *v19; // x8
  struct UISprite_array *v20; // x8
  struct UILabel_array *v21; // x8
  struct UISprite_array *v22; // x8
  __int64 v23; // x22
  __int64 v24; // x8
  struct UILabel_array *v25; // x8
  struct UISprite_array *v26; // x8
  struct UILabel_array *v27; // x8
  float v28; // s0
  struct UILabel_array *v29; // x9
  UILabel_o *v30; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  int v32; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BF8172 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, commonConsumeEntityList);
    sub_1C2E12C(&StringLiteral_1/*""*/, v5);
    byte_4BF8172 = 1;
  }
  if ( commonConsumeEntityList && *(_QWORD *)&commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0LL);
    v32 = 0;
    LODWORD(v9) = commonConsumeEntityList->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 4LL;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_53;
        v12 = v10 - 4;
        if ( (int)v10 - 4 >= (signed int)itemNumLabel->max_length )
          break;
        if ( v12 >= (unsigned int)v9 )
          goto LABEL_54;
        v13 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v10);
        if ( !v13 )
          goto LABEL_53;
        v32 = *(_DWORD *)(v13 + 32);
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_53;
        if ( v12 >= itemIcon->max_length )
          goto LABEL_54;
        v15 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v10);
        v16 = *(_DWORD *)(v13 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v15, v16, 0LL);
        v17 = this->fields.itemNumLabel;
        if ( !v17 )
          goto LABEL_53;
        if ( v12 >= v17->max_length )
          goto LABEL_54;
        v18 = (UILabel_o *)*((_QWORD *)&v17->obj.klass + v10);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v32, 0LL);
        if ( !v18 )
          goto LABEL_53;
        UILabel__set_text(v18, (System_String_o *)consumeItem, 0LL);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          goto LABEL_53;
        if ( v12 >= v19->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v19->obj.klass + v10);
        if ( !consumeItem )
          goto LABEL_53;
        v33.fields.r = 1.0;
        v33.fields.a = 1.0;
        v33.fields.g = 0.92157;
        v33.fields.b = 0.015686;
        UIWidget__set_color((UIWidget_o *)consumeItem, v33, 0LL);
        v20 = this->fields.itemIcon;
        if ( !v20 )
          goto LABEL_53;
        if ( v12 >= v20->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v20->obj.klass + v10);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v21 = this->fields.itemNumLabel;
        if ( !v21 )
          goto LABEL_53;
        if ( v12 >= v21->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v21->obj.klass + v10);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v9 = *(_QWORD *)&commonConsumeEntityList->max_length;
      }
      while ( (int)++v10 - 4 < (int)v9 );
    }
    v22 = this->fields.itemIcon;
    if ( !v22 )
      goto LABEL_53;
    v23 = 8LL * (int)v9 + 32;
    while ( 1 )
    {
      v24 = *(_QWORD *)&v22->max_length;
      if ( (int)v9 >= (int)v24 )
        break;
      v25 = this->fields.itemNumLabel;
      if ( !v25 )
        goto LABEL_53;
      if ( (unsigned int)v9 >= v25->max_length )
        goto LABEL_54;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v25->obj.klass + v23);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v26 = this->fields.itemIcon;
        if ( v26 )
        {
          if ( (unsigned int)v9 >= v26->max_length )
            goto LABEL_54;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v26->obj.klass + v23);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
            v27 = this->fields.itemNumLabel;
            if ( v27 )
            {
              if ( (unsigned int)v9 >= v27->max_length )
                goto LABEL_54;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v27->obj.klass + v23);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
                v22 = this->fields.itemIcon;
                LODWORD(v9) = v9 + 1;
                v23 += 8LL;
                if ( v22 )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_53;
    }
    v28 = 0.0;
    if ( v32 <= 9 )
    {
      v29 = this->fields.itemNumLabel;
      if ( !v29 )
        goto LABEL_53;
      if ( !v29->max_length )
LABEL_54:
        sub_1C2E390(consumeItem, commonConsumeEntityList, v7, v8);
      v30 = v29->m_Items[0];
      if ( !v30 )
LABEL_53:
        sub_1C2E388(consumeItem, commonConsumeEntityList);
      v28 = (float)(v30->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_53;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v28
    + (float)((float)(consumeItemIconGrid->fields.cellWidth * 0.5) * (float)(v24 - commonConsumeEntityList->max_length)),
      0LL);
    consumeItem = (UnityEngine_GameObject_o *)this->fields.consumeItemIconGrid;
    if ( !consumeItem )
      goto LABEL_53;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))consumeItem->klass[1]._1.castClass)(
      consumeItem,
      consumeItem->klass[1]._1.declaringType);
  }
  else
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(consumeItem, 0, 0LL);
  }
}