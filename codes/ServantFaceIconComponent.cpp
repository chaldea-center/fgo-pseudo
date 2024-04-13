void __fastcall ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB9D9 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFaceIconComponent_TypeInfo, v1, v2, v3);
    byte_42EB9D9 = 1;
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
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *limitCountSprite; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EB9CF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EB9CF = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
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
  int v4; // w2
  __int64 v5; // x3
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *transform; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s11
  float v16; // s12
  float v17; // s10
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB9D2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v4, v5);
    byte_42EB9D2 = 1;
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
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v15 = v12;
    v16 = v13;
    v17 = v14;
    if ( !this->fields.isAdjustIconLabelPos )
    {
      this->fields.iconLabelInitPos.fields.x = v12;
      this->fields.iconLabelInitPos.fields.y = v13;
      this->fields.iconLabelInitPos.fields.z = v14;
    }
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
    {
LABEL_15:
      sub_B5D69C(transform, v10);
    }
    v18.fields.x = v15 + offsetX;
    v18.fields.y = v16 + offsetY;
    v18.fields.z = v17;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0LL);
    this->fields.isAdjustIconLabelPos = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__AdjustIconLabelScale(
        ServantFaceIconComponent_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( (byte_42EB9D4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EB9D4 = 1;
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
          v13.fields.x = x;
          v13.fields.y = y;
          v13.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v13, 0LL);
          this->fields.isAdjustIconLabelScale = 1;
          return;
        }
      }
    }
LABEL_17:
    sub_B5D69C(transform, v10);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(typeSprite, method);
  }
  v6.fields.y = -64.0;
  v6.fields.z = 0.0;
  v6.fields.x = v5;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v6, 0LL);
}


void __fastcall ServantFaceIconComponent__Blank(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UISprite_o *frameSprite; // x0

  if ( (byte_42EB9AD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19716/*"img_commonbg_02"*/, (_DWORD)method, v2, v3);
    byte_42EB9AD = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_B5D69C(0LL, v5);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_19716/*"img_commonbg_02"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x21

  if ( (byte_42EB9D6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, frameType, classId, method);
    byte_42EB9D6 = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UISprite_o *backSprite; // x20
  const MethodInfo *v19; // x1
  UISprite_o *faceSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v26; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20
  UnityEngine_Object_o *faceEffectSprite; // x20

  if ( (byte_42EB9AC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EB9AC = 1;
  }
  this->fields.info1 = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.info1, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.info2 = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.info2, 0LL, v12, v13, v14, v15, v16, v17);
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
    v26 = this->fields.raritySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v26, 0LL);
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
    sub_B5D69C(faceSprite, v19);
  }
LABEL_62:
  ServantFaceIconComponent__ClearEquip(this, v19);
}


void __fastcall ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_42EB9C8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB9C8 = 1;
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
      sub_B5D69C(noneEquipSprite, v6);
    }
  }
}


void __fastcall ServantFaceIconComponent__ClearEquip_30854596(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *equipSprite; // x21
  void *Instance; // x0
  __int64 v17; // x1
  char v18; // w20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UnityEngine_Object_o *v23; // x20
  UnityEngine_Object_o *v24; // x20
  UnityEngine_Object_o *v25; // x20

  if ( (byte_42EB9C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, baseSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EB9C9 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     baseSvtId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (void *)SvtType__IsServant(*((_DWORD *)Instance + 21), 0LL);
          if ( this->fields.noneEquipSprite )
          {
            v18 = (char)Instance;
            Instance = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                         0LL);
            if ( Instance )
            {
              if ( (v18 & 1) != 0 )
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
                v23 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
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
                v24 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
                {
                  Instance = this->fields.equipLimitCountSprite;
                  if ( !Instance )
                    goto LABEL_58;
                  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                v25 = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
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
    sub_B5D69C(Instance, v17);
  }
}


void __fastcall ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0LL, 0LL), (faceSprite = this->fields.faceSprite) == 0LL) )
    sub_B5D69C(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
}


void __fastcall ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(faceSprite, flag);
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
    sub_B5D69C(this, method);
  return faceSprite->fields.mSpriteName;
}


int32_t __fastcall ServantFaceIconComponent__GetIconLimitCountSealAfter(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t iconLimit,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EB9D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, svtId, iconLimit, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EB9D7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           iconLimit,
           0LL);
}


void __fastcall ServantFaceIconComponent__HideEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_42EB9CD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB9CD = 1;
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
      sub_B5D69C(noneEquipSprite, v6);
    }
  }
}


bool __fastcall ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v7; // x1
  struct UIMeshSprite_o *v8; // x8

  if ( (byte_42EB9CE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB9CE = 1;
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
    v8 = this->fields.equipSprite;
    if ( !v8 )
      goto LABEL_14;
    if ( !System_String__IsNullOrEmpty(v8->fields.mSpriteName, 0LL) )
      return 1;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite
      || (noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL)) == 0LL )
    {
LABEL_14:
      sub_B5D69C(noneEquipSprite, v7);
    }
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)noneEquipSprite, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall ServantFaceIconComponent__NoMount(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_42EB9AE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19738/*"img_frames_nodata"*/, (_DWORD)method, v2, v3);
    byte_42EB9AE = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B5D69C(0LL, v5);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19738/*"img_frames_nodata"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_42EB9AF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19739/*"img_frames_nodata3"*/, (_DWORD)method, v2, v3);
    byte_42EB9AF = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B5D69C(0LL, v5);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19739/*"img_frames_nodata3"*/, 0LL);
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

  if ( (byte_42EB9B3 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)servantData, (_DWORD)info1, info2);
    byte_42EB9B3 = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0LL);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_30846632(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0

  if ( (byte_42EB9D3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB9D3 = 1;
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
        sub_B5D69C(transform, v6);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v6; // x1
  UIIconLabel_o *transform; // x0
  UnityEngine_Vector2Int_o textLabelInitSize; // 0:x1.8

  if ( (byte_42EB9D5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB9D5 = 1;
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
        sub_B5D69C(transform, v6);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int128 v25; // q1
  int64_t v26; // x25
  int32_t IconLimitCount; // w25
  int32_t v28; // w0
  WebViewManager_o *Instance; // x0
  __int64 v30; // x1
  WarQuestSelectionMaster_o *v31; // x0
  __int64 v32; // x26
  __int64 v33; // x27
  ServantLimitImageMaster_o *v34; // x24
  int32_t v35; // w24
  int32_t v36; // w25
  int32_t v37; // w0
  int32_t exceedCount; // w26
  int32_t v39; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  const MethodInfo *v42; // x1
  int32_t FriendIconLimitCount; // w24
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v45; // x26
  __int64 v46; // x27
  ServantLimitImageMaster_o *v47; // x25
  int32_t ServantImageLimitSealAfter; // w24
  int32_t v49; // w25
  int32_t v50; // w0
  __int64 v51; // x21
  __int64 v52; // x22
  __int64 v53; // x0
  const MethodInfo *v54; // x3
  __int64 v55; // x0
  const MethodInfo *v56; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42EB9B0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      (_DWORD)userSvtEntity,
      (_DWORD)equipIdList,
      questRestrictionInfo);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EB9B0 = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  v25 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v57 = v58;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v57, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v26 != NetworkManager__get_UserId(0LL) )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v46 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v47 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v60.fields.currentCryptoKey = v46;
      *(_QWORD *)&v60.fields.fakeValue = v45;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v60, 0LL);
      if ( v47 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v47,
                                       (int32_t)Instance,
                                       FriendIconLimitCount,
                                       0LL);
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.svtId, 0LL);
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.limitCount, 0LL);
        ServantFaceIconComponent__Set_30846632(
          this,
          v49,
          v50,
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
          v56);
        goto LABEL_27;
      }
    }
LABEL_35:
    sub_B5D69C(Instance, v30);
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
  if ( questRestrictionInfo )
  {
    v28 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userSvtEntity, 0LL);
    if ( v28 >= 0 )
      IconLimitCount = v28;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v31 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v34 = (ServantLimitImageMaster_o *)v31;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v33;
  *(_QWORD *)&v59.fields.fakeValue = v32;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v59, 0LL);
  if ( !v34 )
    goto LABEL_35;
  v35 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v34, (int32_t)Instance, IconLimitCount, 0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.svtId, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  v39 = v37;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  ServantFaceIconComponent__Set_30846632(
    this,
    v36,
    v39,
    v35,
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
    v56);
LABEL_27:
  if ( equipIdList && *(_QWORD *)&equipIdList->max_length )
  {
    v52 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v51 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v61.fields.currentCryptoKey = v52;
    *(_QWORD *)&v61.fields.fakeValue = v51;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL);
    if ( !equipIdList->max_length )
    {
      v55 = sub_B5D6C8(v53);
      sub_B5D668(v55, 0LL);
    }
    ServantFaceIconComponent__SetEquip_30849080(this, v53, equipIdList->m_Items[0], v54);
  }
  else
  {
    ServantFaceIconComponent__ClearEquip(this, v42);
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
  char v11; // w1
  char v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v15; // x0
  __int64 v16; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v18; // x22

  if ( (byte_42EB9C2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, isCommandCode, isServantEquip, *(_QWORD *)&classId);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EB9C2 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = (UISprite_o *)UnityEngine_Object__op_Equality(classSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (collectionStatus | 4) == 4)
      || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v15 = this->fields.classSprite;
      if ( v15 )
      {
LABEL_10:
        UISprite__set_spriteName(v15, 0LL, 0LL);
        return;
      }
LABEL_19:
      sub_B5D69C(v15, v16);
    }
    v18 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v18 )
      {
        v15 = v18;
        goto LABEL_10;
      }
      goto LABEL_19;
    }
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetClass(v18, classId, frameType, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v35; // x1
  DataManager_o *v36; // x23
  UnityEngine_Object_o *Component_WebViewObject; // x26
  const MethodInfo *v38; // x5
  int32_t lastFrameTime_low; // w23
  UnityEngine_Object_o *equipSprite; // x24
  UnityEngine_Object_o *hideEquipSprite; // x24
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v44; // x4
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x5
  const MethodInfo *v47; // x2
  UnityEngine_Object_o *shiningIcon; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v64; // x1
  const MethodInfo *v65; // x2

  if ( (byte_42EB9C1 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, commandCodeId, (_DWORD)info1, info2);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19738/*"img_frames_nodata"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_19564/*"icon_common_new01"*/, v31, v32, v33);
    byte_42EB9C1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_66;
  v36 = Instance;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.faceSprite,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
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
  if ( !v36 )
LABEL_66:
    sub_B5D69C(Instance, v35);
  lastFrameTime_low = LODWORD(v36->fields.lastFrameTime);
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
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19738/*"img_frames_nodata"*/, 0LL);
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
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, v38);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v44);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v45);
  ServantFaceIconComponent__SetRaritySprite(this, 1, lastFrameTime_low, 0, 0, v46);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 1, v47);
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
        ShiningIconComponent__Set_33897352(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_19564/*"icon_common_new01"*/,
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
  ServantFaceIconComponent__ClearEquip(this, v35);
  if ( info1 && !IconLabelInfo__IsClear(info1, 0LL) )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v56 = (System_Int32_array **)info1;
  }
  else
  {
    this->fields.info1 = 0LL;
    p_info1 = &this->fields.info1;
    v56 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_info1, v56, v49, v50, v51, v52, v53, v54);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0LL) )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v64 = (System_Int32_array **)info2;
  }
  else
  {
    this->fields.info2 = 0LL;
    p_info2 = &this->fields.info2;
    v64 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_info2, v64, v57, v58, v59, v60, v61, v62);
  ServantFaceIconComponent__SetIconLabel(this, 0, v65);
}


void __fastcall ServantFaceIconComponent__SetCostumeIcon(
        ServantFaceIconComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *costumeIconSprite; // x21
  __int64 v16; // x1
  UISprite_o *transform; // x0
  int32_t v18; // w20
  int32_t iconId; // t1
  UISprite_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB9D8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)svtCostumeEntity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22780/*"svt_costume_icon_"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EB9D8 = 1;
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
      v18 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v20 = this->fields.costumeIconSprite;
        v21 = System_Int32__ToString(v18, 0LL);
        v22 = System_String__Concat_44577788((System_String_o *)StringLiteral_22780/*"svt_costume_icon_"*/, v21, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEventSprite(v20, v22, 0LL) )
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
                v23.fields.x = -47.0;
                v23.fields.y = -42.0;
                v23.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v23, 0LL);
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
          sub_B5D69C(transform, v16);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w0
  int32_t limitCount; // w22
  int32_t v16; // w23
  ServantFaceIconComponent_c *v17; // x8
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // [xsp+38h] [xbp-38h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v8 = this;
  if ( (byte_42EB9B8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)equipTargetInfo, (_DWORD)info1, info2);
    this = (ServantFaceIconComponent_o *)sub_B5D5C4(&ServantFaceIconComponent_TypeInfo, v9, v10, v11);
    byte_42EB9B8 = 1;
  }
  if ( !equipTargetInfo )
    sub_B5D69C(this, equipTargetInfo);
  v13 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v13;
  *(_QWORD *)&v20.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
  limitCount = equipTargetInfo->fields.limitCount;
  v16 = v14;
  v17 = ServantFaceIconComponent_TypeInfo;
  if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
    v17 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_30846632(
    v8,
    v16,
    limitCount,
    v17->static_fields->SECRET_LIMIT_COUNT,
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
    v19);
  ServantFaceIconComponent__ClearEquip(v8, v18);
}


void __fastcall ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_B5D69C(0LL, flag);
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
    sub_B5D69C(limitCountIcon, flag);
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
    sub_B5D69C(0LL, flag);
  UnityEngine_Behaviour__set_enabled(raritySprite, flag, 0LL);
}


void __fastcall ServantFaceIconComponent__SetEquip(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  __int64 v9; // x8
  int32_t v10; // w20
  int32_t v11; // w3
  const MethodInfo *v12; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EB9B5 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)userServantEntity, (_DWORD)method, v3);
    byte_42EB9B5 = 1;
  }
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v7;
    *(_QWORD *)&v13.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v14.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v10 = v8;
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
    ServantFaceIconComponent__SetEquip_30851052(this, 0, v10, v11, v12);
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
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x22
  const MethodInfo *v8; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42EB9C7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    byte_42EB9C7 = 1;
  }
  ServantFaceIconComponent__NoMount(this, (const MethodInfo *)info);
  if ( info )
  {
    v7 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL) )
      ServantFaceIconComponent__SetEquip_30854096(this, 0, info, v8);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_30849080(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *equipSprite; // x22
  const MethodInfo *v20; // x2
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  __int64 v23; // x21
  __int64 v24; // x22
  int32_t v25; // w21
  int32_t v26; // w0
  const MethodInfo *v27; // x4
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42EB9CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, baseSvtId, userSvtId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    byte_42EB9CA = 1;
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
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_21;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                                      &entity,
                                                                      userSvtId,
                                                                      (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( entity )
        {
          v24 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v29.fields.currentCryptoKey = v24;
          *(_QWORD *)&v29.fields.fakeValue = v23;
          Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                          v29,
                                                                          0LL);
          if ( entity )
          {
            v25 = (int)Master_WarQuestSelectionMaster;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.limitCount, 0LL);
            ServantFaceIconComponent__SetEquip_30851052(this, baseSvtId, v25, v26, v27);
            return;
          }
        }
LABEL_21:
        sub_B5D69C(Master_WarQuestSelectionMaster, v22);
      }
    }
    ServantFaceIconComponent__ClearEquip_30854596(this, baseSvtId, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_30851052(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *equipSprite; // x23
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x22
  UISprite_o *v26; // x22
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  UnityEngine_Component_o *v28; // x21
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8

  if ( (byte_42EB9CC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, baseSvtId, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EB9CC = 1;
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
          v26 = (UISprite_o *)this->fields.equipSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEquipFace(v26, svtId, 0LL);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
          {
            noneEquipSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !noneEquipSprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)noneEquipSprite,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !noneEquipSprite )
              goto LABEL_41;
            noneEquipSprite = (UnityEngine_Component_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           (DataMasterBase_WarMaster__WarEntity__int__o *)noneEquipSprite,
                                                           svtId,
                                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !this->fields.equipLimitCountSprite )
              goto LABEL_41;
            v28 = noneEquipSprite;
            noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                           0LL);
            if ( !v28 || !noneEquipSprite )
              goto LABEL_41;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)noneEquipSprite,
              v28[3].fields.m_CachedPtr <= limitCount && v28[3].fields.m_CachedPtr > 0,
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
      sub_B5D69C(noneEquipSprite, v22);
    }
    ServantFaceIconComponent__ClearEquip_30854596(this, baseSvtId, v23);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_30854096(
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

  if ( (byte_42EB9CB & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtId, (_DWORD)equipTarget, method);
    byte_42EB9CB = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL) >= 1 )
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
    ServantFaceIconComponent__SetEquip_30851052(this, baseSvtId, v11, equipTarget->fields.limitCount, v12);
  }
  else
  {
LABEL_12:
    ServantFaceIconComponent__ClearEquip_30854596(this, baseSvtId, (const MethodInfo *)equipTarget);
  }
}


void __fastcall ServantFaceIconComponent__SetEventBonus(
        ServantFaceIconComponent_o *this,
        int32_t iconId,
        int32_t rarity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  int32_t FrameType; // w0
  UISprite_o *backSprite; // x23
  int32_t v27; // w22
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v35; // x1
  UISprite_o *v36; // x21
  const MethodInfo *v37; // x2

  if ( (byte_42EB9C0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, iconId, rarity, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Rarity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_20515/*"listframes_shadow"*/, v19, v20, v21);
    byte_42EB9C0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_60;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, v24);
  backSprite = this->fields.backSprite;
  v27 = FrameType;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceBaseIcon(backSprite, v27, 0, 0LL);
  AtlasManager__SetFaceImage(this->fields.faceSprite, iconId, 0, 0LL);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_60;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v27, 0, 0LL);
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
    v36 = this->fields.raritySprite;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0LL);
    if ( v36 )
    {
      UISprite__set_spriteName(v36, (System_String_o *)Instance, 0LL);
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
    sub_B5D69C(Instance, v23);
  }
LABEL_59:
  ServantFaceIconComponent__ClearEquip(this, v35);
  ServantFaceIconComponent__SetIconLabel(this, 0, v37);
}


void __fastcall ServantFaceIconComponent__SetFaceEffectSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *faceEffectSprite; // x21
  __int64 v16; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v18; // x19
  __int64 *v19; // x8
  UISprite_o *v20; // x0

  if ( (byte_42EB9C6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, isCommandCode, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_20495/*"linklost_svt_material"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_20494/*"linkbad_svt_material"*/, v12, v13, v14);
    byte_42EB9C6 = 1;
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(faceEffectSprite, 0LL, 0LL) )
  {
    if ( !isCommandCode )
    {
      collectionStatus = this->fields.collectionStatus;
      if ( collectionStatus == 9 )
      {
        v18 = this->fields.faceEffectSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v19 = &StringLiteral_20494/*"linkbad_svt_material"*/;
        goto LABEL_20;
      }
      if ( collectionStatus == 8 )
      {
        v18 = this->fields.faceEffectSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v19 = &StringLiteral_20495/*"linklost_svt_material"*/;
LABEL_20:
        AtlasManager__SetEventSprite(v18, (System_String_o *)*v19, 0LL);
        return;
      }
    }
    v20 = this->fields.faceEffectSprite;
    if ( !v20 )
      sub_B5D69C(0LL, v16);
    UISprite__set_spriteName(v20, 0LL, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__SetIconLabel(
        ServantFaceIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w19
  UnityEngine_Object_o *iconLabel; // x21
  IconLabelInfo_o *info1; // x1
  int32_t collectionStatus; // w8
  UIIconLabel_o *v9; // x0

  v4 = count;
  if ( (byte_42EB9D0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_BYTE)count, (_DWORD)method, v3);
    byte_42EB9D0 = 1;
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
      v9 = this->fields.iconLabel;
      if ( v9 )
      {
        UIIconLabel__Clear(v9, 0LL);
        return;
      }
LABEL_20:
      sub_B5D69C(v9, info1);
    }
    if ( this->fields.info2 )
    {
      v9 = this->fields.iconLabel;
      if ( (v4 & 1) != 0 )
        info1 = this->fields.info2;
      if ( !v9 )
        goto LABEL_20;
    }
    else
    {
      v9 = this->fields.iconLabel;
      if ( !v9 )
        goto LABEL_20;
    }
    if ( collectionStatus == 4 )
      UIIconLabel__Set_41891788(v9, info1, 1, 0LL);
    else
      UIIconLabel__Set(v9, info1, 0LL);
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

  if ( (byte_42EB9C4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isCommandCode, limitMax, *(_QWORD *)&limitCount);
    byte_42EB9C4 = 1;
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
        sub_B5D69C(v11, v10);
      goto LABEL_12;
    }
    collectionStatus = this->fields.collectionStatus;
    v11 = this->fields.limitCountIcon;
    if ( (unsigned int)(collectionStatus - 4) < 6 || !collectionStatus )
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

  if ( (byte_42EB9C3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isCommandCode, limitMax, *(_QWORD *)&limitCount);
    byte_42EB9C3 = 1;
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
      if ( (unsigned int)(collectionStatus - 4) >= 6 && collectionStatus )
      {
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
LABEL_19:
          sub_B5D69C(gameObject, v10);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v27; // x24
  __int64 v28; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x23
  int32_t v30; // w23
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v32; // w25
  int32_t CardImageLimitCount; // w0
  const MethodInfo *v34; // x5
  int32_t v35; // w24
  int32_t v36; // w25
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_42EB9B7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      (_DWORD)userSvtColEntity,
      (_DWORD)info1,
      info2);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42EB9B7 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v28 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v28;
    *(_QWORD *)&v41.fields.fakeValue = v27;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
    if ( !v29
      || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v29,
            (int32_t)Instance,
            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtColEntity->fields.svtId, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_23:
      sub_B5D69C(Instance, v25);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v30,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtColEntity->fields.svtId, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v32, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( userSvtColEntity->fields.status )
    {
      v35 = CardImageLimitCount;
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtColEntity, 0LL) )
      {
        v36 = 8;
      }
      else if ( UserServantCollectionEntity__IsLinkBadStateServant(userSvtColEntity, 0LL) )
      {
        v36 = 9;
      }
      else
      {
        v36 = 7;
      }
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
      ServantFaceIconComponent__Set_30846632(
        this,
        v30,
        maxLimitCount,
        v35,
        0,
        info1,
        info2,
        v36,
        IsNew,
        0,
        0LL,
        0,
        0,
        0,
        0,
        v40);
      ServantFaceIconComponent__ClearEquip(this, v39);
    }
    else
    {
      ServantFaceIconComponent__Set_30851756(this, userSvtColEntity, info1, info2, 0, v34);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
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
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_Object_o *raritySprite; // x24
  System_String_o *Icon; // x0
  __int64 v28; // x1
  int32_t collectionStatus; // w8
  struct UISprite_o *v30; // x21
  System_String_o *v31; // x1
  System_String_o *Icon_22319524; // x23
  const MethodInfo *v33; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v35; // w22
  UISprite_o *v36; // x20
  AtlasManager_c *v37; // x8
  int32_t RarityIcon; // w0

  if ( (byte_42EB9C5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, isCommandCode, rarity, *(_QWORD *)&exceedCount);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Rarity_TypeInfo, v23, v24, v25);
    byte_42EB9C5 = 1;
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
      v30 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon = Rarity__getIcon(rarity, 0LL);
        if ( !v30 )
          goto LABEL_48;
        v31 = Icon;
        Icon = (System_String_o *)v30;
        goto LABEL_14;
      }
      if ( !v30 )
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
    Icon_22319524 = Rarity__getIcon_22319524(rarity, exceedCount, lv, 0LL);
    if ( exceedCount <= 0 )
    {
      v36 = this->fields.raritySprite;
      v37 = AtlasManager_TypeInfo;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_42:
        AtlasManager__SetCommon(v36, 0LL);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_48;
        v31 = Icon_22319524;
LABEL_14:
        UISprite__set_spriteName((UISprite_o *)Icon, v31, 0LL);
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
      Icon = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !Icon )
        goto LABEL_48;
      Entity = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Icon, rarity, exceedCount, v33);
      v35 = Entity ? Entity->fields.rarityIcon : 0;
      Icon = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !Icon )
        goto LABEL_48;
      RarityIcon = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Icon, rarity, lv, v35, 0LL);
      v36 = this->fields.raritySprite;
      v37 = AtlasManager_TypeInfo;
      if ( RarityIcon >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v36, Icon_22319524, 0LL);
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
        sub_B5D69C(Icon, v28);
      }
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_42;
    }
    if ( !v37->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v37);
    goto LABEL_42;
  }
}


void __fastcall ServantFaceIconComponent__Set_30775392(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t v17; // w0
  __int128 v18; // q1
  int32_t v19; // w23
  int64_t v20; // x24
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v22; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v24; // x25
  __int64 v25; // x26
  int32_t v26; // w24
  int32_t v27; // w0
  int32_t exceedCount; // w25
  int32_t v29; // w26
  bool IsNew; // w27
  bool IsEventJoin; // w0
  const MethodInfo *v32; // x1
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v34; // x3
  int32_t v35; // w0
  __int64 v36; // x25
  __int64 v37; // x26
  int32_t v38; // w24
  int32_t v39; // w0
  const MethodInfo *v40; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42EB9B2 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)userSvtEntity, (_DWORD)info1, info2);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    byte_42EB9B2 = 1;
  }
  if ( userSvtEntity )
  {
    v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = v16;
    *(_QWORD *)&v43.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
    v18 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v19 = v17;
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v42.fields.fakeValue = v18;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v41 = v42;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v41, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v20 == NetworkManager__get_UserId(0LL) )
    {
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v19,
                                  (int32_t)IconLimitCount,
                                  v22);
      v25 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v24 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v26 = IconLimitCountSealAfter;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v44.fields.currentCryptoKey = v25;
      *(_QWORD *)&v44.fields.fakeValue = v24;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v29 = v27;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30846632(
        this,
        v19,
        v29,
        v26,
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
      v35 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v19,
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
      *(_QWORD *)&v45.fields.currentCryptoKey = v37;
      *(_QWORD *)&v45.fields.fakeValue = v36;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
      ServantFaceIconComponent__Set_30846632(
        this,
        v19,
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
        v40);
    }
    ServantFaceIconComponent__ClearEquip(this, v32);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30776084(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t IconLimitCount; // w24
  __int64 v17; // x25
  __int64 v18; // x27
  ServantFaceIconComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  int32_t v21; // w25
  __int64 v22; // x27
  __int64 v23; // x28
  const MethodInfo *v24; // x1
  __int64 v25; // x27
  __int64 v26; // x28
  int32_t v27; // w0
  int32_t limitCount; // w27
  int32_t exceedCount; // w26
  int64_t userId; // x21
  int32_t v31; // w28
  bool IsNew; // w0
  int32_t v33; // w0
  const MethodInfo *v34; // x1
  __int64 v35; // x21
  __int64 v36; // x22
  int32_t v37; // w0
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // [xsp+38h] [xbp-68h]
  IconLabelInfo_o *info1a; // [xsp+48h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42EB9BA & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)servantLeaderInfo, (_DWORD)info1, info2);
    sub_B5D5C4(&OtherUserNewManager_TypeInfo, v13, v14, v15);
    byte_42EB9BA = 1;
  }
  if ( servantLeaderInfo )
  {
    info1a = info1;
    IconLimitCount = ServantLeaderInfo__getIconLimitCount(servantLeaderInfo, 0LL);
    if ( !ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v18 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v41.fields.currentCryptoKey = v18;
      *(_QWORD *)&v41.fields.fakeValue = v17;
      v19 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
      IconLimitCount = ServantFaceIconComponent__GetIconLimitCountSealAfter(v19, (int32_t)v19, IconLimitCount, v20);
    }
    if ( ServantLeaderInfo__IsHideSupport(servantLeaderInfo, 0LL) )
    {
      v21 = 4;
    }
    else if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v21 = 5;
    }
    else
    {
      v21 = 2;
    }
    v23 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v23;
    *(_QWORD *)&v42.fields.fakeValue = v22;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL) )
    {
      v26 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( isNewIconDisp )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v43.fields.currentCryptoKey = v26;
        *(_QWORD *)&v43.fields.fakeValue = v25;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
        limitCount = servantLeaderInfo->fields.limitCount;
        exceedCount = servantLeaderInfo->fields.exceedCount;
        userId = servantLeaderInfo->fields.userId;
        v31 = v27;
        if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        }
        IsNew = OtherUserNewManager__IsNew(userId, 0LL);
        ServantFaceIconComponent__Set_30846632(
          this,
          v31,
          limitCount,
          IconLimitCount,
          exceedCount,
          info1a,
          info2,
          v21,
          IsNew,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v39);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v44.fields.currentCryptoKey = v26;
        *(_QWORD *)&v44.fields.fakeValue = v25;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44, 0LL);
        ServantFaceIconComponent__Set_30846632(
          this,
          v33,
          servantLeaderInfo->fields.limitCount,
          IconLimitCount,
          servantLeaderInfo->fields.exceedCount,
          info1a,
          info2,
          v21,
          0,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v39);
      }
    }
    else
    {
      ServantFaceIconComponent__NoMount(this, v24);
    }
    if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0LL) )
    {
      ServantFaceIconComponent__HideEquip(this, v34);
    }
    else
    {
      v36 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v36;
      *(_QWORD *)&v45.fields.fakeValue = v35;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
      ServantFaceIconComponent__SetEquip_30854096(this, v37, servantLeaderInfo->fields.equipTarget1, v38);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__Set_30846632(
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
  int32_t v19; // w20
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v65; // x1
  _DWORD *v66; // x24
  UnityEngine_Object_o *Component_WebViewObject; // x22
  int32_t v68; // w22
  int32_t v69; // w27
  int32_t v70; // w25
  const MethodInfo *v71; // x5
  const MethodInfo *v72; // x3
  int32_t FrameType_30843000; // w28
  int32_t v74; // w27
  int32_t FrameType; // w28
  const MethodInfo *v76; // x2
  UISprite_o *v77; // x23
  const MethodInfo *v78; // x2
  bool IsServantEquip; // w0
  const MethodInfo *v80; // x5
  const MethodInfo *v81; // x4
  const MethodInfo *v82; // x4
  const MethodInfo *v83; // x5
  const MethodInfo *v84; // x2
  UnityEngine_Object_o *shiningIcon; // x20
  __int64 *v86; // x8
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v102; // x1
  const MethodInfo *v103; // x2
  UISprite_o *v104; // x20
  UISprite_o *backSprite; // x20
  UISprite_o *faceSprite; // x20
  UISprite_o *v107; // x20
  UISprite_o *v108; // x20
  UISprite_o *v109; // x20
  ServantFaceIconComponent_c *v110; // x0
  UnityEngine_Object_o *v111; // x20
  UnityEngine_Object_o *v112; // x20
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  struct IconLabelInfo_o *v116; // [xsp+0h] [xbp-70h]
  struct IconLabelInfo_o *v117; // [xsp+8h] [xbp-68h]
  int32_t rarity; // [xsp+1Ch] [xbp-54h] BYREF

  v19 = imageLimitCount;
  if ( (byte_42EB9BF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, svtId, limitCount, *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v31, v32, v33);
    sub_B5D5C4(&DataManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v37, v38, v39);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&ServantFaceIconComponent_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_19738/*"img_frames_nodata"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_19564/*"icon_common_new01"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_20515/*"listframes_shadow"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_19584/*"icon_eventjoin_01"*/, v61, v62, v63);
    byte_42EB9BF = 1;
  }
  rarity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_134;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_134;
  v66 = Instance;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.faceSprite,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
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
  v68 = imageSvtId;
  if ( (v19 & 0x80000000) != 0 )
  {
    if ( svtId < 1 )
    {
      v19 = 0;
    }
    else
    {
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
      v19 = (int)Instance;
      if ( isCheckSeal )
      {
        Instance = (DataManager_o *)ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                      (ServantFaceIconComponent_o *)Instance,
                                      svtId,
                                      (int32_t)Instance,
                                      v72);
        v19 = (int)Instance;
      }
    }
  }
  if ( !imageSvtId )
    v68 = svtId;
  v116 = info1;
  if ( !v66 )
    goto LABEL_134;
  v69 = frameLimitCount;
  v70 = v66[20];
  v117 = info2;
  if ( frameLimitCount >= 1 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Instance )
      goto LABEL_134;
    goto LABEL_32;
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v69 = limitCount;
  if ( !Instance )
LABEL_134:
    sub_B5D69C(Instance, v65);
LABEL_32:
  FrameType_30843000 = ServantExceedMaster__GetFrameType_30843000(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         v69,
                         exceedCount,
                         v71);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Instance )
    goto LABEL_134;
  v74 = rarity;
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                rarity,
                lv,
                FrameType_30843000,
                0LL);
  ServantFaceIconComponent__SetCostumeIcon(this, 0LL, v76);
  this->fields.collectionStatus = collectionStatus;
  switch ( (int)svtCostumeEntity )
  {
    case 0:
      backSprite = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommon(backSprite, 0LL);
      Instance = (DataManager_o *)this->fields.backSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_19738/*"img_frames_nodata"*/, 0LL);
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
      IsServantEquip = SvtType__IsServantEquip(v66[21], 0LL);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, v70, FrameType, v80);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v66[22], limitCount, v81);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v66[22], limitCount, v82);
      ServantFaceIconComponent__SetRaritySprite(this, 0, v74, exceedCount, lv, v83);
      ServantFaceIconComponent__SetFaceEffectSprite(this, 0, v84);
      shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
        goto LABEL_59;
      if ( isTemporarySubscription && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
      {
        Instance = (DataManager_o *)this->fields.shiningIcon;
        if ( !Instance )
          goto LABEL_134;
        v86 = &StringLiteral_19584/*"icon_eventjoin_01"*/;
LABEL_58:
        ShiningIconComponent__Set_33897352((ShiningIconComponent_o *)Instance, (System_String_o *)*v86, 0LL);
        goto LABEL_59;
      }
      if ( isNew && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
      {
        Instance = (DataManager_o *)this->fields.shiningIcon;
        if ( !Instance )
          goto LABEL_134;
        v86 = &StringLiteral_19564/*"icon_common_new01"*/;
        goto LABEL_58;
      }
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( !Instance )
        goto LABEL_134;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
LABEL_59:
      ServantFaceIconComponent__ClearEquip(this, v65);
      if ( v116 && !IconLabelInfo__IsClear(v116, 0LL) )
      {
        this->fields.info1 = v116;
        p_info1 = &this->fields.info1;
        v94 = (System_Int32_array **)v116;
      }
      else
      {
        this->fields.info1 = 0LL;
        p_info1 = &this->fields.info1;
        v94 = 0LL;
      }
      sub_B5D560((BattleServantConfConponent_o *)p_info1, v94, v87, v88, v89, v90, v91, v92);
      if ( v117 && !IconLabelInfo__IsClear(v117, 0LL) )
      {
        this->fields.info2 = v117;
        p_info2 = &this->fields.info2;
        v102 = (System_Int32_array **)v117;
      }
      else
      {
        this->fields.info2 = 0LL;
        p_info2 = &this->fields.info2;
        v102 = 0LL;
      }
      sub_B5D560((BattleServantConfConponent_o *)p_info2, v102, v95, v96, v97, v98, v99, v100);
      ServantFaceIconComponent__SetIconLabel(this, 0, v103);
      return;
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
      v77 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v77, FrameType, v70, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v68, v19, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v78);
      goto LABEL_41;
    case 4:
      v107 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v107, FrameType, v70, 0LL);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0LL);
LABEL_41:
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v66[21], FrameType, v70, 0LL);
      goto LABEL_43;
    case 6:
      v108 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v108, FrameType, v70, 0LL);
      v109 = this->fields.faceSprite;
      v110 = ServantFaceIconComponent_TypeInfo;
      if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
        v110 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v109,
        v110->static_fields->SECRET_SERVANT_ID,
        v110->static_fields->SECRET_LIMIT_COUNT,
        0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_134;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v66[21], FrameType, v70, 0LL);
      v111 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v111, 0LL, 0LL) )
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
      v112 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v112, 0LL, 0LL) )
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
      v104 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetDataLostFaceBaseIcon(v104, 0LL);
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


void __fastcall ServantFaceIconComponent__Set_30849484(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v18; // x4

  if ( (byte_42EB9B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, (_DWORD)info1, info2);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EB9B1 = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v16);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               userSvtId,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_30775392(this, Entity, info1, info2, v18);
  }
}


void __fastcall ServantFaceIconComponent__Set_30850124(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x23
  __int64 v18; // x25
  int32_t v19; // w0
  __int128 v20; // q1
  int32_t v21; // w23
  int64_t v22; // x25
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v24; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v26; // x26
  __int64 v27; // x27
  int32_t v28; // w25
  int32_t v29; // w0
  int32_t exceedCount; // w26
  int32_t v31; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x3
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v38; // x3
  int32_t v39; // w0
  __int64 v40; // x26
  __int64 v41; // x27
  int32_t v42; // w25
  int32_t v43; // w0
  __int64 v44; // x8
  __int64 v45; // x0
  const MethodInfo *v46; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_42EB9B4 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)userSvtEntity, (_DWORD)equipIdList, info1);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15, v16);
    byte_42EB9B4 = 1;
  }
  if ( userSvtEntity )
  {
    v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v18;
    *(_QWORD *)&v49.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v49, 0LL);
    v20 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v21 = v19;
    *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v48.fields.fakeValue = v20;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v47 = v48;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v47, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v22 == NetworkManager__get_UserId(0LL) )
    {
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v21,
                                  (int32_t)IconLimitCount,
                                  v24);
      v27 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v26 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v28 = IconLimitCountSealAfter;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v50.fields.currentCryptoKey = v27;
      *(_QWORD *)&v50.fields.fakeValue = v26;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v31 = v29;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30846632(
        this,
        v21,
        v31,
        v28,
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
        v46);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0LL);
      v39 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v21,
              (int32_t)FriendIconLimitCount,
              v38);
      v41 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v40 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v42 = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v51.fields.currentCryptoKey = v41;
      *(_QWORD *)&v51.fields.fakeValue = v40;
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v51, 0LL);
      ServantFaceIconComponent__Set_30846632(
        this,
        v21,
        v43,
        v42,
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
        v46);
    }
    if ( equipIdList && (v44 = *(_QWORD *)&equipIdList->max_length) != 0 )
    {
      if ( !(_DWORD)v44 )
      {
        v45 = sub_B5D6C8(v34);
        sub_B5D668(v45, 0LL);
      }
      ServantFaceIconComponent__SetEquip_30849080(this, v21, equipIdList->m_Items[0], v36);
    }
    else
    {
      ServantFaceIconComponent__ClearEquip(this, v35);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30851756(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v29; // x25
  __int64 v30; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x24
  WarEntity_o *Entity; // x0
  int32_t status; // w24
  WarEntity_o *v34; // x26
  int32_t v35; // w25
  int32_t ServantLimitCountSealAfter; // w27
  int32_t CardImageLimitCount; // w27
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_42EB9B6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      (_DWORD)userSvtColEntity,
      (_DWORD)info1,
      info2);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42EB9B6 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v30 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v30;
    *(_QWORD *)&v42.fields.fakeValue = v29;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL);
    if ( !v31
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v31,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          status = userSvtColEntity->fields.status,
          v34 = Entity,
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtColEntity->fields.svtId, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_19:
      sub_B5D69C(Instance, v27);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v35,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v35, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( v34 )
    {
      if ( !((status == 0) | !SvtType__IsEnemyCollectionDetail(*(&v34->fields.startType + 1), 0LL)) )
        status = 3;
    }
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
    ServantFaceIconComponent__Set_30846632(
      this,
      v35,
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
      v41);
    ServantFaceIconComponent__ClearEquip(this, v40);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30853344(
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

  if ( (byte_42EB9B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)userSvtColEntity,
      (_DWORD)svtCostumeEntity,
      info1);
    byte_42EB9B9 = 1;
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
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
    ServantFaceIconComponent__Set_30846632(
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


void __fastcall ServantFaceIconComponent__Set_30854332(
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

  if ( (byte_42EB9BB & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)equipTargetInfo, (_DWORD)info1, info2);
    byte_42EB9BB = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
    ServantFaceIconComponent__Set_30846632(
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
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(equipTargetInfo->fields.svtId, 0LL);
    ServantFaceIconComponent__ClearEquip_30854596(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_30855448(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int128 v15; // q1
  int64_t v16; // x25
  int64_t UserId; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t v20; // w23
  bool IsNew; // w5
  const MethodInfo *v22; // x6
  ServantFaceIconComponent_o *v23; // x0
  int32_t v24; // w1
  IconLabelInfo_o *v25; // x2
  IconLabelInfo_o *v26; // x3
  const MethodInfo *v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42EB9BC & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)userCommandCodeEntity, (_DWORD)info1, info2);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    byte_42EB9BC = 1;
  }
  if ( userCommandCodeEntity )
  {
    v15 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v15;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v28 = v29;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v19 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( v16 == UserId )
    {
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v19;
      *(_QWORD *)&v30.fields.fakeValue = v18;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
      IsNew = UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0LL);
      v23 = this;
      v24 = v20;
      v25 = info1;
      v26 = info2;
    }
    else
    {
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v19;
      *(_QWORD *)&v31.fields.fakeValue = v18;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
      v23 = this;
      v25 = info1;
      v26 = info2;
      IsNew = 0;
    }
    ServantFaceIconComponent__SetCommandCode(v23, v24, v25, v26, 2, IsNew, v22);
    ServantFaceIconComponent__ClearEquip(this, v27);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30857092(
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

  if ( (byte_42EB9BD & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)userCommandCodeEntity, isNew, info1);
    byte_42EB9BD = 1;
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
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30857296(
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

  if ( (byte_42EB9BE & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)userCommandCodeCollectionEntity,
      (_DWORD)info1,
      info2);
    byte_42EB9BE = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
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
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v8; // x1
  UIIconLabel_o *v9; // x0

  if ( (byte_42EB9D1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EB9D1 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) && this->fields.info1 && this->fields.info2 )
  {
    v9 = this->fields.iconLabel;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    UIIconLabel__SetAlpha(v9, alpha, 0LL);
  }
  return 1;
}