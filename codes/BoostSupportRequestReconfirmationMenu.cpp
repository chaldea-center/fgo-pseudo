void __fastcall BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187E64 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187E64 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 isBoostItemUseConfirm; // w20
  System_Action_o *v6; // x20

  if ( (byte_4187E60 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, v3);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    byte_4187E60 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  BoostSupportRequestReconfirmationMenu__Close_25604728(this, 0LL, v2);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close_25604728(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187E5F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_BoostSupportRequestReconfirmationMenu_EndClose__, v10);
    byte_4187E5F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187E61 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v2);
    byte_4187E61 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu(Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4187E62 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4187E62 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  BoostSupportRequestReconfirmationMenu__Callback(this, v4);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *Instance; // x0
  __int64 v28; // x1
  SkillEntity_o *Entity; // x0
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v31; // x21
  UILabel_o *skillDetailLabel; // x22
  UILabel_o *consumptionLabel; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v35; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20

  if ( (byte_4187E5D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, boostEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&OptionManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_2586/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, v16);
    sub_B2C35C(&StringLiteral_2603/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_2584/*"BOOST_ITEM_USE_CANCEL"*/, v18);
    sub_B2C35C(&StringLiteral_3268/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v19);
    byte_4187E5D = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.serectBoostEntity = boostEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.serectBoostEntity,
    (System_Int32_array **)boostEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2603/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_31;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              boostEntity->fields.skillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v31 = Entity;
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
    Instance = SkillEntity__getEffectExplanation(v31, 0, 0LL);
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3268/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
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
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_31;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0LL);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v35);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2586/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2584/*"BOOST_ITEM_USE_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0LL),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_31:
    sub_B2C434(Instance, v28);
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
  sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_B2C434(v12, v13);
    BoostFunctionUtility_CallbackFunc__Invoke(v10, 2, serectBoostEntity->fields.id, 0LL);
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

  if ( (byte_4187E5B & 1) == 0 )
  {
    sub_B2C35C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4187E5B = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_B2C728(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4187E63 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187E63 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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

  if ( (byte_4187E5C & 1) == 0 )
  {
    sub_B2C35C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4187E5C = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_B2C728(v8);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v7; // x21
  struct UISprite_array **p_itemIcon; // x23
  __int64 v9; // x24
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v11; // w26
  __int64 v12; // x8
  struct UISprite_array *v13; // x9
  UISprite_o *v14; // x21
  int32_t v15; // w22
  struct UILabel_array *v16; // x8
  UILabel_o *v17; // x21
  struct UILabel_array *v18; // x8
  UIWidget_o *v19; // x21
  int v20; // s0
  struct UISprite_array *v24; // x8
  struct UILabel_array *v25; // x8
  struct UISprite_array *v26; // x8
  __int64 v27; // x22
  __int64 v28; // x8
  struct UILabel_array *v29; // x8
  struct UISprite_array *v30; // x8
  struct UILabel_array *v31; // x8
  float v32; // s0
  struct UILabel_array *v33; // x9
  UILabel_o *v34; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  __int64 v36; // x0
  int v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4187E5E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, commonConsumeEntityList);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4187E5E = 1;
  }
  v37 = 0;
  if ( commonConsumeEntityList && *(_QWORD *)&commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0LL);
    v37 = 0;
    LODWORD(v7) = commonConsumeEntityList->max_length;
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)v7 > 0 )
    {
      v9 = 4LL;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_54;
        v11 = v9 - 4;
        if ( (int)v9 - 4 >= (signed int)itemNumLabel->max_length )
          break;
        if ( v11 >= (unsigned int)v7 )
          goto LABEL_55;
        v12 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v9);
        if ( !v12 )
          goto LABEL_54;
        v37 = *(_DWORD *)(v12 + 32);
        v13 = *p_itemIcon;
        if ( !*p_itemIcon )
          goto LABEL_54;
        if ( v11 >= v13->max_length )
          goto LABEL_55;
        v14 = (UISprite_o *)*((_QWORD *)&v13->obj.klass + v9);
        v15 = *(_DWORD *)(v12 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v14, v15, 0LL);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          goto LABEL_54;
        if ( v11 >= v16->max_length )
          goto LABEL_55;
        v17 = (UILabel_o *)*((_QWORD *)&v16->obj.klass + v9);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v37, 0LL);
        if ( !v17 )
          goto LABEL_54;
        UILabel__set_text(v17, (System_String_o *)consumeItem, 0LL);
        v18 = this->fields.itemNumLabel;
        if ( !v18 )
          goto LABEL_54;
        if ( v11 >= v18->max_length )
          goto LABEL_55;
        v19 = (UIWidget_o *)*((_QWORD *)&v18->obj.klass + v9);
        *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_yellow(0LL);
        if ( !v19 )
          goto LABEL_54;
        UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v20, 0LL);
        v24 = *p_itemIcon;
        if ( !*p_itemIcon )
          goto LABEL_54;
        if ( v11 >= v24->max_length )
          goto LABEL_55;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v24->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v25 = this->fields.itemNumLabel;
        if ( !v25 )
          goto LABEL_54;
        if ( v11 >= v25->max_length )
          goto LABEL_55;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v25->obj.klass + v9);
        if ( !consumeItem )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v7 = *(_QWORD *)&commonConsumeEntityList->max_length;
      }
      while ( (int)++v9 - 4 < (int)v7 );
    }
    v26 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_54;
    v27 = 8LL * (int)v7 + 32;
    while ( 1 )
    {
      v28 = *(_QWORD *)&v26->max_length;
      if ( (int)v7 >= (int)v28 )
        break;
      v29 = this->fields.itemNumLabel;
      if ( !v29 )
        goto LABEL_54;
      if ( (unsigned int)v7 >= v29->max_length )
        goto LABEL_55;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v29->obj.klass + v27);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v30 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)v7 >= v30->max_length )
            goto LABEL_55;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v30->obj.klass + v27);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
            v31 = this->fields.itemNumLabel;
            if ( v31 )
            {
              if ( (unsigned int)v7 >= v31->max_length )
                goto LABEL_55;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v31->obj.klass + v27);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
                v26 = *p_itemIcon;
                LODWORD(v7) = v7 + 1;
                v27 += 8LL;
                if ( *p_itemIcon )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    v32 = 0.0;
    if ( v37 <= 9 )
    {
      v33 = this->fields.itemNumLabel;
      if ( !v33 )
        goto LABEL_54;
      if ( !v33->max_length )
      {
LABEL_55:
        v36 = sub_B2C460(consumeItem);
        sub_B2C400(v36, 0LL);
      }
      v34 = v33->m_Items[0];
      if ( !v34 )
LABEL_54:
        sub_B2C434(consumeItem, commonConsumeEntityList);
      v32 = (float)(v34->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v32
    + (float)((float)(consumeItemIconGrid->fields.cellHeight * 0.5) * (float)(v28 - commonConsumeEntityList->max_length)),
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