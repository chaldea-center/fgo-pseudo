void UIEquipGraphViewerRender___cctor(const MethodInfo *method)
{
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8

  if ( (byte_4CB7B61 & 1) == 0 )
  {
    sub_1C6BA08(&UIEquipGraphViewerRender_TypeInfo);
    byte_4CB7B61 = 1;
  }
  static_fields = UIEquipGraphViewerRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_CECC80;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_CECBA0;
  static_fields->BODY_Y_FIX = 150;
  *(_OWORD *)&static_fields->BODY_U = xmmword_CEC120;
  *(_QWORD *)&static_fields->NAME_SIZE_X = 0xA900000200LL;
  *(_QWORD *)&static_fields->NAME_TOP_Y = 0xC2A9000042A90000LL;
  static_fields->NAME_Y_FIX = 150.0;
}


void UIEquipGraphViewerRender___ctor(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  UIEquipGraphViewerRender_c *v11; // x0

  if ( (byte_4CB7B60 & 1) == 0 )
  {
    sub_1C6BA08(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C6BA08(&StringLiteral_22366/*"normal"*/);
    byte_4CB7B60 = 1;
  }
  v5 = StringLiteral_22366/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22366/*"normal"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.filterName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  v11 = UIEquipGraphViewerRender_TypeInfo;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v11 = UIEquipGraphViewerRender_TypeInfo;
  }
  this->fields.EquipGraphBodyRect = *(struct UnityEngine_Rect_o *)&v11->static_fields->BODY_U;
  this->fields.EquipGraphNameRect = (struct UnityEngine_Rect_o)xmmword_CED620;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIEquipGraphViewerRender__EndMoveAlpha(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
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

  if ( (byte_4CB7B5D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B5D = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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


System_String_array *UIEquipGraphViewerRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_String_o *v5; // x20

  v2 = imageName;
  if ( (byte_4CB7B4F & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_4377/*"CharaGraph/9400010"*/);
    imageName = (System_String_o *)sub_1C6BA08(&StringLiteral_4375/*"CharaGraph/"*/);
    byte_4CB7B4F = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, 0) )
    v2 = System_String__Concat_63966792((System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v2, 0) )
    v2 = (System_String_o *)StringLiteral_4377/*"CharaGraph/9400010"*/;
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


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetBodySize(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v2; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CB7B52 & 1) == 0 )
  {
    sub_1C6BA08(&UIEquipGraphViewerRender_TypeInfo);
    byte_4CB7B52 = 1;
  }
  v2 = UIEquipGraphViewerRender_TypeInfo;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v2 = UIEquipGraphViewerRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  BODY_SIZE_X = (float)static_fields->BODY_SIZE_X;
  BODY_SIZE_Y = (float)static_fields->BODY_SIZE_Y;
  result.fields.y = BODY_SIZE_Y;
  result.fields.x = BODY_SIZE_X;
  return result;
}


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetCenterOffset(
        UIEquipGraphViewerRender_o *this,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  float v3; // s0
  int HEIGHT; // w8
  int v5; // w8
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CB7B50 & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB7B50 = 1;
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


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetCharacterOffset(const MethodInfo *method)
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


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetCharacterOffsetMyroom(const MethodInfo *method)
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


bool UIEquipGraphViewerRender__IsBusyMoveAlpha(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  return this->fields.isBusyMoveAlpha;
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__MoveAlpha(
        UIEquipGraphViewerRender_o *this,
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
  const MethodInfo *v17; // x1
  TweenRendererColor_o *v18; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v27; // x1
  UnityEngine_Color_o v28; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = *(long double *)&alpha;
  if ( (byte_4CB7B5B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_6001/*"EndMoveAlpha"*/);
    byte_4CB7B5B = 1;
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
    v28.fields.r = r;
    v28.fields.g = g;
    v28.fields.b = b;
    v28.fields.a = *(float *)&v8;
    v18 = TweenRendererColor__Begin(v16, duration, v28, v17);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v18 )
      {
        v18->fields.eventReceiver = gameObject;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v18->fields.eventReceiver, (int32_t)gameObject, v21, v22);
        v23 = StringLiteral_6001/*"EndMoveAlpha"*/;
        v18->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6001/*"EndMoveAlpha"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v18->fields.callWhenFinished, v23, v24, v25);
        return;
      }
LABEL_16:
      sub_1C6BC60(gameObject, v20);
    }
  }
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIEquipGraphViewerRender__EndMoveAlpha(this, v27);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__MoveAlphaSpeed(
        UIEquipGraphViewerRender_o *this,
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
  const MethodInfo *v19; // x1
  TweenRendererColor_o *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *Component_object; // x20
  const MethodInfo *v29; // x1
  UnityEngine_Color_o v30; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = *(long double *)&alpha;
  if ( (byte_4CB7B5C & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_6001/*"EndMoveAlpha"*/);
    byte_4CB7B5C = 1;
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
    v30.fields.r = r;
    v30.fields.g = g;
    v30.fields.b = b;
    v30.fields.a = *(float *)&v8;
    v20 = TweenRendererColor__Begin(v18, v17, v30, v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v20 )
      {
        v20->fields.eventReceiver = gameObject;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields.eventReceiver, (int32_t)gameObject, v23, v24);
        v25 = StringLiteral_6001/*"EndMoveAlpha"*/;
        v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6001/*"EndMoveAlpha"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields.callWhenFinished, v25, v26, v27);
        return;
      }
LABEL_19:
      sub_1C6BC60(gameObject, v22);
    }
  }
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIEquipGraphViewerRender__EndMoveAlpha(this, v29);
}


void UIEquipGraphViewerRender__RecoverSharder(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4CB7B57 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4908/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C6BA08(&StringLiteral_22366/*"normal"*/);
    sub_1C6BA08(&StringLiteral_4907/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C6BA08(&StringLiteral_23593/*"silhouette"*/);
    byte_4CB7B57 = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23593/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4908/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22366/*"normal"*/, 0);
    v5 = &StringLiteral_4907/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  UIEquipGraphViewerRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIEquipGraphViewerRender__ReleaseCharacter(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *mesh; // x20
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *nameRenderer; // x20
  UnityEngine_Object_o *v13; // x20
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x20

  if ( (byte_4CB7B53 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B53 = 1;
  }
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      UIEquipGraphViewerRender__SetActiveBody(this, 0, v7);
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
    {
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      v9 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v9, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyFilter, 0, 0);
    }
  }
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter )
    goto LABEL_56;
  mesh = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( !bodyFilter )
      goto LABEL_56;
    v11 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v11, 0);
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( !bodyFilter )
      goto LABEL_56;
    UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
  }
  nameRenderer = (UnityEngine_Object_o *)this->fields.nameRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameRenderer, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
      UIEquipGraphViewerRender__SetActiveName(this, 0, v14);
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    v15 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
    {
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      v16 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v16, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyFilter, 0, 0);
    }
  }
  bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
  if ( !bodyFilter )
    goto LABEL_56;
  v17 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
    if ( bodyFilter )
    {
      v20 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v20, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_55;
      }
    }
LABEL_56:
    sub_1C6BC60(bodyFilter, v4);
  }
LABEL_55:
  this->fields.textureList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.textureList, 0, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__SetActiveBody(UIEquipGraphViewerRender_o *this, bool isActive, const MethodInfo *method)
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
void UIEquipGraphViewerRender__SetActiveName(UIEquipGraphViewerRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *nameRenderer; // x0

  nameRenderer = (UnityEngine_Component_o *)this->fields.nameRenderer;
  if ( !nameRenderer
    || (nameRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nameRenderer, 0)) == 0 )
  {
    sub_1C6BC60(nameRenderer, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRenderer, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__SetAlpha(UIEquipGraphViewerRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIEquipGraphViewerRender__SetBaseColor(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3

  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
}


void UIEquipGraphViewerRender__SetCharacter(
        UIEquipGraphViewerRender_o *this,
        int32_t svtId,
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
  UIEquipGraphViewerRender__SetCharacterRender(this, v6);
}


void UIEquipGraphViewerRender__SetCharacterRender(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v3; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  System_String_o *filterName; // x20
  int32_t TOP_Y; // w9
  struct UIEquipGraphViewerRender_StaticFields *v7; // x8
  int32_t v8; // w9
  System_String_o *v9; // x0
  UnityEngine_Shader_o *v10; // x21
  UnityEngine_Material_o *v11; // x20
  __int64 bodyRenderer; // x0
  __int64 v13; // x1
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v15; // x8
  UnityEngine_Mesh_o *v16; // x20
  UIEquipGraphViewerRender_c *v17; // x8
  __int64 v18; // x21
  unsigned int v19; // w9
  struct UIEquipGraphViewerRender_StaticFields *v20; // x8
  int LEFT_X; // s0
  int v22; // s1
  int32x2_t v23; // d0
  struct UIEquipGraphViewerRender_StaticFields *v24; // x8
  int BOTTOM_Y; // s0
  int v26; // s1
  struct UIEquipGraphViewerRender_StaticFields *v27; // x8
  int v28; // s0
  int RIGHT_X; // s1
  __int64 v30; // x21
  unsigned int v31; // w9
  float32x2_t *v32; // x10
  float v33; // s1
  float32x2_t *v34; // x10
  float v35; // s0
  float32x2_t *v36; // x10
  float v37; // s0
  float32x2_t *v38; // x8
  float v39; // s0
  unsigned int v40; // w8
  struct UIEquipGraphViewerRender_StaticFields *v41; // x9
  float BODY_V; // s2
  struct UIEquipGraphViewerRender_StaticFields *v43; // x9
  float v44; // s0
  struct UIEquipGraphViewerRender_StaticFields *v45; // x8
  float32x2_t v46; // d0
  float32x2_t v47; // d1
  __int64 v48; // d2
  unsigned int v49; // w8
  struct UIEquipGraphViewerRender_StaticFields *v50; // x9
  float v51; // s2
  struct UIEquipGraphViewerRender_StaticFields *v52; // x9
  float v53; // s0
  struct UIEquipGraphViewerRender_StaticFields *v54; // x8
  float32x2_t v55; // d0
  float32x2_t v56; // d1
  __int64 v57; // d2
  System_Array_o *v58; // x0
  System_RuntimeFieldHandle_o v59; // x1
  System_Int32_array *v60; // x21
  long double v61; // q3
  _BOOL4 isTalkMask; // w9
  bool v63; // zf
  UIEquipGraphViewerRender_c *klass; // x8
  long double v65; // q0
  const MethodInfo *v66; // x2

  if ( (byte_4CB7B54 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&UnityEngine_Mesh_TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C6BA08(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector2___TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    sub_1C6BA08(&StringLiteral_16258/*"_MainTex"*/);
    sub_1C6BA08(&StringLiteral_4908/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C6BA08(&StringLiteral_22366/*"normal"*/);
    sub_1C6BA08(&StringLiteral_16353/*"_SubTex"*/);
    sub_1C6BA08(&StringLiteral_4907/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C6BA08(&StringLiteral_23593/*"silhouette"*/);
    byte_4CB7B54 = 1;
  }
  v3 = UIEquipGraphViewerRender_TypeInfo;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v3 = UIEquipGraphViewerRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  filterName = this->fields.filterName;
  TOP_Y = static_fields->TOP_Y;
  LODWORD(static_fields) = static_fields->BODY_Y_FIX;
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)((int)static_fields - TOP_Y);
  v7 = v3->static_fields;
  v8 = v7->TOP_Y;
  LODWORD(v7) = v7->BODY_Y_FIX;
  this->fields.dispOffset.fields.x = 0.0;
  this->fields.dispOffset.fields.y = (float)((int)v7 - v8);
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23593/*"silhouette"*/, 0) )
  {
    v9 = (System_String_o *)StringLiteral_4908/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22366/*"normal"*/, 0);
    v9 = (System_String_o *)StringLiteral_4907/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v10 = UnityEngine_Shader__Find(v9, 0);
  v11 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v11, v10, 0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_46;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_45;
  if ( !v11 )
    goto LABEL_46;
  UnityEngine_Material__SetTexture(
    v11,
    (System_String_o *)StringLiteral_16258/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v15 = this->fields.textureList;
  if ( !v15 )
    goto LABEL_46;
  if ( !LODWORD(v15->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v11,
    (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v15->m_Items[0],
    0);
  bodyRenderer = (__int64)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v11, 0);
  v16 = (UnityEngine_Mesh_o *)sub_1C6BC54(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v16, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
  v17 = UIEquipGraphViewerRender_TypeInfo;
  v18 = bodyRenderer;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v17 = UIEquipGraphViewerRender_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_46;
  v19 = *(_DWORD *)(v18 + 24);
  if ( !v19 )
    goto LABEL_45;
  v20 = v17->static_fields;
  LEFT_X = v20->LEFT_X;
  v22 = v20->TOP_Y;
  *(_DWORD *)(v18 + 40) = 0;
  *(float *)(v18 + 32) = (float)LEFT_X;
  *(float *)(v18 + 36) = (float)v22;
  if ( v19 == 1 )
    goto LABEL_45;
  v23.n64_u64[0] = *(unsigned __int64 *)&UIEquipGraphViewerRender_TypeInfo->static_fields->RIGHT_X;
  *(_DWORD *)(v18 + 52) = 0;
  *(float32x2_t *)(v18 + 44) = vcvt_f32_s32(v23);
  if ( v19 <= 2 )
    goto LABEL_45;
  v24 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  BOTTOM_Y = v24->BOTTOM_Y;
  v26 = v24->LEFT_X;
  *(_DWORD *)(v18 + 64) = 0;
  *(float *)(v18 + 56) = (float)v26;
  *(float *)(v18 + 60) = (float)BOTTOM_Y;
  if ( v19 == 3 )
    goto LABEL_45;
  v27 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v28 = v27->BOTTOM_Y;
  RIGHT_X = v27->RIGHT_X;
  *(_DWORD *)(v18 + 76) = 0;
  *(float *)(v18 + 68) = (float)RIGHT_X;
  *(float *)(v18 + 72) = (float)v28;
  if ( !v16 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v16, (UnityEngine_Vector3_array *)v18, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
  v30 = bodyRenderer;
  if ( !byte_4CAFC12 )
  {
    bodyRenderer = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC12 = 1;
  }
  if ( !v30 )
LABEL_46:
    sub_1C6BC60(bodyRenderer, v13);
  v31 = *(_DWORD *)(v30 + 24);
  if ( !v31 )
    goto LABEL_45;
  v32 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v33 = -v32[10].n64_f32[0];
  *(float32x2_t *)(v30 + 32) = vneg_f32(v32[9]);
  *(float *)(v30 + 40) = v33;
  if ( v31 == 1 )
    goto LABEL_45;
  v34 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v35 = -v34[10].n64_f32[0];
  *(float32x2_t *)(v30 + 44) = vneg_f32(v34[9]);
  *(float *)(v30 + 52) = v35;
  if ( v31 <= 2 )
    goto LABEL_45;
  v36 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v37 = -v36[10].n64_f32[0];
  *(float32x2_t *)(v30 + 56) = vneg_f32(v36[9]);
  *(float *)(v30 + 64) = v37;
  if ( v31 == 3 )
    goto LABEL_45;
  v38 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v39 = -v38[10].n64_f32[0];
  *(float32x2_t *)(v30 + 68) = vneg_f32(v38[9]);
  *(float *)(v30 + 76) = v39;
  UnityEngine_Mesh__set_normals(v16, (UnityEngine_Vector3_array *)v30, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v40 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v40 )
    goto LABEL_45;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIEquipGraphViewerRender_TypeInfo->static_fields->BODY_U;
  if ( v40 == 1 )
    goto LABEL_45;
  v41 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  BODY_V = v41->BODY_V;
  *(float *)(bodyRenderer + 40) = v41->BODY_U + v41->BODY_W;
  *(float *)(bodyRenderer + 44) = BODY_V;
  if ( v40 <= 2 )
    goto LABEL_45;
  v43 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v44 = v43->BODY_V - v43->BODY_H;
  *(float *)(bodyRenderer + 48) = v43->BODY_U;
  *(float *)(bodyRenderer + 52) = v44;
  if ( v40 == 3 )
    goto LABEL_45;
  v45 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v46.n64_u64[0] = *(unsigned __int64 *)&v45->BODY_U;
  v47.n64_u64[0] = *(unsigned __int64 *)&v45->BODY_W;
  LODWORD(v48) = vadd_f32(v46, v47).n64_u32[0];
  HIDWORD(v48) = vsub_f32(v46, v47).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v48;
  UnityEngine_Mesh__set_uv(v16, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v49 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v49 )
    goto LABEL_45;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIEquipGraphViewerRender_TypeInfo->static_fields->BODY_U;
  if ( v49 == 1 )
    goto LABEL_45;
  v50 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v51 = v50->BODY_V;
  *(float *)(bodyRenderer + 40) = v50->BODY_U + v50->BODY_W;
  *(float *)(bodyRenderer + 44) = v51;
  if ( v49 <= 2
    || (v52 = UIEquipGraphViewerRender_TypeInfo->static_fields,
        v53 = v52->BODY_V - v52->BODY_H,
        *(float *)(bodyRenderer + 48) = v52->BODY_U,
        *(float *)(bodyRenderer + 52) = v53,
        v49 == 3) )
  {
LABEL_45:
    sub_1C6BC68(bodyRenderer);
  }
  v54 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v55.n64_u64[0] = *(unsigned __int64 *)&v54->BODY_U;
  v56.n64_u64[0] = *(unsigned __int64 *)&v54->BODY_W;
  LODWORD(v57) = vadd_f32(v55, v56).n64_u32[0];
  HIDWORD(v57) = vsub_f32(v55, v56).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v57;
  UnityEngine_Mesh__set_uv2(v16, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v58 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 6);
  v59.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v60 = (System_Int32_array *)v58;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v58, v59, 0);
  UnityEngine_Mesh__set_triangles(v16, v60, 0);
  bodyRenderer = (__int64)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v16, 0);
  UnityEngine_Mesh__RecalculateNormals(v16, 0);
  UnityEngine_Mesh__RecalculateBounds(v16, 0);
  isTalkMask = this->fields.isTalkMask;
  v63 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v65) = 1.0;
  if ( !v63 )
    *(float *)&v65 = 0.1;
  if ( isTalkMask )
    *(float *)&v65 = *(float *)&v65 * 0.5;
  *(float *)&v61 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v65,
    v65,
    v65,
    v61);
  UIEquipGraphViewerRender__SetActiveBody(this, 1, v66);
}


void UIEquipGraphViewerRender__SetDepth(UIEquipGraphViewerRender_o *this, float d, const MethodInfo *method)
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


void UIEquipGraphViewerRender__SetFilter(
        UIEquipGraphViewerRender_o *this,
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
  UIEquipGraphViewerRender__RecoverSharder(this, v10);
  v12.fields.b = b;
  v12.fields.a = a;
  v12.fields.r = r;
  v12.fields.g = g;
  UIEquipGraphViewerRender__SetFilterColor(this, v12, v11);
}


void UIEquipGraphViewerRender__SetFilterColor(
        UIEquipGraphViewerRender_o *this,
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
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4CB7B58 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16216/*"_FilterColor"*/);
    byte_4CB7B58 = 1;
  }
  textureList = this->fields.textureList;
  this->fields.filterColor.fields.r = r;
  this->fields.filterColor.fields.g = g;
  this->fields.filterColor.fields.b = b;
  this->fields.filterColor.fields.a = a;
  if ( textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( !bodyRenderer )
      goto LABEL_10;
    bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
    if ( !bodyRenderer
      || (v10.fields.r = r,
          v10.fields.g = g,
          v10.fields.b = b,
          v10.fields.a = a,
          UnityEngine_Material__SetColor(
            (UnityEngine_Material_o *)bodyRenderer,
            (System_String_o *)StringLiteral_16216/*"_FilterColor"*/,
            v10,
            0),
          (bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer) == 0)
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
LABEL_10:
      sub_1C6BC60(bodyRenderer, method);
    }
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16216/*"_FilterColor"*/,
      v11,
      0);
  }
}


void UIEquipGraphViewerRender__SetGradation(UIEquipGraphViewerRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4CB7B59 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16229/*"_Gradation"*/);
    byte_4CB7B59 = 1;
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


void UIEquipGraphViewerRender__SetLayer(UIEquipGraphViewerRender_o *this, int32_t layer, const MethodInfo *method)
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
    UIEquipGraphViewerRender__SetLayer_44217236(this, transform, layer, v8);
  }
}


void UIEquipGraphViewerRender__SetLayer_44217236(
        UIEquipGraphViewerRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIEquipGraphViewerRender_o *v6; // x21
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
  if ( (byte_4CB7B5E & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    this = (UIEquipGraphViewerRender_o *)sub_1C6BA08(&UnityEngine_Transform_TypeInfo);
    byte_4CB7B5E = 1;
  }
  if ( !tf
    || (this = (UIEquipGraphViewerRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C6BC60(this, tf);
  }
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
    UIEquipGraphViewerRender__SetLayer_44217236(v6, v17, layer, v18);
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


void UIEquipGraphViewerRender__SetMaskInteraction(
        UIEquipGraphViewerRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  __int64 v6; // x1
  int32_t v7; // w19

  if ( (byte_4CB7B5F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16346/*"_StencilComp"*/);
    byte_4CB7B5F = 1;
  }
  RenderingCompareFunction = (UnityEngine_Material_o *)UITweenRenderer__GetRenderingCompareFunction(
                                                         (UITweenRenderer_o *)this,
                                                         maskInteraction,
                                                         0);
  if ( !this->fields.bodyRenderer
    || (v7 = (int)RenderingCompareFunction,
        (RenderingCompareFunction = UnityEngine_Renderer__get_material(
                                      (UnityEngine_Renderer_o *)this->fields.bodyRenderer,
                                      0)) == 0)
    || (UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16346/*"_StencilComp"*/, v7, 0),
        (RenderingCompareFunction = (UnityEngine_Material_o *)this->fields.nameRenderer) == 0)
    || (RenderingCompareFunction = UnityEngine_Renderer__get_material(
                                     (UnityEngine_Renderer_o *)RenderingCompareFunction,
                                     0)) == 0 )
  {
    sub_1C6BC60(RenderingCompareFunction, v6);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16346/*"_StencilComp"*/, v7, 0);
}


void UIEquipGraphViewerRender__SetNameRender(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v3; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  System_String_o *filterName; // x20
  int32_t TOP_Y; // w9
  float NAME_TOP_Y; // s0
  float NAME_Y_FIX; // s1
  struct UIEquipGraphViewerRender_StaticFields *v9; // x8
  int32_t v10; // w9
  float v11; // s0
  float v12; // s1
  System_String_o *v13; // x0
  UnityEngine_Shader_o *v14; // x21
  UnityEngine_Material_o *v15; // x20
  __int64 nameRenderer; // x0
  __int64 v17; // x1
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v19; // x8
  UnityEngine_Mesh_o *v20; // x20
  UIEquipGraphViewerRender_c *v21; // x8
  __int64 v22; // x21
  unsigned int v23; // w9
  struct UIEquipGraphViewerRender_StaticFields *v24; // x8
  int LEFT_X; // s0
  float v26; // s1
  struct UIEquipGraphViewerRender_StaticFields *v27; // x8
  int RIGHT_X; // s0
  float v29; // s1
  struct UIEquipGraphViewerRender_StaticFields *v30; // x8
  int v31; // s0
  float NAME_BOTTOM_Y; // s1
  struct UIEquipGraphViewerRender_StaticFields *v33; // x8
  int v34; // s0
  float v35; // s1
  __int64 v36; // x21
  unsigned int v37; // w9
  float32x2_t *v38; // x10
  float v39; // s1
  float32x2_t *v40; // x10
  float v41; // s0
  float32x2_t *v42; // x10
  float v43; // s0
  float32x2_t *v44; // x8
  float v45; // s0
  unsigned int v46; // w8
  unsigned int v47; // w8
  System_Array_o *v48; // x0
  System_RuntimeFieldHandle_o v49; // x1
  System_Int32_array *v50; // x21
  long double v51; // q3
  _BOOL4 isTalkMask; // w9
  bool v53; // zf
  UIEquipGraphViewerRender_c *klass; // x8
  long double v55; // q0
  const MethodInfo *v56; // x2

  if ( (byte_4CB7B55 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&UnityEngine_Mesh_TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C6BA08(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector2___TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    sub_1C6BA08(&StringLiteral_16258/*"_MainTex"*/);
    sub_1C6BA08(&StringLiteral_4908/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C6BA08(&StringLiteral_22366/*"normal"*/);
    sub_1C6BA08(&StringLiteral_16353/*"_SubTex"*/);
    sub_1C6BA08(&StringLiteral_4907/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C6BA08(&StringLiteral_23593/*"silhouette"*/);
    byte_4CB7B55 = 1;
  }
  v3 = UIEquipGraphViewerRender_TypeInfo;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v3 = UIEquipGraphViewerRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  filterName = this->fields.filterName;
  TOP_Y = static_fields->TOP_Y;
  NAME_TOP_Y = static_fields->NAME_TOP_Y;
  NAME_Y_FIX = static_fields->NAME_Y_FIX;
  this->fields.dispNameTop.fields.x = 0.0;
  this->fields.dispNameTop.fields.y = -(float)((float)((float)(TOP_Y + 418) - NAME_TOP_Y) - NAME_Y_FIX);
  v9 = v3->static_fields;
  v10 = v9->TOP_Y;
  v11 = v9->NAME_TOP_Y;
  v12 = v9->NAME_Y_FIX;
  this->fields.dispNameOffset.fields.x = 0.0;
  this->fields.dispNameOffset.fields.y = -(float)((float)((float)(v10 + 418) - v11) - v12);
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23593/*"silhouette"*/, 0) )
  {
    v13 = (System_String_o *)StringLiteral_4908/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22366/*"normal"*/, 0);
    v13 = (System_String_o *)StringLiteral_4907/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v14 = UnityEngine_Shader__Find(v13, 0);
  v15 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v15, v14, 0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_46;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_45;
  if ( !v15 )
    goto LABEL_46;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16258/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v19 = this->fields.textureList;
  if ( !v19 )
    goto LABEL_46;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v19->m_Items[0],
    0);
  nameRenderer = (__int64)this->fields.nameRenderer;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)nameRenderer, v15, 0);
  v20 = (UnityEngine_Mesh_o *)sub_1C6BC54(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v20, 0);
  nameRenderer = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
  v21 = UIEquipGraphViewerRender_TypeInfo;
  v22 = nameRenderer;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v21 = UIEquipGraphViewerRender_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_46;
  v23 = *(_DWORD *)(v22 + 24);
  if ( !v23 )
    goto LABEL_45;
  v24 = v21->static_fields;
  LEFT_X = v24->LEFT_X;
  v26 = v24->NAME_TOP_Y;
  *(_DWORD *)(v22 + 40) = 0;
  *(float *)(v22 + 32) = (float)LEFT_X;
  *(float *)(v22 + 36) = v26;
  if ( v23 == 1 )
    goto LABEL_45;
  v27 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  RIGHT_X = v27->RIGHT_X;
  v29 = v27->NAME_TOP_Y;
  *(_DWORD *)(v22 + 52) = 0;
  *(float *)(v22 + 44) = (float)RIGHT_X;
  *(float *)(v22 + 48) = v29;
  if ( v23 <= 2 )
    goto LABEL_45;
  v30 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v31 = v30->LEFT_X;
  NAME_BOTTOM_Y = v30->NAME_BOTTOM_Y;
  *(_DWORD *)(v22 + 64) = 0;
  *(float *)(v22 + 56) = (float)v31;
  *(float *)(v22 + 60) = NAME_BOTTOM_Y;
  if ( v23 == 3 )
    goto LABEL_45;
  v33 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v34 = v33->RIGHT_X;
  v35 = v33->NAME_BOTTOM_Y;
  *(_DWORD *)(v22 + 76) = 0;
  *(float *)(v22 + 68) = (float)v34;
  *(float *)(v22 + 72) = v35;
  if ( !v20 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v20, (UnityEngine_Vector3_array *)v22, 0);
  nameRenderer = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
  v36 = nameRenderer;
  if ( !byte_4CAFC12 )
  {
    nameRenderer = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC12 = 1;
  }
  if ( !v36 )
LABEL_46:
    sub_1C6BC60(nameRenderer, v17);
  v37 = *(_DWORD *)(v36 + 24);
  if ( !v37 )
    goto LABEL_45;
  v38 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v39 = -v38[10].n64_f32[0];
  *(float32x2_t *)(v36 + 32) = vneg_f32(v38[9]);
  *(float *)(v36 + 40) = v39;
  if ( v37 == 1 )
    goto LABEL_45;
  v40 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v41 = -v40[10].n64_f32[0];
  *(float32x2_t *)(v36 + 44) = vneg_f32(v40[9]);
  *(float *)(v36 + 52) = v41;
  if ( v37 <= 2 )
    goto LABEL_45;
  v42 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v43 = -v42[10].n64_f32[0];
  *(float32x2_t *)(v36 + 56) = vneg_f32(v42[9]);
  *(float *)(v36 + 64) = v43;
  if ( v37 == 3 )
    goto LABEL_45;
  v44 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v45 = -v44[10].n64_f32[0];
  *(float32x2_t *)(v36 + 68) = vneg_f32(v44[9]);
  *(float *)(v36 + 76) = v45;
  UnityEngine_Mesh__set_normals(v20, (UnityEngine_Vector3_array *)v36, 0);
  nameRenderer = sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  if ( !nameRenderer )
    goto LABEL_46;
  v46 = *(_DWORD *)(nameRenderer + 24);
  if ( !v46 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 32) = 0x3E11FDDF00000000LL;
  if ( v46 == 1 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 40) = 0x3E11FDDF3F000000LL;
  if ( v46 <= 2 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 48) = 0;
  if ( v46 == 3 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 56) = 1056964608;
  UnityEngine_Mesh__set_uv(v20, (UnityEngine_Vector2_array *)nameRenderer, 0);
  nameRenderer = sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
  if ( !nameRenderer )
    goto LABEL_46;
  v47 = *(_DWORD *)(nameRenderer + 24);
  if ( !v47
    || (*(_QWORD *)(nameRenderer + 32) = 0x3E11FDDF00000000LL, v47 == 1)
    || (*(_QWORD *)(nameRenderer + 40) = 0x3E11FDDF3F000000LL, v47 <= 2)
    || (*(_QWORD *)(nameRenderer + 48) = 0, v47 == 3) )
  {
LABEL_45:
    sub_1C6BC68(nameRenderer);
  }
  *(_QWORD *)(nameRenderer + 56) = 1056964608;
  UnityEngine_Mesh__set_uv2(v20, (UnityEngine_Vector2_array *)nameRenderer, 0);
  v48 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 6);
  v49.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v50 = (System_Int32_array *)v48;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v48, v49, 0);
  UnityEngine_Mesh__set_triangles(v20, v50, 0);
  nameRenderer = (__int64)this->fields.nameFilter;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)nameRenderer, v20, 0);
  UnityEngine_Mesh__RecalculateNormals(v20, 0);
  UnityEngine_Mesh__RecalculateBounds(v20, 0);
  isTalkMask = this->fields.isTalkMask;
  v53 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v55) = 1.0;
  if ( !v53 )
    *(float *)&v55 = 0.1;
  if ( isTalkMask )
    *(float *)&v55 = *(float *)&v55 * 0.5;
  *(float *)&v51 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v55,
    v55,
    v55,
    v51);
  UIEquipGraphViewerRender__SetActiveName(this, 1, v56);
}


void UIEquipGraphViewerRender__SetShadow(UIEquipGraphViewerRender_o *this, bool isShadow, const MethodInfo *method)
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
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIEquipGraphViewerRender__SetSharder(
        UIEquipGraphViewerRender_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Renderer_o *nameRenderer; // x8
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *material; // x21
  UnityEngine_Shader_o *v9; // x19

  if ( (byte_4CB7B56 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B56 = 1;
  }
  if ( this->fields.textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
      nameRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer;
      if ( nameRenderer )
      {
        v7 = (UnityEngine_Object_o *)bodyRenderer;
        material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(nameRenderer, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
          return;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(material, 0, 0) )
          return;
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(shaderName, 0);
        if ( v7 )
        {
          v9 = (UnityEngine_Shader_o *)bodyRenderer;
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)v7, (UnityEngine_Shader_o *)bodyRenderer, 0);
          if ( material )
          {
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, v9, 0);
            return;
          }
        }
      }
    }
    sub_1C6BC60(bodyRenderer, shaderName);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__SetSortingOrder(
        UIEquipGraphViewerRender_o *this,
        int32_t order,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0),
        (bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer) == 0) )
  {
    sub_1C6BC60(bodyRenderer, *(_QWORD *)&order);
  }
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIEquipGraphViewerRender__SetTalkMask(UIEquipGraphViewerRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  UIEquipGraphViewerRender_c *klass; // x8

  LODWORD(v3) = 1036831949;
  klass = this->klass;
  if ( !this->fields.isShadow )
    *(float *)&v3 = 1.0;
  this->fields.isTalkMask = isMask;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIEquipGraphViewerRender__SetTweenColor(
        UIEquipGraphViewerRender_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x0
  bool v10; // w20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4CB7B51 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16166/*"_Color"*/);
    byte_4CB7B51 = 1;
  }
  v11.fields.r = r;
  v11.fields.g = g;
  v11.fields.b = b;
  v11.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v11, 0);
  if ( !this->fields.textureList )
    goto LABEL_12;
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16166/*"_Color"*/, v12, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16166/*"_Color"*/, v13, 0);
  if ( a <= 0.0 )
  {
LABEL_12:
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      UnityEngine_Renderer__set_enabled(bodyRenderer, 0, 0);
      bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer;
      if ( bodyRenderer )
      {
        v10 = 0;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1C6BC60(bodyRenderer, v8);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  v10 = 1;
  UnityEngine_Renderer__set_enabled(bodyRenderer, 1, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
LABEL_15:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v10, 0);
}


void UIEquipGraphViewerRender__SetVolume(UIEquipGraphViewerRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4CB7B5A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16403/*"_Volume"*/);
    byte_4CB7B5A = 1;
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