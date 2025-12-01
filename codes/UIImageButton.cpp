void UIImageButton___ctor(UIImageButton_o *this, const MethodInfo *method)
{
  this->fields.pixelSnap = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIImageButton__OnEnable(UIImageButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v4; // x1
  Il2CppObject *ComponentInChildren_object__51649344; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCBAE9 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBAE9 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    ComponentInChildren_object__51649344 = UnityEngine_Component__GetComponentInChildren_object__51649344(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_UISprite___);
    this->fields.target = (struct UISprite_o *)ComponentInChildren_object__51649344;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.target,
      (int32_t)ComponentInChildren_object__51649344,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  UIImageButton__UpdateImage(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void UIImageButton__OnHover(UIImageButton_o *this, bool isOver, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x8

  if ( (byte_4CCBAEC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBAEC = 1;
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
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UISprite_o *v28; // x8
  struct System_String_o *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct UISprite_o *v36; // x8
  struct System_String_o *v37; // x1

  if ( (byte_4CCBAEA & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBAEA = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.normalSprite, 0);
    if ( IsNullOrEmpty )
    {
      v12 = this->fields.target;
      if ( !v12 )
        goto LABEL_19;
      mSpriteName = v12->fields.mSpriteName;
      this->fields.normalSprite = mSpriteName;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.normalSprite,
        (int32_t)mSpriteName,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.hoverSprite, 0);
    if ( IsNullOrEmpty )
    {
      v20 = this->fields.target;
      if ( !v20 )
        goto LABEL_19;
      v21 = v20->fields.mSpriteName;
      this->fields.hoverSprite = v21;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.hoverSprite, (int32_t)v21, v14, v15, v16, v17, v18, v19);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.pressedSprite, 0);
    if ( IsNullOrEmpty )
    {
      v28 = this->fields.target;
      if ( !v28 )
        goto LABEL_19;
      v29 = v28->fields.mSpriteName;
      this->fields.pressedSprite = v29;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.pressedSprite,
        (int32_t)v29,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.disabledSprite, 0);
    if ( IsNullOrEmpty )
    {
      v36 = this->fields.target;
      if ( v36 )
      {
        v37 = v36->fields.mSpriteName;
        this->fields.disabledSprite = v37;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.disabledSprite,
          (int32_t)v37,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        return;
      }
LABEL_19:
      sub_1C71608(IsNullOrEmpty, v5);
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
  if ( (byte_4CCBAED & 1) == 0 )
  {
    this = (UIImageButton_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBAED = 1;
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
        sub_1C71608(this, sprite);
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

  if ( (byte_4CCBAEB & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBAEB = 1;
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
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4CCBAE7 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBAE7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
      return UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_object, 0);
LABEL_10:
    sub_1C71608(gameObject, v4);
  }
  return 0;
}


void UIImageButton__set_isEnabled(UIImageButton_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v8; // x1

  if ( (byte_4CCBAE8 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBAE8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
        UIImageButton__UpdateImage(this, v8);
      }
      return;
    }
LABEL_11:
    sub_1C71608(gameObject, v6);
  }
}