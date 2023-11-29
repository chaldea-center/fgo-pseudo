void __fastcall BattleTDConfWIndowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FCD87 & 1) == 0 )
  {
    sub_B16FFC(&BattleTDConfWIndowComponent_TypeInfo, v1);
    byte_40FCD87 = 1;
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
  if ( (byte_40FCD86 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4024, method);
    byte_40FCD86 = 1;
  }
  return (System_String_o *)StringLiteral_4024;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x25
  WebViewManager_o *v25; // x0
  TreasureDvcLvMaster_o *v26; // x0
  TreasureDvcLvEntity_o *v27; // x0
  UILabel_o *nameLabel; // x24
  TreasureDvcLvEntity_o *v29; // x22
  UILabel_o *rubyLabel; // x23
  UILabel_o *lvLabel; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x1
  UILabel_o *maxParLbal; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  UIWidget_o *confLabel; // x21
  UILabel_o *v38; // x21
  System_String_o *DetalShort_27990712; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UILabel_o *v48; // x0
  System_String_o **p_mText; // x8
  UILabel_o *unknownNpLabel; // x21
  System_String_o *v51; // x1
  UnityEngine_GameObject_o *v52; // x0
  bool activeSelf; // w20
  UnityEngine_GameObject_o *v54; // x0
  UIScrollView_o *scrollView; // x0
  UIWidget_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  int v58; // [xsp+8h] [xbp-38h] BYREF
  int32_t lva; // [xsp+Ch] [xbp-34h] BYREF

  lva = lv;
  if ( (byte_40FCD85 & 1) == 0 )
  {
    sub_B16FFC(&BattleTDConfWIndowComponent_TypeInfo, *(_QWORD *)&tdId);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&StringLiteral_9356, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    sub_B16FFC(&StringLiteral_8654, v21);
    byte_40FCD85 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             tdId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_50;
  v26 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v25,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  if ( !v26 )
    goto LABEL_50;
  v27 = TreasureDvcLvMaster__GetEntity(v26, tdId, lv, 0LL);
  nameLabel = this->fields.nameLabel;
  v29 = v27;
  if ( System_String__IsNullOrEmpty(overwriteTDName, 0LL) )
  {
    if ( !Entity )
      goto LABEL_50;
    overwriteTDName = Entity->fields.age;
  }
  if ( !nameLabel )
    goto LABEL_50;
  UILabel__set_text(nameLabel, overwriteTDName, 0LL);
  rubyLabel = this->fields.rubyLabel;
  if ( System_String__IsNullOrEmpty(overwriteTDRuby, 0LL) )
  {
    if ( !Entity )
      goto LABEL_50;
    overwriteTDRuby = Entity->fields.name;
  }
  if ( !rubyLabel )
    goto LABEL_50;
  UILabel__set_text(rubyLabel, overwriteTDRuby, 0LL);
  lvLabel = this->fields.lvLabel;
  v32 = System_Int32__ToString((int32_t)&lva, 0LL);
  if ( !lvLabel )
    goto LABEL_50;
  v33 = v32 ? v32 : (System_String_o *)StringLiteral_1;
  UILabel__set_text(lvLabel, v33, 0LL);
  if ( !v29 )
    goto LABEL_50;
  maxParLbal = this->fields.maxParLbal;
  v58 = 100 * v29->fields.gaugeCount;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v36 = System_String__Format((System_String_o *)StringLiteral_8654, v35, 0LL);
  WrapControlText__textAdjust(maxParLbal, v36, 22, 0, 0, 0LL);
  confLabel = (UIWidget_o *)this->fields.confLabel;
  if ( (BYTE3(BattleTDConfWIndowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleTDConfWIndowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleTDConfWIndowComponent_TypeInfo);
  }
  if ( !confLabel )
    goto LABEL_50;
  UIWidget__set_height(confLabel, BattleTDConfWIndowComponent_TypeInfo->static_fields->DEFAULT_LABEL_HEIGHT, 0LL);
  v38 = this->fields.confLabel;
  DetalShort_27990712 = TreasureDvcLvEntity__getDetalShort_27990712(v29, lva, 0LL);
  WrapControlText__textBBCodeAdjust(
    v38,
    DetalShort_27990712,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleTDConfWIndowComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
    0LL);
  v40 = (UnityEngine_Component_o *)this->fields.maxParLbal;
  if ( !v40 )
    goto LABEL_50;
  transform = UnityEngine_Component__get_transform(v40, 0LL);
  if ( !transform )
    goto LABEL_50;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(gameObject, npDetailActive, 0LL);
  v44 = (UnityEngine_Component_o *)this->fields.lvLabel;
  if ( !v44 )
    goto LABEL_50;
  v45 = UnityEngine_Component__get_transform(v44, 0LL);
  if ( !v45 )
    goto LABEL_50;
  v46 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v45, 0LL);
  if ( !v46 )
    goto LABEL_50;
  v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
  if ( !v47 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v47, npDetailActive, 0LL);
  v48 = this->fields.confLabel;
  if ( npDetailActive )
  {
    if ( !v48 )
      goto LABEL_50;
    p_mText = &v48->fields.mText;
  }
  else
  {
    if ( !v48 )
      goto LABEL_50;
    p_mText = (System_String_o **)&StringLiteral_1;
  }
  UILabel__set_text(v48, *p_mText, 0LL);
  unknownNpLabel = this->fields.unknownNpLabel;
  if ( !npDetailActive )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9356, 0LL);
    if ( unknownNpLabel )
      goto LABEL_44;
LABEL_50:
    sub_B170D4();
  }
  v51 = (System_String_o *)StringLiteral_1;
  if ( !unknownNpLabel )
    goto LABEL_50;
LABEL_44:
  UILabel__set_text(unknownNpLabel, v51, 0LL);
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v52 )
    goto LABEL_50;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v52, 0LL);
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v54 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v54, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_50;
  UIScrollView__ResetPosition(scrollView, 0LL);
  v56 = (UIWidget_o *)this->fields.confLabel;
  if ( !v56 )
    goto LABEL_50;
  UIWidget__ResizeCollider(v56, 0LL);
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v57 )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(v57, activeSelf, 0LL);
}