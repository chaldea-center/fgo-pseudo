void UIImageRender___cctor(const MethodInfo *method)
{
  struct UIImageRender_StaticFields *static_fields; // x8

  if ( (byte_4CB7B99 & 1) == 0 )
  {
    sub_1C6BA08(&UIImageRender_TypeInfo);
    byte_4CB7B99 = 1;
  }
  static_fields = UIImageRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_CECC90;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_CED0B0;
  *(_OWORD *)&static_fields->BODY_U = xmmword_CEC830;
}


void UIImageRender___ctor(UIImageRender_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB7B98 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22366/*"normal"*/);
    byte_4CB7B98 = 1;
  }
  v5 = StringLiteral_22366/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22366/*"normal"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.filterName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIImageRender__EndMoveAlpha(UIImageRender_o *this, const MethodInfo *method)
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
  __int64 v12; // x1

  if ( (byte_4CB7B95 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B95 = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
  moveAlphaCallbackObject = (UnityEngine_Object_o *)this->fields.moveAlphaCallbackObject;
  moveAlphaCallbackFunc = this->fields.moveAlphaCallbackFunc;
  this->fields.moveAlphaCallbackObject = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v9, v10);
  this->fields.isBusyMoveAlpha = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v11 )
  {
    if ( !moveAlphaCallbackObject )
      sub_1C6BC60(v11, v12);
    UnityEngine_GameObject__SendMessage_71641044(
      (UnityEngine_GameObject_o *)moveAlphaCallbackObject,
      moveAlphaCallbackFunc,
      0);
  }
}


System_String_array *UIImageRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_String_o *v5; // x20

  v2 = imageName;
  if ( (byte_4CB7B87 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_7567/*"Image/00001"*/);
    imageName = (System_String_o *)sub_1C6BA08(&StringLiteral_7566/*"Image/"*/);
    byte_4CB7B87 = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_7566/*"Image/"*/, 0) )
    v2 = System_String__Concat_63966792((System_String_o *)StringLiteral_7566/*"Image/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v2, 0) )
    v2 = (System_String_o *)StringLiteral_7567/*"Image/00001"*/;
  imageName = (System_String_o *)sub_1C6BAB0(string___TypeInfo, 1);
  if ( !imageName )
LABEL_13:
    sub_1C6BC60(imageName, method);
  v5 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_1C6BC68(imageName);
  imageName[1].monitor = v2;
  sub_1C6B9AC((CGThumbnailListItem_o *)&imageName[1].monitor, (int32_t)v2, v3, v4);
  return (System_String_array *)v5;
}


UnityEngine_Vector2_o UIImageRender__GetBodySize(UIImageRender_o *this, const MethodInfo *method)
{
  UIImageRender_c *v2; // x0
  struct UIImageRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CB7B8A & 1) == 0 )
  {
    sub_1C6BA08(&UIImageRender_TypeInfo);
    byte_4CB7B8A = 1;
  }
  v2 = UIImageRender_TypeInfo;
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
    v2 = UIImageRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  BODY_SIZE_X = (float)static_fields->BODY_SIZE_X;
  BODY_SIZE_Y = (float)static_fields->BODY_SIZE_Y;
  result.fields.y = BODY_SIZE_Y;
  result.fields.x = BODY_SIZE_X;
  return result;
}


UnityEngine_Vector2_o UIImageRender__GetCenterOffset(UIImageRender_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  float v3; // s0
  int HEIGHT; // w8
  int v5; // w8
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CB7B88 & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB7B88 = 1;
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


UnityEngine_Vector2_o UIImageRender__GetCharacterOffset(const MethodInfo *method)
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


UnityEngine_Vector2_o UIImageRender__GetCharacterOffsetMyroom(const MethodInfo *method)
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


bool UIImageRender__IsBusyMoveAlpha(UIImageRender_o *this, const MethodInfo *method)
{
  return this->fields.isBusyMoveAlpha;
}


// local variable allocation has failed, the output may be wrong!
void UIImageRender__MoveAlpha(
        UIImageRender_o *this,
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
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v26; // x1
  UnityEngine_Color_o v27; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = *(long double *)&alpha;
  if ( (byte_4CB7B93 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_6001/*"EndMoveAlpha"*/);
    byte_4CB7B93 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    method);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( duration <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
    v27.fields.r = r;
    v27.fields.g = g;
    v27.fields.b = b;
    v27.fields.a = *(float *)&v8;
    v17 = TweenRendererColor__Begin(v16, duration, v27, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v17 )
      {
        v17->fields.eventReceiver = gameObject;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v17->fields.eventReceiver, (int32_t)gameObject, v20, v21);
        v22 = StringLiteral_6001/*"EndMoveAlpha"*/;
        v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6001/*"EndMoveAlpha"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v17->fields.callWhenFinished, v22, v23, v24);
        return;
      }
LABEL_16:
      sub_1C6BC60(gameObject, v19);
    }
  }
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIImageRender__EndMoveAlpha(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void UIImageRender__MoveAlphaSpeed(
        UIImageRender_o *this,
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
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v28; // x1
  UnityEngine_Color_o v29; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = *(long double *)&alpha;
  if ( (byte_4CB7B94 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_6001/*"EndMoveAlpha"*/);
    byte_4CB7B94 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    method);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( speed <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
    v29.fields.r = r;
    v29.fields.g = g;
    v29.fields.b = b;
    v29.fields.a = *(float *)&v8;
    v19 = TweenRendererColor__Begin(v18, v17, v29, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v19 )
      {
        v19->fields.eventReceiver = gameObject;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields.eventReceiver, (int32_t)gameObject, v22, v23);
        v24 = StringLiteral_6001/*"EndMoveAlpha"*/;
        v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6001/*"EndMoveAlpha"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields.callWhenFinished, v24, v25, v26);
        return;
      }
LABEL_19:
      sub_1C6BC60(gameObject, v21);
    }
  }
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIImageRender__EndMoveAlpha(this, v28);
}


void UIImageRender__RecoverSharder(UIImageRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4CB7B8E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C6BA08(&StringLiteral_4916/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C6BA08(&StringLiteral_22366/*"normal"*/);
    sub_1C6BA08(&StringLiteral_23593/*"silhouette"*/);
    byte_4CB7B8E = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23593/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22366/*"normal"*/, 0);
    v5 = &StringLiteral_4916/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  UIImageRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIImageRender__ReleaseCharacter(UIImageRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *mesh; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *v13; // x20

  if ( (byte_4CB7B8B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B8B = 1;
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
      UIImageRender__SetActive(this, 0, v7);
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
      v9 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v9, 0);
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
      v13 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v13, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_1C6BC60(bodyFilter, v4);
  }
LABEL_29:
  this->fields.textureList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.textureList, 0, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void UIImageRender__SetActive(UIImageRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_1C6BC60(bodyRenderer, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyRenderer, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIImageRender__SetAlpha(UIImageRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIImageRender__SetBaseColor(UIImageRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3

  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
}


void UIImageRender__SetCharacter(
        UIImageRender_o *this,
        System_String_o *imageName,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1

  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    faceType,
    (const MethodInfo *)textureList);
  UIImageRender__SetCharacterRender(this, v6);
}


void UIImageRender__SetCharacterRender(UIImageRender_o *this, const MethodInfo *method)
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
  UIImageRender_c *v18; // x8
  __int64 v19; // x21
  unsigned int v20; // w9
  struct UIImageRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int TOP_Y; // s1
  int32x2_t v24; // d0
  struct UIImageRender_StaticFields *v25; // x8
  int BOTTOM_Y; // s0
  int v27; // s1
  struct UIImageRender_StaticFields *v28; // x8
  int v29; // s0
  int RIGHT_X; // s1
  __int64 v31; // x21
  unsigned int v32; // w9
  float32x2_t *v33; // x10
  float v34; // s1
  float32x2_t *v35; // x10
  float v36; // s0
  float32x2_t *v37; // x10
  float v38; // s0
  float32x2_t *v39; // x8
  float v40; // s0
  unsigned int v41; // w8
  struct UIImageRender_StaticFields *v42; // x9
  float BODY_V; // s2
  struct UIImageRender_StaticFields *v44; // x9
  float v45; // s0
  struct UIImageRender_StaticFields *v46; // x8
  float32x2_t v47; // d0
  float32x2_t v48; // d1
  __int64 v49; // d2
  unsigned int v50; // w8
  struct UIImageRender_StaticFields *v51; // x9
  float v52; // s2
  struct UIImageRender_StaticFields *v53; // x9
  float v54; // s0
  struct UIImageRender_StaticFields *v55; // x8
  float32x2_t v56; // d0
  float32x2_t v57; // d1
  __int64 v58; // d2
  System_Array_o *v59; // x0
  System_RuntimeFieldHandle_o v60; // x1
  System_Int32_array *v61; // x21
  long double v62; // q3
  _BOOL4 isTalkMask; // w9
  bool v64; // zf
  UIImageRender_c *klass; // x8
  long double v66; // q0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2

  if ( (byte_4CB7B8C & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&UnityEngine_Mesh_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__B2CF02C10F1F309AC8FB52A3CCE888191E73C7E1C5A0D699CA4CBBE2C76F2C0F);
    sub_1C6BA08(&UIImageRender_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector2___TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    sub_1C6BA08(&StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C6BA08(&StringLiteral_16258/*"_MainTex"*/);
    sub_1C6BA08(&StringLiteral_4920/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/);
    sub_1C6BA08(&StringLiteral_4917/*"Custom/Sprite-ScriptActionFigureNormal2"*/);
    sub_1C6BA08(&StringLiteral_4916/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C6BA08(&StringLiteral_22366/*"normal"*/);
    sub_1C6BA08(&StringLiteral_16353/*"_SubTex"*/);
    sub_1C6BA08(&StringLiteral_23593/*"silhouette"*/);
    byte_4CB7B8C = 1;
  }
  bodyRenderer = (__int64)UIImageRender_TypeInfo;
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
    bodyRenderer = (__int64)UIImageRender_TypeInfo;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(bodyRenderer + 184) + 24LL);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v4;
  v5 = *(_DWORD *)(*(_QWORD *)(bodyRenderer + 184) + 24LL);
  textureList = this->fields.textureList;
  this->fields.dispOffset.fields.x = 0.0;
  this->fields.dispOffset.fields.y = (float)-v5;
  if ( !textureList )
    goto LABEL_54;
  if ( LODWORD(textureList->max_length) <= 1 )
    goto LABEL_53;
  v7 = (UnityEngine_Object_o *)textureList->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
  filterName = this->fields.filterName;
  v10 = v8;
  v11 = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23593/*"silhouette"*/, 0);
  if ( v10 )
  {
    if ( v11 )
    {
      v12 = &StringLiteral_4920/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/;
    }
    else
    {
      System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22366/*"normal"*/, 0);
      v12 = &StringLiteral_4917/*"Custom/Sprite-ScriptActionFigureNormal2"*/;
    }
  }
  else if ( v11 )
  {
    v12 = &StringLiteral_4919/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22366/*"normal"*/, 0);
    v12 = &StringLiteral_4916/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  v13 = UnityEngine_Shader__Find((System_String_o *)*v12, 0);
  v14 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v14, v13, 0);
  v15 = this->fields.textureList;
  if ( !v15 )
    goto LABEL_54;
  if ( !LODWORD(v15->max_length) )
    goto LABEL_53;
  if ( !v14 )
    goto LABEL_54;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16258/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v15->m_Items[0],
    0);
  v16 = this->fields.textureList;
  if ( !v16 )
    goto LABEL_54;
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_53;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  bodyRenderer = (__int64)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_54;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v14, 0);
  v17 = (UnityEngine_Mesh_o *)sub_1C6BC54(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v17, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
  v18 = UIImageRender_TypeInfo;
  v19 = bodyRenderer;
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
    v18 = UIImageRender_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_54;
  v20 = *(_DWORD *)(v19 + 24);
  if ( !v20 )
    goto LABEL_53;
  static_fields = v18->static_fields;
  LEFT_X = static_fields->LEFT_X;
  TOP_Y = static_fields->TOP_Y;
  *(_DWORD *)(v19 + 40) = 0;
  *(float *)(v19 + 32) = (float)LEFT_X;
  *(float *)(v19 + 36) = (float)TOP_Y;
  if ( v20 == 1 )
    goto LABEL_53;
  v24.n64_u64[0] = *(unsigned __int64 *)&UIImageRender_TypeInfo->static_fields->RIGHT_X;
  *(_DWORD *)(v19 + 52) = 0;
  *(float32x2_t *)(v19 + 44) = vcvt_f32_s32(v24);
  if ( v20 <= 2 )
    goto LABEL_53;
  v25 = UIImageRender_TypeInfo->static_fields;
  BOTTOM_Y = v25->BOTTOM_Y;
  v27 = v25->LEFT_X;
  *(_DWORD *)(v19 + 64) = 0;
  *(float *)(v19 + 56) = (float)v27;
  *(float *)(v19 + 60) = (float)BOTTOM_Y;
  if ( v20 == 3 )
    goto LABEL_53;
  v28 = UIImageRender_TypeInfo->static_fields;
  v29 = v28->BOTTOM_Y;
  RIGHT_X = v28->RIGHT_X;
  *(_DWORD *)(v19 + 76) = 0;
  *(float *)(v19 + 68) = (float)RIGHT_X;
  *(float *)(v19 + 72) = (float)v29;
  if ( !v17 )
    goto LABEL_54;
  UnityEngine_Mesh__set_vertices(v17, (UnityEngine_Vector3_array *)v19, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
  v31 = bodyRenderer;
  if ( !byte_4CAFC12 )
  {
    bodyRenderer = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC12 = 1;
  }
  if ( !v31 )
LABEL_54:
    sub_1C6BC60(bodyRenderer, method);
  v32 = *(_DWORD *)(v31 + 24);
  if ( !v32 )
    goto LABEL_53;
  v33 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v34 = -v33[10].n64_f32[0];
  *(float32x2_t *)(v31 + 32) = vneg_f32(v33[9]);
  *(float *)(v31 + 40) = v34;
  if ( v32 == 1 )
    goto LABEL_53;
  v35 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v36 = -v35[10].n64_f32[0];
  *(float32x2_t *)(v31 + 44) = vneg_f32(v35[9]);
  *(float *)(v31 + 52) = v36;
  if ( v32 <= 2 )
    goto LABEL_53;
  v37 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v38 = -v37[10].n64_f32[0];
  *(float32x2_t *)(v31 + 56) = vneg_f32(v37[9]);
  *(float *)(v31 + 64) = v38;
  if ( v32 == 3 )
    goto LABEL_53;
  v39 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v40 = -v39[10].n64_f32[0];
  *(float32x2_t *)(v31 + 68) = vneg_f32(v39[9]);
  *(float *)(v31 + 76) = v40;
  UnityEngine_Mesh__set_normals(v17, (UnityEngine_Vector3_array *)v31, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_54;
  v41 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v41 )
    goto LABEL_53;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIImageRender_TypeInfo->static_fields->BODY_U;
  if ( v41 == 1 )
    goto LABEL_53;
  v42 = UIImageRender_TypeInfo->static_fields;
  BODY_V = v42->BODY_V;
  *(float *)(bodyRenderer + 40) = v42->BODY_U + v42->BODY_W;
  *(float *)(bodyRenderer + 44) = BODY_V;
  if ( v41 <= 2 )
    goto LABEL_53;
  v44 = UIImageRender_TypeInfo->static_fields;
  v45 = v44->BODY_V - v44->BODY_H;
  *(float *)(bodyRenderer + 48) = v44->BODY_U;
  *(float *)(bodyRenderer + 52) = v45;
  if ( v41 == 3 )
    goto LABEL_53;
  v46 = UIImageRender_TypeInfo->static_fields;
  v47.n64_u64[0] = *(unsigned __int64 *)&v46->BODY_U;
  v48.n64_u64[0] = *(unsigned __int64 *)&v46->BODY_W;
  LODWORD(v49) = vadd_f32(v47, v48).n64_u32[0];
  HIDWORD(v49) = vsub_f32(v47, v48).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v49;
  UnityEngine_Mesh__set_uv(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_54;
  v50 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v50 )
    goto LABEL_53;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIImageRender_TypeInfo->static_fields->BODY_U;
  if ( v50 == 1 )
    goto LABEL_53;
  v51 = UIImageRender_TypeInfo->static_fields;
  v52 = v51->BODY_V;
  *(float *)(bodyRenderer + 40) = v51->BODY_U + v51->BODY_W;
  *(float *)(bodyRenderer + 44) = v52;
  if ( v50 <= 2
    || (v53 = UIImageRender_TypeInfo->static_fields,
        v54 = v53->BODY_V - v53->BODY_H,
        *(float *)(bodyRenderer + 48) = v53->BODY_U,
        *(float *)(bodyRenderer + 52) = v54,
        v50 == 3) )
  {
LABEL_53:
    sub_1C6BC68(bodyRenderer);
  }
  v55 = UIImageRender_TypeInfo->static_fields;
  v56.n64_u64[0] = *(unsigned __int64 *)&v55->BODY_U;
  v57.n64_u64[0] = *(unsigned __int64 *)&v55->BODY_W;
  LODWORD(v58) = vadd_f32(v56, v57).n64_u32[0];
  HIDWORD(v58) = vsub_f32(v56, v57).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v58;
  UnityEngine_Mesh__set_uv2(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v59 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 6);
  v60.fields.value = Field__PrivateImplementationDetails__B2CF02C10F1F309AC8FB52A3CCE888191E73C7E1C5A0D699CA4CBBE2C76F2C0F;
  v61 = (System_Int32_array *)v59;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v59, v60, 0);
  UnityEngine_Mesh__set_triangles(v17, v61, 0);
  bodyRenderer = (__int64)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_54;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v17, 0);
  UnityEngine_Mesh__RecalculateNormals(v17, 0);
  UnityEngine_Mesh__RecalculateBounds(v17, 0);
  isTalkMask = this->fields.isTalkMask;
  v64 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v66) = 1.0;
  if ( !v64 )
    *(float *)&v66 = 0.1;
  if ( isTalkMask )
    *(float *)&v66 = *(float *)&v66 * 0.5;
  *(float *)&v62 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v66,
    v66,
    v66,
    v62);
  UIImageRender__SetFilterColor(this, this->fields.filterColor, v67);
  UIImageRender__SetActive(this, 1, v68);
}


void UIImageRender__SetDepth(UIImageRender_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  float x; // s9
  float y; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        x = localPosition.fields.x,
        y = localPosition.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C6BC60(transform, v6);
  }
  v10.fields.z = -d;
  v10.fields.x = x;
  v10.fields.y = y;
  UnityEngine_Transform__set_localPosition(transform, v10, 0);
}


void UIImageRender__SetFilter(
        UIImageRender_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
  UIImageRender__RecoverSharder(this, v10);
  v12.fields.b = b;
  v12.fields.a = a;
  v12.fields.r = r;
  v12.fields.g = g;
  UIImageRender__SetFilterColor(this, v12, v11);
}


void UIImageRender__SetFilterColor(UIImageRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
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
  if ( (byte_4CB7B90 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16216/*"_FilterColor"*/);
    byte_4CB7B90 = 1;
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
      sub_1C6BC60(bodyRenderer, method);
    }
    v10.fields.b = b;
    v10.fields.a = a;
    v10.fields.r = r;
    v10.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16216/*"_FilterColor"*/,
      v10,
      0);
  }
}


void UIImageRender__SetGradation(UIImageRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4CB7B91 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16229/*"_Gradation"*/);
    byte_4CB7B91 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71525148(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16229/*"_Gradation"*/,
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
          (System_String_o *)StringLiteral_16229/*"_Gradation"*/,
          g,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C6BC60(bodyRenderer, method);
  }
}


void UIImageRender__SetLayer(UIImageRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIImageRender__SetLayer_44237612(this, transform, layer, v8);
  }
}


void UIImageRender__SetLayer_44237612(
        UIImageRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIImageRender_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4CB7B96 & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    this = (UIImageRender_o *)sub_1C6BA08(&UnityEngine_Transform_TypeInfo);
    byte_4CB7B96 = 1;
  }
  if ( !tf || (this = (UIImageRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
LABEL_33:
    sub_1C6BC60(this, tf);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C6BC60(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C6BFFC(v17);
        goto LABEL_33;
      }
    }
    UIImageRender__SetLayer_44237612(v6, v17, layer, v18);
  }
  v20 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}


void UIImageRender__SetMaskInteraction(UIImageRender_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  __int64 v6; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x8
  int32_t v8; // w19

  if ( (byte_4CB7B97 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16346/*"_StencilComp"*/);
    byte_4CB7B97 = 1;
  }
  RenderingCompareFunction = (UnityEngine_Material_o *)UITweenRenderer__GetRenderingCompareFunction(
                                                         (UITweenRenderer_o *)this,
                                                         maskInteraction,
                                                         0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (v8 = (int)RenderingCompareFunction,
        (RenderingCompareFunction = UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0) )
  {
    sub_1C6BC60(RenderingCompareFunction, v6);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16346/*"_StencilComp"*/, v8, 0);
}


void UIImageRender__SetShadow(UIImageRender_o *this, bool isShadow, const MethodInfo *method)
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
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIImageRender__SetSharder(UIImageRender_o *this, System_String_o *shaderName, const MethodInfo *method)
{
  System_String_o *v3; // x19
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v8; // x21

  v3 = shaderName;
  if ( (byte_4CB7B8D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1310/*"2"*/);
    byte_4CB7B8D = 1;
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
          sub_1C6BC68(bodyRenderer);
        v8 = (UnityEngine_Object_o *)textureList->m_Items[1];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
          v3 = System_String__Concat_63966792(v3, (System_String_o *)StringLiteral_1310/*"2"*/, 0);
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(v3, 0);
        if ( material )
        {
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, (UnityEngine_Shader_o *)bodyRenderer, 0);
          return;
        }
      }
    }
    sub_1C6BC60(bodyRenderer, shaderName);
  }
}


void UIImageRender__SetSortingOrder(UIImageRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_1C6BC60(0, order);
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIImageRender__SetTalkMask(UIImageRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  UIImageRender_c *klass; // x8

  LODWORD(v3) = 1036831949;
  klass = this->klass;
  if ( !this->fields.isShadow )
    *(float *)&v3 = 1.0;
  this->fields.isTalkMask = isMask;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIImageRender__SetTweenColor(UIImageRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x0
  bool v10; // w1
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4CB7B89 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16166/*"_Color"*/);
    byte_4CB7B89 = 1;
  }
  v11.fields.r = r;
  v11.fields.g = g;
  v11.fields.b = b;
  v11.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v11, 0);
  if ( !this->fields.textureList )
    goto LABEL_9;
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_12;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_12;
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16166/*"_Color"*/, v12, 0);
  if ( a <= 0.0 )
  {
LABEL_9:
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      v10 = 0;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C6BC60(bodyRenderer, v8);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_12;
  v10 = 1;
LABEL_11:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v10, 0);
}


void UIImageRender__SetVolume(UIImageRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4CB7B92 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16403/*"_Volume"*/);
    byte_4CB7B92 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71525148(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16403/*"_Volume"*/,
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
          (System_String_o *)StringLiteral_16403/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C6BC60(bodyRenderer, method);
  }
}


void UIImageRender__SetWipeTexture(UIImageRender_o *this, UnityEngine_Texture_o *texture, const MethodInfo *method)
{
  void *bodyRenderer; // x0
  float x; // s8
  int v7; // s9
  int32_t height; // w20
  UIImageRender_c *v9; // x8
  struct UIImageRender_StaticFields *static_fields; // x8
  float y; // s8
  int32_t BODY_SIZE_Y; // w19
  int MAIN_SIZE_Y; // s9

  if ( (byte_4CB7B8F & 1) == 0 )
  {
    sub_1C6BA08(&UIImageRender_TypeInfo);
    sub_1C6BA08(&StringLiteral_16409/*"_WipeY"*/);
    sub_1C6BA08(&StringLiteral_16407/*"_WipeTex"*/);
    sub_1C6BA08(&StringLiteral_16408/*"_WipeX"*/);
    byte_4CB7B8F = 1;
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_16407/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71525148(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16408/*"_WipeX"*/,
         0) )
  {
    x = this->fields.figureOffset.fields.x;
    bodyRenderer = UIImageRender_TypeInfo;
    if ( !UIImageRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
      bodyRenderer = UIImageRender_TypeInfo;
    }
    if ( !this->fields.bodyRenderer )
      goto LABEL_22;
    v7 = **((_DWORD **)bodyRenderer + 23);
    bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this->fields.bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_22;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16408/*"_WipeX"*/,
      (float)-x / (float)v7,
      0);
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71525148(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16409/*"_WipeY"*/,
         0) )
  {
    height = UnityEngine_Screen__get_height(0);
    v9 = UIImageRender_TypeInfo;
    if ( !UIImageRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
      v9 = UIImageRender_TypeInfo;
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
          (System_String_o *)StringLiteral_16409/*"_WipeY"*/,
          (float)((float)((float)(height - BODY_SIZE_Y) * 0.5) - y) / (float)MAIN_SIZE_Y,
          0);
        return;
      }
    }
LABEL_22:
    sub_1C6BC60(bodyRenderer, texture);
  }
}