void UIHorizontalImageRender___cctor(const MethodInfo *method)
{
  struct UIHorizontalImageRender_StaticFields *static_fields; // x8

  if ( (byte_4C39241 & 1) == 0 )
  {
    sub_1C32C20(&UIHorizontalImageRender_TypeInfo);
    byte_4C39241 = 1;
  }
  static_fields = UIHorizontalImageRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_C0E170;
  *(_OWORD *)&static_fields->OVERLAP_U = xmmword_C0D080;
  *(_QWORD *)&static_fields->TOP_Y = 0xFFFFFE02000001FFLL;
  *(_OWORD *)&static_fields->BODY_U = xmmword_C0C240;
  *(_QWORD *)&static_fields->BODY_W = 0x3EFF40003F77A000LL;
}


void UIHorizontalImageRender___ctor(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C39240 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22277/*"normal"*/);
    byte_4C39240 = 1;
  }
  v5 = StringLiteral_22277/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22277/*"normal"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.filterName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIHorizontalImageRender__EndMoveAlpha(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3
  UnityEngine_Object_o *moveAlphaCallbackObject; // x20
  System_String_o *moveAlphaCallbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _BOOL8 v11; // x0

  if ( (byte_4C3923D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3923D = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
  moveAlphaCallbackObject = (UnityEngine_Object_o *)this->fields.moveAlphaCallbackObject;
  moveAlphaCallbackFunc = this->fields.moveAlphaCallbackFunc;
  this->fields.moveAlphaCallbackObject = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v9, v10);
  this->fields.isBusyMoveAlpha = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v11 )
  {
    if ( !moveAlphaCallbackObject )
      sub_1C32E7C(v11);
    UnityEngine_GameObject__SendMessage_71205516(
      (UnityEngine_GameObject_o *)moveAlphaCallbackObject,
      moveAlphaCallbackFunc,
      0);
  }
}


System_String_array *UIHorizontalImageRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_String_o *v5; // x20

  v2 = imageName;
  if ( (byte_4C3922F & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_7569/*"Image/00001"*/);
    imageName = (System_String_o *)sub_1C32C20(&StringLiteral_7568/*"Image/"*/);
    byte_4C3922F = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_7568/*"Image/"*/, 0) )
    v2 = System_String__Concat_63518544((System_String_o *)StringLiteral_7568/*"Image/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v2, 0) )
    v2 = (System_String_o *)StringLiteral_7569/*"Image/00001"*/;
  imageName = (System_String_o *)sub_1C32CC8(string___TypeInfo, 1);
  if ( !imageName )
LABEL_13:
    sub_1C32E7C(imageName);
  v5 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_1C32E84(imageName);
  imageName[1].monitor = v2;
  sub_1C32BC4((CGThumbnailListItem_o *)&imageName[1].monitor, (int32_t)v2, v3, v4);
  return (System_String_array *)v5;
}


UnityEngine_Vector2_o UIHorizontalImageRender__GetBodySize(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  UIHorizontalImageRender_c *v2; // x0
  struct UIHorizontalImageRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C39232 & 1) == 0 )
  {
    sub_1C32C20(&UIHorizontalImageRender_TypeInfo);
    byte_4C39232 = 1;
  }
  v2 = UIHorizontalImageRender_TypeInfo;
  if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
    v2 = UIHorizontalImageRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  BODY_SIZE_X = (float)static_fields->BODY_SIZE_X;
  BODY_SIZE_Y = (float)static_fields->BODY_SIZE_Y;
  result.fields.y = BODY_SIZE_Y;
  result.fields.x = BODY_SIZE_X;
  return result;
}


UnityEngine_Vector2_o UIHorizontalImageRender__GetCenterOffset(
        UIHorizontalImageRender_o *this,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  float v3; // s0
  int HEIGHT; // w8
  int v5; // w8
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C39230 & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C39230 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  v3 = 0.0;
  HEIGHT = v2->static_fields->HEIGHT;
  if ( HEIGHT <= 0 )
    v5 = -HEIGHT;
  else
    v5 = 1 - HEIGHT;
  v6 = (float)(v5 >> 1);
  result.fields.y = v6;
  result.fields.x = v3;
  return result;
}


UnityEngine_Vector2_o UIHorizontalImageRender__GetCharacterOffset(const MethodInfo *method)
{
  float v1; // s0
  float v2; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v1 = 0.0;
  v2 = 0.0;
  result.fields.y = v2;
  result.fields.x = v1;
  return result;
}


UnityEngine_Vector2_o UIHorizontalImageRender__GetCharacterOffsetMyroom(const MethodInfo *method)
{
  float v1; // s0
  float v2; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v1 = 0.0;
  v2 = 0.0;
  result.fields.y = v2;
  result.fields.x = v1;
  return result;
}


bool UIHorizontalImageRender__IsBusyMoveAlpha(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  return this->fields.isBusyMoveAlpha;
}


// local variable allocation has failed, the output may be wrong!
void UIHorizontalImageRender__MoveAlpha(
        UIHorizontalImageRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  long double v8; // q8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  float r; // s10
  float g; // s11
  float b; // s12
  UnityEngine_GameObject_o *v16; // x0
  TweenRendererColor_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v25; // x1
  UnityEngine_Color_o v26; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = *(long double *)&alpha;
  if ( (byte_4C3923B & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6010/*"EndMoveAlpha"*/);
    byte_4C3923B = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    method);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( duration <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
  }
  else
  {
    r = this->fields.mColor.fields.r;
    g = this->fields.mColor.fields.g;
    b = this->fields.mColor.fields.b;
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v26.fields.r = r;
    v26.fields.g = g;
    v26.fields.b = b;
    v26.fields.a = *(float *)&v8;
    v17 = TweenRendererColor__Begin(v16, duration, v26, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v17 )
      {
        v17->fields.eventReceiver = gameObject;
        sub_1C32BC4((CGThumbnailListItem_o *)&v17->fields.eventReceiver, (int32_t)gameObject, v19, v20);
        v21 = StringLiteral_6010/*"EndMoveAlpha"*/;
        v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6010/*"EndMoveAlpha"*/;
        sub_1C32BC4((CGThumbnailListItem_o *)&v17->fields.callWhenFinished, v21, v22, v23);
        return;
      }
LABEL_16:
      sub_1C32E7C(gameObject);
    }
  }
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIHorizontalImageRender__EndMoveAlpha(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void UIHorizontalImageRender__MoveAlphaSpeed(
        UIHorizontalImageRender_o *this,
        float speed,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  long double v8; // q8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  float b; // s10
  float r; // s11
  float g; // s12
  float v16; // s0
  float v17; // s9
  UnityEngine_GameObject_o *v18; // x0
  TweenRendererColor_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v27; // x1
  UnityEngine_Color_o v28; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = *(long double *)&alpha;
  if ( (byte_4C3923C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6010/*"EndMoveAlpha"*/);
    byte_4C3923C = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    method);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( speed <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
  }
  else
  {
    b = this->fields.mColor.fields.b;
    r = this->fields.mColor.fields.r;
    g = this->fields.mColor.fields.g;
    v16 = (float)(*(float *)&v8 - this->fields.mColor.fields.a) / speed;
    if ( v16 >= 0.0 )
      v17 = (float)(*(float *)&v8 - this->fields.mColor.fields.a) / speed;
    else
      v17 = -v16;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v28.fields.r = r;
    v28.fields.g = g;
    v28.fields.b = b;
    v28.fields.a = *(float *)&v8;
    v19 = TweenRendererColor__Begin(v18, v17, v28, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v19 )
      {
        v19->fields.eventReceiver = gameObject;
        sub_1C32BC4((CGThumbnailListItem_o *)&v19->fields.eventReceiver, (int32_t)gameObject, v21, v22);
        v23 = StringLiteral_6010/*"EndMoveAlpha"*/;
        v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6010/*"EndMoveAlpha"*/;
        sub_1C32BC4((CGThumbnailListItem_o *)&v19->fields.callWhenFinished, v23, v24, v25);
        return;
      }
LABEL_19:
      sub_1C32E7C(gameObject);
    }
  }
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIHorizontalImageRender__EndMoveAlpha(this, v27);
}


void UIHorizontalImageRender__RecoverSharder(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4C39236 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C32C20(&StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C32C20(&StringLiteral_22277/*"normal"*/);
    sub_1C32C20(&StringLiteral_23497/*"silhouette"*/);
    byte_4C39236 = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23497/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22277/*"normal"*/, 0);
    v5 = &StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  UIHorizontalImageRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIHorizontalImageRender__ReleaseCharacter(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x20
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *mesh; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x20

  if ( (byte_4C39233 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39233 = 1;
  }
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      UIHorizontalImageRender__SetActive(this, 0, v6);
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_30;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
    {
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !bodyFilter )
        goto LABEL_30;
      v8 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v8, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !bodyFilter )
        goto LABEL_30;
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyFilter, 0, 0);
    }
  }
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter )
    goto LABEL_30;
  mesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( bodyFilter )
    {
      v12 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v12, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_1C32E7C(bodyFilter);
  }
LABEL_29:
  this->fields.textureList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.textureList, 0, v10, v11);
}


void UIHorizontalImageRender__SetActive(UIHorizontalImageRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_1C32E7C(bodyRenderer);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyRenderer, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIHorizontalImageRender__SetAlpha(UIHorizontalImageRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIHorizontalImageRender__SetBaseColor(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3

  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
}


void UIHorizontalImageRender__SetCharacter(
        UIHorizontalImageRender_o *this,
        System_String_o *imageName,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    faceType,
    (const MethodInfo *)textureList);
  UIHorizontalImageRender__SetCharacterRender(this, v6);
}


void UIHorizontalImageRender__SetCharacterRender(UIHorizontalImageRender_o *this, const MethodInfo *method)
{
  __int64 bodyRenderer; // x0
  int v4; // w8
  int v5; // w9
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v7; // x20
  bool v8; // w0
  System_String_o *filterName; // x20
  bool v10; // w21
  bool v11; // w0
  __int64 *v12; // x8
  UnityEngine_Shader_o *v13; // x21
  UnityEngine_Material_o *v14; // x20
  struct UnityEngine_Texture2D_array *v15; // x8
  struct UnityEngine_Texture2D_array *v16; // x8
  UnityEngine_Mesh_o *v17; // x20
  UIHorizontalImageRender_c *v18; // x8
  __int64 v19; // x21
  unsigned int v20; // w9
  struct UIHorizontalImageRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int TOP_Y; // s1
  struct UIHorizontalImageRender_StaticFields *v24; // x8
  int v25; // s0
  int RIGHT_X; // s1
  struct UIHorizontalImageRender_StaticFields *v27; // x8
  int BOTTOM_Y; // s0
  int v29; // s1
  struct UIHorizontalImageRender_StaticFields *v30; // x8
  int v31; // s0
  int v32; // s1
  struct UIHorizontalImageRender_StaticFields *v33; // x8
  int v34; // s0
  int v35; // s1
  int32x2_t v36; // d0
  struct UIHorizontalImageRender_StaticFields *v37; // x8
  int v38; // s0
  int v39; // s1
  struct UIHorizontalImageRender_StaticFields *v40; // x8
  int v41; // s0
  int RIGHT_X2; // s1
  __int64 v43; // x21
  unsigned int v44; // w9
  float32x2_t *v45; // x10
  float v46; // s1
  float32x2_t *v47; // x10
  float v48; // s0
  float32x2_t *v49; // x10
  float v50; // s0
  float32x2_t *v51; // x10
  float v52; // s0
  float32x2_t *v53; // x10
  float v54; // s0
  float32x2_t *v55; // x10
  float v56; // s0
  float32x2_t *v57; // x10
  float v58; // s0
  float32x2_t *v59; // x8
  float v60; // s0
  unsigned int v61; // w8
  struct UIHorizontalImageRender_StaticFields *v62; // x9
  float BODY_V; // s2
  struct UIHorizontalImageRender_StaticFields *v64; // x9
  float v65; // s0
  struct UIHorizontalImageRender_StaticFields *v66; // x9
  float32x2_t v67; // d0
  float32x2_t v68; // d1
  __int64 v69; // d2
  struct UIHorizontalImageRender_StaticFields *v70; // x9
  float BODY_V2; // s2
  struct UIHorizontalImageRender_StaticFields *v72; // x9
  float v73; // s0
  struct UIHorizontalImageRender_StaticFields *v74; // x8
  float32x2_t v75; // d0
  float32x2_t v76; // d1
  __int64 v77; // d2
  unsigned int v78; // w8
  struct UIHorizontalImageRender_StaticFields *v79; // x9
  float v80; // s2
  struct UIHorizontalImageRender_StaticFields *v81; // x9
  float v82; // s0
  struct UIHorizontalImageRender_StaticFields *v83; // x9
  float32x2_t v84; // d0
  float32x2_t v85; // d1
  __int64 v86; // d2
  struct UIHorizontalImageRender_StaticFields *v87; // x9
  float v88; // s2
  struct UIHorizontalImageRender_StaticFields *v89; // x9
  float v90; // s0
  struct UIHorizontalImageRender_StaticFields *v91; // x8
  float32x2_t v92; // d0
  float32x2_t v93; // d1
  __int64 v94; // d2
  System_Array_o *v95; // x0
  System_RuntimeFieldHandle_o v96; // x1
  System_Int32_array *v97; // x21
  long double v98; // q3
  _BOOL4 isTalkMask; // w9
  bool v100; // zf
  UIHorizontalImageRender_c *klass; // x8
  long double v102; // q0
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x2

  if ( (byte_4C39234 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&UnityEngine_Mesh_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__D34B481CF7365656E79A8F13CBD15BBF6B12B11B23727F2345088914BFC15F80);
    sub_1C32C20(&UIHorizontalImageRender_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector2___TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3___TypeInfo);
    sub_1C32C20(&StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C32C20(&StringLiteral_16262/*"_MainTex"*/);
    sub_1C32C20(&StringLiteral_4930/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/);
    sub_1C32C20(&StringLiteral_4927/*"Custom/Sprite-ScriptActionFigureNormal2"*/);
    sub_1C32C20(&StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C32C20(&StringLiteral_22277/*"normal"*/);
    sub_1C32C20(&StringLiteral_16357/*"_SubTex"*/);
    sub_1C32C20(&StringLiteral_23497/*"silhouette"*/);
    byte_4C39234 = 1;
  }
  bodyRenderer = (__int64)UIHorizontalImageRender_TypeInfo;
  if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
    bodyRenderer = (__int64)UIHorizontalImageRender_TypeInfo;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(bodyRenderer + 184) + 32LL);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v4;
  v5 = *(_DWORD *)(*(_QWORD *)(bodyRenderer + 184) + 32LL);
  textureList = this->fields.textureList;
  this->fields.dispOffset.fields.x = 0.0;
  this->fields.dispOffset.fields.y = (float)-v5;
  if ( !textureList )
    goto LABEL_70;
  if ( LODWORD(textureList->max_length) <= 1 )
    goto LABEL_69;
  v7 = (UnityEngine_Object_o *)textureList->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
  filterName = this->fields.filterName;
  v10 = v8;
  v11 = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23497/*"silhouette"*/, 0);
  if ( v10 )
  {
    if ( v11 )
    {
      v12 = &StringLiteral_4930/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/;
    }
    else
    {
      System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22277/*"normal"*/, 0);
      v12 = &StringLiteral_4927/*"Custom/Sprite-ScriptActionFigureNormal2"*/;
    }
  }
  else if ( v11 )
  {
    v12 = &StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22277/*"normal"*/, 0);
    v12 = &StringLiteral_4926/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  v13 = UnityEngine_Shader__Find((System_String_o *)*v12, 0);
  v14 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v14, v13, 0);
  v15 = this->fields.textureList;
  if ( !v15 )
    goto LABEL_70;
  if ( !LODWORD(v15->max_length) )
    goto LABEL_69;
  if ( !v14 )
    goto LABEL_70;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v15->m_Items[0],
    0);
  v16 = this->fields.textureList;
  if ( !v16 )
    goto LABEL_70;
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_69;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16357/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  bodyRenderer = (__int64)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_70;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v14, 0);
  v17 = (UnityEngine_Mesh_o *)sub_1C32E6C(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v17, 0);
  bodyRenderer = sub_1C32CC8(UnityEngine_Vector3___TypeInfo, 8);
  v18 = UIHorizontalImageRender_TypeInfo;
  v19 = bodyRenderer;
  if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
    v18 = UIHorizontalImageRender_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_70;
  v20 = *(_DWORD *)(v19 + 24);
  if ( !v20 )
    goto LABEL_69;
  static_fields = v18->static_fields;
  LEFT_X = static_fields->LEFT_X;
  TOP_Y = static_fields->TOP_Y;
  *(_DWORD *)(v19 + 40) = 0;
  *(float *)(v19 + 32) = (float)LEFT_X;
  *(float *)(v19 + 36) = (float)TOP_Y;
  if ( v20 == 1 )
    goto LABEL_69;
  v24 = UIHorizontalImageRender_TypeInfo->static_fields;
  v25 = v24->TOP_Y;
  RIGHT_X = v24->RIGHT_X;
  *(_DWORD *)(v19 + 52) = 0;
  *(float *)(v19 + 44) = (float)RIGHT_X;
  *(float *)(v19 + 48) = (float)v25;
  if ( v20 <= 2 )
    goto LABEL_69;
  v27 = UIHorizontalImageRender_TypeInfo->static_fields;
  BOTTOM_Y = v27->BOTTOM_Y;
  v29 = v27->LEFT_X;
  *(_DWORD *)(v19 + 64) = 0;
  *(float *)(v19 + 56) = (float)v29;
  *(float *)(v19 + 60) = (float)BOTTOM_Y;
  if ( v20 == 3 )
    goto LABEL_69;
  v30 = UIHorizontalImageRender_TypeInfo->static_fields;
  v31 = v30->BOTTOM_Y;
  v32 = v30->RIGHT_X;
  *(_DWORD *)(v19 + 76) = 0;
  *(float *)(v19 + 68) = (float)v32;
  *(float *)(v19 + 72) = (float)v31;
  if ( v20 <= 4 )
    goto LABEL_69;
  v33 = UIHorizontalImageRender_TypeInfo->static_fields;
  v34 = v33->TOP_Y;
  v35 = v33->RIGHT_X;
  *(_DWORD *)(v19 + 88) = 0;
  *(float *)(v19 + 80) = (float)v35;
  *(float *)(v19 + 84) = (float)v34;
  if ( v20 == 5 )
    goto LABEL_69;
  v36.n64_u64[0] = *(unsigned __int64 *)&UIHorizontalImageRender_TypeInfo->static_fields->RIGHT_X2;
  *(_DWORD *)(v19 + 100) = 0;
  *(float32x2_t *)(v19 + 92) = vcvt_f32_s32(v36);
  if ( v20 <= 6 )
    goto LABEL_69;
  v37 = UIHorizontalImageRender_TypeInfo->static_fields;
  v38 = v37->BOTTOM_Y;
  v39 = v37->RIGHT_X;
  *(_DWORD *)(v19 + 112) = 0;
  *(float *)(v19 + 104) = (float)v39;
  *(float *)(v19 + 108) = (float)v38;
  if ( v20 == 7 )
    goto LABEL_69;
  v40 = UIHorizontalImageRender_TypeInfo->static_fields;
  v41 = v40->BOTTOM_Y;
  RIGHT_X2 = v40->RIGHT_X2;
  *(_DWORD *)(v19 + 124) = 0;
  *(float *)(v19 + 116) = (float)RIGHT_X2;
  *(float *)(v19 + 120) = (float)v41;
  if ( !v17 )
    goto LABEL_70;
  UnityEngine_Mesh__set_vertices(v17, (UnityEngine_Vector3_array *)v19, 0);
  bodyRenderer = sub_1C32CC8(UnityEngine_Vector3___TypeInfo, 8);
  v43 = bodyRenderer;
  if ( !byte_4C313DA )
  {
    bodyRenderer = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313DA = 1;
  }
  if ( !v43 )
LABEL_70:
    sub_1C32E7C(bodyRenderer);
  v44 = *(_DWORD *)(v43 + 24);
  if ( !v44 )
    goto LABEL_69;
  v45 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v46 = -v45[10].n64_f32[0];
  *(float32x2_t *)(v43 + 32) = vneg_f32(v45[9]);
  *(float *)(v43 + 40) = v46;
  if ( v44 == 1 )
    goto LABEL_69;
  v47 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v48 = -v47[10].n64_f32[0];
  *(float32x2_t *)(v43 + 44) = vneg_f32(v47[9]);
  *(float *)(v43 + 52) = v48;
  if ( v44 <= 2 )
    goto LABEL_69;
  v49 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v50 = -v49[10].n64_f32[0];
  *(float32x2_t *)(v43 + 56) = vneg_f32(v49[9]);
  *(float *)(v43 + 64) = v50;
  if ( v44 == 3 )
    goto LABEL_69;
  v51 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v52 = -v51[10].n64_f32[0];
  *(float32x2_t *)(v43 + 68) = vneg_f32(v51[9]);
  *(float *)(v43 + 76) = v52;
  if ( v44 <= 4 )
    goto LABEL_69;
  v53 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v54 = -v53[10].n64_f32[0];
  *(float32x2_t *)(v43 + 80) = vneg_f32(v53[9]);
  *(float *)(v43 + 88) = v54;
  if ( v44 == 5 )
    goto LABEL_69;
  v55 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v56 = -v55[10].n64_f32[0];
  *(float32x2_t *)(v43 + 92) = vneg_f32(v55[9]);
  *(float *)(v43 + 100) = v56;
  if ( v44 <= 6 )
    goto LABEL_69;
  v57 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v58 = -v57[10].n64_f32[0];
  *(float32x2_t *)(v43 + 104) = vneg_f32(v57[9]);
  *(float *)(v43 + 112) = v58;
  if ( v44 == 7 )
    goto LABEL_69;
  v59 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v60 = -v59[10].n64_f32[0];
  *(float32x2_t *)(v43 + 116) = vneg_f32(v59[9]);
  *(float *)(v43 + 124) = v60;
  UnityEngine_Mesh__set_normals(v17, (UnityEngine_Vector3_array *)v43, 0);
  bodyRenderer = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 8);
  if ( !bodyRenderer )
    goto LABEL_70;
  v61 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v61 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIHorizontalImageRender_TypeInfo->static_fields->BODY_U;
  if ( v61 == 1 )
    goto LABEL_69;
  v62 = UIHorizontalImageRender_TypeInfo->static_fields;
  BODY_V = v62->BODY_V;
  *(float *)(bodyRenderer + 40) = v62->BODY_U + v62->BODY_W;
  *(float *)(bodyRenderer + 44) = BODY_V;
  if ( v61 <= 2 )
    goto LABEL_69;
  v64 = UIHorizontalImageRender_TypeInfo->static_fields;
  v65 = v64->BODY_V - v64->BODY_H;
  *(float *)(bodyRenderer + 48) = v64->BODY_U;
  *(float *)(bodyRenderer + 52) = v65;
  if ( v61 == 3 )
    goto LABEL_69;
  v66 = UIHorizontalImageRender_TypeInfo->static_fields;
  v67.n64_u64[0] = *(unsigned __int64 *)&v66->BODY_U;
  v68.n64_u64[0] = *(unsigned __int64 *)&v66->BODY_W;
  LODWORD(v69) = vadd_f32(v67, v68).n64_u32[0];
  HIDWORD(v69) = vsub_f32(v67, v68).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v69;
  if ( v61 <= 4 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 64) = *(_QWORD *)&UIHorizontalImageRender_TypeInfo->static_fields->BODY_U2;
  if ( v61 == 5 )
    goto LABEL_69;
  v70 = UIHorizontalImageRender_TypeInfo->static_fields;
  BODY_V2 = v70->BODY_V2;
  *(float *)(bodyRenderer + 72) = v70->BODY_U2 + v70->BODY_W;
  *(float *)(bodyRenderer + 76) = BODY_V2;
  if ( v61 <= 6 )
    goto LABEL_69;
  v72 = UIHorizontalImageRender_TypeInfo->static_fields;
  v73 = v72->BODY_V2 - v72->BODY_H;
  *(float *)(bodyRenderer + 80) = v72->BODY_U2;
  *(float *)(bodyRenderer + 84) = v73;
  if ( v61 == 7 )
    goto LABEL_69;
  v74 = UIHorizontalImageRender_TypeInfo->static_fields;
  v75.n64_u64[0] = *(unsigned __int64 *)&v74->BODY_U2;
  v76.n64_u64[0] = *(unsigned __int64 *)&v74->BODY_W;
  LODWORD(v77) = vadd_f32(v75, v76).n64_u32[0];
  HIDWORD(v77) = vsub_f32(v75, v76).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 88) = v77;
  UnityEngine_Mesh__set_uv(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = sub_1C32CC8(UnityEngine_Vector2___TypeInfo, 8);
  if ( !bodyRenderer )
    goto LABEL_70;
  v78 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v78 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIHorizontalImageRender_TypeInfo->static_fields->BODY_U;
  if ( v78 == 1 )
    goto LABEL_69;
  v79 = UIHorizontalImageRender_TypeInfo->static_fields;
  v80 = v79->BODY_V;
  *(float *)(bodyRenderer + 40) = v79->BODY_U + v79->BODY_W;
  *(float *)(bodyRenderer + 44) = v80;
  if ( v78 <= 2 )
    goto LABEL_69;
  v81 = UIHorizontalImageRender_TypeInfo->static_fields;
  v82 = v81->BODY_V - v81->BODY_H;
  *(float *)(bodyRenderer + 48) = v81->BODY_U;
  *(float *)(bodyRenderer + 52) = v82;
  if ( v78 == 3 )
    goto LABEL_69;
  v83 = UIHorizontalImageRender_TypeInfo->static_fields;
  v84.n64_u64[0] = *(unsigned __int64 *)&v83->BODY_U;
  v85.n64_u64[0] = *(unsigned __int64 *)&v83->BODY_W;
  LODWORD(v86) = vadd_f32(v84, v85).n64_u32[0];
  HIDWORD(v86) = vsub_f32(v84, v85).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v86;
  if ( v78 <= 4 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 64) = *(_QWORD *)&UIHorizontalImageRender_TypeInfo->static_fields->BODY_U2;
  if ( v78 == 5 )
    goto LABEL_69;
  v87 = UIHorizontalImageRender_TypeInfo->static_fields;
  v88 = v87->BODY_V2;
  *(float *)(bodyRenderer + 72) = v87->BODY_U2 + v87->BODY_W;
  *(float *)(bodyRenderer + 76) = v88;
  if ( v78 <= 6
    || (v89 = UIHorizontalImageRender_TypeInfo->static_fields,
        v90 = v89->BODY_V2 - v89->BODY_H,
        *(float *)(bodyRenderer + 80) = v89->BODY_U2,
        *(float *)(bodyRenderer + 84) = v90,
        v78 == 7) )
  {
LABEL_69:
    sub_1C32E84(bodyRenderer);
  }
  v91 = UIHorizontalImageRender_TypeInfo->static_fields;
  v92.n64_u64[0] = *(unsigned __int64 *)&v91->BODY_U2;
  v93.n64_u64[0] = *(unsigned __int64 *)&v91->BODY_W;
  LODWORD(v94) = vadd_f32(v92, v93).n64_u32[0];
  HIDWORD(v94) = vsub_f32(v92, v93).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 88) = v94;
  UnityEngine_Mesh__set_uv2(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v95 = (System_Array_o *)sub_1C32CC8(int___TypeInfo, 12);
  v96.fields.value = Field__PrivateImplementationDetails__D34B481CF7365656E79A8F13CBD15BBF6B12B11B23727F2345088914BFC15F80;
  v97 = (System_Int32_array *)v95;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v95, v96, 0);
  UnityEngine_Mesh__set_triangles(v17, v97, 0);
  bodyRenderer = (__int64)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_70;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v17, 0);
  UnityEngine_Mesh__RecalculateNormals(v17, 0);
  UnityEngine_Mesh__RecalculateBounds(v17, 0);
  isTalkMask = this->fields.isTalkMask;
  v100 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v102) = 1.0;
  if ( !v100 )
    *(float *)&v102 = 0.1;
  if ( isTalkMask )
    *(float *)&v102 = *(float *)&v102 * 0.5;
  *(float *)&v98 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v102,
    v102,
    v102,
    v98);
  UIHorizontalImageRender__SetFilterColor(this, this->fields.filterColor, v103);
  UIHorizontalImageRender__SetActive(this, 1, v104);
}


void UIHorizontalImageRender__SetDepth(UIHorizontalImageRender_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float x; // s9
  float y; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        x = localPosition.fields.x,
        y = localPosition.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(transform);
  }
  v9.fields.z = -d;
  v9.fields.x = x;
  v9.fields.y = y;
  UnityEngine_Transform__set_localPosition(transform, v9, 0);
}


void UIHorizontalImageRender__SetFilter(
        UIHorizontalImageRender_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  this->fields.filterName = filterName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
  UIHorizontalImageRender__RecoverSharder(this, v10);
  v12.fields.b = b;
  v12.fields.a = a;
  v12.fields.r = r;
  v12.fields.g = g;
  UIHorizontalImageRender__SetFilterColor(this, v12, v11);
}


void UIHorizontalImageRender__SetFilterColor(
        UIHorizontalImageRender_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4C39238 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16221/*"_FilterColor"*/);
    byte_4C39238 = 1;
  }
  textureList = this->fields.textureList;
  this->fields.filterColor.fields.r = r;
  this->fields.filterColor.fields.g = g;
  this->fields.filterColor.fields.b = b;
  this->fields.filterColor.fields.a = a;
  if ( textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
      sub_1C32E7C(bodyRenderer);
    }
    v10.fields.b = b;
    v10.fields.a = a;
    v10.fields.r = r;
    v10.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16221/*"_FilterColor"*/,
      v10,
      0);
  }
}


void UIHorizontalImageRender__SetGradation(UIHorizontalImageRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C39239 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16234/*"_Gradation"*/);
    byte_4C39239 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71089776(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16234/*"_Gradation"*/,
         0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
      if ( bodyRenderer )
      {
        UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)bodyRenderer,
          (System_String_o *)StringLiteral_16234/*"_Gradation"*/,
          g,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C32E7C(bodyRenderer);
  }
}


void UIHorizontalImageRender__SetLayer(UIHorizontalImageRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v7; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIHorizontalImageRender__SetLayer_43876848(this, transform, layer, v7);
  }
}


void UIHorizontalImageRender__SetLayer_43876848(
        UIHorizontalImageRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIHorizontalImageRender_o *v6; // x21
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 naturalAligment; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v6 = this;
  if ( (byte_4C3923E & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (UIHorizontalImageRender_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C3923E = 1;
  }
  if ( !tf
    || (this = (UIHorizontalImageRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_17:
      v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C3313C(v16);
        goto LABEL_33;
      }
    }
    UIHorizontalImageRender__SetLayer_43876848(v6, v16, layer, v17);
  }
  v19 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_28;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_28:
      v24 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  }
}


void UIHorizontalImageRender__SetMaskInteraction(
        UIHorizontalImageRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  UnityEngine_Renderer_o *bodyRenderer; // x8
  int32_t v7; // w19

  if ( (byte_4C3923F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16350/*"_StencilComp"*/);
    byte_4C3923F = 1;
  }
  RenderingCompareFunction = (UnityEngine_Material_o *)UITweenRenderer__GetRenderingCompareFunction(
                                                         (UITweenRenderer_o *)this,
                                                         maskInteraction,
                                                         0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (v7 = (int)RenderingCompareFunction,
        (RenderingCompareFunction = UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0) )
  {
    sub_1C32E7C(RenderingCompareFunction);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16350/*"_StencilComp"*/, v7, 0);
}


void UIHorizontalImageRender__SetShadow(UIHorizontalImageRender_o *this, bool isShadow, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3

  this->fields.isShadow = isShadow;
  LODWORD(v3) = 1.0;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIHorizontalImageRender__SetSharder(
        UIHorizontalImageRender_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v8; // x21

  if ( (byte_4C39235 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1318/*"2"*/);
    byte_4C39235 = 1;
  }
  if ( this->fields.textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Object__op_Equality(material, 0, 0);
      if ( ((unsigned __int8)bodyRenderer & 1) != 0 )
        return;
      textureList = this->fields.textureList;
      if ( textureList )
      {
        if ( LODWORD(textureList->max_length) <= 1 )
          sub_1C32E84(bodyRenderer);
        v8 = (UnityEngine_Object_o *)textureList->m_Items[1];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
          shaderName = System_String__Concat_63518544(shaderName, (System_String_o *)StringLiteral_1318/*"2"*/, 0);
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(shaderName, 0);
        if ( material )
        {
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, (UnityEngine_Shader_o *)bodyRenderer, 0);
          return;
        }
      }
    }
    sub_1C32E7C(bodyRenderer);
  }
}


void UIHorizontalImageRender__SetSortingOrder(UIHorizontalImageRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_1C32E7C(0);
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIHorizontalImageRender__SetTalkMask(UIHorizontalImageRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  UIHorizontalImageRender_c *klass; // x8

  LODWORD(v3) = 1036831949;
  klass = this->klass;
  if ( !this->fields.isShadow )
    *(float *)&v3 = 1.0;
  this->fields.isTalkMask = isMask;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIHorizontalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIHorizontalImageRender__SetTweenColor(
        UIHorizontalImageRender_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Renderer_o *bodyRenderer; // x0
  bool v9; // w1
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4C39231 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16171/*"_Color"*/);
    byte_4C39231 = 1;
  }
  v10.fields.r = r;
  v10.fields.g = g;
  v10.fields.b = b;
  v10.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v10, 0);
  if ( !this->fields.textureList )
    goto LABEL_9;
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_12;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_12;
  v11.fields.r = r;
  v11.fields.g = g;
  v11.fields.b = b;
  v11.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16171/*"_Color"*/, v11, 0);
  if ( a <= 0.0 )
  {
LABEL_9:
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      v9 = 0;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C32E7C(bodyRenderer);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_12;
  v9 = 1;
LABEL_11:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v9, 0);
}


void UIHorizontalImageRender__SetVolume(UIHorizontalImageRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C3923A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16407/*"_Volume"*/);
    byte_4C3923A = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71089776(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16407/*"_Volume"*/,
         0) )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
      if ( bodyRenderer )
      {
        UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)bodyRenderer,
          (System_String_o *)StringLiteral_16407/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C32E7C(bodyRenderer);
  }
}


void UIHorizontalImageRender__SetWipeTexture(
        UIHorizontalImageRender_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  void *bodyRenderer; // x0
  float x; // s8
  int v7; // s9
  int32_t height; // w20
  UIHorizontalImageRender_c *v9; // x8
  struct UIHorizontalImageRender_StaticFields *static_fields; // x8
  float y; // s8
  int32_t BODY_SIZE_Y; // w19
  int MAIN_SIZE_Y; // s9

  if ( (byte_4C39237 & 1) == 0 )
  {
    sub_1C32C20(&UIHorizontalImageRender_TypeInfo);
    sub_1C32C20(&StringLiteral_16413/*"_WipeY"*/);
    sub_1C32C20(&StringLiteral_16411/*"_WipeTex"*/);
    sub_1C32C20(&StringLiteral_16412/*"_WipeX"*/);
    byte_4C39237 = 1;
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_16411/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71089776(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16412/*"_WipeX"*/,
         0) )
  {
    x = this->fields.figureOffset.fields.x;
    bodyRenderer = UIHorizontalImageRender_TypeInfo;
    if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
      bodyRenderer = UIHorizontalImageRender_TypeInfo;
    }
    if ( !this->fields.bodyRenderer )
      goto LABEL_22;
    v7 = **((_DWORD **)bodyRenderer + 23);
    bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this->fields.bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_22;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16412/*"_WipeX"*/,
      (float)-x / (float)v7,
      0);
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71089776(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16413/*"_WipeY"*/,
         0) )
  {
    height = UnityEngine_Screen__get_height(0);
    v9 = UIHorizontalImageRender_TypeInfo;
    if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
      v9 = UIHorizontalImageRender_TypeInfo;
    }
    bodyRenderer = this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      static_fields = v9->static_fields;
      y = this->fields.figureOffset.fields.y;
      BODY_SIZE_Y = static_fields->BODY_SIZE_Y;
      MAIN_SIZE_Y = static_fields->MAIN_SIZE_Y;
      bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
      if ( bodyRenderer )
      {
        UnityEngine_Material__SetFloat(
          (UnityEngine_Material_o *)bodyRenderer,
          (System_String_o *)StringLiteral_16413/*"_WipeY"*/,
          (float)((float)((float)(height - BODY_SIZE_Y) * 0.5) - y) / (float)MAIN_SIZE_Y,
          0);
        return;
      }
    }
LABEL_22:
    sub_1C32E7C(bodyRenderer);
  }
}