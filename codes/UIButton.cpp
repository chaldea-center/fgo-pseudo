void UIButton___ctor(UIButton_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5B342 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4C5B342 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)v3, v4, v5);
  UIButtonColor___ctor((UIButtonColor_o *)this, 0);
}


void UIButton__OnClick(UIButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C5B33E & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIButton_TypeInfo);
    byte_4C5B33E = 1;
  }
  current = (UnityEngine_Object_o *)UIButton_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(current, 0, 0)
    && (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    UIButton_TypeInfo->static_fields->current = this;
    sub_1C3E508((CGThumbnailListItem_o *)UIButton_TypeInfo->static_fields, (int32_t)this, v4, v5);
    onClick = this->fields.onClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49293740(onClick, 0);
    UIButton_TypeInfo->static_fields->current = 0;
    sub_1C3E508((CGThumbnailListItem_o *)UIButton_TypeInfo->static_fields, 0, v7, v8);
  }
}


void UIButton__OnDragOut(UIButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C5B33D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B33D = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( this->fields.dragHighlight )
      goto LABEL_11;
    v4 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_1C3E7C0(v4, v3);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
LABEL_11:
      UIButtonColor__OnDragOut((UIButtonColor_o *)this, 0);
  }
}


void UIButton__OnDragOver(UIButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C5B33C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B33C = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( this->fields.dragHighlight )
      goto LABEL_11;
    v4 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_1C3E7C0(v4, v3);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
LABEL_11:
      UIButtonColor__OnDragOver((UIButtonColor_o *)this, 0);
  }
}


void UIButton__OnEnable(UIButton_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  UIButton_c *klass; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  UIButton_o *v8; // x0
  int32_t currentScheme; // w21
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *gameObject; // x21
  bool v12; // w0

  if ( (byte_4C5B33B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B33B = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) == 0 )
  {
    klass = this->klass;
    v6 = 3;
    v7 = 1;
    v8 = this;
    goto LABEL_9;
  }
  if ( !this->fields.mInitDone )
    return;
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
    currentScheme = UICamera_TypeInfo->static_fields->currentScheme;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( currentScheme == 2 )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( UICamera_TypeInfo->static_fields->currentScheme != 2 )
  {
LABEL_14:
    static_fields = UICamera_TypeInfo->static_fields;
    if ( !static_fields->currentScheme )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        static_fields = UICamera_TypeInfo->static_fields;
      }
      hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
      goto LABEL_19;
    }
    klass = this->klass;
    v8 = this;
    v6 = 0;
    v7 = 0;
LABEL_9:
    ((void (__fastcall *)(UIButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
      v8,
      v6,
      v7,
      klass->vtable._14_SetState.method);
    return;
  }
LABEL_7:
  hoveredObject = (UnityEngine_Object_o *)UICamera__get_selectedObject((const MethodInfo *)v3);
LABEL_19:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality(hoveredObject, gameObject, 0);
  ((void (__fastcall *)(UIButton_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
    this,
    v12,
    this->klass->vtable._9_OnHover.method);
}


void UIButton__OnInit(UIButton_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct UIWidget_o *mWidget; // x8
  UISprite_c *v6; // x9
  __int64 naturalAligment; // x10
  struct UIWidget_o *v8; // x11
  int32_t v9; // w1
  struct UISprite_o **p_mSprite; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UIWidget_o *v13; // x8
  UI2DSprite_c *v14; // x9
  __int64 v15; // x10
  struct UIWidget_o *v16; // x11
  int32_t v17; // w1
  struct UI2DSprite_o **p_mSprite2D; // x21
  UnityEngine_Object_o *v19; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UnityEngine_Sprite_o *mSprite; // x1

  if ( (byte_4C5B33A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UI2DSprite_TypeInfo);
    sub_1C3E564(&UISprite_TypeInfo);
    byte_4C5B33A = 1;
  }
  UIButtonColor__OnInit((UIButtonColor_o *)this, 0);
  mWidget = this->fields.mWidget;
  if ( mWidget )
  {
    v6 = UISprite_TypeInfo;
    naturalAligment = UISprite_TypeInfo->_2.naturalAligment;
    if ( mWidget->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UISprite_c *)mWidget->klass->_2.typeHierarchy[naturalAligment - 1] == UISprite_TypeInfo )
        v8 = this->fields.mWidget;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    this->fields.mSprite = (struct UISprite_o *)v8;
    p_mSprite = &this->fields.mSprite;
    if ( mWidget->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UISprite_c *)mWidget->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
        v9 = (int)mWidget;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = 0;
    this->fields.mSprite = 0;
    p_mSprite = &this->fields.mSprite;
  }
  sub_1C3E508((CGThumbnailListItem_o *)p_mSprite, v9, v3, v4);
  v13 = this->fields.mWidget;
  if ( v13 )
  {
    v14 = UI2DSprite_TypeInfo;
    v15 = UI2DSprite_TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment >= (unsigned int)v15 )
    {
      if ( (UI2DSprite_c *)v13->klass->_2.typeHierarchy[v15 - 1] == UI2DSprite_TypeInfo )
        v16 = this->fields.mWidget;
      else
        v16 = 0;
    }
    else
    {
      v16 = 0;
    }
    this->fields.mSprite2D = (struct UI2DSprite_o *)v16;
    p_mSprite2D = &this->fields.mSprite2D;
    if ( v13->klass->_2.naturalAligment >= (unsigned int)v15 )
    {
      if ( (UI2DSprite_c *)v13->klass->_2.typeHierarchy[v15 - 1] == v14 )
        v17 = (int)v13;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    v17 = 0;
    this->fields.mSprite2D = 0;
    p_mSprite2D = &this->fields.mSprite2D;
  }
  sub_1C3E508((CGThumbnailListItem_o *)p_mSprite2D, v17, v11, v12);
  v19 = (UnityEngine_Object_o *)*p_mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Inequality(v19, 0, 0);
  if ( v20 )
  {
    if ( !*p_mSprite )
      goto LABEL_38;
    mSpriteName = (*p_mSprite)->fields.mSpriteName;
    this->fields.mNormalSprite = mSpriteName;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mNormalSprite, (int32_t)mSpriteName, v22, v23);
  }
  v25 = (UnityEngine_Object_o *)*p_mSprite2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Inequality(v25, 0, 0);
  if ( v20 )
  {
    if ( *p_mSprite2D )
    {
      mSprite = (*p_mSprite2D)->fields.mSprite;
      this->fields.mNormalSprite2D = mSprite;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mNormalSprite2D, (int32_t)mSprite, v26, v27);
      return;
    }
LABEL_38:
    sub_1C3E7C0(v20, v21);
  }
}


void UIButton__SetSprite(UIButton_o *this, System_String_o *sp, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x21
  UISprite_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  struct UISprite_o *v8; // x8

  if ( (byte_4C5B340 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B340 = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    IsNullOrEmpty = (UISprite_o *)System_String__IsNullOrEmpty(sp, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      v8 = this->fields.mSprite;
      if ( !v8 )
        goto LABEL_14;
      if ( System_String__op_Inequality(v8->fields.mSpriteName, sp, 0) )
      {
        IsNullOrEmpty = this->fields.mSprite;
        if ( !IsNullOrEmpty )
          goto LABEL_14;
        UISprite__set_spriteName(IsNullOrEmpty, sp, 0);
        if ( this->fields.pixelSnap )
        {
          IsNullOrEmpty = this->fields.mSprite;
          if ( IsNullOrEmpty )
          {
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.methodPtr)(
              IsNullOrEmpty,
              IsNullOrEmpty->klass->vtable._33_MakePixelPerfect.method);
            return;
          }
LABEL_14:
          sub_1C3E7C0(IsNullOrEmpty, v7);
        }
      }
    }
  }
}


void UIButton__SetSprite_49204864(UIButton_o *this, UnityEngine_Sprite_o *sp, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite2D; // x21
  UI2DSprite_o *v6; // x0
  __int64 v7; // x1
  struct UI2DSprite_o *v8; // x8
  UnityEngine_Object_o *mSprite; // x21

  if ( (byte_4C5B341 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B341 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sp, 0, 0) )
  {
    mSprite2D = (UnityEngine_Object_o *)this->fields.mSprite2D;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UI2DSprite_o *)UnityEngine_Object__op_Inequality(mSprite2D, 0, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v8 = this->fields.mSprite2D;
      if ( !v8 )
        goto LABEL_18;
      mSprite = (UnityEngine_Object_o *)v8->fields.mSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mSprite, (UnityEngine_Object_o *)sp, 0) )
      {
        v6 = this->fields.mSprite2D;
        if ( !v6 )
          goto LABEL_18;
        UI2DSprite__set_sprite2D(v6, sp, 0);
        if ( this->fields.pixelSnap )
        {
          v6 = this->fields.mSprite2D;
          if ( v6 )
          {
            ((void (__fastcall *)(UI2DSprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v6,
              v6->klass->vtable._33_MakePixelPerfect.method);
            return;
          }
LABEL_18:
          sub_1C3E7C0(v6, v7);
        }
      }
    }
  }
}


void UIButton__SetState(UIButton_o *this, int32_t state, bool immediate, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x21
  const MethodInfo *v8; // x2
  System_String_o *mNormalSprite; // x1
  UnityEngine_Object_o *mSprite2D; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Sprite_o *mNormalSprite2D; // x1
  bool IsNullOrEmpty; // w0
  __int64 v14; // x8
  UnityEngine_Object_o *hoverSprite2D; // x20
  bool v16; // w0
  __int64 v17; // x8

  if ( (byte_4C5B33F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B33F = 1;
  }
  UIButtonColor__SetState((UIButtonColor_o *)this, state, immediate, 0);
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    switch ( state )
    {
      case 0:
        mNormalSprite = this->fields.mNormalSprite;
        goto LABEL_19;
      case 1:
        IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.hoverSprite, 0);
        v14 = 144;
        if ( IsNullOrEmpty )
          v14 = 224;
        mNormalSprite = *(System_String_o **)((char *)&this->klass + v14);
        goto LABEL_19;
      case 2:
        mNormalSprite = this->fields.pressedSprite;
        goto LABEL_19;
      case 3:
        mNormalSprite = this->fields.disabledSprite;
LABEL_19:
        UIButton__SetSprite(this, mNormalSprite, v8);
        break;
      default:
        return;
    }
  }
  else
  {
    mSprite2D = (UnityEngine_Object_o *)this->fields.mSprite2D;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mSprite2D, 0, 0) )
    {
      switch ( state )
      {
        case 0:
          mNormalSprite2D = this->fields.mNormalSprite2D;
          goto LABEL_27;
        case 1:
          hoverSprite2D = (UnityEngine_Object_o *)this->fields.hoverSprite2D;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v16 = UnityEngine_Object__op_Equality(hoverSprite2D, 0, 0);
          v17 = 168;
          if ( v16 )
            v17 = 232;
          mNormalSprite2D = *(UnityEngine_Sprite_o **)((char *)&this->klass + v17);
          goto LABEL_27;
        case 2:
          mNormalSprite2D = this->fields.pressedSprite2D;
          goto LABEL_27;
        case 3:
          mNormalSprite2D = this->fields.disabledSprite2D;
LABEL_27:
          UIButton__SetSprite_49204864(this, mNormalSprite2D, v11);
          break;
        default:
          return;
      }
    }
  }
}


bool UIButton__get_isEnabled(UIButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v7; // x19

  if ( (byte_4C5B336 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B336 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit(
                                               (UnityEngine_Object_o *)Component_object,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_17;
      if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_object, 0) )
        return 1;
    }
    v7 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)this,
           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v7, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( v7 )
        return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0);
LABEL_17:
      sub_1C3E7C0(gameObject, v4);
    }
  }
  return 0;
}


System_String_o *UIButton__get_normalSprite(UIButton_o *this, const MethodInfo *method)
{
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method);
  return this->fields.mNormalSprite;
}


UnityEngine_Sprite_o *UIButton__get_normalSprite2D(UIButton_o *this, const MethodInfo *method)
{
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method);
  return this->fields.mNormalSprite2D;
}


void UIButton__set_isEnabled(UIButton_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  bool v8; // w1
  unsigned int v9; // w20
  Il2CppObject *v10; // x21
  bool v11; // w1

  if ( (byte_4C5B337 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B337 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method,
          method)
      & 1) != value )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        v8 = value;
        if ( value )
          v9 = 0;
        else
          v9 = 3;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v8, 0);
LABEL_22:
        ((void (__fastcall *)(UIButton_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
          this,
          v9,
          0,
          this->klass->vtable._14_SetState.method);
        return;
      }
      goto LABEL_24;
    }
    v10 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( v10 )
      {
        v11 = value;
        if ( value )
          v9 = 0;
        else
          v9 = 3;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10, v11, 0);
        goto LABEL_22;
      }
LABEL_24:
      sub_1C3E7C0(gameObject, v6);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
  }
}


void UIButton__set_normalSprite(UIButton_o *this, System_String_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
  struct UISprite_o *v10; // x8
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *v12; // x19
  const MethodInfo *v13; // x2

  if ( (byte_4C5B338 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B338 = 1;
  }
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method,
      method);
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.mNormalSprite, 0);
  if ( IsNullOrEmpty )
    goto LABEL_14;
  v10 = this->fields.mSprite;
  if ( !v10 )
    sub_1C3E7C0(IsNullOrEmpty, v9);
  if ( System_String__op_Equality(this->fields.mNormalSprite, v10->fields.mSpriteName, 0) )
  {
    this->fields.mNormalSprite = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mNormalSprite, (int32_t)value, v6, v7);
    UIButton__SetSprite(this, value, v11);
    v12 = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetDirty(v12, 0);
  }
  else
  {
LABEL_14:
    this->fields.mNormalSprite = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mNormalSprite, (int32_t)value, v6, v7);
    if ( !this->fields.mState )
      UIButton__SetSprite(this, value, v13);
  }
}


void UIButton__set_normalSprite2D(UIButton_o *this, UnityEngine_Sprite_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite2D; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *mNormalSprite2D; // x22
  struct UI2DSprite_o *v11; // x8
  UnityEngine_Object_o *mSprite; // x23
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *v14; // x19
  const MethodInfo *v15; // x2

  if ( (byte_4C5B339 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B339 = 1;
  }
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method,
      method);
  mSprite2D = (UnityEngine_Object_o *)this->fields.mSprite2D;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(mSprite2D, 0, 0);
  if ( !v6 )
    goto LABEL_15;
  mNormalSprite2D = (UnityEngine_Object_o *)this->fields.mNormalSprite2D;
  v11 = this->fields.mSprite2D;
  if ( !v11 )
    sub_1C3E7C0(v6, v7);
  mSprite = (UnityEngine_Object_o *)v11->fields.mSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mNormalSprite2D, mSprite, 0) )
  {
    this->fields.mNormalSprite2D = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mNormalSprite2D, (int32_t)value, v8, v9);
    UIButton__SetSprite_49204864(this, value, v13);
    v14 = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetDirty(v14, 0);
  }
  else
  {
LABEL_15:
    this->fields.mNormalSprite2D = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mNormalSprite2D, (int32_t)value, v8, v9);
    if ( !this->fields.mState )
      UIButton__SetSprite_49204864(this, value, v15);
  }
}