void __fastcall BattleTDConfWIndowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BattleTDConfWIndowComponent_StaticFields *static_fields; // x8

  if ( (byte_4B1942C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleTDConfWIndowComponent_TypeInfo, v1, v2);
    byte_4B1942C = 1;
  }
  static_fields = BattleTDConfWIndowComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x6900000014LL;
  static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
}


void __fastcall BattleTDConfWIndowComponent___ctor(BattleTDConfWIndowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


System_String_o *__fastcall BattleTDConfWIndowComponent__get_closeBtnPath(
        BattleTDConfWIndowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1942B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4607/*"Close"*/, method, v2);
    byte_4B1942B = 1;
  }
  return (System_String_o *)StringLiteral_4607/*"Close"*/;
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
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  DataManager_o *Instance; // x0
  System_String_o *v32; // x1
  Il2CppObject *Entity; // x25
  TreasureDvcLvEntity_o *v34; // x0
  UILabel_o *nameLabel; // x24
  TreasureDvcLvEntity_o *v36; // x22
  UILabel_o *rubyLabel; // x23
  UILabel_o *lvLabel; // x21
  System_String_o *v39; // x1
  UILabel_o *maxParLbal; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  UIWidget_o *confLabel; // x21
  UILabel_o *v44; // x21
  System_String_o *DetalShort_40762616; // x0
  System_String_o **p_masterLoadThreads; // x8
  __int64 v47; // x1
  UILabel_o *unknownNpLabel; // x21
  bool activeSelf; // w20
  int v50; // [xsp+8h] [xbp-48h] BYREF
  int32_t lva; // [xsp+Ch] [xbp-44h] BYREF

  lva = lv;
  if ( (byte_4B1942A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleTDConfWIndowComponent_TypeInfo, *(_QWORD *)&tdId, *(_QWORD *)&lv);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_9464/*"NP_UNKNOWN"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8702/*"MAX {0}%"*/, v29, v30);
    byte_4B1942A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_48;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tdId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !Instance )
    goto LABEL_48;
  v34 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, tdId, lv, 0LL);
  nameLabel = this->fields.nameLabel;
  v36 = v34;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(overwriteTDName, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_48;
    overwriteTDName = (System_String_o *)Entity[1].monitor;
  }
  if ( !nameLabel )
    goto LABEL_48;
  UILabel__set_text(nameLabel, overwriteTDName, 0LL);
  rubyLabel = this->fields.rubyLabel;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(overwriteTDRuby, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_48;
    overwriteTDRuby = (System_String_o *)Entity[2].klass;
  }
  if ( !rubyLabel )
    goto LABEL_48;
  UILabel__set_text(rubyLabel, overwriteTDRuby, 0LL);
  lvLabel = this->fields.lvLabel;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&lva, 0LL);
  if ( !lvLabel )
    goto LABEL_48;
  v39 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(lvLabel, v39, 0LL);
  if ( !v36 )
    goto LABEL_48;
  maxParLbal = this->fields.maxParLbal;
  v50 = 100 * v36->fields.gaugeCount;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v42 = System_String__Format((System_String_o *)StringLiteral_8702/*"MAX {0}%"*/, v41, 0LL);
  WrapControlText__textAdjust(maxParLbal, v42, 22, 0, 0, 0LL);
  Instance = (DataManager_o *)BattleTDConfWIndowComponent_TypeInfo;
  confLabel = (UIWidget_o *)this->fields.confLabel;
  if ( !BattleTDConfWIndowComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleTDConfWIndowComponent_TypeInfo, v32);
  if ( !confLabel )
    goto LABEL_48;
  UIWidget__set_height(confLabel, BattleTDConfWIndowComponent_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0LL);
  v44 = this->fields.confLabel;
  DetalShort_40762616 = TreasureDvcLvEntity__getDetalShort_40762616(v36, lva, 0LL);
  WrapControlText__textBBCodeAdjust(
    v44,
    DetalShort_40762616,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
    0LL);
  Instance = (DataManager_o *)this->fields.maxParLbal;
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0LL);
  Instance = (DataManager_o *)this->fields.lvLabel;
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, npDetailActive, 0LL);
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
  UILabel__set_text((UILabel_o *)Instance, *p_masterLoadThreads, 0LL);
  unknownNpLabel = this->fields.unknownNpLabel;
  if ( npDetailActive )
  {
    v32 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9464/*"NP_UNKNOWN"*/, 0LL);
    v32 = (System_String_o *)Instance;
  }
  if ( !unknownNpLabel )
    goto LABEL_48;
  UILabel__set_text(unknownNpLabel, v32, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_48;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (Instance = (DataManager_o *)this->fields.scrollView) == 0LL)
    || (UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.confLabel) == 0LL)
    || (UIWidget__ResizeCollider((UIWidget_o *)Instance, 0LL),
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_48:
    sub_1BCAA3C(Instance, v32);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, activeSelf, 0LL);
}