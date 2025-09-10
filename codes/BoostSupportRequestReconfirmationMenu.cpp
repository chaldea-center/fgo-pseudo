void BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21183 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21183 = 1;
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

  if ( (byte_4C2117F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__);
    sub_1C2D490(&OptionManager_TypeInfo);
    byte_4C2117F = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  BoostSupportRequestReconfirmationMenu__Close_31116100(this, 0, v2);
}


void BoostSupportRequestReconfirmationMenu__Close_31116100(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C2117E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BoostSupportRequestReconfirmationMenu_EndClose__);
    byte_4C2117E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D434(p_closeCallbackFunc);
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

  if ( (byte_4C21180 & 1) == 0 )
  {
    sub_1C2D490(&Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21180 = 1;
  }
  v2 = Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C2D4A8();
  v3 = (System_Reflection_MethodBase_o *)sub_1C2D474(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
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

  if ( (byte_4C21181 & 1) == 0 )
  {
    sub_1C2D490(&Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21181 = 1;
  }
  v3 = Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8();
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  BoostSupportRequestReconfirmationMenu__Callback(this, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v7);
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
  const MethodInfo *v19; // x3

  if ( (byte_4C2117C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_2958/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_2976/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/);
    sub_1C2D490(&StringLiteral_2956/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_1C2D490(&StringLiteral_3687/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    byte_4C2117C = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  this->fields.serectBoostEntity = boostEntity;
  sub_1C2D434(&this->fields.serectBoostEntity);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2976/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             boostEntity->fields.skillId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3687/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0);
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
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_28;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v16);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2958/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BOOST_ITEM_USE_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_28:
    sub_1C2D6EC(Instance, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 1, v19);
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
  v6 = sub_1C2D434(p_callbackFunc);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C2117A & 1) == 0 )
  {
    sub_1C2D490(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4C2117A = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1C2D9AC(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4C21182 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21182 = 1;
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

  if ( (byte_4C2117B & 1) == 0 )
  {
    sub_1C2D490(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4C2117B = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1C2D9AC(v8);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v11, v12);
}


void BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  il2cpp_array_size_t max_length; // x21
  __int64 v9; // x23
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v11; // w25
  __int64 v12; // x8
  struct UISprite_array *itemIcon; // x9
  UISprite_o *v14; // x21
  int32_t v15; // w22
  struct UILabel_array *v16; // x8
  UILabel_o *v17; // x21
  struct UILabel_array *v18; // x8
  struct UISprite_array *v19; // x8
  struct UILabel_array *v20; // x8
  struct UISprite_array *v21; // x8
  __int64 v22; // x22
  il2cpp_array_size_t v23; // x8
  struct UILabel_array *v24; // x8
  struct UISprite_array *v25; // x8
  struct UILabel_array *v26; // x8
  float v27; // s0
  struct UILabel_array *v28; // x9
  UILabel_o *v29; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  int v31; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2117D & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2117D = 1;
  }
  if ( commonConsumeEntityList && commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0);
    v31 = 0;
    LODWORD(max_length) = commonConsumeEntityList->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 4;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_53;
        v11 = v9 - 4;
        if ( (int)v9 - 4 >= SLODWORD(itemNumLabel->max_length) )
          break;
        if ( v11 >= (unsigned int)max_length )
          goto LABEL_54;
        v12 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v9);
        if ( !v12 )
          goto LABEL_53;
        v31 = *(_DWORD *)(v12 + 32);
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_53;
        if ( v11 >= LODWORD(itemIcon->max_length) )
          goto LABEL_54;
        v14 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v9);
        v15 = *(_DWORD *)(v12 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v14, v15, 0);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          goto LABEL_53;
        if ( v11 >= LODWORD(v16->max_length) )
          goto LABEL_54;
        v17 = (UILabel_o *)*((_QWORD *)&v16->obj.klass + v9);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v31, 0);
        if ( !v17 )
          goto LABEL_53;
        UILabel__set_text(v17, (System_String_o *)consumeItem, 0);
        v18 = this->fields.itemNumLabel;
        if ( !v18 )
          goto LABEL_53;
        if ( v11 >= LODWORD(v18->max_length) )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_53;
        v32.fields.r = 1.0;
        v32.fields.a = 1.0;
        v32.fields.g = 0.92157;
        v32.fields.b = 0.015686;
        UIWidget__set_color((UIWidget_o *)consumeItem, v32, 0);
        v19 = this->fields.itemIcon;
        if ( !v19 )
          goto LABEL_53;
        if ( v11 >= LODWORD(v19->max_length) )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v19->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0);
        v20 = this->fields.itemNumLabel;
        if ( !v20 )
          goto LABEL_53;
        if ( v11 >= LODWORD(v20->max_length) )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v20->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0);
        max_length = commonConsumeEntityList->max_length;
      }
      while ( (int)++v9 - 4 < (int)max_length );
    }
    v21 = this->fields.itemIcon;
    if ( !v21 )
      goto LABEL_53;
    v22 = 8LL * (int)max_length + 32;
    while ( 1 )
    {
      v23 = v21->max_length;
      if ( (int)max_length >= (int)v23 )
        break;
      v24 = this->fields.itemNumLabel;
      if ( !v24 )
        goto LABEL_53;
      if ( (unsigned int)max_length >= LODWORD(v24->max_length) )
        goto LABEL_54;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v24->obj.klass + v22);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0);
        v25 = this->fields.itemIcon;
        if ( v25 )
        {
          if ( (unsigned int)max_length >= LODWORD(v25->max_length) )
            goto LABEL_54;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v25->obj.klass + v22);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0);
            v26 = this->fields.itemNumLabel;
            if ( v26 )
            {
              if ( (unsigned int)max_length >= LODWORD(v26->max_length) )
                goto LABEL_54;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v26->obj.klass + v22);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0);
                v21 = this->fields.itemIcon;
                LODWORD(max_length) = max_length + 1;
                v22 += 8;
                if ( v21 )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_53;
    }
    v27 = 0.0;
    if ( v31 <= 9 )
    {
      v28 = this->fields.itemNumLabel;
      if ( !v28 )
        goto LABEL_53;
      if ( !LODWORD(v28->max_length) )
LABEL_54:
        sub_1C2D6F4(consumeItem, commonConsumeEntityList, v6, v7);
      v29 = v28->m_Items[0];
      if ( !v29 )
LABEL_53:
        sub_1C2D6EC(consumeItem, commonConsumeEntityList);
      v27 = (float)(v29->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_53;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v27
    + (float)((float)(consumeItemIconGrid->fields.cellWidth * 0.5)
            * (float)((int)v23 - LODWORD(commonConsumeEntityList->max_length))),
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