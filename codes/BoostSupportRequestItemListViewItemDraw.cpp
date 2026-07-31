void BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v4; // x0

  if ( (byte_5931CCC & 1) == 0 )
  {
    sub_21FFC50(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_17598/*"assist_icon_"*/);
    sub_21FFC50(&StringLiteral_17599/*"assist_icon_0"*/);
    byte_5931CCC = 1;
  }
  v1 = StringLiteral_17598/*"assist_icon_"*/;
  static_fields = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_FONT_SIZE = xmmword_E92F30;
  *(_OWORD *)&static_fields->TITLE_X_POS = xmmword_E92D50;
  *(_QWORD *)&static_fields->NAME_LABEL_WIDTH = 0x1A4000000D8LL;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)v1;
  sub_21FFBF4(&static_fields->ASSIST_ICON_SPRITE_NAME, v1);
  v3 = StringLiteral_17599/*"assist_icon_0"*/;
  v4 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v4->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_17599/*"assist_icon_0"*/;
  sub_21FFBF4(&v4->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v3);
}


void BoostSupportRequestItemListViewItemDraw___ctor(
        BoostSupportRequestItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isConsumptionIcon = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(
        BoostSupportRequestItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *consumptionLabel; // x0
  struct UISprite_array *itemIcon; // x8
  __int64 v5; // x21
  unsigned int v6; // w22
  struct UILabel_array *itemNumLabel; // x8
  struct UISprite_array *v8; // x8
  struct UILabel_array *v9; // x8

  if ( (byte_5931CCA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931CCA = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0),
        (itemIcon = this->fields.itemIcon) == 0) )
  {
LABEL_18:
    sub_21FFECC(consumptionLabel, method);
  }
  v5 = 4;
  while ( 1 )
  {
    v6 = v5 - 4;
    if ( (int)v5 - 4 >= SLODWORD(itemIcon->max_length) )
      break;
    itemNumLabel = this->fields.itemNumLabel;
    if ( !itemNumLabel )
      goto LABEL_18;
    if ( v6 >= LODWORD(itemNumLabel->max_length) )
LABEL_20:
      sub_21FFED4(consumptionLabel);
    consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&itemNumLabel->obj.klass + v5);
    if ( consumptionLabel )
    {
      UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      v8 = this->fields.itemIcon;
      if ( v8 )
      {
        if ( v6 >= LODWORD(v8->max_length) )
          goto LABEL_20;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v8->obj.klass + v5);
        if ( consumptionLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0);
          v9 = this->fields.itemNumLabel;
          if ( v9 )
          {
            if ( v6 >= LODWORD(v9->max_length) )
              goto LABEL_20;
            consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v9->obj.klass + v5);
            if ( consumptionLabel )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0);
              itemIcon = this->fields.itemIcon;
              ++v5;
              if ( itemIcon )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
void BoostSupportRequestItemListViewItemDraw__SetItem(
        BoostSupportRequestItemListViewItemDraw_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *consumptionLabel; // x21
  System_String_o *Instance; // x0
  __int64 skillId; // x1
  struct BoostEntity_o *boostEntity; // x8
  __int64 v11; // x2
  Il2CppObject *Entity; // x21
  UILabel_o *v13; // x22
  UILabel_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *v16; // x22
  System_String_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UISprite_o *v19; // x21
  struct BoostEntity_o *v20; // x8
  System_String_o *v21; // x22
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x22
  const MethodInfo *v26; // x2
  UILabel_o *nameLabel; // x22
  UILabel_o *v28; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *EffectExplanation; // x0
  UnityEngine_GameObject_o *v32; // x0
  UISprite_o *servantFaceIcon; // x21
  struct BoostEntity_o *v34; // x8
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_String_o *v39; // x22
  const MethodInfo *v40; // x1
  bool v41; // w1
  UILabel_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  UILabel_o *v45; // x21
  UnityEngine_GameObject_o *v46; // x0
  UILabel_o *v47; // x21
  UnityEngine_GameObject_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  UISprite_o *v51; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME_NO_OPEN; // x22
  const MethodInfo *v53; // x1
  UILabel_o *v54; // x22
  UILabel_o *v55; // x22
  UnityEngine_GameObject_o *v56; // x0
  UILabel_o *v57; // x22
  System_String_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UISprite_o *v60; // x21
  struct BoostEntity_o *v61; // x8
  System_String_o *v62; // x22
  System_String_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  System_String_o *v66; // x22
  const MethodInfo *v67; // x2
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  UIWidget_o *v69; // x21
  int32_t *v70; // x8
  __int64 v71; // x1
  __int64 v72; // x2
  UILabel_o *recommendationLabel; // x19
  int v74; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5931CC9 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_3096/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/);
    sub_21FFC50(&StringLiteral_3097/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/);
    sub_21FFC50(&StringLiteral_3094/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/);
    byte_5931CC9 = 1;
  }
  v74 = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3097/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0);
  if ( !consumptionLabel )
    goto LABEL_98;
  UILabel__set_text(consumptionLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_98;
  boostEntity = item->fields.boostEntity;
  if ( boostEntity )
  {
    skillId = (unsigned int)boostEntity->fields.skillId;
    if ( !Instance )
      goto LABEL_98;
  }
  else
  {
    skillId = 0;
    if ( !Instance )
      goto LABEL_98;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             skillId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( mode > 2 )
  {
    if ( mode != 3 )
    {
      if ( mode != 4 )
        goto LABEL_77;
      nameLabel = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( !*(&BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo, skillId, v11);
      if ( !nameLabel )
        goto LABEL_98;
      UILabel__set_fontSize(
        nameLabel,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE,
        0);
      if ( !Entity )
        goto LABEL_98;
      v28 = this->fields.nameLabel;
      Instance = SkillEntity__getName((SkillEntity_o *)Entity, 0);
      if ( !v28 )
        goto LABEL_98;
      UILabel__set_text(v28, Instance, 0);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_98;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        gameObject,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_98;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0);
      detailLabel = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)Entity, 0, 0);
      WrapControlText__textAdjust(
        detailLabel,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_98;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v32,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0);
      servantFaceIcon = this->fields.servantFaceIcon;
      v34 = item->fields.boostEntity;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v34 )
        LODWORD(v34) = v34->fields.imageId;
      v74 = (int)v34;
      v36 = System_Int32__ToString((int32_t)&v74, 0);
      v39 = System_String__Concat_75438412(ASSIST_ICON_SPRITE_NAME, v36, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37, v38);
      AtlasManager__SetExclusiveShopIcon(servantFaceIcon, v39, 0);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v40);
      goto LABEL_44;
    }
    v54 = this->fields.nameLabel;
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
    if ( !*(&BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo, skillId, v11);
    if ( !v54 )
      goto LABEL_98;
    UILabel__set_fontSize(v54, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0);
    if ( !Entity )
      goto LABEL_98;
    v55 = this->fields.nameLabel;
    Instance = SkillEntity__getName((SkillEntity_o *)Entity, 0);
    if ( !v55 )
      goto LABEL_98;
    UILabel__set_text(v55, Instance, 0);
    Instance = (System_String_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_98;
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPositionX(
      v56,
      (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
      0);
    Instance = (System_String_o *)this->fields.detailLabel;
    if ( !Instance )
      goto LABEL_98;
    UILabel__set_fontSize(
      (UILabel_o *)Instance,
      BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
      0);
    v57 = this->fields.detailLabel;
    v58 = SkillEntity__getEffectExplanation((SkillEntity_o *)Entity, 0, 0);
    WrapControlText__textAdjust(
      v57,
      v58,
      BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
      0,
      0);
    Instance = (System_String_o *)this->fields.detailLabel;
    if ( !Instance )
      goto LABEL_98;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPositionX(
      v59,
      (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
      0);
    v60 = this->fields.servantFaceIcon;
    v61 = item->fields.boostEntity;
    v62 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
    if ( v61 )
      LODWORD(v61) = v61->fields.imageId;
    v74 = (int)v61;
    v63 = System_Int32__ToString((int32_t)&v74, 0);
    v66 = System_String__Concat_75438412(v62, v63, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v64, v65);
    AtlasManager__SetExclusiveShopIcon(v60, v66, 0);
    BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v67);
LABEL_73:
    Instance = (System_String_o *)this->fields.maskSprite;
    if ( !Instance )
      goto LABEL_98;
    Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_98;
    v41 = 1;
    goto LABEL_76;
  }
  if ( mode == 1 )
  {
    v42 = this->fields.nameLabel;
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
    if ( !*(&BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo, skillId, v11);
    if ( !v42 )
      goto LABEL_98;
    UILabel__set_fontSize(
      v42,
      BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE,
      0);
    v45 = this->fields.nameLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3094/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0);
    if ( !v45 )
      goto LABEL_98;
    UILabel__set_text(v45, Instance, 0);
    Instance = (System_String_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_98;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPositionX(
      v46,
      (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_X_POS,
      0);
    Instance = (System_String_o *)this->fields.detailLabel;
    if ( !Instance )
      goto LABEL_98;
    UILabel__set_fontSize(
      (UILabel_o *)Instance,
      BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_FONT_SIZE,
      0);
    v47 = this->fields.detailLabel;
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3094/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0);
    if ( !v47 )
      goto LABEL_98;
    UILabel__set_text(v47, Instance, 0);
    Instance = (System_String_o *)this->fields.detailLabel;
    if ( !Instance )
      goto LABEL_98;
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPositionX(
      v48,
      (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_X_POS,
      0);
    v51 = this->fields.servantFaceIcon;
    ASSIST_ICON_SPRITE_NAME_NO_OPEN = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME_NO_OPEN;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v49, v50);
    AtlasManager__SetExclusiveShopIcon(v51, ASSIST_ICON_SPRITE_NAME_NO_OPEN, 0);
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v53);
    goto LABEL_73;
  }
  if ( mode != 2 )
    goto LABEL_77;
  v13 = this->fields.nameLabel;
  Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( !*(&BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo, skillId, v11);
  if ( !v13 )
    goto LABEL_98;
  UILabel__set_fontSize(v13, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0);
  if ( !Entity )
    goto LABEL_98;
  v14 = this->fields.nameLabel;
  Instance = SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !v14 )
    goto LABEL_98;
  UILabel__set_text(v14, Instance, 0);
  Instance = (System_String_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_98;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(
    v15,
    (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
    0);
  Instance = (System_String_o *)this->fields.detailLabel;
  if ( !Instance )
    goto LABEL_98;
  UILabel__set_fontSize(
    (UILabel_o *)Instance,
    BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0);
  v16 = this->fields.detailLabel;
  v17 = SkillEntity__getEffectExplanation((SkillEntity_o *)Entity, 0, 0);
  WrapControlText__textAdjust(
    v16,
    v17,
    BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0,
    0);
  Instance = (System_String_o *)this->fields.detailLabel;
  if ( !Instance )
    goto LABEL_98;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(
    v18,
    (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
    0);
  v19 = this->fields.servantFaceIcon;
  v20 = item->fields.boostEntity;
  v21 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
  if ( v20 )
    LODWORD(v20) = v20->fields.imageId;
  v74 = (int)v20;
  v22 = System_Int32__ToString((int32_t)&v74, 0);
  v25 = System_String__Concat_75438412(v21, v22, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23, v24);
  AtlasManager__SetExclusiveShopIcon(v19, v25, 0);
  BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v26);
LABEL_44:
  Instance = (System_String_o *)this->fields.maskSprite;
  if ( !Instance )
    goto LABEL_98;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_98;
  v41 = 0;
LABEL_76:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v41, 0);
LABEL_77:
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( !commonConsumeEntity )
  {
    v69 = (UIWidget_o *)this->fields.nameLabel;
    goto LABEL_83;
  }
  v69 = (UIWidget_o *)this->fields.nameLabel;
  if ( !LODWORD(commonConsumeEntity->max_length) )
  {
LABEL_83:
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
    if ( !*(&BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo, skillId, v11);
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
    }
    v70 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 36LL);
    goto LABEL_86;
  }
  Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( !*(&BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo, skillId, v11);
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  }
  v70 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 32LL);
LABEL_86:
  if ( !v69 )
    goto LABEL_98;
  UIWidget__set_width(v69, *v70, 0);
  Instance = (System_String_o *)this->fields.recommendationSprite;
  if ( item->fields.isRecommended )
  {
    if ( Instance )
    {
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        recommendationLabel = this->fields.recommendationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71, v72);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3096/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0);
        if ( recommendationLabel )
        {
          UILabel__set_text(recommendationLabel, Instance, 0);
          return;
        }
      }
    }
LABEL_98:
    sub_21FFECC(Instance, skillId);
  }
  if ( !Instance )
    goto LABEL_98;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


void BoostSupportRequestItemListViewItemDraw__SetViewConsumptionIcon(
        BoostSupportRequestItemListViewItemDraw_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  this->fields.isConsumptionIcon = isVisible;
}


// local variable allocation has failed, the output may be wrong!
void BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(
        BoostSupportRequestItemListViewItemDraw_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *consumptionLabel; // x0
  __int64 v6; // x2
  struct CommonConsumeEntity_array *commonConsumeEntity; // x23
  il2cpp_array_size_t max_length; // x21
  __int64 v9; // x26
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v11; // w27
  struct UISprite_array *itemIcon; // x8
  __int64 v13; // x9
  UISprite_o *v14; // x21
  int32_t v15; // w22
  struct UILabel_array *v16; // x8
  __int64 v17; // x9
  UILabel_o *v18; // x21
  struct UILabel_array *v19; // x8
  UIWidget_o *v20; // x21
  float v21; // s0 OVERLAPPED
  float v22; // s3
  float v23; // s1
  float v24; // s2
  struct UISprite_array *v25; // x8
  struct UILabel_array *v26; // x8
  struct UISprite_array *v27; // x8
  __int64 v28; // x22
  struct UILabel_array *v29; // x8
  struct UISprite_array *v30; // x8
  struct UILabel_array *v31; // x8

  if ( (byte_5931CCB & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931CCB = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel )
    goto LABEL_51;
  consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0);
  if ( !consumptionLabel )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 1, 0);
  if ( !item )
    goto LABEL_51;
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity && (max_length = commonConsumeEntity->max_length) != 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v9 = 4;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v11 = v9 - 4;
        if ( (int)v9 - 4 >= SLODWORD(itemNumLabel->max_length) )
          goto LABEL_38;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          break;
        if ( v11 >= LODWORD(itemIcon->max_length) || v11 >= (unsigned int)max_length )
LABEL_55:
          sub_21FFED4(consumptionLabel);
        v13 = *((_QWORD *)&commonConsumeEntity->obj.klass + v9);
        if ( !v13 )
          break;
        v14 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v9);
        v15 = *(_DWORD *)(v13 + 28);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v6);
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v14, v15, 0);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          break;
        if ( v11 >= LODWORD(v16->max_length) || v11 >= LODWORD(commonConsumeEntity->max_length) )
          goto LABEL_55;
        v17 = *((_QWORD *)&commonConsumeEntity->obj.klass + v9);
        if ( !v17 )
          break;
        v18 = (UILabel_o *)*((_QWORD *)&v16->obj.klass + v9);
        consumptionLabel = (UnityEngine_Component_o *)System_Int32__ToString((int)v17 + 32, 0);
        if ( !v18 )
          break;
        UILabel__set_text(v18, (System_String_o *)consumptionLabel, 0);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          break;
        if ( v11 >= LODWORD(v19->max_length) )
          goto LABEL_55;
        v20 = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v9);
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v11 >= LODWORD(commonConsumeEntity->max_length) )
          goto LABEL_55;
        if ( !consumptionLabel )
          break;
        consumptionLabel = (UnityEngine_Component_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                        (BoostFunctionUtility_o *)consumptionLabel,
                                                        *((CommonConsumeEntity_o **)&commonConsumeEntity->obj.klass + v9),
                                                        item->fields.usrItemEntityList,
                                                        0);
        if ( !v20 )
          break;
        v21 = 1.0;
        v22 = 1.0;
        v23 = ((unsigned __int8)consumptionLabel & 1) != 0 ? 1.0 : 0.0;
        v24 = v23;
        UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0);
        v25 = this->fields.itemIcon;
        if ( !v25 )
          break;
        if ( v11 >= LODWORD(v25->max_length) )
          goto LABEL_55;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v25->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0);
        v26 = this->fields.itemNumLabel;
        if ( !v26 )
          break;
        if ( v11 >= LODWORD(v26->max_length) )
          goto LABEL_55;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v26->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0);
        LODWORD(max_length) = commonConsumeEntity->max_length;
        if ( (int)++v9 - 4 >= (int)max_length )
          goto LABEL_38;
      }
LABEL_51:
      sub_21FFECC(consumptionLabel, item);
    }
LABEL_38:
    v27 = this->fields.itemIcon;
    if ( !v27 )
      goto LABEL_51;
    v28 = 8LL * (int)max_length + 32;
    while ( (int)max_length < SLODWORD(v27->max_length) )
    {
      v29 = this->fields.itemNumLabel;
      if ( !v29 )
        goto LABEL_51;
      if ( (unsigned int)max_length >= LODWORD(v29->max_length) )
        goto LABEL_55;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v29->obj.klass + v28);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        v30 = this->fields.itemIcon;
        if ( v30 )
        {
          if ( (unsigned int)max_length >= LODWORD(v30->max_length) )
            goto LABEL_55;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v30->obj.klass + v28);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0);
            v31 = this->fields.itemNumLabel;
            if ( v31 )
            {
              if ( (unsigned int)max_length >= LODWORD(v31->max_length) )
                goto LABEL_55;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v31->obj.klass + v28);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0);
                v27 = this->fields.itemIcon;
                LODWORD(max_length) = max_length + 1;
                v28 += 8;
                if ( v27 )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_51;
    }
  }
  else
  {
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, (const MethodInfo *)item);
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumeItemIconGrid;
  if ( !consumptionLabel )
    goto LABEL_51;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))consumptionLabel->klass[1]._1.element_class)(
    consumptionLabel,
    consumptionLabel->klass[1]._1.castClass);
}