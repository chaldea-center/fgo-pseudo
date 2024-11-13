void __fastcall ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1574F & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFaceIconComponent_TypeInfo, v1, v2);
    byte_4B1574F = 1;
  }
  *ServantFaceIconComponent_TypeInfo->static_fields = (struct ServantFaceIconComponent_StaticFields)0x1000186A1LL;
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
  __int64 v3; // x2
  UnityEngine_Object_o *limitCountSprite; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B15745 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B15745 = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
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
  __int64 v4; // x2
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *transform; // x0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s11
  float v15; // s12
  float v16; // s10
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15748 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v4);
    byte_4B15748 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform )
      goto LABEL_14;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_14;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v14 = v11;
    v15 = v12;
    v16 = v13;
    if ( !this->fields.isAdjustIconLabelPos )
    {
      this->fields.iconLabelInitPos.fields.x = v11;
      this->fields.iconLabelInitPos.fields.y = v12;
      this->fields.iconLabelInitPos.fields.z = v13;
    }
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
    {
LABEL_14:
      sub_1BCAA3C(transform, v9);
    }
    v17.fields.x = v14 + offsetX;
    v17.fields.y = v15 + offsetY;
    v17.fields.z = v16;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v17, 0LL);
    this->fields.isAdjustIconLabelPos = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__AdjustIconLabelScale(
        ServantFaceIconComponent_o *this,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( (byte_4B1574A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B1574A = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( !this->fields.isAdjustIconLabelScale )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform )
        goto LABEL_16;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_16;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      this->fields.iconLabelInitScale = localScale;
      if ( !transform )
        goto LABEL_16;
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
          v12.fields.x = x;
          v12.fields.y = y;
          v12.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v12, 0LL);
          this->fields.isAdjustIconLabelScale = 1;
          return;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(transform, v9);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(typeSprite, method);
  }
  v6.fields.z = 0.0;
  v6.fields.y = -64.0;
  v6.fields.x = v5;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v6, 0LL);
}


void __fastcall ServantFaceIconComponent__Blank(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UISprite_o *frameSprite; // x0

  if ( (byte_4B15723 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20509/*"img_commonbg_02"*/, method, v2);
    byte_4B15723 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_1BCAA3C(0LL, v4);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20509/*"img_commonbg_02"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x21

  if ( (byte_4B1574C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&frameType, *(_QWORD *)&classId);
    byte_4B1574C = 1;
  }
  classSprite = this->fields.classSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&frameType);
  AtlasManager__SetClass(classSprite, classId, frameType, 0LL);
}


void __fastcall ServantFaceIconComponent__Clear(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  UISprite_o *backSprite; // x20
  const MethodInfo *v19; // x1
  UISprite_o *faceSprite; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v27; // x1
  UISprite_o *v28; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20
  UnityEngine_Object_o *faceEffectSprite; // x20

  if ( (byte_4B15722 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B15722 = 1;
  }
  this->fields.info1 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.info1, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.info2 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.info2, 0LL, v11, v12, v13, v14, v15, v16);
  backSprite = this->fields.backSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
  AtlasManager__SetCommon(backSprite, 0LL);
  AtlasManager__SetCommon(this->fields.typeSprite, 0LL);
  faceSprite = this->fields.backSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.faceSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.frameSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  faceSprite = this->fields.typeSprite;
  if ( !faceSprite )
    goto LABEL_53;
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.classSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.costumeIconSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.limitCountSprite;
    if ( !faceSprite )
      goto LABEL_53;
    faceSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceSprite, 0LL);
    if ( !faceSprite )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)faceSprite, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.limitCountIcon;
    if ( !faceSprite )
      goto LABEL_53;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)faceSprite, v19);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v28 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27);
    AtlasManager__SetCommon(v28, 0LL);
    faceSprite = this->fields.raritySprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !faceSprite )
      goto LABEL_53;
    UIIconLabel__Clear((UIIconLabel_o *)faceSprite, 0LL);
  }
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.shiningIcon;
    if ( !faceSprite )
      goto LABEL_53;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)faceSprite, 0LL);
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(faceEffectSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.faceEffectSprite;
    if ( faceSprite )
    {
      UISprite__set_spriteName(faceSprite, 0LL, 0LL);
      goto LABEL_52;
    }
LABEL_53:
    sub_1BCAA3C(faceSprite, v19);
  }
LABEL_52:
  ServantFaceIconComponent__ClearEquip(this, v19);
}


void __fastcall ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *hideEquipSprite; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_4B1573E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1573E = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !noneEquipSprite )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    }
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_27:
      sub_1BCAA3C(noneEquipSprite, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__ClearEquip_38937176(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *equipSprite; // x21
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  char v14; // w20
  __int64 v15; // x1
  UnityEngine_Object_o *hideEquipSprite; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x20
  UnityEngine_Object_o *v25; // x20

  if ( (byte_4B1573F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&baseSvtId, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1573F = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      baseSvtId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL);
          if ( this->fields.noneEquipSprite )
          {
            v14 = (char)Instance;
            Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                                          0LL);
            if ( Instance )
            {
              if ( (v14 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
                if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
                {
                  Instance = (DataManager_o *)this->fields.hideEquipSprite;
                  if ( !Instance )
                    goto LABEL_51;
                  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
                  if ( !Instance )
                    goto LABEL_51;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                Instance = (DataManager_o *)this->fields.equipSprite;
                if ( !Instance )
                  goto LABEL_51;
                UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
                equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
                if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
                {
                  Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
                  if ( !Instance )
                    goto LABEL_51;
                  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
                  if ( !Instance )
                    goto LABEL_51;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
                Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                  return;
                raritySprite = this->fields.raritySprite;
                if ( raritySprite )
                {
                  Instance = (DataManager_o *)this->fields.rarity2Sprite;
                  if ( Instance )
                  {
                    UISprite__set_spriteName((UISprite_o *)Instance, raritySprite->fields.mSpriteName, 0LL);
                    Instance = (DataManager_o *)this->fields.rarity2Sprite;
                    if ( Instance )
                    {
                      ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                        Instance,
                        Instance->klass[2]._1.interopData);
                      return;
                    }
                  }
                }
              }
              else
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                v22 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
                if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
                {
                  Instance = (DataManager_o *)this->fields.hideEquipSprite;
                  if ( !Instance )
                    goto LABEL_51;
                  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
                  if ( !Instance )
                    goto LABEL_51;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                Instance = (DataManager_o *)this->fields.equipSprite;
                if ( !Instance )
                  goto LABEL_51;
                UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
                v24 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
                if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
                {
                  Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
                  if ( !Instance )
                    goto LABEL_51;
                  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
                  if ( !Instance )
                    goto LABEL_51;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
                v25 = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
                if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
                  return;
                Instance = (DataManager_o *)this->fields.rarity2Sprite;
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
LABEL_51:
    sub_1BCAA3C(Instance, v13);
  }
}


void __fastcall ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0LL, 0LL), (faceSprite = this->fields.faceSprite) == 0LL) )
    sub_1BCAA3C(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
}


void __fastcall ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(faceSprite, flag);
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
    sub_1BCAA3C(this, method);
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
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1574D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId, *(_QWORD *)&iconLimit);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1574D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ServantLimitImageMaster__GetServantImageLimitSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           iconLimit,
           0LL);
}


void __fastcall ServantFaceIconComponent__HideEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *hideEquipSprite; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_4B15743 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15743 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !noneEquipSprite )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 1, 0LL);
    }
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !noneEquipSprite )
      goto LABEL_27;
    UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !noneEquipSprite )
        goto LABEL_27;
      noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
      if ( !noneEquipSprite )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
    }
    rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_27:
      sub_1BCAA3C(noneEquipSprite, v5);
    }
  }
}


bool __fastcall ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v6; // x1
  struct UIMeshSprite_o *v7; // x8

  if ( (byte_4B15744 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15744 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL);
  if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
  {
    v7 = this->fields.equipSprite;
    if ( !v7 )
      goto LABEL_13;
    if ( !System_String__IsNullOrEmpty(v7->fields.mSpriteName, 0LL) )
      return 1;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite
      || (noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL)) == 0LL )
    {
LABEL_13:
      sub_1BCAA3C(noneEquipSprite, v6);
    }
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)noneEquipSprite, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall ServantFaceIconComponent__NoMount(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_4B15724 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20535/*"img_frames_nodata"*/, method, v2);
    byte_4B15724 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1BCAA3C(0LL, v4);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20535/*"img_frames_nodata"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_4B15725 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20536/*"img_frames_nodata3"*/, method, v2);
    byte_4B15725 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1BCAA3C(0LL, v4);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20536/*"img_frames_nodata3"*/, 0LL);
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
  const MethodInfo *v16; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B15729 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantData, info1);
    byte_4B15729 = 1;
  }
  if ( servantData )
  {
    v10 = *(_QWORD *)&servantData->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantData);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0LL);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_38928428(
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
  __int64 v2; // x2
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *transform; // x0

  if ( (byte_4B15749 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15749 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( this->fields.isAdjustIconLabelPos )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform
        || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
      {
        sub_1BCAA3C(transform, v5);
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
  __int64 v2; // x2
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v5; // x1
  UIIconLabel_o *transform; // x0
  UnityEngine_Vector2Int_o textLabelInitSize; // 0:x1.8

  if ( (byte_4B1574B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1574B = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        sub_1BCAA3C(transform, v5);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int128 v21; // q1
  __int64 v22; // x1
  int64_t v23; // x25
  int32_t IconLimitCount; // w25
  int32_t v25; // w0
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x26
  __int64 v31; // x27
  ServantLimitImageMaster_o *v32; // x24
  int32_t v33; // w24
  int32_t v34; // w25
  int32_t v35; // w0
  int32_t exceedCount; // w26
  int32_t v37; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  const MethodInfo *v40; // x1
  int32_t FriendIconLimitCount; // w24
  Il2CppObject *MasterData_object; // x0
  __int64 v43; // x1
  __int64 v44; // x26
  __int64 v45; // x27
  ServantLimitImageMaster_o *v46; // x25
  int32_t ServantImageLimitSealAfter; // w24
  int32_t v48; // w25
  int32_t v49; // w0
  __int64 v50; // x21
  __int64 v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // [xsp+38h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B15726 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtEntity, equipIdList);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B15726 = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  v21 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEntity);
  v56 = v57;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v56, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
  if ( v23 != NetworkManager__get_UserId(0LL) )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v45 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v46 = (ServantLimitImageMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
      *(_QWORD *)&v59.fields.currentCryptoKey = v45;
      *(_QWORD *)&v59.fields.fakeValue = v44;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59, 0LL);
      if ( v46 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v46,
                                       (int32_t)Instance,
                                       FriendIconLimitCount,
                                       0LL);
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.svtId, 0LL);
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.limitCount, 0LL);
        ServantFaceIconComponent__Set_38928428(
          this,
          v48,
          v49,
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
          v55);
        goto LABEL_23;
      }
    }
LABEL_30:
    sub_1BCAA3C(Instance, v27);
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
  if ( questRestrictionInfo )
  {
    v25 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userSvtEntity, 0LL);
    if ( v25 >= 0 )
      IconLimitCount = v25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v31 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v32 = (ServantLimitImageMaster_o *)v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
  *(_QWORD *)&v58.fields.currentCryptoKey = v31;
  *(_QWORD *)&v58.fields.fakeValue = v30;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
  if ( !v32 )
    goto LABEL_30;
  v33 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v32, (int32_t)Instance, IconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.svtId, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  v37 = v35;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  ServantFaceIconComponent__Set_38928428(
    this,
    v34,
    v37,
    v33,
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
    v55);
LABEL_23:
  if ( equipIdList && *(_QWORD *)&equipIdList->max_length )
  {
    v51 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    *(_QWORD *)&v60.fields.currentCryptoKey = v51;
    *(_QWORD *)&v60.fields.fakeValue = v50;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v60, 0LL);
    if ( !equipIdList->max_length )
      sub_1BCAA44(v52, v53);
    ServantFaceIconComponent__SetEquip_38930668(this, v52, equipIdList->m_Items[0], v54);
  }
  else
  {
    ServantFaceIconComponent__ClearEquip(this, v40);
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
  __int64 v12; // x2
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v14; // x0
  __int64 v15; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v17; // x22

  if ( (byte_4B15738 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, isCommandCode, isServantEquip);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B15738 = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  v14 = (UISprite_o *)UnityEngine_Object__op_Equality(classSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) == 0 )
  {
    if ( isCommandCode
      || (collectionStatus = this->fields.collectionStatus, (collectionStatus | 4) == 4)
      || (collectionStatus & 0xFFFFFFFE) == 6 )
    {
      v14 = this->fields.classSprite;
      if ( v14 )
      {
LABEL_9:
        UISprite__set_spriteName(v14, 0LL, 0LL);
        return;
      }
LABEL_17:
      sub_1BCAA3C(v14, v15);
    }
    v17 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v17 )
      {
        v14 = v17;
        goto LABEL_9;
      }
      goto LABEL_17;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    AtlasManager__SetClass(v17, classId, frameType, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v28; // x1
  DataManager_o *v29; // x23
  __int64 v30; // x1
  Il2CppObject *Component_object; // x26
  const MethodInfo *v32; // x5
  int32_t saveNameList; // w23
  __int64 v34; // x1
  UnityEngine_Object_o *equipSprite; // x24
  __int64 v36; // x1
  UnityEngine_Object_o *hideEquipSprite; // x24
  __int64 v38; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x5
  const MethodInfo *v44; // x2
  __int64 v45; // x1
  UnityEngine_Object_o *shiningIcon; // x23
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct IconLabelInfo_o **p_info1; // x0
  IconLabelInfo_o *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct IconLabelInfo_o **p_info2; // x0
  IconLabelInfo_o *v62; // x1
  const MethodInfo *v63; // x2

  if ( (byte_4B15737 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId, info1);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&StringLiteral_20535/*"img_frames_nodata"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20338/*"icon_common_new01"*/, v25, v26);
    byte_4B15737 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_60;
  v29 = Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_60;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0LL);
  }
  if ( !v29 )
LABEL_60:
    sub_1BCAA3C(Instance, v28);
  saveNameList = (int32_t)v29->fields.saveNameList;
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus == 2 || collectionStatus == 1 )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
    AtlasManager__SetCommandCodeBaseIcon(backSprite, saveNameList, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.faceSprite, commandCodeId, 0LL);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  else if ( !collectionStatus )
  {
    Instance = (DataManager_o *)this->fields.backSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20535/*"img_frames_nodata"*/, 0LL);
    Instance = (DataManager_o *)this->fields.faceSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_60;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_60;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_60;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
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
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_60;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
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
  }
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, v32);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v41);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v42);
  ServantFaceIconComponent__SetRaritySprite(this, 1, saveNameList, 0, 0, v43);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 1, v44);
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    if ( isNew && this->fields.collectionStatus != 6 )
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Set_38945564(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_20338/*"icon_common_new01"*/,
          0LL);
        goto LABEL_51;
      }
    }
    else
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
        goto LABEL_51;
      }
    }
    goto LABEL_60;
  }
LABEL_51:
  ServantFaceIconComponent__ClearEquip(this, v28);
  if ( info1 && info1->fields.iconKind )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v54 = info1;
  }
  else
  {
    this->fields.info1 = 0LL;
    p_info1 = &this->fields.info1;
    v54 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_info1, (int64_t)v54, v47, v48, v49, v50, v51, v52);
  if ( info2 && info2->fields.iconKind )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v62 = info2;
  }
  else
  {
    this->fields.info2 = 0LL;
    p_info2 = &this->fields.info2;
    v62 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_info2, (int64_t)v62, v55, v56, v57, v58, v59, v60);
  ServantFaceIconComponent__SetIconLabel(this, 0, v63);
}


void __fastcall ServantFaceIconComponent__SetCostumeIcon(
        ServantFaceIconComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *costumeIconSprite; // x21
  __int64 v12; // x1
  UISprite_o *transform; // x0
  int32_t v14; // w20
  int32_t iconId; // t1
  UISprite_o *v16; // x21
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1574E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, svtCostumeEntity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_23963/*"svt_costume_icon_"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B1574E = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtCostumeEntity);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v14 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v16 = this->fields.costumeIconSprite;
        v17 = System_Int32__ToString(v14, 0LL);
        v19 = System_String__Concat_62401220((System_String_o *)StringLiteral_23963/*"svt_costume_icon_"*/, v17, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
        if ( AtlasManager__SetEventSprite(v16, v19, 0LL) )
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
                v20.fields.z = 0.0;
                v20.fields.x = -47.0;
                v20.fields.y = -42.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0LL);
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
LABEL_21:
          sub_1BCAA3C(transform, v12);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  __int64 v14; // x1
  ServantFaceIconComponent_c *v15; // x8
  int32_t limitCount; // w22
  int32_t v17; // w23
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v8 = this;
  if ( (byte_4B1572E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo, info1);
    this = (ServantFaceIconComponent_o *)sub_1BCA7E0(&ServantFaceIconComponent_TypeInfo, v9, v10);
    byte_4B1572E = 1;
  }
  if ( !equipTargetInfo )
    sub_1BCAA3C(this, equipTargetInfo);
  v12 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  v15 = ServantFaceIconComponent_TypeInfo;
  limitCount = equipTargetInfo->fields.limitCount;
  v17 = v13;
  if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo, v14);
    v15 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_38928428(
    v8,
    v17,
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
    v19);
  ServantFaceIconComponent__ClearEquip(v8, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetDispClassSprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classSprite; // x0

  classSprite = (UnityEngine_Behaviour_o *)this->fields.classSprite;
  if ( !classSprite )
    sub_1BCAA3C(0LL, flag);
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
    sub_1BCAA3C(limitCountIcon, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountIcon, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetDispRaritySprite(
        ServantFaceIconComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *raritySprite; // x0

  raritySprite = (UnityEngine_Behaviour_o *)this->fields.raritySprite;
  if ( !raritySprite )
    sub_1BCAA3C(0LL, flag);
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

  if ( (byte_4B1572B & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity, method);
    byte_4B1572B = 1;
  }
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    *(_QWORD *)&v12.fields.currentCryptoKey = v6;
    *(_QWORD *)&v12.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL);
    ServantFaceIconComponent__SetEquip_38933152(this, 0, v9, v10, v11);
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
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  const MethodInfo *v8; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B1573D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, info, method);
    byte_4B1573D = 1;
  }
  ServantFaceIconComponent__NoMount(this, (const MethodInfo *)info);
  if ( info )
  {
    v7 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL) )
      ServantFaceIconComponent__SetEquip_38936708(this, 0, info, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_38930668(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *equipSprite; // x22
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v22; // w21
  int32_t v23; // w0
  const MethodInfo *v24; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B15740 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&baseSvtId, userSvtId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    byte_4B15740 = 1;
  }
  entity = 0LL;
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    if ( userSvtId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_18;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        userSvtId,
                                        (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( entity )
        {
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v26.fields.currentCryptoKey = klass;
          *(_QWORD *)&v26.fields.fakeValue = monitor;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
          if ( entity )
          {
            v22 = (int)Master_object;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                    0LL);
            ServantFaceIconComponent__SetEquip_38933152(this, baseSvtId, v22, v23, v24);
            return;
          }
        }
LABEL_18:
        sub_1BCAA3C(Master_object, v19);
      }
    }
    ServantFaceIconComponent__ClearEquip_38937176(this, baseSvtId, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_38933152(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *equipSprite; // x23
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *hideEquipSprite; // x22
  UISprite_o *v23; // x22
  __int64 v24; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x22
  __int64 v26; // x1
  UnityEngine_Component_o *v27; // x21
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8

  if ( (byte_4B15742 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&baseSvtId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B15742 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&baseSvtId);
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
          if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
          {
            noneEquipSprite = (UnityEngine_Component_o *)this->fields.hideEquipSprite;
            if ( !noneEquipSprite )
              goto LABEL_36;
            noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
            if ( !noneEquipSprite )
              goto LABEL_36;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneEquipSprite, 0, 0LL);
          }
          v23 = (UISprite_o *)this->fields.equipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
          AtlasManager__SetEquipFace(v23, svtId, 0LL);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
          if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
          {
            noneEquipSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !noneEquipSprite )
              goto LABEL_36;
            noneEquipSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)noneEquipSprite,
                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !noneEquipSprite )
              goto LABEL_36;
            noneEquipSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)noneEquipSprite,
                                                           svtId,
                                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !this->fields.equipLimitCountSprite )
              goto LABEL_36;
            v27 = noneEquipSprite;
            noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                           0LL);
            if ( !v27 || !noneEquipSprite )
              goto LABEL_36;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)noneEquipSprite,
              v27[3].fields.m_CachedPtr > 0 && v27[3].fields.m_CachedPtr <= limitCount,
              0LL);
          }
          rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
          noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL);
          if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
          {
            raritySprite = this->fields.raritySprite;
            if ( !raritySprite )
              goto LABEL_36;
            noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
            if ( !noneEquipSprite )
              goto LABEL_36;
            UISprite__set_spriteName((UISprite_o *)noneEquipSprite, raritySprite->fields.mSpriteName, 0LL);
            noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
            if ( !noneEquipSprite )
              goto LABEL_36;
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
LABEL_36:
      sub_1BCAA3C(noneEquipSprite, v18);
    }
    ServantFaceIconComponent__ClearEquip_38937176(this, baseSvtId, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetEquip_38936708(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        EquipTargetInfo_o *equipTarget,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  const MethodInfo *v13; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B15741 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&baseSvtId, equipTarget);
    byte_4B15741 = 1;
  }
  if ( !equipTarget )
    goto LABEL_10;
  v8 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&baseSvtId);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL) >= 1 )
  {
    v11 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    *(_QWORD *)&v15.fields.currentCryptoKey = v11;
    *(_QWORD *)&v15.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
    ServantFaceIconComponent__SetEquip_38933152(this, baseSvtId, v12, equipTarget->fields.limitCount, v13);
  }
  else
  {
LABEL_10:
    ServantFaceIconComponent__ClearEquip_38937176(this, baseSvtId, (const MethodInfo *)equipTarget);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  int32_t FrameType; // w0
  __int64 v20; // x1
  UISprite_o *backSprite; // x23
  int32_t v22; // w22
  __int64 v23; // x1
  UnityEngine_Object_o *equipSprite; // x21
  __int64 v25; // x1
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v32; // x1
  UISprite_o *v33; // x21
  const MethodInfo *v34; // x2

  if ( (byte_4B15736 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&iconId, *(_QWORD *)&rarity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Rarity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_21372/*"listframes_shadow"*/, v15, v16);
    byte_4B15736 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_51;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, 0LL);
  backSprite = this->fields.backSprite;
  v22 = FrameType;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
  AtlasManager__SetFaceBaseIcon(backSprite, v22, 0, 0LL);
  AtlasManager__SetFaceImage(this->fields.faceSprite, iconId, 0, 0LL);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_51;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21372/*"listframes_shadow"*/, 0LL);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v22, 0, 0LL);
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_51;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = (DataManager_o *)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_51;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_51;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_51;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.classSprite;
    if ( !Instance )
      goto LABEL_51;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.limitCountSprite;
    if ( !Instance )
      goto LABEL_51;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.limitCountIcon;
    if ( !Instance )
      goto LABEL_51;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)Instance, v18);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v33 = this->fields.raritySprite;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v32);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0LL);
    if ( v33 )
    {
      UISprite__set_spriteName(v33, (System_String_o *)Instance, 0LL);
      Instance = (DataManager_o *)this->fields.raritySprite;
      if ( Instance )
      {
        ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
          Instance,
          Instance->klass[2]._1.interopData);
        goto LABEL_50;
      }
    }
LABEL_51:
    sub_1BCAA3C(Instance, v18);
  }
LABEL_50:
  ServantFaceIconComponent__ClearEquip(this, v32);
  ServantFaceIconComponent__SetIconLabel(this, 0, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetFaceEffectSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *faceEffectSprite; // x21
  __int64 v12; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v14; // x19
  __int64 *v15; // x8
  UISprite_o *v16; // x0

  if ( (byte_4B1573C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, isCommandCode, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_21352/*"linklost_svt_material"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_21350/*"linkbad_svt_material"*/, v9, v10);
    byte_4B1573C = 1;
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  if ( !UnityEngine_Object__op_Equality(faceEffectSprite, 0LL, 0LL) )
  {
    if ( !isCommandCode )
    {
      collectionStatus = this->fields.collectionStatus;
      if ( collectionStatus == 9 )
      {
        v14 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
        v15 = &StringLiteral_21350/*"linkbad_svt_material"*/;
        goto LABEL_17;
      }
      if ( collectionStatus == 8 )
      {
        v14 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
        v15 = &StringLiteral_21352/*"linklost_svt_material"*/;
LABEL_17:
        AtlasManager__SetEventSprite(v14, (System_String_o *)*v15, 0LL);
        return;
      }
    }
    v16 = this->fields.faceEffectSprite;
    if ( !v16 )
      sub_1BCAA3C(0LL, v12);
    UISprite__set_spriteName(v16, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__SetIconLabel(
        ServantFaceIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  char v3; // w20
  UnityEngine_Object_o *iconLabel; // x21
  IconLabelInfo_o *info1; // x1
  int32_t collectionStatus; // w8
  UIIconLabel_o *v8; // x0
  __int64 v9; // x9

  v3 = count;
  if ( (byte_4B15746 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count, method);
    byte_4B15746 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
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
      sub_1BCAA3C(v8, info1);
    }
    if ( this->fields.info2 )
    {
      v8 = this->fields.iconLabel;
      v9 = 184LL;
      if ( (v3 & 1) == 0 )
        v9 = 176LL;
      if ( !v8 )
        goto LABEL_20;
      info1 = *(IconLabelInfo_o **)((char *)&this->klass + v9);
    }
    else
    {
      v8 = this->fields.iconLabel;
      if ( !v8 )
        goto LABEL_20;
    }
    if ( collectionStatus == 4 )
      UIIconLabel__Set_38974416(v8, info1, 1, 0LL);
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
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  LimitCountIconComponent_o *v12; // x0
  int32_t collectionStatus; // w8

  if ( (byte_4B1573A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isCommandCode, *(_QWORD *)&limitMax);
    byte_4B1573A = 1;
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  if ( !UnityEngine_Object__op_Equality(limitCountIcon, 0LL, 0LL) )
  {
    if ( isCommandCode )
    {
      v12 = this->fields.limitCountIcon;
      if ( !v12 )
LABEL_15:
        sub_1BCAA3C(v12, v10);
      goto LABEL_11;
    }
    collectionStatus = this->fields.collectionStatus;
    v12 = this->fields.limitCountIcon;
    if ( (unsigned int)(collectionStatus - 4) < 6 || !collectionStatus )
    {
      if ( !v12 )
        goto LABEL_15;
LABEL_11:
      LimitCountIconComponent__Clear(v12, v10);
      return;
    }
    if ( !v12 )
      goto LABEL_15;
    LimitCountIconComponent__Set(v12, limitCount, limitMax, v11);
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

  if ( (byte_4B15739 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isCommandCode, *(_QWORD *)&limitMax);
    byte_4B15739 = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  if ( !UnityEngine_Object__op_Equality(limitCountSprite, 0LL, 0LL) )
  {
    if ( isCommandCode )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.limitCountSprite;
      if ( !gameObject )
        goto LABEL_18;
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
LABEL_18:
          sub_1BCAA3C(gameObject, v10);
        }
        v13 = limitMax > 0 && limitCount >= limitMax;
        goto LABEL_13;
      }
      if ( !gameObject )
        goto LABEL_18;
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    v13 = 0;
LABEL_13:
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  __int64 v23; // x24
  __int64 v24; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x23
  int32_t v26; // w23
  int32_t ServantLimitCountSealAfter; // w24
  __int64 v28; // x1
  int32_t v29; // w25
  int32_t CardImageLimitCount; // w0
  const MethodInfo *v31; // x5
  int32_t v32; // w24
  int32_t v33; // w25
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B1572D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity, info1);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1572D = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v24 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    *(_QWORD *)&v38.fields.currentCryptoKey = v24;
    *(_QWORD *)&v38.fields.fakeValue = v23;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v38, 0LL);
    if ( !v25
      || (DataMasterBase_object__object__int___GetEntity(
            v25,
            (int32_t)Instance,
            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtColEntity->fields.svtId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_21:
      sub_1BCAA3C(Instance, v20);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v26,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtColEntity->fields.svtId, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v28);
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v29, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( userSvtColEntity->fields.status )
    {
      v32 = CardImageLimitCount;
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtColEntity, 0LL) )
      {
        v33 = 8;
      }
      else if ( UserServantCollectionEntity__IsLinkBadStateServant(userSvtColEntity, 0LL) )
      {
        v33 = 9;
      }
      else
      {
        v33 = 7;
      }
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
      ServantFaceIconComponent__Set_38928428(
        this,
        v26,
        maxLimitCount,
        v32,
        0,
        info1,
        info2,
        v33,
        IsNew,
        0,
        0LL,
        0,
        0,
        0,
        0,
        v37);
      ServantFaceIconComponent__ClearEquip(this, v36);
    }
    else
    {
      ServantFaceIconComponent__Set_38933812(this, userSvtColEntity, info1, info2, 0, v31);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *raritySprite; // x24
  System_String_o *Icon; // x0
  __int64 v23; // x1
  int32_t collectionStatus; // w8
  struct UISprite_o *v25; // x21
  System_String_o *v26; // x1
  __int64 v27; // x1
  System_String_o *Icon_38416824; // x23
  int32_t RarityIcon; // w22
  bool v30; // w21
  UISprite_o *v31; // x20

  if ( (byte_4B1573B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, isCommandCode, *(_QWORD *)&rarity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Rarity_TypeInfo, v19, v20);
    byte_4B1573B = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCode);
  Icon = (System_String_o *)UnityEngine_Object__op_Equality(raritySprite, 0LL, 0LL);
  if ( ((unsigned __int8)Icon & 1) == 0 )
  {
    collectionStatus = this->fields.collectionStatus;
    if ( isCommandCode )
    {
      v25 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v23);
        Icon = Rarity__getIcon(rarity, 0LL);
        if ( !v25 )
          goto LABEL_37;
        v26 = Icon;
        Icon = (System_String_o *)v25;
        goto LABEL_12;
      }
      if ( !v25 )
        goto LABEL_37;
      Icon = (System_String_o *)this->fields.raritySprite;
    }
    else
    {
      if ( (collectionStatus | 4) != 4 && (collectionStatus & 0xFFFFFFFE) != 6 )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v23);
        Icon_38416824 = Rarity__getIcon_38416824(rarity, exceedCount, lv, 0LL);
        if ( exceedCount < 1 )
        {
          v30 = 1;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
          if ( !Icon )
            goto LABEL_37;
          RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)Icon, rarity, exceedCount, 0, 0LL);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          if ( !Icon )
            goto LABEL_37;
          v30 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Icon, rarity, lv, RarityIcon, 0LL) < 3;
        }
        v31 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27);
        if ( !v30 )
        {
          AtlasManager__SetEventSprite(v31, Icon_38416824, 0LL);
LABEL_13:
          Icon = (System_String_o *)this->fields.raritySprite;
          if ( Icon )
          {
            ((void (__fastcall *)(System_String_o *, void *))Icon->klass[1]._1.typeMetadataHandle)(
              Icon,
              Icon->klass[1]._1.interopData);
            return;
          }
LABEL_37:
          sub_1BCAA3C(Icon, v23);
        }
        AtlasManager__SetCommon(v31, 0LL);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_37;
        v26 = Icon_38416824;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)Icon, v26, 0LL);
        goto LABEL_13;
      }
      Icon = (System_String_o *)this->fields.raritySprite;
      if ( !Icon )
        goto LABEL_37;
    }
    UISprite__set_spriteName((UISprite_o *)Icon, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__Set_38928428(
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v52; // x1
  ServantEntity_o *v53; // x24
  __int64 v54; // x1
  Il2CppObject *Component_object; // x20
  int32_t v56; // w22
  int32_t classId; // w25
  int32_t v58; // w3
  __int64 v59; // x1
  int32_t FrameType_40396588; // w20
  int32_t FrameType; // w27
  const MethodInfo *v62; // x2
  __int64 v63; // x1
  UISprite_o *v64; // x29
  const MethodInfo *v65; // x2
  bool IsServantEquip; // w0
  const MethodInfo *v67; // x5
  const MethodInfo *v68; // x4
  const MethodInfo *v69; // x4
  const MethodInfo *v70; // x5
  const MethodInfo *v71; // x2
  __int64 v72; // x1
  UnityEngine_Object_o *shiningIcon; // x20
  const MethodInfo *v74; // x3
  __int64 *v75; // x8
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct IconLabelInfo_o **p_info1; // x0
  IconLabelInfo_o *v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct IconLabelInfo_o **p_info2; // x0
  int64_t v91; // x1
  const MethodInfo *v92; // x2
  UISprite_o *backSprite; // x20
  UISprite_o *faceSprite; // x20
  UISprite_o *v95; // x20
  UISprite_o *v96; // x20
  __int64 v97; // x1
  UISprite_o *v98; // x20
  ServantFaceIconComponent_c *v99; // x0
  __int64 v100; // x1
  UnityEngine_Object_o *v101; // x20
  __int64 v102; // x1
  UnityEngine_Object_o *v103; // x20
  UISprite_o *v104; // x20
  __int64 v105; // x1
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v107; // x1
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  IconLabelInfo_o *v110; // [xsp+0h] [xbp-70h]
  int32_t rarity; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B15735 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v29, v30);
    sub_1BCA7E0(&DataManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v33, v34);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v35, v36);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v37, v38);
    sub_1BCA7E0(&ServantFaceIconComponent_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&StringLiteral_20535/*"img_frames_nodata"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_20338/*"icon_common_new01"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_21372/*"listframes_shadow"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_20363/*"icon_eventjoin_01"*/, v49, v50);
    byte_4B15735 = 1;
  }
  rarity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_115;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_115;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_115;
  v53 = (ServantEntity_o *)Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_115;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0LL);
  }
  if ( (imageLimitCount & 0x80000000) != 0 )
  {
    if ( svtId < 1 )
    {
      imageLimitCount = 0;
    }
    else
    {
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v52);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
      imageLimitCount = (int)Instance;
      if ( isCheckSeal )
      {
        Instance = (DataManager_o *)ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                      (ServantFaceIconComponent_o *)Instance,
                                      svtId,
                                      (int32_t)Instance,
                                      v74);
        imageLimitCount = (int)Instance;
      }
    }
  }
  v56 = imageSvtId ? imageSvtId : svtId;
  v110 = info2;
  if ( !v53 )
    goto LABEL_115;
  classId = v53->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_115;
  if ( frameLimitCount >= 1 )
    v58 = frameLimitCount;
  else
    v58 = limitCount;
  FrameType_40396588 = ServantExceedMaster__GetFrameType_40396588(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         v58,
                         exceedCount,
                         0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Instance )
LABEL_115:
    sub_1BCAA3C(Instance, v52);
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                rarity,
                lv,
                FrameType_40396588,
                0LL);
  ServantFaceIconComponent__SetCostumeIcon(this, 0LL, v62);
  this->fields.collectionStatus = collectionStatus;
  switch ( collectionStatus )
  {
    case 0:
      backSprite = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63);
      AtlasManager__SetCommon(backSprite, 0LL);
      Instance = (DataManager_o *)this->fields.backSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20535/*"img_frames_nodata"*/, 0LL);
      Instance = (DataManager_o *)AtlasManager__IsUseFaceBattle(0LL);
      faceSprite = this->fields.faceSprite;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v52);
        AtlasManager__SetFaceImage(faceSprite, 0, 0, 0LL);
      }
      else
      {
        if ( !faceSprite )
          goto LABEL_115;
        UISprite__set_spriteName(this->fields.faceSprite, 0LL, 0LL);
      }
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v105);
      if ( !UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL) )
        goto LABEL_31;
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_115;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v107);
      if ( !UnityEngine_Object__op_Inequality(hideEquipSprite, 0LL, 0LL) )
        goto LABEL_107;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_115;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_107:
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
LABEL_109:
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
      if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
        goto LABEL_31;
      Instance = (DataManager_o *)this->fields.equipLimitCountSprite;
      if ( !Instance )
        goto LABEL_115;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_31:
      IsServantEquip = ServantEntity__get_IsServantEquip(v53, 0LL);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, classId, FrameType, v67);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v53->fields.limitMax, limitCount, v68);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v53->fields.limitMax, limitCount, v69);
      ServantFaceIconComponent__SetRaritySprite(this, 0, rarity, exceedCount, lv, v70);
      ServantFaceIconComponent__SetFaceEffectSprite(this, 0, v71);
      shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
      if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
      {
        if ( isTemporarySubscription && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
        {
          Instance = (DataManager_o *)this->fields.shiningIcon;
          if ( !Instance )
            goto LABEL_115;
          v75 = &StringLiteral_20363/*"icon_eventjoin_01"*/;
        }
        else
        {
          if ( !isNew || (this->fields.collectionStatus & 0xFFFFFFFE) == 6 )
          {
            Instance = (DataManager_o *)this->fields.shiningIcon;
            if ( Instance )
            {
              ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
              goto LABEL_51;
            }
            goto LABEL_115;
          }
          Instance = (DataManager_o *)this->fields.shiningIcon;
          if ( !Instance )
            goto LABEL_115;
          v75 = &StringLiteral_20338/*"icon_common_new01"*/;
        }
        ShiningIconComponent__Set_38945564((ShiningIconComponent_o *)Instance, (System_String_o *)*v75, 0LL);
      }
LABEL_51:
      ServantFaceIconComponent__ClearEquip(this, v52);
      if ( info1 && info1->fields.iconKind )
      {
        this->fields.info1 = info1;
        p_info1 = &this->fields.info1;
        v83 = info1;
      }
      else
      {
        this->fields.info1 = 0LL;
        p_info1 = &this->fields.info1;
        v83 = 0LL;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)p_info1, (int64_t)v83, v76, v77, v78, v79, v80, v81);
      if ( v110 && v110->fields.iconKind )
      {
        this->fields.info2 = v110;
        p_info2 = &this->fields.info2;
        v91 = (int64_t)v110;
      }
      else
      {
        this->fields.info2 = 0LL;
        p_info2 = &this->fields.info2;
        v91 = 0LL;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)p_info2, v91, v84, v85, v86, v87, v88, v89);
      ServantFaceIconComponent__SetIconLabel(this, 0, v92);
      return;
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
      v64 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63);
      AtlasManager__SetFaceBaseIcon(v64, FrameType, classId, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v56, imageLimitCount, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v65);
      goto LABEL_29;
    case 4:
      v95 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63);
      AtlasManager__SetFaceBaseIcon(v95, FrameType, classId, 0LL);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0LL);
LABEL_29:
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21372/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v53->fields.type, FrameType, classId, 0LL);
      goto LABEL_31;
    case 6:
      v96 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63);
      AtlasManager__SetFaceBaseIcon(v96, FrameType, classId, 0LL);
      v98 = this->fields.faceSprite;
      v99 = ServantFaceIconComponent_TypeInfo;
      if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo, v97);
        v99 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v98,
        v99->static_fields->SECRET_SERVANT_ID,
        v99->static_fields->SECRET_LIMIT_COUNT,
        0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21372/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v53->fields.type, FrameType, classId, 0LL);
      v101 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100);
      if ( UnityEngine_Object__op_Equality(v101, 0LL, 0LL) )
        goto LABEL_31;
      Instance = (DataManager_o *)this->fields.equipSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.noneEquipSprite;
      if ( !Instance )
        goto LABEL_115;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v103 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
      if ( !UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
        goto LABEL_109;
      Instance = (DataManager_o *)this->fields.hideEquipSprite;
      if ( !Instance )
        goto LABEL_115;
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      goto LABEL_109;
    case 7:
      v104 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63);
      AtlasManager__SetDataLostFaceBaseIcon(v104, 0LL);
      AtlasManager__SetDataLostFace(this->fields.faceSprite, 0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      Instance = (DataManager_o *)this->fields.typeSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
      goto LABEL_31;
    default:
      goto LABEL_31;
  }
}


void __fastcall ServantFaceIconComponent__Set_38931044(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v16; // x4

  if ( (byte_4B15727 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, info1);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15727 = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v14);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_38931252(this, (UserServantEntity_o *)Entity, info1, info2, v16);
  }
}


void __fastcall ServantFaceIconComponent__Set_38931252(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w0
  __int64 v16; // x1
  __int128 v17; // q0
  int32_t v18; // w23
  __int64 v19; // x1
  int64_t v20; // x24
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v22; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v24; // x1
  __int64 v25; // x25
  __int64 v26; // x26
  int32_t v27; // w24
  int32_t v28; // w0
  int32_t exceedCount; // w25
  int32_t v30; // w26
  bool IsNew; // w27
  bool IsEventJoin; // w0
  const MethodInfo *v33; // x1
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v35; // x3
  int32_t v36; // w0
  __int64 v37; // x1
  __int64 v38; // x25
  __int64 v39; // x26
  int32_t v40; // w24
  int32_t v41; // w0
  const MethodInfo *v42; // [xsp+38h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4B15728 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, userSvtEntity, info1);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    byte_4B15728 = 1;
  }
  if ( userSvtEntity )
  {
    v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    *(_QWORD *)&v45.fields.currentCryptoKey = v14;
    *(_QWORD *)&v45.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
    v17 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v18 = v15;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    v43 = v44;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v43, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    if ( v20 == NetworkManager__get_UserId(0LL) )
    {
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v18,
                                  (int32_t)IconLimitCount,
                                  v22);
      v26 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v25 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v27 = IconLimitCountSealAfter;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
      *(_QWORD *)&v46.fields.currentCryptoKey = v26;
      *(_QWORD *)&v46.fields.fakeValue = v25;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v30 = v28;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_38928428(
        this,
        v18,
        v30,
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
              v18,
              (int32_t)FriendIconLimitCount,
              v35);
      v39 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v38 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v40 = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
      *(_QWORD *)&v47.fields.currentCryptoKey = v39;
      *(_QWORD *)&v47.fields.fakeValue = v38;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v47, 0LL);
      ServantFaceIconComponent__Set_38928428(
        this,
        v18,
        v41,
        v40,
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
    ServantFaceIconComponent__ClearEquip(this, v33);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_38932288(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x25
  int32_t v17; // w0
  __int64 v18; // x1
  __int128 v19; // q0
  int32_t v20; // w23
  __int64 v21; // x1
  int64_t v22; // x25
  ServantFaceIconComponent_o *IconLimitCount; // x0
  const MethodInfo *v24; // x3
  int32_t IconLimitCountSealAfter; // w0
  __int64 v26; // x1
  __int64 v27; // x26
  __int64 v28; // x27
  int32_t v29; // w25
  int32_t v30; // w0
  int32_t exceedCount; // w26
  int32_t v32; // w27
  bool IsNew; // w28
  bool IsEventJoin; // w0
  __int64 v35; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  ServantFaceIconComponent_o *FriendIconLimitCount; // x0
  const MethodInfo *v39; // x3
  int32_t v40; // w0
  __int64 v41; // x1
  __int64 v42; // x26
  __int64 v43; // x27
  int32_t v44; // w25
  int32_t v45; // w0
  __int64 v46; // x8
  const MethodInfo *v47; // [xsp+38h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B1572A & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, userSvtEntity, equipIdList);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    byte_4B1572A = 1;
  }
  if ( userSvtEntity )
  {
    v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtEntity);
    *(_QWORD *)&v50.fields.currentCryptoKey = v16;
    *(_QWORD *)&v50.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
    v19 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v20 = v17;
    *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v49.fields.fakeValue = v19;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    v48 = v49;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v48, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
    if ( v22 == NetworkManager__get_UserId(0LL) )
    {
      IconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
      IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                  IconLimitCount,
                                  v20,
                                  (int32_t)IconLimitCount,
                                  v24);
      v28 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v27 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v29 = IconLimitCountSealAfter;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
      *(_QWORD *)&v51.fields.currentCryptoKey = v28;
      *(_QWORD *)&v51.fields.fakeValue = v27;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v32 = v30;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_38928428(
        this,
        v20,
        v32,
        v29,
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
        v47);
    }
    else
    {
      FriendIconLimitCount = (ServantFaceIconComponent_o *)UserServantEntity__getFriendIconLimitCount(
                                                             userSvtEntity,
                                                             0,
                                                             0LL);
      v40 = ServantFaceIconComponent__GetIconLimitCountSealAfter(
              FriendIconLimitCount,
              v20,
              (int32_t)FriendIconLimitCount,
              v39);
      v43 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v42 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      v44 = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
      *(_QWORD *)&v52.fields.currentCryptoKey = v43;
      *(_QWORD *)&v52.fields.fakeValue = v42;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
      ServantFaceIconComponent__Set_38928428(
        this,
        v20,
        v45,
        v44,
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
        v47);
    }
    if ( equipIdList && (v46 = *(_QWORD *)&equipIdList->max_length) != 0 )
    {
      if ( !(_DWORD)v46 )
        sub_1BCAA44(v35, v36);
      ServantFaceIconComponent__SetEquip_38930668(this, v20, equipIdList->m_Items[0], v37);
    }
    else
    {
      ServantFaceIconComponent__ClearEquip(this, v36);
    }
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_38933812(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  __int64 v25; // x25
  __int64 v26; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x24
  Il2CppObject *Entity; // x0
  int32_t status; // w24
  ServantEntity_o *v30; // x26
  int32_t v31; // w25
  __int64 v32; // x1
  int32_t ServantLimitCountSealAfter; // w27
  int32_t CardImageLimitCount; // w27
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4B1572C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtColEntity, info1);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B1572C = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v26 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    *(_QWORD *)&v39.fields.currentCryptoKey = v26;
    *(_QWORD *)&v39.fields.fakeValue = v25;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v39, 0LL);
    if ( !v27
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     v27,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          status = userSvtColEntity->fields.status,
          v30 = (ServantEntity_o *)Entity,
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtColEntity->fields.svtId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_17:
      sub_1BCAA3C(Instance, v22);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v31,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v32);
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v31, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( v30 )
    {
      if ( !((status == 0) | !ServantEntity__get_IsEnemyCollectionDetail(v30, 0LL)) )
        status = 3;
    }
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
    ServantFaceIconComponent__Set_38928428(
      this,
      v31,
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
      v38);
    ServantFaceIconComponent__ClearEquip(this, v37);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_38935328(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        ServantCostumeEntity_o *svtCostumeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isSecret,
        const MethodInfo *method)
{
  int32_t status; // w27
  __int64 v14; // x1
  __int64 v15; // x25
  __int64 v16; // x26
  int32_t v17; // w24
  int32_t v18; // w0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1572F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvtColEntity, svtCostumeEntity);
    byte_4B1572F = 1;
  }
  if ( userSvtColEntity && svtCostumeEntity )
  {
    status = userSvtColEntity->fields.status;
    if ( ServantCostumeEntity__checkFlag(svtCostumeEntity, 16, 0LL)
      && !UserServantCollectionEntity__IsCostumeGet(userSvtColEntity, svtCostumeEntity->fields.id, 0LL) )
    {
      status = 0;
    }
    v16 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    if ( isSecret )
      v17 = 6;
    else
      v17 = status;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v21.fields.currentCryptoKey = v16;
    *(_QWORD *)&v21.fields.fakeValue = v15;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
    ServantFaceIconComponent__Set_38928428(
      this,
      v18,
      userSvtColEntity->fields.maxLimitCount,
      svtCostumeEntity->fields.id,
      0,
      info1,
      info2,
      v17,
      0,
      0,
      svtCostumeEntity,
      0,
      0,
      0,
      0,
      v20);
    ServantFaceIconComponent__ClearEquip(this, v19);
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)userSvtColEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_38935648(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t IconLimitCount; // w24
  __int64 v16; // x1
  __int64 v17; // x26
  __int64 v18; // x27
  ServantFaceIconComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int32_t v22; // w26
  __int64 v23; // x27
  __int64 v24; // x28
  const MethodInfo *v25; // x1
  __int64 v26; // x27
  __int64 v27; // x28
  int32_t v28; // w0
  __int64 v29; // x1
  int32_t limitCount; // w28
  int32_t exceedCount; // w27
  int32_t v32; // w29
  int64_t userId; // x25
  bool IsNew; // w0
  const MethodInfo *v35; // x1
  __int64 v36; // x21
  __int64 v37; // x22
  int32_t v38; // w0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // [xsp+38h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B15730 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, servantLeaderInfo, info1);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v13, v14);
    byte_4B15730 = 1;
  }
  if ( servantLeaderInfo )
  {
    IconLimitCount = ServantLeaderInfo__getIconLimitCount(servantLeaderInfo, 0LL);
    if ( !ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v18 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
      *(_QWORD *)&v41.fields.currentCryptoKey = v18;
      *(_QWORD *)&v41.fields.fakeValue = v17;
      v19 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v41, 0LL);
      IconLimitCount = ServantFaceIconComponent__GetIconLimitCountSealAfter(v19, (int32_t)v19, IconLimitCount, v20);
    }
    if ( ServantLeaderInfo__IsHideSupport(servantLeaderInfo, 0LL) )
    {
      v22 = 4;
    }
    else if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v22 = 5;
    }
    else
    {
      v22 = 2;
    }
    v24 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    *(_QWORD *)&v42.fields.currentCryptoKey = v24;
    *(_QWORD *)&v42.fields.fakeValue = v23;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v42, 0LL) )
    {
      v27 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
      *(_QWORD *)&v43.fields.currentCryptoKey = v27;
      *(_QWORD *)&v43.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v43, 0LL);
      limitCount = servantLeaderInfo->fields.limitCount;
      exceedCount = servantLeaderInfo->fields.exceedCount;
      v32 = v28;
      if ( isNewIconDisp )
      {
        userId = servantLeaderInfo->fields.userId;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v29);
        IsNew = OtherUserNewManager__IsNew(userId, 0LL);
        ServantFaceIconComponent__Set_38928428(
          this,
          v32,
          limitCount,
          IconLimitCount,
          exceedCount,
          info1,
          info2,
          v22,
          IsNew,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v40);
      }
      else
      {
        ServantFaceIconComponent__Set_38928428(
          this,
          v28,
          limitCount,
          IconLimitCount,
          exceedCount,
          info1,
          info2,
          v22,
          0,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v40);
      }
    }
    else
    {
      ServantFaceIconComponent__NoMount(this, v25);
    }
    if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0LL) )
    {
      ServantFaceIconComponent__HideEquip(this, v35);
    }
    else
    {
      v37 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
      *(_QWORD *)&v44.fields.currentCryptoKey = v37;
      *(_QWORD *)&v44.fields.fakeValue = v36;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v44, 0LL);
      ServantFaceIconComponent__SetEquip_38936708(this, v38, servantLeaderInfo->fields.equipTarget1, v39);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_38936924(
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
  const MethodInfo *v14; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B15731 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo, info1);
    byte_4B15731 = 1;
  }
  if ( equipTargetInfo )
  {
    v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
    ServantFaceIconComponent__Set_38928428(
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
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(equipTargetInfo->fields.svtId, 0LL);
    ServantFaceIconComponent__ClearEquip_38937176(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_38937964(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int128 v13; // q1
  __int64 v14; // x1
  int64_t v15; // x23
  int64_t UserId; // x0
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int64_t v20; // x24
  int32_t v21; // w0
  const MethodInfo *v22; // x6
  bool v23; // zf
  int32_t v24; // w23
  bool v25; // w0
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B15732 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, userCommandCodeEntity, info1);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    byte_4B15732 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v13 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v28.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCodeEntity);
    v27 = v28;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v27, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    UserId = NetworkManager__get_UserId(0LL);
    v19 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    v20 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    *(_QWORD *)&v29.fields.currentCryptoKey = v19;
    *(_QWORD *)&v29.fields.fakeValue = v18;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v29, 0LL);
    v23 = v15 == v20;
    v24 = v21;
    v25 = v23 && UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v24, info1, info2, 2, v25, v22);
    ServantFaceIconComponent__ClearEquip(this, v26);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFaceIconComponent__Set_38939452(
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

  if ( (byte_4B15733 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeEntity, isNew);
    byte_4B15733 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeEntity);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_38939644(
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

  if ( (byte_4B15734 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeCollectionEntity, info1);
    byte_4B15734 = 1;
  }
  if ( userCommandCodeCollectionEntity )
  {
    v10 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        userCommandCodeCollectionEntity);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
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
  __int64 v3; // x2
  UnityEngine_Object_o *iconLabel; // x20
  __int64 v7; // x1
  UIIconLabel_o *v8; // x0

  if ( (byte_4B15747 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B15747 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) && this->fields.info1 && this->fields.info2 )
  {
    v8 = this->fields.iconLabel;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    UIIconLabel__SetAlpha(v8, alpha, 0LL);
  }
  return 1;
}