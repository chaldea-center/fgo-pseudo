void __fastcall BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BoostSupportRequestItemListViewItemDraw_c *v14; // x8
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  System_Int32_array **v16; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E86D6 & 1) == 0 )
  {
    sub_B5D5C4(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16697/*"assist_icon_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16698/*"assist_icon_0"*/, v11, v12, v13);
    byte_42E86D6 = 1;
  }
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE = 18;
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE = 13;
  v14 = BoostSupportRequestItemListViewItemDraw_TypeInfo;
  BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE = 22;
  v14->static_fields->INVALID_DETAIL_FONT_SIZE = 21;
  v14->static_fields->TITLE_X_POS = -160;
  v14->static_fields->DETAIL_X_POS = -145;
  v14->static_fields->INVALID_TITLE_X_POS = -140;
  v14->static_fields->INVALID_DETAIL_X_POS = -138;
  v14->static_fields->NAME_LABEL_WIDTH = 216;
  v14->static_fields->NAME_LABEL_WIDTH_WITHOUT_CONSUME_ITEM_DISPLAYED = 420;
  static_fields = v14->static_fields;
  v16 = (System_Int32_array **)StringLiteral_16697/*"assist_icon_"*/;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16697/*"assist_icon_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->ASSIST_ICON_SPRITE_NAME, v16, v2, v3, v4, v5, v6, v7);
  v17 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_16698/*"assist_icon_0"*/;
  v17->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16698/*"assist_icon_0"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v17->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v18, v19, v20, v21, v22, v23, v24);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *consumptionLabel; // x0
  struct UISprite_array *itemIcon; // x8
  __int64 v7; // x20
  il2cpp_array_size_t v8; // w22
  struct UILabel_array *itemNumLabel; // x8
  struct UISprite_array *v10; // x8
  struct UILabel_array *v11; // x8
  __int64 v12; // x0

  if ( (byte_42E86D4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E86D4 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(consumptionLabel, method);
  }
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( (int)v7 - 4 >= (signed int)itemIcon->max_length )
      break;
    itemNumLabel = this->fields.itemNumLabel;
    if ( !itemNumLabel )
      goto LABEL_18;
    if ( v8 >= itemNumLabel->max_length )
    {
LABEL_20:
      v12 = sub_B5D6C8(consumptionLabel);
      sub_B5D668(v12, 0LL);
    }
    consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&itemNumLabel->obj.klass + v7);
    if ( consumptionLabel )
    {
      UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v10 = this->fields.itemIcon;
      if ( v10 )
      {
        if ( v8 >= v10->max_length )
          goto LABEL_20;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v10->obj.klass + v7);
        if ( consumptionLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
          v11 = this->fields.itemNumLabel;
          if ( v11 )
          {
            if ( v8 >= v11->max_length )
              goto LABEL_20;
            consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v11->obj.klass + v7);
            if ( consumptionLabel )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
              itemIcon = this->fields.itemIcon;
              ++v7;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  UILabel_o *consumptionLabel; // x22
  System_String_o *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x22
  WarEntity_o *Entity; // x0
  int v36; // w8
  SkillEntity_o *v37; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v39; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *detailLabel; // x21
  UnityEngine_GameObject_o *v42; // x0
  UISprite_o *servantFaceIcon; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME_NO_OPEN; // x22
  const MethodInfo *v45; // x1
  UILabel_o *v46; // x22
  UILabel_o *v47; // x22
  UnityEngine_GameObject_o *v48; // x0
  UILabel_o *v49; // x22
  System_String_o *EffectExplanation; // x0
  UnityEngine_GameObject_o *v51; // x0
  UISprite_o *v52; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v54; // x0
  System_String_o *v55; // x22
  const MethodInfo *v56; // x2
  UILabel_o *v57; // x22
  UILabel_o *v58; // x22
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *v60; // x22
  System_String_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UISprite_o *v63; // x21
  System_String_o *v64; // x22
  System_String_o *v65; // x0
  System_String_o *v66; // x22
  const MethodInfo *v67; // x2
  bool v68; // w1
  UILabel_o *v69; // x22
  UILabel_o *v70; // x22
  UnityEngine_GameObject_o *v71; // x0
  UILabel_o *v72; // x22
  System_String_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  UISprite_o *v75; // x21
  System_String_o *v76; // x22
  System_String_o *v77; // x0
  System_String_o *v78; // x22
  const MethodInfo *v79; // x1
  CommonConsumeEntity_array *ConsumeList; // x0
  UIWidget_o *v81; // x21
  int32_t *v82; // x8
  _BOOL4 isRecommended; // w20
  UILabel_o *recommendationLabel; // x19
  int32_t Image_id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E86D3 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_2655/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_2656/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_2653/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, v28, v29, v30);
    byte_42E86D3 = 1;
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
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2656/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_96;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_96;
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (System_String_o *)BoostSupportRequsetItemListViewItem__get_Skill_id(item, 0LL);
  if ( !v34 )
    goto LABEL_96;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v34,
             (int32_t)Instance,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v36 = mode - 1;
  v37 = (SkillEntity_o *)Entity;
  switch ( v36 )
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
      v39 = this->fields.nameLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2653/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !v39 )
        goto LABEL_96;
      UILabel__set_text(v39, Instance, 0LL);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2653/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !detailLabel )
        goto LABEL_96;
      UILabel__set_text(detailLabel, Instance, 0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v42,
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
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v45);
      goto LABEL_54;
    case 1:
      v46 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v46 )
        goto LABEL_96;
      UILabel__set_fontSize(v46, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v37 )
        goto LABEL_96;
      v47 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v37, 0LL);
      if ( !v47 )
        goto LABEL_96;
      UILabel__set_text(v47, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v48,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v49 = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation(v37, 0, 0LL);
      WrapControlText__textAdjust(
        v49,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v51,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v52 = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v54 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v55 = System_String__Concat_44577788(ASSIST_ICON_SPRITE_NAME, v54, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v52, v55, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v56);
      goto LABEL_70;
    case 2:
      v57 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v57 )
        goto LABEL_96;
      UILabel__set_fontSize(v57, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v37 )
        goto LABEL_96;
      v58 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v37, 0LL);
      if ( !v58 )
        goto LABEL_96;
      UILabel__set_text(v58, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v59,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v60 = this->fields.detailLabel;
      v61 = SkillEntity__getEffectExplanation(v37, 0, 0LL);
      WrapControlText__textAdjust(
        v60,
        v61,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v62,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v63 = this->fields.servantFaceIcon;
      v64 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v65 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v66 = System_String__Concat_44577788(v64, v65, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v63, v66, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v67);
LABEL_54:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v68 = 1;
      break;
    case 3:
      v69 = this->fields.nameLabel;
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v69 )
        goto LABEL_96;
      UILabel__set_fontSize(v69, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v37 )
        goto LABEL_96;
      v70 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v37, 0LL);
      if ( !v70 )
        goto LABEL_96;
      UILabel__set_text(v70, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_96;
      v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v71,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v72 = this->fields.detailLabel;
      v73 = SkillEntity__getEffectExplanation(v37, 0, 0LL);
      WrapControlText__textAdjust(
        v72,
        v73,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_96;
      v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v74,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v75 = this->fields.servantFaceIcon;
      v76 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      Image_id = BoostSupportRequsetItemListViewItem__get_Image_id(item, 0LL);
      v77 = System_Int32__ToString((int32_t)&Image_id, 0LL);
      v78 = System_String__Concat_44577788(v76, v77, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v75, v78, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v79);
LABEL_70:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_96;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_96;
      v68 = 0;
      break;
    default:
      goto LABEL_74;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v68, 0LL);
LABEL_74:
  ConsumeList = BoostSupportRequsetItemListViewItem__get_ConsumeList(item, 0LL);
  if ( ConsumeList )
  {
    v81 = (UIWidget_o *)this->fields.nameLabel;
    if ( ConsumeList->max_length )
    {
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
        Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      }
      v82 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 32LL);
      if ( !v81 )
        goto LABEL_96;
      goto LABEL_86;
    }
  }
  else
  {
    v81 = (UIWidget_o *)this->fields.nameLabel;
  }
  Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
    Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
  }
  v82 = (int32_t *)(*(_QWORD *)&Instance[7].fields + 36LL);
  if ( !v81 )
LABEL_96:
    sub_B5D69C(Instance, v33);
LABEL_86:
  UIWidget__set_width(v81, *v82, 0LL);
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2655/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *consumptionLabel; // x0
  UnityEngine_Component_c *klass; // x22
  UnityEngine_Component_o *v17; // x21
  struct UISprite_array **p_itemIcon; // x25
  __int64 v19; // x26
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v21; // w28
  struct UISprite_array *v22; // x8
  __int64 v23; // x9
  UISprite_o *v24; // x22
  int32_t v25; // w23
  struct UILabel_array *v26; // x8
  __int64 v27; // x9
  UILabel_o *v28; // x22
  struct UILabel_array *v29; // x8
  UIWidget_o *v30; // x22
  CommonConsumeEntity_o *v31; // x23
  UnityEngine_Component_o *v32; // x24
  const MethodInfo *v33; // x3
  int v34; // s0
  struct UISprite_array *v38; // x8
  struct UILabel_array *v39; // x8
  struct UISprite_array *v40; // x8
  __int64 v41; // x20
  struct UILabel_array *v42; // x8
  struct UISprite_array *v43; // x8
  struct UILabel_array *v44; // x8
  __int64 v45; // x0

  if ( (byte_42E86D5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E86D5 = 1;
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
  if ( consumptionLabel && (klass = consumptionLabel[1].klass, v17 = consumptionLabel, klass) )
  {
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)klass > 0 )
    {
      v19 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v21 = v19 - 4;
        if ( (int)v19 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_42;
        v22 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v21 >= v22->max_length || v21 >= (unsigned int)klass )
          goto LABEL_60;
        v23 = *((_QWORD *)&v17->klass + v19);
        if ( !v23 )
          break;
        v24 = (UISprite_o *)*((_QWORD *)&v22->obj.klass + v19);
        v25 = *(_DWORD *)(v23 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v24, v25, 0LL);
        v26 = this->fields.itemNumLabel;
        if ( !v26 )
          break;
        if ( v21 >= v26->max_length || v21 >= LODWORD(v17[1].klass) )
          goto LABEL_60;
        v27 = *((_QWORD *)&v17->klass + v19);
        if ( !v27 )
          break;
        v28 = (UILabel_o *)*((_QWORD *)&v26->obj.klass + v19);
        consumptionLabel = (UnityEngine_Component_o *)System_Int32__ToString((int)v27 + 32, 0LL);
        if ( !v28 )
          break;
        UILabel__set_text(v28, (System_String_o *)consumptionLabel, 0LL);
        v29 = this->fields.itemNumLabel;
        if ( !v29 )
          break;
        if ( v21 >= v29->max_length )
          goto LABEL_60;
        v30 = (UIWidget_o *)*((_QWORD *)&v29->obj.klass + v19);
        if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
        }
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v21 >= LODWORD(v17[1].klass) )
        {
LABEL_60:
          v45 = sub_B5D6C8(consumptionLabel);
          sub_B5D668(v45, 0LL);
        }
        v31 = (CommonConsumeEntity_o *)*((_QWORD *)&v17->klass + v19);
        v32 = consumptionLabel;
        consumptionLabel = (UnityEngine_Component_o *)BoostSupportRequsetItemListViewItem__get_UserItemEntityList(
                                                        item,
                                                        0LL);
        if ( !v32 )
          break;
        if ( BoostFunctionUtility__IsEnoughUserItem(
               (BoostFunctionUtility_o *)consumptionLabel,
               v31,
               (UserItemEntity_array *)consumptionLabel,
               v33) )
        {
          *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
          if ( !v30 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_red(0LL);
          if ( !v30 )
            break;
        }
        UIWidget__set_color(v30, *(UnityEngine_Color_o *)&v34, 0LL);
        v38 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v21 >= v38->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v38->obj.klass + v19);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v39 = this->fields.itemNumLabel;
        if ( !v39 )
          break;
        if ( v21 >= v39->max_length )
          goto LABEL_60;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v39->obj.klass + v19);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        klass = v17[1].klass;
        if ( (int)++v19 - 4 >= (int)klass )
          goto LABEL_42;
      }
LABEL_59:
      sub_B5D69C(consumptionLabel, item);
    }
LABEL_42:
    v40 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_59;
    v41 = 8LL * (int)klass + 32;
    while ( (int)klass < (signed int)v40->max_length )
    {
      v42 = this->fields.itemNumLabel;
      if ( !v42 )
        goto LABEL_59;
      if ( (unsigned int)klass >= v42->max_length )
        goto LABEL_60;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v42->obj.klass + v41);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v43 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)klass >= v43->max_length )
            goto LABEL_60;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v43->obj.klass + v41);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v44 = this->fields.itemNumLabel;
            if ( v44 )
            {
              if ( (unsigned int)klass >= v44->max_length )
                goto LABEL_60;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v44->obj.klass + v41);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v40 = *p_itemIcon;
                LODWORD(klass) = (_DWORD)klass + 1;
                v41 += 8LL;
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