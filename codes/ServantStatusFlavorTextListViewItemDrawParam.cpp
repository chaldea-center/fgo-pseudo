void ServantStatusFlavorTextListViewItemDrawParam___cctor(const MethodInfo *method)
{
  if ( (byte_593499B & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    byte_593499B = 1;
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
    sub_21FFECC(this, method);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v12; // x2
  float v13; // s8
  ServantStatusFlavorTextListViewItemDrawParam_c *v14; // x0
  int *static_fields; // x8
  __int64 v16; // x2
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  __int64 v20; // x2
  float v21; // s8
  float v22; // s8
  __int64 v23; // x2
  UILabel_o *v24; // x19

  if ( (byte_593499A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo);
    sub_21FFC50(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593499A = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title, v10);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0);
        return;
      }
LABEL_46:
      sub_21FFECC(titleServantBase, title);
    }
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, title, v7);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !*(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title, v11);
      if ( !Component_object )
        goto LABEL_46;
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0);
    }
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_46;
    UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 2, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_46;
    UILabel__set_alignment((UILabel_o *)titleServantBase, 2, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)titleServantBase, title, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_46;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleServantBase->klass[2]._1.parent)(
      titleServantBase,
      titleServantBase->klass[2]._1.generic_class);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_46;
    v13 = (*(float (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&titleServantBase->klass[1]._2.field_count)(
            titleServantBase,
            *(_QWORD *)&titleServantBase->klass[1]._2.interfaces_count);
    v14 = ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
    if ( !*(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, title, v12);
      v14 = ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
    }
    static_fields = (int *)v14->static_fields;
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( v13 >= (float)*static_fields )
    {
      if ( !titleServantBase )
        goto LABEL_46;
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0);
      if ( !titleServantBase )
        goto LABEL_46;
      LODWORD(v21) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleServantBase, 0);
      if ( !*(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, title, v20);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_46;
      v22 = (float)(1.0 - v21)
          * (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0);
      TITLE_NAME_LEFT_POS = v22
                          + (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      if ( !titleServantBase )
        goto LABEL_46;
      UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 0, 0);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_46;
      UILabel__set_alignment((UILabel_o *)titleServantBase, 1, 0);
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
      titleName = (UIWidget_o *)this->fields.titleName;
      if ( !*(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, title, v16);
      if ( !titleName )
        goto LABEL_46;
      UIWidget__set_width(
        titleName,
        ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_46;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0);
    titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawParam_TypeInfo;
    v24 = this->fields.titleName;
    if ( !*(&ServantStatusFlavorTextListViewItemDrawParam_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawParam_TypeInfo, title, v23);
    if ( !v24 )
      goto LABEL_46;
    UILabel__SetCondensedScale(
      v24,
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
    sub_21FFECC(gameObject, item);
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
    sub_21FFECC(powerGauge, *(_QWORD *)&power);
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
  __int64 v6; // x1
  __int64 v7; // x2
  int CardImageLimitCountStageSealAfterAtStageLimitCount; // w21
  Il2CppObject *Master_object; // x22
  const MethodInfo *v10; // x1
  System_String_o *CondTitle; // x0
  int *OverwriteServantParameter; // x0
  const MethodInfo *v13; // x7
  int32_t v14; // w1
  int32_t ServantParameterLimitCount; // w21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v17; // x1
  int32_t defenseGauge; // w1
  int32_t defenseGauge_high; // w2
  int32_t agilityGauge; // w3
  int32_t agilityGauge_high; // w4
  int32_t magicGauge; // w5
  int32_t magicGauge_high; // w6
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8
  struct ServantLimitEntity_o *v25; // x8
  struct ServantLimitEntity_o *v26; // x8
  struct ServantLimitEntity_o *v27; // x8
  struct ServantLimitEntity_o *v28; // x8
  struct ServantLimitEntity_o *v29; // x8
  struct ServantLimitEntity_o *svtLimitEntity; // x8
  struct ServantLimitEntity_o *v31; // x8
  struct ServantLimitEntity_o *v32; // x8
  struct ServantLimitEntity_o *v33; // x8
  struct ServantLimitEntity_o *v34; // x8
  struct ServantLimitEntity_o *v35; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = (ServantStatusFlavorTextListViewItemDrawParam_o **)this;
  if ( (byte_5934999 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934999 = 1;
  }
  entity = 0;
  if ( !item )
    goto LABEL_54;
  if ( item->fields._IsTransformed_k__BackingField )
  {
    transformInfoBefore = item->fields.transformInfoBefore;
    if ( !transformInfoBefore || !ServantEntity_TransformInfo__IsNotProfileParameterChange(transformInfoBefore, 0) )
    {
      this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, _QWORD, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                                 v4,
                                                                 **(_QWORD **)(qword_594C0B8 + 184),
                                                                 (*v4)[2].fields.agilityGauge);
      transformedServantLimitEntity = item->fields.transformedServantLimitEntity;
      if ( transformedServantLimitEntity )
      {
        this = v4[6];
        if ( this )
        {
          ServantStatusParameterGauge__Set(
            (ServantStatusParameterGauge_o *)this,
            0,
            transformedServantLimitEntity->fields.power,
            0);
          v25 = item->fields.transformedServantLimitEntity;
          if ( v25 )
          {
            this = v4[7];
            if ( this )
            {
              ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v25->fields.defense, 0);
              v26 = item->fields.transformedServantLimitEntity;
              if ( v26 )
              {
                this = v4[8];
                if ( this )
                {
                  ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v26->fields.agility, 0);
                  v27 = item->fields.transformedServantLimitEntity;
                  if ( v27 )
                  {
                    this = v4[9];
                    if ( this )
                    {
                      ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v27->fields.magic, 0);
                      v28 = item->fields.transformedServantLimitEntity;
                      if ( v28 )
                      {
                        this = v4[10];
                        if ( this )
                        {
                          ServantStatusParameterGauge__Set(
                            (ServantStatusParameterGauge_o *)this,
                            4,
                            v28->fields.luck,
                            0);
                          v29 = item->fields.transformedServantLimitEntity;
                          if ( v29 )
                          {
                            this = v4[11];
                            if ( this )
                            {
                              ServantStatusParameterGauge__Set(
                                (ServantStatusParameterGauge_o *)this,
                                5,
                                v29->fields.treasureDevice,
                                0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
  }
  CardImageLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetCardImageLimitCountStageSealAfterAtStageLimitCount(
                                                         item,
                                                         (const MethodInfo *)item);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v10);
  if ( !Master_object )
    goto LABEL_54;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          (int32_t)this,
          CardImageLimitCountStageSealAfterAtStageLimitCount,
          0) )
  {
    this = (ServantStatusFlavorTextListViewItemDrawParam_o *)((__int64 (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, _QWORD, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
                                                               v4,
                                                               **(_QWORD **)(qword_594C0B8 + 184),
                                                               (*v4)[2].fields.agilityGauge);
    goto LABEL_39;
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_54;
  CondTitle = ServantLimitAddEntity__GetCondTitle(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
  ((void (__fastcall *)(ServantStatusFlavorTextListViewItemDrawParam_o **, System_String_o *, struct ServantStatusParameterGauge_o *))(*v4)[2].fields.defenseGauge)(
    v4,
    CondTitle,
    (*v4)[2].fields.agilityGauge);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_54;
  OverwriteServantParameter = (int *)ServantLimitAddEntity__GetOverwriteServantParameter(entity, 0);
  if ( OverwriteServantParameter && OverwriteServantParameter[6] >= 6 )
  {
    defenseGauge = OverwriteServantParameter[8];
    defenseGauge_high = OverwriteServantParameter[9];
    agilityGauge = OverwriteServantParameter[10];
    agilityGauge_high = OverwriteServantParameter[11];
    magicGauge = OverwriteServantParameter[12];
    magicGauge_high = OverwriteServantParameter[13];
    goto LABEL_53;
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
LABEL_54:
    sub_21FFECC(this, item);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitAddEntity__HasServantParameterLimitCountKey(
                                                             entity,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_39:
    svtLimitEntity = item->fields.svtLimitEntity;
    if ( svtLimitEntity )
    {
      this = v4[6];
      if ( this )
      {
        ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 0, svtLimitEntity->fields.power, 0);
        v31 = item->fields.svtLimitEntity;
        if ( v31 )
        {
          this = v4[7];
          if ( this )
          {
            ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 1, v31->fields.defense, 0);
            v32 = item->fields.svtLimitEntity;
            if ( v32 )
            {
              this = v4[8];
              if ( this )
              {
                ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 2, v32->fields.agility, 0);
                v33 = item->fields.svtLimitEntity;
                if ( v33 )
                {
                  this = v4[9];
                  if ( this )
                  {
                    ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 3, v33->fields.magic, 0);
                    v34 = item->fields.svtLimitEntity;
                    if ( v34 )
                    {
                      this = v4[10];
                      if ( this )
                      {
                        ServantStatusParameterGauge__Set((ServantStatusParameterGauge_o *)this, 4, v34->fields.luck, 0);
                        v35 = item->fields.svtLimitEntity;
                        if ( v35 )
                        {
                          this = v4[11];
                          if ( this )
                          {
                            ServantStatusParameterGauge__Set(
                              (ServantStatusParameterGauge_o *)this,
                              5,
                              v35->fields.treasureDevice,
                              0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_54;
  }
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)entity;
  if ( !entity )
    goto LABEL_54;
  v14 = CardImageLimitCountStageSealAfterAtStageLimitCount >= 11
      ? 0
      : CardImageLimitCountStageSealAfterAtStageLimitCount;
  ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(entity, v14, 0);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_54;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantStatusListViewItem__get_SvtId(item, v17);
  if ( !MasterData_object )
    goto LABEL_54;
  this = (ServantStatusFlavorTextListViewItemDrawParam_o *)ServantLimitMaster__GetEntity(
                                                             (ServantLimitMaster_o *)MasterData_object,
                                                             (int32_t)this,
                                                             ServantParameterLimitCount,
                                                             0);
  if ( !this )
    goto LABEL_54;
  defenseGauge = (int32_t)this->fields.defenseGauge;
  defenseGauge_high = HIDWORD(this->fields.defenseGauge);
  agilityGauge = (int32_t)this->fields.agilityGauge;
  agilityGauge_high = HIDWORD(this->fields.agilityGauge);
  magicGauge = (int32_t)this->fields.magicGauge;
  magicGauge_high = HIDWORD(this->fields.magicGauge);
LABEL_53:
  ServantStatusFlavorTextListViewItemDrawParam__SetParameterGauge(
    (ServantStatusFlavorTextListViewItemDrawParam_o *)v4,
    defenseGauge,
    defenseGauge_high,
    agilityGauge,
    agilityGauge_high,
    magicGauge,
    magicGauge_high,
    v13);
}