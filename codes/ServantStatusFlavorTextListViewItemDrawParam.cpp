void __fastcall ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  if ( (byte_4A57532 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    byte_4A57532 = 1;
  }
  *ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields = (struct ServantStatusFlavorTextListViewItemDrawParam_StaticFields)0xFFFFFF8F0000009ALL;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam___ctor(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.transformNameAddHeight = 0x100000000ELL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__Awake(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *titleRoot; // x0
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *mainContentsRoot; // x0

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1B8880C(this, method);
  titleRoot = this->fields.titleRoot;
  this->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleRoot, 0LL);
  mainContentsRoot = this->fields.mainContentsRoot;
  this->fields.titleRootPosYBase = LocalPositionY;
  this->fields.mainContentsRootPosYBase = GameObjectExtensions__GetLocalPositionY(mainContentsRoot, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawParam__GetKind(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  return 5;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__SetCondTitle(
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

  if ( (byte_4A57531 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    sub_1B885B0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57531 = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_45:
      sub_1B8880C(titleServantBase, title);
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( !Component_object )
        goto LABEL_45;
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_alignment((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, title, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleServantBase->klass[2]._1.typeMetadataHandle)(
      titleServantBase,
      titleServantBase->klass[2]._1.interopData);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    LODWORD(v7) = COERCE_UNSIGNED_INT128(
                    ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleServantBase->klass[1]._2.naturalAligment)(
                      titleServantBase,
                      titleServantBase->klass[1].vtable._0_Equals.methodPtr));
    if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v7 >= (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0LL);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)titleServantBase,
                                     0LL);
      if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v12 = (float)(1.0 - v11)
          * (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = v12
                          + (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 0, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      UILabel__set_alignment((UILabel_o *)titleServantBase, 1, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
      titleName = (UIWidget_o *)this->fields.titleName;
      if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      if ( !titleName )
        goto LABEL_45;
      UIWidget__set_width(
        titleName,
        ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
    v13 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    if ( !v13 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v13,
      ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawParam__SetItem(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transformNameSprite; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  __int64 v12; // x8
  int32_t v13; // w21
  int v14; // s0
  float v16; // s1

  this->fields.dispMode = mode;
  if ( item && mode )
  {
    transformNameSprite = (UnityEngine_Component_o *)this->fields.transformNameSprite;
    if ( transformNameSprite )
    {
      IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
      transformNameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transformNameSprite, 0LL);
      if ( transformNameSprite )
      {
        if ( !IsTransformServant_k__BackingField )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 0, 0LL);
          goto LABEL_15;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameSprite, 1, 0LL);
        transformNameSprite = (UnityEngine_Component_o *)this->fields.transformNameLabel;
        if ( transformNameSprite )
        {
          v12 = 544LL;
          if ( item->fields._IsTransformed_k__BackingField )
            v12 = 552LL;
          UILabel__set_text((UILabel_o *)transformNameSprite, *(System_String_o **)((char *)&item->klass + v12), 0LL);
          GameObjectExtensions__SetLocalPositionY(
            this->fields.mainContentsRoot,
            this->fields.mainContentsRootPosYBase - (float)this->fields.transformNameOffsetY,
            0LL);
          GameObjectExtensions__SetLocalPositionY(
            this->fields.titleRoot,
            this->fields.titleRootPosYBase + (float)((float)this->fields.transformNameAddHeight * 0.5),
            0LL);
          transformNameSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
          if ( transformNameSprite )
          {
            v13 = this->fields.transformNameAddHeight + this->fields.baseSpriteHeightBase;
            UIWidget__set_height((UIWidget_o *)transformNameSprite, v13, 0LL);
            transformNameSprite = (UnityEngine_Component_o *)this->fields.baseCollider;
            if ( transformNameSprite )
            {
              *(UnityEngine_Vector3_o *)&v14 = UnityEngine_BoxCollider__get_size(
                                                 (UnityEngine_BoxCollider_o *)transformNameSprite,
                                                 0LL);
              transformNameSprite = (UnityEngine_Component_o *)this->fields.baseCollider;
              if ( transformNameSprite )
              {
                v16 = (float)v13;
                UnityEngine_BoxCollider__set_size(
                  (UnityEngine_BoxCollider_o *)transformNameSprite,
                  *(UnityEngine_Vector3_o *)&v14,
                  0LL);
LABEL_15:
                ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o *, ServantStatusListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._8_UpdateParameter.method)(
                  this,
                  item,
                  this->klass->vtable._9_HideNew.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B8880C(transformNameSprite, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
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
  ServantStatusParameterGauge__Set(powerGauge, 0, power, 0LL);
  powerGauge = this->fields.defenseGauge;
  if ( !powerGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(powerGauge, 1, defense, 0LL);
  powerGauge = this->fields.agilityGauge;
  if ( !powerGauge
    || (ServantStatusParameterGauge__Set(powerGauge, 2, agility, 0LL), (powerGauge = this->fields.magicGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(powerGauge, 3, magic, 0LL), (powerGauge = this->fields.luckGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(powerGauge, 4, luck, 0LL), (powerGauge = this->fields.npGauge) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__UpdateParameter(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawParam_o **v4; // x19
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8
  struct ServantLimitEntity_o *v6; // x8
  struct ServantLimitEntity_o *v7; // x8
  struct ServantLimitEntity_o *v8; // x8
  struct ServantLimitEntity_o *v9; // x8
  struct ServantLimitEntity_o *v10; // x8
  int paramLimitCount; // w21
  Il2CppObject *Master_object; // x22
  const MethodInfo *v13; // x1
  System_String_o *CondTitle; // x0
  System_Int32_array *OverwriteServantParameter; // x0
  const MethodInfo *v16; // x7
  int32_t v17; // w1
  int32_t ServantParameterLimitCount; // w21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v20; // x1
  int32_t defenseGauge; // w1
  int32_t defenseGauge_high; // w2
  int32_t agilityGauge; // w3
  int32_t agilityGauge_high; // w4
  int32_t magicGauge; // w5
  int32_t magicGauge_high; // w6
  struct ServantLimitEntity_o *svtLimitEntity; // x8
  struct ServantLimitEntity_o *v28; // x8
  struct ServantLimitEntity_o *v29; // x8
  struct ServantLimitEntity_o *v30; // x8
  struct ServantLimitEntity_o *v31; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = (ServantStatusFlavorTextListViewItemDrawParam_o **)this;
  if ( (byte_4A57530 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57530 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_48;
  if ( item->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                               v4,
                                                               string_TypeInfo->static_fields->Empty,
                                                               (*v4)[2].fields.agilityGauge);
    transformedServantLimitEntity = item->fields.transformedServantLimitEntity;
    if ( !transformedServantLimitEntity )
      goto LABEL_48;
    this = v4[6];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set(
      (ServantStatusParameterGauge_o *)this,
      0,
      transformedServantLimitEntity->fields.power,
      0LL);
    v6 = item->fields.transformedServantLimitEntity;
    if ( !v6 )
      goto LABEL_48;
    this = v4[7];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v6->fields.defense, 0LL);
    v7 = item->fields.transformedServantLimitEntity;
    if ( !v7 )
      goto LABEL_48;
    this = v4[8];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v7->fields.agility, 0LL);
    v8 = item->fields.transformedServantLimitEntity;
    if ( !v8 )
      goto LABEL_48;
    this = v4[9];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v8->fields.magic, 0LL);
    v9 = item->fields.transformedServantLimitEntity;
    if ( !v9 )
      goto LABEL_48;
    this = v4[10];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v9->fields.luck, 0LL);
    v10 = item->fields.transformedServantLimitEntity;
    if ( !v10 )
      goto LABEL_48;
    goto LABEL_44;
  }
  paramLimitCount = item->fields.paramLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v13);
  if ( !Master_object )
    goto LABEL_48;
  if ( ServantLimitAddMaster__TryGetEntity(
         (ServantLimitAddMaster_o *)Master_object,
         &entity,
         (int32_t)this,
         paramLimitCount,
         0LL) )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
    if ( entity )
    {
      CondTitle = ServantLimitAddEntity__GetCondTitle(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
        v4,
        CondTitle,
        (*v4)[2].fields.agilityGauge);
      this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
      if ( entity )
      {
        OverwriteServantParameter = ServantLimitAddEntity__GetOverwriteServantParameter(entity, 0LL);
        if ( OverwriteServantParameter && (int)OverwriteServantParameter->max_length >= 6 )
        {
          defenseGauge = OverwriteServantParameter->m_Items[1];
          defenseGauge_high = OverwriteServantParameter->m_Items[2];
          agilityGauge = OverwriteServantParameter->m_Items[3];
          agilityGauge_high = OverwriteServantParameter->m_Items[4];
          magicGauge = OverwriteServantParameter->m_Items[5];
          magicGauge_high = OverwriteServantParameter->m_Items[6];
          goto LABEL_47;
        }
        this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
        if ( entity )
        {
          v17 = paramLimitCount >= 11 ? 0 : paramLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(entity, v17, 0LL);
          this = (ServantStatusFlavorTextListViewItemDrawParam_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
            this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v20);
            if ( MasterData_object )
            {
              this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitMaster__GetEntity(
                                                                         (ServantLimitMaster_o *)MasterData_object,
                                                                         (int32_t)this,
                                                                         ServantParameterLimitCount,
                                                                         0LL);
              if ( this )
              {
                defenseGauge = (int32_t)this->fields.defenseGauge;
                defenseGauge_high = HIDWORD(this->fields.defenseGauge);
                agilityGauge = (int32_t)this->fields.agilityGauge;
                agilityGauge_high = HIDWORD(this->fields.agilityGauge);
                magicGauge = (int32_t)this->fields.magicGauge;
                magicGauge_high = HIDWORD(this->fields.magicGauge);
LABEL_47:
                ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
                  (ServantStatusFlavorTextListViewItemDrawParam_o *)v4,
                  defenseGauge,
                  defenseGauge_high,
                  agilityGauge,
                  agilityGauge_high,
                  magicGauge,
                  magicGauge_high,
                  v16);
                return;
              }
            }
          }
        }
      }
    }
LABEL_48:
    sub_1B8880C(this, item);
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                             v4,
                                                             string_TypeInfo->static_fields->Empty,
                                                             (*v4)[2].fields.agilityGauge);
  svtLimitEntity = item->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    goto LABEL_48;
  this = v4[6];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 0, svtLimitEntity->fields.power, 0LL);
  v28 = item->fields.svtLimitEntity;
  if ( !v28 )
    goto LABEL_48;
  this = v4[7];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v28->fields.defense, 0LL);
  v29 = item->fields.svtLimitEntity;
  if ( !v29 )
    goto LABEL_48;
  this = v4[8];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v29->fields.agility, 0LL);
  v30 = item->fields.svtLimitEntity;
  if ( !v30 )
    goto LABEL_48;
  this = v4[9];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v30->fields.magic, 0LL);
  v31 = item->fields.svtLimitEntity;
  if ( !v31 )
    goto LABEL_48;
  this = v4[10];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v31->fields.luck, 0LL);
  v10 = item->fields.svtLimitEntity;
  if ( !v10 )
    goto LABEL_48;
LABEL_44:
  this = v4[11];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 5, v10->fields.treasureDevice, 0LL);
}