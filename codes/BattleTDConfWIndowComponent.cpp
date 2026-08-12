void BattleTDConfWIndowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_59742B3 & 1) == 0 )
  {
    sub_2213A60(&BattleTDConfWIndowComponent_TypeInfo);
    byte_59742B3 = 1;
  }
  *BattleTDConfWIndowComponent_TypeInfo->static_fields = (struct BattleTDConfWIndowComponent_StaticFields)0x6900000014LL;
}


void BattleTDConfWIndowComponent___ctor(BattleTDConfWIndowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


System_String_o *BattleTDConfWIndowComponent__get_closeBtnPath(
        BattleTDConfWIndowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_59742B2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4682/*"Close"*/);
    byte_59742B2 = 1;
  }
  return (System_String_o *)StringLiteral_4682/*"Close"*/;
}


void BattleTDConfWIndowComponent__setData(
        BattleTDConfWIndowComponent_o *this,
        int32_t tdId,
        int32_t lv,
        System_String_o *overwriteTDName,
        System_String_o *overwriteTDRuby,
        bool npDetailActive,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v14; // x1
  Il2CppObject *Entity; // x25
  TreasureDvcLvEntity_o *v16; // x0
  UILabel_o *nameLabel; // x24
  TreasureDvcLvEntity_o *v18; // x22
  UILabel_o *rubyLabel; // x23
  UILabel_o *lvLabel; // x21
  System_String_o *v21; // x1
  UILabel_o *maxParLbal; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UIWidget_o *confLabel; // x21
  UILabel_o *v26; // x21
  System_String_o *DetalShort_50010268; // x0
  UILabel_o *unknownNpLabel; // x20
  __int64 v29; // x1
  bool activeSelf; // w20
  int v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t lva; // [xsp+Ch] [xbp-44h] BYREF

  lva = lv;
  if ( (byte_59742B1 & 1) == 0 )
  {
    sub_2213A60(&BattleTDConfWIndowComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9751/*"NP_UNKNOWN"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_8968/*"MAX {0}%"*/);
    byte_59742B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tdId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !Instance )
    goto LABEL_45;
  v16 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, tdId, lv, 0);
  nameLabel = this->fields.nameLabel;
  v18 = v16;
  Instance = (void *)System_String__IsNullOrEmpty(overwriteTDName, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_45;
    overwriteTDName = (System_String_o *)Entity[1].monitor;
  }
  if ( !nameLabel )
    goto LABEL_45;
  UILabel__set_text(nameLabel, overwriteTDName, 0);
  rubyLabel = this->fields.rubyLabel;
  Instance = (void *)System_String__IsNullOrEmpty(overwriteTDRuby, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_45;
    overwriteTDRuby = (System_String_o *)Entity[2].klass;
  }
  if ( !rubyLabel )
    goto LABEL_45;
  UILabel__set_text(rubyLabel, overwriteTDRuby, 0);
  lvLabel = this->fields.lvLabel;
  Instance = System_Int32__ToString((int32_t)&lva, 0);
  if ( !lvLabel )
    goto LABEL_45;
  v21 = (System_String_o *)(Instance ? Instance : StringLiteral_1/*""*/);
  UILabel__set_text(lvLabel, v21, 0);
  if ( !v18 )
    goto LABEL_45;
  maxParLbal = this->fields.maxParLbal;
  v31 = 100 * v18->fields.gaugeCount;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
  v24 = System_String__Format((System_String_o *)StringLiteral_8968/*"MAX {0}%"*/, v23, 0);
  WrapControlText__textAdjust(maxParLbal, v24, 22, 0, 0);
  Instance = BattleTDConfWIndowComponent_TypeInfo;
  confLabel = (UIWidget_o *)this->fields.confLabel;
  if ( !*(&BattleTDConfWIndowComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleTDConfWIndowComponent_TypeInfo, v14);
  if ( !confLabel )
    goto LABEL_45;
  UIWidget__set_height(confLabel, BattleTDConfWIndowComponent_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0);
  v26 = this->fields.confLabel;
  DetalShort_50010268 = TreasureDvcLvEntity__getDetalShort_50010268(v18, lva, 0);
  WrapControlText__textBBCodeAdjust(
    v26,
    DetalShort_50010268,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0);
  Instance = this->fields.maxParLbal;
  if ( !Instance )
    goto LABEL_45;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0);
  Instance = this->fields.lvLabel;
  if ( !Instance )
    goto LABEL_45;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  Instance = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0);
  Instance = this->fields.confLabel;
  if ( npDetailActive )
  {
    if ( !Instance )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)Instance, *((System_String_o **)Instance + 52), 0);
    unknownNpLabel = this->fields.unknownNpLabel;
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !Instance )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    unknownNpLabel = this->fields.unknownNpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_9751/*"NP_UNKNOWN"*/, 0);
    v14 = (System_String_o *)Instance;
  }
  if ( !unknownNpLabel )
    goto LABEL_45;
  UILabel__set_text(unknownNpLabel, v14, 0);
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_45;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        (Instance = this->fields.scrollView) == 0)
    || (UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0), (Instance = this->fields.confLabel) == 0)
    || (UIWidget__ResizeCollider((UIWidget_o *)Instance, 0),
        (Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_45:
    sub_2213CDC(Instance, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, activeSelf, 0);
}