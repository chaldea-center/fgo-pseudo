void MissionRewardItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3AC25 & 1) == 0 )
  {
    sub_1C32C20(&MissionRewardItemComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_20570/*"img_shopbg04"*/);
    byte_4C3AC25 = 1;
  }
  MissionRewardItemComponent_TypeInfo->static_fields->BaseSpriteDefaultName = (struct System_String_o *)StringLiteral_20570/*"img_shopbg04"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)MissionRewardItemComponent_TypeInfo->static_fields, StringLiteral_20570/*"img_shopbg04"*/, v1, v2);
}


void MissionRewardItemComponent___ctor(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  this->fields.iconBaseDefaultPosX = -60.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionRewardItemComponent__Awake(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  UIAtlas_o *object; // x0
  struct UISprite_o *v5; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v7; // x20
  UISprite_o *v8; // x20

  if ( (byte_4C3AC21 & 1) == 0 )
  {
    sub_1C32C20(&MissionRewardItemComponent_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_1C32C20(&StringLiteral_12845/*"Shop/Atlas/ShopAtlas"*/);
    byte_4C3AC21 = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(baseSp, 0, 0);
  if ( ((unsigned __int8)object & 1) != 0 )
  {
    v5 = this->fields.baseSp;
    if ( !v5 )
      goto LABEL_17;
    mAtlas = (UnityEngine_Object_o *)v5->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mAtlas, 0, 0) )
    {
      v7 = this->fields.baseSp;
      object = (UIAtlas_o *)UnityEngine_Resources__Load_object_(
                              (System_String_o *)StringLiteral_12845/*"Shop/Atlas/ShopAtlas"*/,
                              (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v7 )
      {
        UISprite__set_atlas(v7, object, 0);
        v8 = this->fields.baseSp;
        object = (UIAtlas_o *)MissionRewardItemComponent_TypeInfo;
        if ( !MissionRewardItemComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionRewardItemComponent_TypeInfo);
        if ( v8 )
        {
          UISprite__set_spriteName(v8, MissionRewardItemComponent_TypeInfo->static_fields->BaseSpriteDefaultName, 0);
          object = (UIAtlas_o *)this->fields.baseSp;
          if ( object )
          {
            ((void (__fastcall *)(UIAtlas_o *, void *))object->klass[2]._1.parent)(
              object,
              object->klass[2]._1.generic_class);
            return;
          }
        }
      }
LABEL_17:
      sub_1C32E7C(object);
    }
  }
}


void MissionRewardItemComponent__CheckSerializeFieldAssertion(
        MissionRewardItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void MissionRewardItemComponent__Clear(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4C3AC23 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AC23 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0)
    || (ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel) == 0)
    || (UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel) == 0) )
  {
    sub_1C32E7C(baseObject);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void MissionRewardItemComponent__OnDestroy(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  UISprite_o *v4; // x0

  if ( (byte_4C3AC22 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC22 = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSp, 0, 0) )
  {
    v4 = this->fields.baseSp;
    if ( !v4 )
      sub_1C32E7C(0);
    UISprite__set_atlas(v4, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MissionRewardItemComponent__Set(
        MissionRewardItemComponent_o *this,
        int32_t itemId,
        int32_t num,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UILabel_o *dataLabel; // x20

  if ( (byte_4C3AC24 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C3AC24 = 1;
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
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 1, 0);
    dataLabel = this->fields.dataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat(num, 0);
    if ( !dataLabel )
LABEL_19:
      sub_1C32E7C(baseObject);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0);
  }
}


void MissionRewardItemComponent__SetItemIconOffsetX(
        MissionRewardItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C32E7C(0);
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, this->fields.iconBaseDefaultPosX + x, 0);
}


void MissionRewardItemComponent__SetItemIconOffsetY(
        MissionRewardItemComponent_o *this,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C32E7C(0);
  gameObject = UnityEngine_Component__get_gameObject(itemIcon, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.iconBaseDefaultPosY + y, 0);
}


void MissionRewardItemComponent__SetScaleItemIcon(
        MissionRewardItemComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C32E7C(0);
  ItemIconComponent__setLocalScaleIconSprite(itemIcon, scale, 0);
}