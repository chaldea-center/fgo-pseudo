void __fastcall BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A560BC & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A560BC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Callback(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  _BOOL4 isBoostItemUseConfirm; // w22
  System_Action_o *v4; // x20

  if ( (byte_4A560B8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A560B8 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, 0LL);
  OptionManager__SaveData(v4, 0LL);
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

  BoostSupportRequestReconfirmationMenu__Close_30444592(this, 0LL, v2);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close_30444592(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A560B7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoostSupportRequestReconfirmationMenu_EndClose__);
    byte_4A560B7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
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
    sub_1B88554(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A560B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A560B9 = 1;
  }
  v2 = Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8();
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A560BA & 1) == 0 )
  {
    sub_1B885B0(&Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A560BA = 1;
  }
  v3 = Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  BoostSupportRequestReconfirmationMenu__Callback(this, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Open(
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

  if ( (byte_4A560B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3064/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3081/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/);
    sub_1B885B0(&StringLiteral_3062/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3764/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    byte_4A560B5 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  this->fields.serectBoostEntity = boostEntity;
  sub_1B88554(&this->fields.serectBoostEntity, boostEntity);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3081/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             boostEntity->fields.skillId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v12 = (SkillEntity_o *)Entity;
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
    Instance = SkillEntity__getEffectExplanation(v12, 0, 0LL);
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
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
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_28;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0LL);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v16);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3064/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3062/*"BOOST_ITEM_USE_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0LL),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_28:
    sub_1B8880C(Instance, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 1, v19);
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
  v6 = sub_1B88554(p_callbackFunc, 0LL);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_1B8880C(v6, v7);
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

  if ( (byte_4A560B3 & 1) == 0 )
  {
    sub_1B885B0(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4A560B3 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1B88ACC(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4A560BB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A560BB = 1;
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

  if ( (byte_4A560B4 & 1) == 0 )
  {
    sub_1B885B0(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4A560B4 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1B88ACC(v8);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v11, v12);
}


void __fastcall BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v6; // x21
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
  __int64 v21; // x8
  struct UILabel_array *v22; // x8
  struct UISprite_array *v23; // x8
  struct UILabel_array *v24; // x8
  float v25; // s0
  struct UILabel_array *v26; // x9
  UILabel_o *v27; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  int v29; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A560B6 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A560B6 = 1;
  }
  if ( commonConsumeEntityList && *(_QWORD *)&commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0LL);
    v29 = 0;
    LODWORD(v6) = commonConsumeEntityList->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 4LL;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_53;
        v9 = v7 - 4;
        if ( (int)v7 - 4 >= (signed int)itemNumLabel->max_length )
          break;
        if ( v9 >= (unsigned int)v6 )
          goto LABEL_54;
        v10 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v7);
        if ( !v10 )
          goto LABEL_53;
        v29 = *(_DWORD *)(v10 + 32);
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_53;
        if ( v9 >= itemIcon->max_length )
          goto LABEL_54;
        v12 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v7);
        v13 = *(_DWORD *)(v10 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v12, v13, 0LL);
        v14 = this->fields.itemNumLabel;
        if ( !v14 )
          goto LABEL_53;
        if ( v9 >= v14->max_length )
          goto LABEL_54;
        v15 = (UILabel_o *)*((_QWORD *)&v14->obj.klass + v7);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v29, 0LL);
        if ( !v15 )
          goto LABEL_53;
        UILabel__set_text(v15, (System_String_o *)consumeItem, 0LL);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          goto LABEL_53;
        if ( v9 >= v16->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v16->obj.klass + v7);
        if ( !consumeItem )
          goto LABEL_53;
        v30.fields.r = 1.0;
        v30.fields.a = 1.0;
        v30.fields.g = 0.92157;
        v30.fields.b = 0.015686;
        UIWidget__set_color((UIWidget_o *)consumeItem, v30, 0LL);
        v17 = this->fields.itemIcon;
        if ( !v17 )
          goto LABEL_53;
        if ( v9 >= v17->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->obj.klass + v7);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v18 = this->fields.itemNumLabel;
        if ( !v18 )
          goto LABEL_53;
        if ( v9 >= v18->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v7);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v6 = *(_QWORD *)&commonConsumeEntityList->max_length;
      }
      while ( (int)++v7 - 4 < (int)v6 );
    }
    v19 = this->fields.itemIcon;
    if ( !v19 )
      goto LABEL_53;
    v20 = 8LL * (int)v6 + 32;
    while ( 1 )
    {
      v21 = *(_QWORD *)&v19->max_length;
      if ( (int)v6 >= (int)v21 )
        break;
      v22 = this->fields.itemNumLabel;
      if ( !v22 )
        goto LABEL_53;
      if ( (unsigned int)v6 >= v22->max_length )
        goto LABEL_54;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v22->obj.klass + v20);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v23 = this->fields.itemIcon;
        if ( v23 )
        {
          if ( (unsigned int)v6 >= v23->max_length )
            goto LABEL_54;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v23->obj.klass + v20);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
            v24 = this->fields.itemNumLabel;
            if ( v24 )
            {
              if ( (unsigned int)v6 >= v24->max_length )
                goto LABEL_54;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v24->obj.klass + v20);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
                v19 = this->fields.itemIcon;
                LODWORD(v6) = v6 + 1;
                v20 += 8LL;
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
      if ( !v26->max_length )
LABEL_54:
        sub_1B88814(consumeItem, commonConsumeEntityList);
      v27 = v26->m_Items[0];
      if ( !v27 )
LABEL_53:
        sub_1B8880C(consumeItem, commonConsumeEntityList);
      v25 = (float)(v27->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_53;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v25
    + (float)((float)(consumeItemIconGrid->fields.cellWidth * 0.5) * (float)(v21 - commonConsumeEntityList->max_length)),
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