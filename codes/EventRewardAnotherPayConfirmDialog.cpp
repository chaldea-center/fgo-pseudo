void __fastcall EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  EventRewardAnotherPayConfirmDialog_c *v3; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9

  if ( (byte_40F6138 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardAnotherPayConfirmDialog_TypeInfo, v1);
    byte_40F6138 = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CANCEL_BUTTON_BASE_POS.fields.x = 0xC3600000C3200000LL;
  static_fields->CANCEL_BUTTON_BASE_POS.fields.z = 0.0;
  v3 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v4 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v4->CANCEL_BUTTON_CHOICES_POS.fields.x = vdup_n_s32(0xC3600000);
  v4->CANCEL_BUTTON_CHOICES_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->CANCEL_BUTTON_PURCHASED_POS.fields.x = 0xC3700000C3200000LL;
  v5->CANCEL_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->CANCEL_BUTTON_RESULT_POS.fields.x = 0xC31B000000000000LL;
  v6->CANCEL_BUTTON_RESULT_POS.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->DECIDE_BUTTON_BASE_POS.fields.x = 0xC360000043200000LL;
  v7->DECIDE_BUTTON_BASE_POS.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->DECIDE_BUTTON_PURCHASED_POS.fields.x = -4363988037795840000LL;
  v8->DECIDE_BUTTON_PURCHASED_POS.fields.z = 0.0;
  v3->static_fields->CONFIRM_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v3->static_fields->RESULT_WINDOW_SIZE = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v3->static_fields->SKILL_BASE_POS_Y = 5.0;
  v3->static_fields->SKILL_CHOICES_POS_Y = 10.0;
  v3->static_fields->SKILL_PURCHASED_POS_Y = -25.0;
  v3->static_fields->SKILL_RESULT_POS_Y = -30.0;
  v3->static_fields->SKILL_RESULT_END_POS_Y = 0.0;
  v3->static_fields->ICON_BASE_POS_Y = 175.0;
  v3->static_fields->ICON_CHOICES_POS_Y = 180.0;
  v3->static_fields->ICON_PURCHASED_POS_Y = 185.0;
  v3->static_fields->UPPER_LABEL_POS_Y = -50.0;
  v3->static_fields->UPPER_LABEL_CHOICES_POS_Y = -60.0;
  v3->static_fields->WARN_LABEL_BASE_POS_Y = -95.0;
  v3->static_fields->WARN_LABEL_CHOICES_POS_Y = -100.0;
  v3->static_fields->WARN_LABEL_PURCHASED_POS_Y = -125.0;
  v3->static_fields->DOWNER_LABEL_POS_Y = -50.0;
  v3->static_fields->DOWNER_LABEL_CHOICES_POS_Y = -55.0;
  v3->static_fields->DOWNER_LABEL_RESULT_POS_Y = -100.0;
  v3->static_fields->RESULT_LABEL_POS_Y = 100.0;
  v3->static_fields->RESULT_LABEL_PERIOD_POS_Y = 120.0;
  v3->static_fields->DOWNER_LABEL_FONT_SIZE = 20;
  v3->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE = 22;
}


void __fastcall EventRewardAnotherPayConfirmDialog___ctor(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6137 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F6137 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Close(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__EndOpen(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__GetName(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  int64_t v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  WarQuestSelectionMaster_o *v14; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  ServantLimitImageMaster_o *v17; // x20
  int32_t v18; // w0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v20; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_40F6135 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, svtEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40F6135 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !svtEntity )
    goto LABEL_29;
  v10 = UserId;
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v12;
  *(_QWORD *)&v23.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v10, v13, 0LL) )
  {
    v20 = -1;
    return ServantEntity__getName(svtEntity, v20, -1, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v17 = (ServantLimitImageMaster_o *)v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v16;
  *(_QWORD *)&v24.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24, 0LL);
  if ( !entity
    || !v17
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v17,
                                       v18,
                                       entity->fields.maxLimitCount,
                                       0LL),
        !entity) )
  {
LABEL_29:
    sub_B170D4();
  }
  if ( ServantLimitCountSealAfter == entity->fields.maxLimitCount )
    v20 = -1;
  else
    v20 = ServantLimitCountSealAfter;
  return ServantEntity__getName(svtEntity, v20, -1, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__Init(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0
  SkillIconComponent_o *skillIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0LL), (skillIcon = this->fields.skillIcon) == 0LL)
    || (SkillIconComponent__Clear(skillIcon, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_40F6134 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F6134 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B170D4();
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      3,
      (const MethodInfo_24B6068 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickCancel(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x0
  struct UILabel_o *cancelLabel; // x8
  System_String_o *v8; // x1
  System_String_o *mText; // x0
  bool v10; // w20
  _QWORD *v11; // x8
  System_Reflection_MethodBase_o *v12; // x0
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_40F6131 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B16FFC(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_3252, v5);
    byte_40F6131 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
    cancelLabel = this->fields.cancelLabel;
    if ( !cancelLabel )
      goto LABEL_15;
    v8 = v6;
    mText = cancelLabel->fields.mText;
    if ( !mText )
      goto LABEL_15;
    v10 = System_String__Equals_43731072(mText, v8, 0LL);
    v11 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B17004(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v12 = (System_Reflection_MethodBase_o *)sub_B16FE0(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, !v10, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
LABEL_15:
      sub_B170D4();
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      0,
      (const MethodInfo_24B6068 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_40F6132 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F6132 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B170D4();
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      1,
      (const MethodInfo_24B6068 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


void __fastcall EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide; // x0

  if ( (byte_40F6133 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F6133 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B170D4();
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)onDecide,
      2,
      (const MethodInfo_24B6068 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__Open(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isChoices,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        bool isReconfirm,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x26
  System_Object_array *AnotherPayItemIds; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  int32_t v35; // w24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v38; // x21
  ServantEntity_o *RelateServantEntity; // x0
  ServantEntity_o *v40; // x25
  UnityEngine_Component_o *itemIcon; // x0
  int32_t v42; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  ItemIconComponent_o *v44; // x0
  int32_t eventId; // w24
  __int64 v46; // x26
  __int64 v47; // x27
  int32_t v48; // w0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  UILabel_o *resultLabel; // x0
  EventRewardAnotherPayConfirmDialog_o *v52; // x0
  const MethodInfo *v53; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *warnLabel; // x26
  Il2CppObject *v57; // x25
  System_String_o *v58; // x27
  Il2CppObject *AnotherPayName; // x0
  System_String_o *v60; // x0
  UILabel_o *downerLabel; // x26
  UILabel_o *titleLabel; // x26
  System_String_o *v63; // x22
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  UILabel_o *upperLabel; // x22
  System_String_o *v67; // x23
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  struct UILabel_o *v70; // x22
  System_String_o *v71; // x23
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  System_String_o *v74; // x1
  UILabel_o *v75; // x0
  System_String_o *v76; // x27
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  UILabel_o *v79; // x26
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  UILabel_o *v82; // x26
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  const MethodInfo *v85; // x1
  System_String_o *v86; // x23
  __int64 v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **age; // x28
  System_Object_array *v94; // x27
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x22
  System_String_o *v111; // x0
  EventRewardAnotherPayConfirmDialog_c *v112; // x0
  const MethodInfo *v113; // x3
  UnityEngine_GameObject_o *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  System_Action_o *v119; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16

  if ( (byte_40F612C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, entity);
    sub_B16FFC(&System_Action_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v16);
    sub_B16FFC(&EventRewardAnotherPayConfirmDialog_TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&object___TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&string_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_1691, v23);
    sub_B16FFC(&StringLiteral_1690, v24);
    sub_B16FFC(&StringLiteral_1684, v25);
    sub_B16FFC(&StringLiteral_1686, v26);
    sub_B16FFC(&StringLiteral_1689, v27);
    sub_B16FFC(&StringLiteral_1687, v28);
    sub_B16FFC(&StringLiteral_1685, v29);
    sub_B16FFC(&StringLiteral_1688, v30);
    byte_40F612C = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    (System_String_array **)isChoices,
    (System_String_array **)onDecide,
    (System_Boolean_array **)isReconfirm,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !entity )
    goto LABEL_78;
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = (System_Object_array *)ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_78;
    if ( !AnotherPayItemIds->max_length )
      goto LABEL_79;
    v35 = (int32_t)AnotherPayItemIds->m_Items[0];
  }
  else
  {
    v35 = 0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_78;
  v38 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          MasterData_WarQuestSelectionMaster,
          v35,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !v38 || (v40 = RelateServantEntity) == 0LL )
  {
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        (System_Action_ShopRootConstants_State__o *)*p_onDecide,
        2,
        (const MethodInfo_24B6068 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
      return;
    }
    goto LABEL_78;
  }
  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( isReconfirm )
    v42 = 2;
  else
    v42 = 4;
  if ( isChoices )
    v42 = 3;
  this->fields.state = v42;
  if ( !itemIcon )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  if ( !gameObject )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v44 = this->fields.itemIcon;
  if ( !v44 )
    goto LABEL_78;
  ItemIconComponent__SetItem(v44, v35, -1, 0LL);
  eventId = entity->fields.eventId;
  v47 = *(_QWORD *)&v40->fields.id.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v40->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v120.fields.currentCryptoKey = v47;
  *(_QWORD *)&v120.fields.fakeValue = v46;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v120, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v48, v49);
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, 1, v50);
  resultLabel = this->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_78;
  UILabel__set_text(resultLabel, string_TypeInfo->static_fields->Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v52, v40, v53);
  ClassName = ServantEntity__getClassName(v40, 0LL);
  warnLabel = this->fields.warnLabel;
  v57 = (Il2CppObject *)ClassName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_1690, 0LL);
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v38, 0LL);
  v60 = System_String__Format(v58, AnotherPayName, 0LL);
  if ( !warnLabel )
    goto LABEL_78;
  UILabel__set_text(warnLabel, v60, 0LL);
  downerLabel = this->fields.downerLabel;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
  }
  if ( !downerLabel )
    goto LABEL_78;
  UILabel__set_fontSize(
    downerLabel,
    EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_FONT_SIZE,
    0LL);
  titleLabel = this->fields.titleLabel;
  if ( isChoices )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_1685, 0LL);
    v64 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v38, 0LL);
    v65 = System_String__Format(v63, v64, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, v65, 0LL);
      upperLabel = this->fields.upperLabel;
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_1686, 0LL);
      v68 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v38, 0LL);
      v69 = System_String__Format(v67, v68, 0LL);
      if ( upperLabel )
      {
        UILabel__set_text(upperLabel, v69, 0LL);
        v70 = this->fields.downerLabel;
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_1687, 0LL);
        v72 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v38, 0LL);
        v73 = System_String__Format(v71, v72, 0LL);
        if ( v70 )
        {
          v74 = v73;
          v75 = v70;
LABEL_54:
          UILabel__set_text(v75, v74, 0LL);
          goto LABEL_73;
        }
      }
    }
    goto LABEL_78;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_1684, 0LL);
  v77 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)v38, 0LL);
  v78 = System_String__Format(v76, v77, 0LL);
  if ( !titleLabel )
    goto LABEL_78;
  UILabel__set_text(titleLabel, v78, 0LL);
  v79 = this->fields.downerLabel;
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_1689, 0LL);
  v81 = System_String__Format(v80, (Il2CppObject *)v38->fields.age, 0LL);
  if ( !v79 )
    goto LABEL_78;
  UILabel__set_text(v79, v81, 0LL);
  v82 = this->fields.upperLabel;
  if ( isReconfirm )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_1691, 0LL);
    v84 = System_String__Format_43744796(v83, (Il2CppObject *)v38->fields.age, v57, Name, 0LL);
    if ( v82 )
    {
      v74 = v84;
      v75 = v82;
      goto LABEL_54;
    }
LABEL_78:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_1688, 0LL);
  AnotherPayItemIds = (System_Object_array *)sub_B17014(object___TypeInfo, 4LL, v87);
  if ( !AnotherPayItemIds )
    goto LABEL_78;
  age = (System_Int32_array **)v38->fields.age;
  v94 = AnotherPayItemIds;
  if ( age )
  {
    AnotherPayItemIds = (System_Object_array *)sub_B170BC(
                                                 v38->fields.age,
                                                 AnotherPayItemIds->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( !v94->max_length )
    goto LABEL_79;
  v94->m_Items[0] = (Il2CppObject *)age;
  sub_B16F98((BattleServantConfConponent_o *)v94->m_Items, age, v34, v88, v89, v90, v91, v92);
  if ( v57 )
  {
    AnotherPayItemIds = (System_Object_array *)sub_B170BC(v57, v94->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v94->max_length <= 1 )
    goto LABEL_79;
  v94->m_Items[1] = v57;
  sub_B16F98((BattleServantConfConponent_o *)&v94->m_Items[1], (System_Int32_array **)v57, v34, v95, v96, v97, v98, v99);
  if ( Name )
  {
    AnotherPayItemIds = (System_Object_array *)sub_B170BC(Name, v94->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
      goto LABEL_80;
  }
  if ( v94->max_length <= 2 )
    goto LABEL_79;
  v94->m_Items[2] = Name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v94->m_Items[2],
    (System_Int32_array **)Name,
    v34,
    v100,
    v101,
    v102,
    v103,
    v104);
  AnotherPayItemIds = (System_Object_array *)ShopEntity__getName(entity, 0LL);
  v110 = (System_Int32_array **)AnotherPayItemIds;
  if ( AnotherPayItemIds )
  {
    AnotherPayItemIds = (System_Object_array *)sub_B170BC(AnotherPayItemIds, v94->obj.klass->_1.element_class);
    if ( !AnotherPayItemIds )
    {
LABEL_80:
      sub_B170F4(AnotherPayItemIds);
      sub_B170A0();
    }
  }
  if ( v94->max_length <= 3 )
  {
LABEL_79:
    sub_B17100(AnotherPayItemIds, v33, v34);
    sub_B170A0();
  }
  v94->m_Items[3] = (Il2CppObject *)v110;
  sub_B16F98((BattleServantConfConponent_o *)&v94->m_Items[3], v110, v34, v105, v106, v107, v108, v109);
  v111 = System_String__Format_43822456(v86, v94, 0LL);
  if ( !v82 )
    goto LABEL_78;
  UILabel__set_text(v82, v111, 0LL);
LABEL_73:
  v112 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v112 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v112->static_fields->CONFIRM_WINDOW_SIZE, v85);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, isChoices, (ItemEntity_o *)v38, v113);
  v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v114 )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(v114, 1, 0LL);
  v119 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v115, v116, v117, v118);
  System_Action___ctor(v119, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v119, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *entity,
        bool isAnotherItemOnly,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o *onDecide,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__o **p_onDecide; // x23
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantEntity_o *RelateServantEntity; // x0
  ServantEntity_o *v30; // x22
  int32_t eventId; // w23
  __int64 v32; // x24
  __int64 v33; // x25
  int32_t v34; // w0
  const MethodInfo *v35; // x3
  UILabel_o *warnLabel; // x0
  UILabel_o *titleLabel; // x23
  UILabel_o *upperLabel; // x25
  UILabel_o *downerLabel; // x26
  System_String_o *Empty; // x24
  EventRewardAnotherPayConfirmDialog_o *v41; // x0
  const MethodInfo *v42; // x2
  Il2CppObject *Name; // x23
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x22
  Il2CppObject *v46; // x24
  __int64 *v47; // x8
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_o *v53; // x0
  const MethodInfo *v54; // x2
  bool v55; // w1
  UILabel_o *v56; // x21
  System_String_o *v57; // x0
  UILabel_o *v58; // x21
  const MethodInfo *v59; // x1
  EventRewardAnotherPayConfirmDialog_c *v60; // x0
  System_Int32_array *AnotherPayItemIds; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  int32_t v64; // w20
  WebViewManager_o *v65; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x0
  ItemEntity_o *v67; // x0
  const MethodInfo *v68; // x3
  UnityEngine_GameObject_o *v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Action_o *v74; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_40F612D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__, entity);
    sub_B16FFC(&System_Action_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_EventRewardAnotherPayConfirmDialog_EndOpen__, v17);
    sub_B16FFC(&EventRewardAnotherPayConfirmDialog_TypeInfo, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&string_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_1694, v23);
    sub_B16FFC(&StringLiteral_1693, v24);
    sub_B16FFC(&StringLiteral_1695, v25);
    byte_40F612D = 1;
  }
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    (System_String_array **)isAnotherItemOnly,
    (System_String_array **)onDecide,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !entity )
  {
    if ( *p_onDecide )
    {
      System_Action_ShopRootConstants_State___Invoke(
        (System_Action_ShopRootConstants_State__o *)*p_onDecide,
        0,
        (const MethodInfo_24B6068 *)Method_System_Action_EventRewardAnotherPayConfirmDialog_BuyState__Invoke__);
      return;
    }
    goto LABEL_52;
  }
  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  this->fields.state = 5;
  if ( !itemIcon )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(entity, 0LL);
  if ( !RelateServantEntity )
    goto LABEL_52;
  v30 = RelateServantEntity;
  eventId = entity->fields.eventId;
  v33 = *(_QWORD *)&RelateServantEntity->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&RelateServantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v75.fields.currentCryptoKey = v33;
  *(_QWORD *)&v75.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v75, 0LL);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v34, v35);
  warnLabel = this->fields.warnLabel;
  if ( !warnLabel )
    goto LABEL_52;
  titleLabel = this->fields.titleLabel;
  upperLabel = this->fields.upperLabel;
  downerLabel = this->fields.downerLabel;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_text(warnLabel, Empty, 0LL);
  if ( !downerLabel )
    goto LABEL_52;
  UILabel__set_text(downerLabel, Empty, 0LL);
  if ( !upperLabel )
    goto LABEL_52;
  UILabel__set_text(upperLabel, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_52;
  UILabel__set_text(titleLabel, Empty, 0LL);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v41, v30, v42);
  ClassName = ServantEntity__getClassName(v30, 0LL);
  resultLabel = this->fields.resultLabel;
  v46 = (Il2CppObject *)ClassName;
  if ( isAnotherItemOnly )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = &StringLiteral_1694;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = &StringLiteral_1695;
  }
  v48 = LocalizationManager__Get((System_String_o *)*v47, 0LL);
  v49 = (Il2CppObject *)ShopEntity__getName(entity, 0LL);
  v50 = System_String__Format_43744796(v48, v49, v46, Name, 0LL);
  if ( !resultLabel )
    goto LABEL_52;
  UILabel__set_text(resultLabel, v50, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  v53 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           entity->fields.eventId,
                           (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( v53 && !EventEntity__IsEventPeriod(v53, 0LL, 0LL) )
  {
    v56 = this->fields.downerLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_1693, 0LL);
    if ( !v56 )
      goto LABEL_52;
    UILabel__set_text(v56, v57, 0LL);
    v58 = this->fields.downerLabel;
    if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    }
    if ( !v58 )
      goto LABEL_52;
    UILabel__set_fontSize(
      v58,
      EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_FONT_SIZE,
      0LL);
    v55 = 0;
  }
  else
  {
    v55 = 1;
  }
  EventRewardAnotherPayConfirmDialog__SetUIPositon(this, v55, v54);
  v60 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v60 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v60->static_fields->RESULT_WINDOW_SIZE, v59);
  if ( ShopEntity__GetAnotherPayItemIds(entity, 0LL) )
  {
    AnotherPayItemIds = ShopEntity__GetAnotherPayItemIds(entity, 0LL);
    if ( !AnotherPayItemIds )
      goto LABEL_52;
    if ( !AnotherPayItemIds->max_length )
    {
      sub_B17100(AnotherPayItemIds, v62, v63);
      sub_B170A0();
    }
    v64 = AnotherPayItemIds->m_Items[1];
  }
  else
  {
    v64 = 0;
  }
  v65 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v65
    || (v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v65,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (v67 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v66,
                                v64,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, 0, v67, v68),
        (v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_52:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v69, 1, 0LL);
  v74 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v70, v71, v72, v73);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isChoices,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *cancelLabel; // x22
  System_String_o *v14; // x0
  UILabel_o *decideLabel; // x22
  System_String_o *v16; // x0
  UILabel_o *normalBuyLabel; // x22
  System_String_o *v18; // x0
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x23
  Il2CppObject *AnotherPayName; // x0
  System_String_o *v23; // x0
  int32_t state; // w8
  UILabel_o *v25; // x20
  System_String_o *v26; // x0
  UnityEngine_GameObject_o *decideButton; // x0
  UnityEngine_GameObject_o *normalBuyButton; // x0
  UnityEngine_GameObject_o *anotherBuyButton; // x0
  UnityEngine_GameObject_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  EventRewardAnotherPayConfirmDialog_c *v32; // x8
  float *p_x; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x20
  EventRewardAnotherPayConfirmDialog_c *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x21
  EventRewardAnotherPayConfirmDialog_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  EventRewardAnotherPayConfirmDialog_c *v54; // x8
  float *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  EventRewardAnotherPayConfirmDialog_c *v60; // x8
  float *v61; // x8

  if ( (byte_40F6130 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardAnotherPayConfirmDialog_TypeInfo, isChoices);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_9328, v8);
    sub_B16FFC(&StringLiteral_1683, v9);
    sub_B16FFC(&StringLiteral_3251, v10);
    sub_B16FFC(&StringLiteral_3252, v11);
    sub_B16FFC(&StringLiteral_1692, v12);
    byte_40F6130 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelLabel )
    goto LABEL_56;
  UILabel__set_text(cancelLabel, v14, 0LL);
  decideLabel = this->fields.decideLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_9328, 0LL);
  if ( !decideLabel )
    goto LABEL_56;
  UILabel__set_text(decideLabel, v16, 0LL);
  normalBuyLabel = this->fields.normalBuyLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_1692, 0LL);
  if ( !normalBuyLabel )
    goto LABEL_56;
  UILabel__set_text(normalBuyLabel, v18, 0LL);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1683, 0LL);
  if ( !itemEntity )
    goto LABEL_56;
  v21 = v20;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0LL);
  v23 = System_String__Format(v21, AnotherPayName, 0LL);
  if ( !anotherBuyLabel )
    goto LABEL_56;
  UILabel__set_text(anotherBuyLabel, v23, 0LL);
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 5 )
    {
      v25 = this->fields.cancelLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
      if ( v25 )
      {
        UILabel__set_text(v25, v26, 0LL);
        decideButton = this->fields.decideButton;
        if ( decideButton )
        {
          UnityEngine_GameObject__SetActive(decideButton, 0, 0LL);
          normalBuyButton = this->fields.normalBuyButton;
          if ( normalBuyButton )
          {
            UnityEngine_GameObject__SetActive(normalBuyButton, 0, 0LL);
            anotherBuyButton = this->fields.anotherBuyButton;
            if ( anotherBuyButton )
            {
              UnityEngine_GameObject__SetActive(anotherBuyButton, 0, 0LL);
              cancelButton = this->fields.cancelButton;
              if ( cancelButton )
              {
                gameObject = UnityEngine_GameObject__get_gameObject(cancelButton, 0LL);
                v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                  v32 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                }
                p_x = &v32->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                x = p_x[9];
                y = p_x[10];
                z = p_x[11];
LABEL_54:
                v44 = gameObject;
                goto LABEL_55;
              }
            }
          }
        }
      }
    }
    else
    {
      v46 = this->fields.decideButton;
      if ( v46 )
      {
        v47 = UnityEngine_GameObject__get_gameObject(v46, 0LL);
        v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(v47, v48->static_fields->DECIDE_BUTTON_BASE_POS, 0LL);
        v49 = this->fields.decideButton;
        if ( v49 )
        {
          if ( isChoices )
          {
            UnityEngine_GameObject__SetActive(v49, 0, 0LL);
            v50 = this->fields.normalBuyButton;
            if ( v50 )
            {
              UnityEngine_GameObject__SetActive(v50, 1, 0LL);
              v51 = this->fields.anotherBuyButton;
              if ( v51 )
              {
                UnityEngine_GameObject__SetActive(v51, 1, 0LL);
                v52 = this->fields.cancelButton;
                if ( v52 )
                {
                  v53 = UnityEngine_GameObject__get_gameObject(v52, 0LL);
                  v54 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v53;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v54 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v55 = &v54->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = v55[3];
                  y = v55[4];
                  z = v55[5];
                  goto LABEL_54;
                }
              }
            }
          }
          else
          {
            UnityEngine_GameObject__SetActive(v49, 1, 0LL);
            v56 = this->fields.normalBuyButton;
            if ( v56 )
            {
              UnityEngine_GameObject__SetActive(v56, 0, 0LL);
              v57 = this->fields.anotherBuyButton;
              if ( v57 )
              {
                UnityEngine_GameObject__SetActive(v57, 0, 0LL);
                v58 = this->fields.cancelButton;
                if ( v58 )
                {
                  v59 = UnityEngine_GameObject__get_gameObject(v58, 0LL);
                  v60 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  gameObject = v59;
                  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
                    v60 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                  }
                  v61 = &v60->static_fields->CANCEL_BUTTON_BASE_POS.fields.x;
                  x = *v61;
                  y = v61[1];
                  z = v61[2];
                  goto LABEL_54;
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_B170D4();
  }
  v37 = this->fields.decideButton;
  if ( !v37 )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  v38 = this->fields.normalBuyButton;
  if ( !v38 )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(v38, 0, 0LL);
  v39 = this->fields.anotherBuyButton;
  if ( !v39 )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(v39, 0, 0LL);
  v40 = this->fields.decideButton;
  if ( !v40 )
    goto LABEL_56;
  v41 = UnityEngine_GameObject__get_gameObject(v40, 0LL);
  v42 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    v42 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v41, v42->static_fields->DECIDE_BUTTON_PURCHASED_POS, 0LL);
  v43 = this->fields.cancelButton;
  if ( !v43 )
    goto LABEL_56;
  v44 = UnityEngine_GameObject__get_gameObject(v43, 0LL);
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  x = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.x;
  y = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.y;
  z = static_fields->CANCEL_BUTTON_PURCHASED_POS.fields.z;
LABEL_55:
  GameObjectExtensions__SetLocalPosition(v44, *(UnityEngine_Vector3_o *)&x, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *v20; // x22
  __int64 v21; // x21
  __int64 v22; // x21
  DataManager_o *v23; // x0
  ServantPassiveSkillMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v32; // x0
  int32_t v33; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x0
  SkillEntity_o *Entity; // x21
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x0
  SkillLvEntity_o *v38; // x0
  SkillLvEntity_o *v39; // x22
  UILabel_o *skillNameLabel; // x23
  System_String_o *Name; // x0
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  SkillIconComponent_o *skillIcon; // x0

  if ( (byte_40F612E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, v13);
    sub_B16FFC(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__, v14);
    sub_B16FFC(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__, v18);
    sub_B16FFC(&EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo, v19);
    byte_40F612E = 1;
  }
  v20 = (EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *)sub_B170CC(
                                                                        EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_TypeInfo,
                                                                        *(_QWORD *)&eventId,
                                                                        *(_QWORD *)&svtId,
                                                                        method,
                                                                        v4);
  EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_25;
  v20->fields.eventId = eventId;
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AAFCFC(v22);
  v23 = **(DataManager_o ***)(v22 + 184);
  if ( !v23 )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (ServantPassiveSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        v23,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            MasterData_WarQuestSelectionMaster,
                                                                            svtId,
                                                                            0LL);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ServantPassiveSkillEntity__bool__TypeInfo,
                                                                             v26,
                                                                             v27,
                                                                             v28,
                                                                             v29);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v20,
    Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0__SetSvtPassiveSkillInfo_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
  v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ServantSkillList,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
  v32 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v31,
          (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
  v33 = v32 ? HIDWORD(v32->fields.transactionId) : 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !v35 )
    goto LABEL_25;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v35,
                              v33,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  v38 = SkillLvMaster__GetEntity(Master_WarQuestSelectionMaster, v33, 1, 0LL);
  if ( Entity )
  {
    v39 = v38;
    if ( v38 )
    {
      skillNameLabel = this->fields.skillNameLabel;
      Name = SkillEntity__getName(Entity, 0LL);
      if ( skillNameLabel )
      {
        UILabel__set_text(skillNameLabel, Name, 0LL);
        skillDetailLabel = this->fields.skillDetailLabel;
        Detail = SkillLvEntity__getDetail(v39, 0, 0LL);
        WrapControlText__textAdjust(skillDetailLabel, Detail, 22, 0, 0, 0LL);
        skillIcon = this->fields.skillIcon;
        if ( skillIcon )
        {
          SkillIconComponent__Set(skillIcon, v33, 0LL);
          return;
        }
      }
LABEL_25:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetUIPositon(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isEventPeriod,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skill; // x20
  EventRewardAnotherPayConfirmDialog_c *v6; // x0
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *upperLabel; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *warnLabel; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *downerLabel; // x0
  UnityEngine_GameObject_o *v14; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  float WARN_LABEL_BASE_POS_Y; // s0
  UnityEngine_GameObject_o *v17; // x20
  EventRewardAnotherPayConfirmDialog_c *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Component_o *v25; // x0
  float DOWNER_LABEL_CHOICES_POS_Y; // s1
  UnityEngine_GameObject_o *v27; // x20
  EventRewardAnotherPayConfirmDialog_c *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *v35; // x0
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v36; // x8
  float DOWNER_LABEL_RESULT_POS_Y; // s0
  UnityEngine_GameObject_o *v38; // x21
  EventRewardAnotherPayConfirmDialog_c *v39; // x0
  UnityEngine_Component_o *resultLabel; // x0
  UnityEngine_GameObject_o *v41; // x0
  EventRewardAnotherPayConfirmDialog_c *v42; // x0
  UnityEngine_GameObject_o *v43; // x20
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0

  if ( (byte_40F612F & 1) == 0 )
  {
    sub_B16FFC(&EventRewardAnotherPayConfirmDialog_TypeInfo, isEventPeriod);
    byte_40F612F = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      skill = this->fields.skill;
      v6 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v6 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(skill, v6->static_fields->SKILL_BASE_POS_Y, 0LL);
      itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !itemIcon )
        goto LABEL_42;
      gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        gameObject,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y,
        0LL);
      upperLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !upperLabel )
        goto LABEL_42;
      v10 = UnityEngine_Component__get_gameObject(upperLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v10,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_BASE_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      warnLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !warnLabel )
        goto LABEL_42;
      v12 = UnityEngine_Component__get_gameObject(warnLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v12,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_BASE_POS_Y,
        0LL);
      downerLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !downerLabel )
        goto LABEL_42;
      v14 = UnityEngine_Component__get_gameObject(downerLabel, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_BASE_POS_Y;
      goto LABEL_20;
    case 3:
      v27 = this->fields.skill;
      v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v28 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v27, v28->static_fields->SKILL_CHOICES_POS_Y, 0LL);
      v29 = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !v29 )
        goto LABEL_42;
      v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v30,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y,
        0LL);
      v31 = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !v31 )
        goto LABEL_42;
      v32 = UnityEngine_Component__get_gameObject(v31, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v32,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_CHOICES_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_CHOICES_POS_Y,
        0LL);
      v33 = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !v33 )
        goto LABEL_42;
      v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v34,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_CHOICES_POS_Y,
        0LL);
      v35 = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !v35 )
        goto LABEL_42;
      v14 = UnityEngine_Component__get_gameObject(v35, 0LL);
      v36 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = v36->WARN_LABEL_CHOICES_POS_Y;
      DOWNER_LABEL_CHOICES_POS_Y = v36->DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_29;
    case 4:
      v17 = this->fields.skill;
      v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v17, v18->static_fields->SKILL_PURCHASED_POS_Y, 0LL);
      v19 = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !v19 )
        goto LABEL_42;
      v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v20,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y,
        0LL);
      v21 = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !v21 )
        goto LABEL_42;
      v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v22,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ICON_PURCHASED_POS_Y
      + EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->UPPER_LABEL_POS_Y,
        0LL);
      v23 = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !v23 )
        goto LABEL_42;
      v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v24,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->WARN_LABEL_PURCHASED_POS_Y,
        0LL);
      v25 = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !v25 )
        goto LABEL_42;
      v14 = UnityEngine_Component__get_gameObject(v25, 0LL);
      static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
      WARN_LABEL_BASE_POS_Y = static_fields->WARN_LABEL_PURCHASED_POS_Y;
LABEL_20:
      DOWNER_LABEL_CHOICES_POS_Y = static_fields->DOWNER_LABEL_POS_Y;
LABEL_29:
      DOWNER_LABEL_RESULT_POS_Y = WARN_LABEL_BASE_POS_Y + DOWNER_LABEL_CHOICES_POS_Y;
      goto LABEL_30;
    case 5:
      v38 = this->fields.skill;
      v39 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v39 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v38, v39->static_fields->SKILL_RESULT_POS_Y, 0LL);
      resultLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !resultLabel )
        goto LABEL_42;
      v41 = UnityEngine_Component__get_gameObject(resultLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v41,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_POS_Y,
        0LL);
      if ( isEventPeriod )
        return;
      v42 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v43 = this->fields.skill;
      if ( (BYTE3(EventRewardAnotherPayConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v42 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v43, v42->static_fields->SKILL_RESULT_END_POS_Y, 0LL);
      v44 = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !v44
        || (v45 = UnityEngine_Component__get_gameObject(v44, 0LL),
            GameObjectExtensions__SetLocalPositionY(
              v45,
              EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->RESULT_LABEL_PERIOD_POS_Y,
              0LL),
            (v46 = (UnityEngine_Component_o *)this->fields.downerLabel) == 0LL) )
      {
LABEL_42:
        sub_B170D4();
      }
      v14 = UnityEngine_Component__get_gameObject(v46, 0LL);
      DOWNER_LABEL_RESULT_POS_Y = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->DOWNER_LABEL_RESULT_POS_Y;
LABEL_30:
      GameObjectExtensions__SetLocalPositionY(v14, DOWNER_LABEL_RESULT_POS_Y, 0LL);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayConfirmDialog__SetWindowSize(
        EventRewardAnotherPayConfirmDialog_o *this,
        UnityEngine_Vector2_o size,
        const MethodInfo *method)
{
  UIWidget_o *window; // x0
  float y; // s8
  double x; // d0
  UIWidget_o *v7; // x0
  double v8; // d0

  window = this->fields.window;
  if ( !window
    || ((y = size.fields.y, size.fields.x != INFINITY) ? (x = size.fields.x) : (x = -size.fields.x),
        UIWidget__set_width(window, (int)x, 0LL),
        (v7 = this->fields.window) == 0LL) )
  {
    sub_B170D4();
  }
  v8 = y;
  if ( y == INFINITY )
    v8 = -INFINITY;
  UIWidget__set_height(v7, (int)v8, 0LL);
}


System_String_o *__fastcall EventRewardAnotherPayConfirmDialog__get_closeBtnPath(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6136 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414, method);
    byte_40F6136 = 1;
  }
  return (System_String_o *)StringLiteral_15414;
}


void __fastcall EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___ctor(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0___SetSvtPassiveSkillInfo_b__0(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass54_0_o *this,
        ServantPassiveSkillEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}