void BattleTDConfWIndowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C2A9DA & 1) == 0 )
  {
    sub_1C2D490(&BattleTDConfWIndowComponent_TypeInfo);
    byte_4C2A9DA = 1;
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
  if ( (byte_4C2A9D9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4501/*"Close"*/);
    byte_4C2A9D9 = 1;
  }
  return (System_String_o *)StringLiteral_4501/*"Close"*/;
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
  DataManager_o *Instance; // x0
  System_String_o *v14; // x1
  Il2CppObject *Entity; // x25
  TreasureDvcLvEntity_o *v16; // x0
  UILabel_o *nameLabel; // x24
  TreasureDvcLvEntity_o *v18; // x23
  UILabel_o *rubyLabel; // x22
  UILabel_o *lvLabel; // x21
  System_String_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UILabel_o *maxParLbal; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  UIWidget_o *confLabel; // x21
  UILabel_o *v29; // x21
  System_String_o *DetalShort_42755252; // x0
  System_String_o **p_masterLoadThreads; // x8
  UILabel_o *unknownNpLabel; // x21
  bool activeSelf; // w20
  int v34; // [xsp+8h] [xbp-48h] BYREF
  int32_t lva; // [xsp+Ch] [xbp-44h] BYREF

  lva = lv;
  if ( (byte_4C2A9D8 & 1) == 0 )
  {
    sub_1C2D490(&BattleTDConfWIndowComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C2D490(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9358/*"NP_UNKNOWN"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_8598/*"MAX {0}%"*/);
    byte_4C2A9D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_48;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tdId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !Instance )
    goto LABEL_48;
  v16 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, tdId, lv, 0);
  nameLabel = this->fields.nameLabel;
  v18 = v16;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(overwriteTDName, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_48;
    overwriteTDName = (System_String_o *)Entity[1].monitor;
  }
  if ( !nameLabel )
    goto LABEL_48;
  UILabel__set_text(nameLabel, overwriteTDName, 0);
  rubyLabel = this->fields.rubyLabel;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(overwriteTDRuby, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_48;
    overwriteTDRuby = (System_String_o *)Entity[2].klass;
  }
  if ( !rubyLabel )
    goto LABEL_48;
  UILabel__set_text(rubyLabel, overwriteTDRuby, 0);
  lvLabel = this->fields.lvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lva, 0);
  if ( !lvLabel )
    goto LABEL_48;
  v21 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(lvLabel, v21, 0);
  if ( !v18 )
    goto LABEL_48;
  maxParLbal = this->fields.maxParLbal;
  v34 = 100 * v18->fields.gaugeCount;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v22, v23, v24);
  v27 = System_String__Format((System_String_o *)StringLiteral_8598/*"MAX {0}%"*/, v26, 0);
  WrapControlText__textAdjust(maxParLbal, v27, 22, 0, 0);
  Instance = (DataManager_o *)BattleTDConfWIndowComponent_TypeInfo;
  confLabel = (UIWidget_o *)this->fields.confLabel;
  if ( !BattleTDConfWIndowComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleTDConfWIndowComponent_TypeInfo);
  if ( !confLabel )
    goto LABEL_48;
  UIWidget__set_height(confLabel, BattleTDConfWIndowComponent_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0);
  v29 = this->fields.confLabel;
  DetalShort_42755252 = TreasureDvcLvEntity__getDetalShort_42755252(v18, lva, 0);
  WrapControlText__textBBCodeAdjust(
    v29,
    DetalShort_42755252,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0);
  Instance = (DataManager_o *)this->fields.maxParLbal;
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0);
  Instance = (DataManager_o *)this->fields.confLabel;
  if ( npDetailActive )
  {
    if ( !Instance )
      goto LABEL_48;
    p_masterLoadThreads = (System_String_o **)&Instance[2].fields.masterLoadThreads;
  }
  else
  {
    if ( !Instance )
      goto LABEL_48;
    p_masterLoadThreads = (System_String_o **)&StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Instance, *p_masterLoadThreads, 0);
  unknownNpLabel = this->fields.unknownNpLabel;
  if ( npDetailActive )
  {
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9358/*"NP_UNKNOWN"*/, 0);
    v14 = (System_String_o *)Instance;
  }
  if ( !unknownNpLabel )
    goto LABEL_48;
  UILabel__set_text(unknownNpLabel, v14, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_48;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0),
        (Instance = (DataManager_o *)this->fields.scrollView) == 0)
    || (UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0),
        (Instance = (DataManager_o *)this->fields.confLabel) == 0)
    || (UIWidget__ResizeCollider((UIWidget_o *)Instance, 0),
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_48:
    sub_1C2D6EC(Instance, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, activeSelf, 0);
}