void UIEquipGraphViewerRender___cctor(const MethodInfo *method)
{
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8

  if ( (byte_4C4481F & 1) == 0 )
  {
    sub_1C37058(&UIEquipGraphViewerRender_TypeInfo);
    byte_4C4481F = 1;
  }
  static_fields = UIEquipGraphViewerRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_C0F350;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_C0F270;
  static_fields->BODY_Y_FIX = 150;
  *(_OWORD *)&static_fields->BODY_U = xmmword_C0E7E0;
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

  if ( (byte_4C4481E & 1) == 0 )
  {
    sub_1C37058(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C37058(&StringLiteral_22280/*"normal"*/);
    byte_4C4481E = 1;
  }
  v5 = StringLiteral_22280/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22280/*"normal"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.filterName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  v11 = UIEquipGraphViewerRender_TypeInfo;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v11 = UIEquipGraphViewerRender_TypeInfo;
  }
  this->fields.EquipGraphBodyRect = *(struct UnityEngine_Rect_o *)&v11->static_fields->BODY_U;
  this->fields.EquipGraphNameRect = (struct UnityEngine_Rect_o)xmmword_C0FCF0;
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

  if ( (byte_4C4481B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4481B = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v9, v10);
  this->fields.isBusyMoveAlpha = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v11 )
  {
    if ( !moveAlphaCallbackObject )
      sub_1C372B4(v11);
    UnityEngine_GameObject__SendMessage_71248628(
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
  if ( (byte_4C4480D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_4387/*"CharaGraph/9400010"*/);
    imageName = (System_String_o *)sub_1C37058(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C4480D = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, 0) )
    v2 = System_String__Concat_63561656((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v2, 0) )
    v2 = (System_String_o *)StringLiteral_4387/*"CharaGraph/9400010"*/;
  imageName = (System_String_o *)sub_1C37100(string___TypeInfo, 1);
  if ( !imageName )
LABEL_13:
    sub_1C372B4(imageName);
  v5 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_1C372BC(imageName);
  imageName[1].monitor = v2;
  sub_1C36FFC((CGThumbnailListItem_o *)&imageName[1].monitor, (int32_t)v2, v3, v4);
  return (System_String_array *)v5;
}


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetBodySize(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v2; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C44810 & 1) == 0 )
  {
    sub_1C37058(&UIEquipGraphViewerRender_TypeInfo);
    byte_4C44810 = 1;
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

  if ( (byte_4C4480E & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C4480E = 1;
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
  if ( (byte_4C44819 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_6011/*"EndMoveAlpha"*/);
    byte_4C44819 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    method);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( duration <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&v17->fields.eventReceiver, (int32_t)gameObject, v19, v20);
        v21 = StringLiteral_6011/*"EndMoveAlpha"*/;
        v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6011/*"EndMoveAlpha"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v17->fields.callWhenFinished, v21, v22, v23);
        return;
      }
LABEL_16:
      sub_1C372B4(gameObject);
    }
  }
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIEquipGraphViewerRender__EndMoveAlpha(this, v25);
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
  if ( (byte_4C4481A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_6011/*"EndMoveAlpha"*/);
    byte_4C4481A = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    method);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveAlphaCallbackFunc, (int32_t)callbackFunc, v11, v12);
  if ( speed <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&v19->fields.eventReceiver, (int32_t)gameObject, v21, v22);
        v23 = StringLiteral_6011/*"EndMoveAlpha"*/;
        v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6011/*"EndMoveAlpha"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&v19->fields.callWhenFinished, v23, v24, v25);
        return;
      }
LABEL_19:
      sub_1C372B4(gameObject);
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


void UIEquipGraphViewerRender__RecoverSharder(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4C44815 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C37058(&StringLiteral_22280/*"normal"*/);
    sub_1C37058(&StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C37058(&StringLiteral_23501/*"silhouette"*/);
    byte_4C44815 = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23501/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22280/*"normal"*/, 0);
    v5 = &StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  UIEquipGraphViewerRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIEquipGraphViewerRender__ReleaseCharacter(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x20
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *mesh; // x20
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *nameRenderer; // x20
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *v19; // x20

  if ( (byte_4C44811 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44811 = 1;
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
      UIEquipGraphViewerRender__SetActiveBody(this, 0, v6);
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
      v8 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v8, 0);
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
    v10 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v10, 0);
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
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      UIEquipGraphViewerRender__SetActiveName(this, 0, v13);
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    v14 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
    {
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      v15 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v15, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyFilter, 0, 0);
    }
  }
  bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
  if ( !bodyFilter )
    goto LABEL_56;
  v16 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
    if ( bodyFilter )
    {
      v19 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v19, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_55;
      }
    }
LABEL_56:
    sub_1C372B4(bodyFilter);
  }
LABEL_55:
  this->fields.textureList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.textureList, 0, v17, v18);
}


void UIEquipGraphViewerRender__SetActiveBody(UIEquipGraphViewerRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_1C372B4(bodyRenderer);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyRenderer, isActive, 0);
}


void UIEquipGraphViewerRender__SetActiveName(UIEquipGraphViewerRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *nameRenderer; // x0

  nameRenderer = (UnityEngine_Component_o *)this->fields.nameRenderer;
  if ( !nameRenderer
    || (nameRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nameRenderer, 0)) == 0 )
  {
    sub_1C372B4(nameRenderer);
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
  sub_1C36FFC(
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
  char *bodyRenderer; // x0
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v14; // x8
  UnityEngine_Mesh_o *v15; // x20
  UIEquipGraphViewerRender_c *v16; // x8
  char *v17; // x21
  unsigned int v18; // w9
  struct UIEquipGraphViewerRender_StaticFields *v19; // x8
  int LEFT_X; // s0
  int v21; // s1
  int32x2_t v22; // d0
  struct UIEquipGraphViewerRender_StaticFields *v23; // x8
  int BOTTOM_Y; // s0
  int v25; // s1
  struct UIEquipGraphViewerRender_StaticFields *v26; // x8
  int v27; // s0
  int RIGHT_X; // s1
  char *v29; // x21
  unsigned int v30; // w9
  float32x2_t *v31; // x10
  float v32; // s1
  float32x2_t *v33; // x10
  float v34; // s0
  float32x2_t *v35; // x10
  float v36; // s0
  float32x2_t *v37; // x8
  float v38; // s0
  unsigned int v39; // w8
  struct UIEquipGraphViewerRender_StaticFields *v40; // x9
  float BODY_V; // s2
  struct UIEquipGraphViewerRender_StaticFields *v42; // x9
  float v43; // s0
  struct UIEquipGraphViewerRender_StaticFields *v44; // x8
  float32x2_t v45; // d0
  float32x2_t v46; // d1
  __int64 v47; // d2
  unsigned int v48; // w8
  struct UIEquipGraphViewerRender_StaticFields *v49; // x9
  float v50; // s2
  struct UIEquipGraphViewerRender_StaticFields *v51; // x9
  float v52; // s0
  struct UIEquipGraphViewerRender_StaticFields *v53; // x8
  float32x2_t v54; // d0
  float32x2_t v55; // d1
  __int64 v56; // d2
  System_Array_o *v57; // x0
  System_RuntimeFieldHandle_o v58; // x1
  System_Int32_array *v59; // x21
  long double v60; // q3
  _BOOL4 isTalkMask; // w9
  bool v62; // zf
  UIEquipGraphViewerRender_c *klass; // x8
  long double v64; // q0
  const MethodInfo *v65; // x2

  if ( (byte_4C44812 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Mesh_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C37058(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    sub_1C37058(&StringLiteral_16264/*"_MainTex"*/);
    sub_1C37058(&StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C37058(&StringLiteral_22280/*"normal"*/);
    sub_1C37058(&StringLiteral_16359/*"_SubTex"*/);
    sub_1C37058(&StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C37058(&StringLiteral_23501/*"silhouette"*/);
    byte_4C44812 = 1;
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
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23501/*"silhouette"*/, 0) )
  {
    v9 = (System_String_o *)StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22280/*"normal"*/, 0);
    v9 = (System_String_o *)StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v10 = UnityEngine_Shader__Find(v9, 0);
  v11 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v14 = this->fields.textureList;
  if ( !v14 )
    goto LABEL_46;
  if ( !LODWORD(v14->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v11,
    (System_String_o *)StringLiteral_16359/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v14->m_Items[0],
    0);
  bodyRenderer = (char *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v11, 0);
  v15 = (UnityEngine_Mesh_o *)sub_1C372A4(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v15, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  v16 = UIEquipGraphViewerRender_TypeInfo;
  v17 = bodyRenderer;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v16 = UIEquipGraphViewerRender_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_46;
  v18 = *((_DWORD *)v17 + 6);
  if ( !v18 )
    goto LABEL_45;
  v19 = v16->static_fields;
  LEFT_X = v19->LEFT_X;
  v21 = v19->TOP_Y;
  *((_DWORD *)v17 + 10) = 0;
  *((float *)v17 + 8) = (float)LEFT_X;
  *((float *)v17 + 9) = (float)v21;
  if ( v18 == 1 )
    goto LABEL_45;
  v22.n64_u64[0] = *(unsigned __int64 *)&UIEquipGraphViewerRender_TypeInfo->static_fields->RIGHT_X;
  *((_DWORD *)v17 + 13) = 0;
  *(float32x2_t *)(v17 + 44) = vcvt_f32_s32(v22);
  if ( v18 <= 2 )
    goto LABEL_45;
  v23 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  BOTTOM_Y = v23->BOTTOM_Y;
  v25 = v23->LEFT_X;
  *((_DWORD *)v17 + 16) = 0;
  *((float *)v17 + 14) = (float)v25;
  *((float *)v17 + 15) = (float)BOTTOM_Y;
  if ( v18 == 3 )
    goto LABEL_45;
  v26 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v27 = v26->BOTTOM_Y;
  RIGHT_X = v26->RIGHT_X;
  *((_DWORD *)v17 + 19) = 0;
  *((float *)v17 + 17) = (float)RIGHT_X;
  *((float *)v17 + 18) = (float)v27;
  if ( !v15 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v15, (UnityEngine_Vector3_array *)v17, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  v29 = bodyRenderer;
  if ( !byte_4C3C92A )
  {
    bodyRenderer = (char *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C92A = 1;
  }
  if ( !v29 )
LABEL_46:
    sub_1C372B4(bodyRenderer);
  v30 = *((_DWORD *)v29 + 6);
  if ( !v30 )
    goto LABEL_45;
  v31 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = -v31[10].n64_f32[0];
  *((float32x2_t *)v29 + 4) = vneg_f32(v31[9]);
  *((float *)v29 + 10) = v32;
  if ( v30 == 1 )
    goto LABEL_45;
  v33 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v34 = -v33[10].n64_f32[0];
  *(float32x2_t *)(v29 + 44) = vneg_f32(v33[9]);
  *((float *)v29 + 13) = v34;
  if ( v30 <= 2 )
    goto LABEL_45;
  v35 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v36 = -v35[10].n64_f32[0];
  *((float32x2_t *)v29 + 7) = vneg_f32(v35[9]);
  *((float *)v29 + 16) = v36;
  if ( v30 == 3 )
    goto LABEL_45;
  v37 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v38 = -v37[10].n64_f32[0];
  *(float32x2_t *)(v29 + 68) = vneg_f32(v37[9]);
  *((float *)v29 + 19) = v38;
  UnityEngine_Mesh__set_normals(v15, (UnityEngine_Vector3_array *)v29, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v39 = *((_DWORD *)bodyRenderer + 6);
  if ( !v39 )
    goto LABEL_45;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIEquipGraphViewerRender_TypeInfo->static_fields->BODY_U;
  if ( v39 == 1 )
    goto LABEL_45;
  v40 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  BODY_V = v40->BODY_V;
  *((float *)bodyRenderer + 10) = v40->BODY_U + v40->BODY_W;
  *((float *)bodyRenderer + 11) = BODY_V;
  if ( v39 <= 2 )
    goto LABEL_45;
  v42 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v43 = v42->BODY_V - v42->BODY_H;
  *((_DWORD *)bodyRenderer + 12) = LODWORD(v42->BODY_U);
  *((float *)bodyRenderer + 13) = v43;
  if ( v39 == 3 )
    goto LABEL_45;
  v44 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v45.n64_u64[0] = *(unsigned __int64 *)&v44->BODY_U;
  v46.n64_u64[0] = *(unsigned __int64 *)&v44->BODY_W;
  LODWORD(v47) = vadd_f32(v45, v46).n64_u32[0];
  HIDWORD(v47) = vsub_f32(v45, v46).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v47;
  UnityEngine_Mesh__set_uv(v15, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v48 = *((_DWORD *)bodyRenderer + 6);
  if ( !v48 )
    goto LABEL_45;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIEquipGraphViewerRender_TypeInfo->static_fields->BODY_U;
  if ( v48 == 1 )
    goto LABEL_45;
  v49 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v50 = v49->BODY_V;
  *((float *)bodyRenderer + 10) = v49->BODY_U + v49->BODY_W;
  *((float *)bodyRenderer + 11) = v50;
  if ( v48 <= 2
    || (v51 = UIEquipGraphViewerRender_TypeInfo->static_fields,
        v52 = v51->BODY_V - v51->BODY_H,
        *((_DWORD *)bodyRenderer + 12) = LODWORD(v51->BODY_U),
        *((float *)bodyRenderer + 13) = v52,
        v48 == 3) )
  {
LABEL_45:
    sub_1C372BC(bodyRenderer);
  }
  v53 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v54.n64_u64[0] = *(unsigned __int64 *)&v53->BODY_U;
  v55.n64_u64[0] = *(unsigned __int64 *)&v53->BODY_W;
  LODWORD(v56) = vadd_f32(v54, v55).n64_u32[0];
  HIDWORD(v56) = vsub_f32(v54, v55).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v56;
  UnityEngine_Mesh__set_uv2(v15, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v57 = (System_Array_o *)sub_1C37100(int___TypeInfo, 6);
  v58.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v59 = (System_Int32_array *)v57;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v57, v58, 0);
  UnityEngine_Mesh__set_triangles(v15, v59, 0);
  bodyRenderer = (char *)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v15, 0);
  UnityEngine_Mesh__RecalculateNormals(v15, 0);
  UnityEngine_Mesh__RecalculateBounds(v15, 0);
  isTalkMask = this->fields.isTalkMask;
  v62 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v64) = 1.0;
  if ( !v62 )
    *(float *)&v64 = 0.1;
  if ( isTalkMask )
    *(float *)&v64 = *(float *)&v64 * 0.5;
  *(float *)&v60 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v64,
    v64,
    v64,
    v60);
  UIEquipGraphViewerRender__SetActiveBody(this, 1, v65);
}


void UIEquipGraphViewerRender__SetDepth(UIEquipGraphViewerRender_o *this, float d, const MethodInfo *method)
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
    sub_1C372B4(transform);
  }
  v9.fields.z = -d;
  v9.fields.x = x;
  v9.fields.y = y;
  UnityEngine_Transform__set_localPosition(transform, v9, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.filterName, (int32_t)filterName, (int32_t)method, v4);
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
  if ( (byte_4C44816 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16223/*"_FilterColor"*/);
    byte_4C44816 = 1;
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
            (System_String_o *)StringLiteral_16223/*"_FilterColor"*/,
            v10,
            0),
          (bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer) == 0)
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
LABEL_10:
      sub_1C372B4(bodyRenderer);
    }
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16223/*"_FilterColor"*/,
      v11,
      0);
  }
}


void UIEquipGraphViewerRender__SetGradation(UIEquipGraphViewerRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C44817 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16236/*"_Gradation"*/);
    byte_4C44817 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16236/*"_Gradation"*/,
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
          (System_String_o *)StringLiteral_16236/*"_Gradation"*/,
          g,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C372B4(bodyRenderer);
  }
}


void UIEquipGraphViewerRender__SetLayer(UIEquipGraphViewerRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v7; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIEquipGraphViewerRender__SetLayer_43968540(this, transform, layer, v7);
  }
}


void UIEquipGraphViewerRender__SetLayer_43968540(
        UIEquipGraphViewerRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIEquipGraphViewerRender_o *v6; // x21
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
  if ( (byte_4C4481C & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    this = (UIEquipGraphViewerRender_o *)sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C4481C = 1;
  }
  if ( !tf
    || (this = (UIEquipGraphViewerRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
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
      v11 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v15 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
        sub_1C37574(v16);
        goto LABEL_33;
      }
    }
    UIEquipGraphViewerRender__SetLayer_43968540(v6, v16, layer, v17);
  }
  v19 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
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
      v24 = sub_1C87870(v19, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  }
}


void UIEquipGraphViewerRender__SetMaskInteraction(
        UIEquipGraphViewerRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  int32_t v6; // w19

  if ( (byte_4C4481D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16352/*"_StencilComp"*/);
    byte_4C4481D = 1;
  }
  RenderingCompareFunction = (UnityEngine_Material_o *)UITweenRenderer__GetRenderingCompareFunction(
                                                         (UITweenRenderer_o *)this,
                                                         maskInteraction,
                                                         0);
  if ( !this->fields.bodyRenderer
    || (v6 = (int)RenderingCompareFunction,
        (RenderingCompareFunction = UnityEngine_Renderer__get_material(
                                      (UnityEngine_Renderer_o *)this->fields.bodyRenderer,
                                      0)) == 0)
    || (UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16352/*"_StencilComp"*/, v6, 0),
        (RenderingCompareFunction = (UnityEngine_Material_o *)this->fields.nameRenderer) == 0)
    || (RenderingCompareFunction = UnityEngine_Renderer__get_material(
                                     (UnityEngine_Renderer_o *)RenderingCompareFunction,
                                     0)) == 0 )
  {
    sub_1C372B4(RenderingCompareFunction);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16352/*"_StencilComp"*/, v6, 0);
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
  char *nameRenderer; // x0
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v18; // x8
  UnityEngine_Mesh_o *v19; // x20
  UIEquipGraphViewerRender_c *v20; // x8
  float *v21; // x21
  unsigned int v22; // w9
  struct UIEquipGraphViewerRender_StaticFields *v23; // x8
  int LEFT_X; // s0
  float v25; // s1
  struct UIEquipGraphViewerRender_StaticFields *v26; // x8
  int RIGHT_X; // s0
  float v28; // s1
  struct UIEquipGraphViewerRender_StaticFields *v29; // x8
  int v30; // s0
  float NAME_BOTTOM_Y; // s1
  struct UIEquipGraphViewerRender_StaticFields *v32; // x8
  int v33; // s0
  float v34; // s1
  char *v35; // x21
  unsigned int v36; // w9
  float32x2_t *v37; // x10
  float v38; // s1
  float32x2_t *v39; // x10
  float v40; // s0
  float32x2_t *v41; // x10
  float v42; // s0
  float32x2_t *v43; // x8
  float v44; // s0
  unsigned int v45; // w8
  unsigned int v46; // w8
  System_Array_o *v47; // x0
  System_RuntimeFieldHandle_o v48; // x1
  System_Int32_array *v49; // x21
  long double v50; // q3
  _BOOL4 isTalkMask; // w9
  bool v52; // zf
  UIEquipGraphViewerRender_c *klass; // x8
  long double v54; // q0
  const MethodInfo *v55; // x2

  if ( (byte_4C44813 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Mesh_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C37058(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    sub_1C37058(&StringLiteral_16264/*"_MainTex"*/);
    sub_1C37058(&StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C37058(&StringLiteral_22280/*"normal"*/);
    sub_1C37058(&StringLiteral_16359/*"_SubTex"*/);
    sub_1C37058(&StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C37058(&StringLiteral_23501/*"silhouette"*/);
    byte_4C44813 = 1;
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
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23501/*"silhouette"*/, 0) )
  {
    v13 = (System_String_o *)StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22280/*"normal"*/, 0);
    v13 = (System_String_o *)StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v14 = UnityEngine_Shader__Find(v13, 0);
  v15 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v18 = this->fields.textureList;
  if ( !v18 )
    goto LABEL_46;
  if ( !LODWORD(v18->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16359/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v18->m_Items[0],
    0);
  nameRenderer = (char *)this->fields.nameRenderer;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)nameRenderer, v15, 0);
  v19 = (UnityEngine_Mesh_o *)sub_1C372A4(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v19, 0);
  nameRenderer = (char *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  v20 = UIEquipGraphViewerRender_TypeInfo;
  v21 = (float *)nameRenderer;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v20 = UIEquipGraphViewerRender_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_46;
  v22 = *((_DWORD *)v21 + 6);
  if ( !v22 )
    goto LABEL_45;
  v23 = v20->static_fields;
  LEFT_X = v23->LEFT_X;
  v25 = v23->NAME_TOP_Y;
  v21[10] = 0.0;
  v21[8] = (float)LEFT_X;
  v21[9] = v25;
  if ( v22 == 1 )
    goto LABEL_45;
  v26 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  RIGHT_X = v26->RIGHT_X;
  v28 = v26->NAME_TOP_Y;
  v21[13] = 0.0;
  v21[11] = (float)RIGHT_X;
  v21[12] = v28;
  if ( v22 <= 2 )
    goto LABEL_45;
  v29 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v30 = v29->LEFT_X;
  NAME_BOTTOM_Y = v29->NAME_BOTTOM_Y;
  v21[16] = 0.0;
  v21[14] = (float)v30;
  v21[15] = NAME_BOTTOM_Y;
  if ( v22 == 3 )
    goto LABEL_45;
  v32 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v33 = v32->RIGHT_X;
  v34 = v32->NAME_BOTTOM_Y;
  v21[19] = 0.0;
  v21[17] = (float)v33;
  v21[18] = v34;
  if ( !v19 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v19, (UnityEngine_Vector3_array *)v21, 0);
  nameRenderer = (char *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  v35 = nameRenderer;
  if ( !byte_4C3C92A )
  {
    nameRenderer = (char *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C92A = 1;
  }
  if ( !v35 )
LABEL_46:
    sub_1C372B4(nameRenderer);
  v36 = *((_DWORD *)v35 + 6);
  if ( !v36 )
    goto LABEL_45;
  v37 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v38 = -v37[10].n64_f32[0];
  *((float32x2_t *)v35 + 4) = vneg_f32(v37[9]);
  *((float *)v35 + 10) = v38;
  if ( v36 == 1 )
    goto LABEL_45;
  v39 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v40 = -v39[10].n64_f32[0];
  *(float32x2_t *)(v35 + 44) = vneg_f32(v39[9]);
  *((float *)v35 + 13) = v40;
  if ( v36 <= 2 )
    goto LABEL_45;
  v41 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v42 = -v41[10].n64_f32[0];
  *((float32x2_t *)v35 + 7) = vneg_f32(v41[9]);
  *((float *)v35 + 16) = v42;
  if ( v36 == 3 )
    goto LABEL_45;
  v43 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v44 = -v43[10].n64_f32[0];
  *(float32x2_t *)(v35 + 68) = vneg_f32(v43[9]);
  *((float *)v35 + 19) = v44;
  UnityEngine_Mesh__set_normals(v19, (UnityEngine_Vector3_array *)v35, 0);
  nameRenderer = (char *)sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !nameRenderer )
    goto LABEL_46;
  v45 = *((_DWORD *)nameRenderer + 6);
  if ( !v45 )
    goto LABEL_45;
  *((_QWORD *)nameRenderer + 4) = 0x3E11FDDF00000000LL;
  if ( v45 == 1 )
    goto LABEL_45;
  *((_QWORD *)nameRenderer + 5) = 0x3E11FDDF3F000000LL;
  if ( v45 <= 2 )
    goto LABEL_45;
  *((_QWORD *)nameRenderer + 6) = 0;
  if ( v45 == 3 )
    goto LABEL_45;
  *((_QWORD *)nameRenderer + 7) = 1056964608;
  UnityEngine_Mesh__set_uv(v19, (UnityEngine_Vector2_array *)nameRenderer, 0);
  nameRenderer = (char *)sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !nameRenderer )
    goto LABEL_46;
  v46 = *((_DWORD *)nameRenderer + 6);
  if ( !v46
    || (*((_QWORD *)nameRenderer + 4) = 0x3E11FDDF00000000LL, v46 == 1)
    || (*((_QWORD *)nameRenderer + 5) = 0x3E11FDDF3F000000LL, v46 <= 2)
    || (*((_QWORD *)nameRenderer + 6) = 0, v46 == 3) )
  {
LABEL_45:
    sub_1C372BC(nameRenderer);
  }
  *((_QWORD *)nameRenderer + 7) = 1056964608;
  UnityEngine_Mesh__set_uv2(v19, (UnityEngine_Vector2_array *)nameRenderer, 0);
  v47 = (System_Array_o *)sub_1C37100(int___TypeInfo, 6);
  v48.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v49 = (System_Int32_array *)v47;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v47, v48, 0);
  UnityEngine_Mesh__set_triangles(v19, v49, 0);
  nameRenderer = (char *)this->fields.nameFilter;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)nameRenderer, v19, 0);
  UnityEngine_Mesh__RecalculateNormals(v19, 0);
  UnityEngine_Mesh__RecalculateBounds(v19, 0);
  isTalkMask = this->fields.isTalkMask;
  v52 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v54) = 1.0;
  if ( !v52 )
    *(float *)&v54 = 0.1;
  if ( isTalkMask )
    *(float *)&v54 = *(float *)&v54 * 0.5;
  *(float *)&v50 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v54,
    v54,
    v54,
    v50);
  UIEquipGraphViewerRender__SetActiveName(this, 1, v55);
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

  if ( (byte_4C44814 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44814 = 1;
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
    sub_1C372B4(bodyRenderer);
  }
}


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
    sub_1C372B4(bodyRenderer);
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
  UnityEngine_Renderer_o *bodyRenderer; // x0
  bool v9; // w20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4C4480F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    byte_4C4480F = 1;
  }
  v10.fields.r = r;
  v10.fields.g = g;
  v10.fields.b = b;
  v10.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v10, 0);
  if ( !this->fields.textureList )
    goto LABEL_12;
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  v11.fields.r = r;
  v11.fields.g = g;
  v11.fields.b = b;
  v11.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16173/*"_Color"*/, v11, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_16;
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16173/*"_Color"*/, v12, 0);
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
        v9 = 0;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1C372B4(bodyRenderer);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  v9 = 1;
  UnityEngine_Renderer__set_enabled(bodyRenderer, 1, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
LABEL_15:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v9, 0);
}


void UIEquipGraphViewerRender__SetVolume(UIEquipGraphViewerRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C44818 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16409/*"_Volume"*/);
    byte_4C44818 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16409/*"_Volume"*/,
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
          (System_String_o *)StringLiteral_16409/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C372B4(bodyRenderer);
  }
}