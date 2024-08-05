void __fastcall ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FAA2B & 1) == 0 )
  {
    sub_1B64870(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, v1);
    byte_49FAA2B = 1;
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
    sub_1B64ACC(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  float v11; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v15; // s8
  float v16; // s8
  UILabel_o *v17; // x19

  if ( (byte_49FAA2A & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, v6);
    sub_1B64870(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7);
    sub_1B64870(&StringLiteral_1/*""*/, v8);
    byte_49FAA2A = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      sub_1B64ACC(titleServantBase, title);
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
    LODWORD(v11) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleServantBase->klass[1]._2.naturalAligment)(
                       titleServantBase,
                       titleServantBase->klass[1].vtable._0_Equals.methodPtr));
    if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v11 >= (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0LL);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)titleServantBase,
                                     0LL);
      if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v16 = (float)(1.0 - v15)
          * (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = v16
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
    v17 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    if ( !v17 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v17,
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
                ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o *, ServantStatusListViewItem_o *, void *))this->klass->vtable._8_UpdateParameter.method)(
                  this,
                  item,
                  this->klass[1]._1.image);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B64ACC(transformNameSprite, item);
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
    sub_1B64ACC(powerGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(powerGauge, 5, np, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__UpdateParameter(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawParam_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8
  struct ServantLimitEntity_o *v11; // x8
  struct ServantLimitEntity_o *v12; // x8
  struct ServantLimitEntity_o *v13; // x8
  struct ServantLimitEntity_o *v14; // x8
  struct ServantLimitEntity_o *v15; // x8
  int paramLimitCount; // w21
  Il2CppObject *Master_object; // x22
  const MethodInfo *v18; // x1
  System_String_o *CondTitle; // x0
  System_Int32_array *OverwriteServantParameter; // x0
  const MethodInfo *v21; // x7
  int32_t v22; // w1
  int32_t ServantParameterLimitCount; // w21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v25; // x1
  int32_t defenseGauge; // w1
  int32_t defenseGauge_high; // w2
  int32_t agilityGauge; // w3
  int32_t agilityGauge_high; // w4
  int32_t magicGauge; // w5
  int32_t magicGauge_high; // w6
  struct ServantLimitEntity_o *svtLimitEntity; // x8
  struct ServantLimitEntity_o *v33; // x8
  struct ServantLimitEntity_o *v34; // x8
  struct ServantLimitEntity_o *v35; // x8
  struct ServantLimitEntity_o *v36; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = (ServantStatusFlavorTextListViewItemDrawParam_o **)this;
  if ( (byte_49FAA29 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantLimitMaster___, item);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B64870(&string_TypeInfo, v8);
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)sub_1B64870(&StringLiteral_1/*""*/, v9);
    byte_49FAA29 = 1;
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
    v11 = item->fields.transformedServantLimitEntity;
    if ( !v11 )
      goto LABEL_48;
    this = v4[7];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v11->fields.defense, 0LL);
    v12 = item->fields.transformedServantLimitEntity;
    if ( !v12 )
      goto LABEL_48;
    this = v4[8];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v12->fields.agility, 0LL);
    v13 = item->fields.transformedServantLimitEntity;
    if ( !v13 )
      goto LABEL_48;
    this = v4[9];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v13->fields.magic, 0LL);
    v14 = item->fields.transformedServantLimitEntity;
    if ( !v14 )
      goto LABEL_48;
    this = v4[10];
    if ( !this )
      goto LABEL_48;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v14->fields.luck, 0LL);
    v15 = item->fields.transformedServantLimitEntity;
    if ( !v15 )
      goto LABEL_48;
    goto LABEL_44;
  }
  paramLimitCount = item->fields.paramLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v18);
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
          v22 = paramLimitCount >= 11 ? 0 : paramLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(entity, v22, 0LL);
          this = (ServantStatusFlavorTextListViewItemDrawParam_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
            this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v25);
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
                  v21);
                return;
              }
            }
          }
        }
      }
    }
LABEL_48:
    sub_1B64ACC(this, item);
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
  v33 = item->fields.svtLimitEntity;
  if ( !v33 )
    goto LABEL_48;
  this = v4[7];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v33->fields.defense, 0LL);
  v34 = item->fields.svtLimitEntity;
  if ( !v34 )
    goto LABEL_48;
  this = v4[8];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v34->fields.agility, 0LL);
  v35 = item->fields.svtLimitEntity;
  if ( !v35 )
    goto LABEL_48;
  this = v4[9];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v35->fields.magic, 0LL);
  v36 = item->fields.svtLimitEntity;
  if ( !v36 )
    goto LABEL_48;
  this = v4[10];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v36->fields.luck, 0LL);
  v15 = item->fields.svtLimitEntity;
  if ( !v15 )
    goto LABEL_48;
LABEL_44:
  this = v4[11];
  if ( !this )
    goto LABEL_48;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 5, v15->fields.treasureDevice, 0LL);
}