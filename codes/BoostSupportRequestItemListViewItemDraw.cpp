void __fastcall BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v5; // x0

  if ( (byte_49F74C3 & 1) == 0 )
  {
    sub_1B640C8(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_16872/*"assist_icon_"*/, v2);
    sub_1B640C8(&StringLiteral_16873/*"assist_icon_0"*/, v3);
    byte_49F74C3 = 1;
  }
  static_fields = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_FONT_SIZE = xmmword_BA30B0;
  *(_OWORD *)&static_fields->TITLE_X_POS = xmmword_BA4330;
  *(_QWORD *)&static_fields->NAME_LABEL_WIDTH = 0x1A4000000D8LL;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16872/*"assist_icon_"*/;
  sub_1B6406C(&static_fields->ASSIST_ICON_SPRITE_NAME);
  v5 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v5->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16873/*"assist_icon_0"*/;
  sub_1B6406C(&v5->ASSIST_ICON_SPRITE_NAME_NO_OPEN);
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
  __int64 v5; // x21
  il2cpp_array_size_t v6; // w22
  struct UILabel_array *itemNumLabel; // x8
  struct UISprite_array *v8; // x8
  struct UILabel_array *v9; // x8

  if ( (byte_49F74C1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F74C1 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_1B64324(consumptionLabel);
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
LABEL_20:
      sub_1B6432C();
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
  struct BoostEntity_o *boostEntity; // x8
  int32_t skillId; // w1
  Il2CppObject *Entity; // x0
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
  struct BoostEntity_o *v37; // x8
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v39; // x0
  System_String_o *v40; // x22
  const MethodInfo *v41; // x2
  UILabel_o *v42; // x22
  UILabel_o *v43; // x22
  UnityEngine_GameObject_o *v44; // x0
  UILabel_o *v45; // x22
  System_String_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UISprite_o *v48; // x21
  struct BoostEntity_o *v49; // x8
  System_String_o *v50; // x22
  System_String_o *v51; // x0
  System_String_o *v52; // x22
  const MethodInfo *v53; // x2
  bool v54; // w1
  UILabel_o *v55; // x22
  UILabel_o *v56; // x22
  UnityEngine_GameObject_o *v57; // x0
  UILabel_o *v58; // x22
  System_String_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UISprite_o *v61; // x21
  struct BoostEntity_o *v62; // x8
  System_String_o *v63; // x22
  System_String_o *v64; // x0
  System_String_o *v65; // x22
  const MethodInfo *v66; // x1
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  struct UILabel_o *v68; // x21
  struct UILabel_o *v69; // x25
  int v70; // w22
  __int64 v71; // x9
  _BOOL4 isRecommended; // w20
  UILabel_o *recommendationLabel; // x19
  int v74; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F74C0 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_3059/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, v12);
    sub_1B640C8(&StringLiteral_3060/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, v13);
    sub_1B640C8(&StringLiteral_3057/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, v14);
    byte_49F74C0 = 1;
  }
  v74 = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3060/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_95;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
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
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v20 = mode - 1;
  v21 = (SkillEntity_o *)Entity;
  switch ( v20 )
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
        0LL);
      v23 = this->fields.nameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3057/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !v23 )
        goto LABEL_95;
      UILabel__set_text(v23, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        gameObject,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_FONT_SIZE,
        0LL);
      detailLabel = this->fields.detailLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3057/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !detailLabel )
        goto LABEL_95;
      UILabel__set_text(detailLabel, Instance, 0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v26,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_X_POS,
        0LL);
      servantFaceIcon = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME_NO_OPEN = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME_NO_OPEN;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBoostRequestIcon(servantFaceIcon, ASSIST_ICON_SPRITE_NAME_NO_OPEN, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v29);
      goto LABEL_53;
    case 1:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v30 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      if ( !v30 )
        goto LABEL_95;
      UILabel__set_fontSize(v30, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v21 )
        goto LABEL_95;
      v31 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v21, 0LL);
      if ( !v31 )
        goto LABEL_95;
      UILabel__set_text(v31, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v32,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
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
        goto LABEL_95;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v35,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v36 = this->fields.servantFaceIcon;
      v37 = item->fields.boostEntity;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v37 )
        LODWORD(v37) = v37->fields.imageId;
      v74 = (int)v37;
      v39 = System_Int32__ToString((int32_t)&v74, 0LL);
      v40 = System_String__Concat_61375396(ASSIST_ICON_SPRITE_NAME, v39, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBoostRequestIcon(v36, v40, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v41);
      goto LABEL_69;
    case 2:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v42 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      if ( !v42 )
        goto LABEL_95;
      UILabel__set_fontSize(v42, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v21 )
        goto LABEL_95;
      v43 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v21, 0LL);
      if ( !v43 )
        goto LABEL_95;
      UILabel__set_text(v43, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v44,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v45 = this->fields.detailLabel;
      v46 = SkillEntity__getEffectExplanation(v21, 0, 0LL);
      WrapControlText__textAdjust(
        v45,
        v46,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v47,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v48 = this->fields.servantFaceIcon;
      v49 = item->fields.boostEntity;
      v50 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v49 )
        LODWORD(v49) = v49->fields.imageId;
      v74 = (int)v49;
      v51 = System_Int32__ToString((int32_t)&v74, 0LL);
      v52 = System_String__Concat_61375396(v50, v51, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBoostRequestIcon(v48, v52, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v53);
LABEL_53:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_95;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_95;
      v54 = 1;
      break;
    case 3:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v55 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
      if ( !v55 )
        goto LABEL_95;
      UILabel__set_fontSize(v55, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v21 )
        goto LABEL_95;
      v56 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v21, 0LL);
      if ( !v56 )
        goto LABEL_95;
      UILabel__set_text(v56, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v57,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v58 = this->fields.detailLabel;
      v59 = SkillEntity__getEffectExplanation(v21, 0, 0LL);
      WrapControlText__textAdjust(
        v58,
        v59,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v60,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v61 = this->fields.servantFaceIcon;
      v62 = item->fields.boostEntity;
      v63 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v62 )
        LODWORD(v62) = v62->fields.imageId;
      v74 = (int)v62;
      v64 = System_Int32__ToString((int32_t)&v74, 0LL);
      v65 = System_String__Concat_61375396(v63, v64, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBoostRequestIcon(v61, v65, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v66);
LABEL_69:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_95;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_95;
      v54 = 0;
      break;
    default:
      goto LABEL_73;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v54, 0LL);
LABEL_73:
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( !commonConsumeEntity )
  {
    v68 = this->fields.nameLabel;
    goto LABEL_77;
  }
  v68 = this->fields.nameLabel;
  if ( !commonConsumeEntity->max_length )
  {
LABEL_77:
    v70 = 1;
    v69 = v68;
    v68 = 0LL;
    goto LABEL_78;
  }
  v69 = 0LL;
  v70 = 0;
LABEL_78:
  if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo);
  if ( v70 )
    Instance = (System_String_o *)v69;
  else
    Instance = (System_String_o *)v68;
  if ( !Instance )
    goto LABEL_95;
  v71 = 32LL;
  if ( v70 )
    v71 = 36LL;
  UIWidget__set_width(
    (UIWidget_o *)Instance,
    *(int32_t *)((char *)&BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE + v71),
    0LL);
  Instance = (System_String_o *)this->fields.recommendationSprite;
  if ( !Instance )
    goto LABEL_95;
  isRecommended = item->fields.isRecommended;
  Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  if ( isRecommended )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    recommendationLabel = this->fields.recommendationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3059/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
    if ( recommendationLabel )
    {
      UILabel__set_text(recommendationLabel, Instance, 0LL);
      return;
    }
LABEL_95:
    sub_1B64324(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
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
  UnityEngine_Component_o *consumptionLabel; // x0
  const MethodInfo *v8; // x1
  struct CommonConsumeEntity_array *commonConsumeEntity; // x23
  __int64 v10; // x21
  __int64 v11; // x24
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v13; // w27
  struct UISprite_array *itemIcon; // x8
  __int64 v15; // x9
  UISprite_o *v16; // x21
  int32_t v17; // w22
  struct UILabel_array *v18; // x8
  __int64 v19; // x9
  UILabel_o *v20; // x21
  struct UILabel_array *v21; // x8
  UIWidget_o *v22; // x21
  float v23; // s1
  float v24; // s0
  float v25; // s3
  float v26; // s2
  struct UISprite_array *v27; // x8
  struct UILabel_array *v28; // x8
  struct UISprite_array *v29; // x8
  __int64 v30; // x20
  struct UILabel_array *v31; // x8
  struct UISprite_array *v32; // x8
  struct UILabel_array *v33; // x8

  if ( (byte_49F74C2 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F74C2 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel )
    goto LABEL_55;
  consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL);
  if ( !consumptionLabel )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 1, 0LL);
  if ( !item )
    goto LABEL_55;
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity && (v10 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
  {
    if ( (int)v10 >= 1 )
    {
      v11 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v13 = v11 - 4;
        if ( (int)v11 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_38;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          break;
        if ( v13 >= itemIcon->max_length || v13 >= (unsigned int)v10 )
LABEL_56:
          sub_1B6432C();
        v15 = *((_QWORD *)&commonConsumeEntity->obj.klass + v11);
        if ( !v15 )
          break;
        v16 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v11);
        v17 = *(_DWORD *)(v15 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v16, v17, 0LL);
        v18 = this->fields.itemNumLabel;
        if ( !v18 )
          break;
        if ( v13 >= v18->max_length || v13 >= commonConsumeEntity->max_length )
          goto LABEL_56;
        v19 = *((_QWORD *)&commonConsumeEntity->obj.klass + v11);
        if ( !v19 )
          break;
        v20 = (UILabel_o *)*((_QWORD *)&v18->obj.klass + v11);
        consumptionLabel = (UnityEngine_Component_o *)System_Int32__ToString((int)v19 + 32, 0LL);
        if ( !v20 )
          break;
        UILabel__set_text(v20, (System_String_o *)consumptionLabel, 0LL);
        v21 = this->fields.itemNumLabel;
        if ( !v21 )
          break;
        if ( v13 >= v21->max_length )
          goto LABEL_56;
        v22 = (UIWidget_o *)*((_QWORD *)&v21->obj.klass + v11);
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v13 >= commonConsumeEntity->max_length )
          goto LABEL_56;
        if ( !consumptionLabel )
          break;
        consumptionLabel = (UnityEngine_Component_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                        (BoostFunctionUtility_o *)consumptionLabel,
                                                        *((CommonConsumeEntity_o **)&commonConsumeEntity->obj.klass + v11),
                                                        item->fields.usrItemEntityList,
                                                        0LL);
        v23 = ((unsigned __int8)consumptionLabel & 1) != 0 ? 1.0 : 0.0;
        if ( !v22 )
          break;
        v24 = 1.0;
        v25 = 1.0;
        v26 = v23;
        UIWidget__set_color(v22, *(UnityEngine_Color_o *)(&v23 - 1), 0LL);
        v27 = this->fields.itemIcon;
        if ( !v27 )
          break;
        if ( v13 >= v27->max_length )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v27->obj.klass + v11);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v28 = this->fields.itemNumLabel;
        if ( !v28 )
          break;
        if ( v13 >= v28->max_length )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v28->obj.klass + v11);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v10 = *(_QWORD *)&commonConsumeEntity->max_length;
        if ( (int)++v11 - 4 >= (int)v10 )
          goto LABEL_38;
      }
LABEL_55:
      sub_1B64324(consumptionLabel);
    }
LABEL_38:
    v29 = this->fields.itemIcon;
    if ( !v29 )
      goto LABEL_55;
    v30 = 8LL * (int)v10 + 32;
    while ( (int)v10 < (signed int)v29->max_length )
    {
      v31 = this->fields.itemNumLabel;
      if ( !v31 )
        goto LABEL_55;
      if ( (unsigned int)v10 >= v31->max_length )
        goto LABEL_56;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v31->obj.klass + v30);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v32 = this->fields.itemIcon;
        if ( v32 )
        {
          if ( (unsigned int)v10 >= v32->max_length )
            goto LABEL_56;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v32->obj.klass + v30);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v33 = this->fields.itemNumLabel;
            if ( v33 )
            {
              if ( (unsigned int)v10 >= v33->max_length )
                goto LABEL_56;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v33->obj.klass + v30);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v29 = this->fields.itemIcon;
                LODWORD(v10) = v10 + 1;
                v30 += 8LL;
                if ( v29 )
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
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v8);
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumeItemIconGrid;
  if ( !consumptionLabel )
    goto LABEL_55;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))consumptionLabel->klass[1]._1.castClass)(
    consumptionLabel,
    consumptionLabel->klass[1]._1.declaringType);
}