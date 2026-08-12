void UIButton___ctor(UIButton_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974F87 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_5974F87 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UIButtonColor___ctor((UIButtonColor_o *)this, 0);
}


void UIButton__OnClick(UIButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974F83 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIButton_TypeInfo);
    byte_5974F83 = 1;
  }
  current = (UnityEngine_Object_o *)UIButton_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(current, 0, 0)
    && (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    UIButton_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIButton_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onClick = this->fields.onClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    EventDelegate__Execute_56285144(onClick, 0);
    UIButton_TypeInfo->static_fields->current = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)UIButton_TypeInfo->static_fields, 0, v12, v13, v14, v15, v16, v17);
  }
}


void UIButton__OnDragOut(UIButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *pressed; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_5974F82 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F82 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( this->fields.dragHighlight )
      goto LABEL_11;
    v4 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_2213CDC(v4, v3);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_5974F81 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F81 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    if ( this->fields.dragHighlight )
      goto LABEL_11;
    v4 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_2213CDC(v4, v3);
    pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(pressed, gameObject, 0) )
LABEL_11:
      UIButtonColor__OnDragOver((UIButtonColor_o *)this, 0);
  }
}


void UIButton__OnEnable(UIButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_StaticFields *static_fields; // x8
  int v6; // w10
  int32_t currentScheme; // w9
  UnityEngine_Object_o *hoveredObject; // x20
  UIButton_c *klass; // x8
  UIButton_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  bool v15; // w0

  if ( (byte_5974F80 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F80 = 1;
  }
  if ( (((__int64 (__fastcall *)(UIButton_o *, const MethodInfo *))this->klass->vtable._4_get_isEnabled.methodPtr)(
          this,
          this->klass->vtable._4_get_isEnabled.method)
      & 1) == 0 )
  {
    klass = this->klass;
    v10 = this;
    v11 = 3;
    v12 = 1;
LABEL_12:
    ((void (__fastcall *)(UIButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
      v10,
      v11,
      v12,
      klass->vtable._14_SetState.method);
    return;
  }
  if ( !this->fields.mInitDone )
    return;
  v4 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    v4 = UICamera_TypeInfo;
  }
  static_fields = v4->static_fields;
  v6 = *(&v4->_2.cctor_finished + 1);
  currentScheme = static_fields->currentScheme;
  if ( currentScheme != 2 )
  {
    if ( v6 )
    {
      if ( currentScheme )
      {
LABEL_16:
        klass = this->klass;
        v10 = this;
        v11 = 0;
        v12 = 0;
        goto LABEL_12;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(v4, v3);
      v4 = UICamera_TypeInfo;
      static_fields = UICamera_TypeInfo->static_fields;
      if ( static_fields->currentScheme )
        goto LABEL_16;
    }
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, v3);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
    goto LABEL_21;
  }
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v4, v3);
  hoveredObject = (UnityEngine_Object_o *)UICamera__get_selectedObject((const MethodInfo *)v4);
LABEL_21:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality(hoveredObject, gameObject, 0);
  ((void (__fastcall *)(UIButton_o *, bool, const MethodInfo *))this->klass->vtable._9_OnHover.methodPtr)(
    this,
    v15,
    this->klass->vtable._9_OnHover.method);
}


void UIButton__OnInit(UIButton_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct UIWidget_o *mWidget; // x8
  UISprite_c *v10; // x9
  __int64 naturalAligment; // x10
  struct UIWidget_o *v12; // x11
  int32_t v13; // w1
  struct UISprite_o **p_mSprite; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UIWidget_o *v21; // x8
  UI2DSprite_c *v22; // x9
  __int64 v23; // x10
  struct UIWidget_o *v24; // x11
  int32_t v25; // w1
  struct UI2DSprite_o **p_mSprite2D; // x21
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x22
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct UnityEngine_Sprite_o *mSprite; // x1

  if ( (byte_5974F7F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UI2DSprite_TypeInfo);
    sub_2213A60(&UISprite_TypeInfo);
    byte_5974F7F = 1;
  }
  UIButtonColor__OnInit((UIButtonColor_o *)this, 0);
  mWidget = this->fields.mWidget;
  if ( mWidget )
  {
    v10 = UISprite_TypeInfo;
    naturalAligment = UISprite_TypeInfo->_2.naturalAligment;
    if ( mWidget->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UISprite_c *)mWidget->klass->_2.typeHierarchy[naturalAligment - 1] == UISprite_TypeInfo )
        v12 = this->fields.mWidget;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    this->fields.mSprite = (struct UISprite_o *)v12;
    p_mSprite = &this->fields.mSprite;
    if ( mWidget->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UISprite_c *)mWidget->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
        v13 = (int)mWidget;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = 0;
    this->fields.mSprite = 0;
    p_mSprite = &this->fields.mSprite;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mSprite, v13, v3, v4, v5, v6, v7, v8);
  v21 = this->fields.mWidget;
  if ( v21 )
  {
    v22 = UI2DSprite_TypeInfo;
    v23 = UI2DSprite_TypeInfo->_2.naturalAligment;
    if ( v21->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( (UI2DSprite_c *)v21->klass->_2.typeHierarchy[v23 - 1] == UI2DSprite_TypeInfo )
        v24 = this->fields.mWidget;
      else
        v24 = 0;
    }
    else
    {
      v24 = 0;
    }
    this->fields.mSprite2D = (struct UI2DSprite_o *)v24;
    p_mSprite2D = &this->fields.mSprite2D;
    if ( v21->klass->_2.naturalAligment >= (unsigned int)v23 )
    {
      if ( (UI2DSprite_c *)v21->klass->_2.typeHierarchy[v23 - 1] == v22 )
        v25 = (int)v21;
      else
        v25 = 0;
    }
    else
    {
      v25 = 0;
    }
  }
  else
  {
    v25 = 0;
    this->fields.mSprite2D = 0;
    p_mSprite2D = &this->fields.mSprite2D;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mSprite2D, v25, v15, v16, v17, v18, v19, v20);
  v28 = (UnityEngine_Object_o *)*p_mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  v29 = UnityEngine_Object__op_Inequality(v28, 0, 0);
  if ( v29 )
  {
    if ( !*p_mSprite )
      goto LABEL_38;
    mSpriteName = (*p_mSprite)->fields.mSpriteName;
    this->fields.mNormalSprite = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mNormalSprite,
      (int32_t)mSpriteName,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v38 = (UnityEngine_Object_o *)*p_mSprite2D;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  v29 = UnityEngine_Object__op_Inequality(v38, 0, 0);
  if ( v29 )
  {
    if ( *p_mSprite2D )
    {
      mSprite = (*p_mSprite2D)->fields.mSprite;
      this->fields.mNormalSprite2D = mSprite;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mNormalSprite2D,
        (int32_t)mSprite,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      return;
    }
LABEL_38:
    sub_2213CDC(v29, v30);
  }
}


void UIButton__SetSprite(UIButton_o *this, System_String_o *sp, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x21
  UISprite_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  struct UISprite_o *v8; // x8

  if ( (byte_5974F85 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F85 = 1;
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sp);
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
          sub_2213CDC(IsNullOrEmpty, v7);
        }
      }
    }
  }
}


void UIButton__SetSprite_56197052(UIButton_o *this, UnityEngine_Sprite_o *sp, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *mSprite2D; // x21
  UI2DSprite_o *v7; // x0
  __int64 v8; // x1
  struct UI2DSprite_o *v9; // x8
  UnityEngine_Object_o *mSprite; // x21

  if ( (byte_5974F86 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F86 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sp);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)sp, 0, 0) )
  {
    mSprite2D = (UnityEngine_Object_o *)this->fields.mSprite2D;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v7 = (UI2DSprite_o *)UnityEngine_Object__op_Inequality(mSprite2D, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v9 = this->fields.mSprite2D;
      if ( !v9 )
        goto LABEL_18;
      mSprite = (UnityEngine_Object_o *)v9->fields.mSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(mSprite, (UnityEngine_Object_o *)sp, 0) )
      {
        v7 = this->fields.mSprite2D;
        if ( !v7 )
          goto LABEL_18;
        UI2DSprite__set_sprite2D(v7, sp, 0);
        if ( this->fields.pixelSnap )
        {
          v7 = this->fields.mSprite2D;
          if ( v7 )
          {
            ((void (__fastcall *)(UI2DSprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v7,
              v7->klass->vtable._33_MakePixelPerfect.method);
            return;
          }
LABEL_18:
          sub_2213CDC(v7, v8);
        }
      }
    }
  }
}


void UIButton__SetState(UIButton_o *this, int32_t state, bool immediate, const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *mSprite; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  bool IsNullOrEmpty; // w0
  __int64 v12; // x8
  System_String_o *pressedSprite; // x1
  UnityEngine_Object_o *mSprite2D; // x21
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *hoverSprite2D; // x20
  bool v18; // w0
  __int64 v19; // x8
  UnityEngine_Sprite_o *pressedSprite2D; // x1

  if ( (byte_5974F84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F84 = 1;
  }
  UIButtonColor__SetState((UIButtonColor_o *)this, state, immediate, 0);
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    if ( state > 1 )
    {
      if ( state == 2 )
      {
        pressedSprite = this->fields.pressedSprite;
      }
      else
      {
        if ( state != 3 )
          return;
        pressedSprite = this->fields.disabledSprite;
      }
    }
    else
    {
      if ( state )
      {
        if ( state == 1 )
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.hoverSprite, 0);
          v12 = 144;
          if ( IsNullOrEmpty )
            v12 = 224;
          pressedSprite = *(System_String_o **)((char *)&this->klass + v12);
          goto LABEL_32;
        }
        return;
      }
      pressedSprite = this->fields.mNormalSprite;
    }
LABEL_32:
    UIButton__SetSprite(this, pressedSprite, v10);
    return;
  }
  mSprite2D = (UnityEngine_Object_o *)this->fields.mSprite2D;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(mSprite2D, 0, 0) )
  {
    if ( state > 1 )
    {
      if ( state == 2 )
      {
        pressedSprite2D = this->fields.pressedSprite2D;
      }
      else
      {
        if ( state != 3 )
          return;
        pressedSprite2D = this->fields.disabledSprite2D;
      }
    }
    else if ( state )
    {
      if ( state != 1 )
        return;
      hoverSprite2D = (UnityEngine_Object_o *)this->fields.hoverSprite2D;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      v18 = UnityEngine_Object__op_Equality(hoverSprite2D, 0, 0);
      v19 = 168;
      if ( v18 )
        v19 = 232;
      pressedSprite2D = *(UnityEngine_Sprite_o **)((char *)&this->klass + v19);
    }
    else
    {
      pressedSprite2D = this->fields.mNormalSprite2D;
    }
    UIButton__SetSprite_56197052(this, pressedSprite2D, v16);
  }
}


bool UIButton__get_isEnabled(UIButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x19

  if ( (byte_5974F7B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F7B = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    v9 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)this,
           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v9, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( v9 )
        return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v9, 0);
LABEL_17:
      sub_2213CDC(gameObject, v4);
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
  __int64 v7; // x1
  Il2CppObject *Component_object; // x21
  bool v9; // w1
  unsigned int v10; // w20
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  bool v13; // w1

  if ( (byte_5974F7C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F7C = 1;
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
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        v9 = value;
        if ( value )
          v10 = 0;
        else
          v10 = 3;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v9, 0);
LABEL_22:
        ((void (__fastcall *)(UIButton_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._14_SetState.methodPtr)(
          this,
          v10,
          0,
          this->klass->vtable._14_SetState.method);
        return;
      }
      goto LABEL_24;
    }
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( v12 )
      {
        v13 = value;
        if ( value )
          v10 = 0;
        else
          v10 = 3;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, v13, 0);
        goto LABEL_22;
      }
LABEL_24:
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
  }
}


void UIButton__set_normalSprite(UIButton_o *this, System_String_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  struct UISprite_o *v14; // x8
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x19
  const MethodInfo *v18; // x2

  if ( (byte_5974F7D & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F7D = 1;
  }
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method,
      method);
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( !UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.mNormalSprite, 0);
  if ( IsNullOrEmpty )
    goto LABEL_14;
  v14 = this->fields.mSprite;
  if ( !v14 )
    sub_2213CDC(IsNullOrEmpty, v13);
  if ( System_String__op_Equality(this->fields.mNormalSprite, v14->fields.mSpriteName, 0) )
  {
    this->fields.mNormalSprite = value;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mNormalSprite,
      (int32_t)value,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    UIButton__SetSprite(this, value, v15);
    v17 = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v16);
    NGUITools__SetDirty(v17, 0);
  }
  else
  {
LABEL_14:
    this->fields.mNormalSprite = value;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mNormalSprite,
      (int32_t)value,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    if ( !this->fields.mState )
      UIButton__SetSprite(this, value, v18);
  }
}


void UIButton__set_normalSprite2D(UIButton_o *this, UnityEngine_Sprite_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mSprite2D; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *mNormalSprite2D; // x22
  struct UI2DSprite_o *v15; // x8
  UnityEngine_Object_o *mSprite; // x23
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x19
  const MethodInfo *v20; // x2

  if ( (byte_5974F7E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F7E = 1;
  }
  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._6_OnInit.methodPtr)(
      this,
      this->klass->vtable._6_OnInit.method,
      method);
  mSprite2D = (UnityEngine_Object_o *)this->fields.mSprite2D;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  v6 = UnityEngine_Object__op_Inequality(mSprite2D, 0, 0);
  if ( !v6 )
    goto LABEL_15;
  mNormalSprite2D = (UnityEngine_Object_o *)this->fields.mNormalSprite2D;
  v15 = this->fields.mSprite2D;
  if ( !v15 )
    sub_2213CDC(v6, v7);
  mSprite = (UnityEngine_Object_o *)v15->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(mNormalSprite2D, mSprite, 0) )
  {
    this->fields.mNormalSprite2D = value;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mNormalSprite2D,
      (int32_t)value,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    UIButton__SetSprite_56197052(this, value, v17);
    v19 = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v18);
    NGUITools__SetDirty(v19, 0);
  }
  else
  {
LABEL_15:
    this->fields.mNormalSprite2D = value;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mNormalSprite2D,
      (int32_t)value,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( !this->fields.mState )
      UIButton__SetSprite_56197052(this, value, v20);
  }
}