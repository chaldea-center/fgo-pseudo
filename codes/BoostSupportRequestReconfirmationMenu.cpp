void __fastcall BoostSupportRequestReconfirmationMenu___ctor(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1776 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1776 = 1;
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
  _BOOL4 isBoostItemUseConfirm; // w20
  System_Action_o *v4; // x20

  if ( (byte_42B1772 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BoostSupportRequestReconfirmationMenu__Callback_b__24_0__);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B1772 = 1;
  }
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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

  BoostSupportRequestReconfirmationMenu__Close_27727024(this, 0LL, v2);
}


void __fastcall BoostSupportRequestReconfirmationMenu__Close_27727024(
        BoostSupportRequestReconfirmationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B1771 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BoostSupportRequestReconfirmationMenu_EndClose__);
    byte_42B1771 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BoostSupportRequestReconfirmationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickCancel(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42B1773 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1773 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseBoostSupportRequestReconfirmationMenu(Instance, 0LL, 0LL);
}


void __fastcall BoostSupportRequestReconfirmationMenu__OnClickDecide(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42B1774 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1774 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  BoostSupportRequestReconfirmationMenu__Callback(this, v3);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *Instance; // x0
  __int64 v19; // x1
  SkillEntity_o *Entity; // x0
  UILabel_o *skillNameLabel; // x22
  SkillEntity_o *v22; // x21
  UILabel_o *skillDetailLabel; // x22
  UILabel_o *consumptionLabel; // x21
  CommonConsumeEntity_array *IdEntityList; // x0
  const MethodInfo *v26; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20

  if ( (byte_42B176F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_2618/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_2635/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/);
    sub_B52984(&StringLiteral_2616/*"BOOST_ITEM_USE_CANCEL"*/);
    sub_B52984(&StringLiteral_3301/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    byte_42B176F = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.serectBoostEntity = boostEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.serectBoostEntity,
    (System_Int32_array **)boostEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2635/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !boostEntity || !Instance )
    goto LABEL_31;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              boostEntity->fields.skillId,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    skillNameLabel = this->fields.skillNameLabel;
    v22 = Entity;
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
    Instance = SkillEntity__getEffectExplanation(v22, 0, 0LL);
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3301/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
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
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !Instance )
    goto LABEL_31;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   boostEntity->fields.commonConsumeId,
                   0LL);
  BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(this, IdEntityList, v26);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2618/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, Instance, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2616/*"BOOST_ITEM_USE_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, Instance, 0LL),
        (Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_31:
    sub_B52A5C(Instance, v19);
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
  sub_B52920(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    serectBoostEntity = this->fields.serectBoostEntity;
    if ( !serectBoostEntity )
      sub_B52A5C(v12, v13);
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

  if ( (byte_42B176D & 1) == 0 )
  {
    sub_B52984(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_42B176D = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_B52D50(v8);
  BoostSupportRequestReconfirmationMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestReconfirmationMenu__get_closeBtnObject(
        BoostSupportRequestReconfirmationMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42B1775 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1775 = 1;
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

  if ( (byte_42B176E & 1) == 0 )
  {
    sub_B52984(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_42B176E = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestReconfirmationMenu_o *)sub_B52D50(v8);
  BoostSupportRequestReconfirmationMenu__CheckSerializeFieldAssertion(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestReconfirmationMenu__setConsumeItemIconList(
        BoostSupportRequestReconfirmationMenu_o *this,
        CommonConsumeEntity_array *commonConsumeEntityList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *consumeItem; // x0
  __int64 v6; // x21
  struct UISprite_array **p_itemIcon; // x23
  __int64 v8; // x24
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v10; // w26
  __int64 v11; // x8
  struct UISprite_array *v12; // x9
  UISprite_o *v13; // x21
  int32_t v14; // w22
  struct UILabel_array *v15; // x8
  UILabel_o *v16; // x21
  struct UILabel_array *v17; // x8
  UIWidget_o *v18; // x21
  int v19; // s0
  struct UISprite_array *v23; // x8
  struct UILabel_array *v24; // x8
  struct UISprite_array *v25; // x8
  __int64 v26; // x22
  __int64 v27; // x8
  struct UILabel_array *v28; // x8
  struct UISprite_array *v29; // x8
  struct UILabel_array *v30; // x8
  float v31; // s0
  struct UILabel_array *v32; // x9
  UILabel_o *v33; // x9
  struct UIGrid_o *consumeItemIconGrid; // x9
  __int64 v35; // x0
  int v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42B1770 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1770 = 1;
  }
  v36 = 0;
  if ( commonConsumeEntityList && *(_QWORD *)&commonConsumeEntityList->max_length )
  {
    consumeItem = this->fields.consumeItem;
    if ( !consumeItem )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(consumeItem, 1, 0LL);
    v36 = 0;
    LODWORD(v6) = commonConsumeEntityList->max_length;
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)v6 > 0 )
    {
      v8 = 4LL;
      do
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          goto LABEL_54;
        v10 = v8 - 4;
        if ( (int)v8 - 4 >= (signed int)itemNumLabel->max_length )
          break;
        if ( v10 >= (unsigned int)v6 )
          goto LABEL_55;
        v11 = *((_QWORD *)&commonConsumeEntityList->obj.klass + v8);
        if ( !v11 )
          goto LABEL_54;
        v36 = *(_DWORD *)(v11 + 32);
        v12 = *p_itemIcon;
        if ( !*p_itemIcon )
          goto LABEL_54;
        if ( v10 >= v12->max_length )
          goto LABEL_55;
        v13 = (UISprite_o *)*((_QWORD *)&v12->obj.klass + v8);
        v14 = *(_DWORD *)(v11 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        consumeItem = (UnityEngine_GameObject_o *)AtlasManager__SetItem(v13, v14, 0LL);
        v15 = this->fields.itemNumLabel;
        if ( !v15 )
          goto LABEL_54;
        if ( v10 >= v15->max_length )
          goto LABEL_55;
        v16 = (UILabel_o *)*((_QWORD *)&v15->obj.klass + v8);
        consumeItem = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v36, 0LL);
        if ( !v16 )
          goto LABEL_54;
        UILabel__set_text(v16, (System_String_o *)consumeItem, 0LL);
        v17 = this->fields.itemNumLabel;
        if ( !v17 )
          goto LABEL_54;
        if ( v10 >= v17->max_length )
          goto LABEL_55;
        v18 = (UIWidget_o *)*((_QWORD *)&v17->obj.klass + v8);
        *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_yellow(0LL);
        if ( !v18 )
          goto LABEL_54;
        UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
        v23 = *p_itemIcon;
        if ( !*p_itemIcon )
          goto LABEL_54;
        if ( v10 >= v23->max_length )
          goto LABEL_55;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v23->obj.klass + v8);
        if ( !consumeItem )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v24 = this->fields.itemNumLabel;
        if ( !v24 )
          goto LABEL_54;
        if ( v10 >= v24->max_length )
          goto LABEL_55;
        consumeItem = (UnityEngine_GameObject_o *)*((_QWORD *)&v24->obj.klass + v8);
        if ( !consumeItem )
          goto LABEL_54;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 1, 0LL);
        v6 = *(_QWORD *)&commonConsumeEntityList->max_length;
      }
      while ( (int)++v8 - 4 < (int)v6 );
    }
    v25 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_54;
    v26 = 8LL * (int)v6 + 32;
    while ( 1 )
    {
      v27 = *(_QWORD *)&v25->max_length;
      if ( (int)v6 >= (int)v27 )
        break;
      v28 = this->fields.itemNumLabel;
      if ( !v28 )
        goto LABEL_54;
      if ( (unsigned int)v6 >= v28->max_length )
        goto LABEL_55;
      consumeItem = *(UnityEngine_GameObject_o **)((char *)&v28->obj.klass + v26);
      if ( consumeItem )
      {
        UILabel__set_text((UILabel_o *)consumeItem, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v29 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)v6 >= v29->max_length )
            goto LABEL_55;
          consumeItem = *(UnityEngine_GameObject_o **)((char *)&v29->obj.klass + v26);
          if ( consumeItem )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
            v30 = this->fields.itemNumLabel;
            if ( v30 )
            {
              if ( (unsigned int)v6 >= v30->max_length )
                goto LABEL_55;
              consumeItem = *(UnityEngine_GameObject_o **)((char *)&v30->obj.klass + v26);
              if ( consumeItem )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumeItem, 0, 0LL);
                v25 = *p_itemIcon;
                LODWORD(v6) = v6 + 1;
                v26 += 8LL;
                if ( *p_itemIcon )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    v31 = 0.0;
    if ( v36 <= 9 )
    {
      v32 = this->fields.itemNumLabel;
      if ( !v32 )
        goto LABEL_54;
      if ( !v32->max_length )
      {
LABEL_55:
        v35 = sub_B52A88(consumeItem);
        sub_B52A28(v35, 0LL);
      }
      v33 = v32->m_Items[0];
      if ( !v33 )
LABEL_54:
        sub_B52A5C(consumeItem, commonConsumeEntityList);
      v31 = (float)(v33->fields.mFontSize / 2);
    }
    consumeItemIconGrid = this->fields.consumeItemIconGrid;
    if ( !consumeItemIconGrid )
      goto LABEL_54;
    GameObjectExtensions__SetLocalPositionX(
      this->fields.consumeItem,
      v31
    + (float)((float)(consumeItemIconGrid->fields.cellHeight * 0.5) * (float)(v27 - commonConsumeEntityList->max_length)),
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