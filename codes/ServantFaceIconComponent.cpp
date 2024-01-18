void __fastcall ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AB91 & 1) == 0 )
  {
    sub_B2C35C(&ServantFaceIconComponent_TypeInfo, v1);
    byte_418AB91 = 1;
  }
  ServantFaceIconComponent_TypeInfo->static_fields->SECRET_SERVANT_ID = 100001;
  ServantFaceIconComponent_TypeInfo->static_fields->SECRET_LIMIT_COUNT = 1;
}


void __fastcall ServantFaceIconComponent___ctor(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  this->fields.collectionStatus = 2;
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0LL);
}


void __fastcall ServantFaceIconComponent__AdjustDispLimitCountSpritePosY(
        ServantFaceIconComponent_o *this,
        float posY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_418AB87 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB87 = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, posY, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__AdjustIconLabelPos(
        ServantFaceIconComponent_o *this,
        float offsetX,
        float offsetY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s11
  float v14; // s12
  float v15; // s10
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AB8A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB8A = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform )
      goto LABEL_15;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_15;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v13 = v10;
    v14 = v11;
    v15 = v12;
    if ( !this->fields.isAdjustIconLabelPos )
    {
      this->fields.iconLabelInitPos.fields.x = v10;
      this->fields.iconLabelInitPos.fields.y = v11;
      this->fields.iconLabelInitPos.fields.z = v12;
    }
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
    {
LABEL_15:
      sub_B2C434(transform, v8);
    }
    v16.fields.x = v13 + offsetX;
    v16.fields.y = v14 + offsetY;
    v16.fields.z = v15;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0LL);
    this->fields.isAdjustIconLabelPos = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__AdjustIconLabelScale(
        ServantFaceIconComponent_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( (byte_418AB8C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB8C = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( !this->fields.isAdjustIconLabelScale )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform )
        goto LABEL_17;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_17;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      this->fields.iconLabelInitScale = localScale;
      if ( !transform )
        goto LABEL_17;
      this->fields.textLabelInitSize = UIIconLabel__GetTextLabelSize((UIIconLabel_o *)transform, 0LL);
    }
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( transform )
    {
      UIIconLabel__SetTextLabelPixelPerfect((UIIconLabel_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( transform )
      {
        transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
        if ( transform )
        {
          v11.fields.x = x;
          v11.fields.y = y;
          v11.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v11, 0LL);
          this->fields.isAdjustIconLabelScale = 1;
          return;
        }
      }
    }
LABEL_17:
    sub_B2C434(transform, v8);
  }
}


void __fastcall ServantFaceIconComponent__AdjustRaritySpritePosY(
        ServantFaceIconComponent_o *this,
        float posY,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raritySprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_B2C434(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, posY, 0LL);
}


void __fastcall ServantFaceIconComponent__Awake(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  unsigned int localPosition; // s0
  float v5; // s8
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite
    || (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)typeSprite,
                                        0LL),
        (typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
    || (v5 = *(float *)&localPosition,
        (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL) )
  {
    sub_B2C434(typeSprite, method);
  }
  v6.fields.y = -64.0;
  v6.fields.z = 0.0;
  v6.fields.x = v5;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v6, 0LL);
}


void __fastcall ServantFaceIconComponent__Blank(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *frameSprite; // x0

  if ( (byte_418AB66 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19471/*"img_commonbg_02"*/, method);
    byte_418AB66 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_B2C434(0LL, v3);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_19471/*"img_commonbg_02"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x21

  if ( (byte_418AB8E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&frameType);
    byte_418AB8E = 1;
  }
  classSprite = this->fields.classSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClass(classSprite, classId, frameType, 0LL);
}


void __fastcall ServantFaceIconComponent__Clear(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UISprite_o *backSprite; // x20
  const MethodInfo *v17; // x1
  UISprite_o *faceSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v24; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20

  if ( (byte_418AB65 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418AB65 = 1;
  }
  this->fields.info1 = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.info1, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.info2 = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.info2, 0LL, v10, v11, v12, v13, v14, v15);
  backSprite = this->fields.backSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(backSprite, 0LL);
  AtlasManager__SetCommon(this->fields.typeSprite, 0LL);
  faceSprite = this->fields.backSprite;
  if ( !faceSprite )
    goto LABEL_57;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_57;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.frameSprite;
  if ( !faceSprite )
    goto LABEL_57;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.typeSprite;
  if ( !faceSprite )
    goto LABEL_57;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.classSprite;
    if ( !faceSprite )
      goto LABEL_57;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.costumeIconSprite;
    if ( !faceSprite )
      goto LABEL_57;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.limitCountSprite;
    if ( !faceSprite )
      goto LABEL_57;
    faceSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceSprite, 0LL);
    if ( !faceSprite )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.limitCountIcon;
    if ( !faceSprite )
      goto LABEL_57;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)faceSprite, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v24 = this->fields.raritySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v24, 0LL);
    faceSprite = this->fields.raritySprite;
    if ( !faceSprite )
      goto LABEL_57;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !faceSprite )
      goto LABEL_57;
    UIIconLabel__Clear((UIIconLabel_o *)faceSprite, 0LL);
  }
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.shiningIcon;
    if ( faceSprite )
    {
      ShiningIconComponent__Clear((ShiningIconComponent_o *)faceSprite, 0LL);
      goto LABEL_56;
    }
LABEL_57:
    sub_B2C434(faceSprite, v17);
  }
LABEL_56:
  ServantFaceIconComponent__ClearEquip(this, v17);
}


void __fastcall ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_418AB80 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB80 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_31;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !noneEquipSprite )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_31;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    }
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !noneEquipSprite )
      goto LABEL_31;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !noneEquipSprite )
        goto LABEL_31;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_31:
      sub_B2C434(noneEquipSprite, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ClearEquip_30798348(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *equipSprite; // x21
  void *Instance; // x0
  __int64 v10; // x1
  char v11; // w20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *v18; // x20

  if ( (byte_418AB81 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&baseSvtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418AB81 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     baseSvtId,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (void *)SvtType__IsServant(*((_DWORD *)Instance + 21), 0LL);
          if ( this->fields.noneEquipSprite )
          {
            v11 = (char)Instance;
            Instance = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                         0LL);
            if ( Instance )
            {
              if ( (v11 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                {
                  Instance = this->fields.hideEquipSprite;
                  if ( !Instance )
                    goto LABEL_58;
                  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                Instance = this->fields.equipSprite;
                if ( !Instance )
                  goto LABEL_58;
                UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
                equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                {
                  Instance = this->fields.equipLimitCountSprite;
                  if ( !Instance )
                    goto LABEL_58;
                  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = (void *)UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                  return;
                raritySprite = this->fields.raritySprite;
                if ( raritySprite )
                {
                  Instance = this->fields.rarity2Sprite;
                  if ( Instance )
                  {
                    UISprite__set_spriteName((UISprite_o *)Instance, raritySprite->fields.mSpriteName, 0LL);
                    Instance = this->fields.rarity2Sprite;
                    if ( Instance )
                    {
                      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 848LL));
                      return;
                    }
                  }
                }
              }
              else
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                v16 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
                {
                  Instance = this->fields.hideEquipSprite;
                  if ( !Instance )
                    goto LABEL_58;
                  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                Instance = this->fields.equipSprite;
                if ( !Instance )
                  goto LABEL_58;
                UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
                v17 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
                {
                  Instance = this->fields.equipLimitCountSprite;
                  if ( !Instance )
                    goto LABEL_58;
                  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                v18 = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
                  return;
                Instance = this->fields.rarity2Sprite;
                if ( Instance )
                {
                  UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_58:
    sub_B2C434(Instance, v10);
  }
}


void __fastcall ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0LL, 0LL), (faceSprite = this->fields.faceSprite) == 0LL) )
    sub_B2C434(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
}


void __fastcall ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_B2C434(0LL, method);
  ShiningIconComponent__Clear(shiningIcon, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__FaceSpriteDisp(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *faceSprite; // x0
  bool v6; // w1

  faceSprite = (UnityEngine_Component_o *)this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_11;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0LL);
  if ( !faceSprite )
    goto LABEL_11;
  if ( !flag )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0LL);
    faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( faceSprite )
    {
      faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0LL);
      if ( faceSprite )
      {
        v6 = 0;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_B2C434(faceSprite, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 1, 0LL);
  faceSprite = (UnityEngine_Component_o *)this->fields.iconLabel;
  if ( !faceSprite )
    goto LABEL_11;
  faceSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(faceSprite, 0LL);
  if ( !faceSprite )
    goto LABEL_11;
  v6 = 1;
LABEL_10:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, v6, 0LL);
}


System_String_o *__fastcall ServantFaceIconComponent__GetFaceSpriteName(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *faceSprite; // x8

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    sub_B2C434(this, method);
  return faceSprite->fields.mSpriteName;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantFaceIconComponent__GetIconLimitCountSealAfter(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t iconLimit,
        const MethodInfo *method)
{
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_418AB8F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418AB8F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           iconLimit,
           0LL);
}


void __fastcall ServantFaceIconComponent__HideEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_418AB85 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB85 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_31;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !noneEquipSprite )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_31;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 1, 0LL);
    }
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !noneEquipSprite )
      goto LABEL_31;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !noneEquipSprite )
        goto LABEL_31;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_31:
      sub_B2C434(noneEquipSprite, v4);
    }
  }
}


bool __fastcall ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v5; // x1
  struct UIMeshSprite_o *v6; // x8

  if ( (byte_418AB86 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB86 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL);
  if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
  {
    v6 = this->fields.equipSprite;
    if ( !v6 )
      goto LABEL_14;
    if ( !System_String__IsNullOrEmpty(v6->fields.mSpriteName, 0LL) )
      return 1;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite
      || (noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL)) == 0LL )
    {
LABEL_14:
      sub_B2C434(noneEquipSprite, v5);
    }
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)noneEquipSprite, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall ServantFaceIconComponent__NoMount(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_418AB67 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19491/*"img_frames_nodata"*/, method);
    byte_418AB67 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B2C434(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19491/*"img_frames_nodata"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_418AB68 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19492/*"img_frames_nodata3"*/, method);
    byte_418AB68 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B2C434(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19492/*"img_frames_nodata3"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NotHaveServantSet(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantData,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v13; // x3
  int32_t IconLimitCountSealAfter; // w0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // [xsp+38h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_418AB6C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantData);
    byte_418AB6C = 1;
  }
  if ( servantData )
  {
    v10 = *(_QWORD *)&servantData->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0LL);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_30790452(
      this,
      v11,
      servantData->fields.limitCount,
      IconLimitCountSealAfter,
      servantData->fields.exceedCount,
      info1,
      info2,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      v16);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)servantData);
  }
}


void __fastcall ServantFaceIconComponent__OnDestroy(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall ServantFaceIconComponent__ParameterChange(
        ServantFaceIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ServantFaceIconComponent__SetIconLabel(this, count, method);
  return 1;
}


void __fastcall ServantFaceIconComponent__ResetIconLabelPos(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0

  if ( (byte_418AB8B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB8B = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( this->fields.isAdjustIconLabelPos )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform
        || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
      {
        sub_B2C434(transform, v4);
      }
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.iconLabelInitPos, 0LL);
    }
    this->fields.isAdjustIconLabelPos = 0;
  }
}


void __fastcall ServantFaceIconComponent__ResetIconLabelScale(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v4; // x1
  UIIconLabel_o *transform; // x0
  UnityEngine_Vector2Int_o textLabelInitSize; // 0:x1.8

  if ( (byte_418AB8D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB8D = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( this->fields.isAdjustIconLabelScale )
    {
      transform = this->fields.iconLabel;
      if ( !transform
        || (textLabelInitSize = this->fields.textLabelInitSize,
            UIIconLabel__SetTextLabelSize(transform, textLabelInitSize, 0LL),
            (transform = this->fields.iconLabel) == 0LL)
        || (transform = (UIIconLabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
      {
        sub_B2C434(transform, v4);
      }
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.iconLabelInitScale, 0LL);
    }
    this->fields.isAdjustIconLabelScale = 0;
  }
}


void __fastcall ServantFaceIconComponent__Set(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int128 v17; // q1
  int64_t v18; // x25
  int32_t IconLimitCount; // w25
  int32_t v20; // w0
  WebViewManager_o *Instance; // x0
  __int64 v22; // x1
  WarQuestSelectionMaster_o *v23; // x0
  __int64 v24; // x26
  __int64 v25; // x27
  ServantLimitImageMaster_o *v26; // x24
  int32_t v27; // w24
  int32_t v28; // w25
  int32_t v29; // w0
  int32_t exceedCount; // w26
  int32_t v31; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  const MethodInfo *v34; // x1
  int32_t FriendIconLimitCount; // w24
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v37; // x26
  __int64 v38; // x27
  ServantLimitImageMaster_o *v39; // x25
  int32_t ServantImageLimitSealAfter; // w24
  int32_t v41; // w25
  int32_t v42; // w0
  __int64 v43; // x21
  __int64 v44; // x22
  __int64 v45; // x0
  const MethodInfo *v46; // x3
  __int64 v47; // x0
  const MethodInfo *v48; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_418AB69 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtEntity);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418AB69 = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  v17 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v49 = v50;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v18 != NetworkManager__get_UserId(0LL) )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v38 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v39 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v38;
      *(_QWORD *)&v52.fields.fakeValue = v37;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v52, 0LL);
      if ( v39 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v39,
                                       (int32_t)Instance,
                                       FriendIconLimitCount,
                                       0LL);
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.svtId, 0LL);
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.limitCount, 0LL);
        ServantFaceIconComponent__Set_30790452(
          this,
          v41,
          v42,
          ServantImageLimitSealAfter,
          userSvtEntity->fields.exceedCount,
          info1,
          info2,
          2,
          0,
          0,
          0LL,
          0,
          userSvtEntity->fields.lv,
          0,
          0,
          v48);
        goto LABEL_27;
      }
    }
LABEL_35:
    sub_B2C434(Instance, v22);
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
  if ( questRestrictionInfo )
  {
    v20 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userSvtEntity, 0LL);
    if ( v20 >= 0 )
      IconLimitCount = v20;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v23 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v26 = (ServantLimitImageMaster_o *)v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v25;
  *(_QWORD *)&v51.fields.fakeValue = v24;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51, 0LL);
  if ( !v26 )
    goto LABEL_35;
  v27 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v26, (int32_t)Instance, IconLimitCount, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.svtId, 0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  v31 = v29;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  ServantFaceIconComponent__Set_30790452(
    this,
    v28,
    v31,
    v27,
    exceedCount,
    info1,
    info2,
    2,
    IsNew,
    IsEventJoin,
    0LL,
    0,
    userSvtEntity->fields.lv,
    0,
    0,
    v48);
LABEL_27:
  if ( equipIdList && *(_QWORD *)&equipIdList->max_length )
  {
    v44 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v44;
    *(_QWORD *)&v53.fields.fakeValue = v43;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
    if ( !equipIdList->max_length )
    {
      v47 = sub_B2C460(v45);
      sub_B2C400(v47, 0LL);
    }
    ServantFaceIconComponent__SetEquip_30792872(this, v45, equipIdList->m_Items[0], v46);
  }
  else
  {
    ServantFaceIconComponent__ClearEquip(this, v34);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetClassSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        bool isServantEquip,
        int32_t classId,
        int32_t frameType,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v13; // x0
  __int64 v14; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v16; // x22

  if ( (byte_418AB7B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, isCommandCode);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_418AB7B = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UISprite_o *)UnityEngine_Object__op_Equality(classSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (collectionStatus | 4) == 4)
      || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v13 = this->fields.classSprite;
      if ( v13 )
      {
LABEL_10:
        UISprite__set_spriteName(v13, 0LL, 0LL);
        return;
      }
LABEL_19:
      sub_B2C434(v13, v14);
    }
    v16 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v16 )
      {
        v13 = v16;
        goto LABEL_10;
      }
      goto LABEL_19;
    }
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetClass(v16, classId, frameType, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetCommandCode(
        ServantFaceIconComponent_o *this,
        int32_t commandCodeId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t collectionStatus,
        bool isNew,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  DataManager_o *v22; // x23
  UnityEngine_Object_o *Component_WebViewObject; // x26
  const MethodInfo *v24; // x5
  int32_t lastFrameTime_low; // w23
  UnityEngine_Object_o *equipSprite; // x24
  UnityEngine_Object_o *hideEquipSprite; // x24
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x5
  UnityEngine_Object_o *shiningIcon; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v49; // x1
  const MethodInfo *v50; // x2

  if ( (byte_418AB7A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&StringLiteral_19491/*"img_frames_nodata"*/, v18);
    sub_B2C35C(&StringLiteral_19320/*"icon_common_new01"*/, v19);
    byte_418AB7A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_66;
  v22 = Instance;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.faceSprite,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_66;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_WebViewObject, 0LL);
  }
  if ( !v22 )
LABEL_66:
    sub_B2C434(Instance, v21);
  lastFrameTime_low = LODWORD(v22->fields.lastFrameTime);
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus == 2 || collectionStatus == 1 )
  {
    backSprite = this->fields.backSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeBaseIcon(backSprite, lastFrameTime_low, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.faceSprite, commandCodeId, 0LL);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  else if ( !collectionStatus )
  {
    Instance = (DataManager_o *)this->fields.backSprite;
    if ( !Instance )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19491/*"img_frames_nodata"*/, 0LL);
    Instance = (DataManager_o *)this->fields.faceSprite;
    if ( !Instance )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_66;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
      {
        Instance = (DataManager_o *)this->fields.hideEquipSprite;
        if ( !Instance )
          goto LABEL_66;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_66;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
        if ( !Instance )
          goto LABEL_66;
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
    }
  }
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, v24);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v30);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v31);
  ServantFaceIconComponent__SetRaritySprite(this, 1, lastFrameTime_low, 0, 0, v32);
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    if ( isNew && this->fields.collectionStatus != 6 )
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Set_32979924(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_19320/*"icon_common_new01"*/,
          0LL);
        goto LABEL_57;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
        goto LABEL_57;
      }
    }
    goto LABEL_66;
  }
LABEL_57:
  ServantFaceIconComponent__ClearEquip(this, v21);
  if ( info1 && !IconLabelInfo__IsClear(info1, 0LL) )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v41 = (System_Int32_array **)info1;
  }
  else
  {
    this->fields.info1 = 0LL;
    p_info1 = &this->fields.info1;
    v41 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_info1, v41, v34, v35, v36, v37, v38, v39);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0LL) )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v49 = (System_Int32_array **)info2;
  }
  else
  {
    this->fields.info2 = 0LL;
    p_info2 = &this->fields.info2;
    v49 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_info2, v49, v42, v43, v44, v45, v46, v47);
  ServantFaceIconComponent__SetIconLabel(this, 0, v50);
}


void __fastcall ServantFaceIconComponent__SetCostumeIcon(
        ServantFaceIconComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *costumeIconSprite; // x21
  __int64 v9; // x1
  UISprite_o *transform; // x0
  int32_t v11; // w20
  int32_t iconId; // t1
  UISprite_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AB90 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, svtCostumeEntity);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_22475/*"svt_costume_icon_"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418AB90 = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_23;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = this->fields.costumeIconSprite;
        v14 = System_Int32__ToString(v11, 0LL);
        v15 = System_String__Concat_44305532((System_String_o *)StringLiteral_22475/*"svt_costume_icon_"*/, v14, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEventSprite(v13, v15, 0LL) )
        {
          transform = this->fields.costumeIconSprite;
          if ( transform )
          {
            UIWidget__set_pivot((UIWidget_o *)transform, 4, 0LL);
            transform = this->fields.costumeIconSprite;
            if ( transform )
            {
              transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v16.fields.x = -47.0;
                v16.fields.y = -42.0;
                v16.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0LL);
                transform = this->fields.costumeIconSprite;
                if ( transform )
                {
                  UIWidget__set_width((UIWidget_o *)transform, 34, 0LL);
                  transform = this->fields.costumeIconSprite;
                  if ( transform )
                  {
                    UIWidget__set_height((UIWidget_o *)transform, 34, 0LL);
                    transform = this->fields.costumeIconSprite;
                    if ( transform )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_23:
          sub_B2C434(transform, v9);
        }
      }
    }
  }
}


void __fastcall ServantFaceIconComponent__SetDataLost(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x23
  int32_t v20; // w23
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v22; // w25
  int32_t CardImageLimitCount; // w0
  const MethodInfo *v24; // x5
  int32_t maxLimitCount; // w25
  int32_t v26; // w24
  bool IsNew; // w0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_418AB70 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418AB70 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v18 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v18;
    *(_QWORD *)&v30.fields.fakeValue = v17;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
    if ( !v19
      || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v19,
            (int32_t)Instance,
            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtColEntity->fields.svtId, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_18:
      sub_B2C434(Instance, v15);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v20,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtColEntity->fields.svtId, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v22, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( userSvtColEntity->fields.status )
    {
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      v26 = CardImageLimitCount;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
      ServantFaceIconComponent__Set_30790452(
        this,
        v20,
        maxLimitCount,
        v26,
        0,
        info1,
        info2,
        7,
        IsNew,
        0,
        0LL,
        0,
        0,
        0,
        0,
        v29);
      ServantFaceIconComponent__ClearEquip(this, v28);
    }
    else
    {
      ServantFaceIconComponent__Set_30795548(this, userSvtColEntity, info1, info2, 0, v24);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__SetDataNotOpened(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w0
  int32_t limitCount; // w22
  int32_t v14; // w23
  ServantFaceIconComponent_c *v15; // x8
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // [xsp+38h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v8 = this;
  if ( (byte_418AB71 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    this = (ServantFaceIconComponent_o *)sub_B2C35C(&ServantFaceIconComponent_TypeInfo, v9);
    byte_418AB71 = 1;
  }
  if ( !equipTargetInfo )
    sub_B2C434(this, equipTargetInfo);
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  limitCount = equipTargetInfo->fields.limitCount;
  v14 = v12;
  v15 = ServantFaceIconComponent_TypeInfo;
  if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
    v15 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_30790452(
    v8,
    v14,
    limitCount,
    v15->static_fields->SECRET_LIMIT_COUNT,
    0,
    info1,
    info2,
    6,
    0,
    0,
    0LL,
    0,
    0,
    0,
    0,
    v17);
  ServantFaceIconComponent__ClearEquip(v8, v16);
}


void __fastcall ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_B2C434(0LL, flag);
  UnityEngine_Behaviour__set_enabled(classSprite, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetDispLimitCountIcon(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *limitCountIcon; // x0

  limitCountIcon = (UnityEngine_Component_o *)this->fields.limitCountIcon;
  if ( !limitCountIcon
    || (limitCountIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(limitCountIcon, 0LL)) == 0LL )
  {
    sub_B2C434(limitCountIcon, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountIcon, flag, 0LL);
}


void __fastcall ServantFaceIconComponent__SetDispRaritySprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *raritySprite; // x0

  raritySprite = (UnityEngine_Behaviour_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_B2C434(0LL, flag);
  UnityEngine_Behaviour__set_enabled(raritySprite, flag, 0LL);
}


void __fastcall ServantFaceIconComponent__SetEquip(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  __int64 v8; // x8
  int32_t v9; // w20
  int32_t v10; // w3
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_418AB6E & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    byte_418AB6E = 1;
  }
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v6;
    *(_QWORD *)&v12.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
    ServantFaceIconComponent__SetEquip_30794844(this, 0, v9, v10, v11);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userServantEntity);
  }
}


void __fastcall ServantFaceIconComponent__SetEquipDangling(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  const MethodInfo *v7; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_418AB7F & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, info);
    byte_418AB7F = 1;
  }
  ServantFaceIconComponent__NoMount(this, (const MethodInfo *)info);
  if ( info )
  {
    v6 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL) )
      ServantFaceIconComponent__SetEquip_30797848(this, 0, info, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_30792872(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *equipSprite; // x22
  const MethodInfo *v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w0
  __int64 v20; // x8
  int32_t v21; // w21
  int32_t v22; // w3
  const MethodInfo *v23; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_418AB82 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&baseSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418AB82 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    if ( userSvtId < 1 )
      goto LABEL_15;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v14);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               userSvtId,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity )
    {
      v16 = Entity;
      v18 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v24.fields.currentCryptoKey = v18;
      *(_QWORD *)&v24.fields.fakeValue = v17;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
      v20 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v25.fields.fakeValue = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
      v21 = v19;
      *(_QWORD *)&v25.fields.currentCryptoKey = v20;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL);
      ServantFaceIconComponent__SetEquip_30794844(this, baseSvtId, v21, v22, v23);
    }
    else
    {
LABEL_15:
      ServantFaceIconComponent__ClearEquip_30798348(this, baseSvtId, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_30794844(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *equipSprite; // x23
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x22
  UISprite_o *v18; // x22
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Component_o *v20; // x21
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8

  if ( (byte_418AB84 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418AB84 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    if ( svtId >= 1 )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
      if ( noneEquipSprite )
      {
        noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
        if ( noneEquipSprite )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
          hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
          {
            noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
            if ( !noneEquipSprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
            if ( !noneEquipSprite )
              goto LABEL_41;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
          }
          v18 = (UISprite_o *)this->fields.equipSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEquipFace(v18, svtId, 0LL);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
          {
            noneEquipSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !noneEquipSprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)noneEquipSprite,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !noneEquipSprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           (DataMasterBase_WarMaster__WarEntity__int__o *)noneEquipSprite,
                                                           svtId,
                                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !this->fields.equipLimitCountSprite )
              goto LABEL_41;
            v20 = noneEquipSprite;
            noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                           0LL);
            if ( !v20 || !noneEquipSprite )
              goto LABEL_41;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)noneEquipSprite,
              v20[3].fields.m_CachedPtr <= limitCount && v20[3].fields.m_CachedPtr > 0,
              0LL);
          }
          rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL);
          if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
          {
            raritySprite = this->fields.raritySprite;
            if ( !raritySprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
            if ( !noneEquipSprite )
              goto LABEL_41;
            UISprite__set_spriteName((UISprite_o *)noneEquipSprite, raritySprite->fields.mSpriteName, 0LL);
            noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
            if ( !noneEquipSprite )
              goto LABEL_41;
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))noneEquipSprite->klass[2]._1.typeMetadataHandle)(
              noneEquipSprite,
              noneEquipSprite->klass[2]._1.interopData);
          }
          noneEquipSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( noneEquipSprite )
          {
            UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_41:
      sub_B2C434(noneEquipSprite, v14);
    }
    ServantFaceIconComponent__ClearEquip_30798348(this, baseSvtId, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_30797848(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        EquipTargetInfo_o *equipTarget,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  const MethodInfo *v12; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_418AB83 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&baseSvtId);
    byte_418AB83 = 1;
  }
  if ( !equipTarget )
    goto LABEL_12;
  v8 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL) >= 1 )
  {
    v10 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v10;
    *(_QWORD *)&v14.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
    ServantFaceIconComponent__SetEquip_30794844(this, baseSvtId, v11, equipTarget->fields.limitCount, v12);
  }
  else
  {
LABEL_12:
    ServantFaceIconComponent__ClearEquip_30798348(this, baseSvtId, (const MethodInfo *)equipTarget);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEventBonus(
        ServantFaceIconComponent_o *this,
        int32_t iconId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  int32_t FrameType; // w0
  UISprite_o *backSprite; // x23
  int32_t v17; // w22
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v25; // x1
  UISprite_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_418AB79 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Rarity_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_20256/*"listframes_shadow"*/, v11);
    byte_418AB79 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_60;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, v14);
  backSprite = this->fields.backSprite;
  v17 = FrameType;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceBaseIcon(backSprite, v17, 0, 0LL);
  AtlasManager__SetFaceImage(this->fields.faceSprite, iconId, 0, 0LL);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_60;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20256/*"listframes_shadow"*/, 0LL);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v17, 0, 0LL);
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_60;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_60;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_60;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.classSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.limitCountSprite;
    if ( !Instance )
      goto LABEL_60;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.limitCountIcon;
    if ( !Instance )
      goto LABEL_60;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)Instance, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v26 = this->fields.raritySprite;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0LL);
    if ( v26 )
    {
      UISprite__set_spriteName(v26, (System_String_o *)Instance, 0LL);
      Instance = (DataManager_o *)this->fields.raritySprite;
      if ( Instance )
      {
        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
          Instance,
          Instance->klass[2]._1.interopData);
        goto LABEL_59;
      }
    }
LABEL_60:
    sub_B2C434(Instance, v13);
  }
LABEL_59:
  ServantFaceIconComponent__ClearEquip(this, v25);
  ServantFaceIconComponent__SetIconLabel(this, 0, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetIconLabel(
        ServantFaceIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  char v3; // w19
  UnityEngine_Object_o *iconLabel; // x21
  IconLabelInfo_o *info1; // x1
  int32_t collectionStatus; // w8
  UIIconLabel_o *v8; // x0

  v3 = count;
  if ( (byte_418AB88 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    byte_418AB88 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    info1 = this->fields.info1;
    if ( !info1 && !this->fields.info2 || (collectionStatus = this->fields.collectionStatus, collectionStatus == 7) )
    {
      v8 = this->fields.iconLabel;
      if ( v8 )
      {
        UIIconLabel__Clear(v8, 0LL);
        return;
      }
LABEL_20:
      sub_B2C434(v8, info1);
    }
    if ( this->fields.info2 )
    {
      v8 = this->fields.iconLabel;
      if ( (v3 & 1) != 0 )
        info1 = this->fields.info2;
      if ( !v8 )
        goto LABEL_20;
    }
    else
    {
      v8 = this->fields.iconLabel;
      if ( !v8 )
        goto LABEL_20;
    }
    if ( collectionStatus == 4 )
      UIIconLabel__Set_41614764(v8, info1, 1, 0LL);
    else
      UIIconLabel__Set(v8, info1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetLimitCountIcon(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t limitMax,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountIcon; // x23
  __int64 v10; // x1
  LimitCountIconComponent_o *v11; // x0
  int32_t collectionStatus; // w8

  if ( (byte_418AB7D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isCommandCode);
    byte_418AB7D = 1;
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(limitCountIcon, 0LL, 0LL) )
  {
    if ( isCommandCode )
    {
      v11 = this->fields.limitCountIcon;
      if ( !v11 )
LABEL_16:
        sub_B2C434(v11, v10);
      goto LABEL_15;
    }
    collectionStatus = this->fields.collectionStatus;
    v11 = this->fields.limitCountIcon;
    if ( !collectionStatus || (collectionStatus & 0xFFFFFFFC) == 4 )
    {
      if ( !v11 )
        goto LABEL_16;
LABEL_15:
      LimitCountIconComponent__Clear(v11, 0LL);
      return;
    }
    if ( !v11 )
      goto LABEL_16;
    LimitCountIconComponent__Set(v11, limitCount, limitMax, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetLimitCountSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t limitMax,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitCountSprite; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  int32_t collectionStatus; // w8
  bool v13; // w1

  if ( (byte_418AB7C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isCommandCode);
    byte_418AB7C = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(limitCountSprite, 0LL, 0LL) )
  {
    if ( isCommandCode )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( !gameObject )
        goto LABEL_19;
    }
    else
    {
      collectionStatus = this->fields.collectionStatus;
      gameObject = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( collectionStatus && (collectionStatus & 0xFFFFFFFC) != 4 )
      {
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
LABEL_19:
          sub_B2C434(gameObject, v10);
        }
        v13 = limitMax > 0 && limitCount >= limitMax;
        goto LABEL_18;
      }
      if ( !gameObject )
        goto LABEL_19;
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v13 = 0;
LABEL_18:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetRaritySprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *raritySprite; // x24
  System_String_o *Icon; // x0
  __int64 v18; // x1
  int32_t collectionStatus; // w8
  struct UISprite_o *v20; // x21
  System_String_o *v21; // x1
  System_String_o *Icon_21889892; // x23
  const MethodInfo *v23; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v25; // w22
  UISprite_o *v26; // x20
  AtlasManager_c *v27; // x8
  int32_t RarityIcon; // w0

  if ( (byte_418AB7E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, isCommandCode);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Rarity_TypeInfo, v15);
    byte_418AB7E = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Icon = (System_String_o *)UnityEngine_Object__op_Equality(raritySprite, 0LL, 0LL);
  if ( ((unsigned __int8)Icon & 1) == 0 )
  {
    collectionStatus = this->fields.collectionStatus;
    if ( isCommandCode )
    {
      v20 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon = Rarity__getIcon(rarity, 0LL);
        if ( !v20 )
          goto LABEL_48;
        v21 = Icon;
        Icon = (System_String_o *)v20;
        goto LABEL_14;
      }
      if ( !v20 )
        goto LABEL_48;
      Icon = (System_String_o *)this->fields.raritySprite;
      goto LABEL_22;
    }
    if ( (collectionStatus | 4) == 4 || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      Icon = (System_String_o *)this->fields.raritySprite;
      if ( !Icon )
        goto LABEL_48;
LABEL_22:
      UISprite__set_spriteName((UISprite_o *)Icon, 0LL, 0LL);
      return;
    }
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon_21889892 = Rarity__getIcon_21889892(rarity, exceedCount, lv, 0LL);
    if ( exceedCount <= 0 )
    {
      v26 = this->fields.raritySprite;
      v27 = AtlasManager_TypeInfo;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_42:
        AtlasManager__SetCommon(v26, 0LL);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_48;
        v21 = Icon_21889892;
LABEL_14:
        UISprite__set_spriteName((UISprite_o *)Icon, v21, 0LL);
        goto LABEL_15;
      }
    }
    else
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Icon = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !Icon )
        goto LABEL_48;
      Entity = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Icon, rarity, exceedCount, v23);
      v25 = Entity ? Entity->fields.rarityIcon : 0;
      Icon = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !Icon )
        goto LABEL_48;
      RarityIcon = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Icon, rarity, lv, v25, 0LL);
      v26 = this->fields.raritySprite;
      v27 = AtlasManager_TypeInfo;
      if ( RarityIcon >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v26, Icon_21889892, 0LL);
LABEL_15:
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( Icon )
        {
          ((void (__fastcall *)(System_String_o *, void *))Icon->klass[1]._1.typeMetadataHandle)(
            Icon,
            Icon->klass[1]._1.interopData);
          return;
        }
LABEL_48:
        sub_B2C434(Icon, v18);
      }
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_42;
    }
    if ( !v27->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v27);
    goto LABEL_42;
  }
}


void __fastcall ServantFaceIconComponent__Set_30719352(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  __int128 v14; // q1
  int32_t v15; // w23
  int64_t v16; // x24
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v18; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v20; // x25
  __int64 v21; // x26
  int32_t v22; // w24
  int32_t v23; // w0
  int32_t exceedCount; // w25
  int32_t v25; // w26
  bool IsNew; // w27
  bool IsEventJoin; // w0
  const MethodInfo *v28; // x1
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v30; // x3
  int32_t v31; // w0
  __int64 v32; // x25
  __int64 v33; // x26
  int32_t v34; // w24
  int32_t v35; // w0
  const MethodInfo *v36; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_418AB6B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userSvtEntity);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_418AB6B = 1;
  }
  if ( userSvtEntity )
  {
    v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v12;
    *(_QWORD *)&v39.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
    v14 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v15 = v13;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v37 = v38;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v37, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v16 == NetworkManager__get_UserId(0LL) )
    {
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v15,
                                  (int32_t)IconLimitCount,
                                  v18);
      v21 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v20 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v22 = IconLimitCountSealAfter;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v40.fields.currentCryptoKey = v21;
      *(_QWORD *)&v40.fields.fakeValue = v20;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v25 = v23;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30790452(
        this,
        v15,
        v25,
        v22,
        exceedCount,
        info1,
        info2,
        2,
        IsNew,
        IsEventJoin,
        0LL,
        0,
        userSvtEntity->fields.lv,
        0,
        0,
        v36);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0LL);
      v31 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v15,
              (int32_t)FriendIconLimitCount,
              v30);
      v33 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v32 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v34 = v31;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v41.fields.currentCryptoKey = v33;
      *(_QWORD *)&v41.fields.fakeValue = v32;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
      ServantFaceIconComponent__Set_30790452(
        this,
        v15,
        v35,
        v34,
        userSvtEntity->fields.exceedCount,
        info1,
        info2,
        2,
        0,
        0,
        0LL,
        0,
        userSvtEntity->fields.lv,
        0,
        0,
        v36);
    }
    ServantFaceIconComponent__ClearEquip(this, v28);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30720044(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  int32_t IconLimitCount; // w24
  __int64 v15; // x25
  __int64 v16; // x27
  ServantFaceIconComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w25
  __int64 v20; // x27
  __int64 v21; // x28
  const MethodInfo *v22; // x1
  __int64 v23; // x27
  __int64 v24; // x28
  int32_t v25; // w0
  int32_t limitCount; // w27
  int32_t exceedCount; // w26
  int64_t userId; // x21
  int32_t v29; // w28
  bool IsNew; // w0
  int32_t v31; // w0
  const MethodInfo *v32; // x1
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w0
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // [xsp+38h] [xbp-68h]
  IconLabelInfo_o *info1a; // [xsp+48h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_418AB73 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantLeaderInfo);
    sub_B2C35C(&OtherUserNewManager_TypeInfo, v13);
    byte_418AB73 = 1;
  }
  if ( servantLeaderInfo )
  {
    info1a = info1;
    IconLimitCount = ServantLeaderInfo__getIconLimitCount(servantLeaderInfo, 0LL);
    if ( !ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v16 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v16;
      *(_QWORD *)&v39.fields.fakeValue = v15;
      v17 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
      IconLimitCount = ServantFaceIconComponent__GetIconLimitCountSealAfter(v17, (int32_t)v17, IconLimitCount, v18);
    }
    if ( ServantLeaderInfo__IsHideSupport(servantLeaderInfo, 0LL) )
    {
      v19 = 4;
    }
    else if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v19 = 5;
    }
    else
    {
      v19 = 2;
    }
    v21 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v40.fields.currentCryptoKey = v21;
    *(_QWORD *)&v40.fields.fakeValue = v20;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL) )
    {
      v24 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( isNewIconDisp )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v41.fields.currentCryptoKey = v24;
        *(_QWORD *)&v41.fields.fakeValue = v23;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
        limitCount = servantLeaderInfo->fields.limitCount;
        exceedCount = servantLeaderInfo->fields.exceedCount;
        userId = servantLeaderInfo->fields.userId;
        v29 = v25;
        if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        }
        IsNew = OtherUserNewManager__IsNew(userId, 0LL);
        ServantFaceIconComponent__Set_30790452(
          this,
          v29,
          limitCount,
          IconLimitCount,
          exceedCount,
          info1a,
          info2,
          v19,
          IsNew,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v37);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v42.fields.currentCryptoKey = v24;
        *(_QWORD *)&v42.fields.fakeValue = v23;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
        ServantFaceIconComponent__Set_30790452(
          this,
          v31,
          servantLeaderInfo->fields.limitCount,
          IconLimitCount,
          servantLeaderInfo->fields.exceedCount,
          info1a,
          info2,
          v19,
          0,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v37);
      }
    }
    else
    {
      ServantFaceIconComponent__NoMount(this, v22);
    }
    if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0LL) )
    {
      ServantFaceIconComponent__HideEquip(this, v32);
    }
    else
    {
      v34 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v43.fields.currentCryptoKey = v34;
      *(_QWORD *)&v43.fields.fakeValue = v33;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL);
      ServantFaceIconComponent__SetEquip_30797848(this, v35, servantLeaderInfo->fields.equipTarget1, v36);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__Set_30790452(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageLimitCount,
        int32_t exceedCount,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t collectionStatus,
        bool isNew,
        bool isTemporarySubscription,
        ServantCostumeEntity_o *svtCostumeEntity,
        bool isCheckSeal,
        int32_t lv,
        int32_t imageSvtId,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v37; // x1
  _DWORD *v38; // x24
  UnityEngine_Object_o *Component_WebViewObject; // x22
  int32_t v40; // w22
  int32_t v41; // w27
  int32_t v42; // w25
  const MethodInfo *v43; // x5
  const MethodInfo *v44; // x3
  int32_t FrameType_30786888; // w28
  int32_t v46; // w27
  int32_t FrameType; // w28
  const MethodInfo *v48; // x2
  UISprite_o *backSprite; // x23
  const MethodInfo *v50; // x2
  UISprite_o *faceSprite; // x20
  UISprite_o *v52; // x20
  bool IsServantEquip; // w0
  const MethodInfo *v54; // x5
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // x5
  UnityEngine_Object_o *shiningIcon; // x20
  __int64 *v59; // x8
  UISprite_o *v60; // x20
  UISprite_o *v61; // x20
  UISprite_o *v62; // x20
  ServantFaceIconComponent_c *v63; // x0
  UnityEngine_Object_o *v64; // x20
  UnityEngine_Object_o *v65; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v81; // x1
  const MethodInfo *v82; // x2
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  struct IconLabelInfo_o *v86; // [xsp+0h] [xbp-70h]
  struct IconLabelInfo_o *v87; // [xsp+8h] [xbp-68h]
  int32_t rarity; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_418AB78 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v22);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v24);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v25);
    sub_B2C35C(&DataManager_TypeInfo, v26);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v28);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v29);
    sub_B2C35C(&ServantFaceIconComponent_TypeInfo, v30);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B2C35C(&StringLiteral_19491/*"img_frames_nodata"*/, v32);
    sub_B2C35C(&StringLiteral_19320/*"icon_common_new01"*/, v33);
    sub_B2C35C(&StringLiteral_20256/*"listframes_shadow"*/, v34);
    sub_B2C35C(&StringLiteral_19340/*"icon_eventjoin_01"*/, v35);
    byte_418AB78 = 1;
  }
  rarity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_134;
  v38 = Instance;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.faceSprite,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_134;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_WebViewObject, 0LL);
  }
  v40 = imageSvtId;
  if ( (imageLimitCount & 0x80000000) != 0 )
  {
    if ( svtId < 1 )
    {
      imageLimitCount = 0;
    }
    else
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
      imageLimitCount = (int)Instance;
      if ( isCheckSeal )
      {
        Instance = (DataManager_o *)ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                      (ServantFaceIconComponent_o *)Instance,
                                      svtId,
                                      (int32_t)Instance,
                                      v44);
        imageLimitCount = (int)Instance;
      }
    }
  }
  if ( !imageSvtId )
    v40 = svtId;
  v86 = info1;
  if ( !v38 )
    goto LABEL_134;
  v41 = frameLimitCount;
  v42 = v38[20];
  v87 = info2;
  if ( frameLimitCount >= 1 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Instance )
      goto LABEL_134;
    goto LABEL_32;
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v41 = limitCount;
  if ( !Instance )
LABEL_134:
    sub_B2C434(Instance, v37);
LABEL_32:
  FrameType_30786888 = ServantExceedMaster__GetFrameType_30786888(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         v41,
                         exceedCount,
                         v43);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Instance )
    goto LABEL_134;
  v46 = rarity;
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                rarity,
                lv,
                FrameType_30786888,
                0LL);
  ServantFaceIconComponent__SetCostumeIcon(this, 0LL, v48);
  this->fields.collectionStatus = collectionStatus;
  switch ( (int)svtCostumeEntity )
  {
    case 0:
      Instance = (DataManager_o *)this->fields.backSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19491/*"img_frames_nodata"*/, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      Instance = (DataManager_o *)AtlasManager__IsUseFaceBattle(0LL);
      faceSprite = this->fields.faceSprite;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetFaceImage(faceSprite, 0, 0, 0LL);
      }
      else
      {
        if ( !faceSprite )
          goto LABEL_134;
        UISprite__set_spriteName(this->fields.faceSprite, 0LL, 0LL);
      }
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
        goto LABEL_57;
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
        goto LABEL_125;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_125:
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
LABEL_127:
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
        goto LABEL_57;
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_57:
      IsServantEquip = SvtType__IsServantEquip(v38[21], 0LL);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, v42, FrameType, v54);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v38[22], limitCount, v55);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v38[22], limitCount, v56);
      ServantFaceIconComponent__SetRaritySprite(this, 0, v46, exceedCount, lv, v57);
      shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
        goto LABEL_99;
      if ( isTemporarySubscription && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
      {
        Instance = (DataManager_o *)this->fields.shiningIcon;
        if ( !Instance )
          goto LABEL_134;
        v59 = &StringLiteral_19340/*"icon_eventjoin_01"*/;
LABEL_98:
        ShiningIconComponent__Set_32979924((ShiningIconComponent_o *)Instance, (System_String_o *)*v59, 0LL);
        goto LABEL_99;
      }
      if ( isNew && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
      {
        Instance = (DataManager_o *)this->fields.shiningIcon;
        if ( !Instance )
          goto LABEL_134;
        v59 = &StringLiteral_19320/*"icon_common_new01"*/;
        goto LABEL_98;
      }
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( !Instance )
        goto LABEL_134;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
LABEL_99:
      ServantFaceIconComponent__ClearEquip(this, v37);
      if ( v86 && !IconLabelInfo__IsClear(v86, 0LL) )
      {
        this->fields.info1 = v86;
        p_info1 = &this->fields.info1;
        v73 = (System_Int32_array **)v86;
      }
      else
      {
        this->fields.info1 = 0LL;
        p_info1 = &this->fields.info1;
        v73 = 0LL;
      }
      sub_B2C2F8((BattleServantConfConponent_o *)p_info1, v73, v66, v67, v68, v69, v70, v71);
      if ( v87 && !IconLabelInfo__IsClear(v87, 0LL) )
      {
        this->fields.info2 = v87;
        p_info2 = &this->fields.info2;
        v81 = (System_Int32_array **)v87;
      }
      else
      {
        this->fields.info2 = 0LL;
        p_info2 = &this->fields.info2;
        v81 = 0LL;
      }
      sub_B2C2F8((BattleServantConfConponent_o *)p_info2, v81, v74, v75, v76, v77, v78, v79);
      ServantFaceIconComponent__SetIconLabel(this, 0, v82);
      return;
    case 1:
    case 2:
    case 3:
    case 5:
      backSprite = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(backSprite, FrameType, v42, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v40, imageLimitCount, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v50);
      goto LABEL_55;
    case 4:
      v52 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v52, FrameType, v42, 0LL);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0LL);
LABEL_55:
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20256/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v38[21], FrameType, v42, 0LL);
      goto LABEL_57;
    case 6:
      v61 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v61, FrameType, v42, 0LL);
      v62 = this->fields.faceSprite;
      v63 = ServantFaceIconComponent_TypeInfo;
      if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
        v63 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v62,
        v63->static_fields->SECRET_SERVANT_ID,
        v63->static_fields->SECRET_LIMIT_COUNT,
        0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20256/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v38[21], FrameType, v42, 0LL);
      v64 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v64, 0LL, 0LL) )
        goto LABEL_57;
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v65 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
        goto LABEL_127;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      goto LABEL_127;
    case 7:
      v60 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetDataLostFaceBaseIcon(v60, 0LL);
      AtlasManager__SetDataLostFace(this->fields.faceSprite, 0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      goto LABEL_57;
    default:
      goto LABEL_57;
  }
}


void __fastcall ServantFaceIconComponent__Set_30793276(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v14; // x4

  if ( (byte_418AB6A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418AB6A = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v12);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               userSvtId,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_30719352(this, Entity, info1, info2, v14);
  }
}


void __fastcall ServantFaceIconComponent__Set_30793916(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x25
  int32_t v15; // w0
  __int128 v16; // q1
  int32_t v17; // w23
  int64_t v18; // x25
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v20; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v22; // x26
  __int64 v23; // x27
  int32_t v24; // w25
  int32_t v25; // w0
  int32_t exceedCount; // w26
  int32_t v27; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  __int64 v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x3
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v34; // x3
  int32_t v35; // w0
  __int64 v36; // x26
  __int64 v37; // x27
  int32_t v38; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  __int64 v41; // x0
  const MethodInfo *v42; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_418AB6D & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userSvtEntity);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_418AB6D = 1;
  }
  if ( userSvtEntity )
  {
    v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = v14;
    *(_QWORD *)&v45.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v45, 0LL);
    v16 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v17 = v15;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v16;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v43 = v44;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v43, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v18 == NetworkManager__get_UserId(0LL) )
    {
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v17,
                                  (int32_t)IconLimitCount,
                                  v20);
      v23 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v22 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v24 = IconLimitCountSealAfter;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v46.fields.currentCryptoKey = v23;
      *(_QWORD *)&v46.fields.fakeValue = v22;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v27 = v25;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30790452(
        this,
        v17,
        v27,
        v24,
        exceedCount,
        info1,
        info2,
        2,
        IsNew,
        IsEventJoin,
        0LL,
        0,
        userSvtEntity->fields.lv,
        0,
        0,
        v42);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0LL);
      v35 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v17,
              (int32_t)FriendIconLimitCount,
              v34);
      v37 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v36 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v38 = v35;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v37;
      *(_QWORD *)&v47.fields.fakeValue = v36;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
      ServantFaceIconComponent__Set_30790452(
        this,
        v17,
        v39,
        v38,
        userSvtEntity->fields.exceedCount,
        info1,
        info2,
        2,
        0,
        0,
        0LL,
        0,
        userSvtEntity->fields.lv,
        0,
        0,
        v42);
    }
    if ( equipIdList && (v40 = *(_QWORD *)&equipIdList->max_length) != 0 )
    {
      if ( !(_DWORD)v40 )
      {
        v41 = sub_B2C460(v30);
        sub_B2C400(v41, 0LL);
      }
      ServantFaceIconComponent__SetEquip_30792872(this, v17, equipIdList->m_Items[0], v32);
    }
    else
    {
      ServantFaceIconComponent__ClearEquip(this, v31);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30795548(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x25
  __int64 v20; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x24
  WarEntity_o *Entity; // x0
  int32_t status; // w24
  WarEntity_o *v24; // x26
  int32_t v25; // w25
  int32_t ServantLimitCountSealAfter; // w27
  int32_t CardImageLimitCount; // w27
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418AB6F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418AB6F = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v20 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v20;
    *(_QWORD *)&v32.fields.fakeValue = v19;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
    if ( !v21
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v21,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          status = userSvtColEntity->fields.status,
          v24 = Entity,
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtColEntity->fields.svtId, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_19:
      sub_B2C434(Instance, v17);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v25,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v25, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( v24 )
    {
      if ( !((status == 0) | !SvtType__IsEnemyCollectionDetail(*(&v24->fields.startType + 1), 0LL)) )
        status = 3;
    }
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
    ServantFaceIconComponent__Set_30790452(
      this,
      v25,
      maxLimitCount,
      CardImageLimitCount,
      0,
      info1,
      info2,
      status,
      IsNew,
      0,
      0LL,
      0,
      0,
      0,
      frameLimitCount,
      v31);
    ServantFaceIconComponent__ClearEquip(this, v30);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30797084(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isSecret,
        const MethodInfo *method)
{
  int32_t status; // w27
  __int64 v14; // x25
  __int64 v15; // x26
  int32_t v16; // w24
  int32_t v17; // w0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_418AB72 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtColEntity);
    byte_418AB72 = 1;
  }
  if ( userSvtColEntity && svtCostumeEntity )
  {
    status = userSvtColEntity->fields.status;
    if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 16, 0LL)
      && !UserServantCollectionEntity__IsCostumeGet(userSvtColEntity, svtCostumeEntity->fields.id, 0LL) )
    {
      status = 0;
    }
    v15 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    if ( isSecret )
      v16 = 6;
    else
      v16 = status;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
    ServantFaceIconComponent__Set_30790452(
      this,
      v17,
      userSvtColEntity->fields.maxLimitCount,
      svtCostumeEntity->fields.id,
      0,
      info1,
      info2,
      v16,
      0,
      0,
      svtCostumeEntity,
      0,
      0,
      0,
      0,
      v19);
    ServantFaceIconComponent__ClearEquip(this, v18);
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30798084(
        ServantFaceIconComponent_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // [xsp+38h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_418AB74 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    byte_418AB74 = 1;
  }
  if ( equipTargetInfo )
  {
    v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
    ServantFaceIconComponent__Set_30790452(
      this,
      v11,
      equipTargetInfo->fields.limitCount,
      0,
      0,
      info1,
      info2,
      2,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      v14);
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(equipTargetInfo->fields.svtId, 0LL);
    ServantFaceIconComponent__ClearEquip_30798348(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_30799200(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int128 v11; // q1
  int64_t v12; // x25
  int64_t UserId; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w23
  bool IsNew; // w5
  const MethodInfo *v18; // x6
  ServantFaceIconComponent_o *v19; // x0
  int32_t v20; // w1
  IconLabelInfo_o *v21; // x2
  IconLabelInfo_o *v22; // x3
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_418AB75 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, userCommandCodeEntity);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_418AB75 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v11 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v11;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v24 = v25;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( v12 == UserId )
    {
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v15;
      *(_QWORD *)&v26.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL);
      IsNew = UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0LL);
      v19 = this;
      v20 = v16;
      v21 = info1;
      v22 = info2;
    }
    else
    {
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v15;
      *(_QWORD *)&v27.fields.fakeValue = v14;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
      v19 = this;
      v21 = info1;
      v22 = info2;
      IsNew = 0;
    }
    ServantFaceIconComponent__SetCommandCode(v19, v20, v21, v22, 2, IsNew, v18);
    ServantFaceIconComponent__ClearEquip(this, v23);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30800832(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        bool isNew,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_418AB76 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeEntity);
    byte_418AB76 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30801036(
        ServantFaceIconComponent_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  int32_t status; // w23
  int32_t v13; // w24
  bool IsNew; // w0
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_418AB77 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeCollectionEntity);
    byte_418AB77 = 1;
  }
  if ( userCommandCodeCollectionEntity )
  {
    v10 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
    status = userCommandCodeCollectionEntity->fields.status;
    v13 = v11;
    IsNew = UserCommandCodeCollectionEntity__IsNew(userCommandCodeCollectionEntity, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, status, IsNew, v15);
    ServantFaceIconComponent__ClearEquip(this, v16);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeCollectionEntity);
  }
}


bool __fastcall ServantFaceIconComponent__UpdateAlpha(
        ServantFaceIconComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v6; // x1
  UIIconLabel_o *v7; // x0

  if ( (byte_418AB89 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AB89 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) && this->fields.info1 && this->fields.info2 )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UIIconLabel__SetAlpha(v7, alpha, 0LL);
  }
  return 1;
}