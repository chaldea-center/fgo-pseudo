void __fastcall BattleTDConfWIndowComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB2F6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleTDConfWIndowComponent_TypeInfo, v1, v2, v3);
    byte_42EB2F6 = 1;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB2F5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4111/*"Close"*/, (_DWORD)method, v2, v3);
    byte_42EB2F5 = 1;
  }
  return (System_String_o *)StringLiteral_4111/*"Close"*/;
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
  System_String_o *age; // x23
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  DataManager_o *Instance; // x0
  System_String_o *v41; // x1
  WarEntity_o *Entity; // x25
  TreasureDvcLvEntity_o *v43; // x0
  UILabel_o *nameLabel; // x24
  TreasureDvcLvEntity_o *v45; // x22
  UILabel_o *rubyLabel; // x23
  UILabel_o *lvLabel; // x21
  System_String_o *v48; // x1
  UILabel_o *maxParLbal; // x21
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  UIWidget_o *confLabel; // x21
  UILabel_o *v53; // x21
  System_String_o *DetalShort_29262732; // x0
  System_String_o **v55; // x8
  UILabel_o *unknownNpLabel; // x21
  bool activeSelf; // w20
  int v58; // [xsp+8h] [xbp-38h] BYREF
  int32_t lva; // [xsp+Ch] [xbp-34h] BYREF

  age = overwriteTDName;
  lva = lv;
  if ( (byte_42EB2F4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleTDConfWIndowComponent_TypeInfo, tdId, lv, overwriteTDName);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&int_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_9482/*"NP_UNKNOWN"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_8773/*"MAX {0}%"*/, v37, v38, v39);
    byte_42EB2F4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             tdId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !Instance )
    goto LABEL_50;
  v43 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, tdId, lv, 0LL);
  nameLabel = this->fields.nameLabel;
  v45 = v43;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(age, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Entity )
      goto LABEL_50;
    age = Entity->fields.age;
  }
  if ( !nameLabel )
    goto LABEL_50;
  UILabel__set_text(nameLabel, age, 0LL);
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
  v48 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(lvLabel, v48, 0LL);
  if ( !v45 )
    goto LABEL_50;
  maxParLbal = this->fields.maxParLbal;
  v58 = 100 * v45->fields.gaugeCount;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v51 = System_String__Format((System_String_o *)StringLiteral_8773/*"MAX {0}%"*/, v50, 0LL);
  WrapControlText__textAdjust(maxParLbal, v51, 22, 0, 0, 0LL);
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
  v53 = this->fields.confLabel;
  DetalShort_29262732 = TreasureDvcLvEntity__getDetalShort_29262732(v45, lva, 0LL);
  WrapControlText__textBBCodeAdjust(
    v53,
    DetalShort_29262732,
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
    v55 = (System_String_o **)&Instance[3];
  }
  else
  {
    if ( !Instance )
      goto LABEL_50;
    v55 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Instance, *v55, 0LL);
  unknownNpLabel = this->fields.unknownNpLabel;
  if ( !npDetailActive )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9482/*"NP_UNKNOWN"*/, 0LL);
    v41 = (System_String_o *)Instance;
    if ( unknownNpLabel )
      goto LABEL_44;
LABEL_50:
    sub_B5D69C(Instance, v41);
  }
  v41 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !unknownNpLabel )
    goto LABEL_50;
LABEL_44:
  UILabel__set_text(unknownNpLabel, v41, 0LL);
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