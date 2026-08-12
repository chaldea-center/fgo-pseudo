void BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5969E95 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969E95 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void BoostSupportRequestReconfirmationMenu__Callback(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isBoostItemUseConfirm; // w22
  System_Action_o *v5; // x20

  if ( (byte_5969E91 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__);
    sub_2213A60(&OptionManager_TypeInfo);
    byte_5969E91 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, 0);
  OptionManager__SaveData(v5, 0);
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

  BoostSupportRequestReconfirmationMenu__Close_37323256(this, 0, v2);
}


void BoostSupportRequestReconfirmationMenu__Close_37323256(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5969E90 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoostSupportRequestReconfirmationMenu_EndClose__);
    byte_5969E90 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(&this->fields.closeCallbackFunc, callback);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
    sub_2213A04(p_closeCallbackFunc, 0);
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

  if ( (byte_5969E92 & 1) == 0 )
  {
    sub_2213A60(&Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5969E92 = 1;
  }
  v2 = Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78();
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
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

  if ( (byte_5969E93 & 1) == 0 )
  {
    sub_2213A60(&Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5969E93 = 1;
  }
  v3 = Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78();
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  BoostSupportRequestReconfirmationMenu__Callback(this, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0, 0);
}


void BoostSupportRequestReconfirmationMenu__Open(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostEntity_o *boostEntity,
        BoostFunctionUtility_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  bool BoostItemUseConfirm; // w8
  LocalizationManager_c *v12; // x0
  UILabel_o *titleLabel; // x21
  int v14; // w9
  System_String_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v21; // x21
  UILabel_o *skillDetailLabel; // x22
  UILabel_o *consumptionLabel; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v25; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  const MethodInfo *v28; // x4

  if ( (byte_5969E8E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3083/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3101/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/);
    sub_2213A60(&StringLiteral_3081/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_2213A60(&StringLiteral_3837/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    byte_5969E8E = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(&this->fields.callbackFunc, callback);
  this->fields.serectBoostEntity = boostEntity;
  sub_2213A04(&this->fields.serectBoostEntity, boostEntity);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7, v8);
  BoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  v12 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  v14 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.isBoostItemUseConfirm = BoostItemUseConfirm;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(v12, v9, v10);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3101/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             boostEntity->fields.skillId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v21 = (SkillEntity_o *)Entity;
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
    Instance = SkillEntity__getEffectExplanation(v21, 0, 0);
    if ( !skillDetailLabel )
      goto LABEL_28;
    UILabel__set_text(skillDetailLabel, Instance, 0);
    Instance = (System_String_o *)this->fields.skillDetailLabel;
    if ( !Instance )
      goto LABEL_28;
    UILabel__set_alignment((UILabel_o *)Instance, SHIDWORD(Instance[7].klass) > Instance[17].fields._stringLength, 0);
  }
  consumptionLabel = this->fields.consumptionLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3837/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0);
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
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_28;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v25);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3083/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3081/*"BOOST_ITEM_USE_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_28:
    sub_2213CDC(Instance, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 1, 0, v28);
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
  v6 = sub_2213A04(p_callbackFunc, 0);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_2213CDC(v6, v7);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BoostSupportRequestReconfirmationMenu_o *v13; // x0
  BoostFunctionUtility_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5969E8C & 1) == 0 )
  {
    sub_2213A60(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_5969E8C = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostSupportRequestReconfirmationMenu_o *)sub_221405C(v8, BoostFunctionUtility_CallbackFunc_TypeInfo, v9, v10);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v13, v14, v15);
}


UnityEngine_GameObject_o *BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  bool v5; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_5969E94 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E94 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(closeButton, 0, 0);
  result = 0;
  if ( !v5 )
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BoostSupportRequestReconfirmationMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5969E8D & 1) == 0 )
  {
    sub_2213A60(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_5969E8D = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostSupportRequestReconfirmationMenu_o *)sub_221405C(v8, BoostFunctionUtility_CallbackFunc_TypeInfo, v9, v10);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v13, v14);
}


void BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v6; // x2
  int max_length; // w21
  __int64 v8; // x24
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v10; // w25
  __int64 v11; // x8
  struct UISprite_array *itemIcon; // x9
  UISprite_o *v13; // x21
  int32_t v14; // w22
  struct UILabel_array *v15; // x8
  UILabel_o *v16; // x21
  struct UILabel_array *v17; // x8
  struct UISprite_array *v18; // x8
  struct UILabel_array *v19; // x8
  struct UISprite_array *v20; // x8
  __int64 v21; // x23
  int v22; // w8
  struct UILabel_array *v23; // x8
  struct UISprite_array *v24; // x8
  struct UILabel_array *v25; // x8
  float v26; // s0
  struct UILabel_array *v27; // x9
  UILabel_o *v28; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  int v30; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5969E8F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969E8F = 1;
  }
  v30 = 0;
  if ( commonConsumeEntityList && commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0);
    max_length = commonConsumeEntityList->max_length;
    v30 = 0;
    if ( max_length >= 1 )
    {
      v8 = 4;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_42;
        v10 = v8 - 4;
        if ( (int)v8 - 4 >= SLODWORD(itemNumLabel->max_length) )
          break;
        if ( v10 >= max_length )
          goto LABEL_53;
        v11 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v8);
        if ( !v11 )
          goto LABEL_42;
        itemIcon = this->fields.itemIcon;
        v30 = *(_DWORD *)(v11 + 32);
        if ( !itemIcon )
          goto LABEL_42;
        if ( v10 >= LODWORD(itemIcon->max_length) )
          goto LABEL_53;
        v13 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v8);
        v14 = *(_DWORD *)(v11 + 28);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, commonConsumeEntityList, v6);
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v13, v14, 0);
        v15 = this->fields.itemNumLabel;
        if ( !v15 )
          goto LABEL_42;
        if ( v10 >= LODWORD(v15->max_length) )
          goto LABEL_53;
        v16 = (UILabel_o *)*((_QWORD *)&v15->obj.klass + v8);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v30, 0);
        if ( !v16 )
          goto LABEL_42;
        UILabel__set_text(v16, (System_String_o *)consumeItem, 0);
        v17 = this->fields.itemNumLabel;
        if ( !v17 )
          goto LABEL_42;
        if ( v10 >= LODWORD(v17->max_length) )
          goto LABEL_53;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->obj.klass + v8);
        if ( !consumeItem )
          goto LABEL_42;
        v31.fields.g = 0.92157;
        v31.fields.b = 0.015686;
        v31.fields.r = 1.0;
        v31.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)consumeItem, v31, 0);
        v18 = this->fields.itemIcon;
        if ( !v18 )
          goto LABEL_42;
        if ( v10 >= LODWORD(v18->max_length) )
          goto LABEL_53;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v8);
        if ( !consumeItem )
          goto LABEL_42;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          goto LABEL_42;
        if ( v10 >= LODWORD(v19->max_length) )
          goto LABEL_53;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v19->obj.klass + v8);
        if ( !consumeItem )
          goto LABEL_42;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0);
        max_length = commonConsumeEntityList->max_length;
      }
      while ( (int)++v8 - 4 < max_length );
    }
    v20 = this->fields.itemIcon;
    if ( !v20 )
      goto LABEL_42;
    v21 = 8LL * max_length + 32;
    while ( 1 )
    {
      v22 = v20->max_length;
      if ( max_length >= v22 )
        break;
      v23 = this->fields.itemNumLabel;
      if ( !v23 )
        goto LABEL_42;
      if ( (unsigned int)max_length >= LODWORD(v23->max_length) )
        goto LABEL_53;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v23->obj.klass + v21);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0);
        v24 = this->fields.itemIcon;
        if ( v24 )
        {
          if ( (unsigned int)max_length >= LODWORD(v24->max_length) )
            goto LABEL_53;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v24->obj.klass + v21);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0);
            v25 = this->fields.itemNumLabel;
            if ( v25 )
            {
              if ( (unsigned int)max_length >= LODWORD(v25->max_length) )
                goto LABEL_53;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v25->obj.klass + v21);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0);
                v20 = this->fields.itemIcon;
                ++max_length;
                v21 += 8;
                if ( v20 )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_42;
    }
    v26 = 0.0;
    if ( v30 <= 9 )
    {
      v27 = this->fields.itemNumLabel;
      if ( !v27 )
        goto LABEL_42;
      if ( !LODWORD(v27->max_length) )
LABEL_53:
        sub_2213CE4(consumeItem);
      v28 = v27->m_Items[0];
      if ( !v28 )
LABEL_42:
        sub_2213CDC(consumeItem, commonConsumeEntityList);
      v26 = (float)(v28->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v26
    + (float)((float)(consumeItemIconGrid->fields.cellWidth * 0.5)
            * (float)(v22 - LODWORD(commonConsumeEntityList->max_length))),
      0);
    consumeItem = (UnityEngine_GameObject_o *)this->fields.consumeItemIconGrid;
    if ( !consumeItem )
      goto LABEL_42;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))consumeItem->klass[1]._1.element_class)(
      consumeItem,
      consumeItem->klass[1]._1.castClass);
  }
  else
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(consumeItem, 0, 0);
  }
}