void ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  if ( (byte_4E010ED & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    byte_4E010ED = 1;
  }
  *ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields = (struct ServantStatusFlavorTextListViewItemDrawParam_StaticFields)0xFFFFFF8F0000009ALL;
}


void ServantStatusFlavorTextListViewItemDrawParam___ctor(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.transformNameAddHeight = 0x100000000ELL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusFlavorTextListViewItemDrawParam__Awake(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *titleRoot; // x0
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *mainContentsRoot; // x0

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1CE6958(this, method);
  titleRoot = this->fields.titleRoot;
  this->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleRoot, 0);
  mainContentsRoot = this->fields.mainContentsRoot;
  this->fields.titleRootPosYBase = LocalPositionY;
  this->fields.mainContentsRootPosYBase = GameObjectExtensions__GetLocalPositionY(mainContentsRoot, 0);
}


int32_t ServantStatusFlavorTextListViewItemDrawParam__GetKind(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  return 5;
}


void ServantStatusFlavorTextListViewItemDrawParam__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  float v7; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v11; // s8
  float v12; // s8
  UILabel_o *v13; // x19

  if ( (byte_4E010EC & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    sub_1CE6700(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E010EC = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0);
        return;
      }
LABEL_45:
      sub_1CE6958(titleServantBase, title);
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( !Component_object )
        goto LABEL_45;
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0);
    }
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 2, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_alignment((UILabel_o *)titleServantBase, 2, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, title, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleServantBase->klass[2]._1.parent)(
      titleServantBase,
      titleServantBase->klass[2]._1.generic_class);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    LODWORD(v7) = COERCE_UNSIGNED_INT128(
                    ((long double (__fastcall *)(UnityEngine_GameObject_o *, _QWORD))*(_QWORD *)&titleServantBase->klass[1]._2.field_count)(
                      titleServantBase,
                      *(_QWORD *)&titleServantBase->klass[1]._2.interfaces_count));
    if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v7 >= (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleServantBase, 0);
      if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v12 = (float)(1.0 - v11)
          * (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0);
      TITLE_NAME_LEFT_POS = v12
                          + (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 0, 0);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      UILabel__set_alignment((UILabel_o *)titleServantBase, 1, 0);
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
      titleName = (UIWidget_o *)this->fields.titleName;
      if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      if ( !titleName )
        goto LABEL_45;
      UIWidget__set_width(
        titleName,
        ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0);
    titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
    v13 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    if ( !v13 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v13,
      ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0,
      0);
  }
}


void ServantStatusFlavorTextListViewItemDrawParam__SetItem(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0
  UnityEngine_Component_o *gameObject; // x0
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  const MethodInfo *v14; // x1
  UILabel_o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t v17; // w21
  float v18; // s1
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( (item->fields._IsTransformServant_k__BackingField || item->fields.tempTransformLimitCountSetting)
      && ((transformInfoBefore = item->fields.transformInfoBefore) == 0
       || !ServantEntity_TransformInfo__IsNotProfileParameterChange(transformInfoBefore, 0)) )
    {
      transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
      TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, (const MethodInfo *)item);
      if ( transformNameLabel )
      {
        UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
        transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
        TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, v14);
        if ( transformNameSprite )
        {
          UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.transformNameSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              v15 = this->fields.transformNameLabel;
              gameObject = (UnityEngine_Component_o *)ServantStatusListViewItem__GetTransformName(item, v16);
              if ( v15 )
              {
                UILabel__set_text(v15, (System_String_o *)gameObject, 0);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.mainContentsRoot,
                  this->fields.mainContentsRootPosYBase - (float)this->fields.transformNameOffsetY,
                  0);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.titleRoot,
                  this->fields.titleRootPosYBase + (float)((float)this->fields.transformNameAddHeight * 0.5),
                  0);
                gameObject = (UnityEngine_Component_o *)this->fields.baseSprite;
                if ( gameObject )
                {
                  v17 = this->fields.transformNameAddHeight + this->fields.baseSpriteHeightBase;
                  UIWidget__set_height((UIWidget_o *)gameObject, v17, 0);
                  gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
                  if ( gameObject )
                  {
                    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
                    gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
                    if ( gameObject )
                    {
                      v18 = (float)v17;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, size, 0);
                      goto LABEL_20;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)this->fields.transformNameSprite;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
LABEL_20:
          ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o *, ServantStatusListViewItem_o *, const MethodInfo *))this->klass->vtable._8_UpdateParameter.methodPtr)(
            this,
            item,
            this->klass->vtable._8_UpdateParameter.method);
          return;
        }
      }
    }
    sub_1CE6958(gameObject, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        int32_t power,
        int32_t defense,
        int32_t agility,
        int32_t magic,
        int32_t luck,
        int32_t np,
        const MethodInfo *method)
{
  ServantStatusParameterGauge_o *powerGauge; // x0

  powerGauge = this->fields.powerGauge;
  if ( !powerGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(powerGauge, 0, power, 0);
  powerGauge = this->fields.defenseGauge;
  if ( !powerGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(powerGauge, 1, defense, 0);
  powerGauge = this->fields.agilityGauge;
  if ( !powerGauge
    || (ServantStatusParameterGauge__Set(powerGauge, 2, agility, 0), (powerGauge = this->fields.magicGauge) == 0)
    || (ServantStatusParameterGauge__Set(powerGauge, 3, magic, 0), (powerGauge = this->fields.luckGauge) == 0)
    || (ServantStatusParameterGauge__Set(powerGauge, 4, luck, 0), (powerGauge = this->fields.npGauge) == 0) )
  {
LABEL_8:
    sub_1CE6958(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, 0);
}


void ServantStatusFlavorTextListViewItemDrawParam__UpdateParameter(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawParam_o **v4; // x19
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0
  int CardImageLimitCountStageSealAfterAtStageLimitCount; // w21
  Il2CppObject *Master_object; // x22
  const MethodInfo *v8; // x1
  System_String_o *CondTitle; // x0
  int *OverwriteServantParameter; // x0
  const MethodInfo *v11; // x7
  int32_t v12; // w1
  int32_t ServantParameterLimitCount; // w21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v15; // x1
  int32_t defenseGauge; // w1
  int32_t defenseGauge_high; // w2
  int32_t agilityGauge; // w3
  int32_t agilityGauge_high; // w4
  int32_t magicGauge; // w5
  int32_t magicGauge_high; // w6
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8
  struct ServantLimitEntity_o *v23; // x8
  struct ServantLimitEntity_o *v24; // x8
  struct ServantLimitEntity_o *v25; // x8
  struct ServantLimitEntity_o *v26; // x8
  struct ServantLimitEntity_o *v27; // x8
  struct ServantLimitEntity_o *svtLimitEntity; // x8
  struct ServantLimitEntity_o *v29; // x8
  struct ServantLimitEntity_o *v30; // x8
  struct ServantLimitEntity_o *v31; // x8
  struct ServantLimitEntity_o *v32; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = (ServantStatusFlavorTextListViewItemDrawParam_o **)this;
  if ( (byte_4E010EB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&string_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E010EB = 1;
  }
  entity = 0;
  if ( !item )
    goto LABEL_53;
  if ( item->fields._IsTransformed_k__BackingField )
  {
    transformInfoBefore = item->fields.transformInfoBefore;
    if ( !transformInfoBefore || !ServantEntity_TransformInfo__IsNotProfileParameterChange(transformInfoBefore, 0) )
    {
      this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                                 v4,
                                                                 string_TypeInfo->static_fields->Empty,
                                                                 (*v4)[2].fields.agilityGauge);
      transformedServantLimitEntity = item->fields.transformedServantLimitEntity;
      if ( !transformedServantLimitEntity )
        goto LABEL_53;
      this = v4[6];
      if ( !this )
        goto LABEL_53;
      ServantStatusParameterGauge__Set(
        (ServantStatusParameterGauge_o *)this,
        0,
        transformedServantLimitEntity->fields.power,
        0);
      v23 = item->fields.transformedServantLimitEntity;
      if ( !v23 )
        goto LABEL_53;
      this = v4[7];
      if ( !this )
        goto LABEL_53;
      ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v23->fields.defense, 0);
      v24 = item->fields.transformedServantLimitEntity;
      if ( !v24 )
        goto LABEL_53;
      this = v4[8];
      if ( !this )
        goto LABEL_53;
      ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v24->fields.agility, 0);
      v25 = item->fields.transformedServantLimitEntity;
      if ( !v25 )
        goto LABEL_53;
      this = v4[9];
      if ( !this )
        goto LABEL_53;
      ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v25->fields.magic, 0);
      v26 = item->fields.transformedServantLimitEntity;
      if ( !v26 )
        goto LABEL_53;
      this = v4[10];
      if ( !this )
        goto LABEL_53;
      ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v26->fields.luck, 0);
      v27 = item->fields.transformedServantLimitEntity;
      if ( !v27 )
        goto LABEL_53;
      goto LABEL_49;
    }
  }
  CardImageLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetCardImageLimitCountStageSealAfterAtStageLimitCount(
                                                         item,
                                                         (const MethodInfo *)item);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v8);
  if ( !Master_object )
    goto LABEL_53;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          (int32_t)this,
          CardImageLimitCountStageSealAfterAtStageLimitCount,
          0) )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                               v4,
                                                               string_TypeInfo->static_fields->Empty,
                                                               (*v4)[2].fields.agilityGauge);
LABEL_38:
    svtLimitEntity = item->fields.svtLimitEntity;
    if ( !svtLimitEntity )
      goto LABEL_53;
    this = v4[6];
    if ( !this )
      goto LABEL_53;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 0, svtLimitEntity->fields.power, 0);
    v29 = item->fields.svtLimitEntity;
    if ( !v29 )
      goto LABEL_53;
    this = v4[7];
    if ( !this )
      goto LABEL_53;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v29->fields.defense, 0);
    v30 = item->fields.svtLimitEntity;
    if ( !v30 )
      goto LABEL_53;
    this = v4[8];
    if ( !this )
      goto LABEL_53;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v30->fields.agility, 0);
    v31 = item->fields.svtLimitEntity;
    if ( !v31 )
      goto LABEL_53;
    this = v4[9];
    if ( !this )
      goto LABEL_53;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v31->fields.magic, 0);
    v32 = item->fields.svtLimitEntity;
    if ( !v32 )
      goto LABEL_53;
    this = v4[10];
    if ( !this )
      goto LABEL_53;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v32->fields.luck, 0);
    v27 = item->fields.svtLimitEntity;
    if ( !v27 )
      goto LABEL_53;
LABEL_49:
    this = v4[11];
    if ( this )
    {
      ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 5, v27->fields.treasureDevice, 0);
      return;
    }
    goto LABEL_53;
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_53;
  CondTitle = ServantLimitAddEntity__GetCondTitle(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
  ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
    v4,
    CondTitle,
    (*v4)[2].fields.agilityGauge);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_53;
  OverwriteServantParameter = (int *)ServantLimitAddEntity__GetOverwriteServantParameter(entity, 0);
  if ( OverwriteServantParameter && OverwriteServantParameter[6] >= 6 )
  {
    defenseGauge = OverwriteServantParameter[8];
    defenseGauge_high = OverwriteServantParameter[9];
    agilityGauge = OverwriteServantParameter[10];
    agilityGauge_high = OverwriteServantParameter[11];
    magicGauge = OverwriteServantParameter[12];
    magicGauge_high = OverwriteServantParameter[13];
    goto LABEL_52;
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
LABEL_53:
    sub_1CE6958(this, item);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitAddEntity__HasServantParameterLimitCountKey(
                                                             entity,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_38;
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_53;
  v12 = CardImageLimitCountStageSealAfterAtStageLimitCount >= 11
      ? 0
      : CardImageLimitCountStageSealAfterAtStageLimitCount;
  ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(entity, v12, 0);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v15);
  if ( !MasterData_object )
    goto LABEL_53;
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitMaster__GetEntity(
                                                             (ServantLimitMaster_o *)MasterData_object,
                                                             (int32_t)this,
                                                             ServantParameterLimitCount,
                                                             0);
  if ( !this )
    goto LABEL_53;
  defenseGauge = (int32_t)this->fields.defenseGauge;
  defenseGauge_high = HIDWORD(this->fields.defenseGauge);
  agilityGauge = (int32_t)this->fields.agilityGauge;
  agilityGauge_high = HIDWORD(this->fields.agilityGauge);
  magicGauge = (int32_t)this->fields.magicGauge;
  magicGauge_high = HIDWORD(this->fields.magicGauge);
LABEL_52:
  ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
    (ServantStatusFlavorTextListViewItemDrawParam_o *)v4,
    defenseGauge,
    defenseGauge_high,
    agilityGauge,
    agilityGauge_high,
    magicGauge,
    magicGauge_high,
    v11);
}