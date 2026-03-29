void ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  if ( (byte_4D2D174 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    byte_4D2D174 = 1;
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
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2D173 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    sub_1C93AD4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D173 = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      sub_1C93D2C(titleServantBase, title);
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
  UIWidget_o *transformNameLabel; // x0
  __int64 v11; // x8
  int32_t v12; // w21
  UnityEngine_Vector3_o size; // 0:kr00_12.12
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( item->fields._IsTransformServant_k__BackingField
      && !item->fields._TransformIsNotProfileParameterChange_k__BackingField )
    {
      transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
      if ( transformNameLabel )
      {
        UIWidget__set_color(transformNameLabel, item->fields._TransformNameLabelColor_k__BackingField, 0);
        transformNameLabel = (UIWidget_o *)this->fields.transformNameSprite;
        if ( transformNameLabel )
        {
          UIWidget__set_color(transformNameLabel, item->fields._TransformNameSpriteColor_k__BackingField, 0);
          transformNameLabel = (UIWidget_o *)this->fields.transformNameSprite;
          if ( transformNameLabel )
          {
            transformNameLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transformNameLabel,
                                                 0);
            if ( transformNameLabel )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0);
              transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
              if ( transformNameLabel )
              {
                v11 = 640;
                if ( item->fields._IsTransformed_k__BackingField )
                  v11 = 648;
                UILabel__set_text((UILabel_o *)transformNameLabel, *(System_String_o **)((char *)&item->klass + v11), 0);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.mainContentsRoot,
                  this->fields.mainContentsRootPosYBase - (float)this->fields.transformNameOffsetY,
                  0);
                GameObjectExtensions__SetLocalPositionY(
                  this->fields.titleRoot,
                  this->fields.titleRootPosYBase + (float)((float)this->fields.transformNameAddHeight * 0.5),
                  0);
                transformNameLabel = (UIWidget_o *)this->fields.baseSprite;
                if ( transformNameLabel )
                {
                  v12 = this->fields.transformNameAddHeight + this->fields.baseSpriteHeightBase;
                  UIWidget__set_height(transformNameLabel, v12, 0);
                  transformNameLabel = (UIWidget_o *)this->fields.baseCollider;
                  if ( transformNameLabel )
                  {
                    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)transformNameLabel, 0);
                    v15.fields.x = size.fields.x;
                    v15.fields.z = size.fields.z;
                    transformNameLabel = (UIWidget_o *)this->fields.baseCollider;
                    if ( transformNameLabel )
                    {
                      v15.fields.y = (float)v12;
                      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)transformNameLabel, v15, 0);
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
      transformNameLabel = (UIWidget_o *)this->fields.transformNameSprite;
      if ( transformNameLabel )
      {
        transformNameLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)transformNameLabel,
                                             0);
        if ( transformNameLabel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 0, 0);
LABEL_20:
          ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o *, ServantStatusListViewItem_o *, const MethodInfo *))this->klass->vtable._8_UpdateParameter.methodPtr)(
            this,
            item,
            this->klass->vtable._8_UpdateParameter.method);
          return;
        }
      }
    }
    sub_1C93D2C(transformNameLabel, item);
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
    sub_1C93D2C(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, 0);
}


void ServantStatusFlavorTextListViewItemDrawParam__UpdateParameter(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawParam_o **v4; // x19
  int paramLimitCount; // w21
  Il2CppObject *Master_object; // x22
  const MethodInfo *v7; // x1
  System_String_o *CondTitle; // x0
  int *OverwriteServantParameter; // x0
  const MethodInfo *v10; // x7
  int32_t v11; // w1
  int32_t ServantParameterLimitCount; // w21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v14; // x1
  int32_t defenseGauge; // w1
  int32_t defenseGauge_high; // w2
  int32_t agilityGauge; // w3
  int32_t agilityGauge_high; // w4
  int32_t magicGauge; // w5
  int32_t magicGauge_high; // w6
  struct ServantLimitEntity_o *svtLimitEntity; // x8
  struct ServantLimitEntity_o *v22; // x8
  struct ServantLimitEntity_o *v23; // x8
  struct ServantLimitEntity_o *v24; // x8
  struct ServantLimitEntity_o *v25; // x8
  struct ServantLimitEntity_o *v26; // x8
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8
  struct ServantLimitEntity_o *v28; // x8
  struct ServantLimitEntity_o *v29; // x8
  struct ServantLimitEntity_o *v30; // x8
  struct ServantLimitEntity_o *v31; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = (ServantStatusFlavorTextListViewItemDrawParam_o **)this;
  if ( (byte_4D2D172 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D172 = 1;
  }
  entity = 0;
  if ( !item )
    goto LABEL_52;
  if ( item->fields._IsTransformed_k__BackingField
    && !item->fields._TransformIsNotProfileParameterChange_k__BackingField )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                               v4,
                                                               string_TypeInfo->static_fields->Empty,
                                                               (*v4)[2].fields.agilityGauge);
    transformedServantLimitEntity = item->fields.transformedServantLimitEntity;
    if ( !transformedServantLimitEntity )
      goto LABEL_52;
    this = v4[6];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set(
      (ServantStatusParameterGauge_o *)this,
      0,
      transformedServantLimitEntity->fields.power,
      0);
    v28 = item->fields.transformedServantLimitEntity;
    if ( !v28 )
      goto LABEL_52;
    this = v4[7];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v28->fields.defense, 0);
    v29 = item->fields.transformedServantLimitEntity;
    if ( !v29 )
      goto LABEL_52;
    this = v4[8];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v29->fields.agility, 0);
    v30 = item->fields.transformedServantLimitEntity;
    if ( !v30 )
      goto LABEL_52;
    this = v4[9];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v30->fields.magic, 0);
    v31 = item->fields.transformedServantLimitEntity;
    if ( !v31 )
      goto LABEL_52;
    this = v4[10];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v31->fields.luck, 0);
    v26 = item->fields.transformedServantLimitEntity;
    if ( !v26 )
      goto LABEL_52;
    goto LABEL_48;
  }
  paramLimitCount = item->fields.paramLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v7);
  if ( !Master_object )
    goto LABEL_52;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          (int32_t)this,
          paramLimitCount,
          0) )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                               v4,
                                                               string_TypeInfo->static_fields->Empty,
                                                               (*v4)[2].fields.agilityGauge);
LABEL_25:
    svtLimitEntity = item->fields.svtLimitEntity;
    if ( !svtLimitEntity )
      goto LABEL_52;
    this = v4[6];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 0, svtLimitEntity->fields.power, 0);
    v22 = item->fields.svtLimitEntity;
    if ( !v22 )
      goto LABEL_52;
    this = v4[7];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v22->fields.defense, 0);
    v23 = item->fields.svtLimitEntity;
    if ( !v23 )
      goto LABEL_52;
    this = v4[8];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v23->fields.agility, 0);
    v24 = item->fields.svtLimitEntity;
    if ( !v24 )
      goto LABEL_52;
    this = v4[9];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v24->fields.magic, 0);
    v25 = item->fields.svtLimitEntity;
    if ( !v25 )
      goto LABEL_52;
    this = v4[10];
    if ( !this )
      goto LABEL_52;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v25->fields.luck, 0);
    v26 = item->fields.svtLimitEntity;
    if ( !v26 )
      goto LABEL_52;
LABEL_48:
    this = v4[11];
    if ( this )
    {
      ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 5, v26->fields.treasureDevice, 0);
      return;
    }
    goto LABEL_52;
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_52;
  CondTitle = ServantLimitAddEntity__GetCondTitle(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
  ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
    v4,
    CondTitle,
    (*v4)[2].fields.agilityGauge);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_52;
  OverwriteServantParameter = (int *)ServantLimitAddEntity__GetOverwriteServantParameter(entity, 0);
  if ( OverwriteServantParameter && OverwriteServantParameter[6] >= 6 )
  {
    defenseGauge = OverwriteServantParameter[8];
    defenseGauge_high = OverwriteServantParameter[9];
    agilityGauge = OverwriteServantParameter[10];
    agilityGauge_high = OverwriteServantParameter[11];
    magicGauge = OverwriteServantParameter[12];
    magicGauge_high = OverwriteServantParameter[13];
    goto LABEL_51;
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
LABEL_52:
    sub_1C93D2C(this, item);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitAddEntity__HasServantParameterLimitCountKey(
                                                             entity,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_25;
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_52;
  v11 = paramLimitCount >= 11 ? 0 : paramLimitCount;
  ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(entity, v11, 0);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v14);
  if ( !MasterData_object )
    goto LABEL_52;
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitMaster__GetEntity(
                                                             (ServantLimitMaster_o *)MasterData_object,
                                                             (int32_t)this,
                                                             ServantParameterLimitCount,
                                                             0);
  if ( !this )
    goto LABEL_52;
  defenseGauge = (int32_t)this->fields.defenseGauge;
  defenseGauge_high = HIDWORD(this->fields.defenseGauge);
  agilityGauge = (int32_t)this->fields.agilityGauge;
  agilityGauge_high = HIDWORD(this->fields.agilityGauge);
  magicGauge = (int32_t)this->fields.magicGauge;
  magicGauge_high = HIDWORD(this->fields.magicGauge);
LABEL_51:
  ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
    (ServantStatusFlavorTextListViewItemDrawParam_o *)v4,
    defenseGauge,
    defenseGauge_high,
    agilityGauge,
    agilityGauge_high,
    magicGauge,
    magicGauge_high,
    v10);
}