void __fastcall ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  if ( (byte_4392907 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    byte_4392907 = 1;
  }
  ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH = 154;
  ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS = -113;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam___ctor(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.baseSpriteHeightBase = 0x100000000ELL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawParam__Awake(
        ServantStatusFlavorTextListViewItemDrawParam_o *this,
        const MethodInfo *method)
{
  struct ServantStatusParameterGauge_o *powerGauge; // x8
  UnityEngine_GameObject_o *transformNameSprite; // x0
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *v6; // x0

  powerGauge = this->fields.powerGauge;
  if ( !powerGauge )
    sub_B7769C(this, method);
  transformNameSprite = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
  this->fields.mainContentsRootPosYBase = *((float *)&powerGauge[2].fields.BaseMonoBehaviour_Fields + 1);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(transformNameSprite, 0LL);
  v6 = *(UnityEngine_GameObject_o **)&this->fields.transformNameAddHeight;
  *(&this->fields.mainContentsRootPosYBase + 1) = LocalPositionY;
  *(float *)&this[1].klass = GameObjectExtensions__GetLocalPositionY(v6, 0LL);
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
  UnityEngine_GameObject_o *titleName; // x0
  UISprite_o *Component_srcLineSprite; // x21
  float v7; // s8
  struct UnityEngine_BoxCollider_o *baseCollider; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v11; // s8
  float v12; // s8
  struct UnityEngine_BoxCollider_o *v13; // x19

  if ( (byte_4392906 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    sub_B775C4(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4392906 = 1;
  }
  titleName = (UnityEngine_GameObject_o *)this->fields.titleName;
  if ( !titleName )
    goto LABEL_53;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            titleName,
                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)titleName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( Component_srcLineSprite )
      {
        UISprite__set_spriteName(
          Component_srcLineSprite,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_53:
      sub_B7769C(titleName, title);
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( !Component_srcLineSprite )
        goto LABEL_53;
      UISprite__set_spriteName(
        Component_srcLineSprite,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_overflowMethod((UILabel_o *)titleName, 2, 0LL);
    titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_alignment((UILabel_o *)titleName, 2, 0LL);
    titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !titleName )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)titleName, title, 0LL);
    titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !titleName )
      goto LABEL_53;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleName->klass[2]._1.typeMetadataHandle)(
      titleName,
      titleName->klass[2]._1.interopData);
    titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !titleName )
      goto LABEL_53;
    LODWORD(v7) = COERCE_UNSIGNED_INT128(
                    ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleName->klass[1]._2.naturalAligment)(
                      titleName,
                      titleName->klass[1].vtable._0_Equals.methodPtr));
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    }
    titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
    if ( !titleName )
      goto LABEL_53;
    if ( v7 >= (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleName = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)titleName,
                                                0LL);
      if ( !titleName )
        goto LABEL_53;
      LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleName, 0LL);
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      }
      titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
      if ( !titleName )
        goto LABEL_53;
      v12 = (float)(1.0 - v11)
          * (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
      TITLE_NAME_LEFT_POS = v12
                          + (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleName, 0, 0LL);
      titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
      if ( !titleName )
        goto LABEL_53;
      UILabel__set_alignment((UILabel_o *)titleName, 1, 0LL);
      titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
      baseCollider = this->fields.baseCollider;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
      }
      if ( !baseCollider )
        goto LABEL_53;
      UIWidget__set_width(
        (UIWidget_o *)baseCollider,
        ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      titleName = (UnityEngine_GameObject_o *)this->fields.baseCollider;
      if ( !titleName )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleName, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    titleName = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
    v13 = this->fields.baseCollider;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    }
    if ( !v13 )
      goto LABEL_53;
    UILabel__SetCondensedScale(
      (UILabel_o *)v13,
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
  UnityEngine_Component_o *transformNameLabel; // x0
  _BOOL4 IsTransformServant_k__BackingField; // w21
  __int64 v12; // x8
  int32_t v13; // w21
  int v14; // s0
  float v16; // s1

  LODWORD(this->fields.baseSprite) = mode;
  if ( item && mode )
  {
    transformNameLabel = (UnityEngine_Component_o *)this->fields.transformNameLabel;
    if ( transformNameLabel )
    {
      IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
      transformNameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transformNameLabel, 0LL);
      if ( transformNameLabel )
      {
        if ( !IsTransformServant_k__BackingField )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 0, 0LL);
          goto LABEL_15;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transformNameLabel, 1, 0LL);
        transformNameLabel = (UnityEngine_Component_o *)this->fields.mainContentsRoot;
        if ( transformNameLabel )
        {
          v12 = 544LL;
          if ( item->fields._IsTransformed_k__BackingField )
            v12 = 552LL;
          UILabel__set_text((UILabel_o *)transformNameLabel, *(System_String_o **)((char *)&item->klass + v12), 0LL);
          GameObjectExtensions__SetLocalPositionY(
            *(UnityEngine_GameObject_o **)&this->fields.transformNameAddHeight,
            *(float *)&this[1].klass - (float)SLODWORD(this->fields.titleRootPosYBase),
            0LL);
          GameObjectExtensions__SetLocalPositionY(
            (UnityEngine_GameObject_o *)this->fields.transformNameSprite,
            *(&this->fields.mainContentsRootPosYBase + 1) + (float)((float)this->fields.baseSpriteHeightBase * 0.5),
            0LL);
          transformNameLabel = (UnityEngine_Component_o *)this->fields.powerGauge;
          if ( transformNameLabel )
          {
            v13 = this->fields.baseSpriteHeightBase + LODWORD(this->fields.mainContentsRootPosYBase);
            UIWidget__set_height((UIWidget_o *)transformNameLabel, v13, 0LL);
            transformNameLabel = (UnityEngine_Component_o *)this->fields.titleRoot;
            if ( transformNameLabel )
            {
              *(UnityEngine_Vector3_o *)&v14 = UnityEngine_BoxCollider__get_size(
                                                 (UnityEngine_BoxCollider_o *)transformNameLabel,
                                                 0LL);
              transformNameLabel = (UnityEngine_Component_o *)this->fields.titleRoot;
              if ( transformNameLabel )
              {
                v16 = (float)v13;
                UnityEngine_BoxCollider__set_size(
                  (UnityEngine_BoxCollider_o *)transformNameLabel,
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
    sub_B7769C(transformNameLabel, item);
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
  ServantStatusParameterGauge_o *defenseGauge; // x0

  defenseGauge = this->fields.defenseGauge;
  if ( !defenseGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(defenseGauge, 0, power, 0LL);
  defenseGauge = this->fields.agilityGauge;
  if ( !defenseGauge )
    goto LABEL_8;
  ServantStatusParameterGauge__Set(defenseGauge, 1, defense, 0LL);
  defenseGauge = this->fields.magicGauge;
  if ( !defenseGauge
    || (ServantStatusParameterGauge__Set(defenseGauge, 2, agility, 0LL), (defenseGauge = this->fields.luckGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(defenseGauge, 3, magic, 0LL), (defenseGauge = this->fields.npGauge) == 0LL)
    || (ServantStatusParameterGauge__Set(defenseGauge, 4, luck, 0LL),
        (defenseGauge = (ServantStatusParameterGauge_o *)this->fields.titleServantBase) == 0LL) )
  {
LABEL_8:
    sub_B7769C(defenseGauge, *(_QWORD *)&power);
  }
  ServantStatusParameterGauge__Set(defenseGauge, 5, np, 0LL);
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
  ServantLimitAddMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v13; // x1
  System_String_o *CondTitle; // x0
  System_Int32_array *OverwriteServantParameter; // x0
  const MethodInfo *v16; // x7
  int32_t v17; // w1
  int32_t ServantParameterLimitCount; // w21
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v20; // x1
  int32_t magicGauge; // w1
  int32_t magicGauge_high; // w2
  int32_t luckGauge; // w3
  int32_t luckGauge_high; // w4
  int32_t npGauge; // w5
  int32_t npGauge_high; // w6
  struct ServantLimitEntity_o *svtLimitEntity; // x8
  struct ServantLimitEntity_o *v28; // x8
  struct ServantLimitEntity_o *v29; // x8
  struct ServantLimitEntity_o *v30; // x8
  struct ServantLimitEntity_o *v31; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = (ServantStatusFlavorTextListViewItemDrawParam_o **)this;
  if ( (byte_4392905 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_4392905 = 1;
  }
  entity = 0LL;
  if ( !item )
    goto LABEL_49;
  if ( item->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct UnityEngine_BoxCollider_o *))(*v4)[2].fields.titleName)(
                                                               v4,
                                                               string_TypeInfo->static_fields->Empty,
                                                               (*v4)[2].fields.baseCollider);
    transformedServantLimitEntity = item->fields.transformedServantLimitEntity;
    if ( !transformedServantLimitEntity )
      goto LABEL_49;
    this = v4[5];
    if ( !this )
      goto LABEL_49;
    ServantStatusParameterGauge__Set(
      (ServantStatusParameterGauge_o *)this,
      0,
      transformedServantLimitEntity->fields.power,
      0LL);
    v6 = item->fields.transformedServantLimitEntity;
    if ( !v6 )
      goto LABEL_49;
    this = v4[6];
    if ( !this )
      goto LABEL_49;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v6->fields.defense, 0LL);
    v7 = item->fields.transformedServantLimitEntity;
    if ( !v7 )
      goto LABEL_49;
    this = v4[7];
    if ( !this )
      goto LABEL_49;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v7->fields.agility, 0LL);
    v8 = item->fields.transformedServantLimitEntity;
    if ( !v8 )
      goto LABEL_49;
    this = v4[8];
    if ( !this )
      goto LABEL_49;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v8->fields.magic, 0LL);
    v9 = item->fields.transformedServantLimitEntity;
    if ( !v9 )
      goto LABEL_49;
    this = v4[9];
    if ( !this )
      goto LABEL_49;
    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v9->fields.luck, 0LL);
    v10 = item->fields.transformedServantLimitEntity;
    if ( !v10 )
      goto LABEL_49;
    goto LABEL_45;
  }
  paramLimitCount = item->fields.paramLimitCount;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v13);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  if ( ServantLimitAddMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, (int32_t)this, paramLimitCount, 0LL) )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
    if ( entity )
    {
      CondTitle = ServantLimitAddEntity__GetCondTitle(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, System_String_o *, struct UnityEngine_BoxCollider_o *))(*v4)[2].fields.titleName)(
        v4,
        CondTitle,
        (*v4)[2].fields.baseCollider);
      this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
      if ( entity )
      {
        OverwriteServantParameter = ServantLimitAddEntity__GetOverwriteServantParameter(entity, 0LL);
        if ( OverwriteServantParameter && (int)OverwriteServantParameter->max_length >= 6 )
        {
          magicGauge = OverwriteServantParameter->m_Items[1];
          magicGauge_high = OverwriteServantParameter->m_Items[2];
          luckGauge = OverwriteServantParameter->m_Items[3];
          luckGauge_high = OverwriteServantParameter->m_Items[4];
          npGauge = OverwriteServantParameter->m_Items[5];
          npGauge_high = OverwriteServantParameter->m_Items[6];
          goto LABEL_48;
        }
        this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
        if ( entity )
        {
          v17 = paramLimitCount >= 11 ? 0 : paramLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(entity, v17, 0LL);
          this = (ServantStatusFlavorTextListViewItemDrawParam_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)this,
                                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
            this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v20);
            if ( MasterData_WarQuestSelectionMaster )
            {
              this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitMaster__GetEntity(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         (int32_t)this,
                                                                         ServantParameterLimitCount,
                                                                         0LL);
              if ( this )
              {
                magicGauge = (int32_t)this->fields.magicGauge;
                magicGauge_high = HIDWORD(this->fields.magicGauge);
                luckGauge = (int32_t)this->fields.luckGauge;
                luckGauge_high = HIDWORD(this->fields.luckGauge);
                npGauge = (int32_t)this->fields.npGauge;
                npGauge_high = HIDWORD(this->fields.npGauge);
LABEL_48:
                ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
                  (ServantStatusFlavorTextListViewItemDrawParam_o *)v4,
                  magicGauge,
                  magicGauge_high,
                  luckGauge,
                  luckGauge_high,
                  npGauge,
                  npGauge_high,
                  v16);
                return;
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_B7769C(this, item);
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, struct System_String_o *, struct UnityEngine_BoxCollider_o *))(*v4)[2].fields.titleName)(
                                                             v4,
                                                             string_TypeInfo->static_fields->Empty,
                                                             (*v4)[2].fields.baseCollider);
  svtLimitEntity = item->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    goto LABEL_49;
  this = v4[5];
  if ( !this )
    goto LABEL_49;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 0, svtLimitEntity->fields.power, 0LL);
  v28 = item->fields.svtLimitEntity;
  if ( !v28 )
    goto LABEL_49;
  this = v4[6];
  if ( !this )
    goto LABEL_49;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v28->fields.defense, 0LL);
  v29 = item->fields.svtLimitEntity;
  if ( !v29 )
    goto LABEL_49;
  this = v4[7];
  if ( !this )
    goto LABEL_49;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v29->fields.agility, 0LL);
  v30 = item->fields.svtLimitEntity;
  if ( !v30 )
    goto LABEL_49;
  this = v4[8];
  if ( !this )
    goto LABEL_49;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v30->fields.magic, 0LL);
  v31 = item->fields.svtLimitEntity;
  if ( !v31 )
    goto LABEL_49;
  this = v4[9];
  if ( !this )
    goto LABEL_49;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v31->fields.luck, 0LL);
  v10 = item->fields.svtLimitEntity;
  if ( !v10 )
    goto LABEL_49;
LABEL_45:
  this = v4[10];
  if ( !this )
    goto LABEL_49;
  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 5, v10->fields.treasureDevice, 0LL);
}