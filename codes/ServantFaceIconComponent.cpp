void __fastcall ServantFaceIconComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5A6E5 & 1) == 0 )
  {
    sub_1B885B0(&ServantFaceIconComponent_TypeInfo);
    byte_4A5A6E5 = 1;
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
  UnityEngine_Object_o *limitCountSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A5A6DB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6DB = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.limitCountSprite;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5A6DE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6DE = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( !transform )
      goto LABEL_14;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_14;
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
LABEL_14:
      sub_1B8880C(transform, v8);
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
  if ( (byte_4A5A6E0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6E0 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v11.fields.x = x;
          v11.fields.y = y;
          v11.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v11, 0LL);
          this->fields.isAdjustIconLabelScale = 1;
          return;
        }
      }
    }
LABEL_16:
    sub_1B8880C(transform, v8);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(typeSprite, method);
  }
  v6.fields.z = 0.0;
  v6.fields.y = -64.0;
  v6.fields.x = v5;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v6, 0LL);
}


void __fastcall ServantFaceIconComponent__Blank(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *frameSprite; // x0

  if ( (byte_4A5A6B9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20293/*"img_commonbg_02"*/);
    byte_4A5A6B9 = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  frameSprite = this->fields.frameSprite;
  if ( !frameSprite )
    sub_1B8880C(0LL, v3);
  UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20293/*"img_commonbg_02"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__ChangeClassIcon(
        ServantFaceIconComponent_o *this,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  UISprite_o *classSprite; // x21

  if ( (byte_4A5A6E2 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5A6E2 = 1;
  }
  classSprite = this->fields.classSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClass(classSprite, classId, frameType, 0LL);
}


void __fastcall ServantFaceIconComponent__Clear(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  UISprite_o *backSprite; // x20
  const MethodInfo *v8; // x1
  UISprite_o *faceSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *costumeIconSprite; // x20
  UnityEngine_Object_o *limitCountSprite; // x20
  UnityEngine_Object_o *limitCountIcon; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v15; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *shiningIcon; // x20
  UnityEngine_Object_o *faceEffectSprite; // x20

  if ( (byte_4A5A6B8 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6B8 = 1;
  }
  this->fields.info1 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.info1, 0, v2, v3);
  this->fields.info2 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.info2, 0, v5, v6);
  backSprite = this->fields.backSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.classSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costumeIconSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.costumeIconSprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.limitCountIcon;
    if ( !faceSprite )
      goto LABEL_53;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)faceSprite, v8);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v15 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v15, 0LL);
    faceSprite = this->fields.raritySprite;
    if ( !faceSprite )
      goto LABEL_53;
    UISprite__set_spriteName(faceSprite, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !faceSprite )
      goto LABEL_53;
    UIIconLabel__Clear((UIIconLabel_o *)faceSprite, 0LL);
  }
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    faceSprite = (UISprite_o *)this->fields.shiningIcon;
    if ( !faceSprite )
      goto LABEL_53;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)faceSprite, 0LL);
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(faceEffectSprite, 0LL, 0LL) )
  {
    faceSprite = this->fields.faceEffectSprite;
    if ( faceSprite )
    {
      UISprite__set_spriteName(faceSprite, 0LL, 0LL);
      goto LABEL_52;
    }
LABEL_53:
    sub_1B8880C(faceSprite, v8);
  }
LABEL_52:
  ServantFaceIconComponent__ClearEquip(this, v8);
}


void __fastcall ServantFaceIconComponent__ClearEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20

  if ( (byte_4A5A6D4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6D4 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_27:
      sub_1B8880C(noneEquipSprite, v4);
    }
  }
}


void __fastcall ServantFaceIconComponent__ClearEquip_38225496(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  char v8; // w20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  UnityEngine_Object_o *rarity2Sprite; // x20
  struct UISprite_o *raritySprite; // x8
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *v15; // x20

  if ( (byte_4A5A6D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6D5 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      baseSvtId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL);
          if ( this->fields.noneEquipSprite )
          {
            v8 = (char)Instance;
            Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.noneEquipSprite,
                                          0LL);
            if ( Instance )
            {
              if ( (v8 & 1) != 0 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                hideEquipSprite = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                v13 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
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
                v14 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
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
                v15 = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
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
    sub_1B8880C(Instance, v7);
  }
}


void __fastcall ServantFaceIconComponent__ClearFaceAtlas(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *faceSprite; // x0

  faceSprite = this->fields.faceSprite;
  if ( !faceSprite || (UISprite__set_atlas(faceSprite, 0LL, 0LL), (faceSprite = this->fields.faceSprite) == 0LL) )
    sub_1B8880C(faceSprite, method);
  UISprite__set_spriteName(faceSprite, 0LL, 0LL);
}


void __fastcall ServantFaceIconComponent__ClearShiningIcon(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  ShiningIconComponent_o *shiningIcon; // x0

  shiningIcon = this->fields.shiningIcon;
  if ( !shiningIcon )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(faceSprite, flag);
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
    sub_1B8880C(this, method);
  return faceSprite->fields.mSpriteName;
}


int32_t __fastcall ServantFaceIconComponent__GetIconLimitCountSealAfter(
        ServantFaceIconComponent_o *this,
        int32_t svtId,
        int32_t iconLimit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5A6E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
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

  if ( (byte_4A5A6D9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6D9 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rarity2Sprite, 0LL, 0LL) )
    {
      noneEquipSprite = (UnityEngine_Component_o *)this->fields.rarity2Sprite;
      if ( noneEquipSprite )
      {
        UISprite__set_spriteName((UISprite_o *)noneEquipSprite, 0LL, 0LL);
        return;
      }
LABEL_27:
      sub_1B8880C(noneEquipSprite, v4);
    }
  }
}


bool __fastcall ServantFaceIconComponent__IsUseEquip(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Component_o *noneEquipSprite; // x0
  __int64 v5; // x1
  struct UIMeshSprite_o *v6; // x8

  if ( (byte_4A5A6DA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6DA = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(equipSprite, 0LL, 0LL);
  if ( ((unsigned __int8)noneEquipSprite & 1) != 0 )
  {
    v6 = this->fields.equipSprite;
    if ( !v6 )
      goto LABEL_13;
    if ( !System_String__IsNullOrEmpty(v6->fields.mSpriteName, 0LL) )
      return 1;
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite
      || (noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL)) == 0LL )
    {
LABEL_13:
      sub_1B8880C(noneEquipSprite, v5);
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

  if ( (byte_4A5A6BA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20316/*"img_frames_nodata"*/);
    byte_4A5A6BA = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1B8880C(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20316/*"img_frames_nodata"*/, 0LL);
}


void __fastcall ServantFaceIconComponent__NoMount_Support(ServantFaceIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *backSprite; // x0

  if ( (byte_4A5A6BB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20317/*"img_frames_nodata3"*/);
    byte_4A5A6BB = 1;
  }
  ServantFaceIconComponent__Clear(this, method);
  backSprite = this->fields.backSprite;
  if ( !backSprite )
    sub_1B8880C(0LL, v3);
  UISprite__set_spriteName(backSprite, (System_String_o *)StringLiteral_20317/*"img_frames_nodata3"*/, 0LL);
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

  if ( (byte_4A5A6BF & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6BF = 1;
  }
  if ( servantData )
  {
    v10 = *(_QWORD *)&servantData->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
    IconLimitCount = (ServantFaceIconComponent_o *)ServantLeaderInfo__getIconLimitCount(servantData, 0LL);
    IconLimitCountSealAfter = ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                IconLimitCount,
                                v11,
                                (int32_t)IconLimitCount,
                                v13);
    ServantFaceIconComponent__Set_38217436(
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

  if ( (byte_4A5A6DF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6DF = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconLabel, 0LL, 0LL) )
  {
    if ( this->fields.isAdjustIconLabelPos )
    {
      transform = (UnityEngine_Component_o *)this->fields.iconLabel;
      if ( !transform
        || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
      {
        sub_1B8880C(transform, v4);
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

  if ( (byte_4A5A6E1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6E1 = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1B8880C(transform, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
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
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x26
  __int64 v34; // x27
  ServantLimitImageMaster_o *v35; // x25
  int32_t ServantImageLimitSealAfter; // w24
  int32_t v37; // w25
  int32_t v38; // w0
  __int64 v39; // x21
  __int64 v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // [xsp+38h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4A5A6BC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6BC = 1;
  }
  if ( !userSvtEntity )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtEntity);
    return;
  }
  v13 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v45 = v46;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v45, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( v14 != NetworkManager__get_UserId(0LL) )
  {
    FriendIconLimitCount = UserServantEntity__getFriendIconLimitCount(userSvtEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      v34 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v35 = (ServantLimitImageMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v34;
      *(_QWORD *)&v48.fields.fakeValue = v33;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v48, 0LL);
      if ( v35 )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       v35,
                                       (int32_t)Instance,
                                       FriendIconLimitCount,
                                       0LL);
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.svtId, 0LL);
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.limitCount, 0LL);
        ServantFaceIconComponent__Set_38217436(
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
        goto LABEL_23;
      }
    }
LABEL_30:
    sub_1B8880C(Instance, v18);
  }
  IconLimitCount = UserServantEntity__getIconLimitCount(userSvtEntity, 0, 0LL);
  if ( questRestrictionInfo )
  {
    v16 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userSvtEntity, 0LL);
    if ( v16 >= 0 )
      IconLimitCount = v16;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  v22 = (ServantLimitImageMaster_o *)v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v21;
  *(_QWORD *)&v47.fields.fakeValue = v20;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v47, 0LL);
  if ( !v22 )
    goto LABEL_30;
  v23 = ServantLimitImageMaster__GetServantImageLimitSealAfter(v22, (int32_t)Instance, IconLimitCount, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.svtId, 0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.limitCount, 0LL);
  exceedCount = userSvtEntity->fields.exceedCount;
  v27 = v25;
  IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
  IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  ServantFaceIconComponent__Set_38217436(
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
LABEL_23:
  if ( equipIdList && *(_QWORD *)&equipIdList->max_length )
  {
    v40 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v40;
    *(_QWORD *)&v49.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v49, 0LL);
    if ( !equipIdList->max_length )
      sub_1B88814(v41, v42);
    ServantFaceIconComponent__SetEquip_38219676(this, v41, equipIdList->m_Items[0], v43);
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

  if ( (byte_4A5A6CE & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6CE = 1;
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_9:
        UISprite__set_spriteName(v12, 0LL, 0LL);
        return;
      }
LABEL_17:
      sub_1B8880C(v12, v13);
    }
    v15 = this->fields.classSprite;
    if ( isServantEquip )
    {
      if ( v15 )
      {
        v12 = v15;
        goto LABEL_9;
      }
      goto LABEL_17;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
  Il2CppObject *Component_object; // x26
  const MethodInfo *v17; // x5
  int32_t saveNameList; // w23
  UnityEngine_Object_o *equipSprite; // x24
  UnityEngine_Object_o *hideEquipSprite; // x24
  UnityEngine_Object_o *equipLimitCountSprite; // x24
  UISprite_o *backSprite; // x25
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *shiningIcon; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  struct IconLabelInfo_o **p_info1; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  struct IconLabelInfo_o **p_info2; // x0
  int32_t v35; // w1
  const MethodInfo *v36; // x2

  if ( (byte_4A5A6CD & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20316/*"img_frames_nodata"*/);
    sub_1B885B0(&StringLiteral_20130/*"icon_common_new01"*/);
    byte_4A5A6CD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                commandCodeId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_60;
  v15 = Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_60;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0LL);
  }
  if ( !v15 )
LABEL_60:
    sub_1B8880C(Instance, v14);
  saveNameList = (int32_t)v15->fields.saveNameList;
  this->fields.collectionStatus = collectionStatus;
  if ( collectionStatus == 2 || collectionStatus == 1 )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20316/*"img_frames_nodata"*/, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  ServantFaceIconComponent__SetClassSprite(this, 1, 0, 0, 0, v17);
  ServantFaceIconComponent__SetLimitCountSprite(this, 1, 0, 0, v23);
  ServantFaceIconComponent__SetLimitCountIcon(this, 1, 0, 0, v24);
  ServantFaceIconComponent__SetRaritySprite(this, 1, saveNameList, 0, 0, v25);
  ServantFaceIconComponent__SetFaceEffectSprite(this, 1, v26);
  shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
  {
    if ( isNew && this->fields.collectionStatus != 6 )
    {
      Instance = (DataManager_o *)this->fields.shiningIcon;
      if ( Instance )
      {
        ShiningIconComponent__Set_38233884(
          (ShiningIconComponent_o *)Instance,
          (System_String_o *)StringLiteral_20130/*"icon_common_new01"*/,
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
  ServantFaceIconComponent__ClearEquip(this, v14);
  if ( info1 && info1->fields.iconKind )
  {
    this->fields.info1 = info1;
    p_info1 = &this->fields.info1;
    v31 = (int)info1;
  }
  else
  {
    this->fields.info1 = 0LL;
    p_info1 = &this->fields.info1;
    v31 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_info1, v31, v28, v29);
  if ( info2 && info2->fields.iconKind )
  {
    this->fields.info2 = info2;
    p_info2 = &this->fields.info2;
    v35 = (int)info2;
  }
  else
  {
    this->fields.info2 = 0LL;
    p_info2 = &this->fields.info2;
    v35 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_info2, v35, v32, v33);
  ServantFaceIconComponent__SetIconLabel(this, 0, v36);
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

  if ( (byte_4A5A6E4 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_23715/*"svt_costume_icon_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A6E4 = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v8 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v10 = this->fields.costumeIconSprite;
        v11 = System_Int32__ToString(v8, 0LL);
        v12 = System_String__Concat_61707032((System_String_o *)StringLiteral_23715/*"svt_costume_icon_"*/, v11, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
                v13.fields.z = 0.0;
                v13.fields.x = -47.0;
                v13.fields.y = -42.0;
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
LABEL_21:
          sub_1B8880C(transform, v6);
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
  ServantFaceIconComponent_c *v12; // x8
  int32_t limitCount; // w22
  int32_t v14; // w23
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // [xsp+38h] [xbp-48h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v8 = this;
  if ( (byte_4A5A6C4 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantFaceIconComponent_o *)sub_1B885B0(&ServantFaceIconComponent_TypeInfo);
    byte_4A5A6C4 = 1;
  }
  if ( !equipTargetInfo )
    sub_1B8880C(this, equipTargetInfo);
  v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  v12 = ServantFaceIconComponent_TypeInfo;
  limitCount = equipTargetInfo->fields.limitCount;
  v14 = v11;
  if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
    v12 = ServantFaceIconComponent_TypeInfo;
  }
  ServantFaceIconComponent__Set_38217436(
    v8,
    v14,
    limitCount,
    v12->static_fields->SECRET_LIMIT_COUNT,
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
    sub_1B8880C(0LL, flag);
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
    sub_1B8880C(limitCountIcon, flag);
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
    sub_1B8880C(0LL, flag);
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

  if ( (byte_4A5A6C1 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6C1 = 1;
  }
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v12.fields.currentCryptoKey = v6;
    *(_QWORD *)&v12.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v13.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    v9 = v7;
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
    ServantFaceIconComponent__SetEquip_38222160(this, 0, v9, v10, v11);
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

  if ( (byte_4A5A6D3 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6D3 = 1;
  }
  ServantFaceIconComponent__NoMount(this, (const MethodInfo *)info);
  if ( info )
  {
    v6 = *(_QWORD *)&info->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&info->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL) )
      ServantFaceIconComponent__SetEquip_38225028(this, 0, info, v7);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_38219676(
        ServantFaceIconComponent_o *this,
        int32_t baseSvtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipSprite; // x22
  const MethodInfo *v8; // x2
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v13; // w21
  int32_t v14; // w0
  const MethodInfo *v15; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5A6D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6D6 = 1;
  }
  entity = 0LL;
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSprite, 0LL, 0LL) )
  {
    if ( userSvtId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_18;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        userSvtId,
                                        (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( entity )
        {
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v17.fields.currentCryptoKey = klass;
          *(_QWORD *)&v17.fields.fakeValue = monitor;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
          if ( entity )
          {
            v13 = (int)Master_object;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                    0LL);
            ServantFaceIconComponent__SetEquip_38222160(this, baseSvtId, v13, v14, v15);
            return;
          }
        }
LABEL_18:
        sub_1B8880C(Master_object, v10);
      }
    }
    ServantFaceIconComponent__ClearEquip_38225496(this, baseSvtId, v8);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_38222160(
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

  if ( (byte_4A5A6D8 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6D8 = 1;
  }
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v14 = (UISprite_o *)this->fields.equipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEquipFace(v14, svtId, 0LL);
          equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
          {
            noneEquipSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !noneEquipSprite )
              goto LABEL_36;
            noneEquipSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)noneEquipSprite,
                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !noneEquipSprite )
              goto LABEL_36;
            noneEquipSprite = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)noneEquipSprite,
                                                           svtId,
                                                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !this->fields.equipLimitCountSprite )
              goto LABEL_36;
            v16 = noneEquipSprite;
            noneEquipSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                                                           0LL);
            if ( !v16 || !noneEquipSprite )
              goto LABEL_36;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)noneEquipSprite,
              v16[3].fields.m_CachedPtr > 0 && v16[3].fields.m_CachedPtr <= limitCount,
              0LL);
          }
          rarity2Sprite = (UnityEngine_Object_o *)this->fields.rarity2Sprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1B8880C(noneEquipSprite, v10);
    }
    ServantFaceIconComponent__ClearEquip_38225496(this, baseSvtId, v11);
  }
}


void __fastcall ServantFaceIconComponent__SetEquip_38225028(
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

  if ( (byte_4A5A6D7 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6D7 = 1;
  }
  if ( !equipTarget )
    goto LABEL_10;
  v8 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL) >= 1 )
  {
    v10 = *(_QWORD *)&equipTarget->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipTarget->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v10;
    *(_QWORD *)&v14.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
    ServantFaceIconComponent__SetEquip_38222160(this, baseSvtId, v11, equipTarget->fields.limitCount, v12);
  }
  else
  {
LABEL_10:
    ServantFaceIconComponent__ClearEquip_38225496(this, baseSvtId, (const MethodInfo *)equipTarget);
  }
}


void __fastcall ServantFaceIconComponent__SetEventBonus(
        ServantFaceIconComponent_o *this,
        int32_t iconId,
        int32_t rarity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  int32_t FrameType; // w0
  UISprite_o *backSprite; // x23
  int32_t v11; // w22
  UnityEngine_Object_o *equipSprite; // x21
  UnityEngine_Object_o *hideEquipSprite; // x21
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *limitCountSprite; // x21
  UnityEngine_Object_o *limitCountIcon; // x21
  UnityEngine_Object_o *raritySprite; // x21
  const MethodInfo *v19; // x1
  UISprite_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4A5A6CC & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_21146/*"listframes_shadow"*/);
    byte_4A5A6CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_51;
  FrameType = ServantExceedMaster__GetFrameType((ServantExceedMaster_o *)Instance, rarity, 0, 0LL);
  backSprite = this->fields.backSprite;
  v11 = FrameType;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceBaseIcon(backSprite, v11, 0, 0LL);
  AtlasManager__SetFaceImage(this->fields.faceSprite, iconId, 0, 0LL);
  Instance = (DataManager_o *)this->fields.frameSprite;
  if ( !Instance )
    goto LABEL_51;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21146/*"listframes_shadow"*/, 0LL);
  AtlasManager__SetServantType(this->fields.typeSprite, 6, v11, 0, 0LL);
  equipSprite = (UnityEngine_Object_o *)this->fields.equipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.classSprite;
    if ( !Instance )
      goto LABEL_51;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(limitCountIcon, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.limitCountIcon;
    if ( !Instance )
      goto LABEL_51;
    LimitCountIconComponent__Clear((LimitCountIconComponent_o *)Instance, v8);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v20 = this->fields.raritySprite;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = (DataManager_o *)Rarity__getIcon(rarity, 0LL);
    if ( v20 )
    {
      UISprite__set_spriteName(v20, (System_String_o *)Instance, 0LL);
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
    sub_1B8880C(Instance, v8);
  }
LABEL_50:
  ServantFaceIconComponent__ClearEquip(this, v19);
  ServantFaceIconComponent__SetIconLabel(this, 0, v21);
}


void __fastcall ServantFaceIconComponent__SetFaceEffectSprite(
        ServantFaceIconComponent_o *this,
        bool isCommandCode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceEffectSprite; // x21
  __int64 v6; // x1
  int32_t collectionStatus; // w8
  UISprite_o *v8; // x19
  __int64 *v9; // x8
  UISprite_o *v10; // x0

  if ( (byte_4A5A6D2 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_21126/*"linklost_svt_material"*/);
    sub_1B885B0(&StringLiteral_21124/*"linkbad_svt_material"*/);
    byte_4A5A6D2 = 1;
  }
  faceEffectSprite = (UnityEngine_Object_o *)this->fields.faceEffectSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceEffectSprite, 0LL, 0LL) )
  {
    if ( !isCommandCode )
    {
      collectionStatus = this->fields.collectionStatus;
      if ( collectionStatus == 9 )
      {
        v8 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v9 = &StringLiteral_21124/*"linkbad_svt_material"*/;
        goto LABEL_17;
      }
      if ( collectionStatus == 8 )
      {
        v8 = this->fields.faceEffectSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v9 = &StringLiteral_21126/*"linklost_svt_material"*/;
LABEL_17:
        AtlasManager__SetEventSprite(v8, (System_String_o *)*v9, 0LL);
        return;
      }
    }
    v10 = this->fields.faceEffectSprite;
    if ( !v10 )
      sub_1B8880C(0LL, v6);
    UISprite__set_spriteName(v10, 0LL, 0LL);
  }
}


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
  if ( (byte_4A5A6DC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6DC = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1B8880C(v8, info1);
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
      UIIconLabel__Set_38262736(v8, info1, 1, 0LL);
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
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  LimitCountIconComponent_o *v12; // x0
  int32_t collectionStatus; // w8

  if ( (byte_4A5A6D0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6D0 = 1;
  }
  limitCountIcon = (UnityEngine_Object_o *)this->fields.limitCountIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitCountIcon, 0LL, 0LL) )
  {
    if ( isCommandCode )
    {
      v12 = this->fields.limitCountIcon;
      if ( !v12 )
LABEL_15:
        sub_1B8880C(v12, v10);
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

  if ( (byte_4A5A6CF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6CF = 1;
  }
  limitCountSprite = (UnityEngine_Object_o *)this->fields.limitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1B8880C(gameObject, v10);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  int32_t v15; // w23
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v17; // w25
  int32_t CardImageLimitCount; // w0
  const MethodInfo *v19; // x5
  int32_t v20; // w24
  int32_t v21; // w25
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4A5A6C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6C3 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v13 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v13;
    *(_QWORD *)&v26.fields.fakeValue = v12;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
    if ( !v14
      || (DataMasterBase_object__object__int___GetEntity(
            v14,
            (int32_t)Instance,
            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtColEntity->fields.svtId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_21:
      sub_1B8880C(Instance, v10);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v15,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtColEntity->fields.svtId, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v17, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( userSvtColEntity->fields.status )
    {
      v20 = CardImageLimitCount;
      if ( UserServantCollectionEntity__IsLinkLostStateServant(userSvtColEntity, 0LL) )
      {
        v21 = 8;
      }
      else if ( UserServantCollectionEntity__IsLinkBadStateServant(userSvtColEntity, 0LL) )
      {
        v21 = 9;
      }
      else
      {
        v21 = 7;
      }
      maxLimitCount = userSvtColEntity->fields.maxLimitCount;
      IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
      ServantFaceIconComponent__Set_38217436(
        this,
        v15,
        maxLimitCount,
        v20,
        0,
        info1,
        info2,
        v21,
        IsNew,
        0,
        0LL,
        0,
        0,
        0,
        0,
        v25);
      ServantFaceIconComponent__ClearEquip(this, v24);
    }
    else
    {
      ServantFaceIconComponent__Set_38222820(this, userSvtColEntity, info1, info2, 0, v19);
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
  System_String_o *Icon_37701784; // x23
  int32_t RarityIcon; // w22
  bool v19; // w21
  UISprite_o *v20; // x20

  if ( (byte_4A5A6D1 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    byte_4A5A6D1 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Icon = (System_String_o *)UnityEngine_Object__op_Equality(raritySprite, 0LL, 0LL);
  if ( ((unsigned __int8)Icon & 1) == 0 )
  {
    collectionStatus = this->fields.collectionStatus;
    if ( isCommandCode )
    {
      v15 = this->fields.raritySprite;
      if ( collectionStatus )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon = Rarity__getIcon(rarity, 0LL);
        if ( !v15 )
          goto LABEL_37;
        v16 = Icon;
        Icon = (System_String_o *)v15;
        goto LABEL_12;
      }
      if ( !v15 )
        goto LABEL_37;
      Icon = (System_String_o *)this->fields.raritySprite;
    }
    else
    {
      if ( (collectionStatus | 4) != 4 && (collectionStatus & 0xFFFFFFFE) != 6 )
      {
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        Icon_37701784 = Rarity__getIcon_37701784(rarity, exceedCount, lv, 0LL);
        if ( exceedCount < 1 )
        {
          v19 = 1;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
          if ( !Icon )
            goto LABEL_37;
          RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)Icon, rarity, exceedCount, 0, 0LL);
          Icon = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
          if ( !Icon )
            goto LABEL_37;
          v19 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Icon, rarity, lv, RarityIcon, 0LL) < 3;
        }
        v20 = this->fields.raritySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( !v19 )
        {
          AtlasManager__SetEventSprite(v20, Icon_37701784, 0LL);
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
          sub_1B8880C(Icon, v13);
        }
        AtlasManager__SetCommon(v20, 0LL);
        Icon = (System_String_o *)this->fields.raritySprite;
        if ( !Icon )
          goto LABEL_37;
        v16 = Icon_37701784;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)Icon, v16, 0LL);
        goto LABEL_13;
      }
      Icon = (System_String_o *)this->fields.raritySprite;
      if ( !Icon )
        goto LABEL_37;
    }
    UISprite__set_spriteName((UISprite_o *)Icon, 0LL, 0LL);
  }
}


void __fastcall ServantFaceIconComponent__Set_38133256(
        ServantFaceIconComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        bool isNewIconDisp,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  int32_t IconLimitCount; // w24
  __int64 v14; // x26
  __int64 v15; // x27
  ServantFaceIconComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  int32_t v18; // w26
  __int64 v19; // x27
  __int64 v20; // x28
  const MethodInfo *v21; // x1
  __int64 v22; // x27
  __int64 v23; // x28
  int32_t v24; // w0
  int32_t limitCount; // w28
  int32_t exceedCount; // w27
  int32_t v27; // w29
  int64_t userId; // x25
  bool IsNew; // w0
  const MethodInfo *v30; // x1
  __int64 v31; // x21
  __int64 v32; // x22
  int32_t v33; // w0
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // [xsp+38h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4A5A6C6 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OtherUserNewManager_TypeInfo);
    byte_4A5A6C6 = 1;
  }
  if ( servantLeaderInfo )
  {
    IconLimitCount = ServantLeaderInfo__getIconLimitCount(servantLeaderInfo, 0LL);
    if ( !ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) )
    {
      v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v36.fields.currentCryptoKey = v15;
      *(_QWORD *)&v36.fields.fakeValue = v14;
      v16 = (ServantFaceIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
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
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = v20;
    *(_QWORD *)&v37.fields.fakeValue = v19;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL) )
    {
      v23 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = v23;
      *(_QWORD *)&v38.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
      limitCount = servantLeaderInfo->fields.limitCount;
      exceedCount = servantLeaderInfo->fields.exceedCount;
      v27 = v24;
      if ( isNewIconDisp )
      {
        userId = servantLeaderInfo->fields.userId;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        IsNew = OtherUserNewManager__IsNew(userId, 0LL);
        ServantFaceIconComponent__Set_38217436(
          this,
          v27,
          limitCount,
          IconLimitCount,
          exceedCount,
          info1,
          info2,
          v18,
          IsNew,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v35);
      }
      else
      {
        ServantFaceIconComponent__Set_38217436(
          this,
          v24,
          limitCount,
          IconLimitCount,
          exceedCount,
          info1,
          info2,
          v18,
          0,
          0,
          0LL,
          0,
          servantLeaderInfo->fields.lv,
          imageSvtId,
          0,
          v35);
      }
    }
    else
    {
      ServantFaceIconComponent__NoMount(this, v21);
    }
    if ( ServantLeaderInfo__IsNpc(servantLeaderInfo, 0LL) && ServantLeaderInfo__IsHideEquip(servantLeaderInfo, 0LL) )
    {
      ServantFaceIconComponent__HideEquip(this, v30);
    }
    else
    {
      v32 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v32;
      *(_QWORD *)&v39.fields.fakeValue = v31;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
      ServantFaceIconComponent__SetEquip_38225028(this, v33, servantLeaderInfo->fields.equipTarget1, v34);
    }
  }
  else
  {
    ServantFaceIconComponent__NoMount(this, (const MethodInfo *)servantLeaderInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_38217436(
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
  const MethodInfo *v24; // x1
  ServantEntity_o *v25; // x24
  Il2CppObject *Component_object; // x20
  int32_t v27; // w22
  int32_t classId; // w25
  int32_t v29; // w3
  int32_t FrameType_39669872; // w20
  int32_t FrameType; // w27
  const MethodInfo *v32; // x2
  UISprite_o *v33; // x29
  const MethodInfo *v34; // x2
  bool IsServantEquip; // w0
  const MethodInfo *v36; // x5
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x2
  UnityEngine_Object_o *shiningIcon; // x20
  const MethodInfo *v42; // x3
  __int64 *v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  struct IconLabelInfo_o **p_info1; // x0
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  struct IconLabelInfo_o **p_info2; // x0
  int32_t v51; // w1
  const MethodInfo *v52; // x2
  UISprite_o *backSprite; // x20
  UISprite_o *faceSprite; // x20
  UISprite_o *v55; // x20
  UISprite_o *v56; // x20
  UISprite_o *v57; // x20
  ServantFaceIconComponent_c *v58; // x0
  UnityEngine_Object_o *v59; // x20
  UnityEngine_Object_o *v60; // x20
  UISprite_o *v61; // x20
  UnityEngine_Object_o *equipSprite; // x20
  UnityEngine_Object_o *hideEquipSprite; // x20
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  IconLabelInfo_o *v65; // [xsp+0h] [xbp-70h]
  int32_t rarity; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5A6CB & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantFaceIconComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20316/*"img_frames_nodata"*/);
    sub_1B885B0(&StringLiteral_20130/*"icon_common_new01"*/);
    sub_1B885B0(&StringLiteral_21146/*"listframes_shadow"*/);
    sub_1B885B0(&StringLiteral_20150/*"icon_eventjoin_01"*/);
    byte_4A5A6CB = 1;
  }
  rarity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_115;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_115;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.faceSprite )
    goto LABEL_115;
  v25 = (ServantEntity_o *)Instance;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.faceSprite,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
      imageLimitCount = (int)Instance;
      if ( isCheckSeal )
      {
        Instance = (DataManager_o *)ServantFaceIconComponent__GetIconLimitCountSealAfter(
                                      (ServantFaceIconComponent_o *)Instance,
                                      svtId,
                                      (int32_t)Instance,
                                      v42);
        imageLimitCount = (int)Instance;
      }
    }
  }
  v27 = imageSvtId ? imageSvtId : svtId;
  v65 = info2;
  if ( !v25 )
    goto LABEL_115;
  classId = v25->fields.classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_115;
  if ( frameLimitCount >= 1 )
    v29 = frameLimitCount;
  else
    v29 = limitCount;
  FrameType_39669872 = ServantExceedMaster__GetFrameType_39669872(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         v29,
                         exceedCount,
                         0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Instance )
LABEL_115:
    sub_1B8880C(Instance, v24);
  FrameType = ServantLvDetailMaster__GetFrameType(
                (ServantLvDetailMaster_o *)Instance,
                rarity,
                lv,
                FrameType_39669872,
                0LL);
  ServantFaceIconComponent__SetCostumeIcon(this, 0LL, v32);
  this->fields.collectionStatus = collectionStatus;
  switch ( collectionStatus )
  {
    case 0:
      backSprite = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(backSprite, 0LL);
      Instance = (DataManager_o *)this->fields.backSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20316/*"img_frames_nodata"*/, 0LL);
      Instance = (DataManager_o *)AtlasManager__IsUseFaceBattle(0LL);
      faceSprite = this->fields.faceSprite;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      IsServantEquip = ServantEntity__get_IsServantEquip(v25, 0LL);
      ServantFaceIconComponent__SetClassSprite(this, 0, IsServantEquip, classId, FrameType, v36);
      ServantFaceIconComponent__SetLimitCountSprite(this, 0, v25->fields.limitMax, limitCount, v37);
      ServantFaceIconComponent__SetLimitCountIcon(this, 0, v25->fields.limitMax, limitCount, v38);
      ServantFaceIconComponent__SetRaritySprite(this, 0, rarity, exceedCount, lv, v39);
      ServantFaceIconComponent__SetFaceEffectSprite(this, 0, v40);
      shiningIcon = (UnityEngine_Object_o *)this->fields.shiningIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(shiningIcon, 0LL, 0LL) )
      {
        if ( isTemporarySubscription && (this->fields.collectionStatus & 0xFFFFFFFE) != 6 )
        {
          Instance = (DataManager_o *)this->fields.shiningIcon;
          if ( !Instance )
            goto LABEL_115;
          v43 = &StringLiteral_20150/*"icon_eventjoin_01"*/;
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
          v43 = &StringLiteral_20130/*"icon_common_new01"*/;
        }
        ShiningIconComponent__Set_38233884((ShiningIconComponent_o *)Instance, (System_String_o *)*v43, 0LL);
      }
LABEL_51:
      ServantFaceIconComponent__ClearEquip(this, v24);
      if ( info1 && info1->fields.iconKind )
      {
        this->fields.info1 = info1;
        p_info1 = &this->fields.info1;
        v47 = (int)info1;
      }
      else
      {
        this->fields.info1 = 0LL;
        p_info1 = &this->fields.info1;
        v47 = 0;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_info1, v47, v44, v45);
      if ( v65 && v65->fields.iconKind )
      {
        this->fields.info2 = v65;
        p_info2 = &this->fields.info2;
        v51 = (int)v65;
      }
      else
      {
        this->fields.info2 = 0LL;
        p_info2 = &this->fields.info2;
        v51 = 0;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_info2, v51, v48, v49);
      ServantFaceIconComponent__SetIconLabel(this, 0, v52);
      return;
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
      v33 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v33, FrameType, classId, 0LL);
      AtlasManager__SetFaceImage(this->fields.faceSprite, v27, imageLimitCount, 0LL);
      ServantFaceIconComponent__SetCostumeIcon(this, svtCostumeEntity, v34);
      goto LABEL_29;
    case 4:
      v55 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v55, FrameType, classId, 0LL);
      AtlasManager__SetHideFace(this->fields.faceSprite, 0LL);
LABEL_29:
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21146/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v25->fields.type, FrameType, classId, 0LL);
      goto LABEL_31;
    case 6:
      v56 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceBaseIcon(v56, FrameType, classId, 0LL);
      v57 = this->fields.faceSprite;
      v58 = ServantFaceIconComponent_TypeInfo;
      if ( !ServantFaceIconComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFaceIconComponent_TypeInfo);
        v58 = ServantFaceIconComponent_TypeInfo;
      }
      AtlasManager__SetFaceImage(
        v57,
        v58->static_fields->SECRET_SERVANT_ID,
        v58->static_fields->SECRET_LIMIT_COUNT,
        0LL);
      Instance = (DataManager_o *)this->fields.frameSprite;
      if ( !Instance )
        goto LABEL_115;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21146/*"listframes_shadow"*/, 0LL);
      AtlasManager__SetServantType(this->fields.typeSprite, v25->fields.type, FrameType, classId, 0LL);
      v59 = (UnityEngine_Object_o *)this->fields.equipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v59, 0LL, 0LL) )
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
      v60 = (UnityEngine_Object_o *)this->fields.hideEquipSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
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
      v61 = this->fields.backSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDataLostFaceBaseIcon(v61, 0LL);
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


void __fastcall ServantFaceIconComponent__Set_38220052(
        ServantFaceIconComponent_o *this,
        int64_t userSvtId,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x4

  if ( (byte_4A5A6BD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6BD = 1;
  }
  if ( userSvtId <= 0 )
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userSvtId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v10);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               userSvtId,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    ServantFaceIconComponent__Set_38220260(this, (UserServantEntity_o *)Entity, info1, info2, v12);
  }
}


void __fastcall ServantFaceIconComponent__Set_38220260(
        ServantFaceIconComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w0
  __int128 v12; // q0
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

  if ( (byte_4A5A6BE & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5A6BE = 1;
  }
  if ( userSvtEntity )
  {
    v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = v10;
    *(_QWORD *)&v37.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
    v12 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v13 = v11;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v35 = v36;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v35, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = v19;
      *(_QWORD *)&v38.fields.fakeValue = v18;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v23 = v21;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_38217436(
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v31;
      *(_QWORD *)&v39.fields.fakeValue = v30;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
      ServantFaceIconComponent__Set_38217436(
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


void __fastcall ServantFaceIconComponent__Set_38221296(
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
  __int128 v14; // q0
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
  const MethodInfo *v39; // [xsp+38h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A5A6C0 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5A6C0 = 1;
  }
  if ( userSvtEntity )
  {
    v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = v12;
    *(_QWORD *)&v42.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL);
    v14 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    v15 = v13;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v40 = v41;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = v21;
      *(_QWORD *)&v43.fields.fakeValue = v20;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
      exceedCount = userSvtEntity->fields.exceedCount;
      v25 = v23;
      IsNew = UserServantEntity__IsNew(userSvtEntity, 0LL);
      IsEventJoin = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
      ServantFaceIconComponent__Set_38217436(
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
        v39);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v35;
      *(_QWORD *)&v44.fields.fakeValue = v34;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
      ServantFaceIconComponent__Set_38217436(
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
        v39);
    }
    if ( equipIdList && (v38 = *(_QWORD *)&equipIdList->max_length) != 0 )
    {
      if ( !(_DWORD)v38 )
        sub_1B88814(v28, v29);
      ServantFaceIconComponent__SetEquip_38219676(this, v15, equipIdList->m_Items[0], v30);
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


void __fastcall ServantFaceIconComponent__Set_38222820(
        ServantFaceIconComponent_o *this,
        UserServantCollectionEntity_o *userSvtColEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        int32_t frameLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  Il2CppObject *Entity; // x0
  int32_t status; // w24
  ServantEntity_o *v19; // x26
  int32_t v20; // w25
  int32_t ServantLimitCountSealAfter; // w27
  int32_t CardImageLimitCount; // w27
  int32_t maxLimitCount; // w26
  bool IsNew; // w0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4A5A6C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6C2 = 1;
  }
  if ( userSvtColEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v15 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userSvtColEntity->fields.svtId.fields.fakeValue;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v15;
    *(_QWORD *)&v27.fields.fakeValue = v14;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
    if ( !v16
      || (Entity = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
          status = userSvtColEntity->fields.status,
          v19 = (ServantEntity_o *)Entity,
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtColEntity->fields.svtId, 0LL),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
    {
LABEL_17:
      sub_1B8880C(Instance, v12);
    }
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   v20,
                                   userSvtColEntity->fields.maxLimitCount,
                                   0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v20, ServantLimitCountSealAfter, 1, 0, 0LL);
    if ( v19 )
    {
      if ( !((status == 0) | !ServantEntity__get_IsEnemyCollectionDetail(v19, 0LL)) )
        status = 3;
    }
    maxLimitCount = userSvtColEntity->fields.maxLimitCount;
    IsNew = UserServantCollectionEntity__IsNew(userSvtColEntity, 0LL);
    ServantFaceIconComponent__Set_38217436(
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


void __fastcall ServantFaceIconComponent__Set_38224336(
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

  if ( (byte_4A5A6C5 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6C5 = 1;
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
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
    ServantFaceIconComponent__Set_38217436(
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


void __fastcall ServantFaceIconComponent__Set_38225244(
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

  if ( (byte_4A5A6C7 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6C7 = 1;
  }
  if ( equipTargetInfo )
  {
    v10 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
    ServantFaceIconComponent__Set_38217436(
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
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(equipTargetInfo->fields.svtId, 0LL);
    ServantFaceIconComponent__ClearEquip_38225496(this, v12, v13);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)equipTargetInfo);
  }
}


void __fastcall ServantFaceIconComponent__Set_38226284(
        ServantFaceIconComponent_o *this,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        IconLabelInfo_o *info1,
        IconLabelInfo_o *info2,
        const MethodInfo *method)
{
  __int128 v9; // q1
  int64_t v10; // x23
  int64_t UserId; // x0
  __int64 v12; // x25
  __int64 v13; // x26
  int64_t v14; // x24
  int32_t v15; // w0
  const MethodInfo *v16; // x6
  bool v17; // zf
  int32_t v18; // w23
  bool v19; // w0
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5A6C8 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5A6C8 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v9 = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v21 = v22;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v21, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    v14 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v13;
    *(_QWORD *)&v23.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
    v17 = v10 == v14;
    v18 = v15;
    v19 = v17 && UserCommandCodeEntity__IsNew(userCommandCodeEntity, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v18, info1, info2, 2, v19, v16);
    ServantFaceIconComponent__ClearEquip(this, v20);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_38227772(
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

  if ( (byte_4A5A6C9 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6C9 = 1;
  }
  if ( userCommandCodeEntity )
  {
    v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
    ServantFaceIconComponent__SetCommandCode(this, v13, info1, info2, 2, isNew, v14);
    ServantFaceIconComponent__ClearEquip(this, v15);
  }
  else
  {
    ServantFaceIconComponent__Clear(this, (const MethodInfo *)userCommandCodeEntity);
  }
}


void __fastcall ServantFaceIconComponent__Set_38227964(
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

  if ( (byte_4A5A6CA & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A6CA = 1;
  }
  if ( userCommandCodeCollectionEntity )
  {
    v10 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
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

  if ( (byte_4A5A6DD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6DD = 1;
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) && this->fields.info1 && this->fields.info2 )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UIIconLabel__SetAlpha(v7, alpha, 0LL);
  }
  return 1;
}