void UIEquipGraphRender___cctor(const MethodInfo *method)
{
  struct UIEquipGraphRender_StaticFields *static_fields; // x8

  if ( (byte_4C447FA & 1) == 0 )
  {
    sub_1C37058(&UIEquipGraphRender_TypeInfo);
    byte_4C447FA = 1;
  }
  static_fields = UIEquipGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_C0F350;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_C0EB10;
  *(_OWORD *)&static_fields->BODY_U = xmmword_C0E7E0;
}


void UIEquipGraphRender___ctor(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C447F9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22280/*"normal"*/);
    byte_4C447F9 = 1;
  }
  v5 = StringLiteral_22280/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22280/*"normal"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.filterName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIEquipGraphRender__EndMoveAlpha(UIEquipGraphRender_o *this, const MethodInfo *method)
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

  if ( (byte_4C447F6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447F6 = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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


System_String_array *UIEquipGraphRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_String_o *v5; // x20

  v2 = imageName;
  if ( (byte_4C447E8 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_4387/*"CharaGraph/9400010"*/);
    imageName = (System_String_o *)sub_1C37058(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C447E8 = 1;
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


UnityEngine_Vector2_o UIEquipGraphRender__GetBodySize(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  UIEquipGraphRender_c *v2; // x0
  struct UIEquipGraphRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C447EB & 1) == 0 )
  {
    sub_1C37058(&UIEquipGraphRender_TypeInfo);
    byte_4C447EB = 1;
  }
  v2 = UIEquipGraphRender_TypeInfo;
  if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
    v2 = UIEquipGraphRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  BODY_SIZE_X = (float)static_fields->BODY_SIZE_X;
  BODY_SIZE_Y = (float)static_fields->BODY_SIZE_Y;
  result.fields.y = BODY_SIZE_Y;
  result.fields.x = BODY_SIZE_X;
  return result;
}


UnityEngine_Vector2_o UIEquipGraphRender__GetCenterOffset(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  float v3; // s0
  int HEIGHT; // w8
  int v5; // w8
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C447E9 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C447E9 = 1;
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


UnityEngine_Vector2_o UIEquipGraphRender__GetCharacterOffset(const MethodInfo *method)
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


UnityEngine_Vector2_o UIEquipGraphRender__GetCharacterOffsetMyroom(const MethodInfo *method)
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


bool UIEquipGraphRender__IsBusyMoveAlpha(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  return this->fields.isBusyMoveAlpha;
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphRender__MoveAlpha(
        UIEquipGraphRender_o *this,
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
  if ( (byte_4C447F4 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_6011/*"EndMoveAlpha"*/);
    byte_4C447F4 = 1;
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
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIEquipGraphRender__EndMoveAlpha(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphRender__MoveAlphaSpeed(
        UIEquipGraphRender_o *this,
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
  if ( (byte_4C447F5 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_6011/*"EndMoveAlpha"*/);
    byte_4C447F5 = 1;
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
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v8);
  UIEquipGraphRender__EndMoveAlpha(this, v27);
}


void UIEquipGraphRender__RecoverSharder(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4C447EF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C37058(&StringLiteral_22280/*"normal"*/);
    sub_1C37058(&StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C37058(&StringLiteral_23501/*"silhouette"*/);
    byte_4C447EF = 1;
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
  UIEquipGraphRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIEquipGraphRender__ReleaseCharacter(UIEquipGraphRender_o *this, const MethodInfo *method)
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

  if ( (byte_4C447EC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447EC = 1;
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
      UIEquipGraphRender__SetActive(this, 0, v6);
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
      UnityEngine_Object__Destroy_71266752(v8, 0);
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
      UnityEngine_Object__Destroy_71266752(v12, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_1C372B4(bodyFilter);
  }
LABEL_29:
  this->fields.textureList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.textureList, 0, v10, v11);
}


void UIEquipGraphRender__SetActive(UIEquipGraphRender_o *this, bool isActive, const MethodInfo *method)
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


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphRender__SetAlpha(UIEquipGraphRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIEquipGraphRender__SetBaseColor(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3

  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
}


void UIEquipGraphRender__SetCharacter(
        UIEquipGraphRender_o *this,
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
  UIEquipGraphRender__SetCharacterRender(this, v6);
}


void UIEquipGraphRender__SetCharacterRender(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  UIEquipGraphRender_c *v3; // x0
  System_String_o *filterName; // x20
  int32_t TOP_Y; // w8
  int32_t v6; // w8
  System_String_o *v7; // x0
  UnityEngine_Shader_o *v8; // x21
  UnityEngine_Material_o *v9; // x20
  char *bodyRenderer; // x0
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v12; // x8
  UnityEngine_Mesh_o *v13; // x20
  UIEquipGraphRender_c *v14; // x8
  char *v15; // x21
  unsigned int v16; // w9
  struct UIEquipGraphRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int v19; // s1
  int32x2_t v20; // d0
  struct UIEquipGraphRender_StaticFields *v21; // x8
  int BOTTOM_Y; // s0
  int v23; // s1
  struct UIEquipGraphRender_StaticFields *v24; // x8
  int v25; // s0
  int RIGHT_X; // s1
  char *v27; // x21
  unsigned int v28; // w9
  float32x2_t *v29; // x10
  float v30; // s1
  float32x2_t *v31; // x10
  float v32; // s0
  float32x2_t *v33; // x10
  float v34; // s0
  float32x2_t *v35; // x8
  float v36; // s0
  unsigned int v37; // w8
  struct UIEquipGraphRender_StaticFields *v38; // x9
  float BODY_V; // s2
  struct UIEquipGraphRender_StaticFields *v40; // x9
  float v41; // s0
  struct UIEquipGraphRender_StaticFields *v42; // x8
  float32x2_t v43; // d0
  float32x2_t v44; // d1
  __int64 v45; // d2
  unsigned int v46; // w8
  struct UIEquipGraphRender_StaticFields *v47; // x9
  float v48; // s2
  struct UIEquipGraphRender_StaticFields *v49; // x9
  float v50; // s0
  struct UIEquipGraphRender_StaticFields *v51; // x8
  float32x2_t v52; // d0
  float32x2_t v53; // d1
  __int64 v54; // d2
  System_Array_o *v55; // x0
  System_RuntimeFieldHandle_o v56; // x1
  System_Int32_array *v57; // x21
  long double v58; // q3
  _BOOL4 isTalkMask; // w9
  bool v60; // zf
  UIEquipGraphRender_c *klass; // x8
  long double v62; // q0
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x2

  if ( (byte_4C447ED & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&UnityEngine_Mesh_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C37058(&UIEquipGraphRender_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    sub_1C37058(&StringLiteral_16264/*"_MainTex"*/);
    sub_1C37058(&StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C37058(&StringLiteral_22280/*"normal"*/);
    sub_1C37058(&StringLiteral_16359/*"_SubTex"*/);
    sub_1C37058(&StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C37058(&StringLiteral_23501/*"silhouette"*/);
    byte_4C447ED = 1;
  }
  v3 = UIEquipGraphRender_TypeInfo;
  if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
    v3 = UIEquipGraphRender_TypeInfo;
  }
  filterName = this->fields.filterName;
  TOP_Y = v3->static_fields->TOP_Y;
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-TOP_Y;
  v6 = v3->static_fields->TOP_Y;
  this->fields.dispOffset.fields.x = 0.0;
  this->fields.dispOffset.fields.y = (float)-v6;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23501/*"silhouette"*/, 0) )
  {
    v7 = (System_String_o *)StringLiteral_4918/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22280/*"normal"*/, 0);
    v7 = (System_String_o *)StringLiteral_4917/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v8 = UnityEngine_Shader__Find(v7, 0);
  v9 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v9, v8, 0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_46;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_45;
  if ( !v9 )
    goto LABEL_46;
  UnityEngine_Material__SetTexture(
    v9,
    (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v12 = this->fields.textureList;
  if ( !v12 )
    goto LABEL_46;
  if ( !LODWORD(v12->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v9,
    (System_String_o *)StringLiteral_16359/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v12->m_Items[0],
    0);
  bodyRenderer = (char *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v9, 0);
  v13 = (UnityEngine_Mesh_o *)sub_1C372A4(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v13, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  v14 = UIEquipGraphRender_TypeInfo;
  v15 = bodyRenderer;
  if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
    v14 = UIEquipGraphRender_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_46;
  v16 = *((_DWORD *)v15 + 6);
  if ( !v16 )
    goto LABEL_45;
  static_fields = v14->static_fields;
  LEFT_X = static_fields->LEFT_X;
  v19 = static_fields->TOP_Y;
  *((_DWORD *)v15 + 10) = 0;
  *((float *)v15 + 8) = (float)LEFT_X;
  *((float *)v15 + 9) = (float)v19;
  if ( v16 == 1 )
    goto LABEL_45;
  v20.n64_u64[0] = *(unsigned __int64 *)&UIEquipGraphRender_TypeInfo->static_fields->RIGHT_X;
  *((_DWORD *)v15 + 13) = 0;
  *(float32x2_t *)(v15 + 44) = vcvt_f32_s32(v20);
  if ( v16 <= 2 )
    goto LABEL_45;
  v21 = UIEquipGraphRender_TypeInfo->static_fields;
  BOTTOM_Y = v21->BOTTOM_Y;
  v23 = v21->LEFT_X;
  *((_DWORD *)v15 + 16) = 0;
  *((float *)v15 + 14) = (float)v23;
  *((float *)v15 + 15) = (float)BOTTOM_Y;
  if ( v16 == 3 )
    goto LABEL_45;
  v24 = UIEquipGraphRender_TypeInfo->static_fields;
  v25 = v24->BOTTOM_Y;
  RIGHT_X = v24->RIGHT_X;
  *((_DWORD *)v15 + 19) = 0;
  *((float *)v15 + 17) = (float)RIGHT_X;
  *((float *)v15 + 18) = (float)v25;
  if ( !v13 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v13, (UnityEngine_Vector3_array *)v15, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  v27 = bodyRenderer;
  if ( !byte_4C3C92A )
  {
    bodyRenderer = (char *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C92A = 1;
  }
  if ( !v27 )
LABEL_46:
    sub_1C372B4(bodyRenderer);
  v28 = *((_DWORD *)v27 + 6);
  if ( !v28 )
    goto LABEL_45;
  v29 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v30 = -v29[10].n64_f32[0];
  *((float32x2_t *)v27 + 4) = vneg_f32(v29[9]);
  *((float *)v27 + 10) = v30;
  if ( v28 == 1 )
    goto LABEL_45;
  v31 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = -v31[10].n64_f32[0];
  *(float32x2_t *)(v27 + 44) = vneg_f32(v31[9]);
  *((float *)v27 + 13) = v32;
  if ( v28 <= 2 )
    goto LABEL_45;
  v33 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v34 = -v33[10].n64_f32[0];
  *((float32x2_t *)v27 + 7) = vneg_f32(v33[9]);
  *((float *)v27 + 16) = v34;
  if ( v28 == 3 )
    goto LABEL_45;
  v35 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v36 = -v35[10].n64_f32[0];
  *(float32x2_t *)(v27 + 68) = vneg_f32(v35[9]);
  *((float *)v27 + 19) = v36;
  UnityEngine_Mesh__set_normals(v13, (UnityEngine_Vector3_array *)v27, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v37 = *((_DWORD *)bodyRenderer + 6);
  if ( !v37 )
    goto LABEL_45;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIEquipGraphRender_TypeInfo->static_fields->BODY_U;
  if ( v37 == 1 )
    goto LABEL_45;
  v38 = UIEquipGraphRender_TypeInfo->static_fields;
  BODY_V = v38->BODY_V;
  *((float *)bodyRenderer + 10) = v38->BODY_U + v38->BODY_W;
  *((float *)bodyRenderer + 11) = BODY_V;
  if ( v37 <= 2 )
    goto LABEL_45;
  v40 = UIEquipGraphRender_TypeInfo->static_fields;
  v41 = v40->BODY_V - v40->BODY_H;
  *((_DWORD *)bodyRenderer + 12) = LODWORD(v40->BODY_U);
  *((float *)bodyRenderer + 13) = v41;
  if ( v37 == 3 )
    goto LABEL_45;
  v42 = UIEquipGraphRender_TypeInfo->static_fields;
  v43.n64_u64[0] = *(unsigned __int64 *)&v42->BODY_U;
  v44.n64_u64[0] = *(unsigned __int64 *)&v42->BODY_W;
  LODWORD(v45) = vadd_f32(v43, v44).n64_u32[0];
  HIDWORD(v45) = vsub_f32(v43, v44).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v45;
  UnityEngine_Mesh__set_uv(v13, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = (char *)sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v46 = *((_DWORD *)bodyRenderer + 6);
  if ( !v46 )
    goto LABEL_45;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIEquipGraphRender_TypeInfo->static_fields->BODY_U;
  if ( v46 == 1 )
    goto LABEL_45;
  v47 = UIEquipGraphRender_TypeInfo->static_fields;
  v48 = v47->BODY_V;
  *((float *)bodyRenderer + 10) = v47->BODY_U + v47->BODY_W;
  *((float *)bodyRenderer + 11) = v48;
  if ( v46 <= 2
    || (v49 = UIEquipGraphRender_TypeInfo->static_fields,
        v50 = v49->BODY_V - v49->BODY_H,
        *((_DWORD *)bodyRenderer + 12) = LODWORD(v49->BODY_U),
        *((float *)bodyRenderer + 13) = v50,
        v46 == 3) )
  {
LABEL_45:
    sub_1C372BC(bodyRenderer);
  }
  v51 = UIEquipGraphRender_TypeInfo->static_fields;
  v52.n64_u64[0] = *(unsigned __int64 *)&v51->BODY_U;
  v53.n64_u64[0] = *(unsigned __int64 *)&v51->BODY_W;
  LODWORD(v54) = vadd_f32(v52, v53).n64_u32[0];
  HIDWORD(v54) = vsub_f32(v52, v53).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v54;
  UnityEngine_Mesh__set_uv2(v13, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v55 = (System_Array_o *)sub_1C37100(int___TypeInfo, 6);
  v56.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v57 = (System_Int32_array *)v55;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v55, v56, 0);
  UnityEngine_Mesh__set_triangles(v13, v57, 0);
  bodyRenderer = (char *)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v13, 0);
  UnityEngine_Mesh__RecalculateNormals(v13, 0);
  UnityEngine_Mesh__RecalculateBounds(v13, 0);
  isTalkMask = this->fields.isTalkMask;
  v60 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v62) = 1.0;
  if ( !v60 )
    *(float *)&v62 = 0.1;
  if ( isTalkMask )
    *(float *)&v62 = *(float *)&v62 * 0.5;
  *(float *)&v58 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v62,
    v62,
    v62,
    v58);
  UIEquipGraphRender__SetFilterColor(this, this->fields.filterColor, v63);
  UIEquipGraphRender__SetActive(this, 1, v64);
}


void UIEquipGraphRender__SetDepth(UIEquipGraphRender_o *this, float d, const MethodInfo *method)
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


void UIEquipGraphRender__SetFilter(
        UIEquipGraphRender_o *this,
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
  UIEquipGraphRender__RecoverSharder(this, v10);
  v12.fields.b = b;
  v12.fields.a = a;
  v12.fields.r = r;
  v12.fields.g = g;
  UIEquipGraphRender__SetFilterColor(this, v12, v11);
}


void UIEquipGraphRender__SetFilterColor(UIEquipGraphRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
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
  if ( (byte_4C447F1 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16223/*"_FilterColor"*/);
    byte_4C447F1 = 1;
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
      sub_1C372B4(bodyRenderer);
    }
    v10.fields.b = b;
    v10.fields.a = a;
    v10.fields.r = r;
    v10.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16223/*"_FilterColor"*/,
      v10,
      0);
  }
}


void UIEquipGraphRender__SetGradation(UIEquipGraphRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C447F2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16236/*"_Gradation"*/);
    byte_4C447F2 = 1;
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


void UIEquipGraphRender__SetLayer(UIEquipGraphRender_o *this, int32_t layer, const MethodInfo *method)
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
    UIEquipGraphRender__SetLayer_43951432(this, transform, layer, v7);
  }
}


void UIEquipGraphRender__SetLayer_43951432(
        UIEquipGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIEquipGraphRender_o *v6; // x21
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
  if ( (byte_4C447F7 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    this = (UIEquipGraphRender_o *)sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C447F7 = 1;
  }
  if ( !tf
    || (this = (UIEquipGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
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
    UIEquipGraphRender__SetLayer_43951432(v6, v16, layer, v17);
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


void UIEquipGraphRender__SetMaskInteraction(
        UIEquipGraphRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  UnityEngine_Renderer_o *bodyRenderer; // x8
  int32_t v7; // w19

  if ( (byte_4C447F8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16352/*"_StencilComp"*/);
    byte_4C447F8 = 1;
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
    sub_1C372B4(RenderingCompareFunction);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16352/*"_StencilComp"*/, v7, 0);
}


void UIEquipGraphRender__SetShadow(UIEquipGraphRender_o *this, bool isShadow, const MethodInfo *method)
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
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIEquipGraphRender__SetSharder(UIEquipGraphRender_o *this, System_String_o *shaderName, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *material; // x20

  if ( (byte_4C447EE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C447EE = 1;
  }
  if ( this->fields.textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(material, 0, 0) )
        return;
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(shaderName, 0);
      if ( material )
      {
        UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, (UnityEngine_Shader_o *)bodyRenderer, 0);
        return;
      }
    }
    sub_1C372B4(bodyRenderer);
  }
}


void UIEquipGraphRender__SetSortingOrder(UIEquipGraphRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_1C372B4(0);
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIEquipGraphRender__SetTalkMask(UIEquipGraphRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  UIEquipGraphRender_c *klass; // x8

  LODWORD(v3) = 1036831949;
  klass = this->klass;
  if ( !this->fields.isShadow )
    *(float *)&v3 = 1.0;
  this->fields.isTalkMask = isMask;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIEquipGraphRender__SetTweenColor(UIEquipGraphRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
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
  if ( (byte_4C447EA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    byte_4C447EA = 1;
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16173/*"_Color"*/, v11, 0);
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
    sub_1C372B4(bodyRenderer);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_12;
  v9 = 1;
LABEL_11:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v9, 0);
}


void UIEquipGraphRender__SetVolume(UIEquipGraphRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C447F3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16409/*"_Volume"*/);
    byte_4C447F3 = 1;
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


void UIEquipGraphRender__SetWipeTexture(
        UIEquipGraphRender_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  void *bodyRenderer; // x0
  float x; // s8
  int v7; // s9
  int32_t height; // w20
  UIEquipGraphRender_c *v9; // x8
  struct UIEquipGraphRender_StaticFields *static_fields; // x8
  float y; // s8
  int32_t BODY_SIZE_Y; // w19
  int MAIN_SIZE_Y; // s9

  if ( (byte_4C447F0 & 1) == 0 )
  {
    sub_1C37058(&UIEquipGraphRender_TypeInfo);
    sub_1C37058(&StringLiteral_16415/*"_WipeY"*/);
    sub_1C37058(&StringLiteral_16413/*"_WipeTex"*/);
    sub_1C37058(&StringLiteral_16414/*"_WipeX"*/);
    byte_4C447F0 = 1;
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_16413/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16414/*"_WipeX"*/,
         0) )
  {
    x = this->fields.figureOffset.fields.x;
    bodyRenderer = UIEquipGraphRender_TypeInfo;
    if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
      bodyRenderer = UIEquipGraphRender_TypeInfo;
    }
    if ( !this->fields.bodyRenderer )
      goto LABEL_22;
    v7 = **((_DWORD **)bodyRenderer + 23);
    bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this->fields.bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_22;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16414/*"_WipeX"*/,
      (float)-x / (float)v7,
      0);
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71132888(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16415/*"_WipeY"*/,
         0) )
  {
    height = UnityEngine_Screen__get_height(0);
    v9 = UIEquipGraphRender_TypeInfo;
    if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
      v9 = UIEquipGraphRender_TypeInfo;
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
          (System_String_o *)StringLiteral_16415/*"_WipeY"*/,
          (float)((float)((float)(height - BODY_SIZE_Y) * 0.5) - y) / (float)MAIN_SIZE_Y,
          0);
        return;
      }
    }
LABEL_22:
    sub_1C372B4(bodyRenderer);
  }
}