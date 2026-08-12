void UIVerticalImageRender___cctor(const MethodInfo *method)
{
  struct UIVerticalImageRender_StaticFields *static_fields; // x8

  if ( (byte_5972270 & 1) == 0 )
  {
    sub_2213A60(&UIVerticalImageRender_TypeInfo);
    byte_5972270 = 1;
  }
  static_fields = UIVerticalImageRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_E9CF30;
  *(_OWORD *)&static_fields->OVERLAP_V = xmmword_E9DAE0;
  *(_QWORD *)&static_fields->BOTTOM_Y = 0xFFFFF2C2FFFFFA42LL;
  *(_OWORD *)&static_fields->BODY_U = xmmword_E9D510;
  *(_QWORD *)&static_fields->BODY_W = 0x3F77A0003EFF4000LL;
}


void UIVerticalImageRender___ctor(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_597226F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    byte_597226F = 1;
  }
  v9 = StringLiteral_23407/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_23407/*"normal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.filterName, v9, v2, v3, v4, v5, v6, v7);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  UIWidget___ctor((UIWidget_o *)this, 0);
}


void UIVerticalImageRender__EndMoveAlpha(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3
  UnityEngine_Object_o *moveAlphaCallbackObject; // x20
  System_String_o *moveAlphaCallbackFunc; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_Object_c *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1

  if ( (byte_597226C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597226C = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
  moveAlphaCallbackObject = (UnityEngine_Object_o *)this->fields.moveAlphaCallbackObject;
  moveAlphaCallbackFunc = this->fields.moveAlphaCallbackFunc;
  this->fields.moveAlphaCallbackObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v13, v14, v15, v16, v17, v18);
  v20 = UnityEngine_Object_TypeInfo;
  this->fields.isBusyMoveAlpha = 0;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v19);
  v21 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v21 )
  {
    if ( !moveAlphaCallbackObject )
      sub_2213CDC(v21, v22);
    UnityEngine_GameObject__SendMessage_83438096(
      (UnityEngine_GameObject_o *)moveAlphaCallbackObject,
      moveAlphaCallbackFunc,
      0);
  }
}


System_String_array *UIVerticalImageRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  bool isExistAssetStorage; // w0
  __int64 v5; // x22
  bool v6; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x20
  void *v14; // x1

  v2 = imageName;
  if ( (byte_597225E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_7897/*"Image/00001"*/);
    imageName = (System_String_o *)sub_2213A60(&StringLiteral_7896/*"Image/"*/);
    byte_597225E = 1;
  }
  if ( !v2 )
    goto LABEL_14;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_7896/*"Image/"*/, 0) )
    v2 = System_String__Concat_75651716((System_String_o *)StringLiteral_7896/*"Image/"*/, v2, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
  isExistAssetStorage = AssetManager__isExistAssetStorage(v2, 0);
  v5 = StringLiteral_7897/*"Image/00001"*/;
  v6 = isExistAssetStorage;
  imageName = (System_String_o *)sub_2213B20(string___TypeInfo, 1);
  if ( !imageName )
LABEL_14:
    sub_2213CDC(imageName, method);
  v13 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_2213CE4(imageName);
  if ( v6 )
    v14 = v2;
  else
    v14 = (void *)v5;
  imageName[1].monitor = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&imageName[1].monitor, (int32_t)v14, v7, v8, v9, v10, v11, v12);
  return (System_String_array *)v13;
}


UnityEngine_Vector2_o UIVerticalImageRender__GetBodySize(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  UIVerticalImageRender_c *v2; // x0
  struct UIVerticalImageRender_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5972261 & 1) == 0 )
  {
    sub_2213A60(&UIVerticalImageRender_TypeInfo);
    byte_5972261 = 1;
  }
  v2 = UIVerticalImageRender_TypeInfo;
  if ( !*(&UIVerticalImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo, method);
    v2 = UIVerticalImageRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  result.fields.x = (float)static_fields->BODY_SIZE_X;
  result.fields.y = (float)static_fields->BODY_SIZE_Y;
  return result;
}


UnityEngine_Vector2_o UIVerticalImageRender__GetCenterOffset(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int HEIGHT; // w8
  int v5; // w8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_597225F & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_597225F = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  result.fields.x = 0.0;
  HEIGHT = v2->static_fields->HEIGHT;
  if ( HEIGHT <= 0 )
    v5 = -HEIGHT;
  else
    v5 = 1 - HEIGHT;
  result.fields.y = (float)(v5 >> 1);
  return result;
}


UnityEngine_Vector2_o UIVerticalImageRender__GetCharacterOffset(const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = 0.0;
  result.fields.y = 0.0;
  return result;
}


UnityEngine_Vector2_o UIVerticalImageRender__GetCharacterOffsetMyroom(const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = 0.0;
  result.fields.y = 0.0;
  return result;
}


bool UIVerticalImageRender__IsBusyMoveAlpha(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  return this->fields.isBusyMoveAlpha;
}


void UIVerticalImageRender__MoveAlpha(
        UIVerticalImageRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  float r; // s10
  float g; // s11
  float b; // s12
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  TweenRendererColor_o *v26; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v44; // x1
  UnityEngine_Color_o v45; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_597226A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_597226A = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    callbackFunc,
    (System_String_o *)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackFunc,
    (int32_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( duration <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
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
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v45.fields.r = r;
    v45.fields.g = g;
    v45.fields.b = b;
    v45.fields.a = alpha;
    v26 = TweenRendererColor__Begin(v24, duration, v45, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v26 )
      {
        v26->fields.eventReceiver = gameObject;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v26->fields.eventReceiver,
          (int32_t)gameObject,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v35 = StringLiteral_6265/*"EndMoveAlpha"*/;
        v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6265/*"EndMoveAlpha"*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v26->fields.callWhenFinished,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        return;
      }
LABEL_16:
      sub_2213CDC(gameObject, v28);
    }
  }
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIVerticalImageRender__EndMoveAlpha(this, v44);
}


void UIVerticalImageRender__MoveAlphaSpeed(
        UIVerticalImageRender_o *this,
        float speed,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  float b; // s10
  float r; // s11
  float g; // s12
  float v24; // s0
  float v25; // s9
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  TweenRendererColor_o *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v46; // x1
  UnityEngine_Color_o v47; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_597226B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_597226B = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    callbackFunc,
    (System_String_o *)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackFunc,
    (int32_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( speed <= 0.0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
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
    v24 = (float)(alpha - this->fields.mColor.fields.a) / speed;
    if ( v24 >= 0.0 )
      v25 = (float)(alpha - this->fields.mColor.fields.a) / speed;
    else
      v25 = -v24;
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v47.fields.r = r;
    v47.fields.g = g;
    v47.fields.b = b;
    v47.fields.a = alpha;
    v28 = TweenRendererColor__Begin(v26, v25, v47, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v28 )
      {
        v28->fields.eventReceiver = gameObject;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v28->fields.eventReceiver,
          (int32_t)gameObject,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = StringLiteral_6265/*"EndMoveAlpha"*/;
        v28->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6265/*"EndMoveAlpha"*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v28->fields.callWhenFinished,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        return;
      }
LABEL_19:
      sub_2213CDC(gameObject, v30);
    }
  }
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIVerticalImageRender__EndMoveAlpha(this, v46);
}


void UIVerticalImageRender__RecoverSharder(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_5972265 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_2213A60(&StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_5972265 = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24741/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
    v5 = &StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  UIVerticalImageRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIVerticalImageRender__ReleaseCharacter(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *material; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *mesh; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20

  if ( (byte_5972262 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972262 = 1;
  }
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      UIVerticalImageRender__SetActive(this, 0, v8);
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_30;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
    {
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !bodyFilter )
        goto LABEL_30;
      v12 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_83459800(v12, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( bodyFilter )
    {
      v22 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      UnityEngine_Object__Destroy_83459800(v22, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_2213CDC(bodyFilter, v4);
  }
LABEL_29:
  this->fields.textureList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.textureList, 0, v15, v16, v17, v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__SetActive(UIVerticalImageRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_2213CDC(bodyRenderer, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyRenderer, isActive, 0);
}


void UIVerticalImageRender__SetAlpha(UIVerticalImageRender_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
}


void UIVerticalImageRender__SetBaseColor(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3

  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__SetCharacter(
        UIVerticalImageRender_o *this,
        System_String_o *imageName,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    *(System_String_o **)&faceType,
    (System_String_o *)textureList,
    (int32_t)method,
    v5,
    v6,
    v7);
  UIVerticalImageRender__SetCharacterRender(this, v9);
}


void UIVerticalImageRender__SetCharacterRender(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  __int64 bodyRenderer; // x0
  int v4; // w8
  int v5; // w8
  float v6; // s0
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v8; // x20
  bool v9; // w0
  System_String_o *filterName; // x20
  bool v11; // w21
  bool v12; // w0
  __int64 *v13; // x8
  UnityEngine_Shader_o *v14; // x21
  UnityEngine_Material_o *v15; // x20
  struct UnityEngine_Texture2D_array *v16; // x8
  struct UnityEngine_Texture2D_array *v17; // x8
  UnityEngine_Mesh_o *v18; // x20
  UIVerticalImageRender_c *v19; // x8
  __int64 v20; // x21
  unsigned int v21; // w9
  struct UIVerticalImageRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int TOP_Y; // s1
  int32x2_t v25; // d0
  struct UIVerticalImageRender_StaticFields *v26; // x8
  int v27; // s0
  int BOTTOM_Y; // s1
  struct UIVerticalImageRender_StaticFields *v29; // x8
  int RIGHT_X; // s0
  int v31; // s1
  struct UIVerticalImageRender_StaticFields *v32; // x8
  int v33; // s0
  int v34; // s1
  struct UIVerticalImageRender_StaticFields *v35; // x8
  int v36; // s0
  int v37; // s1
  struct UIVerticalImageRender_StaticFields *v38; // x8
  int v39; // s0
  int BOTTOM_Y2; // s1
  struct UIVerticalImageRender_StaticFields *v41; // x8
  int v42; // s0
  int v43; // s1
  __int64 v44; // x21
  unsigned int v45; // w9
  float32x2_t *v46; // x10
  float v47; // s1
  float32x2_t *v48; // x10
  float v49; // s1
  float32x2_t *v50; // x10
  float v51; // s1
  float32x2_t *v52; // x10
  float v53; // s1
  float32x2_t *v54; // x10
  float v55; // s1
  float32x2_t *v56; // x10
  float v57; // s1
  float32x2_t *v58; // x10
  float v59; // s1
  float32x2_t *v60; // x8
  float v61; // s1
  unsigned int v62; // w8
  struct UIVerticalImageRender_StaticFields *v63; // x9
  float BODY_V; // s2
  struct UIVerticalImageRender_StaticFields *v65; // x9
  float v66; // s0
  struct UIVerticalImageRender_StaticFields *v67; // x9
  float32x2_t v68; // d0
  float32x2_t v69; // d1
  __int64 v70; // d2
  struct UIVerticalImageRender_StaticFields *v71; // x9
  float BODY_V2; // s2
  struct UIVerticalImageRender_StaticFields *v73; // x9
  float v74; // s0
  struct UIVerticalImageRender_StaticFields *v75; // x8
  float32x2_t v76; // d0
  float32x2_t v77; // d1
  __int64 v78; // d2
  unsigned int v79; // w8
  struct UIVerticalImageRender_StaticFields *v80; // x9
  float v81; // s2
  struct UIVerticalImageRender_StaticFields *v82; // x9
  float v83; // s0
  struct UIVerticalImageRender_StaticFields *v84; // x9
  float32x2_t v85; // d0
  float32x2_t v86; // d1
  __int64 v87; // d2
  struct UIVerticalImageRender_StaticFields *v88; // x9
  float v89; // s2
  struct UIVerticalImageRender_StaticFields *v90; // x9
  float v91; // s0
  struct UIVerticalImageRender_StaticFields *v92; // x8
  float32x2_t v93; // d0
  float32x2_t v94; // d1
  __int64 v95; // d2
  System_Array_o *v96; // x21
  long double v97; // q0
  long double v98; // q3
  bool v99; // zf
  _BOOL4 isTalkMask; // w8
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x2

  if ( (byte_5972263 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__D34B481CF7365656E79A8F13CBD15BBF6B12B11B23727F2345088914BFC15F80);
    sub_2213A60(&UIVerticalImageRender_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_5117/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/);
    sub_2213A60(&StringLiteral_5114/*"Custom/Sprite-ScriptActionFigureNormal2"*/);
    sub_2213A60(&StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_5972263 = 1;
  }
  bodyRenderer = (__int64)UIVerticalImageRender_TypeInfo;
  if ( !*(&UIVerticalImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo, method);
    bodyRenderer = (__int64)UIVerticalImageRender_TypeInfo;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(bodyRenderer + 184) + 28LL);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v4;
  v5 = *(_DWORD *)(*(_QWORD *)(bodyRenderer + 184) + 28LL);
  this->fields.dispOffset.fields.x = 0.0;
  v6 = (float)-v5;
  textureList = this->fields.textureList;
  this->fields.dispOffset.fields.y = v6;
  if ( !textureList )
    goto LABEL_70;
  if ( (textureList->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_69;
  v8 = (UnityEngine_Object_o *)textureList->m_Items[1];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = UnityEngine_Object__op_Inequality(v8, 0, 0);
  filterName = this->fields.filterName;
  v11 = v9;
  v12 = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24741/*"silhouette"*/, 0);
  if ( v11 )
  {
    if ( v12 )
    {
      v13 = &StringLiteral_5117/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/;
    }
    else
    {
      System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
      v13 = &StringLiteral_5114/*"Custom/Sprite-ScriptActionFigureNormal2"*/;
    }
  }
  else if ( v12 )
  {
    v13 = &StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
    v13 = &StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  v14 = UnityEngine_Shader__Find((System_String_o *)*v13, 0);
  v15 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v15, v14, 0);
  v16 = this->fields.textureList;
  if ( !v16 )
    goto LABEL_70;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_69;
  if ( !v15 )
    goto LABEL_70;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  v17 = this->fields.textureList;
  if ( !v17 )
    goto LABEL_70;
  if ( (v17->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_69;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v17->m_Items[1],
    0);
  bodyRenderer = (__int64)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_70;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v15, 0);
  v18 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v18, 0);
  bodyRenderer = sub_2213B20(UnityEngine_Vector3___TypeInfo, 8);
  v19 = UIVerticalImageRender_TypeInfo;
  v20 = bodyRenderer;
  if ( !*(&UIVerticalImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo, method);
    v19 = UIVerticalImageRender_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_70;
  v21 = *(_DWORD *)(v20 + 24);
  if ( !v21 )
    goto LABEL_69;
  static_fields = v19->static_fields;
  LEFT_X = static_fields->LEFT_X;
  TOP_Y = static_fields->TOP_Y;
  *(_DWORD *)(v20 + 40) = 0;
  *(float *)(v20 + 32) = (float)LEFT_X;
  *(float *)(v20 + 36) = (float)TOP_Y;
  if ( v21 == 1 )
    goto LABEL_69;
  v25.n64_u64[0] = *(unsigned __int64 *)&UIVerticalImageRender_TypeInfo->static_fields->RIGHT_X;
  *(_DWORD *)(v20 + 52) = 0;
  *(float32x2_t *)(v20 + 44) = vcvt_f32_s32(v25);
  if ( v21 <= 2 )
    goto LABEL_69;
  v26 = UIVerticalImageRender_TypeInfo->static_fields;
  v27 = v26->LEFT_X;
  BOTTOM_Y = v26->BOTTOM_Y;
  *(_DWORD *)(v20 + 64) = 0;
  *(float *)(v20 + 56) = (float)v27;
  *(float *)(v20 + 60) = (float)BOTTOM_Y;
  if ( v21 == 3 )
    goto LABEL_69;
  v29 = UIVerticalImageRender_TypeInfo->static_fields;
  RIGHT_X = v29->RIGHT_X;
  v31 = v29->BOTTOM_Y;
  *(_DWORD *)(v20 + 76) = 0;
  *(float *)(v20 + 68) = (float)RIGHT_X;
  *(float *)(v20 + 72) = (float)v31;
  if ( v21 <= 4 )
    goto LABEL_69;
  v32 = UIVerticalImageRender_TypeInfo->static_fields;
  v33 = v32->LEFT_X;
  v34 = v32->BOTTOM_Y;
  *(_DWORD *)(v20 + 88) = 0;
  *(float *)(v20 + 80) = (float)v33;
  *(float *)(v20 + 84) = (float)v34;
  if ( v21 == 5 )
    goto LABEL_69;
  v35 = UIVerticalImageRender_TypeInfo->static_fields;
  v36 = v35->RIGHT_X;
  v37 = v35->BOTTOM_Y;
  *(_DWORD *)(v20 + 100) = 0;
  *(float *)(v20 + 92) = (float)v36;
  *(float *)(v20 + 96) = (float)v37;
  if ( v21 <= 6 )
    goto LABEL_69;
  v38 = UIVerticalImageRender_TypeInfo->static_fields;
  v39 = v38->LEFT_X;
  BOTTOM_Y2 = v38->BOTTOM_Y2;
  *(_DWORD *)(v20 + 112) = 0;
  *(float *)(v20 + 104) = (float)v39;
  *(float *)(v20 + 108) = (float)BOTTOM_Y2;
  if ( v21 == 7 )
    goto LABEL_69;
  v41 = UIVerticalImageRender_TypeInfo->static_fields;
  v42 = v41->RIGHT_X;
  v43 = v41->BOTTOM_Y2;
  *(_DWORD *)(v20 + 124) = 0;
  *(float *)(v20 + 116) = (float)v42;
  *(float *)(v20 + 120) = (float)v43;
  if ( !v18 )
    goto LABEL_70;
  UnityEngine_Mesh__set_vertices(v18, (UnityEngine_Vector3_array *)v20, 0);
  bodyRenderer = sub_2213B20(UnityEngine_Vector3___TypeInfo, 8);
  v44 = bodyRenderer;
  if ( !byte_5969AE9 )
  {
    bodyRenderer = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v44 )
LABEL_70:
    sub_2213CDC(bodyRenderer, method);
  v45 = *(_DWORD *)(v44 + 24);
  if ( !v45 )
    goto LABEL_69;
  v46 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v47 = -v46[10].n64_f32[0];
  *(float32x2_t *)(v44 + 32) = vneg_f32(v46[9]);
  *(float *)(v44 + 40) = v47;
  if ( (v45 & 0xFFFFFFFE) == 0 )
    goto LABEL_69;
  v48 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v49 = -v48[10].n64_f32[0];
  *(float32x2_t *)(v44 + 44) = vneg_f32(v48[9]);
  *(float *)(v44 + 52) = v49;
  if ( v45 <= 2 )
    goto LABEL_69;
  v50 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v51 = -v50[10].n64_f32[0];
  *(float32x2_t *)(v44 + 56) = vneg_f32(v50[9]);
  *(float *)(v44 + 64) = v51;
  if ( (v45 & 0xFFFFFFFC) == 0 )
    goto LABEL_69;
  v52 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v53 = -v52[10].n64_f32[0];
  *(float32x2_t *)(v44 + 68) = vneg_f32(v52[9]);
  *(float *)(v44 + 76) = v53;
  if ( v45 <= 4 )
    goto LABEL_69;
  v54 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v55 = -v54[10].n64_f32[0];
  *(float32x2_t *)(v44 + 80) = vneg_f32(v54[9]);
  *(float *)(v44 + 88) = v55;
  if ( v45 == 5 )
    goto LABEL_69;
  v56 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v57 = -v56[10].n64_f32[0];
  *(float32x2_t *)(v44 + 92) = vneg_f32(v56[9]);
  *(float *)(v44 + 100) = v57;
  if ( v45 <= 6 )
    goto LABEL_69;
  v58 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v59 = -v58[10].n64_f32[0];
  *(float32x2_t *)(v44 + 104) = vneg_f32(v58[9]);
  *(float *)(v44 + 112) = v59;
  if ( (v45 & 0xFFFFFFF8) == 0 )
    goto LABEL_69;
  v60 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v61 = -v60[10].n64_f32[0];
  *(float32x2_t *)(v44 + 116) = vneg_f32(v60[9]);
  *(float *)(v44 + 124) = v61;
  UnityEngine_Mesh__set_normals(v18, (UnityEngine_Vector3_array *)v44, 0);
  bodyRenderer = sub_2213B20(UnityEngine_Vector2___TypeInfo, 8);
  if ( !bodyRenderer )
    goto LABEL_70;
  v62 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v62 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U;
  if ( v62 == 1 )
    goto LABEL_69;
  v63 = UIVerticalImageRender_TypeInfo->static_fields;
  BODY_V = v63->BODY_V;
  *(float *)(bodyRenderer + 40) = v63->BODY_U + v63->BODY_W;
  *(float *)(bodyRenderer + 44) = BODY_V;
  if ( v62 <= 2 )
    goto LABEL_69;
  v65 = UIVerticalImageRender_TypeInfo->static_fields;
  v66 = v65->BODY_V - v65->BODY_H;
  *(float *)(bodyRenderer + 48) = v65->BODY_U;
  *(float *)(bodyRenderer + 52) = v66;
  if ( v62 == 3 )
    goto LABEL_69;
  v67 = UIVerticalImageRender_TypeInfo->static_fields;
  v68.n64_u64[0] = *(unsigned __int64 *)&v67->BODY_U;
  v69.n64_u64[0] = *(unsigned __int64 *)&v67->BODY_W;
  LODWORD(v70) = vadd_f32(v68, v69).n64_u32[0];
  HIDWORD(v70) = vsub_f32(v68, v69).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v70;
  if ( v62 <= 4 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 64) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U2;
  if ( v62 == 5 )
    goto LABEL_69;
  v71 = UIVerticalImageRender_TypeInfo->static_fields;
  BODY_V2 = v71->BODY_V2;
  *(float *)(bodyRenderer + 72) = v71->BODY_U2 + v71->BODY_W;
  *(float *)(bodyRenderer + 76) = BODY_V2;
  if ( v62 <= 6 )
    goto LABEL_69;
  v73 = UIVerticalImageRender_TypeInfo->static_fields;
  v74 = v73->BODY_V2 - v73->BODY_H;
  *(float *)(bodyRenderer + 80) = v73->BODY_U2;
  *(float *)(bodyRenderer + 84) = v74;
  if ( v62 == 7 )
    goto LABEL_69;
  v75 = UIVerticalImageRender_TypeInfo->static_fields;
  v76.n64_u64[0] = *(unsigned __int64 *)&v75->BODY_U2;
  v77.n64_u64[0] = *(unsigned __int64 *)&v75->BODY_W;
  LODWORD(v78) = vadd_f32(v76, v77).n64_u32[0];
  HIDWORD(v78) = vsub_f32(v76, v77).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 88) = v78;
  UnityEngine_Mesh__set_uv(v18, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = sub_2213B20(UnityEngine_Vector2___TypeInfo, 8);
  if ( !bodyRenderer )
    goto LABEL_70;
  v79 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v79 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U;
  if ( v79 == 1 )
    goto LABEL_69;
  v80 = UIVerticalImageRender_TypeInfo->static_fields;
  v81 = v80->BODY_V;
  *(float *)(bodyRenderer + 40) = v80->BODY_U + v80->BODY_W;
  *(float *)(bodyRenderer + 44) = v81;
  if ( v79 <= 2 )
    goto LABEL_69;
  v82 = UIVerticalImageRender_TypeInfo->static_fields;
  v83 = v82->BODY_V - v82->BODY_H;
  *(float *)(bodyRenderer + 48) = v82->BODY_U;
  *(float *)(bodyRenderer + 52) = v83;
  if ( v79 == 3 )
    goto LABEL_69;
  v84 = UIVerticalImageRender_TypeInfo->static_fields;
  v85.n64_u64[0] = *(unsigned __int64 *)&v84->BODY_U;
  v86.n64_u64[0] = *(unsigned __int64 *)&v84->BODY_W;
  LODWORD(v87) = vadd_f32(v85, v86).n64_u32[0];
  HIDWORD(v87) = vsub_f32(v85, v86).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v87;
  if ( v79 <= 4 )
    goto LABEL_69;
  *(_QWORD *)(bodyRenderer + 64) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U2;
  if ( v79 == 5 )
    goto LABEL_69;
  v88 = UIVerticalImageRender_TypeInfo->static_fields;
  v89 = v88->BODY_V2;
  *(float *)(bodyRenderer + 72) = v88->BODY_U2 + v88->BODY_W;
  *(float *)(bodyRenderer + 76) = v89;
  if ( v79 <= 6
    || (v90 = UIVerticalImageRender_TypeInfo->static_fields,
        v91 = v90->BODY_V2 - v90->BODY_H,
        *(float *)(bodyRenderer + 80) = v90->BODY_U2,
        *(float *)(bodyRenderer + 84) = v91,
        v79 == 7) )
  {
LABEL_69:
    sub_2213CE4(bodyRenderer);
  }
  v92 = UIVerticalImageRender_TypeInfo->static_fields;
  v93.n64_u64[0] = *(unsigned __int64 *)&v92->BODY_U2;
  v94.n64_u64[0] = *(unsigned __int64 *)&v92->BODY_W;
  LODWORD(v95) = vadd_f32(v93, v94).n64_u32[0];
  HIDWORD(v95) = vsub_f32(v93, v94).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 88) = v95;
  UnityEngine_Mesh__set_uv2(v18, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v96 = (System_Array_o *)sub_2213B20(int___TypeInfo, 12);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v96,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__D34B481CF7365656E79A8F13CBD15BBF6B12B11B23727F2345088914BFC15F80,
    0);
  UnityEngine_Mesh__set_triangles(v18, (System_Int32_array *)v96, 0);
  bodyRenderer = (__int64)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_70;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v18, 0);
  UnityEngine_Mesh__RecalculateNormals(v18, 0);
  UnityEngine_Mesh__RecalculateBounds(v18, 0);
  LODWORD(v97) = 1.0;
  *(float *)&v98 = this->fields.mColor.fields.a;
  v99 = !this->fields.isShadow;
  isTalkMask = this->fields.isTalkMask;
  this->fields.isBusyMoveAlpha = 0;
  if ( !v99 )
    *(float *)&v97 = 0.1;
  if ( isTalkMask )
    *(float *)&v97 = *(float *)&v97 * 0.5;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v97,
    *(float *)&v97,
    *(float *)&v97,
    v98);
  UIVerticalImageRender__SetFilterColor(this, this->fields.filterColor, v101);
  UIVerticalImageRender__SetActive(this, 1, v102);
}


void UIVerticalImageRender__SetDepth(UIVerticalImageRender_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  unsigned __int64 localPosition; // kr00_8
  UnityEngine_Vector3_o v8; // 0:kr14_12.12

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v6);
  }
  *(_QWORD *)&v8.fields.x = localPosition;
  v8.fields.z = -d;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


void UIVerticalImageRender__SetFilter(
        UIVerticalImageRender_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.filterName = filterName;
  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  UIVerticalImageRender__RecoverSharder(this, v14);
  v16.fields.b = b;
  v16.fields.a = a;
  v16.fields.r = r;
  v16.fields.g = g;
  UIVerticalImageRender__SetFilterColor(this, v16, v15);
}


void UIVerticalImageRender__SetFilterColor(
        UIVerticalImageRender_o *this,
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
  if ( (byte_5972267 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16871/*"_FilterColor"*/);
    byte_5972267 = 1;
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
      sub_2213CDC(bodyRenderer, method);
    }
    v10.fields.b = b;
    v10.fields.a = a;
    v10.fields.r = r;
    v10.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16871/*"_FilterColor"*/,
      v10,
      0);
  }
}


void UIVerticalImageRender__SetGradation(UIVerticalImageRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_5972268 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16885/*"_Gradation"*/);
    byte_5972268 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16885/*"_Gradation"*/,
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
          (System_String_o *)StringLiteral_16885/*"_Gradation"*/,
          g,
          0);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(bodyRenderer, method);
  }
}


void UIVerticalImageRender__SetLayer(UIVerticalImageRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIVerticalImageRender__SetLayer_51138568(this, transform, layer, v8);
  }
}


void UIVerticalImageRender__SetLayer_51138568(
        UIVerticalImageRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIVerticalImageRender_o *v6; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 naturalAligment; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_o *v27; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_597226D & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (UIVerticalImageRender_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_597226D = 1;
  }
  if ( !tf
    || (this = (UIVerticalImageRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
    sub_2213CDC(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  v27 = Enumerator;
  while ( 1 )
  {
    if ( !v27 )
      goto LABEL_34;
    klass = v27->klass;
    v10 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v27, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v27->klass;
    v14 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_18:
      v16 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v27,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_221405C(v17, UnityEngine_Transform_TypeInfo, v18);
LABEL_34:
        sub_2213CDC(Enumerator, v8);
      }
    }
    UIVerticalImageRender__SetLayer_51138568(v6, v17, layer, v19);
  }
  v21 = sub_2213BB4(v27, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_29;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_29:
      v26 = sub_224BC3C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__SetMaskInteraction(
        UIVerticalImageRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  int v6; // w9
  int32_t v7; // w2

  if ( (byte_597226E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17004/*"_StencilComp"*/);
    byte_597226E = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_2213CDC(bodyRenderer, *(_QWORD *)&maskInteraction);
  }
  if ( maskInteraction == 2 )
    v6 = 5;
  else
    v6 = 0;
  if ( maskInteraction == 1 )
    v7 = 4;
  else
    v7 = v6;
  UnityEngine_Material__SetInt((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_17004/*"_StencilComp"*/, v7, 0);
}


void UIVerticalImageRender__SetShadow(UIVerticalImageRender_o *this, bool isShadow, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  _BOOL4 isTalkMask; // w9

  LODWORD(v3) = 1.0;
  isTalkMask = this->fields.isTalkMask;
  *(float *)&v4 = this->fields.mColor.fields.a;
  this->fields.isShadow = isShadow;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( isTalkMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
    v4);
}


void UIVerticalImageRender__SetSharder(
        UIVerticalImageRender_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v9; // x21

  v3 = shaderName;
  if ( (byte_5972264 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    byte_5972264 = 1;
  }
  if ( this->fields.textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Object__op_Equality(material, 0, 0);
      if ( ((unsigned __int8)bodyRenderer & 1) != 0 )
        return;
      textureList = this->fields.textureList;
      if ( textureList )
      {
        if ( (textureList->max_length & 0xFFFFFFFE) == 0 )
          sub_2213CE4(bodyRenderer);
        v9 = (UnityEngine_Object_o *)textureList->m_Items[1];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shaderName);
        if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
          v3 = System_String__Concat_75651716(v3, (System_String_o *)StringLiteral_1393/*"2"*/, 0);
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(v3, 0);
        if ( material )
        {
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, (UnityEngine_Shader_o *)bodyRenderer, 0);
          return;
        }
      }
    }
    sub_2213CDC(bodyRenderer, shaderName);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__SetSortingOrder(UIVerticalImageRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_2213CDC(0, *(_QWORD *)&order);
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIVerticalImageRender__SetTalkMask(UIVerticalImageRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  _BOOL4 isShadow; // w10
  UIVerticalImageRender_c *klass; // x9

  LODWORD(v3) = 1.0;
  isShadow = this->fields.isShadow;
  klass = this->klass;
  *(float *)&v4 = this->fields.mColor.fields.a;
  this->fields.isTalkMask = isMask;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, float, float, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
    v4);
}


void UIVerticalImageRender__SetTweenColor(
        UIVerticalImageRender_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
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
  if ( (byte_5972260 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_5972260 = 1;
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16813/*"_Color"*/, v12, 0);
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
    sub_2213CDC(bodyRenderer, v8);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_12;
  v10 = 1;
LABEL_11:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v10, 0);
}


void UIVerticalImageRender__SetVolume(UIVerticalImageRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_5972269 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17066/*"_Volume"*/);
    byte_5972269 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_17066/*"_Volume"*/,
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
          (System_String_o *)StringLiteral_17066/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(bodyRenderer, method);
  }
}


void UIVerticalImageRender__SetWipeTexture(
        UIVerticalImageRender_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  void *bodyRenderer; // x0
  float x; // s8
  int v7; // s9
  int32_t height; // w20
  UIVerticalImageRender_c *v9; // x8
  struct UIVerticalImageRender_StaticFields *static_fields; // x8
  float y; // s8
  int32_t BODY_SIZE_Y; // w22
  int MAIN_SIZE_Y; // s9

  if ( (byte_5972266 & 1) == 0 )
  {
    sub_2213A60(&UIVerticalImageRender_TypeInfo);
    sub_2213A60(&StringLiteral_17073/*"_WipeY"*/);
    sub_2213A60(&StringLiteral_17071/*"_WipeTex"*/);
    sub_2213A60(&StringLiteral_17072/*"_WipeX"*/);
    byte_5972266 = 1;
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_17071/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_17072/*"_WipeX"*/,
         0) )
  {
    x = this->fields.figureOffset.fields.x;
    bodyRenderer = UIVerticalImageRender_TypeInfo;
    if ( !*(&UIVerticalImageRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo, texture);
      bodyRenderer = UIVerticalImageRender_TypeInfo;
    }
    if ( !this->fields.bodyRenderer )
      goto LABEL_22;
    v7 = **((_DWORD **)bodyRenderer + 23);
    bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this->fields.bodyRenderer, 0);
    if ( !bodyRenderer )
      goto LABEL_22;
    UnityEngine_Material__SetFloat(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_17072/*"_WipeX"*/,
      (float)-x / (float)v7,
      0);
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_83277340(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_17073/*"_WipeY"*/,
         0) )
  {
    height = UnityEngine_Screen__get_height(0);
    v9 = UIVerticalImageRender_TypeInfo;
    if ( !*(&UIVerticalImageRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo, texture);
      v9 = UIVerticalImageRender_TypeInfo;
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
          (System_String_o *)StringLiteral_17073/*"_WipeY"*/,
          (float)(vcvts_n_f32_s32(height - BODY_SIZE_Y, 1u) - y) / (float)MAIN_SIZE_Y,
          0);
        return;
      }
    }
LABEL_22:
    sub_2213CDC(bodyRenderer, texture);
  }
}