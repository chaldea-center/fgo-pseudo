void __fastcall BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BoostSupportRequestItemListViewItemDraw_c *v7; // x8
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438D710 & 1) == 0 )
  {
    sub_B775C4(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_16820/*"assist_icon_"*/);
    sub_B775C4(&StringLiteral_16821/*"assist_icon_0"*/);
    byte_438D710 = 1;
  }
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE = 18;
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE = 13;
  v7 = BoostSupportRequestItemListViewItemDraw_TypeInfo;
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE = 22;
  v7->static_fields->INVALID_DETAIL_FONT_SIZE = 21;
  v7->static_fields->TITLE_X_POS = -160;
  v7->static_fields->DETAIL_X_POS = -145;
  v7->static_fields->INVALID_TITLE_X_POS = -140;
  v7->static_fields->INVALID_DETAIL_X_POS = -138;
  v7->static_fields->NAME_LABEL_WIDTH = 216;
  v7->static_fields->NAME_LABEL_WIDTH_WITHOUT_CONSUME_ITEM_DISPLAYED = 420;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_16820/*"assist_icon_"*/;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16820/*"assist_icon_"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->ASSIST_ICON_SPRITE_NAME, v9, v1, v2, v3, v4, v5, v6);
  v10 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16821/*"assist_icon_0"*/;
  v10->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16821/*"assist_icon_0"*/;
  sub_B77560((BattleServantConfConponent_o *)&v10->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v11, v12, v13, v14, v15, v16, v17);
}


void __fastcall BoostSupportRequestItemListViewItemDraw___ctor(
        BoostSupportRequestItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isConsumptionIcon = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(
        BoostSupportRequestItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *consumptionLabel; // x0
  struct UISprite_array *itemIcon; // x8
  __int64 v5; // x20
  il2cpp_array_size_t v6; // w22
  struct UILabel_array *itemNumLabel; // x8
  struct UISprite_array *v8; // x8
  struct UILabel_array *v9; // x8
  __int64 v10; // x0

  if ( (byte_438D70E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D70E = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_B7769C(consumptionLabel, method);
  }
  v5 = 4LL;
  while ( 1 )
  {
    v6 = v5 - 4;
    if ( (int)v5 - 4 >= (signed int)itemIcon->max_length )
      break;
    itemNumLabel = this->fields.itemNumLabel;
    if ( !itemNumLabel )
      goto LABEL_18;
    if ( v6 >= itemNumLabel->max_length )
    {
LABEL_20:
      v10 = sub_B776C8(consumptionLabel);
      sub_B77668(v10, 0LL);
    }
    consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&itemNumLabel->obj.klass + v5);
    if ( consumptionLabel )
    {
      UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v8 = this->fields.itemIcon;
      if ( v8 )
      {
        if ( v6 >= v8->max_length )
          goto LABEL_20;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v8->obj.klass + v5);
        if ( consumptionLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
          v9 = this->fields.itemNumLabel;
          if ( v9 )
          {
            if ( v6 >= v9->max_length )
              goto LABEL_20;
            consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v9->obj.klass + v5);
            if ( consumptionLabel )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
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


void __fastcall BoostSupportRequestItemListViewItemDraw__SetItem(
        BoostSupportRequestItemListViewItemDraw_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *consumptionLabel; // x22
  System_String_o *Instance; // x0
  __int64 skillId; // x1
  struct BoostEntity_o *boostEntity; // x8
  WarEntity_o *Entity; // x0
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
  UIWidget_o *v60; // x21
  int32_t *v61; // x8
  _BOOL4 isRecommended; // w20
  UILabel_o *recommendationLabel; // x19
  int v64; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438D70D & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_2709/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/);
    sub_B775C4(&StringLiteral_2710/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/);
    sub_B775C4(&StringLiteral_2707/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/);
    byte_438D70D = 1;
  }
  v64 = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2710/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_105;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_105;
  boostEntity = item->fields.boostEntity;
  if ( boostEntity )
  {
    skillId = (unsigned int)boostEntity->fields.skillId;
    if ( !Instance )
      goto LABEL_105;
  }
  else
  {
    skillId = 0LL;
    if ( !Instance )
      goto LABEL_105;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             skillId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v12 = mode - 1;
  v13 = (SkillEntity_o *)Entity;
  switch ( v12 )
  {
    case 0:
      nameLabel = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !nameLabel )
        goto LABEL_105;
      UILabel__set_fontSize(
        nameLabel,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE,
        0LL);
      v15 = this->fields.nameLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2707/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !v15 )
        goto LABEL_105;
      UILabel__set_text(v15, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_105;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        gameObject,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_FONT_SIZE,
        0LL);
      detailLabel = this->fields.detailLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2707/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !detailLabel )
        goto LABEL_105;
      UILabel__set_text(detailLabel, Instance, 0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v18,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_X_POS,
        0LL);
      servantFaceIcon = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME_NO_OPEN = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME_NO_OPEN;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(servantFaceIcon, ASSIST_ICON_SPRITE_NAME_NO_OPEN, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v21);
      goto LABEL_61;
    case 1:
      v22 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v22 )
        goto LABEL_105;
      UILabel__set_fontSize(v22, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v13 )
        goto LABEL_105;
      v23 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0LL);
      if ( !v23 )
        goto LABEL_105;
      UILabel__set_text(v23, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_105;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v24,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v25 = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation(v13, 0, 0LL);
      WrapControlText__textAdjust(
        v25,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v27,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v28 = this->fields.servantFaceIcon;
      v29 = item->fields.boostEntity;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v29 )
        LODWORD(v29) = v29->fields.imageId;
      v64 = (int)v29;
      v31 = System_Int32__ToString((int32_t)&v64, 0LL);
      v32 = System_String__Concat_44901936(ASSIST_ICON_SPRITE_NAME, v31, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v28, v32, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v33);
      goto LABEL_79;
    case 2:
      v34 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v34 )
        goto LABEL_105;
      UILabel__set_fontSize(v34, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v13 )
        goto LABEL_105;
      v35 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0LL);
      if ( !v35 )
        goto LABEL_105;
      UILabel__set_text(v35, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_105;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v36,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v37 = this->fields.detailLabel;
      v38 = SkillEntity__getEffectExplanation(v13, 0, 0LL);
      WrapControlText__textAdjust(
        v37,
        v38,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v39,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v40 = this->fields.servantFaceIcon;
      v41 = item->fields.boostEntity;
      v42 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v41 )
        LODWORD(v41) = v41->fields.imageId;
      v64 = (int)v41;
      v43 = System_Int32__ToString((int32_t)&v64, 0LL);
      v44 = System_String__Concat_44901936(v42, v43, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v40, v44, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v45);
LABEL_61:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_105;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_105;
      v46 = 1;
      break;
    case 3:
      v47 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v47 )
        goto LABEL_105;
      UILabel__set_fontSize(v47, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v13 )
        goto LABEL_105;
      v48 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0LL);
      if ( !v48 )
        goto LABEL_105;
      UILabel__set_text(v48, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_105;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v49,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v50 = this->fields.detailLabel;
      v51 = SkillEntity__getEffectExplanation(v13, 0, 0LL);
      WrapControlText__textAdjust(
        v50,
        v51,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_105;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v52,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v53 = this->fields.servantFaceIcon;
      v54 = item->fields.boostEntity;
      v55 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v54 )
        LODWORD(v54) = v54->fields.imageId;
      v64 = (int)v54;
      v56 = System_Int32__ToString((int32_t)&v64, 0LL);
      v57 = System_String__Concat_44901936(v55, v56, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v53, v57, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v58);
LABEL_79:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_105;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_105;
      v46 = 0;
      break;
    default:
      goto LABEL_83;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v46, 0LL);
LABEL_83:
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity )
  {
    v60 = (UIWidget_o *)this->fields.nameLabel;
    if ( commonConsumeEntity->max_length )
    {
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
        Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      }
      v61 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 32LL);
      if ( !v60 )
        goto LABEL_105;
      goto LABEL_95;
    }
  }
  else
  {
    v60 = (UIWidget_o *)this->fields.nameLabel;
  }
  Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  }
  v61 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 36LL);
  if ( !v60 )
LABEL_105:
    sub_B7769C(Instance, skillId);
LABEL_95:
  UIWidget__set_width(v60, *v61, 0LL);
  Instance = (System_String_o *)this->fields.recommendationSprite;
  if ( !Instance )
    goto LABEL_105;
  isRecommended = item->fields.isRecommended;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_105;
  if ( isRecommended )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    recommendationLabel = this->fields.recommendationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2709/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
    if ( !recommendationLabel )
      goto LABEL_105;
    UILabel__set_text(recommendationLabel, Instance, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
}


void __fastcall BoostSupportRequestItemListViewItemDraw__SetViewConsumptionIcon(
        BoostSupportRequestItemListViewItemDraw_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  this->fields.isConsumptionIcon = isVisible;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(
        BoostSupportRequestItemListViewItemDraw_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *consumptionLabel; // x0
  struct CommonConsumeEntity_array *commonConsumeEntity; // x24
  __int64 v7; // x21
  struct UISprite_array **p_itemIcon; // x23
  __int64 v9; // x25
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v11; // w26
  struct UISprite_array *v12; // x8
  __int64 v13; // x9
  UISprite_o *v14; // x21
  int32_t v15; // w22
  struct UILabel_array *v16; // x8
  __int64 v17; // x9
  UILabel_o *v18; // x21
  struct UILabel_array *v19; // x8
  UIWidget_o *v20; // x21
  int v21; // s0
  struct UISprite_array *v25; // x8
  struct UILabel_array *v26; // x8
  struct UISprite_array *v27; // x8
  __int64 v28; // x20
  struct UILabel_array *v29; // x8
  struct UISprite_array *v30; // x8
  struct UILabel_array *v31; // x8
  __int64 v32; // x0

  if ( (byte_438D70F & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_BoostFunctionUtility__TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D70F = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel )
    goto LABEL_59;
  consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL);
  if ( !consumptionLabel )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 1, 0LL);
  if ( !item )
    goto LABEL_59;
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity && (v7 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
  {
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)v7 > 0 )
    {
      v9 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v11 = v9 - 4;
        if ( (int)v9 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_42;
        v12 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v11 >= v12->max_length || v11 >= (unsigned int)v7 )
          goto LABEL_60;
        v13 = *((_QWORD *)&commonConsumeEntity->obj.klass + v9);
        if ( !v13 )
          break;
        v14 = (UISprite_o *)*((_QWORD *)&v12->obj.klass + v9);
        v15 = *(_DWORD *)(v13 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v14, v15, 0LL);
        v16 = this->fields.itemNumLabel;
        if ( !v16 )
          break;
        if ( v11 >= v16->max_length || v11 >= commonConsumeEntity->max_length )
          goto LABEL_60;
        v17 = *((_QWORD *)&commonConsumeEntity->obj.klass + v9);
        if ( !v17 )
          break;
        v18 = (UILabel_o *)*((_QWORD *)&v16->obj.klass + v9);
        consumptionLabel = (UnityEngine_Component_o *)System_Int32__ToString((int)v17 + 32, 0LL);
        if ( !v18 )
          break;
        UILabel__set_text(v18, (System_String_o *)consumptionLabel, 0LL);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          break;
        if ( v11 >= v19->max_length )
          goto LABEL_60;
        v20 = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v9);
        if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v11 >= commonConsumeEntity->max_length )
        {
LABEL_60:
          v32 = sub_B776C8(consumptionLabel);
          sub_B77668(v32, 0LL);
        }
        if ( !consumptionLabel )
          break;
        if ( BoostFunctionUtility__IsEnoughUserItem(
               (BoostFunctionUtility_o *)consumptionLabel,
               *((CommonConsumeEntity_o **)&commonConsumeEntity->obj.klass + v9),
               item->fields.usrItemEntityList,
               0LL) )
        {
          *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
          if ( !v20 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_red(0LL);
          if ( !v20 )
            break;
        }
        UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
        v25 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v11 >= v25->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v25->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v26 = this->fields.itemNumLabel;
        if ( !v26 )
          break;
        if ( v11 >= v26->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v26->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v7 = *(_QWORD *)&commonConsumeEntity->max_length;
        if ( (int)++v9 - 4 >= (int)v7 )
          goto LABEL_42;
      }
LABEL_59:
      sub_B7769C(consumptionLabel, item);
    }
LABEL_42:
    v27 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_59;
    v28 = 8LL * (int)v7 + 32;
    while ( (int)v7 < (signed int)v27->max_length )
    {
      v29 = this->fields.itemNumLabel;
      if ( !v29 )
        goto LABEL_59;
      if ( (unsigned int)v7 >= v29->max_length )
        goto LABEL_60;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v29->obj.klass + v28);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v30 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)v7 >= v30->max_length )
            goto LABEL_60;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v30->obj.klass + v28);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v31 = this->fields.itemNumLabel;
            if ( v31 )
            {
              if ( (unsigned int)v7 >= v31->max_length )
                goto LABEL_60;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v31->obj.klass + v28);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v27 = *p_itemIcon;
                LODWORD(v7) = v7 + 1;
                v28 += 8LL;
                if ( *p_itemIcon )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_59;
    }
  }
  else
  {
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, (const MethodInfo *)item);
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumeItemIconGrid;
  if ( !consumptionLabel )
    goto LABEL_59;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))consumptionLabel->klass[1]._1.castClass)(
    consumptionLabel,
    consumptionLabel->klass[1]._1.declaringType);
}