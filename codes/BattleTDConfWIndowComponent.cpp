void __fastcall BattleTDConfWIndowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438A899 & 1) == 0 )
  {
    sub_B775C4(&BattleTDConfWIndowComponent_TypeInfo);
    byte_438A899 = 1;
  }
  BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 20;
  BattleTDConfWIndowComponent_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT = 105;
  BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
}


void __fastcall BattleTDConfWIndowComponent___ctor(BattleTDConfWIndowComponent_o *this, const MethodInfo *method)
{
  this->fields.type = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall BattleTDConfWIndowComponent__get_closeBtnPath(
        BattleTDConfWIndowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438A898 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4171/*"Close"*/);
    byte_438A898 = 1;
  }
  return (System_String_o *)StringLiteral_4171/*"Close"*/;
}


void __fastcall BattleTDConfWIndowComponent__setData(
        BattleTDConfWIndowComponent_o *this,
        int32_t tdId,
        int32_t lv,
        System_String_o *overwriteTDName,
        System_String_o *overwriteTDRuby,
        bool npDetailActive,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_String_o *v14; // x1
  WarEntity_o *Entity; // x25
  TreasureDvcLvEntity_o *v16; // x0
  UILabel_o *nameLabel; // x24
  TreasureDvcLvEntity_o *v18; // x22
  UILabel_o *rubyLabel; // x23
  UILabel_o *lvLabel; // x21
  System_String_o *v21; // x1
  __int64 v22; // x2
  UILabel_o *maxParLbal; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  UIWidget_o *confLabel; // x21
  UILabel_o *v27; // x21
  System_String_o *DetalShort_29482620; // x0
  System_String_o **v29; // x8
  UILabel_o *unknownNpLabel; // x21
  bool activeSelf; // w20
  int v32; // [xsp+8h] [xbp-38h] BYREF
  int32_t lva; // [xsp+Ch] [xbp-34h] BYREF

  lva = lv;
  if ( (byte_438A897 & 1) == 0 )
  {
    sub_B775C4(&BattleTDConfWIndowComponent_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_9557/*"NP_UNKNOWN"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_8844/*"MAX {0}%"*/);
    byte_438A897 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             tdId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !Instance )
    goto LABEL_50;
  v16 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, tdId, lv, 0LL);
  nameLabel = this->fields.nameLabel;
  v18 = v16;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(overwriteTDName, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_50;
    overwriteTDName = Entity->fields.age;
  }
  if ( !nameLabel )
    goto LABEL_50;
  UILabel__set_text(nameLabel, overwriteTDName, 0LL);
  rubyLabel = this->fields.rubyLabel;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(overwriteTDRuby, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_50;
    overwriteTDRuby = Entity->fields.name;
  }
  if ( !rubyLabel )
    goto LABEL_50;
  UILabel__set_text(rubyLabel, overwriteTDRuby, 0LL);
  lvLabel = this->fields.lvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lva, 0LL);
  if ( !lvLabel )
    goto LABEL_50;
  v21 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(lvLabel, v21, 0LL);
  if ( !v18 )
    goto LABEL_50;
  maxParLbal = this->fields.maxParLbal;
  v32 = 100 * v18->fields.gaugeCount;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v22);
  v25 = System_String__Format((System_String_o *)StringLiteral_8844/*"MAX {0}%"*/, v24, 0LL);
  WrapControlText__textAdjust(maxParLbal, v25, 22, 0, 0, 0LL);
  confLabel = (UIWidget_o *)this->fields.confLabel;
  Instance = (DataManager_o *)BattleTDConfWIndowComponent_TypeInfo;
  if ( (BYTE3(BattleTDConfWIndowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleTDConfWIndowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleTDConfWIndowComponent_TypeInfo);
  }
  if ( !confLabel )
    goto LABEL_50;
  UIWidget__set_height(confLabel, BattleTDConfWIndowComponent_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0LL);
  v27 = this->fields.confLabel;
  DetalShort_29482620 = TreasureDvcLvEntity__getDetalShort_29482620(v18, lva, 0LL);
  WrapControlText__textBBCodeAdjust(
    v27,
    DetalShort_29482620,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
    0LL);
  Instance = (DataManager_o *)this->fields.maxParLbal;
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0LL);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0LL);
  Instance = (DataManager_o *)this->fields.confLabel;
  if ( npDetailActive )
  {
    if ( !Instance )
      goto LABEL_50;
    v29 = (System_String_o **)&Instance[3];
  }
  else
  {
    if ( !Instance )
      goto LABEL_50;
    v29 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Instance, *v29, 0LL);
  unknownNpLabel = this->fields.unknownNpLabel;
  if ( !npDetailActive )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9557/*"NP_UNKNOWN"*/, 0LL);
    v14 = (System_String_o *)Instance;
    if ( unknownNpLabel )
      goto LABEL_44;
LABEL_50:
    sub_B7769C(Instance, v14);
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !unknownNpLabel )
    goto LABEL_50;
LABEL_44:
  UILabel__set_text(unknownNpLabel, v14, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_50;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_50;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.confLabel;
  if ( !Instance )
    goto LABEL_50;
  UIWidget__ResizeCollider((UIWidget_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, activeSelf, 0LL);
}