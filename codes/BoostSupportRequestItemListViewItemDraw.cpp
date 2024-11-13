void __fastcall BoostSupportRequestItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *static_fields; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  struct BoostSupportRequestItemListViewItemDraw_StaticFields *v10; // x0

  if ( (byte_4B10D73 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17112/*"assist_icon_"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_17113/*"assist_icon_0"*/, v5, v6);
    byte_4B10D73 = 1;
  }
  static_fields = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_FONT_SIZE = xmmword_BD2A60;
  *(_OWORD *)&static_fields->TITLE_X_POS = xmmword_BD3D60;
  *(_QWORD *)&static_fields->NAME_LABEL_WIDTH = 0x1A4000000D8LL;
  v8 = StringLiteral_17112/*"assist_icon_"*/;
  static_fields->ASSIST_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_17112/*"assist_icon_"*/;
  sub_1BCA784(&static_fields->ASSIST_ICON_SPRITE_NAME, v8);
  v9 = StringLiteral_17113/*"assist_icon_0"*/;
  v10 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields;
  v10->ASSIST_ICON_SPRITE_NAME_NO_OPEN = (struct System_String_o *)StringLiteral_17113/*"assist_icon_0"*/;
  sub_1BCA784(&v10->ASSIST_ICON_SPRITE_NAME_NO_OPEN, v9);
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
  __int64 v2; // x2
  UnityEngine_Component_o *consumptionLabel; // x0
  struct UISprite_array *itemIcon; // x8
  __int64 v6; // x21
  il2cpp_array_size_t v7; // w22
  struct UILabel_array *itemNumLabel; // x8
  struct UISprite_array *v9; // x8
  struct UILabel_array *v10; // x8

  if ( (byte_4B10D71 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B10D71 = 1;
  }
  consumptionLabel = (UnityEngine_Component_o *)this->fields.consumptionLabel;
  if ( !consumptionLabel
    || (consumptionLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(consumptionLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)consumptionLabel, 0, 0LL),
        (itemIcon = this->fields.itemIcon) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(consumptionLabel, method);
  }
  v6 = 4LL;
  while ( 1 )
  {
    v7 = v6 - 4;
    if ( (int)v6 - 4 >= (signed int)itemIcon->max_length )
      break;
    itemNumLabel = this->fields.itemNumLabel;
    if ( !itemNumLabel )
      goto LABEL_18;
    if ( v7 >= itemNumLabel->max_length )
LABEL_20:
      sub_1BCAA44(consumptionLabel, method);
    consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&itemNumLabel->obj.klass + v6);
    if ( consumptionLabel )
    {
      UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v9 = this->fields.itemIcon;
      if ( v9 )
      {
        if ( v7 >= v9->max_length )
          goto LABEL_20;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v9->obj.klass + v6);
        if ( consumptionLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
          v10 = this->fields.itemNumLabel;
          if ( v10 )
          {
            if ( v7 >= v10->max_length )
              goto LABEL_20;
            consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v10->obj.klass + v6);
            if ( consumptionLabel )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
              itemIcon = this->fields.itemIcon;
              ++v6;
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
void __fastcall BoostSupportRequestItemListViewItemDraw__SetItem(
        BoostSupportRequestItemListViewItemDraw_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *consumptionLabel; // x22
  System_String_o *Instance; // x0
  __int64 skillId; // x1
  struct BoostEntity_o *boostEntity; // x8
  Il2CppObject *Entity; // x0
  int v28; // w8
  SkillEntity_o *v29; // x21
  UILabel_o *nameLabel; // x21
  __int64 v31; // x1
  UILabel_o *v32; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *detailLabel; // x21
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  UISprite_o *servantFaceIcon; // x21
  System_String_o *ASSIST_ICON_SPRITE_NAME_NO_OPEN; // x22
  const MethodInfo *v39; // x1
  UILabel_o *v40; // x22
  UILabel_o *v41; // x22
  UnityEngine_GameObject_o *v42; // x0
  UILabel_o *v43; // x22
  System_String_o *EffectExplanation; // x0
  UnityEngine_GameObject_o *v45; // x0
  UISprite_o *v46; // x21
  struct BoostEntity_o *v47; // x8
  System_String_o *ASSIST_ICON_SPRITE_NAME; // x22
  System_String_o *v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x22
  const MethodInfo *v52; // x2
  UILabel_o *v53; // x22
  UILabel_o *v54; // x22
  UnityEngine_GameObject_o *v55; // x0
  UILabel_o *v56; // x22
  System_String_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UISprite_o *v59; // x21
  struct BoostEntity_o *v60; // x8
  System_String_o *v61; // x22
  System_String_o *v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x22
  const MethodInfo *v65; // x2
  bool v66; // w1
  UILabel_o *v67; // x22
  UILabel_o *v68; // x22
  UnityEngine_GameObject_o *v69; // x0
  UILabel_o *v70; // x22
  System_String_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UISprite_o *v73; // x21
  struct BoostEntity_o *v74; // x8
  System_String_o *v75; // x22
  System_String_o *v76; // x0
  __int64 v77; // x1
  System_String_o *v78; // x22
  const MethodInfo *v79; // x1
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  struct UILabel_o *v81; // x21
  struct UILabel_o *v82; // x25
  int v83; // w22
  __int64 v84; // x9
  _BOOL4 isRecommended; // w20
  __int64 v86; // x1
  UILabel_o *recommendationLabel; // x19
  int v88; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B10D70 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&BoostSupportRequestItemListViewItemDraw_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_3102/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3103/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3100/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, v21, v22);
    byte_4B10D70 = 1;
  }
  v88 = 0;
  if ( !mode )
    return;
  consumptionLabel = this->fields.consumptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3103/*"BOOST_SUPPORT_REQUEST_USE_RECONFIRMATION_MENU_CONSUMPTION"*/, 0LL);
  if ( !consumptionLabel )
    goto LABEL_95;
  UILabel__set_text(consumptionLabel, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
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
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v28 = mode - 1;
  v29 = (SkillEntity_o *)Entity;
  switch ( v28 )
  {
    case 0:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      nameLabel = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(
                                        BoostSupportRequestItemListViewItemDraw_TypeInfo,
                                        skillId);
      if ( !nameLabel )
        goto LABEL_95;
      UILabel__set_fontSize(
        nameLabel,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_TITLE_FONT_SIZE,
        0LL);
      v32 = this->fields.nameLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3100/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !v32 )
        goto LABEL_95;
      UILabel__set_text(v32, Instance, 0LL);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3100/*"BOOST_SUPPORT_REQUEST_USE_INVALID_TITLE"*/, 0LL);
      if ( !detailLabel )
        goto LABEL_95;
      UILabel__set_text(detailLabel, Instance, 0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v35,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->INVALID_DETAIL_X_POS,
        0LL);
      servantFaceIcon = this->fields.servantFaceIcon;
      ASSIST_ICON_SPRITE_NAME_NO_OPEN = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME_NO_OPEN;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
      AtlasManager__SetBoostRequestIcon(servantFaceIcon, ASSIST_ICON_SPRITE_NAME_NO_OPEN, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v39);
      goto LABEL_53;
    case 1:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v40 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(
                                        BoostSupportRequestItemListViewItemDraw_TypeInfo,
                                        skillId);
      if ( !v40 )
        goto LABEL_95;
      UILabel__set_fontSize(v40, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v29 )
        goto LABEL_95;
      v41 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v29, 0LL);
      if ( !v41 )
        goto LABEL_95;
      UILabel__set_text(v41, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v42,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v43 = this->fields.detailLabel;
      EffectExplanation = SkillEntity__getEffectExplanation(v29, 0, 0LL);
      WrapControlText__textAdjust(
        v43,
        EffectExplanation,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v45,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v46 = this->fields.servantFaceIcon;
      v47 = item->fields.boostEntity;
      ASSIST_ICON_SPRITE_NAME = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v47 )
        LODWORD(v47) = v47->fields.imageId;
      v88 = (int)v47;
      v49 = System_Int32__ToString((int32_t)&v88, 0LL);
      v51 = System_String__Concat_62401220(ASSIST_ICON_SPRITE_NAME, v49, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v50);
      AtlasManager__SetBoostRequestIcon(v46, v51, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v52);
      goto LABEL_69;
    case 2:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v53 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(
                                        BoostSupportRequestItemListViewItemDraw_TypeInfo,
                                        skillId);
      if ( !v53 )
        goto LABEL_95;
      UILabel__set_fontSize(v53, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v29 )
        goto LABEL_95;
      v54 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v29, 0LL);
      if ( !v54 )
        goto LABEL_95;
      UILabel__set_text(v54, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v55,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v56 = this->fields.detailLabel;
      v57 = SkillEntity__getEffectExplanation(v29, 0, 0LL);
      WrapControlText__textAdjust(
        v56,
        v57,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v58,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v59 = this->fields.servantFaceIcon;
      v60 = item->fields.boostEntity;
      v61 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v60 )
        LODWORD(v60) = v60->fields.imageId;
      v88 = (int)v60;
      v62 = System_Int32__ToString((int32_t)&v88, 0LL);
      v64 = System_String__Concat_62401220(v61, v62, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63);
      AtlasManager__SetBoostRequestIcon(v59, v64, 0LL);
      BoostSupportRequestItemListViewItemDraw__setConsumeItemIconList(this, item, v65);
LABEL_53:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_95;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_95;
      v66 = 1;
      break;
    case 3:
      Instance = (System_String_o *)BoostSupportRequestItemListViewItemDraw_TypeInfo;
      v67 = this->fields.nameLabel;
      if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        Instance = (System_String_o *)j_il2cpp_runtime_class_init_0(
                                        BoostSupportRequestItemListViewItemDraw_TypeInfo,
                                        skillId);
      if ( !v67 )
        goto LABEL_95;
      UILabel__set_fontSize(v67, BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE, 0LL);
      if ( !v29 )
        goto LABEL_95;
      v68 = this->fields.nameLabel;
      Instance = SkillEntity__getName(v29, 0LL);
      if ( !v68 )
        goto LABEL_95;
      UILabel__set_text(v68, Instance, 0LL);
      Instance = (System_String_o *)this->fields.nameLabel;
      if ( !Instance )
        goto LABEL_95;
      v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v69,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_X_POS,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      UILabel__set_fontSize(
        (UILabel_o *)Instance,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0LL);
      v70 = this->fields.detailLabel;
      v71 = SkillEntity__getEffectExplanation(v29, 0, 0LL);
      WrapControlText__textAdjust(
        v70,
        v71,
        BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE,
        0,
        0,
        0LL);
      Instance = (System_String_o *)this->fields.detailLabel;
      if ( !Instance )
        goto LABEL_95;
      v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPositionX(
        v72,
        (float)BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->DETAIL_X_POS,
        0LL);
      v73 = this->fields.servantFaceIcon;
      v74 = item->fields.boostEntity;
      v75 = BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->ASSIST_ICON_SPRITE_NAME;
      if ( v74 )
        LODWORD(v74) = v74->fields.imageId;
      v88 = (int)v74;
      v76 = System_Int32__ToString((int32_t)&v88, 0LL);
      v78 = System_String__Concat_62401220(v75, v76, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v77);
      AtlasManager__SetBoostRequestIcon(v73, v78, 0LL);
      BoostSupportRequestItemListViewItemDraw__ConsumeItemIconOff(this, v79);
LABEL_69:
      Instance = (System_String_o *)this->fields.maskSprite;
      if ( !Instance )
        goto LABEL_95;
      Instance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_95;
      v66 = 0;
      break;
    default:
      goto LABEL_73;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v66, 0LL);
LABEL_73:
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( !commonConsumeEntity )
  {
    v81 = this->fields.nameLabel;
    goto LABEL_77;
  }
  v81 = this->fields.nameLabel;
  if ( !commonConsumeEntity->max_length )
  {
LABEL_77:
    v83 = 1;
    v82 = v81;
    v81 = 0LL;
    goto LABEL_78;
  }
  v82 = 0LL;
  v83 = 0;
LABEL_78:
  if ( !BoostSupportRequestItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoostSupportRequestItemListViewItemDraw_TypeInfo, skillId);
  if ( v83 )
    Instance = (System_String_o *)v82;
  else
    Instance = (System_String_o *)v81;
  if ( !Instance )
    goto LABEL_95;
  v84 = 32LL;
  if ( v83 )
    v84 = 36LL;
  UIWidget__set_width(
    (UIWidget_o *)Instance,
    *(int32_t *)((char *)&BoostSupportRequestItemListViewItemDraw_TypeInfo->static_fields->TITLE_FONT_SIZE + v84),
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3102/*"BOOST_SUPPORT_REQUEST_USE_RECOMMENDATION"*/, 0LL);
    if ( recommendationLabel )
    {
      UILabel__set_text(recommendationLabel, Instance, 0LL);
      return;
    }
LABEL_95:
    sub_1BCAA3C(Instance, skillId);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *consumptionLabel; // x0
  struct CommonConsumeEntity_array *commonConsumeEntity; // x23
  __int64 v11; // x21
  __int64 v12; // x24
  struct UILabel_array *itemNumLabel; // x8
  unsigned int v14; // w27
  struct UISprite_array *itemIcon; // x8
  __int64 v16; // x9
  UISprite_o *v17; // x21
  int32_t v18; // w22
  struct UILabel_array *v19; // x8
  __int64 v20; // x9
  UILabel_o *v21; // x21
  struct UILabel_array *v22; // x8
  UIWidget_o *v23; // x21
  float v24; // s1
  float v25; // s0
  float v26; // s3
  float v27; // s2
  struct UISprite_array *v28; // x8
  struct UILabel_array *v29; // x8
  struct UISprite_array *v30; // x8
  __int64 v31; // x20
  struct UILabel_array *v32; // x8
  struct UISprite_array *v33; // x8
  struct UILabel_array *v34; // x8

  if ( (byte_4B10D72 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B10D72 = 1;
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
  if ( commonConsumeEntity && (v11 = *(_QWORD *)&commonConsumeEntity->max_length) != 0 )
  {
    if ( (int)v11 >= 1 )
    {
      v12 = 4LL;
      while ( 1 )
      {
        itemNumLabel = this->fields.itemNumLabel;
        if ( !itemNumLabel )
          break;
        v14 = v12 - 4;
        if ( (int)v12 - 4 >= (signed int)itemNumLabel->max_length )
          goto LABEL_38;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          break;
        if ( v14 >= itemIcon->max_length || v14 >= (unsigned int)v11 )
LABEL_56:
          sub_1BCAA44(consumptionLabel, item);
        v16 = *((_QWORD *)&commonConsumeEntity->obj.klass + v12);
        if ( !v16 )
          break;
        v17 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v12);
        v18 = *(_DWORD *)(v16 + 28);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
        consumptionLabel = (UnityEngine_Component_o *)AtlasManager__SetItem(v17, v18, 0LL);
        v19 = this->fields.itemNumLabel;
        if ( !v19 )
          break;
        if ( v14 >= v19->max_length || v14 >= commonConsumeEntity->max_length )
          goto LABEL_56;
        v20 = *((_QWORD *)&commonConsumeEntity->obj.klass + v12);
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
          goto LABEL_56;
        v23 = (UIWidget_o *)*((_QWORD *)&v22->obj.klass + v12);
        consumptionLabel = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
        if ( v14 >= commonConsumeEntity->max_length )
          goto LABEL_56;
        if ( !consumptionLabel )
          break;
        consumptionLabel = (UnityEngine_Component_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                        (BoostFunctionUtility_o *)consumptionLabel,
                                                        *((CommonConsumeEntity_o **)&commonConsumeEntity->obj.klass + v12),
                                                        item->fields.usrItemEntityList,
                                                        0LL);
        v24 = ((unsigned __int8)consumptionLabel & 1) != 0 ? 1.0 : 0.0;
        if ( !v23 )
          break;
        v25 = 1.0;
        v26 = 1.0;
        v27 = v24;
        UIWidget__set_color(v23, *(UnityEngine_Color_o *)(&v24 - 1), 0LL);
        v28 = this->fields.itemIcon;
        if ( !v28 )
          break;
        if ( v14 >= v28->max_length )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v28->obj.klass + v12);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v29 = this->fields.itemNumLabel;
        if ( !v29 )
          break;
        if ( v14 >= v29->max_length )
          goto LABEL_56;
        consumptionLabel = (UnityEngine_Component_o *)*((_QWORD *)&v29->obj.klass + v12);
        if ( !consumptionLabel )
          break;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 1, 0LL);
        v11 = *(_QWORD *)&commonConsumeEntity->max_length;
        if ( (int)++v12 - 4 >= (int)v11 )
          goto LABEL_38;
      }
LABEL_55:
      sub_1BCAA3C(consumptionLabel, item);
    }
LABEL_38:
    v30 = this->fields.itemIcon;
    if ( !v30 )
      goto LABEL_55;
    v31 = 8LL * (int)v11 + 32;
    while ( (int)v11 < (signed int)v30->max_length )
    {
      v32 = this->fields.itemNumLabel;
      if ( !v32 )
        goto LABEL_55;
      if ( (unsigned int)v11 >= v32->max_length )
        goto LABEL_56;
      consumptionLabel = *(UnityEngine_Component_o **)((char *)&v32->obj.klass + v31);
      if ( consumptionLabel )
      {
        UILabel__set_text((UILabel_o *)consumptionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v33 = this->fields.itemIcon;
        if ( v33 )
        {
          if ( (unsigned int)v11 >= v33->max_length )
            goto LABEL_56;
          consumptionLabel = *(UnityEngine_Component_o **)((char *)&v33->obj.klass + v31);
          if ( consumptionLabel )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
            v34 = this->fields.itemNumLabel;
            if ( v34 )
            {
              if ( (unsigned int)v11 >= v34->max_length )
                goto LABEL_56;
              consumptionLabel = *(UnityEngine_Component_o **)((char *)&v34->obj.klass + v31);
              if ( consumptionLabel )
              {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)consumptionLabel, 0, 0LL);
                v30 = this->fields.itemIcon;
                LODWORD(v11) = v11 + 1;
                v31 += 8LL;
                if ( v30 )
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