void __fastcall MissionRewardItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4C00A3E & 1) == 0 )
  {
    sub_1C2E12C(&MissionRewardItemComponent_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_20841/*"img_shopbg04"*/, v8);
    byte_4C00A3E = 1;
  }
  MissionRewardItemComponent_TypeInfo->static_fields->BaseSpriteDefaultName = (struct System_String_o *)StringLiteral_20841/*"img_shopbg04"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)MissionRewardItemComponent_TypeInfo->static_fields,
    StringLiteral_20841/*"img_shopbg04"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionRewardItemComponent___ctor(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  this->fields.iconBaseDefaultPosX = -60.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionRewardItemComponent__Awake(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *baseSp; // x20
  UIAtlas_o *object; // x0
  __int64 v8; // x1
  struct UISprite_o *v9; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v11; // x20
  UISprite_o *v12; // x20

  if ( (byte_4C00A3A & 1) == 0 )
  {
    sub_1C2E12C(&MissionRewardItemComponent_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_UIAtlas___, v4);
    sub_1C2E12C(&StringLiteral_13003/*"Shop/Atlas/ShopAtlas"*/, v5);
    byte_4C00A3A = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL);
  if ( ((unsigned __int8)object & 1) != 0 )
  {
    v9 = this->fields.baseSp;
    if ( !v9 )
      goto LABEL_17;
    mAtlas = (UnityEngine_Object_o *)v9->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL) )
    {
      v11 = this->fields.baseSp;
      object = (UIAtlas_o *)UnityEngine_Resources__Load_object_(
                              (System_String_o *)StringLiteral_13003/*"Shop/Atlas/ShopAtlas"*/,
                              (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v11 )
      {
        UISprite__set_atlas(v11, object, 0LL);
        v12 = this->fields.baseSp;
        object = (UIAtlas_o *)MissionRewardItemComponent_TypeInfo;
        if ( !MissionRewardItemComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionRewardItemComponent_TypeInfo);
        if ( v12 )
        {
          UISprite__set_spriteName(v12, MissionRewardItemComponent_TypeInfo->static_fields->BaseSpriteDefaultName, 0LL);
          object = (UIAtlas_o *)this->fields.baseSp;
          if ( object )
          {
            ((void (__fastcall *)(UIAtlas_o *, void *))object->klass[2]._1.typeMetadataHandle)(
              object,
              object->klass[2]._1.interopData);
            return;
          }
        }
      }
LABEL_17:
      sub_1C2E388(object, v8);
    }
  }
}


void __fastcall MissionRewardItemComponent__CheckSerializeFieldAssertion(
        MissionRewardItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionRewardItemComponent__Clear(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4C00A3C & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4C00A3C = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0LL)
    || (ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel) == 0LL) )
  {
    sub_1C2E388(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall MissionRewardItemComponent__OnDestroy(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0

  if ( (byte_4C00A3B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00A3B = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL) )
  {
    v5 = this->fields.baseSp;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    UISprite__set_atlas(v5, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionRewardItemComponent__Set(
        MissionRewardItemComponent_o *this,
        int32_t itemId,
        int32_t num,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UILabel_o *dataLabel; // x20

  if ( (byte_4C00A3D & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, *(_QWORD *)&itemId);
    byte_4C00A3D = 1;
  }
  if ( itemId < 1 )
  {
    MissionRewardItemComponent__Clear(this, *(const MethodInfo **)&itemId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 1, 0LL);
    dataLabel = this->fields.dataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat(num, 0LL);
    if ( !dataLabel )
LABEL_19:
      sub_1C2E388(baseObject, *(_QWORD *)&itemId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
  }
}


void __fastcall MissionRewardItemComponent__SetItemIconOffsetX(
        MissionRewardItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C2E388(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.iconBaseDefaultPosX + x, 0LL);
}


void __fastcall MissionRewardItemComponent__SetItemIconOffsetY(
        MissionRewardItemComponent_o *this,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C2E388(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.iconBaseDefaultPosY + y, 0LL);
}


void __fastcall MissionRewardItemComponent__SetScaleItemIcon(
        MissionRewardItemComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C2E388(0LL, method);
  ItemIconComponent__setLocalScaleIconSprite(itemIcon, scale, 0LL);
}