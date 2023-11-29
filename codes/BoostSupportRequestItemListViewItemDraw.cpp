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

  if ( (byte_40FB16B & 1) == 0 )
  {
    sub_B16FFC(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16435, v8);
    sub_B16FFC(&StringLiteral_16436, v9);
    byte_40FB16B = 1;
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
  v12 = (System_Int32_array **)StringLiteral_16435;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16435;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->ASSIST_ICON_SPRITE_NAME, v12, v2, v3, v4, v5, v6, v7);
  v13 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_16436;
  v13->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16436;
  sub_B16F98((BattleServantConfConponent_o *)&v13->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v14, v15, v16, v17, v18, v19, v20);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_array *itemIcon; // x8
  __int64 v9; // x20
  il2cpp_array_size_t v10; // w22
  struct UILabel_array *itemNumLabel; // x8
  UILabel_o *v12; // x0
  struct UISprite_array *v13; // x8
  UnityEngine_Behaviour_o *v14; // x0
  struct UILabel_array *v15; // x8
  UnityEngine_Behaviour_o *v16; // x0

  if ( (byte_40FB169 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FB169 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (gameObject = UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  v9 = 4LL;
  while ( 1 )
  {
    v10 = v9 - 4;
    if ( (int)v9 - 4 >= (signed int)itemIcon->max_length )
      break;
    itemNumLabel = this->fields.itemNumLabel;
    if ( !itemNumLabel )
      goto LABEL_18;
    if ( v10 >= itemNumLabel->max_length )
    {
LABEL_20:
      sub_B17100(v5, v6, v7);
      sub_B170A0();
    }
    v12 = (UILabel_o *)*((_QWORD *)&itemNumLabel->obj.klass + v9);
    if ( v12 )
    {
      UILabel__set_text(v12, (System_String_o *)StringLiteral_1, 0LL);
      v13 = this->fields.itemIcon;
      if ( v13 )
      {
        if ( v10 >= v13->max_length )
          goto LABEL_20;
        v14 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v13->obj.klass + v9);
        if ( v14 )
        {
          UnityEngine_Behaviour__set_enabled(v14, 0, 0LL);
          v15 = this->fields.itemNumLabel;
          if ( v15 )
          {
            if ( v10 >= v15->max_length )
              goto LABEL_20;
            v16 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v15->obj.klass + v9);
            if ( v16 )
            {
              UnityEngine_Behaviour__set_enabled(v16, 0, 0LL);
              itemIcon = this->fields.itemIcon;
              ++v9;
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
  System_String_o *v16; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct BoostEntity_o *boostEntity; // x8
  int32_t skillId; // w1
  WarEntity_o *Entity; // x0
  int v22; // w8
  SkillEntity_o *v23; // x21
  UILabel_o *nameLabel; // x21
  UILabel_o *v25; // x21
  System_String_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *detailLabel; // x0
  UILabel_o *v30; // x21
  System_String_o *v31; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UISprite_o *servantFaceIcon; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME_NO_OPEN; // x22
  const MethodInfo *v36; // x1
  UILabel_o *v37; // x22
  UILabel_o *v38; // x22
  System_String_o *Name; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UILabel_o *v42; // x0
  UILabel_o *v43; // x22
  System_String_o *EffectExplanation; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UISprite_o *v47; // x21
  struct BoostEntity_o *v48; // x8
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v50; // x0
  System_String_o *v51; // x22
  const MethodInfo *v52; // x2
  UILabel_o *v53; // x22
  UILabel_o *v54; // x22
  System_String_o *v55; // x0
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UILabel_o *v58; // x0
  UILabel_o *v59; // x22
  System_String_o *v60; // x0
  UnityEngine_Component_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UISprite_o *v63; // x21
  struct BoostEntity_o *v64; // x8
  System_String_o *v65; // x22
  System_String_o *v66; // x0
  System_String_o *v67; // x22
  const MethodInfo *v68; // x2
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v70; // x0
  bool v71; // w1
  UILabel_o *v72; // x22
  UILabel_o *v73; // x22
  System_String_o *v74; // x0
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  UILabel_o *v77; // x0
  UILabel_o *v78; // x22
  System_String_o *v79; // x0
  UnityEngine_Component_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UISprite_o *v82; // x21
  struct BoostEntity_o *v83; // x8
  System_String_o *v84; // x22
  System_String_o *v85; // x0
  System_String_o *v86; // x22
  const MethodInfo *v87; // x1
  UnityEngine_Component_o *v88; // x0
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  UIWidget_o *v90; // x21
  BoostSupportRequestItemListViewItemDraw_c *v91; // x0
  int32_t *p_NAME_LABEL_WIDTH; // x8
  BoostSupportRequestItemListViewItemDraw_c *v93; // x0
  UnityEngine_Component_o *recommendationSprite; // x0
  _BOOL4 isRecommended; // w20
  UnityEngine_GameObject_o *v96; // x0
  UILabel_o *recommendationLabel; // x19
  System_String_o *v98; // x0
  int v99; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB168 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_2590, v12);
    sub_B16FFC(&StringLiteral_2591, v13);
    sub_B16FFC(&StringLiteral_2588, v14);
    byte_40FB168 = 1;
  }
  v99 = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2591, 0LL);
  if ( !consumptionLabel )
    goto LABEL_105;
  UILabel__set_text(consumptionLabel, v16, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_105;
  boostEntity = item->fields.boostEntity;
  if ( boostEntity )
  {
    skillId = boostEntity->fields.skillId;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_105;
  }
  else
  {
    skillId = 0;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_105;
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             skillId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v22 = mode - 1;
  v23 = (SkillEntity_o *)Entity;
  switch ( v22 )
  {
    case 0:
      nameLabel = this->fields.nameLabel;
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
      v25 = this->fields.nameLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2588, 0LL);
      if ( !v25 )
        goto LABEL_105;
      UILabel__set_text(v25, v26, 0LL);
      v27 = (UnityEngine_Component_o *)this->fields.nameLabel;
      if ( !v27 )
        goto LABEL_105;
      gameObject = UnityEngine_Component__get_gameObject(v27, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        gameObject,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_X_POS,
        0LL);
      detailLabel = this->fields.detailLabel;
      if ( !detailLabel )
        goto LABEL_105;
      UILabel__set_fontSize(
        detailLabel,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_FONT_SIZE,
        0LL);
      v30 = this->fields.detailLabel;
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2588, 0LL);
      if ( !v30 )
        goto LABEL_105;
      UILabel__set_text(v30, v31, 0LL);
      v32 = (UnityEngine_Component_o *)this->fields.detailLabel;
      if ( !v32 )
        goto LABEL_105;
      v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v33,
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
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v36);
      goto LABEL_61;
    case 1:
      v37 = this->fields.nameLabel;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v37 )
        goto LABEL_105;
      UILabel__set_fontSize(v37, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v23 )
        goto LABEL_105;
      v38 = this->fields.nameLabel;
      Name = SkillEntity__getName(v23, 0LL);
      if ( !v38 )
        goto LABEL_105;
      UILabel__set_text(v38, Name, 0LL);
      v40 = (UnityEngine_Component_o *)this->fields.nameLabel;
      if ( !v40 )
        goto LABEL_105;
      v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v41,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      v42 = this->fields.detailLabel;
      if ( !v42 )
        goto LABEL_105;
      UILabel__set_fontSize(v42, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE, 0LL);
      v43 = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation(v23, 0, 0LL);
      WrapControlText__textAdjust(
        v43,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      v45 = (UnityEngine_Component_o *)this->fields.detailLabel;
      if ( !v45 )
        goto LABEL_105;
      v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v46,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v47 = this->fields.servantFaceIcon;
      v48 = item->fields.boostEntity;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v48 )
        LODWORD(v48) = v48->fields.imageId;
      v99 = (int)v48;
      v50 = System_Int32__ToString((int32_t)&v99, 0LL);
      v51 = System_String__Concat_43743732(ASSIST_ICON_SPRITE_NAME, v50, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v47, v51, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v52);
      goto LABEL_79;
    case 2:
      v53 = this->fields.nameLabel;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v53 )
        goto LABEL_105;
      UILabel__set_fontSize(v53, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v23 )
        goto LABEL_105;
      v54 = this->fields.nameLabel;
      v55 = SkillEntity__getName(v23, 0LL);
      if ( !v54 )
        goto LABEL_105;
      UILabel__set_text(v54, v55, 0LL);
      v56 = (UnityEngine_Component_o *)this->fields.nameLabel;
      if ( !v56 )
        goto LABEL_105;
      v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v57,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      v58 = this->fields.detailLabel;
      if ( !v58 )
        goto LABEL_105;
      UILabel__set_fontSize(v58, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE, 0LL);
      v59 = this->fields.detailLabel;
      v60 = SkillEntity__getEffectExplanation(v23, 0, 0LL);
      WrapControlText__textAdjust(
        v59,
        v60,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      v61 = (UnityEngine_Component_o *)this->fields.detailLabel;
      if ( !v61 )
        goto LABEL_105;
      v62 = UnityEngine_Component__get_gameObject(v61, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v62,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v63 = this->fields.servantFaceIcon;
      v64 = item->fields.boostEntity;
      v65 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v64 )
        LODWORD(v64) = v64->fields.imageId;
      v99 = (int)v64;
      v66 = System_Int32__ToString((int32_t)&v99, 0LL);
      v67 = System_String__Concat_43743732(v65, v66, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v63, v67, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v68);
LABEL_61:
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_105;
      v70 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !v70 )
        goto LABEL_105;
      v71 = 1;
      break;
    case 3:
      v72 = this->fields.nameLabel;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      }
      if ( !v72 )
        goto LABEL_105;
      UILabel__set_fontSize(v72, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v23 )
        goto LABEL_105;
      v73 = this->fields.nameLabel;
      v74 = SkillEntity__getName(v23, 0LL);
      if ( !v73 )
        goto LABEL_105;
      UILabel__set_text(v73, v74, 0LL);
      v75 = (UnityEngine_Component_o *)this->fields.nameLabel;
      if ( !v75 )
        goto LABEL_105;
      v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v76,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      v77 = this->fields.detailLabel;
      if ( !v77 )
        goto LABEL_105;
      UILabel__set_fontSize(v77, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE, 0LL);
      v78 = this->fields.detailLabel;
      v79 = SkillEntity__getEffectExplanation(v23, 0, 0LL);
      WrapControlText__textAdjust(
        v78,
        v79,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      v80 = (UnityEngine_Component_o *)this->fields.detailLabel;
      if ( !v80 )
        goto LABEL_105;
      v81 = UnityEngine_Component__get_gameObject(v80, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v81,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v82 = this->fields.servantFaceIcon;
      v83 = item->fields.boostEntity;
      v84 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v83 )
        LODWORD(v83) = v83->fields.imageId;
      v99 = (int)v83;
      v85 = System_Int32__ToString((int32_t)&v99, 0LL);
      v86 = System_String__Concat_43743732(v84, v85, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBoostRequestIcon(v82, v86, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v87);
LABEL_79:
      v88 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v88 )
        goto LABEL_105;
      v70 = UnityEngine_Component__get_gameObject(v88, 0LL);
      if ( !v70 )
        goto LABEL_105;
      v71 = 0;
      break;
    default:
      goto LABEL_83;
  }
  UnityEngine_GameObject__SetActive(v70, v71, 0LL);
LABEL_83:
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity )
  {
    v90 = (UIWidget_o *)this->fields.nameLabel;
    if ( commonConsumeEntity->max_length )
    {
      v91 = BoostSupportRequestItemListViewItemDraw_TypeInfo;
      if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
        v91 = BoostSupportRequestItemListViewItemDraw_TypeInfo;
      }
      p_NAME_LABEL_WIDTH = &v91->static_fields->NAME_LABEL_WIDTH;
      if ( !v90 )
        goto LABEL_105;
      goto LABEL_95;
    }
  }
  else
  {
    v90 = (UIWidget_o *)this->fields.nameLabel;
  }
  v93 = BoostSupportRequestItemListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoostSupportRequestItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
    v93 = BoostSupportRequestItemListViewItemDraw_TypeInfo;
  }
  p_NAME_LABEL_WIDTH = &v93->static_fields->NAME_LABEL_WIDTH_WITHOUT_CONSUME_ITEM_DISPLAYED;
  if ( !v90 )
LABEL_105:
    sub_B170D4();
LABEL_95:
  UIWidget__set_width(v90, *p_NAME_LABEL_WIDTH, 0LL);
  recommendationSprite = (UnityEngine_Component_o *)this->fields.recommendationSprite;
  if ( !recommendationSprite )
    goto LABEL_105;
  isRecommended = item->fields.isRecommended;
  v96 = UnityEngine_Component__get_gameObject(recommendationSprite, 0LL);
  if ( !v96 )
    goto LABEL_105;
  if ( isRecommended )
  {
    UnityEngine_GameObject__SetActive(v96, 1, 0LL);
    recommendationLabel = this->fields.recommendationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2590, 0LL);
    if ( !recommendationLabel )
      goto LABEL_105;
    UILabel__set_text(recommendationLabel, v98, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(v96, 0, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  clsQuestCheck_o *v10; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  struct CommonConsumeEntity_array *commonConsumeEntity; // x24
  __int64 v14; // x21
  struct UISprite_array **p_itemIcon; // x23
  __int64 v16; // x25
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v18; // w26
  struct UISprite_array *v19; // x8
  __int64 v20; // x9
  UISprite_o *v21; // x21
  int32_t v22; // w22
  struct UILabel_array *v23; // x8
  __int64 v24; // x9
  UILabel_o *v25; // x21
  System_String_o *v26; // x0
  struct UILabel_array *v27; // x8
  UIWidget_o *v28; // x21
  const MethodInfo *v29; // x3
  int v30; // s0
  struct UISprite_array *v34; // x8
  UnityEngine_Behaviour_o *v35; // x0
  struct UILabel_array *v36; // x8
  UnityEngine_Behaviour_o *v37; // x0
  struct UISprite_array *v38; // x8
  __int64 v39; // x20
  struct UILabel_array *v40; // x8
  UILabel_o *v41; // x0
  struct UISprite_array *v42; // x8
  UnityEngine_Behaviour_o *v43; // x0
  struct UILabel_array *v44; // x8
  UnityEngine_Behaviour_o *v45; // x0
  struct UIGrid_o *consumeItemIconGrid; // x0

  if ( (byte_40FB16A & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v5);
    sub_B16FFC(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FB16A = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel )
    goto LABEL_59;
  gameObject = UnityEngine_Component__get_gameObject(consumptionLabel, 0LL);
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !item )
    goto LABEL_59;
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity && (v14 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
  {
    p_itemIcon = &this->fields.itemIcon;
    if ( (int)v14 > 0 )
    {
      v16 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v18 = v16 - 4;
        if ( (int)v16 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_42;
        v19 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v18 >= v19->max_length || v18 >= (unsigned int)v14 )
          goto LABEL_60;
        v20 = *((_QWORD *)&commonConsumeEntity->obj.klass + v16);
        if ( !v20 )
          break;
        v21 = (UISprite_o *)*((_QWORD *)&v19->obj.klass + v16);
        v22 = *(_DWORD *)(v20 + 28);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v10 = (clsQuestCheck_o *)AtlasManager__SetItem(v21, v22, 0LL);
        v23 = this->fields.itemNumLabel;
        if ( !v23 )
          break;
        if ( v18 >= v23->max_length || v18 >= commonConsumeEntity->max_length )
          goto LABEL_60;
        v24 = *((_QWORD *)&commonConsumeEntity->obj.klass + v16);
        if ( !v24 )
          break;
        v25 = (UILabel_o *)*((_QWORD *)&v23->obj.klass + v16);
        v26 = System_Int32__ToString((int)v24 + 32, 0LL);
        if ( !v25 )
          break;
        UILabel__set_text(v25, v26, 0LL);
        v27 = this->fields.itemNumLabel;
        if ( !v27 )
          break;
        if ( v18 >= v27->max_length )
          goto LABEL_60;
        v28 = (UIWidget_o *)*((_QWORD *)&v27->obj.klass + v16);
        if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
        }
        v10 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v18 >= commonConsumeEntity->max_length )
        {
LABEL_60:
          sub_B17100(v10, v11, v12);
          sub_B170A0();
        }
        if ( !v10 )
          break;
        if ( BoostFunctionUtility__IsEnoughUserItem(
               (BoostFunctionUtility_o *)v10,
               *((CommonConsumeEntity_o **)&commonConsumeEntity->obj.klass + v16),
               item->fields.usrItemEntityList,
               v29) )
        {
          *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
          if ( !v28 )
            break;
        }
        else
        {
          *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_red(0LL);
          if ( !v28 )
            break;
        }
        UIWidget__set_color(v28, *(UnityEngine_Color_o *)&v30, 0LL);
        v34 = *p_itemIcon;
        if ( !*p_itemIcon )
          break;
        if ( v18 >= v34->max_length )
          goto LABEL_60;
        v35 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v34->obj.klass + v16);
        if ( !v35 )
          break;
        UnityEngine_Behaviour__set_enabled(v35, 1, 0LL);
        v36 = this->fields.itemNumLabel;
        if ( !v36 )
          break;
        if ( v18 >= v36->max_length )
          goto LABEL_60;
        v37 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v36->obj.klass + v16);
        if ( !v37 )
          break;
        UnityEngine_Behaviour__set_enabled(v37, 1, 0LL);
        v14 = *(_QWORD *)&commonConsumeEntity->max_length;
        if ( (int)++v16 - 4 >= (int)v14 )
          goto LABEL_42;
      }
LABEL_59:
      sub_B170D4();
    }
LABEL_42:
    v38 = *p_itemIcon;
    if ( !*p_itemIcon )
      goto LABEL_59;
    v39 = 8LL * (int)v14 + 32;
    while ( (int)v14 < (signed int)v38->max_length )
    {
      v40 = this->fields.itemNumLabel;
      if ( !v40 )
        goto LABEL_59;
      if ( (unsigned int)v14 >= v40->max_length )
        goto LABEL_60;
      v41 = *(UILabel_o **)((char *)&v40->obj.klass + v39);
      if ( v41 )
      {
        UILabel__set_text(v41, (System_String_o *)StringLiteral_1, 0LL);
        v42 = *p_itemIcon;
        if ( *p_itemIcon )
        {
          if ( (unsigned int)v14 >= v42->max_length )
            goto LABEL_60;
          v43 = *(UnityEngine_Behaviour_o **)((char *)&v42->obj.klass + v39);
          if ( v43 )
          {
            UnityEngine_Behaviour__set_enabled(v43, 0, 0LL);
            v44 = this->fields.itemNumLabel;
            if ( v44 )
            {
              if ( (unsigned int)v14 >= v44->max_length )
                goto LABEL_60;
              v45 = *(UnityEngine_Behaviour_o **)((char *)&v44->obj.klass + v39);
              if ( v45 )
              {
                UnityEngine_Behaviour__set_enabled(v45, 0, 0LL);
                v38 = *p_itemIcon;
                LODWORD(v14) = v14 + 1;
                v39 += 8LL;
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
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v11);
  }
  consumeItemIconGrid = this->fields.consumeItemIconGrid;
  if ( !consumeItemIconGrid )
    goto LABEL_59;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))consumeItemIconGrid->klass->vtable._8_Reposition.method)(
    consumeItemIconGrid,
    consumeItemIconGrid->klass->vtable._9_ResetPosition.methodPtr);
}