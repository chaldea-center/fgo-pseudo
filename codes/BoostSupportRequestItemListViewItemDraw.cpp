void BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  __int64 v2; // x1
  __int64 v3; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v4; // x0

  if ( (byte_4C3CCDB & 1) == 0 )
  {
    sub_1C37058(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_16920/*"assist_icon_"*/);
    sub_1C37058(&StringLiteral_16921/*"assist_icon_0"*/);
    byte_4C3CCDB = 1;
  }
  static_fields = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_FONT_SIZE = xmmword_C0EC60;
  *(_OWORD *)&static_fields->TITLE_X_POS = xmmword_C10030;
  *(_QWORD *)&static_fields->NAME_LABEL_WIDTH = 0x1A4000000D8LL;
  v2 = StringLiteral_16920/*"assist_icon_"*/;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16920/*"assist_icon_"*/;
  sub_1C36FFC(&static_fields->ASSIST_ICON_SPRITE_NAME, v2);
  v3 = StringLiteral_16921/*"assist_icon_0"*/;
  v4 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v4->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16921/*"assist_icon_0"*/;
  sub_1C36FFC(&v4->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v3);
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

  if ( (byte_4C3CCD9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CCD9 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0),
        (itemIcon = this->fields.itemIcon) == 0) )
  {
LABEL_18:
    sub_1C372B4(consumptionLabel);
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
      sub_1C372BC(consumptionLabel);
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


void BoostSupportRequestItemListViewItemDraw__SetItem(
        BoostSupportRequestItemListViewItemDraw_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *consumptionLabel; // x22
  System_String_o *Instance; // x0
  struct BoostEntity_o *boostEntity; // x8
  int32_t skillId; // w1
  Il2CppObject *Entity; // x0
  int v12; // w8
  SkillEntity_o *v13; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *detailLabel; // x21
  UnityEngine_GameObject_o *v18; // x0
  UISprite_o *servantFaceIcon; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME_NO_OPEN; // x22
  const MethodInfo *v21; // x1
  UILabel_o *v22; // x22
  UILabel_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x0
  UILabel_o *v25; // x22
  System_String_o *EffectExplanation; // x0
  UnityEngine_GameObject_o *v27; // x0
  UISprite_o *v28; // x21
  struct BoostEntity_o *v29; // x8
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v31; // x0
  System_String_o *v32; // x22
  const MethodInfo *v33; // x2
  UILabel_o *v34; // x22
  UILabel_o *v35; // x22
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *v37; // x22
  System_String_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UISprite_o *v40; // x21
  struct BoostEntity_o *v41; // x8
  System_String_o *v42; // x22
  System_String_o *v43; // x0
  System_String_o *v44; // x22
  const MethodInfo *v45; // x2
  bool v46; // w1
  UILabel_o *v47; // x22
  UILabel_o *v48; // x22
  UnityEngine_GameObject_o *v49; // x0
  UILabel_o *v50; // x22
  System_String_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UISprite_o *v53; // x21
  struct BoostEntity_o *v54; // x8
  System_String_o *v55; // x22
  System_String_o *v56; // x0
  System_String_o *v57; // x22
  const MethodInfo *v58; // x1
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  struct UILabel_o *v60; // x21
  struct UILabel_o *v61; // x25
  int v62; // w22
  __int64 v63; // x9
  _BOOL4 isRecommended; // w20
  UILabel_o *recommendationLabel; // x19
  int v66; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3CCD8 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_2977/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/);
    sub_1C37058(&StringLiteral_2978/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/);
    sub_1C37058(&StringLiteral_2975/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/);
    byte_4C3CCD8 = 1;
  }
  v66 = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0);
  if ( !consumptionLabel )
    goto LABEL_95;
  UILabel__set_text(consumptionLabel, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_95;
  boostEntity = item->fields.boostEntity;
  if ( boostEntity )
  {
    skillId = boostEntity->fields.skillId;
    if ( !Instance )
      goto LABEL_95;
  }
  else
  {
    skillId = 0;
    if ( !Instance )
      goto LABEL_95;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             skillId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v12 = mode - 1;
  v13 = (SkillEntity_o *)Entity;
  switch ( v12 )
  {
    case 0:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      nameLabel = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      if ( !nameLabel )
        goto LABEL_95;
      UILabel__set_fontSize(
        nameLabel,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE,
        0);
      v15 = this->fields.nameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0);
      if ( !v15 )
        goto LABEL_95;
      UILabel__set_text(v15, Instance, 0);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        gameObject,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_X_POS,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_FONT_SIZE,
        0);
      detailLabel = this->fields.detailLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0);
      if ( !detailLabel )
        goto LABEL_95;
      UILabel__set_text(detailLabel, Instance, 0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v18,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_X_POS,
        0);
      servantFaceIcon = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME_NO_OPEN = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME_NO_OPEN;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetExclusiveShopIcon(servantFaceIcon, ASSIST_ICON_SPRITE_NAME_NO_OPEN, 0);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v21);
      goto LABEL_53;
    case 1:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v22 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      if ( !v22 )
        goto LABEL_95;
      UILabel__set_fontSize(v22, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0);
      if ( !v13 )
        goto LABEL_95;
      v23 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0);
      if ( !v23 )
        goto LABEL_95;
      UILabel__set_text(v23, Instance, 0);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v24,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0);
      v25 = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation(v13, 0, 0);
      WrapControlText__textAdjust(
        v25,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v27,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0);
      v28 = this->fields.servantFaceIcon;
      v29 = item->fields.boostEntity;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v29 )
        LODWORD(v29) = v29->fields.imageId;
      v66 = (int)v29;
      v31 = System_Int32__ToString((int32_t)&v66, 0);
      v32 = System_String__Concat_63561656(ASSIST_ICON_SPRITE_NAME, v31, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetExclusiveShopIcon(v28, v32, 0);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v33);
      goto LABEL_69;
    case 2:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v34 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      if ( !v34 )
        goto LABEL_95;
      UILabel__set_fontSize(v34, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0);
      if ( !v13 )
        goto LABEL_95;
      v35 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0);
      if ( !v35 )
        goto LABEL_95;
      UILabel__set_text(v35, Instance, 0);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v36,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0);
      v37 = this->fields.detailLabel;
      v38 = SkillEntity__getEffectExplanation(v13, 0, 0);
      WrapControlText__textAdjust(
        v37,
        v38,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v39,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0);
      v40 = this->fields.servantFaceIcon;
      v41 = item->fields.boostEntity;
      v42 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v41 )
        LODWORD(v41) = v41->fields.imageId;
      v66 = (int)v41;
      v43 = System_Int32__ToString((int32_t)&v66, 0);
      v44 = System_String__Concat_63561656(v42, v43, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetExclusiveShopIcon(v40, v44, 0);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v45);
LABEL_53:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_95;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_95;
      v46 = 1;
      break;
    case 3:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v47 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      if ( !v47 )
        goto LABEL_95;
      UILabel__set_fontSize(v47, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0);
      if ( !v13 )
        goto LABEL_95;
      v48 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0);
      if ( !v48 )
        goto LABEL_95;
      UILabel__set_text(v48, Instance, 0);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v49,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0);
      v50 = this->fields.detailLabel;
      v51 = SkillEntity__getEffectExplanation(v13, 0, 0);
      WrapControlText__textAdjust(
        v50,
        v51,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPositionX(
        v52,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0);
      v53 = this->fields.servantFaceIcon;
      v54 = item->fields.boostEntity;
      v55 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v54 )
        LODWORD(v54) = v54->fields.imageId;
      v66 = (int)v54;
      v56 = System_Int32__ToString((int32_t)&v66, 0);
      v57 = System_String__Concat_63561656(v55, v56, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetExclusiveShopIcon(v53, v57, 0);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v58);
LABEL_69:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_95;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_95;
      v46 = 0;
      break;
    default:
      goto LABEL_73;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v46, 0);
LABEL_73:
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( !commonConsumeEntity )
  {
    v60 = this->fields.nameLabel;
    goto LABEL_77;
  }
  v60 = this->fields.nameLabel;
  if ( !LODWORD(commonConsumeEntity->max_length) )
  {
LABEL_77:
    v62 = 1;
    v61 = v60;
    v60 = 0;
    goto LABEL_78;
  }
  v61 = 0;
  v62 = 0;
LABEL_78:
  if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
  if ( v62 )
    Instance = (System_String_o *)v61;
  else
    Instance = (System_String_o *)v60;
  if ( !Instance )
    goto LABEL_95;
  v63 = 32;
  if ( v62 )
    v63 = 36;
  UIWidget__set_width(
    (UIWidget_o *)Instance,
    *(int32_t *)((char *)&BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE + v63),
    0);
  Instance = (System_String_o *)this->fields.recommendationSprite;
  if ( !Instance )
    goto LABEL_95;
  isRecommended = item->fields.isRecommended;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_95;
  if ( isRecommended )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    recommendationLabel = this->fields.recommendationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0);
    if ( recommendationLabel )
    {
      UILabel__set_text(recommendationLabel, Instance, 0);
      return;
    }
LABEL_95:
    sub_1C372B4(Instance);
  }
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
  const MethodInfo *v6; // x1
  struct CommonConsumeEntity_array *commonConsumeEntity; // x23
  il2cpp_array_size_t max_length; // x21
  __int64 v9; // x24
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
  float v21; // s1 OVERLAPPED
  float v22; // s0
  float v23; // s3
  float v24; // s2
  struct UISprite_array *v25; // x8
  struct UILabel_array *v26; // x8
  struct UISprite_array *v27; // x8
  __int64 v28; // x20
  struct UILabel_array *v29; // x8
  struct UISprite_array *v30; // x8
  struct UILabel_array *v31; // x8

  if ( (byte_4C3CCDA & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CCDA = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel )
    goto LABEL_55;
  consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0);
  if ( !consumptionLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 1, 0);
  if ( !item )
    goto LABEL_55;
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
LABEL_56:
          sub_1C372BC(consumptionLabel);
        v13 = *((_QWORD *)&commonConsumeEntity->obj.klass + v9);
        if ( !v13 )
          break;
        v14 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v9);
        v15 = *(_DWORD *)(v13 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v14, v15, 0);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          break;
        if ( v11 >= LODWORD(v16->max_length) || v11 >= LODWORD(commonConsumeEntity->max_length) )
          goto LABEL_56;
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
          goto LABEL_56;
        v20 = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v9);
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v11 >= LODWORD(commonConsumeEntity->max_length) )
          goto LABEL_56;
        if ( !consumptionLabel )
          break;
        consumptionLabel = (UnityEngine_Component_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                        (BoostFunctionUtility_o *)consumptionLabel,
                                                        *((CommonConsumeEntity_o **)&commonConsumeEntity->obj.klass + v9),
                                                        item->fields.usrItemEntityList,
                                                        0);
        v21 = ((unsigned __int8)consumptionLabel & 1) != 0 ? 1.0 : 0.0;
        if ( !v20 )
          break;
        v22 = 1.0;
        v23 = 1.0;
        v24 = v21;
        UIWidget__set_color(v20, *(UnityEngine_Color_o *)(&v21 - 1), 0);
        v25 = this->fields.itemIcon;
        if ( !v25 )
          break;
        if ( v11 >= LODWORD(v25->max_length) )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v25->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0);
        v26 = this->fields.itemNumLabel;
        if ( !v26 )
          break;
        if ( v11 >= LODWORD(v26->max_length) )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v26->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0);
        max_length = commonConsumeEntity->max_length;
        if ( (int)++v9 - 4 >= (int)max_length )
          goto LABEL_38;
      }
LABEL_55:
      sub_1C372B4(consumptionLabel);
    }
LABEL_38:
    v27 = this->fields.itemIcon;
    if ( !v27 )
      goto LABEL_55;
    v28 = 8LL * (int)max_length + 32;
    while ( (int)max_length < SLODWORD(v27->max_length) )
    {
      v29 = this->fields.itemNumLabel;
      if ( !v29 )
        goto LABEL_55;
      if ( (unsigned int)max_length >= LODWORD(v29->max_length) )
        goto LABEL_56;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v29->obj.klass + v28);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        v30 = this->fields.itemIcon;
        if ( v30 )
        {
          if ( (unsigned int)max_length >= LODWORD(v30->max_length) )
            goto LABEL_56;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v30->obj.klass + v28);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0);
            v31 = this->fields.itemNumLabel;
            if ( v31 )
            {
              if ( (unsigned int)max_length >= LODWORD(v31->max_length) )
                goto LABEL_56;
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
      goto LABEL_55;
    }
  }
  else
  {
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v6);
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumeItemIconGrid;
  if ( !consumptionLabel )
    goto LABEL_55;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))consumptionLabel->klass[1]._1.element_class)(
    consumptionLabel,
    consumptionLabel->klass[1]._1.castClass);
}