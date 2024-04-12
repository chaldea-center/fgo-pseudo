void __fastcall ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42B2F12 & 1) == 0 )
  {
    sub_B52984(&ServantFaceIconComponent_TypeInfo);
    byte_42B2F12 = 1;
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

  if ( (byte_42B2F08 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F08 = 1;
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
      sub_B52A5C(0LL, v6);
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

  if ( (byte_42B2F0B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F0B = 1;
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
      sub_B52A5C(transform, v8);
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
  if ( (byte_42B2F0D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F0D = 1;
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
    sub_B52A5C(transform, v8);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(typeSprite, method);
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

  if ( (byte_42B2EE6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19618/*"img_commonbg_02"*/);
    byte_42B2EE6 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_B52A5C(0LL, v3);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_19618/*"img_commonbg_02"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x21

  if ( (byte_42B2F0F & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B2F0F = 1;
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UISprite_o *backSprite; // x20
  const MethodInfo *v16; // x1
  UISprite_o *faceSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v23; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20
  UnityEngine_Object_o *faceEffectSprite; // x20

  if ( (byte_42B2EE5 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2EE5 = 1;
  }
  this->fields.info1 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.info1, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.info2 = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.info2, 0LL, v9, v10, v11, v12, v13, v14);
  backSprite = this->fields.backSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(backSprite, 0LL);
  AtlasManager__SetCommon(this->fields.typeSprite, 0LL);
  faceSprite = this->fields.backSprite;
  if ( !faceSprite )
    goto LABEL_63;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_63;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.frameSprite;
  if ( !faceSprite )
    goto LABEL_63;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.typeSprite;
  if ( !faceSprite )
    goto LABEL_63;
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
      goto LABEL_63;
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
      goto LABEL_63;
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
      goto LABEL_63;
    faceSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceSprite, 0LL);
    if ( !faceSprite )
      goto LABEL_63;
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
      goto LABEL_63;
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
    v23 = this->fields.raritySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v23, 0LL);
    faceSprite = this->fields.raritySprite;
    if ( !faceSprite )
      goto LABEL_63;
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
      goto LABEL_63;
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
    if ( !faceSprite )
      goto LABEL_63;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)faceSprite, 0LL);
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(faceEffectSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.faceEffectSprite;
    if ( faceSprite )
    {
      UISprite__set_spriteName(faceSprite, 0LL, 0LL);
      goto LABEL_62;
    }
LABEL_63:
    sub_B52A5C(faceSprite, v16);
  }
LABEL_62:
  ServantFaceIconComponent__ClearEquip(this, v16);
}


void __fastcall ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_42B2F01 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F01 = 1;
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
      sub_B52A5C(noneEquipSprite, v4);
    }
  }
}


void __fastcall ServantFaceIconComponent__ClearEquip_30475236(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x21
  void *Instance; // x0
  __int64 v7; // x1
  char v8; // w20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *v15; // x20

  if ( (byte_42B2F02 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2F02 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     baseSvtId,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (void *)SvtType__IsServant(*((_DWORD *)Instance + 21), 0LL);
          if ( this->fields.noneEquipSprite )
          {
            v8 = (char)Instance;
            Instance = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                         0LL);
            if ( Instance )
            {
              if ( (v8 & 1) != 0 )
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
                v13 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
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
                v14 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
                {
                  Instance = this->fields.equipLimitCountSprite;
                  if ( !Instance )
                    goto LABEL_58;
                  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                v15 = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
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
    sub_B52A5C(Instance, v7);
  }
}


void __fastcall ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0LL, 0LL), (faceSprite = this->fields.faceSprite) == 0LL) )
    sub_B52A5C(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
}


void __fastcall ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(faceSprite, flag);
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
    sub_B52A5C(this, method);
  return faceSprite->fields.mSpriteName;
}


int32_t __fastcall ServantFaceIconComponent__GetIconLimitCountSealAfter(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t iconLimit,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42B2F10 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2F10 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v7);
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

  if ( (byte_42B2F06 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F06 = 1;
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
      sub_B52A5C(noneEquipSprite, v4);
    }
  }
}


bool __fastcall ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v5; // x1
  struct UIMeshSprite_o *v6; // x8

  if ( (byte_42B2F07 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F07 = 1;
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
      sub_B52A5C(noneEquipSprite, v5);
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

  if ( (byte_42B2EE7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19638/*"img_frames_nodata"*/);
    byte_42B2EE7 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B52A5C(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19638/*"img_frames_nodata"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_42B2EE8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19639/*"img_frames_nodata3"*/);
    byte_42B2EE8 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B52A5C(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19639/*"img_frames_nodata3"*/, 0LL);
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

  if ( (byte_42B2EEC & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2EEC = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0LL);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_30467316(
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

  if ( (byte_42B2F0C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F0C = 1;
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
        sub_B52A5C(transform, v4);
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

  if ( (byte_42B2F0E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F0E = 1;
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
        sub_B52A5C(transform, v4);
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
  __int128 v13; // q1
  int64_t v14; // x25
  int32_t IconLimitCount; // w25
  int32_t v16; // w0
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  WarQuestSelectionMaster_o *v19; // x0
  __int64 v20; // x26
  __int64 v21; // x27
  ServantLimitImageMaster_o *v22; // x24
  int32_t v23; // w24
  int32_t v24; // w25
  int32_t v25; // w0
  int32_t exceedCount; // w26
  int32_t v27; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  const MethodInfo *v30; // x1
  int32_t FriendIconLimitCount; // w24
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v33; // x26
  __int64 v34; // x27
  ServantLimitImageMaster_o *v35; // x25
  int32_t ServantImageLimitSealAfter; // w24
  int32_t v37; // w25
  int32_t v38; // w0
  __int64 v39; // x21
  __int64 v40; // x22
  __int64 v41; // x0
  const MethodInfo *v42; // x3
  __int64 v43; // x0
  const MethodInfo *v44; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_42B2EE9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2EE9 = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  v13 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v13;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v45 = v46;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v45, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v14 != NetworkManager__get_UserId(0LL) )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v35 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v48.fields.currentCryptoKey = v34;
      *(_QWORD *)&v48.fields.fakeValue = v33;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v48, 0LL);
      if ( v35 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v35,
                                       (int32_t)Instance,
                                       FriendIconLimitCount,
                                       0LL);
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtEntity->fields.svtId, 0LL);
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtEntity->fields.limitCount, 0LL);
        ServantFaceIconComponent__Set_30467316(
          this,
          v37,
          v38,
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
          v44);
        goto LABEL_27;
      }
    }
LABEL_35:
    sub_B52A5C(Instance, v18);
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
  if ( questRestrictionInfo )
  {
    v16 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(questRestrictionInfo, userSvtEntity, 0LL);
    if ( v16 >= 0 )
      IconLimitCount = v16;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v19 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v22 = (ServantLimitImageMaster_o *)v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v21;
  *(_QWORD *)&v47.fields.fakeValue = v20;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v47, 0LL);
  if ( !v22 )
    goto LABEL_35;
  v23 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v22, (int32_t)Instance, IconLimitCount, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtEntity->fields.svtId, 0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  v27 = v25;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  ServantFaceIconComponent__Set_30467316(
    this,
    v24,
    v27,
    v23,
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
    v44);
LABEL_27:
  if ( equipIdList && *(_QWORD *)&equipIdList->max_length )
  {
    v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v40;
    *(_QWORD *)&v49.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v49, 0LL);
    if ( !equipIdList->max_length )
    {
      v43 = sub_B52A88(v41);
      sub_B52A28(v43, 0LL);
    }
    ServantFaceIconComponent__SetEquip_30469748(this, v41, equipIdList->m_Items[0], v42);
  }
  else
  {
    ServantFaceIconComponent__ClearEquip(this, v30);
  }
}


void __fastcall ServantFaceIconComponent__SetClassSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        bool isServantEquip,
        int32_t classId,
        int32_t frameType,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v12; // x0
  __int64 v13; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v15; // x22

  if ( (byte_42B2EFB & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2EFB = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UISprite_o *)UnityEngine_Object__op_Equality(classSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (collectionStatus | 4) == 4)
      || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v12 = this->fields.classSprite;
      if ( v12 )
      {
LABEL_10:
        UISprite__set_spriteName(v12, 0LL, 0LL);
        return;
      }
LABEL_19:
      sub_B52A5C(v12, v13);
    }
    v15 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v15 )
      {
        v12 = v15;
        goto LABEL_10;
      }
      goto LABEL_19;
    }
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetClass(v15, classId, frameType, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__SetCommandCode(
        ServantFaceIconComponent_o *this,
        int32_t commandCodeId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t collectionStatus,
        bool isNew,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  DataManager_o *v15; // x23
  UnityEngine_Object_o *Component_WebViewObject; // x26
  const MethodInfo *v17; // x5
  int32_t lastFrameTime_low; // w23
  UnityEngine_Object_o *equipSprite; // x24
  UnityEngine_Object_o *hideEquipSprite; // x24
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *shiningIcon; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v43; // x1
  const MethodInfo *v44; // x2

  if ( (byte_42B2EFA & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_19638/*"img_frames_nodata"*/);
    sub_B52984(&StringLiteral_19466/*"icon_common_new01"*/);
    byte_42B2EFA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_66;
  v15 = Instance;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.faceSprite,
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
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
  if ( !v15 )
LABEL_66:
    sub_B52A5C(Instance, v14);
  lastFrameTime_low = LODWORD(v15->fields.lastFrameTime);
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
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19638/*"img_frames_nodata"*/, 0LL);
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
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, v17);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v23);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v24);
  ServantFaceIconComponent__SetRaritySprite(this, 1, lastFrameTime_low, 0, 0, v25);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 1, v26);
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
        ShiningIconComponent__Set_33786132(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_19466/*"icon_common_new01"*/,
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
  ServantFaceIconComponent__ClearEquip(this, v14);
  if ( info1 && !IconLabelInfo__IsClear(info1, 0LL) )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v35 = (System_Int32_array **)info1;
  }
  else
  {
    this->fields.info1 = 0LL;
    p_info1 = &this->fields.info1;
    v35 = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)p_info1, v35, v28, v29, v30, v31, v32, v33);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0LL) )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v43 = (System_Int32_array **)info2;
  }
  else
  {
    this->fields.info2 = 0LL;
    p_info2 = &this->fields.info2;
    v43 = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)p_info2, v43, v36, v37, v38, v39, v40, v41);
  ServantFaceIconComponent__SetIconLabel(this, 0, v44);
}


void __fastcall ServantFaceIconComponent__SetCostumeIcon(
        ServantFaceIconComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *costumeIconSprite; // x21
  __int64 v6; // x1
  UISprite_o *transform; // x0
  int32_t v8; // w20
  int32_t iconId; // t1
  UISprite_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B2F11 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_22665/*"svt_costume_icon_"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2F11 = 1;
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
      v8 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v10 = this->fields.costumeIconSprite;
        v11 = System_Int32__ToString(v8, 0LL);
        v12 = System_String__Concat_44568316((System_String_o *)StringLiteral_22665/*"svt_costume_icon_"*/, v11, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEventSprite(v10, v12, 0LL) )
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
                v13.fields.x = -47.0;
                v13.fields.y = -42.0;
                v13.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v13, 0LL);
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
          sub_B52A5C(transform, v6);
        }
      }
    }
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
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  int32_t limitCount; // w22
  int32_t v13; // w23
  ServantFaceIconComponent_c *v14; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // [xsp+38h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v8 = this;
  if ( (byte_42B2EF1 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantFaceIconComponent_o *)sub_B52984(&ServantFaceIconComponent_TypeInfo);
    byte_42B2EF1 = 1;
  }
  if ( !equipTargetInfo )
    sub_B52A5C(this, equipTargetInfo);
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
  limitCount = equipTargetInfo->fields.limitCount;
  v13 = v11;
  v14 = ServantFaceIconComponent_TypeInfo;
  if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
    v14 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_30467316(
    v8,
    v13,
    limitCount,
    v14->static_fields->SECRET_LIMIT_COUNT,
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
    v16);
  ServantFaceIconComponent__ClearEquip(v8, v15);
}


void __fastcall ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_B52A5C(0LL, flag);
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
    sub_B52A5C(limitCountIcon, flag);
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
    sub_B52A5C(0LL, flag);
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

  if ( (byte_42B2EEE & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2EEE = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
    ServantFaceIconComponent__SetEquip_30471720(this, 0, v9, v10, v11);
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

  if ( (byte_42B2F00 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2F00 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL) )
      ServantFaceIconComponent__SetEquip_30474736(this, 0, info, v7);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_30469748(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x22
  const MethodInfo *v8; // x2
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  int32_t v14; // w0
  const MethodInfo *v15; // x4
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42B2F03 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2F03 = 1;
  }
  entity = 0LL;
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    if ( userSvtId >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_21;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                                      &entity,
                                                                      userSvtId,
                                                                      (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( entity )
        {
          v12 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v11 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v17.fields.currentCryptoKey = v12;
          *(_QWORD *)&v17.fields.fakeValue = v11;
          Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                          v17,
                                                                          0LL);
          if ( entity )
          {
            v13 = (int)Master_WarQuestSelectionMaster;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(entity->fields.limitCount, 0LL);
            ServantFaceIconComponent__SetEquip_30471720(this, baseSvtId, v13, v14, v15);
            return;
          }
        }
LABEL_21:
        sub_B52A5C(Master_WarQuestSelectionMaster, v10);
      }
    }
    ServantFaceIconComponent__ClearEquip_30475236(this, baseSvtId, v8);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_30471720(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x23
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x22
  UISprite_o *v14; // x22
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Component_o *v16; // x21
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8

  if ( (byte_42B2F05 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2F05 = 1;
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
          v14 = (UISprite_o *)this->fields.equipSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEquipFace(v14, svtId, 0LL);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
          {
            noneEquipSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !noneEquipSprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)noneEquipSprite,
                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !noneEquipSprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           (DataMasterBase_WarMaster__WarEntity__int__o *)noneEquipSprite,
                                                           svtId,
                                                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !this->fields.equipLimitCountSprite )
              goto LABEL_41;
            v16 = noneEquipSprite;
            noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                           0LL);
            if ( !v16 || !noneEquipSprite )
              goto LABEL_41;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)noneEquipSprite,
              v16[3].fields.m_CachedPtr <= limitCount && v16[3].fields.m_CachedPtr > 0,
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
      sub_B52A5C(noneEquipSprite, v10);
    }
    ServantFaceIconComponent__ClearEquip_30475236(this, baseSvtId, v11);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_30474736(
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

  if ( (byte_42B2F04 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2F04 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL) >= 1 )
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
    ServantFaceIconComponent__SetEquip_30471720(this, baseSvtId, v11, equipTarget->fields.limitCount, v12);
  }
  else
  {
LABEL_12:
    ServantFaceIconComponent__ClearEquip_30475236(this, baseSvtId, (const MethodInfo *)equipTarget);
  }
}


void __fastcall ServantFaceIconComponent__SetEventBonus(
        ServantFaceIconComponent_o *this,
        int32_t iconId,
        int32_t rarity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t FrameType; // w0
  UISprite_o *backSprite; // x23
  int32_t v12; // w22
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v20; // x1
  UISprite_o *v21; // x21
  const MethodInfo *v22; // x2

  if ( (byte_42B2EF9 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_20410/*"listframes_shadow"*/);
    byte_42B2EF9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_60;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, v9);
  backSprite = this->fields.backSprite;
  v12 = FrameType;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceBaseIcon(backSprite, v12, 0, 0LL);
  AtlasManager__SetFaceImage(this->fields.faceSprite, iconId, 0, 0LL);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_60;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20410/*"listframes_shadow"*/, 0LL);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v12, 0, 0LL);
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
    v21 = this->fields.raritySprite;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0LL);
    if ( v21 )
    {
      UISprite__set_spriteName(v21, (System_String_o *)Instance, 0LL);
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
    sub_B52A5C(Instance, v8);
  }
LABEL_59:
  ServantFaceIconComponent__ClearEquip(this, v20);
  ServantFaceIconComponent__SetIconLabel(this, 0, v22);
}


void __fastcall ServantFaceIconComponent__SetFaceEffectSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceEffectSprite; // x21
  UISprite_o *v6; // x0
  __int64 v7; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v9; // x19

  if ( (byte_42B2EFF & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_20390/*"linklost_svt_material"*/);
    byte_42B2EFF = 1;
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(faceEffectSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( isCommandCode )
    {
      v6 = this->fields.faceEffectSprite;
      if ( !v6 )
LABEL_18:
        sub_B52A5C(v6, v7);
      goto LABEL_17;
    }
    collectionStatus = this->fields.collectionStatus;
    v9 = this->fields.faceEffectSprite;
    if ( collectionStatus != 8 )
    {
      if ( !v9 )
        goto LABEL_18;
      v6 = v9;
LABEL_17:
      UISprite__set_spriteName(v6, 0LL, 0LL);
      return;
    }
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_20390/*"linklost_svt_material"*/, 0LL);
  }
}


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
  if ( (byte_42B2F09 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F09 = 1;
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
      sub_B52A5C(v8, info1);
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
      UIIconLabel__Set_41791736(v8, info1, 1, 0LL);
    else
      UIIconLabel__Set(v8, info1, 0LL);
  }
}


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

  if ( (byte_42B2EFD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2EFD = 1;
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
        sub_B52A5C(v11, v10);
      goto LABEL_12;
    }
    collectionStatus = this->fields.collectionStatus;
    v11 = this->fields.limitCountIcon;
    if ( (unsigned int)(collectionStatus - 4) < 5 || !collectionStatus )
    {
      if ( !v11 )
        goto LABEL_16;
LABEL_12:
      LimitCountIconComponent__Clear(v11, 0LL);
      return;
    }
    if ( !v11 )
      goto LABEL_16;
    LimitCountIconComponent__Set(v11, limitCount, limitMax, 0LL);
  }
}


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

  if ( (byte_42B2EFC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2EFC = 1;
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
      if ( (unsigned int)(collectionStatus - 4) >= 5 && collectionStatus )
      {
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
LABEL_19:
          sub_B52A5C(gameObject, v10);
        }
        v13 = limitMax > 0 && limitCount >= limitMax;
        goto LABEL_14;
      }
      if ( !gameObject )
        goto LABEL_19;
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v13 = 0;
LABEL_14:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__SetLost(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  int32_t v15; // w23
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v17; // w25
  int32_t CardImageLimitCount; // w0
  const MethodInfo *v19; // x5
  int32_t v20; // w24
  bool IsDataLostStateServant; // w0
  int32_t maxLimitCount; // w25
  int32_t v23; // w26
  bool IsNew; // w0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42B2EF0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2EF0 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    v13 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v13;
    *(_QWORD *)&v27.fields.fakeValue = v12;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL);
    if ( !v14
      || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v14,
            (int32_t)Instance,
            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtColEntity->fields.svtId, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_21:
      sub_B52A5C(Instance, v10);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v15,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtColEntity->fields.svtId, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v17, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( userSvtColEntity->fields.status )
    {
      v20 = CardImageLimitCount;
      IsDataLostStateServant = UserServantCollectionEntity__IsDataLostStateServant(userSvtColEntity, 0LL);
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      if ( IsDataLostStateServant )
        v23 = 7;
      else
        v23 = 8;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
      ServantFaceIconComponent__Set_30467316(
        this,
        v15,
        maxLimitCount,
        v20,
        0,
        info1,
        info2,
        v23,
        IsNew,
        0,
        0LL,
        0,
        0,
        0,
        0,
        v26);
      ServantFaceIconComponent__ClearEquip(this, v25);
    }
    else
    {
      ServantFaceIconComponent__Set_30472424(this, userSvtColEntity, info1, info2, 0, v19);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__SetRaritySprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x24
  System_String_o *Icon; // x0
  __int64 v13; // x1
  int32_t collectionStatus; // w8
  struct UISprite_o *v15; // x21
  System_String_o *v16; // x1
  System_String_o *Icon_22045876; // x23
  const MethodInfo *v18; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v20; // w22
  UISprite_o *v21; // x20
  AtlasManager_c *v22; // x8
  int32_t RarityIcon; // w0

  if ( (byte_42B2EFE & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    byte_42B2EFE = 1;
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
      v15 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon = Rarity__getIcon(rarity, 0LL);
        if ( !v15 )
          goto LABEL_48;
        v16 = Icon;
        Icon = (System_String_o *)v15;
        goto LABEL_14;
      }
      if ( !v15 )
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
    Icon_22045876 = Rarity__getIcon_22045876(rarity, exceedCount, lv, 0LL);
    if ( exceedCount <= 0 )
    {
      v21 = this->fields.raritySprite;
      v22 = AtlasManager_TypeInfo;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_42:
        AtlasManager__SetCommon(v21, 0LL);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_48;
        v16 = Icon_22045876;
LABEL_14:
        UISprite__set_spriteName((UISprite_o *)Icon, v16, 0LL);
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
      Icon = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !Icon )
        goto LABEL_48;
      Entity = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Icon, rarity, exceedCount, v18);
      v20 = Entity ? Entity->fields.rarityIcon : 0;
      Icon = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !Icon )
        goto LABEL_48;
      RarityIcon = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Icon, rarity, lv, v20, 0LL);
      v21 = this->fields.raritySprite;
      v22 = AtlasManager_TypeInfo;
      if ( RarityIcon >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v21, Icon_22045876, 0LL);
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
        sub_B52A5C(Icon, v13);
      }
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_42;
    }
    if ( !v22->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v22);
    goto LABEL_42;
  }
}


void __fastcall ServantFaceIconComponent__Set_30396076(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  __int128 v12; // q1
  int32_t v13; // w23
  int64_t v14; // x24
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v16; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w24
  int32_t v21; // w0
  int32_t exceedCount; // w25
  int32_t v23; // w26
  bool IsNew; // w27
  bool IsEventJoin; // w0
  const MethodInfo *v26; // x1
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v28; // x3
  int32_t v29; // w0
  __int64 v30; // x25
  __int64 v31; // x26
  int32_t v32; // w24
  int32_t v33; // w0
  const MethodInfo *v34; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42B2EEB & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2EEB = 1;
  }
  if ( userSvtEntity )
  {
    v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v37.fields.currentCryptoKey = v10;
    *(_QWORD *)&v37.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
    v12 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v13 = v11;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v35 = v36;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v35, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v14 == NetworkManager__get_UserId(0LL) )
    {
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v13,
                                  (int32_t)IconLimitCount,
                                  v16);
      v19 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v18 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v20 = IconLimitCountSealAfter;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v38.fields.currentCryptoKey = v19;
      *(_QWORD *)&v38.fields.fakeValue = v18;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v23 = v21;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30467316(
        this,
        v13,
        v23,
        v20,
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
        v34);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0LL);
      v29 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v13,
              (int32_t)FriendIconLimitCount,
              v28);
      v31 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v30 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v32 = v29;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v31;
      *(_QWORD *)&v39.fields.fakeValue = v30;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
      ServantFaceIconComponent__Set_30467316(
        this,
        v13,
        v33,
        v32,
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
        v34);
    }
    ServantFaceIconComponent__ClearEquip(this, v26);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30396768(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  int32_t IconLimitCount; // w24
  __int64 v14; // x25
  __int64 v15; // x27
  ServantFaceIconComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  int32_t v18; // w25
  __int64 v19; // x27
  __int64 v20; // x28
  const MethodInfo *v21; // x1
  __int64 v22; // x27
  __int64 v23; // x28
  int32_t v24; // w0
  int32_t limitCount; // w27
  int32_t exceedCount; // w26
  int64_t userId; // x21
  int32_t v28; // w28
  bool IsNew; // w0
  int32_t v30; // w0
  const MethodInfo *v31; // x1
  __int64 v32; // x21
  __int64 v33; // x22
  int32_t v34; // w0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // [xsp+38h] [xbp-68h]
  IconLabelInfo_o *info1a; // [xsp+48h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_42B2EF3 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42B2EF3 = 1;
  }
  if ( servantLeaderInfo )
  {
    info1a = info1;
    IconLimitCount = ServantLeaderInfo__getIconLimitCount(servantLeaderInfo, 0LL);
    if ( !ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v38.fields.currentCryptoKey = v15;
      *(_QWORD *)&v38.fields.fakeValue = v14;
      v16 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
      IconLimitCount = ServantFaceIconComponent__GetIconLimitCountSealAfter(v16, (int32_t)v16, IconLimitCount, v17);
    }
    if ( ServantLeaderInfo__IsHideSupport(servantLeaderInfo, 0LL) )
    {
      v18 = 4;
    }
    else if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v18 = 5;
    }
    else
    {
      v18 = 2;
    }
    v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v20;
    *(_QWORD *)&v39.fields.fakeValue = v19;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL) )
    {
      v23 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( isNewIconDisp )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v40.fields.currentCryptoKey = v23;
        *(_QWORD *)&v40.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v40, 0LL);
        limitCount = servantLeaderInfo->fields.limitCount;
        exceedCount = servantLeaderInfo->fields.exceedCount;
        userId = servantLeaderInfo->fields.userId;
        v28 = v24;
        if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        }
        IsNew = OtherUserNewManager__IsNew(userId, 0LL);
        ServantFaceIconComponent__Set_30467316(
          this,
          v28,
          limitCount,
          IconLimitCount,
          exceedCount,
          info1a,
          info2,
          v18,
          IsNew,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v36);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v41.fields.currentCryptoKey = v23;
        *(_QWORD *)&v41.fields.fakeValue = v22;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v41, 0LL);
        ServantFaceIconComponent__Set_30467316(
          this,
          v30,
          servantLeaderInfo->fields.limitCount,
          IconLimitCount,
          servantLeaderInfo->fields.exceedCount,
          info1a,
          info2,
          v18,
          0,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v36);
      }
    }
    else
    {
      ServantFaceIconComponent__NoMount(this, v21);
    }
    if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0LL) )
    {
      ServantFaceIconComponent__HideEquip(this, v31);
    }
    else
    {
      v33 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v42.fields.currentCryptoKey = v33;
      *(_QWORD *)&v42.fields.fakeValue = v32;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v42, 0LL);
      ServantFaceIconComponent__SetEquip_30474736(this, v34, servantLeaderInfo->fields.equipTarget1, v35);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_30467316(
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
  DataManager_o *Instance; // x0
  const MethodInfo *v23; // x1
  _DWORD *v24; // x24
  UnityEngine_Object_o *Component_WebViewObject; // x22
  int32_t v26; // w22
  int32_t v27; // w27
  int32_t v28; // w25
  const MethodInfo *v29; // x5
  const MethodInfo *v30; // x3
  int32_t FrameType_30463684; // w28
  int32_t v32; // w27
  int32_t FrameType; // w28
  const MethodInfo *v34; // x2
  UISprite_o *backSprite; // x23
  const MethodInfo *v36; // x2
  bool IsServantEquip; // w0
  const MethodInfo *v38; // x5
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x5
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *shiningIcon; // x20
  __int64 *v44; // x8
  UISprite_o *v45; // x20
  UISprite_o *v46; // x20
  ServantFaceIconComponent_c *v47; // x0
  UnityEngine_Object_o *v48; // x20
  UnityEngine_Object_o *v49; // x20
  UISprite_o *faceSprite; // x20
  UISprite_o *v51; // x20
  UISprite_o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v68; // x1
  const MethodInfo *v69; // x2
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  struct IconLabelInfo_o *v73; // [xsp+0h] [xbp-70h]
  struct IconLabelInfo_o *v74; // [xsp+8h] [xbp-68h]
  int32_t rarity; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42B2EF8 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantFaceIconComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_19638/*"img_frames_nodata"*/);
    sub_B52984(&StringLiteral_19466/*"icon_common_new01"*/);
    sub_B52984(&StringLiteral_20410/*"listframes_shadow"*/);
    sub_B52984(&StringLiteral_19486/*"icon_eventjoin_01"*/);
    byte_42B2EF8 = 1;
  }
  rarity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_134;
  v24 = Instance;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.faceSprite,
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
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
  v26 = imageSvtId;
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
                                      v30);
        imageLimitCount = (int)Instance;
      }
    }
  }
  if ( !imageSvtId )
    v26 = svtId;
  v73 = info1;
  if ( !v24 )
    goto LABEL_134;
  v27 = frameLimitCount;
  v28 = v24[20];
  v74 = info2;
  if ( frameLimitCount >= 1 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Instance )
      goto LABEL_134;
    goto LABEL_32;
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v27 = limitCount;
  if ( !Instance )
LABEL_134:
    sub_B52A5C(Instance, v23);
LABEL_32:
  FrameType_30463684 = ServantExceedMaster__GetFrameType_30463684(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         v27,
                         exceedCount,
                         v29);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Instance )
    goto LABEL_134;
  v32 = rarity;
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                rarity,
                lv,
                FrameType_30463684,
                0LL);
  ServantFaceIconComponent__SetCostumeIcon(this, 0LL, v34);
  this->fields.collectionStatus = collectionStatus;
  switch ( (int)svtCostumeEntity )
  {
    case 0:
      Instance = (DataManager_o *)this->fields.backSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19638/*"img_frames_nodata"*/, 0LL);
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
        goto LABEL_43;
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
        goto LABEL_43;
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_134;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_43:
      IsServantEquip = SvtType__IsServantEquip(v24[21], 0LL);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, v28, FrameType, v38);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v24[22], limitCount, v39);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v24[22], limitCount, v40);
      ServantFaceIconComponent__SetRaritySprite(this, 0, v32, exceedCount, lv, v41);
      ServantFaceIconComponent__SetFaceEffectSprite(this, 0, v42);
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
        v44 = &StringLiteral_19486/*"icon_eventjoin_01"*/;
LABEL_98:
        ShiningIconComponent__Set_33786132((ShiningIconComponent_o *)Instance, (System_String_o *)*v44, 0LL);
        goto LABEL_99;
      }
      if ( isNew && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
      {
        Instance = (DataManager_o *)this->fields.shiningIcon;
        if ( !Instance )
          goto LABEL_134;
        v44 = &StringLiteral_19466/*"icon_common_new01"*/;
        goto LABEL_98;
      }
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( !Instance )
        goto LABEL_134;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
LABEL_99:
      ServantFaceIconComponent__ClearEquip(this, v23);
      if ( v73 && !IconLabelInfo__IsClear(v73, 0LL) )
      {
        this->fields.info1 = v73;
        p_info1 = &this->fields.info1;
        v60 = (System_Int32_array **)v73;
      }
      else
      {
        this->fields.info1 = 0LL;
        p_info1 = &this->fields.info1;
        v60 = 0LL;
      }
      sub_B52920((BattleServantConfConponent_o *)p_info1, v60, v53, v54, v55, v56, v57, v58);
      if ( v74 && !IconLabelInfo__IsClear(v74, 0LL) )
      {
        this->fields.info2 = v74;
        p_info2 = &this->fields.info2;
        v68 = (System_Int32_array **)v74;
      }
      else
      {
        this->fields.info2 = 0LL;
        p_info2 = &this->fields.info2;
        v68 = 0LL;
      }
      sub_B52920((BattleServantConfConponent_o *)p_info2, v68, v61, v62, v63, v64, v65, v66);
      ServantFaceIconComponent__SetIconLabel(this, 0, v69);
      return;
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
      backSprite = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(backSprite, FrameType, v28, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v26, imageLimitCount, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v36);
      goto LABEL_41;
    case 4:
      v51 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v51, FrameType, v28, 0LL);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0LL);
LABEL_41:
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20410/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v24[21], FrameType, v28, 0LL);
      goto LABEL_43;
    case 6:
      v45 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v45, FrameType, v28, 0LL);
      v46 = this->fields.faceSprite;
      v47 = ServantFaceIconComponent_TypeInfo;
      if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
        v47 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v46,
        v47->static_fields->SECRET_SERVANT_ID,
        v47->static_fields->SECRET_LIMIT_COUNT,
        0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20410/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v24[21], FrameType, v28, 0LL);
      v48 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v48, 0LL, 0LL) )
        goto LABEL_43;
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
      v49 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
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
      v52 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetDataLostFaceBaseIcon(v52, 0LL);
      AtlasManager__SetDataLostFace(this->fields.faceSprite, 0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      goto LABEL_43;
    default:
      goto LABEL_43;
  }
}


void __fastcall ServantFaceIconComponent__Set_30470152(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v12; // x4

  if ( (byte_42B2EEA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2EEA = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B52A5C(Instance, v10);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               userSvtId,
               (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_30396076(this, Entity, info1, info2, v12);
  }
}


void __fastcall ServantFaceIconComponent__Set_30470792(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x25
  int32_t v13; // w0
  __int128 v14; // q1
  int32_t v15; // w23
  int64_t v16; // x25
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v18; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v20; // x26
  __int64 v21; // x27
  int32_t v22; // w25
  int32_t v23; // w0
  int32_t exceedCount; // w26
  int32_t v25; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  __int64 v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v32; // x3
  int32_t v33; // w0
  __int64 v34; // x26
  __int64 v35; // x27
  int32_t v36; // w25
  int32_t v37; // w0
  __int64 v38; // x8
  __int64 v39; // x0
  const MethodInfo *v40; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42B2EED & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2EED = 1;
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
    *(_QWORD *)&v43.fields.currentCryptoKey = v12;
    *(_QWORD *)&v43.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
    v14 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v15 = v13;
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v42.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v41 = v42;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v41, 0LL);
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
      *(_QWORD *)&v44.fields.currentCryptoKey = v21;
      *(_QWORD *)&v44.fields.fakeValue = v20;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v44, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v25 = v23;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30467316(
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
        v40);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0LL);
      v33 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v15,
              (int32_t)FriendIconLimitCount,
              v32);
      v35 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v34 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v36 = v33;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v35;
      *(_QWORD *)&v45.fields.fakeValue = v34;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
      ServantFaceIconComponent__Set_30467316(
        this,
        v15,
        v37,
        v36,
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
        v40);
    }
    if ( equipIdList && (v38 = *(_QWORD *)&equipIdList->max_length) != 0 )
    {
      if ( !(_DWORD)v38 )
      {
        v39 = sub_B52A88(v28);
        sub_B52A28(v39, 0LL);
      }
      ServantFaceIconComponent__SetEquip_30469748(this, v15, equipIdList->m_Items[0], v30);
    }
    else
    {
      ServantFaceIconComponent__ClearEquip(this, v29);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30472424(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x24
  WarEntity_o *Entity; // x0
  int32_t status; // w24
  WarEntity_o *v19; // x26
  int32_t v20; // w25
  int32_t ServantLimitCountSealAfter; // w27
  int32_t CardImageLimitCount; // w27
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42B2EEF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2EEF = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    v15 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v15;
    *(_QWORD *)&v27.fields.fakeValue = v14;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL);
    if ( !v16
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          status = userSvtColEntity->fields.status,
          v19 = Entity,
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userSvtColEntity->fields.svtId, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_19:
      sub_B52A5C(Instance, v12);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v20,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v20, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( v19 )
    {
      if ( !((status == 0) | !SvtType__IsEnemyCollectionDetail(*(&v19->fields.startType + 1), 0LL)) )
        status = 3;
    }
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
    ServantFaceIconComponent__Set_30467316(
      this,
      v20,
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
      v26);
    ServantFaceIconComponent__ClearEquip(this, v25);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30473984(
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

  if ( (byte_42B2EF2 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2EF2 = 1;
  }
  if ( userSvtColEntity && svtCostumeEntity )
  {
    status = userSvtColEntity->fields.status;
    if ( (svtCostumeEntity->fields.flag & 0x10) != 0
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
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
    ServantFaceIconComponent__Set_30467316(
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


void __fastcall ServantFaceIconComponent__Set_30474972(
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

  if ( (byte_42B2EF4 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2EF4 = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL);
    ServantFaceIconComponent__Set_30467316(
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
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(equipTargetInfo->fields.svtId, 0LL);
    ServantFaceIconComponent__ClearEquip_30475236(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_30476088(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int128 v9; // q1
  int64_t v10; // x25
  int64_t UserId; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w23
  bool IsNew; // w5
  const MethodInfo *v16; // x6
  ServantFaceIconComponent_o *v17; // x0
  int32_t v18; // w1
  IconLabelInfo_o *v19; // x2
  IconLabelInfo_o *v20; // x3
  const MethodInfo *v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42B2EF5 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2EF5 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v9 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v23.fields.fakeValue = v9;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v22 = v23;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v22, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( v10 == UserId )
    {
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v24.fields.currentCryptoKey = v13;
      *(_QWORD *)&v24.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v24, 0LL);
      IsNew = UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0LL);
      v17 = this;
      v18 = v14;
      v19 = info1;
      v20 = info2;
    }
    else
    {
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v25.fields.currentCryptoKey = v13;
      *(_QWORD *)&v25.fields.fakeValue = v12;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v25, 0LL);
      v17 = this;
      v19 = info1;
      v20 = info2;
      IsNew = 0;
    }
    ServantFaceIconComponent__SetCommandCode(v17, v18, v19, v20, 2, IsNew, v16);
    ServantFaceIconComponent__ClearEquip(this, v21);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30477732(
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

  if ( (byte_42B2EF6 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2EF6 = 1;
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
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30477936(
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

  if ( (byte_42B2EF7 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2EF7 = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
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

  if ( (byte_42B2F0A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2F0A = 1;
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
      sub_B52A5C(0LL, v6);
    UIIconLabel__SetAlpha(v7, alpha, 0LL);
  }
  return 1;
}