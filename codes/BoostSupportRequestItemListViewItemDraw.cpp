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

  if ( (byte_42AFF51 & 1) == 0 )
  {
    sub_B52984(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_16611/*"assist_icon_"*/);
    sub_B52984(&StringLiteral_16612/*"assist_icon_0"*/);
    byte_42AFF51 = 1;
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
  v9 = (System_Int32_array **)StringLiteral_16611/*"assist_icon_"*/;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16611/*"assist_icon_"*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->ASSIST_ICON_SPRITE_NAME, v9, v1, v2, v3, v4, v5, v6);
  v10 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16612/*"assist_icon_0"*/;
  v10->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16612/*"assist_icon_0"*/;
  sub_B52920((BattleServantConfConponent_o *)&v10->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_42AFF4F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFF4F = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(consumptionLabel, method);
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
      v10 = sub_B52A88(consumptionLabel);
      sub_B52A28(v10, 0LL);
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
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x22
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
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  const MethodInfo *v32; // x2
  UILabel_o *v33; // x22
  UILabel_o *v34; // x22
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *v36; // x22
  System_String_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UISprite_o *v39; // x21
  System_String_o *v40; // x22
  System_String_o *v41; // x0
  System_String_o *v42; // x22
  const MethodInfo *v43; // x2
  bool v44; // w1
  UILabel_o *v45; // x22
  UILabel_o *v46; // x22
  UnityEngine_GameObject_o *v47; // x0
  UILabel_o *v48; // x22
  System_String_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UISprite_o *v51; // x21
  System_String_o *v52; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x22
  const MethodInfo *v55; // x1
  CommonConsumeEntity_array *ConsumeList; // x0
  UIWidget_o *v57; // x21
  int32_t *v58; // x8
  _BOOL4 isRecommended; // w20
  UILabel_o *recommendationLabel; // x19
  int32_t Image_id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42AFF4E & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BoostSupportRequestItemListViewItemDraw_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_2633/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/);
    sub_B52984(&StringLiteral_2634/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/);
    sub_B52984(&StringLiteral_2631/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/);
    byte_42AFF4E = 1;
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2634/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_96;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_96;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (System_String_o *)BoostSupportRequsetItemListViewItem__get_Skill_id(item, 0LL);
  if ( !v10 )
    goto LABEL_96;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v10,
             (int32_t)Instance,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
        goto LABEL_96;
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2631/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !v15 )
        goto LABEL_96;
      UILabel__set_text(v15, Instance, 0LL);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2631/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !detailLabel )
        goto LABEL_96;
      UILabel__set_text(detailLabel, Instance, 0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
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
      goto LABEL_54;
    case 1:
      v22 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v22 )
        goto LABEL_96;
      UILabel__set_fontSize(v22, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v13 )
        goto LABEL_96;
      v23 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0LL);
      if ( !v23 )
        goto LABEL_96;
      UILabel__set_text(v23, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v24,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
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
        goto LABEL_96;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v27,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v28 = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v30 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v31 = System_String__Concat_44568316(ASSIST_ICON_SPRITE_NAME, v30, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v28, v31, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v32);
      goto LABEL_70;
    case 2:
      v33 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v33 )
        goto LABEL_96;
      UILabel__set_fontSize(v33, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v13 )
        goto LABEL_96;
      v34 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0LL);
      if ( !v34 )
        goto LABEL_96;
      UILabel__set_text(v34, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v35,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v36 = this->fields.detailLabel;
      v37 = SkillEntity__getEffectExplanation(v13, 0, 0LL);
      WrapControlText__textAdjust(
        v36,
        v37,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v38,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v39 = this->fields.servantFaceIcon;
      v40 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v41 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v42 = System_String__Concat_44568316(v40, v41, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v39, v42, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v43);
LABEL_54:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v44 = 1;
      break;
    case 3:
      v45 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v45 )
        goto LABEL_96;
      UILabel__set_fontSize(v45, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v13 )
        goto LABEL_96;
      v46 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v13, 0LL);
      if ( !v46 )
        goto LABEL_96;
      UILabel__set_text(v46, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v47,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v48 = this->fields.detailLabel;
      v49 = SkillEntity__getEffectExplanation(v13, 0, 0LL);
      WrapControlText__textAdjust(
        v48,
        v49,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v50,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v51 = this->fields.servantFaceIcon;
      v52 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v53 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v54 = System_String__Concat_44568316(v52, v53, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v51, v54, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v55);
LABEL_70:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v44 = 0;
      break;
    default:
      goto LABEL_74;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v44, 0LL);
LABEL_74:
  ConsumeList = BoostSupportRequsetItemListViewItem__get_ConsumeList(item, 0LL);
  if ( ConsumeList )
  {
    v57 = (UIWidget_o *)this->fields.nameLabel;
    if ( ConsumeList->max_length )
    {
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
        Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      }
      v58 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 32LL);
      if ( !v57 )
        goto LABEL_96;
      goto LABEL_86;
    }
  }
  else
  {
    v57 = (UIWidget_o *)this->fields.nameLabel;
  }
  Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  }
  v58 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 36LL);
  if ( !v57 )
LABEL_96:
    sub_B52A5C(Instance, v9);
LABEL_86:
  UIWidget__set_width(v57, *v58, 0LL);
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2633/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
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
  UnityEngine_Component_o *consumptionLabel; // x0
  UnityEngine_Component_c *klass; // x22
  UnityEngine_Component_o *v7; // x21
  struct UISprite_array **p_itemIcon; // x25
  __int64 v9; // x26
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v11; // w28
  struct UISprite_array *v12; // x8
  __int64 v13; // x9
  UISprite_o *v14; // x22
  int32_t v15; // w23
  struct UILabel_array *v16; // x8
  __int64 v17; // x9
  UILabel_o *v18; // x22
  struct UILabel_array *v19; // x8
  UIWidget_o *v20; // x22
  CommonConsumeEntity_o *v21; // x23
  UnityEngine_Component_o *v22; // x24
  const MethodInfo *v23; // x3
  int v24; // s0
  struct UISprite_array *v28; // x8
  struct UILabel_array *v29; // x8
  struct UISprite_array *v30; // x8
  __int64 v31; // x20
  struct UILabel_array *v32; // x8
  struct UISprite_array *v33; // x8
  struct UILabel_array *v34; // x8
  __int64 v35; // x0

  if ( (byte_42AFF50 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_BoostFunctionUtility__TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFF50 = 1;
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
  if ( consumptionLabel && (klass = consumptionLabel[1].klass, v7 = consumptionLabel, klass) )
  {
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)klass > 0 )
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
        if ( v11 >= v12->max_length || v11 >= (unsigned int)klass )
          goto LABEL_60;
        v13 = *((_QWORD *)&v7->klass + v9);
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
        if ( v11 >= v16->max_length || v11 >= LODWORD(v7[1].klass) )
          goto LABEL_60;
        v17 = *((_QWORD *)&v7->klass + v9);
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
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v11 >= LODWORD(v7[1].klass) )
        {
LABEL_60:
          v35 = sub_B52A88(consumptionLabel);
          sub_B52A28(v35, 0LL);
        }
        v21 = (CommonConsumeEntity_o *)*((_QWORD *)&v7->klass + v9);
        v22 = consumptionLabel;
        consumptionLabel = (UnityEngine_Component_o *)BoostSupportRequsetItemListViewItem__get_UserItemEntityList(
                                                        item,
                                                        0LL);
        if ( !v22 )
          break;
        if ( BoostFunctionUtility__IsEnoughUserItem(
               (BoostFunctionUtility_o *)consumptionLabel,
               v21,
               (UserItemEntity_array *)consumptionLabel,
               v23) )
        {
          *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
          if ( !v20 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_red(0LL);
          if ( !v20 )
            break;
        }
        UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v24, 0LL);
        v28 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v11 >= v28->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v28->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v29 = this->fields.itemNumLabel;
        if ( !v29 )
          break;
        if ( v11 >= v29->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v29->obj.klass + v9);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        klass = v7[1].klass;
        if ( (int)++v9 - 4 >= (int)klass )
          goto LABEL_42;
      }
LABEL_59:
      sub_B52A5C(consumptionLabel, item);
    }
LABEL_42:
    v30 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_59;
    v31 = 8LL * (int)klass + 32;
    while ( (int)klass < (signed int)v30->max_length )
    {
      v32 = this->fields.itemNumLabel;
      if ( !v32 )
        goto LABEL_59;
      if ( (unsigned int)klass >= v32->max_length )
        goto LABEL_60;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v32->obj.klass + v31);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v33 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)klass >= v33->max_length )
            goto LABEL_60;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v33->obj.klass + v31);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v34 = this->fields.itemNumLabel;
            if ( v34 )
            {
              if ( (unsigned int)klass >= v34->max_length )
                goto LABEL_60;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v34->obj.klass + v31);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v30 = *p_itemIcon;
                LODWORD(klass) = (_DWORD)klass + 1;
                v31 += 8LL;
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