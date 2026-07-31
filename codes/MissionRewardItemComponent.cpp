void MissionRewardItemComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593C0C2 & 1) == 0 )
  {
    sub_21FFC50(&MissionRewardItemComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_21526/*"img_shopbg04"*/);
    byte_593C0C2 = 1;
  }
  v7 = StringLiteral_21526/*"img_shopbg04"*/;
  MissionRewardItemComponent_TypeInfo->static_fields->BaseSpriteDefaultName = (struct System_String_o *)StringLiteral_21526/*"img_shopbg04"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MissionRewardItemComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v8; // x20
  UISprite_o *v9; // x20

  if ( (byte_593C0BE & 1) == 0 )
  {
    sub_21FFC50(&MissionRewardItemComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_21FFC50(&StringLiteral_13362/*"Shop/Atlas/ShopAtlas"*/);
    byte_593C0BE = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(baseSp, 0, 0);
  if ( ((unsigned __int8)object & 1) != 0 )
  {
    v6 = this->fields.baseSp;
    if ( !v6 )
      goto LABEL_17;
    mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality(mAtlas, 0, 0) )
    {
      v8 = this->fields.baseSp;
      object = (UIAtlas_o *)UnityEngine_Resources__Load_object_(
                              (System_String_o *)StringLiteral_13362/*"Shop/Atlas/ShopAtlas"*/,
                              (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v8 )
      {
        UISprite__set_atlas(v8, object, 0);
        v9 = this->fields.baseSp;
        object = (UIAtlas_o *)MissionRewardItemComponent_TypeInfo;
        if ( !*(&MissionRewardItemComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MissionRewardItemComponent_TypeInfo, v5);
        if ( v9 )
        {
          UISprite__set_spriteName(v9, MissionRewardItemComponent_TypeInfo->static_fields->BaseSpriteDefaultName, 0);
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
      sub_21FFECC(object, v5);
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

  if ( (byte_593C0C0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C0C0 = 1;
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
    sub_21FFECC(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void MissionRewardItemComponent__OnDestroy(MissionRewardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0

  if ( (byte_593C0BF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C0BF = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(baseSp, 0, 0) )
  {
    v5 = this->fields.baseSp;
    if ( !v5 )
      sub_21FFECC(0, v4);
    UISprite__set_atlas(v5, 0, 0);
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
  __int64 v8; // x1
  UILabel_o *dataLabel; // x20

  if ( (byte_593C0C1 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_593C0C1 = 1;
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat(num, 0);
    if ( !dataLabel )
LABEL_19:
      sub_21FFECC(baseObject, *(_QWORD *)&itemId);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
  ItemIconComponent__setLocalScaleIconSprite(itemIcon, scale, 0);
}