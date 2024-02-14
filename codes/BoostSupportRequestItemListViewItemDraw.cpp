void __fastcall BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BoostSupportRequestItemListViewItemDraw_c *v10; // x8
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4214C5A & 1) == 0 )
  {
    sub_B0D8A4(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_16548/*"assist_icon_"*/, v8);
    sub_B0D8A4(&StringLiteral_16549/*"assist_icon_0"*/, v9);
    byte_4214C5A = 1;
  }
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE = 18;
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE = 13;
  v10 = BoostSupportRequestItemListViewItemDraw_TypeInfo;
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE = 22;
  v10->static_fields->INVALID_DETAIL_FONT_SIZE = 21;
  v10->static_fields->TITLE_X_POS = -160;
  v10->static_fields->DETAIL_X_POS = -145;
  v10->static_fields->INVALID_TITLE_X_POS = -140;
  v10->static_fields->INVALID_DETAIL_X_POS = -138;
  v10->static_fields->NAME_LABEL_WIDTH = 216;
  v10->static_fields->NAME_LABEL_WIDTH_WITHOUT_CONSUME_ITEM_DISPLAYED = 420;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16548/*"assist_icon_"*/;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16548/*"assist_icon_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->ASSIST_ICON_SPRITE_NAME, v12, v2, v3, v4, v5, v6, v7);
  v13 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_16549/*"assist_icon_0"*/;
  v13->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16549/*"assist_icon_0"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v14, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4214C58 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4214C58 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(consumptionLabel);
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
      v10 = sub_B0D9A8(consumptionLabel);
      sub_B0D948(v10, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *consumptionLabel; // x22
  System_String_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x22
  WarEntity_o *Entity; // x0
  int v19; // w8
  SkillEntity_o *v20; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v22; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *detailLabel; // x21
  UnityEngine_GameObject_o *v25; // x0
  UISprite_o *servantFaceIcon; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME_NO_OPEN; // x22
  const MethodInfo *v28; // x1
  UILabel_o *v29; // x22
  UILabel_o *v30; // x22
  UnityEngine_GameObject_o *v31; // x0
  UILabel_o *v32; // x22
  System_String_o *EffectExplanation; // x0
  UnityEngine_GameObject_o *v34; // x0
  UISprite_o *v35; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v37; // x0
  System_String_o *v38; // x22
  const MethodInfo *v39; // x2
  UILabel_o *v40; // x22
  UILabel_o *v41; // x22
  UnityEngine_GameObject_o *v42; // x0
  UILabel_o *v43; // x22
  System_String_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UISprite_o *v46; // x21
  System_String_o *v47; // x22
  System_String_o *v48; // x0
  System_String_o *v49; // x22
  const MethodInfo *v50; // x2
  bool v51; // w1
  UILabel_o *v52; // x22
  UILabel_o *v53; // x22
  UnityEngine_GameObject_o *v54; // x0
  UILabel_o *v55; // x22
  System_String_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UISprite_o *v58; // x21
  System_String_o *v59; // x22
  System_String_o *v60; // x0
  System_String_o *v61; // x22
  const MethodInfo *v62; // x1
  CommonConsumeEntity_array *ConsumeList; // x0
  UIWidget_o *v64; // x21
  int32_t *v65; // x8
  _BOOL4 isRecommended; // w20
  UILabel_o *recommendationLabel; // x19
  int32_t Image_id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4214C57 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_2612/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, v12);
    sub_B0D8A4(&StringLiteral_2613/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, v13);
    sub_B0D8A4(&StringLiteral_2610/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, v14);
    byte_4214C57 = 1;
  }
  Image_id = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2613/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_96;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_96;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (System_String_o *)BoostSupportRequsetItemListViewItem__get_Skill_id(item, 0LL);
  if ( !v17 )
    goto LABEL_96;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v19 = mode - 1;
  v20 = (SkillEntity_o *)Entity;
  switch ( v19 )
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
        goto LABEL_96;
      UILabel__set_fontSize(
        nameLabel,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE,
        0LL);
      v22 = this->fields.nameLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2610/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !v22 )
        goto LABEL_96;
      UILabel__set_text(v22, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        gameObject,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_FONT_SIZE,
        0LL);
      detailLabel = this->fields.detailLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2610/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !detailLabel )
        goto LABEL_96;
      UILabel__set_text(detailLabel, Instance, 0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v25,
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
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v28);
      goto LABEL_54;
    case 1:
      v29 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v29 )
        goto LABEL_96;
      UILabel__set_fontSize(v29, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v20 )
        goto LABEL_96;
      v30 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v20, 0LL);
      if ( !v30 )
        goto LABEL_96;
      UILabel__set_text(v30, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v31,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v32 = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation(v20, 0, 0LL);
      WrapControlText__textAdjust(
        v32,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v34,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v35 = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v37 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v38 = System_String__Concat_43849904(ASSIST_ICON_SPRITE_NAME, v37, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v35, v38, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v39);
      goto LABEL_70;
    case 2:
      v40 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v40 )
        goto LABEL_96;
      UILabel__set_fontSize(v40, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v20 )
        goto LABEL_96;
      v41 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v20, 0LL);
      if ( !v41 )
        goto LABEL_96;
      UILabel__set_text(v41, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v42,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v43 = this->fields.detailLabel;
      v44 = SkillEntity__getEffectExplanation(v20, 0, 0LL);
      WrapControlText__textAdjust(
        v43,
        v44,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v45,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v46 = this->fields.servantFaceIcon;
      v47 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v48 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v49 = System_String__Concat_43849904(v47, v48, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v46, v49, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v50);
LABEL_54:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v51 = 1;
      break;
    case 3:
      v52 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v52 )
        goto LABEL_96;
      UILabel__set_fontSize(v52, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v20 )
        goto LABEL_96;
      v53 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v20, 0LL);
      if ( !v53 )
        goto LABEL_96;
      UILabel__set_text(v53, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v54,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v55 = this->fields.detailLabel;
      v56 = SkillEntity__getEffectExplanation(v20, 0, 0LL);
      WrapControlText__textAdjust(
        v55,
        v56,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v57,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v58 = this->fields.servantFaceIcon;
      v59 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v60 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v61 = System_String__Concat_43849904(v59, v60, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v58, v61, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v62);
LABEL_70:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v51 = 0;
      break;
    default:
      goto LABEL_74;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v51, 0LL);
LABEL_74:
  ConsumeList = BoostSupportRequsetItemListViewItem__get_ConsumeList(item, 0LL);
  if ( ConsumeList )
  {
    v64 = (UIWidget_o *)this->fields.nameLabel;
    if ( ConsumeList->max_length )
    {
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
        Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      }
      v65 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 32LL);
      if ( !v64 )
        goto LABEL_96;
      goto LABEL_86;
    }
  }
  else
  {
    v64 = (UIWidget_o *)this->fields.nameLabel;
  }
  Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  }
  v65 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 36LL);
  if ( !v64 )
LABEL_96:
    sub_B0D97C(Instance);
LABEL_86:
  UIWidget__set_width(v64, *v65, 0LL);
  Instance = (System_String_o *)this->fields.recommendationSprite;
  if ( !Instance )
    goto LABEL_96;
  isRecommended = item->fields.isRecommended;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_96;
  if ( isRecommended )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    recommendationLabel = this->fields.recommendationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2612/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
    if ( !recommendationLabel )
      goto LABEL_96;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *consumptionLabel; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Component_c *klass; // x22
  UnityEngine_Component_o *v11; // x21
  struct UISprite_array **p_itemIcon; // x25
  __int64 v13; // x26
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v15; // w28
  struct UISprite_array *v16; // x8
  __int64 v17; // x9
  UISprite_o *v18; // x22
  int32_t v19; // w23
  struct UILabel_array *v20; // x8
  __int64 v21; // x9
  UILabel_o *v22; // x22
  struct UILabel_array *v23; // x8
  UIWidget_o *v24; // x22
  CommonConsumeEntity_o *v25; // x23
  UnityEngine_Component_o *v26; // x24
  const MethodInfo *v27; // x3
  int v28; // s0
  struct UISprite_array *v32; // x8
  struct UILabel_array *v33; // x8
  struct UISprite_array *v34; // x8
  __int64 v35; // x20
  struct UILabel_array *v36; // x8
  struct UISprite_array *v37; // x8
  struct UILabel_array *v38; // x8
  __int64 v39; // x0

  if ( (byte_4214C59 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4214C59 = 1;
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
  consumptionLabel = (UnityEngine_Component_o *)BoostSupportRequsetItemListViewItem__get_ConsumeList(item, 0LL);
  if ( consumptionLabel && (klass = consumptionLabel[1].klass, v11 = consumptionLabel, klass) )
  {
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)klass > 0 )
    {
      v13 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v15 = v13 - 4;
        if ( (int)v13 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_42;
        v16 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v15 >= v16->max_length || v15 >= (unsigned int)klass )
          goto LABEL_60;
        v17 = *((_QWORD *)&v11->klass + v13);
        if ( !v17 )
          break;
        v18 = (UISprite_o *)*((_QWORD *)&v16->obj.klass + v13);
        v19 = *(_DWORD *)(v17 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v18, v19, 0LL);
        v20 = this->fields.itemNumLabel;
        if ( !v20 )
          break;
        if ( v15 >= v20->max_length || v15 >= LODWORD(v11[1].klass) )
          goto LABEL_60;
        v21 = *((_QWORD *)&v11->klass + v13);
        if ( !v21 )
          break;
        v22 = (UILabel_o *)*((_QWORD *)&v20->obj.klass + v13);
        consumptionLabel = (UnityEngine_Component_o *)System_Int32__ToString((int)v21 + 32, 0LL);
        if ( !v22 )
          break;
        UILabel__set_text(v22, (System_String_o *)consumptionLabel, 0LL);
        v23 = this->fields.itemNumLabel;
        if ( !v23 )
          break;
        if ( v15 >= v23->max_length )
          goto LABEL_60;
        v24 = (UIWidget_o *)*((_QWORD *)&v23->obj.klass + v13);
        if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v15 >= LODWORD(v11[1].klass) )
        {
LABEL_60:
          v39 = sub_B0D9A8(consumptionLabel);
          sub_B0D948(v39, 0LL);
        }
        v25 = (CommonConsumeEntity_o *)*((_QWORD *)&v11->klass + v13);
        v26 = consumptionLabel;
        consumptionLabel = (UnityEngine_Component_o *)BoostSupportRequsetItemListViewItem__get_UserItemEntityList(
                                                        item,
                                                        0LL);
        if ( !v26 )
          break;
        if ( BoostFunctionUtility__IsEnoughUserItem(
               (BoostFunctionUtility_o *)consumptionLabel,
               v25,
               (UserItemEntity_array *)consumptionLabel,
               v27) )
        {
          *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
          if ( !v24 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_red(0LL);
          if ( !v24 )
            break;
        }
        UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v28, 0LL);
        v32 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v15 >= v32->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v32->obj.klass + v13);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v33 = this->fields.itemNumLabel;
        if ( !v33 )
          break;
        if ( v15 >= v33->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v33->obj.klass + v13);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        klass = v11[1].klass;
        if ( (int)++v13 - 4 >= (int)klass )
          goto LABEL_42;
      }
LABEL_59:
      sub_B0D97C(consumptionLabel);
    }
LABEL_42:
    v34 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_59;
    v35 = 8LL * (int)klass + 32;
    while ( (int)klass < (signed int)v34->max_length )
    {
      v36 = this->fields.itemNumLabel;
      if ( !v36 )
        goto LABEL_59;
      if ( (unsigned int)klass >= v36->max_length )
        goto LABEL_60;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v36->obj.klass + v35);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v37 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)klass >= v37->max_length )
            goto LABEL_60;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v37->obj.klass + v35);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v38 = this->fields.itemNumLabel;
            if ( v38 )
            {
              if ( (unsigned int)klass >= v38->max_length )
                goto LABEL_60;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v38->obj.klass + v35);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v34 = *p_itemIcon;
                LODWORD(klass) = (_DWORD)klass + 1;
                v35 += 8LL;
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
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v9);
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumeItemIconGrid;
  if ( !consumptionLabel )
    goto LABEL_59;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))consumptionLabel->klass[1]._1.castClass)(
    consumptionLabel,
    consumptionLabel->klass[1]._1.declaringType);
}