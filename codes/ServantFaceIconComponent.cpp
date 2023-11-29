void __fastcall ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD0CF & 1) == 0 )
  {
    sub_B16FFC(&ServantFaceIconComponent_TypeInfo, v1);
    byte_40FD0CF = 1;
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
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD0C5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0C5 = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v6 )
      sub_B170D4();
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
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
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s11
  float v14; // s12
  float v15; // s10
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD0C8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0C8 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !v8 )
      goto LABEL_15;
    transform = UnityEngine_Component__get_transform(v8, 0LL);
    if ( !transform )
      goto LABEL_15;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v13 = v10;
    v14 = v11;
    v15 = v12;
    if ( !this->fields.isAdjustIconLabelPos )
    {
      this->fields.iconLabelInitPos.fields.x = v10;
      this->fields.iconLabelInitPos.fields.y = v11;
      this->fields.iconLabelInitPos.fields.z = v12;
    }
    v16 = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !v16 || (v17 = UnityEngine_Component__get_transform(v16, 0LL)) == 0LL )
LABEL_15:
      sub_B170D4();
    v18.fields.x = v13 + offsetX;
    v18.fields.y = v14 + offsetY;
    v18.fields.z = v15;
    UnityEngine_Transform__set_localPosition(v17, v18, 0LL);
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
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  UIIconLabel_o *v10; // x0
  UIIconLabel_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( (byte_40FD0CA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0CA = 1;
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
      v8 = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !v8 )
        goto LABEL_17;
      transform = UnityEngine_Component__get_transform(v8, 0LL);
      if ( !transform )
        goto LABEL_17;
      localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
      v10 = this->fields.iconLabel;
      this->fields.iconLabelInitScale = localScale;
      if ( !v10 )
        goto LABEL_17;
      this->fields.textLabelInitSize = UIIconLabel__GetTextLabelSize(v10, 0LL);
    }
    v11 = this->fields.iconLabel;
    if ( v11 )
    {
      UIIconLabel__SetTextLabelPixelPerfect(v11, 0LL);
      v12 = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( v12 )
      {
        v13 = UnityEngine_Component__get_transform(v12, 0LL);
        if ( v13 )
        {
          v15.fields.x = x;
          v15.fields.y = y;
          v15.fields.z = z;
          UnityEngine_Transform__set_localScale(v13, v15, 0LL);
          this->fields.isAdjustIconLabelScale = 1;
          return;
        }
      }
    }
LABEL_17:
    sub_B170D4();
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
    sub_B170D4();
  gameObject = UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, posY, 0LL);
}


void __fastcall ServantFaceIconComponent__Awake(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UnityEngine_Component_o *v6; // x0
  float v7; // s8
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite
    || (transform = UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v6 = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
    || (v7 = *(float *)&localPosition, (v8 = UnityEngine_Component__get_transform(v6, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v9.fields.y = -64.0;
  v9.fields.z = 0.0;
  v9.fields.x = v7;
  UnityEngine_Transform__set_localPosition(v8, v9, 0LL);
}


void __fastcall ServantFaceIconComponent__Blank(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *frameSprite; // x0

  if ( (byte_40FD0A4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19397, method);
    byte_40FD0A4 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_B170D4();
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_19397, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x21

  if ( (byte_40FD0CC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&frameType);
    byte_40FD0CC = 1;
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
  UISprite_o *v17; // x0
  UISprite_o *faceSprite; // x0
  UISprite_o *frameSprite; // x0
  UISprite_o *typeSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UISprite_o *v22; // x0
  UnityEngine_Object_o *costumeIconSprite; // x20
  UISprite_o *v24; // x0
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *limitCountIcon; // x20
  LimitCountIconComponent_o *v29; // x0
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v31; // x20
  UISprite_o *v32; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UIIconLabel_o *v34; // x0
  UnityEngine_Object_o *shiningIcon; // x20
  const MethodInfo *v36; // x1
  ShiningIconComponent_o *v37; // x0

  if ( (byte_40FD0A3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FD0A3 = 1;
  }
  this->fields.info1 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.info1, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.info2 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.info2, 0LL, v10, v11, v12, v13, v14, v15);
  backSprite = this->fields.backSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommon(backSprite, 0LL);
  AtlasManager__SetCommon(this->fields.typeSprite, 0LL);
  v17 = this->fields.backSprite;
  if ( !v17 )
    goto LABEL_57;
  UISprite__set_spriteName(v17, 0LL, 0LL);
  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_57;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    goto LABEL_57;
  UISprite__set_spriteName(frameSprite, 0LL, 0LL);
  typeSprite = this->fields.typeSprite;
  if ( !typeSprite )
    goto LABEL_57;
  UISprite__set_spriteName(typeSprite, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v22 = this->fields.classSprite;
    if ( !v22 )
      goto LABEL_57;
    UISprite__set_spriteName(v22, 0LL, 0LL);
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    v24 = this->fields.costumeIconSprite;
    if ( !v24 )
      goto LABEL_57;
    UISprite__set_spriteName(v24, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v26 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v26 )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    v29 = this->fields.limitCountIcon;
    if ( !v29 )
      goto LABEL_57;
    LimitCountIconComponent__Clear(v29, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v31 = this->fields.raritySprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v31, 0LL);
    v32 = this->fields.raritySprite;
    if ( !v32 )
      goto LABEL_57;
    UISprite__set_spriteName(v32, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    v34 = this->fields.iconLabel;
    if ( !v34 )
      goto LABEL_57;
    UIIconLabel__Clear(v34, 0LL);
  }
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    v37 = this->fields.shiningIcon;
    if ( v37 )
    {
      ShiningIconComponent__Clear(v37, 0LL);
      goto LABEL_56;
    }
LABEL_57:
    sub_B170D4();
  }
LABEL_56:
  ServantFaceIconComponent__ClearEquip(this, v36);
}


void __fastcall ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UISprite_o *v9; // x0
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *rarity2Sprite; // x20
  UISprite_o *v14; // x0

  if ( (byte_40FD0BE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0BE = 1;
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
    gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !v7 )
        goto LABEL_31;
      v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !v8 )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(v8, 0, 0LL);
    }
    v9 = (UISprite_o *)this->fields.equipSprite;
    if ( !v9 )
      goto LABEL_31;
    UISprite__set_spriteName(v9, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v11 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v11 )
        goto LABEL_31;
      v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !v12 )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(v12, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      v14 = this->fields.rarity2Sprite;
      if ( v14 )
      {
        UISprite__set_spriteName(v14, 0LL, 0LL);
        return;
      }
LABEL_31:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ClearEquip_30710676(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *equipSprite; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  bool IsServant; // w0
  bool v13; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UISprite_o *v18; // x0
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UISprite_o *v24; // x0
  struct UISprite_o *v25; // x0
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UISprite_o *v29; // x0
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Object_o *v33; // x20
  UISprite_o *v34; // x0

  if ( (byte_40FD0BF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&baseSvtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FD0BF = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   baseSvtId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Entity )
        {
          IsServant = SvtType__IsServant(*(&Entity->fields.startType + 1), 0LL);
          if ( this->fields.noneEquipSprite )
          {
            v13 = IsServant;
            gameObject = UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                           0LL);
            if ( gameObject )
            {
              if ( v13 )
              {
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                {
                  v16 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
                  if ( !v16 )
                    goto LABEL_58;
                  v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
                  if ( !v17 )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive(v17, 0, 0LL);
                }
                v18 = (UISprite_o *)this->fields.equipSprite;
                if ( !v18 )
                  goto LABEL_58;
                UISprite__set_spriteName(v18, 0LL, 0LL);
                equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                {
                  v20 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
                  if ( !v20 )
                    goto LABEL_58;
                  v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
                  if ( !v21 )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive(v21, 0, 0LL);
                }
                rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
                  return;
                raritySprite = this->fields.raritySprite;
                if ( raritySprite )
                {
                  v24 = this->fields.rarity2Sprite;
                  if ( v24 )
                  {
                    UISprite__set_spriteName(v24, raritySprite->fields.mSpriteName, 0LL);
                    v25 = this->fields.rarity2Sprite;
                    if ( v25 )
                    {
                      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v25->klass->vtable._33_MakePixelPerfect.method)(
                        v25,
                        v25->klass->vtable._34_get_minWidth.methodPtr);
                      return;
                    }
                  }
                }
              }
              else
              {
                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                v26 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
                {
                  v27 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
                  if ( !v27 )
                    goto LABEL_58;
                  v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
                  if ( !v28 )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive(v28, 0, 0LL);
                }
                v29 = (UISprite_o *)this->fields.equipSprite;
                if ( !v29 )
                  goto LABEL_58;
                UISprite__set_spriteName(v29, 0LL, 0LL);
                v30 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
                {
                  v31 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
                  if ( !v31 )
                    goto LABEL_58;
                  v32 = UnityEngine_Component__get_gameObject(v31, 0LL);
                  if ( !v32 )
                    goto LABEL_58;
                  UnityEngine_GameObject__SetActive(v32, 0, 0LL);
                }
                v33 = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
                  return;
                v34 = this->fields.rarity2Sprite;
                if ( v34 )
                {
                  UISprite__set_spriteName(v34, 0LL, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_58:
    sub_B170D4();
  }
}


void __fastcall ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0
  UISprite_o *v4; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0LL, 0LL), (v4 = this->fields.faceSprite) == 0LL) )
    sub_B170D4();
  UISprite__set_spriteName(v4, 0LL, 0LL);
}


void __fastcall ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_B170D4();
  ShiningIconComponent__Clear(shiningIcon, 0LL);
}


void __fastcall ServantFaceIconComponent__FaceSpriteDisp(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *faceSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  bool v9; // w1
  UnityEngine_Component_o *iconLabel; // x0

  faceSprite = (UnityEngine_Component_o *)this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(faceSprite, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  if ( !flag )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( iconLabel )
    {
      v8 = UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( v8 )
      {
        v9 = 0;
        goto LABEL_10;
      }
    }
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v7 = (UnityEngine_Component_o *)this->fields.iconLabel;
  if ( !v7 )
    goto LABEL_11;
  v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v9 = 1;
LABEL_10:
  UnityEngine_GameObject__SetActive(v8, v9, 0LL);
}


System_String_o *__fastcall ServantFaceIconComponent__GetFaceSpriteName(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *faceSprite; // x8

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FD0CD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FD0CD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           MasterData_WarQuestSelectionMaster,
           svtId,
           iconLimit,
           0LL);
}


void __fastcall ServantFaceIconComponent__HideEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UISprite_o *v9; // x0
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *rarity2Sprite; // x20
  UISprite_o *v14; // x0

  if ( (byte_40FD0C3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0C3 = 1;
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
    gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !v7 )
        goto LABEL_31;
      v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !v8 )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(v8, 1, 0LL);
    }
    v9 = (UISprite_o *)this->fields.equipSprite;
    if ( !v9 )
      goto LABEL_31;
    UISprite__set_spriteName(v9, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v11 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v11 )
        goto LABEL_31;
      v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !v12 )
        goto LABEL_31;
      UnityEngine_GameObject__SetActive(v12, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      v14 = this->fields.rarity2Sprite;
      if ( v14 )
      {
        UISprite__set_spriteName(v14, 0LL, 0LL);
        return;
      }
LABEL_31:
      sub_B170D4();
    }
  }
}


bool __fastcall ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  struct UIMeshSprite_o *v4; // x8
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD0C4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0C4 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
  {
    v4 = this->fields.equipSprite;
    if ( !v4 )
      goto LABEL_14;
    if ( !System_String__IsNullOrEmpty(v4->fields.mSpriteName, 0LL) )
      return 1;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite || (gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL)) == 0LL )
LABEL_14:
      sub_B170D4();
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall ServantFaceIconComponent__NoMount(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *backSprite; // x0

  if ( (byte_40FD0A5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19417, method);
    byte_40FD0A5 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B170D4();
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19417, 0LL);
}


void __fastcall ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *backSprite; // x0

  if ( (byte_40FD0A6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19418, method);
    byte_40FD0A6 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_B170D4();
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19418, 0LL);
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

  if ( (byte_40FD0AA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantData);
    byte_40FD0AA = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0LL);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_30702780(
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
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_40FD0C9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0C9 = 1;
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
      v4 = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !v4 || (transform = UnityEngine_Component__get_transform(v4, 0LL)) == 0LL )
        sub_B170D4();
      UnityEngine_Transform__set_localPosition(transform, this->fields.iconLabelInitPos, 0LL);
    }
    this->fields.isAdjustIconLabelPos = 0;
  }
}


void __fastcall ServantFaceIconComponent__ResetIconLabelScale(
        ServantFaceIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconLabel; // x20
  UIIconLabel_o *v4; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector2Int_o textLabelInitSize; // 0:x1.8

  if ( (byte_40FD0CB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0CB = 1;
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
      v4 = this->fields.iconLabel;
      if ( !v4
        || (textLabelInitSize = this->fields.textLabelInitSize,
            UIIconLabel__SetTextLabelSize(v4, textLabelInitSize, 0LL),
            (v5 = (UnityEngine_Component_o *)this->fields.iconLabel) == 0LL)
        || (transform = UnityEngine_Component__get_transform(v5, 0LL)) == 0LL )
      {
        sub_B170D4();
      }
      UnityEngine_Transform__set_localScale(transform, this->fields.iconLabelInitScale, 0LL);
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
  WebViewManager_o *v21; // x0
  WarQuestSelectionMaster_o *v22; // x0
  __int64 v23; // x26
  __int64 v24; // x27
  ServantLimitImageMaster_o *v25; // x24
  int32_t v26; // w0
  int32_t v27; // w24
  int32_t v28; // w25
  int32_t v29; // w0
  int32_t exceedCount; // w26
  int32_t v31; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  const MethodInfo *v34; // x1
  int32_t FriendIconLimitCount; // w24
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v38; // x26
  __int64 v39; // x27
  ServantLimitImageMaster_o *v40; // x25
  int32_t v41; // w0
  int32_t ServantImageLimitSealAfter; // w24
  int32_t v43; // w25
  int32_t v44; // w0
  __int64 v45; // x21
  __int64 v46; // x22
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40FD0A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtEntity);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FD0A7 = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  v17 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v52, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( v18 != NetworkManager__get_UserId(0LL) )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v40 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v55.fields.currentCryptoKey = v39;
      *(_QWORD *)&v55.fields.fakeValue = v38;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL);
      if ( v40 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v40,
                                       v41,
                                       FriendIconLimitCount,
                                       0LL);
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.svtId, 0LL);
        v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.limitCount, 0LL);
        ServantFaceIconComponent__Set_30702780(
          this,
          v43,
          v44,
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
          v51);
        goto LABEL_27;
      }
    }
LABEL_35:
    sub_B170D4();
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
  if ( questRestrictionInfo )
  {
    v20 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userSvtEntity, 0LL);
    if ( v20 >= 0 )
      IconLimitCount = v20;
  }
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_35;
  v22 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v21,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v24 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v25 = (ServantLimitImageMaster_o *)v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v24;
  *(_QWORD *)&v54.fields.fakeValue = v23;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
  if ( !v25 )
    goto LABEL_35;
  v27 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v25, v26, IconLimitCount, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.svtId, 0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  v31 = v29;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  ServantFaceIconComponent__Set_30702780(
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
    v51);
LABEL_27:
  if ( equipIdList && *(_QWORD *)&equipIdList->max_length )
  {
    v46 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = v46;
    *(_QWORD *)&v56.fields.fakeValue = v45;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
    if ( !equipIdList->max_length )
    {
      sub_B17100(v47, v48, v49);
      sub_B170A0();
    }
    ServantFaceIconComponent__SetEquip_30705200(this, v47, equipIdList->m_Items[0], v50);
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
  int32_t collectionStatus; // w8
  UISprite_o *v14; // x0
  UISprite_o *v15; // x22

  if ( (byte_40FD0B9 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, isCommandCode);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FD0B9 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(classSprite, 0LL, 0LL) )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (collectionStatus | 4) == 4)
      || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v14 = this->fields.classSprite;
      if ( v14 )
      {
LABEL_10:
        UISprite__set_spriteName(v14, 0LL, 0LL);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
    v15 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v15 )
      {
        v14 = v15;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v23; // x23
  WebViewObject_o *Component_WebViewObject; // x26
  const MethodInfo *v25; // x5
  int32_t flag; // w23
  UISprite_o *v27; // x0
  UISprite_o *faceSprite; // x0
  UISprite_o *v29; // x0
  UISprite_o *v30; // x0
  UnityEngine_Object_o *equipSprite; // x24
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x24
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UISprite_o *v37; // x0
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UISprite_o *backSprite; // x25
  UISprite_o *frameSprite; // x0
  UISprite_o *typeSprite; // x0
  const MethodInfo *v44; // x4
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x5
  UnityEngine_Object_o *shiningIcon; // x23
  const MethodInfo *v48; // x1
  ShiningIconComponent_o *v49; // x0
  ShiningIconComponent_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v66; // x1
  const MethodInfo *v67; // x2

  if ( (byte_40FD0B8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_19417, v18);
    sub_B16FFC(&StringLiteral_19246, v19);
    byte_40FD0B8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_66;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             commandCodeId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_66;
  v23 = Entity;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.faceSprite,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_66;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_WebViewObject, 0LL);
  }
  if ( !v23 )
LABEL_66:
    sub_B170D4();
  flag = v23->fields.flag;
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus == 2 || collectionStatus == 1 )
  {
    backSprite = this->fields.backSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeBaseIcon(backSprite, flag, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.faceSprite, commandCodeId, 0LL);
    frameSprite = this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_66;
    UISprite__set_spriteName(frameSprite, 0LL, 0LL);
    typeSprite = this->fields.typeSprite;
    if ( !typeSprite )
      goto LABEL_66;
    UISprite__set_spriteName(typeSprite, 0LL, 0LL);
  }
  else if ( !collectionStatus )
  {
    v27 = this->fields.backSprite;
    if ( !v27 )
      goto LABEL_66;
    UISprite__set_spriteName(v27, (System_String_o *)StringLiteral_19417, 0LL);
    faceSprite = this->fields.faceSprite;
    if ( !faceSprite )
      goto LABEL_66;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
    v29 = this->fields.frameSprite;
    if ( !v29 )
      goto LABEL_66;
    UISprite__set_spriteName(v29, 0LL, 0LL);
    v30 = this->fields.typeSprite;
    if ( !v30 )
      goto LABEL_66;
    UISprite__set_spriteName(v30, 0LL, 0LL);
    equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_66;
      gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !gameObject )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
      {
        v35 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
        if ( !v35 )
          goto LABEL_66;
        v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
        if ( !v36 )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive(v36, 0, 0LL);
      }
      v37 = (UISprite_o *)this->fields.equipSprite;
      if ( !v37 )
        goto LABEL_66;
      UISprite__set_spriteName(v37, 0LL, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        v39 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
        if ( !v39 )
          goto LABEL_66;
        v40 = UnityEngine_Component__get_gameObject(v39, 0LL);
        if ( !v40 )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive(v40, 0, 0LL);
      }
    }
  }
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, v25);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v44);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v45);
  ServantFaceIconComponent__SetRaritySprite(this, 1, flag, 0, 0, v46);
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
      v50 = this->fields.shiningIcon;
      if ( v50 )
      {
        ShiningIconComponent__Set_33652672(v50, (System_String_o *)StringLiteral_19246, 0LL);
        goto LABEL_57;
      }
    }
    else
    {
      v49 = this->fields.shiningIcon;
      if ( v49 )
      {
        ShiningIconComponent__Clear(v49, 0LL);
        goto LABEL_57;
      }
    }
    goto LABEL_66;
  }
LABEL_57:
  ServantFaceIconComponent__ClearEquip(this, v48);
  if ( info1 && !IconLabelInfo__IsClear(info1, 0LL) )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v58 = (System_Int32_array **)info1;
  }
  else
  {
    this->fields.info1 = 0LL;
    p_info1 = &this->fields.info1;
    v58 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_info1, v58, v51, v52, v53, v54, v55, v56);
  if ( info2 && !IconLabelInfo__IsClear(info2, 0LL) )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v66 = (System_Int32_array **)info2;
  }
  else
  {
    this->fields.info2 = 0LL;
    p_info2 = &this->fields.info2;
    v66 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_info2, v66, v59, v60, v61, v62, v63, v64);
  ServantFaceIconComponent__SetIconLabel(this, 0, v67);
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
  UISprite_o *v9; // x0
  UnityEngine_Behaviour_o *v10; // x0
  int32_t v11; // w20
  int32_t iconId; // t1
  UISprite_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  UIWidget_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *v19; // x0
  UIWidget_o *v20; // x0
  UnityEngine_Behaviour_o *v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD0CE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, svtCostumeEntity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_22382, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FD0CE = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    v9 = this->fields.costumeIconSprite;
    if ( !v9 )
      goto LABEL_23;
    UISprite__set_spriteName(v9, (System_String_o *)StringLiteral_1, 0LL);
    v10 = (UnityEngine_Behaviour_o *)this->fields.costumeIconSprite;
    if ( !v10 )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v11 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v13 = this->fields.costumeIconSprite;
        v14 = System_Int32__ToString(v11, 0LL);
        v15 = System_String__Concat_43743732((System_String_o *)StringLiteral_22382, v14, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEventSprite(v13, v15, 0LL) )
        {
          v16 = (UIWidget_o *)this->fields.costumeIconSprite;
          if ( v16 )
          {
            UIWidget__set_pivot(v16, 4, 0LL);
            v17 = (UnityEngine_Component_o *)this->fields.costumeIconSprite;
            if ( v17 )
            {
              transform = UnityEngine_Component__get_transform(v17, 0LL);
              if ( transform )
              {
                v22.fields.x = -47.0;
                v22.fields.y = -42.0;
                v22.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition(transform, v22, 0LL);
                v19 = (UIWidget_o *)this->fields.costumeIconSprite;
                if ( v19 )
                {
                  UIWidget__set_width(v19, 34, 0LL);
                  v20 = (UIWidget_o *)this->fields.costumeIconSprite;
                  if ( v20 )
                  {
                    UIWidget__set_height(v20, 34, 0LL);
                    v21 = (UnityEngine_Behaviour_o *)this->fields.costumeIconSprite;
                    if ( v21 )
                    {
                      UnityEngine_Behaviour__set_enabled(v21, 1, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_23:
          sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x23
  int32_t v19; // w0
  int32_t v20; // w23
  WebViewManager_o *v21; // x0
  ServantLimitImageMaster_o *v22; // x0
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v24; // w25
  int32_t CardImageLimitCount; // w0
  const MethodInfo *v26; // x5
  int32_t maxLimitCount; // w25
  int32_t v28; // w24
  bool IsNew; // w0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40FD0AE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD0AE = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v17 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v17;
    *(_QWORD *)&v32.fields.fakeValue = v16;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
    if ( !v18
      || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v18,
            v19,
            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtColEntity->fields.svtId, 0LL),
          (v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (v22 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v21,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_18:
      sub_B170D4();
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v22,
                                   v20,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtColEntity->fields.svtId, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v24, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( userSvtColEntity->fields.status )
    {
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      v28 = CardImageLimitCount;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
      ServantFaceIconComponent__Set_30702780(
        this,
        v20,
        maxLimitCount,
        v28,
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
        v31);
      ServantFaceIconComponent__ClearEquip(this, v30);
    }
    else
    {
      ServantFaceIconComponent__Set_30707876(this, userSvtColEntity, info1, info2, 0, v26);
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

  if ( (byte_40FD0AF & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    sub_B16FFC(&ServantFaceIconComponent_TypeInfo, v9);
    byte_40FD0AF = 1;
  }
  if ( !equipTargetInfo )
    sub_B170D4();
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  limitCount = equipTargetInfo->fields.limitCount;
  v14 = v12;
  v15 = ServantFaceIconComponent_TypeInfo;
  if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
    v15 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_30702780(
    this,
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
  ServantFaceIconComponent__ClearEquip(this, v16);
}


void __fastcall ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(classSprite, flag, 0LL);
}


void __fastcall ServantFaceIconComponent__SetDispLimitCountIcon(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *limitCountIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  limitCountIcon = (UnityEngine_Component_o *)this->fields.limitCountIcon;
  if ( !limitCountIcon || (gameObject = UnityEngine_Component__get_gameObject(limitCountIcon, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


void __fastcall ServantFaceIconComponent__SetDispRaritySprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *raritySprite; // x0

  raritySprite = (UnityEngine_Behaviour_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_B170D4();
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

  if ( (byte_40FD0AC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    byte_40FD0AC = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
    ServantFaceIconComponent__SetEquip_30707172(this, 0, v9, v10, v11);
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

  if ( (byte_40FD0BD & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, info);
    byte_40FD0BD = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL) )
      ServantFaceIconComponent__SetEquip_30710176(this, 0, info, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_30705200(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
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

  if ( (byte_40FD0C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&baseSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FD0C0 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               userSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24, 0LL);
      v20 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v25.fields.fakeValue = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
      v21 = v19;
      *(_QWORD *)&v25.fields.currentCryptoKey = v20;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
      ServantFaceIconComponent__SetEquip_30707172(this, baseSvtId, v21, v22, v23);
    }
    else
    {
LABEL_15:
      ServantFaceIconComponent__ClearEquip_30710676(this, baseSvtId, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_30707172(
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
  const MethodInfo *v14; // x2
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x22
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UISprite_o *v20; // x22
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UISprite_o *v29; // x0
  struct UISprite_o *v30; // x0
  UISprite_o *typeSprite; // x0

  if ( (byte_40FD0C2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FD0C2 = 1;
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
        gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
          {
            v18 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
            if ( !v18 )
              goto LABEL_41;
            v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
            if ( !v19 )
              goto LABEL_41;
            UnityEngine_GameObject__SetActive(v19, 0, 0LL);
          }
          v20 = (UISprite_o *)this->fields.equipSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEquipFace(v20, svtId, 0LL);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
          {
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_41;
            MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)Instance,
                                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_41;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       svtId,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !this->fields.equipLimitCountSprite )
              goto LABEL_41;
            v25 = Entity;
            v26 = UnityEngine_Component__get_gameObject(
                    (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                    0LL);
            if ( !v25 || !v26 )
              goto LABEL_41;
            UnityEngine_GameObject__SetActive(
              v26,
              SLODWORD(v25->fields.targetId) <= limitCount && SLODWORD(v25->fields.targetId) > 0,
              0LL);
          }
          rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
          {
            raritySprite = this->fields.raritySprite;
            if ( !raritySprite )
              goto LABEL_41;
            v29 = this->fields.rarity2Sprite;
            if ( !v29 )
              goto LABEL_41;
            UISprite__set_spriteName(v29, raritySprite->fields.mSpriteName, 0LL);
            v30 = this->fields.rarity2Sprite;
            if ( !v30 )
              goto LABEL_41;
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v30->klass->vtable._33_MakePixelPerfect.method)(
              v30,
              v30->klass->vtable._34_get_minWidth.methodPtr);
          }
          typeSprite = this->fields.typeSprite;
          if ( typeSprite )
          {
            UISprite__set_spriteName(typeSprite, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_41:
      sub_B170D4();
    }
    ServantFaceIconComponent__ClearEquip_30710676(this, baseSvtId, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_30710176(
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

  if ( (byte_40FD0C1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&baseSvtId);
    byte_40FD0C1 = 1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL) >= 1 )
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
    ServantFaceIconComponent__SetEquip_30707172(this, baseSvtId, v11, equipTarget->fields.limitCount, v12);
  }
  else
  {
LABEL_12:
    ServantFaceIconComponent__ClearEquip_30710676(this, baseSvtId, (const MethodInfo *)equipTarget);
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
  WebViewManager_o *Instance; // x0
  ServantExceedMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v14; // x3
  int32_t FrameType; // w0
  UISprite_o *backSprite; // x23
  int32_t v17; // w22
  UISprite_o *frameSprite; // x0
  UnityEngine_Object_o *equipSprite; // x21
  UISprite_o *v20; // x0
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Object_o *classSprite; // x21
  UISprite_o *v30; // x0
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Object_o *limitCountIcon; // x21
  LimitCountIconComponent_o *v35; // x0
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v37; // x1
  UISprite_o *v38; // x21
  System_String_o *Icon; // x0
  struct UISprite_o *v40; // x0
  const MethodInfo *v41; // x2

  if ( (byte_40FD0B7 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Rarity_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_20173, v11);
    byte_40FD0B7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_60;
  FrameType = ServantExceedMaster__GetFrameType(MasterData_WarQuestSelectionMaster, rarity, 0, v14);
  backSprite = this->fields.backSprite;
  v17 = FrameType;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceBaseIcon(backSprite, v17, 0, 0LL);
  AtlasManager__SetFaceImage(this->fields.faceSprite, iconId, 0, 0LL);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    goto LABEL_60;
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20173, 0LL);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v17, 0, 0LL);
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
  {
    v20 = (UISprite_o *)this->fields.equipSprite;
    if ( !v20 )
      goto LABEL_60;
    UISprite__set_spriteName(v20, 0LL, 0LL);
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      v24 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !v24 )
        goto LABEL_60;
      v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
      if ( !v25 )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive(v25, 0, 0LL);
    }
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v27 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v27 )
        goto LABEL_60;
      v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
      if ( !v28 )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive(v28, 0, 0LL);
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
    v30 = this->fields.classSprite;
    if ( !v30 )
      goto LABEL_60;
    UISprite__set_spriteName(v30, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v32 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v32 )
      goto LABEL_60;
    v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
    if ( !v33 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v33, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    v35 = this->fields.limitCountIcon;
    if ( !v35 )
      goto LABEL_60;
    LimitCountIconComponent__Clear(v35, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v38 = this->fields.raritySprite;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon = Rarity__getIcon(rarity, 0LL);
    if ( v38 )
    {
      UISprite__set_spriteName(v38, Icon, 0LL);
      v40 = this->fields.raritySprite;
      if ( v40 )
      {
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v40->klass->vtable._33_MakePixelPerfect.method)(
          v40,
          v40->klass->vtable._34_get_minWidth.methodPtr);
        goto LABEL_59;
      }
    }
LABEL_60:
    sub_B170D4();
  }
LABEL_59:
  ServantFaceIconComponent__ClearEquip(this, v37);
  ServantFaceIconComponent__SetIconLabel(this, 0, v41);
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
  UIIconLabel_o *v9; // x0

  v3 = count;
  if ( (byte_40FD0C6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    byte_40FD0C6 = 1;
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
      sub_B170D4();
    }
    if ( this->fields.info2 )
    {
      v9 = this->fields.iconLabel;
      if ( (v3 & 1) != 0 )
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
      UIIconLabel__Set_40382388(v9, info1, 1, 0LL);
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
  LimitCountIconComponent_o *v10; // x0
  int32_t collectionStatus; // w8

  if ( (byte_40FD0BB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isCommandCode);
    byte_40FD0BB = 1;
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
      v10 = this->fields.limitCountIcon;
      if ( !v10 )
LABEL_16:
        sub_B170D4();
      goto LABEL_15;
    }
    collectionStatus = this->fields.collectionStatus;
    v10 = this->fields.limitCountIcon;
    if ( !collectionStatus || (collectionStatus & 0xFFFFFFFC) == 4 )
    {
      if ( !v10 )
        goto LABEL_16;
LABEL_15:
      LimitCountIconComponent__Clear(v10, 0LL);
      return;
    }
    if ( !v10 )
      goto LABEL_16;
    LimitCountIconComponent__Set(v10, limitCount, limitMax, 0LL);
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
  UnityEngine_Component_o *v10; // x0
  int32_t collectionStatus; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  bool v13; // w1

  if ( (byte_40FD0BA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isCommandCode);
    byte_40FD0BA = 1;
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
      v10 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( !v10 )
        goto LABEL_19;
    }
    else
    {
      collectionStatus = this->fields.collectionStatus;
      v10 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( collectionStatus && (collectionStatus & 0xFFFFFFFC) != 4 )
      {
        if ( !v10 || (gameObject = UnityEngine_Component__get_gameObject(v10, 0LL)) == 0LL )
LABEL_19:
          sub_B170D4();
        v13 = limitMax > 0 && limitCount >= limitMax;
        goto LABEL_18;
      }
      if ( !v10 )
        goto LABEL_19;
    }
    gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v13 = 0;
LABEL_18:
    UnityEngine_GameObject__SetActive(gameObject, v13, 0LL);
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
  int32_t collectionStatus; // w8
  struct UISprite_o *v18; // x21
  System_String_o *Icon; // x0
  System_String_o *v20; // x1
  UISprite_o *v21; // x0
  struct UISprite_o *v22; // x0
  UISprite_o *v23; // x0
  System_String_o *Icon_21544656; // x23
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v26; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v28; // w22
  UISprite_o *v29; // x20
  AtlasManager_c *v30; // x8
  ServantLvDetailMaster_o *v31; // x0
  int32_t RarityIcon; // w0

  if ( (byte_40FD0BC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, isCommandCode);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Rarity_TypeInfo, v15);
    byte_40FD0BC = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(raritySprite, 0LL, 0LL) )
  {
    collectionStatus = this->fields.collectionStatus;
    if ( isCommandCode )
    {
      v18 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon = Rarity__getIcon(rarity, 0LL);
        if ( !v18 )
          goto LABEL_48;
        v20 = Icon;
        v21 = v18;
        goto LABEL_14;
      }
      if ( !v18 )
        goto LABEL_48;
      v23 = this->fields.raritySprite;
      goto LABEL_22;
    }
    if ( (collectionStatus | 4) == 4 || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v23 = this->fields.raritySprite;
      if ( !v23 )
        goto LABEL_48;
LABEL_22:
      UISprite__set_spriteName(v23, 0LL, 0LL);
      return;
    }
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon_21544656 = Rarity__getIcon_21544656(rarity, exceedCount, lv, 0LL);
    if ( exceedCount <= 0 )
    {
      v29 = this->fields.raritySprite;
      v30 = AtlasManager_TypeInfo;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_42:
        AtlasManager__SetCommon(v29, 0LL);
        v21 = this->fields.raritySprite;
        if ( !v21 )
          goto LABEL_48;
        v20 = Icon_21544656;
LABEL_14:
        UISprite__set_spriteName(v21, v20, 0LL);
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
      Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_48;
      Entity = ServantExceedMaster__GetEntity(Master_WarQuestSelectionMaster, rarity, exceedCount, v26);
      v28 = Entity ? Entity->fields.rarityIcon : 0;
      v31 = (ServantLvDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !v31 )
        goto LABEL_48;
      RarityIcon = ServantLvDetailMaster__GetRarityIcon(v31, rarity, lv, v28, 0LL);
      v29 = this->fields.raritySprite;
      v30 = AtlasManager_TypeInfo;
      if ( RarityIcon >= 3 )
      {
        if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventSprite(v29, Icon_21544656, 0LL);
LABEL_15:
        v22 = this->fields.raritySprite;
        if ( v22 )
        {
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
            v22,
            v22->klass->vtable._34_get_minWidth.methodPtr);
          return;
        }
LABEL_48:
        sub_B170D4();
      }
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_42;
    }
    if ( !v30->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v30);
    goto LABEL_42;
  }
}


void __fastcall ServantFaceIconComponent__Set_30631556(
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

  if ( (byte_40FD0A9 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userSvtEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_40FD0A9 = 1;
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
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
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
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v37, 0LL);
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
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v25 = v23;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30702780(
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
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
      ServantFaceIconComponent__Set_30702780(
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


void __fastcall ServantFaceIconComponent__Set_30632248(
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

  if ( (byte_40FD0B1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantLeaderInfo);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v13);
    byte_40FD0B1 = 1;
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
      v17 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL) )
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
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
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
        ServantFaceIconComponent__Set_30702780(
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
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
        ServantFaceIconComponent__Set_30702780(
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
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
      ServantFaceIconComponent__SetEquip_30710176(this, v35, servantLeaderInfo->fields.equipTarget1, v36);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__Set_30702780(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v39; // x24
  WebViewObject_o *Component_WebViewObject; // x22
  int32_t v41; // w22
  int32_t v42; // w27
  int32_t startType; // w25
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v45; // x5
  ServantFaceIconComponent_o *v46; // x0
  const MethodInfo *v47; // x3
  int32_t FrameType_30699216; // w28
  ServantLvDetailMaster_o *v49; // x0
  int32_t v50; // w27
  int32_t FrameType; // w28
  const MethodInfo *v52; // x2
  UISprite_o *v53; // x23
  const MethodInfo *v54; // x2
  UISprite_o *backSprite; // x0
  bool IsUseFaceBattle; // w0
  UISprite_o *faceSprite; // x20
  UISprite_o *v58; // x20
  UISprite_o *v59; // x0
  bool IsServantEquip; // w0
  const MethodInfo *v61; // x5
  const MethodInfo *v62; // x4
  const MethodInfo *v63; // x4
  const MethodInfo *v64; // x5
  UnityEngine_Object_o *shiningIcon; // x20
  const MethodInfo *v66; // x1
  ShiningIconComponent_o *v67; // x0
  ShiningIconComponent_o *v68; // x0
  __int64 *v69; // x8
  UISprite_o *v70; // x20
  UISprite_o *v71; // x0
  UISprite_o *v72; // x0
  UISprite_o *v73; // x20
  UISprite_o *v74; // x20
  ServantFaceIconComponent_c *v75; // x0
  UISprite_o *v76; // x0
  UnityEngine_Object_o *v77; // x20
  UISprite_o *v78; // x0
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Object_o *v81; // x20
  UnityEngine_Component_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct IconLabelInfo_o **p_info1; // x0
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct IconLabelInfo_o **p_info2; // x0
  System_Int32_array **v99; // x1
  const MethodInfo *v100; // x2
  UISprite_o *frameSprite; // x0
  UISprite_o *typeSprite; // x0
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Component_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  UISprite_o *v109; // x0
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Component_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  struct IconLabelInfo_o *v113; // [xsp+0h] [xbp-70h]
  struct IconLabelInfo_o *v114; // [xsp+8h] [xbp-68h]
  int32_t rarity; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FD0B6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v25);
    sub_B16FFC(&DataManager_TypeInfo, v26);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v28);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v29);
    sub_B16FFC(&ServantFaceIconComponent_TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B16FFC(&StringLiteral_19417, v32);
    sub_B16FFC(&StringLiteral_19246, v33);
    sub_B16FFC(&StringLiteral_20173, v34);
    sub_B16FFC(&StringLiteral_19266, v35);
    byte_40FD0B6 = 1;
  }
  rarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_134;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             svtId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_134;
  v39 = Entity;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.faceSprite,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_134;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_WebViewObject, 0LL);
  }
  v41 = imageSvtId;
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
      v46 = (ServantFaceIconComponent_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
      imageLimitCount = (int)v46;
      if ( isCheckSeal )
        imageLimitCount = ServantFaceIconComponent__GetIconLimitCountSealAfter(v46, svtId, (int32_t)v46, v47);
    }
  }
  if ( !imageSvtId )
    v41 = svtId;
  v113 = info1;
  if ( !v39 )
    goto LABEL_134;
  v42 = frameLimitCount;
  startType = v39->fields.startType;
  v114 = info2;
  if ( frameLimitCount >= 1 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_134;
    goto LABEL_32;
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  v42 = limitCount;
  if ( !Master_WarQuestSelectionMaster )
LABEL_134:
    sub_B170D4();
LABEL_32:
  FrameType_30699216 = ServantExceedMaster__GetFrameType_30699216(
                         Master_WarQuestSelectionMaster,
                         &rarity,
                         svtId,
                         v42,
                         exceedCount,
                         v45);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v49 = (ServantLvDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !v49 )
    goto LABEL_134;
  v50 = rarity;
  FrameType = ServantLvDetailMaster__GetFrameType(v49, rarity, lv, FrameType_30699216, 0LL);
  ServantFaceIconComponent__SetCostumeIcon(this, 0LL, v52);
  this->fields.collectionStatus = collectionStatus;
  switch ( (int)svtCostumeEntity )
  {
    case 0:
      backSprite = this->fields.backSprite;
      if ( !backSprite )
        goto LABEL_134;
      UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_19417, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      IsUseFaceBattle = AtlasManager__IsUseFaceBattle(0LL);
      faceSprite = this->fields.faceSprite;
      if ( IsUseFaceBattle )
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
      frameSprite = this->fields.frameSprite;
      if ( !frameSprite )
        goto LABEL_134;
      UISprite__set_spriteName(frameSprite, 0LL, 0LL);
      typeSprite = this->fields.typeSprite;
      if ( !typeSprite )
        goto LABEL_134;
      UISprite__set_spriteName(typeSprite, 0LL, 0LL);
      equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
        goto LABEL_57;
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_134;
      gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !gameObject )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
        goto LABEL_125;
      v107 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !v107 )
        goto LABEL_134;
      v108 = UnityEngine_Component__get_gameObject(v107, 0LL);
      if ( !v108 )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(v108, 0, 0LL);
LABEL_125:
      v109 = (UISprite_o *)this->fields.equipSprite;
      if ( !v109 )
        goto LABEL_134;
      UISprite__set_spriteName(v109, 0LL, 0LL);
LABEL_127:
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
        goto LABEL_57;
      v111 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v111 )
        goto LABEL_134;
      v112 = UnityEngine_Component__get_gameObject(v111, 0LL);
      if ( !v112 )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(v112, 0, 0LL);
LABEL_57:
      IsServantEquip = SvtType__IsServantEquip(*(&v39->fields.startType + 1), 0LL);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, startType, FrameType, v61);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v39->fields.targetId, limitCount, v62);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v39->fields.targetId, limitCount, v63);
      ServantFaceIconComponent__SetRaritySprite(this, 0, v50, exceedCount, lv, v64);
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
        v68 = this->fields.shiningIcon;
        if ( !v68 )
          goto LABEL_134;
        v69 = &StringLiteral_19266;
LABEL_98:
        ShiningIconComponent__Set_33652672(v68, (System_String_o *)*v69, 0LL);
        goto LABEL_99;
      }
      if ( isNew && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
      {
        v68 = this->fields.shiningIcon;
        if ( !v68 )
          goto LABEL_134;
        v69 = &StringLiteral_19246;
        goto LABEL_98;
      }
      v67 = this->fields.shiningIcon;
      if ( !v67 )
        goto LABEL_134;
      ShiningIconComponent__Clear(v67, 0LL);
LABEL_99:
      ServantFaceIconComponent__ClearEquip(this, v66);
      if ( v113 && !IconLabelInfo__IsClear(v113, 0LL) )
      {
        this->fields.info1 = v113;
        p_info1 = &this->fields.info1;
        v91 = (System_Int32_array **)v113;
      }
      else
      {
        this->fields.info1 = 0LL;
        p_info1 = &this->fields.info1;
        v91 = 0LL;
      }
      sub_B16F98((BattleServantConfConponent_o *)p_info1, v91, v84, v85, v86, v87, v88, v89);
      if ( v114 && !IconLabelInfo__IsClear(v114, 0LL) )
      {
        this->fields.info2 = v114;
        p_info2 = &this->fields.info2;
        v99 = (System_Int32_array **)v114;
      }
      else
      {
        this->fields.info2 = 0LL;
        p_info2 = &this->fields.info2;
        v99 = 0LL;
      }
      sub_B16F98((BattleServantConfConponent_o *)p_info2, v99, v92, v93, v94, v95, v96, v97);
      ServantFaceIconComponent__SetIconLabel(this, 0, v100);
      return;
    case 1:
    case 2:
    case 3:
    case 5:
      v53 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v53, FrameType, startType, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v41, imageLimitCount, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v54);
      goto LABEL_55;
    case 4:
      v58 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v58, FrameType, startType, 0LL);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0LL);
LABEL_55:
      v59 = this->fields.frameSprite;
      if ( !v59 )
        goto LABEL_134;
      UISprite__set_spriteName(v59, (System_String_o *)StringLiteral_20173, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, *(&v39->fields.startType + 1), FrameType, startType, 0LL);
      goto LABEL_57;
    case 6:
      v73 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceBaseIcon(v73, FrameType, startType, 0LL);
      v74 = this->fields.faceSprite;
      v75 = ServantFaceIconComponent_TypeInfo;
      if ( (BYTE3(ServantFaceIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
        v75 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v74,
        v75->static_fields->SECRET_SERVANT_ID,
        v75->static_fields->SECRET_LIMIT_COUNT,
        0LL);
      v76 = this->fields.frameSprite;
      if ( !v76 )
        goto LABEL_134;
      UISprite__set_spriteName(v76, (System_String_o *)StringLiteral_20173, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, *(&v39->fields.startType + 1), FrameType, startType, 0LL);
      v77 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(v77, 0LL, 0LL) )
        goto LABEL_57;
      v78 = (UISprite_o *)this->fields.equipSprite;
      if ( !v78 )
        goto LABEL_134;
      UISprite__set_spriteName(v78, 0LL, 0LL);
      v79 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
      if ( !v79 )
        goto LABEL_134;
      v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
      if ( !v80 )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(v80, 0, 0LL);
      v81 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
        goto LABEL_127;
      v82 = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !v82 )
        goto LABEL_134;
      v83 = UnityEngine_Component__get_gameObject(v82, 0LL);
      if ( !v83 )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(v83, 0, 0LL);
      goto LABEL_127;
    case 7:
      v70 = this->fields.backSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetDataLostFaceBaseIcon(v70, 0LL);
      AtlasManager__SetDataLostFace(this->fields.faceSprite, 0LL);
      v71 = this->fields.frameSprite;
      if ( !v71 )
        goto LABEL_134;
      UISprite__set_spriteName(v71, 0LL, 0LL);
      v72 = this->fields.typeSprite;
      if ( !v72 )
        goto LABEL_134;
      UISprite__set_spriteName(v72, 0LL, 0LL);
      goto LABEL_57;
    default:
      goto LABEL_57;
  }
}


void __fastcall ServantFaceIconComponent__Set_30705604(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v14; // x4

  if ( (byte_40FD0A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FD0A8 = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               userSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_30631556(this, Entity, info1, info2, v14);
  }
}


void __fastcall ServantFaceIconComponent__Set_30706244(
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
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v35; // x3
  int32_t v36; // w0
  __int64 v37; // x26
  __int64 v38; // x27
  int32_t v39; // w25
  int32_t v40; // w0
  __int64 v41; // x8
  const MethodInfo *v42; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_40FD0AB & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userSvtEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_40FD0AB = 1;
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
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v45, 0LL);
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
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL);
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
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v27 = v25;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_30702780(
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
      v36 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v17,
              (int32_t)FriendIconLimitCount,
              v35);
      v38 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v37 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v39 = v36;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v38;
      *(_QWORD *)&v47.fields.fakeValue = v37;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
      ServantFaceIconComponent__Set_30702780(
        this,
        v17,
        v40,
        v39,
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
    if ( equipIdList && (v41 = *(_QWORD *)&equipIdList->max_length) != 0 )
    {
      if ( !(_DWORD)v41 )
      {
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      ServantFaceIconComponent__SetEquip_30705200(this, v17, equipIdList->m_Items[0], v33);
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


void __fastcall ServantFaceIconComponent__Set_30707876(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x25
  __int64 v19; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  int32_t v21; // w0
  WarEntity_o *Entity; // x0
  int32_t status; // w24
  WarEntity_o *v24; // x26
  int32_t v25; // w25
  WebViewManager_o *v26; // x0
  ServantLimitImageMaster_o *v27; // x0
  int32_t ServantLimitCountSealAfter; // w27
  int32_t CardImageLimitCount; // w27
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_40FD0AD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FD0AD = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v19 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v19;
    *(_QWORD *)&v34.fields.fakeValue = v18;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
    if ( !v20
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v20,
                     v21,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          status = userSvtColEntity->fields.status,
          v24 = Entity,
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtColEntity->fields.svtId, 0LL),
          (v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (v27 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v26,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_19:
      sub_B170D4();
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   v27,
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
    ServantFaceIconComponent__Set_30702780(
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
      v33);
    ServantFaceIconComponent__ClearEquip(this, v32);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30709412(
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

  if ( (byte_40FD0B0 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtColEntity);
    byte_40FD0B0 = 1;
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
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
    ServantFaceIconComponent__Set_30702780(
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


void __fastcall ServantFaceIconComponent__Set_30710412(
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

  if ( (byte_40FD0B2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    byte_40FD0B2 = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
    ServantFaceIconComponent__Set_30702780(
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
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(equipTargetInfo->fields.svtId, 0LL);
    ServantFaceIconComponent__ClearEquip_30710676(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_30711528(
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

  if ( (byte_40FD0B3 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, userCommandCodeEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_40FD0B3 = 1;
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
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v24, 0LL);
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
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
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
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
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


void __fastcall ServantFaceIconComponent__Set_30713160(
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

  if ( (byte_40FD0B4 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeEntity);
    byte_40FD0B4 = 1;
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
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_30713364(
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

  if ( (byte_40FD0B5 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeCollectionEntity);
    byte_40FD0B5 = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
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
  UIIconLabel_o *v6; // x0

  if ( (byte_40FD0C7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD0C7 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) && this->fields.info1 && this->fields.info2 )
  {
    v6 = this->fields.iconLabel;
    if ( !v6 )
      sub_B170D4();
    UIIconLabel__SetAlpha(v6, alpha, 0LL);
  }
  return 1;
}