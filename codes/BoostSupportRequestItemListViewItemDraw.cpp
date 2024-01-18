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

  if ( (byte_4187E3C & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16499/*"assist_icon_"*/, v8);
    sub_B2C35C(&StringLiteral_16500/*"assist_icon_0"*/, v9);
    byte_4187E3C = 1;
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
  v12 = (System_Int32_array **)StringLiteral_16499/*"assist_icon_"*/;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16499/*"assist_icon_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->ASSIST_ICON_SPRITE_NAME, v12, v2, v3, v4, v5, v6, v7);
  v13 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_16500/*"assist_icon_0"*/;
  v13->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16500/*"assist_icon_0"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v14, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4187E3A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187E3A = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_B2C434(consumptionLabel, method);
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
      v10 = sub_B2C460(consumptionLabel);
      sub_B2C400(v10, 0LL);
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
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  WarEntity_o *Entity; // x0
  int v20; // w8
  SkillEntity_o *v21; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v23; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *detailLabel; // x21
  UnityEngine_GameObject_o *v26; // x0
  UISprite_o *servantFaceIcon; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME_NO_OPEN; // x22
  const MethodInfo *v29; // x1
  UILabel_o *v30; // x22
  UILabel_o *v31; // x22
  UnityEngine_GameObject_o *v32; // x0
  UILabel_o *v33; // x22
  System_String_o *EffectExplanation; // x0
  UnityEngine_GameObject_o *v35; // x0
  UISprite_o *v36; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v38; // x0
  System_String_o *v39; // x22
  const MethodInfo *v40; // x2
  UILabel_o *v41; // x22
  UILabel_o *v42; // x22
  UnityEngine_GameObject_o *v43; // x0
  UILabel_o *v44; // x22
  System_String_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UISprite_o *v47; // x21
  System_String_o *v48; // x22
  System_String_o *v49; // x0
  System_String_o *v50; // x22
  const MethodInfo *v51; // x2
  bool v52; // w1
  UILabel_o *v53; // x22
  UILabel_o *v54; // x22
  UnityEngine_GameObject_o *v55; // x0
  UILabel_o *v56; // x22
  System_String_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UISprite_o *v59; // x21
  System_String_o *v60; // x22
  System_String_o *v61; // x0
  System_String_o *v62; // x22
  const MethodInfo *v63; // x1
  CommonConsumeEntity_array *ConsumeList; // x0
  UIWidget_o *v65; // x21
  int32_t *v66; // x8
  _BOOL4 isRecommended; // w20
  UILabel_o *recommendationLabel; // x19
  int32_t Image_id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4187E39 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_2601/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, v12);
    sub_B2C35C(&StringLiteral_2602/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, v13);
    sub_B2C35C(&StringLiteral_2599/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, v14);
    byte_4187E39 = 1;
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2602/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_96;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_96;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (System_String_o *)BoostSupportRequsetItemListViewItem__get_Skill_id(item, 0LL);
  if ( !v18 )
    goto LABEL_96;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v18,
             (int32_t)Instance,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v20 = mode - 1;
  v21 = (SkillEntity_o *)Entity;
  switch ( v20 )
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
      v23 = this->fields.nameLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2599/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !v23 )
        goto LABEL_96;
      UILabel__set_text(v23, Instance, 0LL);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2599/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !detailLabel )
        goto LABEL_96;
      UILabel__set_text(detailLabel, Instance, 0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v26,
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
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v29);
      goto LABEL_54;
    case 1:
      v30 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v30 )
        goto LABEL_96;
      UILabel__set_fontSize(v30, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v21 )
        goto LABEL_96;
      v31 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v21, 0LL);
      if ( !v31 )
        goto LABEL_96;
      UILabel__set_text(v31, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v32,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v33 = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation(v21, 0, 0LL);
      WrapControlText__textAdjust(
        v33,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v35,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v36 = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v38 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v39 = System_String__Concat_44305532(ASSIST_ICON_SPRITE_NAME, v38, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v36, v39, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v40);
      goto LABEL_70;
    case 2:
      v41 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v41 )
        goto LABEL_96;
      UILabel__set_fontSize(v41, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v21 )
        goto LABEL_96;
      v42 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v21, 0LL);
      if ( !v42 )
        goto LABEL_96;
      UILabel__set_text(v42, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v43,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v44 = this->fields.detailLabel;
      v45 = SkillEntity__getEffectExplanation(v21, 0, 0LL);
      WrapControlText__textAdjust(
        v44,
        v45,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v46,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v47 = this->fields.servantFaceIcon;
      v48 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v49 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v50 = System_String__Concat_44305532(v48, v49, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v47, v50, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v51);
LABEL_54:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v52 = 1;
      break;
    case 3:
      v53 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v53 )
        goto LABEL_96;
      UILabel__set_fontSize(v53, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v21 )
        goto LABEL_96;
      v54 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v21, 0LL);
      if ( !v54 )
        goto LABEL_96;
      UILabel__set_text(v54, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v55,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v56 = this->fields.detailLabel;
      v57 = SkillEntity__getEffectExplanation(v21, 0, 0LL);
      WrapControlText__textAdjust(
        v56,
        v57,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v58,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v59 = this->fields.servantFaceIcon;
      v60 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v61 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v62 = System_String__Concat_44305532(v60, v61, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v59, v62, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v63);
LABEL_70:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v52 = 0;
      break;
    default:
      goto LABEL_74;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v52, 0LL);
LABEL_74:
  ConsumeList = BoostSupportRequsetItemListViewItem__get_ConsumeList(item, 0LL);
  if ( ConsumeList )
  {
    v65 = (UIWidget_o *)this->fields.nameLabel;
    if ( ConsumeList->max_length )
    {
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
        Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      }
      v66 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 32LL);
      if ( !v65 )
        goto LABEL_96;
      goto LABEL_86;
    }
  }
  else
  {
    v65 = (UIWidget_o *)this->fields.nameLabel;
  }
  Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  }
  v66 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 36LL);
  if ( !v65 )
LABEL_96:
    sub_B2C434(Instance, v17);
LABEL_86:
  UIWidget__set_width(v65, *v66, 0LL);
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2601/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
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
  UnityEngine_Component_c *klass; // x22
  UnityEngine_Component_o *v10; // x21
  struct UISprite_array **p_itemIcon; // x25
  __int64 v12; // x26
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v14; // w28
  struct UISprite_array *v15; // x8
  __int64 v16; // x9
  UISprite_o *v17; // x22
  int32_t v18; // w23
  struct UILabel_array *v19; // x8
  __int64 v20; // x9
  UILabel_o *v21; // x22
  struct UILabel_array *v22; // x8
  UIWidget_o *v23; // x22
  CommonConsumeEntity_o *v24; // x23
  UnityEngine_Component_o *v25; // x24
  const MethodInfo *v26; // x3
  int v27; // s0
  struct UISprite_array *v31; // x8
  struct UILabel_array *v32; // x8
  struct UISprite_array *v33; // x8
  __int64 v34; // x20
  struct UILabel_array *v35; // x8
  struct UISprite_array *v36; // x8
  struct UILabel_array *v37; // x8
  __int64 v38; // x0

  if ( (byte_4187E3B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4187E3B = 1;
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
  if ( consumptionLabel && (klass = consumptionLabel[1].klass, v10 = consumptionLabel, klass) )
  {
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)klass > 0 )
    {
      v12 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v14 = v12 - 4;
        if ( (int)v12 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_42;
        v15 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v14 >= v15->max_length || v14 >= (unsigned int)klass )
          goto LABEL_60;
        v16 = *((_QWORD *)&v10->klass + v12);
        if ( !v16 )
          break;
        v17 = (UISprite_o *)*((_QWORD *)&v15->obj.klass + v12);
        v18 = *(_DWORD *)(v16 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v17, v18, 0LL);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          break;
        if ( v14 >= v19->max_length || v14 >= LODWORD(v10[1].klass) )
          goto LABEL_60;
        v20 = *((_QWORD *)&v10->klass + v12);
        if ( !v20 )
          break;
        v21 = (UILabel_o *)*((_QWORD *)&v19->obj.klass + v12);
        consumptionLabel = (UnityEngine_Component_o *)System_Int32__ToString((int)v20 + 32, 0LL);
        if ( !v21 )
          break;
        UILabel__set_text(v21, (System_String_o *)consumptionLabel, 0LL);
        v22 = this->fields.itemNumLabel;
        if ( !v22 )
          break;
        if ( v14 >= v22->max_length )
          goto LABEL_60;
        v23 = (UIWidget_o *)*((_QWORD *)&v22->obj.klass + v12);
        if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v14 >= LODWORD(v10[1].klass) )
        {
LABEL_60:
          v38 = sub_B2C460(consumptionLabel);
          sub_B2C400(v38, 0LL);
        }
        v24 = (CommonConsumeEntity_o *)*((_QWORD *)&v10->klass + v12);
        v25 = consumptionLabel;
        consumptionLabel = (UnityEngine_Component_o *)BoostSupportRequsetItemListViewItem__get_UserItemEntityList(
                                                        item,
                                                        0LL);
        if ( !v25 )
          break;
        if ( BoostFunctionUtility__IsEnoughUserItem(
               (BoostFunctionUtility_o *)consumptionLabel,
               v24,
               (UserItemEntity_array *)consumptionLabel,
               v26) )
        {
          *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
          if ( !v23 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_red(0LL);
          if ( !v23 )
            break;
        }
        UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v27, 0LL);
        v31 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v14 >= v31->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v31->obj.klass + v12);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v32 = this->fields.itemNumLabel;
        if ( !v32 )
          break;
        if ( v14 >= v32->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v32->obj.klass + v12);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        klass = v10[1].klass;
        if ( (int)++v12 - 4 >= (int)klass )
          goto LABEL_42;
      }
LABEL_59:
      sub_B2C434(consumptionLabel, item);
    }
LABEL_42:
    v33 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_59;
    v34 = 8LL * (int)klass + 32;
    while ( (int)klass < (signed int)v33->max_length )
    {
      v35 = this->fields.itemNumLabel;
      if ( !v35 )
        goto LABEL_59;
      if ( (unsigned int)klass >= v35->max_length )
        goto LABEL_60;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v35->obj.klass + v34);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v36 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)klass >= v36->max_length )
            goto LABEL_60;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v36->obj.klass + v34);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v37 = this->fields.itemNumLabel;
            if ( v37 )
            {
              if ( (unsigned int)klass >= v37->max_length )
                goto LABEL_60;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v37->obj.klass + v34);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v33 = *p_itemIcon;
                LODWORD(klass) = (_DWORD)klass + 1;
                v34 += 8LL;
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