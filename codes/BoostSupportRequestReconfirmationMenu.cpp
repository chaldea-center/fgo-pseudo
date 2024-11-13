void __fastcall BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10D9C & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10D9C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Callback(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL4 isBoostItemUseConfirm; // w22
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B10D98 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    byte_4B10D98 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
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

  BoostSupportRequestReconfirmationMenu__Close_30715704(this, 0LL, v2);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close_30715704(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B10D97 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_BoostSupportRequestReconfirmationMenu_EndClose__, v5, v6);
    byte_4B10D97 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, v11);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B10D99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B10D99 = 1;
  }
  v5 = Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickCancel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8();
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B10D9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B10D9A = 1;
  }
  v6 = Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_BoostSupportRequestReconfirmationMenu_OnClickDecide__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8();
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  BoostSupportRequestReconfirmationMenu__Callback(this, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Open(
        BoostSupportRequestReconfirmationMenu_o *this,
        BoostEntity_o *boostEntity,
        BoostFunctionUtility_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *Entity; // x0
  __int64 v31; // x1
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v33; // x21
  UILabel_o *skillDetailLabel; // x22
  UILabel_o *consumptionLabel; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v37; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  const MethodInfo *v40; // x3

  if ( (byte_4B10D95 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, boostEntity, callback);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&OptionManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_3086/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3104/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3084/*"BOOST_ITEM_USE_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3796/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v23, v24);
    byte_4B10D95 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  this->fields.serectBoostEntity = boostEntity;
  sub_1BCA784(&this->fields.serectBoostEntity, boostEntity);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v25);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3104/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             boostEntity->fields.skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v33 = (SkillEntity_o *)Entity;
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
    Instance = SkillEntity__getEffectExplanation(v33, 0, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
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
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_28;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0LL);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v37);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3086/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3084/*"BOOST_ITEM_USE_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0LL),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_28:
    sub_1BCAA3C(Instance, v29);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 1, v40);
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
  v6 = sub_1BCA784(p_callbackFunc, 0LL);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_1BCAA3C(v6, v7);
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

  if ( (byte_4B10D93 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostFunctionUtility_CallbackFunc_TypeInfo, value, method);
    byte_4B10D93 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1BCACFC(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  bool v5; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4B10D9B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B10D9B = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
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

  if ( (byte_4B10D94 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostFunctionUtility_CallbackFunc_TypeInfo, value, method);
    byte_4B10D94 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_1BCACFC(v8);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v11, v12);
}


void __fastcall BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v8; // x21
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
  __int64 v23; // x8
  struct UILabel_array *v24; // x8
  struct UISprite_array *v25; // x8
  struct UILabel_array *v26; // x8
  float v27; // s0
  struct UILabel_array *v28; // x9
  UILabel_o *v29; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  int v31; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B10D96 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, commonConsumeEntityList, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B10D96 = 1;
  }
  if ( commonConsumeEntityList && *(_QWORD *)&commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0LL);
    v31 = 0;
    LODWORD(v8) = commonConsumeEntityList->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 4LL;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_53;
        v11 = v9 - 4;
        if ( (int)v9 - 4 >= (signed int)itemNumLabel->max_length )
          break;
        if ( v11 >= (unsigned int)v8 )
          goto LABEL_54;
        v12 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v9);
        if ( !v12 )
          goto LABEL_53;
        v31 = *(_DWORD *)(v12 + 32);
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_53;
        if ( v11 >= itemIcon->max_length )
          goto LABEL_54;
        v14 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v9);
        v15 = *(_DWORD *)(v12 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, commonConsumeEntityList);
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v14, v15, 0LL);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          goto LABEL_53;
        if ( v11 >= v16->max_length )
          goto LABEL_54;
        v17 = (UILabel_o *)*((_QWORD *)&v16->obj.klass + v9);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v31, 0LL);
        if ( !v17 )
          goto LABEL_53;
        UILabel__set_text(v17, (System_String_o *)consumeItem, 0LL);
        v18 = this->fields.itemNumLabel;
        if ( !v18 )
          goto LABEL_53;
        if ( v11 >= v18->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v18->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_53;
        v32.fields.r = 1.0;
        v32.fields.a = 1.0;
        v32.fields.g = 0.92157;
        v32.fields.b = 0.015686;
        UIWidget__set_color((UIWidget_o *)consumeItem, v32, 0LL);
        v19 = this->fields.itemIcon;
        if ( !v19 )
          goto LABEL_53;
        if ( v11 >= v19->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v19->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v20 = this->fields.itemNumLabel;
        if ( !v20 )
          goto LABEL_53;
        if ( v11 >= v20->max_length )
          goto LABEL_54;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v20->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_53;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v8 = *(_QWORD *)&commonConsumeEntityList->max_length;
      }
      while ( (int)++v9 - 4 < (int)v8 );
    }
    v21 = this->fields.itemIcon;
    if ( !v21 )
      goto LABEL_53;
    v22 = 8LL * (int)v8 + 32;
    while ( 1 )
    {
      v23 = *(_QWORD *)&v21->max_length;
      if ( (int)v8 >= (int)v23 )
        break;
      v24 = this->fields.itemNumLabel;
      if ( !v24 )
        goto LABEL_53;
      if ( (unsigned int)v8 >= v24->max_length )
        goto LABEL_54;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v24->obj.klass + v22);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v25 = this->fields.itemIcon;
        if ( v25 )
        {
          if ( (unsigned int)v8 >= v25->max_length )
            goto LABEL_54;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v25->obj.klass + v22);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
            v26 = this->fields.itemNumLabel;
            if ( v26 )
            {
              if ( (unsigned int)v8 >= v26->max_length )
                goto LABEL_54;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v26->obj.klass + v22);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
                v21 = this->fields.itemIcon;
                LODWORD(v8) = v8 + 1;
                v22 += 8LL;
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
      if ( !v28->max_length )
LABEL_54:
        sub_1BCAA44(consumeItem, commonConsumeEntityList);
      v29 = v28->m_Items[0];
      if ( !v29 )
LABEL_53:
        sub_1BCAA3C(consumeItem, commonConsumeEntityList);
      v27 = (float)(v29->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_53;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v27
    + (float)((float)(consumeItemIconGrid->fields.cellWidth * 0.5) * (float)(v23 - commonConsumeEntityList->max_length)),
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