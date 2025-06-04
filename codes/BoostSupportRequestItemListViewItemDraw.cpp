void __fastcall BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v5; // x0

  if ( (byte_4AFC16A & 1) == 0 )
  {
    sub_1BC3008(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_16770/*"assist_icon_"*/, v2);
    sub_1BC3008(&StringLiteral_16771/*"assist_icon_0"*/, v3);
    byte_4AFC16A = 1;
  }
  static_fields = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_FONT_SIZE = xmmword_BDE760;
  *(_OWORD *)&static_fields->TITLE_X_POS = xmmword_BDFAE0;
  *(_QWORD *)&static_fields->NAME_LABEL_WIDTH = 0x1A4000000D8LL;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_16770/*"assist_icon_"*/;
  sub_1BC2FAC(&static_fields->ASSIST_ICON_SPRITE_NAME);
  v5 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v5->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_16771/*"assist_icon_0"*/;
  sub_1BC2FAC(&v5->ASSIST_ICON_SPRITE_NAME_NO_OPEN);
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

  if ( (byte_4AFC168 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFC168 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_1BC3264(consumptionLabel, method);
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
      sub_1BC326C();
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
  __int64 skillId; // x1
  struct BoostEntity_o *boostEntity; // x8
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

  if ( (byte_4AFC167 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&StringLiteral_2956/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, v12);
    sub_1BC3008(&StringLiteral_2957/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, v13);
    sub_1BC3008(&StringLiteral_2954/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, v14);
    byte_4AFC167 = 1;
  }
  v74 = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_95;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !item )
    goto LABEL_95;
  boostEntity = item->fields.boostEntity;
  if ( boostEntity )
  {
    skillId = (unsigned int)boostEntity->fields.skillId;
    if ( !Instance )
      goto LABEL_95;
  }
  else
  {
    skillId = 0LL;
    if ( !Instance )
      goto LABEL_95;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             skillId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
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
      AtlasManager__SetExclusiveShopIcon(servantFaceIcon, ASSIST_ICON_SPRITE_NAME_NO_OPEN, 0LL);
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
      v40 = System_String__Concat_62348648(ASSIST_ICON_SPRITE_NAME, v39, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetExclusiveShopIcon(v36, v40, 0LL);
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
      v52 = System_String__Concat_62348648(v50, v51, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetExclusiveShopIcon(v48, v52, 0LL);
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
      v65 = System_String__Concat_62348648(v63, v64, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetExclusiveShopIcon(v61, v65, 0LL);
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
    if ( recommendationLabel )
    {
      UILabel__set_text(recommendationLabel, Instance, 0LL);
      return;
    }
LABEL_95:
    sub_1BC3264(Instance, skillId);
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
  struct CommonConsumeEntity_array *commonConsumeEntity; // x23
  __int64 v9; // x21
  __int64 v10; // x24
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v12; // w27
  struct UISprite_array *itemIcon; // x8
  __int64 v14; // x9
  UISprite_o *v15; // x21
  int32_t v16; // w22
  struct UILabel_array *v17; // x8
  __int64 v18; // x9
  UILabel_o *v19; // x21
  struct UILabel_array *v20; // x8
  UIWidget_o *v21; // x21
  float v22; // s1
  float v23; // s0
  float v24; // s3
  float v25; // s2
  struct UISprite_array *v26; // x8
  struct UILabel_array *v27; // x8
  struct UISprite_array *v28; // x8
  __int64 v29; // x20
  struct UILabel_array *v30; // x8
  struct UISprite_array *v31; // x8
  struct UILabel_array *v32; // x8

  if ( (byte_4AFC169 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4AFC169 = 1;
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
  if ( commonConsumeEntity && (v9 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
  {
    if ( (int)v9 >= 1 )
    {
      v10 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v12 = v10 - 4;
        if ( (int)v10 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_38;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          break;
        if ( v12 >= itemIcon->max_length || v12 >= (unsigned int)v9 )
LABEL_56:
          sub_1BC326C();
        v14 = *((_QWORD *)&commonConsumeEntity->obj.klass + v10);
        if ( !v14 )
          break;
        v15 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v10);
        v16 = *(_DWORD *)(v14 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v15, v16, 0LL);
        v17 = this->fields.itemNumLabel;
        if ( !v17 )
          break;
        if ( v12 >= v17->max_length || v12 >= commonConsumeEntity->max_length )
          goto LABEL_56;
        v18 = *((_QWORD *)&commonConsumeEntity->obj.klass + v10);
        if ( !v18 )
          break;
        v19 = (UILabel_o *)*((_QWORD *)&v17->obj.klass + v10);
        consumptionLabel = (UnityEngine_Component_o *)System_Int32__ToString((int)v18 + 32, 0LL);
        if ( !v19 )
          break;
        UILabel__set_text(v19, (System_String_o *)consumptionLabel, 0LL);
        v20 = this->fields.itemNumLabel;
        if ( !v20 )
          break;
        if ( v12 >= v20->max_length )
          goto LABEL_56;
        v21 = (UIWidget_o *)*((_QWORD *)&v20->obj.klass + v10);
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v12 >= commonConsumeEntity->max_length )
          goto LABEL_56;
        if ( !consumptionLabel )
          break;
        consumptionLabel = (UnityEngine_Component_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                        (BoostFunctionUtility_o *)consumptionLabel,
                                                        *((CommonConsumeEntity_o **)&commonConsumeEntity->obj.klass + v10),
                                                        item->fields.usrItemEntityList,
                                                        0LL);
        v22 = ((unsigned __int8)consumptionLabel & 1) != 0 ? 1.0 : 0.0;
        if ( !v21 )
          break;
        v23 = 1.0;
        v24 = 1.0;
        v25 = v22;
        UIWidget__set_color(v21, *(UnityEngine_Color_o *)(&v22 - 1), 0LL);
        v26 = this->fields.itemIcon;
        if ( !v26 )
          break;
        if ( v12 >= v26->max_length )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v26->obj.klass + v10);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v27 = this->fields.itemNumLabel;
        if ( !v27 )
          break;
        if ( v12 >= v27->max_length )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v27->obj.klass + v10);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v9 = *(_QWORD *)&commonConsumeEntity->max_length;
        if ( (int)++v10 - 4 >= (int)v9 )
          goto LABEL_38;
      }
LABEL_55:
      sub_1BC3264(consumptionLabel, item);
    }
LABEL_38:
    v28 = this->fields.itemIcon;
    if ( !v28 )
      goto LABEL_55;
    v29 = 8LL * (int)v9 + 32;
    while ( (int)v9 < (signed int)v28->max_length )
    {
      v30 = this->fields.itemNumLabel;
      if ( !v30 )
        goto LABEL_55;
      if ( (unsigned int)v9 >= v30->max_length )
        goto LABEL_56;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v30->obj.klass + v29);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v31 = this->fields.itemIcon;
        if ( v31 )
        {
          if ( (unsigned int)v9 >= v31->max_length )
            goto LABEL_56;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v31->obj.klass + v29);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v32 = this->fields.itemNumLabel;
            if ( v32 )
            {
              if ( (unsigned int)v9 >= v32->max_length )
                goto LABEL_56;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v32->obj.klass + v29);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v28 = this->fields.itemIcon;
                LODWORD(v9) = v9 + 1;
                v29 += 8LL;
                if ( v28 )
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
    BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, (const MethodInfo *)item);
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumeItemIconGrid;
  if ( !consumptionLabel )
    goto LABEL_55;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))consumptionLabel->klass[1]._1.castClass)(
    consumptionLabel,
    consumptionLabel->klass[1]._1.declaringType);
}