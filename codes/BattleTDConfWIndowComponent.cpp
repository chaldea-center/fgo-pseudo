void __fastcall BattleTDConfWIndowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42172F8 & 1) == 0 )
  {
    sub_B0D8A4(&BattleTDConfWIndowComponent_TypeInfo, v1);
    byte_42172F8 = 1;
  }
  BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 20;
  BattleTDConfWIndowComponent_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT = 105;
  BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
}


void __fastcall BattleTDConfWIndowComponent___ctor(BattleTDConfWIndowComponent_o *this, const MethodInfo *method)
{
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


System_String_o *__fastcall BattleTDConfWIndowComponent__get_closeBtnPath(
        BattleTDConfWIndowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42172F7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4055/*"Close"*/, method);
    byte_42172F7 = 1;
  }
  return (System_String_o *)StringLiteral_4055/*"Close"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleTDConfWIndowComponent__setData(
        BattleTDConfWIndowComponent_o *this,
        int32_t tdId,
        int32_t lv,
        System_String_o *overwriteTDName,
        System_String_o *overwriteTDRuby,
        bool npDetailActive,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *Entity; // x25
  TreasureDvcLvEntity_o *v24; // x0
  UILabel_o *nameLabel; // x24
  TreasureDvcLvEntity_o *v26; // x22
  UILabel_o *rubyLabel; // x23
  UILabel_o *lvLabel; // x21
  System_String_o *v29; // x1
  UILabel_o *maxParLbal; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UIWidget_o *confLabel; // x21
  UILabel_o *v34; // x21
  System_String_o *DetalShort_28055856; // x0
  System_String_o **v36; // x8
  UILabel_o *unknownNpLabel; // x21
  System_String_o *v38; // x1
  bool activeSelf; // w20
  int v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t lva; // [xsp+Ch] [xbp-34h] BYREF

  lva = lv;
  if ( (byte_42172F6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleTDConfWIndowComponent_TypeInfo, *(_QWORD *)&tdId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v14);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&StringLiteral_9409/*"NP_UNKNOWN"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    sub_B0D8A4(&StringLiteral_8705/*"MAX {0}%"*/, v21);
    byte_42172F6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             tdId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !Instance )
    goto LABEL_50;
  v24 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, tdId, lv, 0LL);
  nameLabel = this->fields.nameLabel;
  v26 = v24;
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
  v29 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(lvLabel, v29, 0LL);
  if ( !v26 )
    goto LABEL_50;
  maxParLbal = this->fields.maxParLbal;
  v40 = 100 * v26->fields.gaugeCount;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v32 = System_String__Format((System_String_o *)StringLiteral_8705/*"MAX {0}%"*/, v31, 0LL);
  WrapControlText__textAdjust(maxParLbal, v32, 22, 0, 0, 0LL);
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
  v34 = this->fields.confLabel;
  DetalShort_28055856 = TreasureDvcLvEntity__getDetalShort_28055856(v26, lva, 0LL);
  WrapControlText__textBBCodeAdjust(
    v34,
    DetalShort_28055856,
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
    v36 = (System_String_o **)&Instance[3];
  }
  else
  {
    if ( !Instance )
      goto LABEL_50;
    v36 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Instance, *v36, 0LL);
  unknownNpLabel = this->fields.unknownNpLabel;
  if ( !npDetailActive )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9409/*"NP_UNKNOWN"*/, 0LL);
    v38 = (System_String_o *)Instance;
    if ( unknownNpLabel )
      goto LABEL_44;
LABEL_50:
    sub_B0D97C(Instance);
  }
  v38 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !unknownNpLabel )
    goto LABEL_50;
LABEL_44:
  UILabel__set_text(unknownNpLabel, v38, 0LL);
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