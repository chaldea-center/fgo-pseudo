void BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D262DC & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D262DC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void BoostSupportRequestReconfirmationMenu__Callback(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  _BOOL4 isBoostItemUseConfirm; // w22
  System_Action_o *v4; // x20

  if ( (byte_4D262D8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__);
    sub_1C94098(&OptionManager_TypeInfo);
    byte_4D262D8 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, 0);
  OptionManager__SaveData(v4, 0);
}


void BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void BoostSupportRequestReconfirmationMenu__Close(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoostSupportRequestReconfirmationMenu__Close_31531396(this, 0, v2);
}


void BoostSupportRequestReconfirmationMenu__Close_31531396(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4D262D7 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoostSupportRequestReconfirmationMenu_EndClose__);
    byte_4D262D7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(&this->fields.closeCallbackFunc, callback);
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void BoostSupportRequestReconfirmationMenu__EndClose(
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
    *p_closeCallbackFunc = 0;
    sub_1C9403C(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D262D9 & 1) == 0 )
  {
    sub_1C94098(&Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D262D9 = 1;
  }
  v2 = Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C940B0();
  v3 = (System_Reflection_MethodBase_o *)sub_1C9407C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0, 0);
}


void BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4D262DA & 1) == 0 )
  {
    sub_1C94098(&Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D262DA = 1;
  }
  v3 = Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0();
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  BoostSupportRequestReconfirmationMenu__Callback(this, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v7);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0, 0);
}


void BoostSupportRequestReconfirmationMenu__Open(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostEntity_o *boostEntity,
        BoostFunctionUtility_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v12; // x21
  UILabel_o *skillDetailLabel; // x22
  UILabel_o *consumptionLabel; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v16; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  const MethodInfo *v19; // x4

  if ( (byte_4D262D5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_2962/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_2980/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/);
    sub_1C94098(&StringLiteral_2960/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_1C94098(&StringLiteral_3699/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    byte_4D262D5 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C9403C(&this->fields.callbackFunc, callback);
  this->fields.serectBoostEntity = boostEntity;
  sub_1C9403C(&this->fields.serectBoostEntity, boostEntity);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2980/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             boostEntity->fields.skillId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v12 = (SkillEntity_o *)Entity;
    Instance = SkillEntity__getName((SkillEntity_o *)Entity, 0);
    if ( !Instance )
      goto LABEL_28;
    Instance = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))Instance->klass->vtable._3_ToString.methodPtr)(
                                    Instance,
                                    Instance->klass->vtable._3_ToString.method);
    if ( !skillNameLabel )
      goto LABEL_28;
    UILabel__set_text(skillNameLabel, Instance, 0);
    skillDetailLabel = this->fields.skillDetailLabel;
    Instance = SkillEntity__getEffectExplanation(v12, 0, 0);
    if ( !skillDetailLabel )
      goto LABEL_28;
    UILabel__set_text(skillDetailLabel, Instance, 0);
    Instance = (System_String_o *)this->fields.skillDetailLabel;
    if ( !Instance )
      goto LABEL_28;
    UILabel__set_alignment((UILabel_o *)Instance, SHIDWORD(Instance[7].klass) > Instance[17].fields._stringLength, 0);
  }
  consumptionLabel = this->fields.consumptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3699/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0);
  if ( !consumptionLabel )
    goto LABEL_28;
  UILabel__set_text(consumptionLabel, Instance, 0);
  Instance = (System_String_o *)this->fields.consumptionLabel;
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_28;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v16);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BOOST_ITEM_USE_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_28:
    sub_1C942F0(Instance, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 1, 0, v19);
}


void BoostSupportRequestReconfirmationMenu___Callback_b__24_0(
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
  *p_callbackFunc = 0;
  v6 = sub_1C9403C(p_callbackFunc, 0);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_1C942F0(v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      2,
      (unsigned int)serectBoostEntity->fields.id,
      v4->fields.method);
  }
}


void BoostSupportRequestReconfirmationMenu__add_callbackFunc(
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

  if ( (byte_4D262D3 & 1) == 0 )
  {
    sub_1C94098(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4D262D3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1C9468C(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4D262DB & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D262DB = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0, 0);
  result = 0;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


void BoostSupportRequestReconfirmationMenu__remove_callbackFunc(
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

  if ( (byte_4D262D4 & 1) == 0 )
  {
    sub_1C94098(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4D262D4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1C9468C(v8);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v11, v12);
}


void BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *consumeItem; // x0
  il2cpp_array_size_t max_length; // x21
  __int64 v7; // x23
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v9; // w25
  __int64 v10; // x8
  struct UISprite_array *itemIcon; // x9
  UISprite_o *v12; // x21
  int32_t v13; // w22
  struct UILabel_array *v14; // x8
  UILabel_o *v15; // x21
  struct UILabel_array *v16; // x8
  struct UISprite_array *v17; // x8
  struct UILabel_array *v18; // x8
  struct UISprite_array *v19; // x8
  __int64 v20; // x22
  il2cpp_array_size_t v21; // x8
  struct UILabel_array *v22; // x8
  struct UISprite_array *v23; // x8
  struct UILabel_array *v24; // x8
  float v25; // s0
  struct UILabel_array *v26; // x9
  UILabel_o *v27; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  int v29; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D262D6 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D262D6 = 1;
  }
  if ( commonConsumeEntityList && commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0);
    v29 = 0;
    LODWORD(max_length) = commonConsumeEntityList->max_length;
    if ( (int)max_length >= 1 )
    {
      v7 = 4;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_53;
        v9 = v7 - 4;
        if ( (int)v7 - 4 >= SLODWORD(itemNumLabel->max_length) )
          break;
        if ( v9 >= (unsigned int)max_length )
          goto LABEL_54;
        v10 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v7);
        if ( !v10 )
          goto LABEL_53;
        v29 = *(_DWORD *)(v10 + 32);
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_53;
        if ( v9 >= LODWORD(itemIcon->max_length) )
          goto LABEL_54;
        v12 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v7);
        v13 = *(_DWORD *)(v10 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v12, v13, 0);
        v14 = this->fields.itemNumLabel;
        if ( !v14 )
          goto LABEL_53;
        if ( v9 >= LODWORD(v14->max_length) )
          goto LABEL_54;
        v15 = (UILabel_o *)*((_QWORD *)&v14->obj.klass + v7);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v29, 0);
        if ( !v15 )
          goto LABEL_53;
        UILabel__set_text(v15, (System_String_o *)consumeItem, 0);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          goto LABEL_53;
        if ( v9 >= LODWORD(v16->max_length) )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->obj.klass + v7);
        if ( !consumeItem )
          goto LABEL_53;
        v30.fields.r = 1.0;
        v30.fields.a = 1.0;
        v30.fields.g = 0.92157;
        v30.fields.b = 0.015686;
        UIWidget__set_color((UIWidget_o *)consumeItem, v30, 0);
        v17 = this->fields.itemIcon;
        if ( !v17 )
          goto LABEL_53;
        if ( v9 >= LODWORD(v17->max_length) )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->obj.klass + v7);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0);
        v18 = this->fields.itemNumLabel;
        if ( !v18 )
          goto LABEL_53;
        if ( v9 >= LODWORD(v18->max_length) )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v7);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0);
        max_length = commonConsumeEntityList->max_length;
      }
      while ( (int)++v7 - 4 < (int)max_length );
    }
    v19 = this->fields.itemIcon;
    if ( !v19 )
      goto LABEL_53;
    v20 = 8LL * (int)max_length + 32;
    while ( 1 )
    {
      v21 = v19->max_length;
      if ( (int)max_length >= (int)v21 )
        break;
      v22 = this->fields.itemNumLabel;
      if ( !v22 )
        goto LABEL_53;
      if ( (unsigned int)max_length >= LODWORD(v22->max_length) )
        goto LABEL_54;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v22->obj.klass + v20);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0);
        v23 = this->fields.itemIcon;
        if ( v23 )
        {
          if ( (unsigned int)max_length >= LODWORD(v23->max_length) )
            goto LABEL_54;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v23->obj.klass + v20);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0);
            v24 = this->fields.itemNumLabel;
            if ( v24 )
            {
              if ( (unsigned int)max_length >= LODWORD(v24->max_length) )
                goto LABEL_54;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v24->obj.klass + v20);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0);
                v19 = this->fields.itemIcon;
                LODWORD(max_length) = max_length + 1;
                v20 += 8;
                if ( v19 )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_53;
    }
    v25 = 0.0;
    if ( v29 <= 9 )
    {
      v26 = this->fields.itemNumLabel;
      if ( !v26 )
        goto LABEL_53;
      if ( !LODWORD(v26->max_length) )
LABEL_54:
        sub_1C942F8(consumeItem);
      v27 = v26->m_Items[0];
      if ( !v27 )
LABEL_53:
        sub_1C942F0(consumeItem, commonConsumeEntityList);
      v25 = (float)(v27->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_53;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v25
    + (float)((float)(consumeItemIconGrid->fields.cellWidth * 0.5)
            * (float)((int)v21 - LODWORD(commonConsumeEntityList->max_length))),
      0);
    consumeItem = (UnityEngine_GameObject_o *)this->fields.consumeItemIconGrid;
    if ( !consumeItem )
      goto LABEL_53;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))consumeItem->klass[1]._1.element_class)(
      consumeItem,
      consumeItem->klass[1]._1.castClass);
  }
  else
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(consumeItem, 0, 0);
  }
}