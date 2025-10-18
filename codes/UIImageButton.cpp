void UIImageButton___ctor(UIImageButton_o *this, const MethodInfo *method)
{
  this->fields.pixelSnap = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIImageButton__OnEnable(UIImageButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v4; // x1
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C475BC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475BC = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    this->fields.target = (struct UISprite_o *)ComponentInChildren_object__51242636;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.target, (int32_t)ComponentInChildren_object__51242636, v6, v7);
  }
  UIImageButton__UpdateImage(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void UIImageButton__OnHover(UIImageButton_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x8

  if ( (byte_4C475BF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475BF = 1;
  }
  if ( UIImageButton__get_isEnabled(this, (const MethodInfo *)isOver) )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      v7 = 40;
      if ( isOver )
        v7 = 48;
      UIImageButton__SetSprite(this, *(System_String_o **)((char *)&this->klass + v7), v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIImageButton__OnPress(UIImageButton_o *this, bool pressed, const MethodInfo *method)
{
  if ( pressed )
    UIImageButton__SetSprite(this, this->fields.pressedSprite, method);
  else
    UIImageButton__UpdateImage(this, (const MethodInfo *)pressed);
}


void UIImageButton__OnValidate(UIImageButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UISprite_o *v7; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UISprite_o *v11; // x8
  struct System_String_o *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UISprite_o *v15; // x8
  struct System_String_o *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UISprite_o *v19; // x8
  struct System_String_o *v20; // x1

  if ( (byte_4C475BD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475BD = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.normalSprite, 0);
    if ( IsNullOrEmpty )
    {
      v7 = this->fields.target;
      if ( !v7 )
        goto LABEL_19;
      mSpriteName = v7->fields.mSpriteName;
      this->fields.normalSprite = mSpriteName;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.normalSprite, (int32_t)mSpriteName, v5, v6);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.hoverSprite, 0);
    if ( IsNullOrEmpty )
    {
      v11 = this->fields.target;
      if ( !v11 )
        goto LABEL_19;
      v12 = v11->fields.mSpriteName;
      this->fields.hoverSprite = v12;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.hoverSprite, (int32_t)v12, v9, v10);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.pressedSprite, 0);
    if ( IsNullOrEmpty )
    {
      v15 = this->fields.target;
      if ( !v15 )
        goto LABEL_19;
      v16 = v15->fields.mSpriteName;
      this->fields.pressedSprite = v16;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.pressedSprite, (int32_t)v16, v13, v14);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.disabledSprite, 0);
    if ( IsNullOrEmpty )
    {
      v19 = this->fields.target;
      if ( v19 )
      {
        v20 = v19->fields.mSpriteName;
        this->fields.disabledSprite = v20;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.disabledSprite, (int32_t)v20, v17, v18);
        return;
      }
LABEL_19:
      sub_1C372B4(IsNullOrEmpty);
    }
  }
}


void UIImageButton__SetSprite(UIImageButton_o *this, System_String_o *sprite, const MethodInfo *method)
{
  UIImageButton_o *v4; // x19
  struct UISprite_o *target; // x8
  UnityEngine_Object_o *mAtlas; // x21
  struct UISprite_o *v7; // x8

  v4 = this;
  if ( (byte_4C475C0 & 1) == 0 )
  {
    this = (UIImageButton_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475C0 = 1;
  }
  target = v4->fields.target;
  if ( !target )
    goto LABEL_15;
  mAtlas = (UnityEngine_Object_o *)target->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (UIImageButton_o *)UnityEngine_Object__op_Equality(mAtlas, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = v4->fields.target;
    if ( !v7 )
      goto LABEL_15;
    this = (UIImageButton_o *)v7->fields.mAtlas;
    if ( !this )
      goto LABEL_15;
    if ( UIAtlas__GetSprite((UIAtlas_o *)this, sprite, 0) )
    {
      this = (UIImageButton_o *)v4->fields.target;
      if ( !this )
        goto LABEL_15;
      UISprite__set_spriteName((UISprite_o *)this, sprite, 0);
      if ( v4->fields.pixelSnap )
      {
        this = (UIImageButton_o *)v4->fields.target;
        if ( this )
        {
          ((void (__fastcall *)(UIImageButton_o *, void *))this->klass[2]._1.parent)(
            this,
            this->klass[2]._1.generic_class);
          return;
        }
LABEL_15:
        sub_1C372B4(this);
      }
    }
  }
}


void UIImageButton__UpdateImage(UIImageButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w0
  System_String_o **p_hoverSprite; // x8

  if ( (byte_4C475BE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C475BE = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    if ( UIImageButton__get_isEnabled(this, v4) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
      p_hoverSprite = &this->fields.hoverSprite;
      if ( !IsHighlighted )
        p_hoverSprite = &this->fields.normalSprite;
    }
    else
    {
      p_hoverSprite = &this->fields.disabledSprite;
    }
    UIImageButton__SetSprite(this, *p_hoverSprite, v5);
  }
}


bool UIImageButton__get_isEnabled(UIImageButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C475BA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475BA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
      return UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_object, 0);
LABEL_10:
    sub_1C372B4(gameObject);
  }
  return 0;
}


void UIImageButton__set_isEnabled(UIImageButton_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4C475BB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475BB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_object, 0) != value )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, value, 0);
        UIImageButton__UpdateImage(this, v7);
      }
      return;
    }
LABEL_11:
    sub_1C372B4(gameObject);
  }
}