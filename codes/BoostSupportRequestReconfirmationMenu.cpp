void __fastcall BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB193 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB193 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x20

  if ( (byte_40FB18F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    byte_40FB18F = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__, 0LL);
  OptionManager__SaveData(v10, 0LL);
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

  BoostSupportRequestReconfirmationMenu__Close_27234848(this, 0LL, v2);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close_27234848(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FB18E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_BoostSupportRequestReconfirmationMenu_EndClose__, v10);
    byte_40FB18E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FB190 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v2);
    byte_40FB190 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseBoostSupportRequestReconfirmationMenu(Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FB191 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB191 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  BoostSupportRequestReconfirmationMenu__Callback(this, v4);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_String_o *v27; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v32; // x21
  System_String_o *Name; // x0
  System_String_o *v34; // x0
  UILabel_o *skillDetailLabel; // x22
  System_String_o *EffectExplanation; // x0
  struct UILabel_o *v37; // x0
  UILabel_o *consumptionLabel; // x21
  System_String_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *v42; // x0
  CommonConsumeMaster_o *v43; // x0
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v45; // x2
  UILabel_o *decideLabel; // x20
  System_String_o *v47; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0

  if ( (byte_40FB18C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, boostEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&OptionManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_2575, v16);
    sub_B16FFC(&StringLiteral_2592, v17);
    sub_B16FFC(&StringLiteral_2573, v18);
    sub_B16FFC(&StringLiteral_3259, v19);
    byte_40FB18C = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.serectBoostEntity = boostEntity;
  sub_B16F98(
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
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2592, 0LL);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, v27, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              boostEntity->fields.skillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v32 = Entity;
    Name = SkillEntity__getName(Entity, 0LL);
    if ( !Name )
      goto LABEL_31;
    v34 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))Name->klass->vtable._3_ToString.method)(
                               Name,
                               Name->klass->vtable._4_CompareTo.methodPtr);
    if ( !skillNameLabel )
      goto LABEL_31;
    UILabel__set_text(skillNameLabel, v34, 0LL);
    skillDetailLabel = this->fields.skillDetailLabel;
    EffectExplanation = SkillEntity__getEffectExplanation(v32, 0, 0LL);
    if ( !skillDetailLabel )
      goto LABEL_31;
    UILabel__set_text(skillDetailLabel, EffectExplanation, 0LL);
    v37 = this->fields.skillDetailLabel;
    if ( !v37 )
      goto LABEL_31;
    UILabel__set_alignment(v37, v37->fields.mHeight > v37->fields.mFontSize, 0LL);
  }
  consumptionLabel = this->fields.consumptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3259, 0LL);
  if ( !consumptionLabel )
    goto LABEL_31;
  UILabel__set_text(consumptionLabel, v39, 0LL);
  v40 = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !v40 )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(v40, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v42 )
    goto LABEL_31;
  v43 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v42,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !v43 )
    goto LABEL_31;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(v43, boostEntity->fields.commonConsumeId, 0LL);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v45);
  decideLabel = this->fields.decideLabel;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2575, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, v47, 0LL),
        cancelLabel = this->fields.cancelLabel,
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2573, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, v49, 0LL),
        (v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v50, 1, 0LL);
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
  struct BoostEntity_o *serectBoostEntity; // x8

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_B170D4();
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

  if ( (byte_40FB18A & 1) == 0 )
  {
    sub_B16FFC(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_40FB18A = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_B173C8(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40FB192 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB192 = 1;
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

  if ( (byte_40FB18B & 1) == 0 )
  {
    sub_B16FFC(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_40FB18B = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_B173C8(v8);
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
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
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
  System_String_o *v21; // x0
  struct UILabel_array *v22; // x8
  UIWidget_o *v23; // x21
  int v24; // s0
  struct UISprite_array *v28; // x8
  UnityEngine_Behaviour_o *v29; // x0
  struct UILabel_array *v30; // x8
  UnityEngine_Behaviour_o *v31; // x0
  struct UISprite_array *v32; // x8
  __int64 v33; // x22
  __int64 v34; // x8
  struct UILabel_array *v35; // x8
  UILabel_o *v36; // x0
  struct UISprite_array *v37; // x8
  UnityEngine_Behaviour_o *v38; // x0
  struct UILabel_array *v39; // x8
  UnityEngine_Behaviour_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  float v42; // s0
  struct UILabel_array *v43; // x9
  UILabel_o *v44; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  struct UIGrid_o *v46; // x0
  int v47; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FB18D & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, commonConsumeEntityList);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FB18D = 1;
  }
  v47 = 0;
  if ( commonConsumeEntityList && *(_QWORD *)&commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0LL);
    v47 = 0;
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
        v47 = *(_DWORD *)(v15 + 32);
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
        v7 = AtlasManager__SetItem(v17, v18, 0LL);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          goto LABEL_54;
        if ( v14 >= v19->max_length )
          goto LABEL_55;
        v20 = (UILabel_o *)*((_QWORD *)&v19->obj.klass + v12);
        v21 = System_Int32__ToString((int32_t)&v47, 0LL);
        if ( !v20 )
          goto LABEL_54;
        UILabel__set_text(v20, v21, 0LL);
        v22 = this->fields.itemNumLabel;
        if ( !v22 )
          goto LABEL_54;
        if ( v14 >= v22->max_length )
          goto LABEL_55;
        v23 = (UIWidget_o *)*((_QWORD *)&v22->obj.klass + v12);
        *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_yellow(0LL);
        if ( !v23 )
          goto LABEL_54;
        UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
        v28 = *p_itemIcon;
        if ( !*p_itemIcon )
          goto LABEL_54;
        if ( v14 >= v28->max_length )
          goto LABEL_55;
        v29 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v28->obj.klass + v12);
        if ( !v29 )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled(v29, 1, 0LL);
        v30 = this->fields.itemNumLabel;
        if ( !v30 )
          goto LABEL_54;
        if ( v14 >= v30->max_length )
          goto LABEL_55;
        v31 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v30->obj.klass + v12);
        if ( !v31 )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled(v31, 1, 0LL);
        v10 = *(_QWORD *)&commonConsumeEntityList->max_length;
      }
      while ( (int)++v12 - 4 < (int)v10 );
    }
    v32 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_54;
    v33 = 8LL * (int)v10 + 32;
    while ( 1 )
    {
      v34 = *(_QWORD *)&v32->max_length;
      if ( (int)v10 >= (int)v34 )
        break;
      v35 = this->fields.itemNumLabel;
      if ( !v35 )
        goto LABEL_54;
      if ( (unsigned int)v10 >= v35->max_length )
        goto LABEL_55;
      v36 = *(UILabel_o **)((char *)&v35->obj.klass + v33);
      if ( v36 )
      {
        UILabel__set_text(v36, (System_String_o *)StringLiteral_1, 0LL);
        v37 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)v10 >= v37->max_length )
            goto LABEL_55;
          v38 = *(UnityEngine_Behaviour_o **)((char *)&v37->obj.klass + v33);
          if ( v38 )
          {
            UnityEngine_Behaviour__set_enabled(v38, 0, 0LL);
            v39 = this->fields.itemNumLabel;
            if ( v39 )
            {
              if ( (unsigned int)v10 >= v39->max_length )
                goto LABEL_55;
              v40 = *(UnityEngine_Behaviour_o **)((char *)&v39->obj.klass + v33);
              if ( v40 )
              {
                UnityEngine_Behaviour__set_enabled(v40, 0, 0LL);
                v32 = *p_itemIcon;
                LODWORD(v10) = v10 + 1;
                v33 += 8LL;
                if ( *p_itemIcon )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    v42 = 0.0;
    if ( v47 <= 9 )
    {
      v43 = this->fields.itemNumLabel;
      if ( !v43 )
        goto LABEL_54;
      if ( !v43->max_length )
      {
LABEL_55:
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v44 = v43->m_Items[0];
      if ( !v44 )
LABEL_54:
        sub_B170D4();
      v42 = (float)(v44->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v42
    + (float)((float)(consumeItemIconGrid->fields.cellHeight * 0.5) * (float)(v34 - commonConsumeEntityList->max_length)),
      0LL);
    v46 = this->fields.consumeItemIconGrid;
    if ( !v46 )
      goto LABEL_54;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v46->klass->vtable._8_Reposition.method)(
      v46,
      v46->klass->vtable._9_ResetPosition.methodPtr);
  }
  else
  {
    v41 = this->fields.consumeItem;
    if ( !v41 )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(v41, 0, 0LL);
  }
}