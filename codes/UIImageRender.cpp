void UIImageRender___cctor(const MethodInfo *method)
{
  struct UIImageRender_StaticFields *static_fields; // x8

  if ( (byte_5972164 & 1) == 0 )
  {
    sub_2213A60(&UIImageRender_TypeInfo);
    byte_5972164 = 1;
  }
  static_fields = UIImageRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_E9D6F0;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_E9D500;
  *(_OWORD *)&static_fields->BODY_U = xmmword_E9C790;
}


void UIImageRender___ctor(UIImageRender_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5972163 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    byte_5972163 = 1;
  }
  v9 = StringLiteral_23407/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_23407/*"normal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.filterName, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_5972160 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972160 = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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


System_String_array *UIImageRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
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
  if ( (byte_5972152 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_7897/*"Image/00001"*/);
    imageName = (System_String_o *)sub_2213A60(&StringLiteral_7896/*"Image/"*/);
    byte_5972152 = 1;
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


UnityEngine_Vector2_o UIImageRender__GetBodySize(UIImageRender_o *this, const MethodInfo *method)
{
  UIImageRender_c *v2; // x0
  struct UIImageRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5972155 & 1) == 0 )
  {
    sub_2213A60(&UIImageRender_TypeInfo);
    byte_5972155 = 1;
  }
  v2 = UIImageRender_TypeInfo;
  if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, method);
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

  if ( (byte_5972153 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_5972153 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
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


void UIImageRender__MoveAlpha(
        UIImageRender_o *this,
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

  if ( (byte_597215E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_597215E = 1;
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
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIImageRender__EndMoveAlpha(this, v44);
}


void UIImageRender__MoveAlphaSpeed(
        UIImageRender_o *this,
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

  if ( (byte_597215F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_597215F = 1;
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
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIImageRender__EndMoveAlpha(this, v46);
}


void UIImageRender__RecoverSharder(UIImageRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_5972159 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5116/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_2213A60(&StringLiteral_5113/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_5972159 = 1;
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
  UIImageRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIImageRender__ReleaseCharacter(UIImageRender_o *this, const MethodInfo *method)
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

  if ( (byte_5972156 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972156 = 1;
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
      UIImageRender__SetActive(this, 0, v8);
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
void UIImageRender__SetActive(UIImageRender_o *this, bool isActive, const MethodInfo *method)
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


void UIImageRender__SetAlpha(UIImageRender_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
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
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void UIImageRender__SetCharacter(
        UIImageRender_o *this,
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
  UIImageRender__SetCharacterRender(this, v9);
}


void UIImageRender__SetCharacterRender(UIImageRender_o *this, const MethodInfo *method)
{
  char *bodyRenderer; // x0
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
  UIImageRender_c *v19; // x8
  char *v20; // x21
  unsigned int v21; // w9
  struct UIImageRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int TOP_Y; // s1
  int32x2_t v25; // d0
  struct UIImageRender_StaticFields *v26; // x8
  int v27; // s0
  int BOTTOM_Y; // s1
  struct UIImageRender_StaticFields *v29; // x8
  int RIGHT_X; // s0
  int v31; // s1
  char *v32; // x21
  unsigned int v33; // w9
  float32x2_t *v34; // x10
  float v35; // s1
  float32x2_t *v36; // x10
  float v37; // s1
  float32x2_t *v38; // x10
  float v39; // s1
  float32x2_t *v40; // x8
  float v41; // s1
  unsigned int v42; // w8
  struct UIImageRender_StaticFields *v43; // x9
  float BODY_V; // s2
  struct UIImageRender_StaticFields *v45; // x9
  float v46; // s0
  struct UIImageRender_StaticFields *v47; // x8
  float32x2_t v48; // d0
  float32x2_t v49; // d1
  __int64 v50; // d2
  unsigned int v51; // w8
  struct UIImageRender_StaticFields *v52; // x9
  float v53; // s2
  struct UIImageRender_StaticFields *v54; // x9
  float v55; // s0
  struct UIImageRender_StaticFields *v56; // x8
  float32x2_t v57; // d0
  float32x2_t v58; // d1
  __int64 v59; // d2
  System_Array_o *v60; // x0
  System_RuntimeFieldHandle_o v61; // x1
  System_Int32_array *v62; // x21
  long double v63; // q0
  long double v64; // q3
  bool v65; // zf
  _BOOL4 isTalkMask; // w8
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2

  if ( (byte_5972157 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__B2CF02C10F1F309AC8FB52A3CCE888191E73C7E1C5A0D699CA4CBBE2C76F2C0F);
    sub_2213A60(&UIImageRender_TypeInfo);
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
    byte_5972157 = 1;
  }
  bodyRenderer = (char *)UIImageRender_TypeInfo;
  if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, method);
    bodyRenderer = (char *)UIImageRender_TypeInfo;
  }
  v4 = *(_DWORD *)(*((_QWORD *)bodyRenderer + 23) + 24LL);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v4;
  v5 = *(_DWORD *)(*((_QWORD *)bodyRenderer + 23) + 24LL);
  this->fields.dispOffset.fields.x = 0.0;
  v6 = (float)-v5;
  textureList = this->fields.textureList;
  this->fields.dispOffset.fields.y = v6;
  if ( !textureList )
    goto LABEL_54;
  if ( (textureList->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_53;
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
    goto LABEL_54;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_53;
  if ( !v15 )
    goto LABEL_54;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  v17 = this->fields.textureList;
  if ( !v17 )
    goto LABEL_54;
  if ( (v17->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_53;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v17->m_Items[1],
    0);
  bodyRenderer = (char *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_54;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v15, 0);
  v18 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v18, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v19 = UIImageRender_TypeInfo;
  v20 = bodyRenderer;
  if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, method);
    v19 = UIImageRender_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_54;
  v21 = *((_DWORD *)v20 + 6);
  if ( !v21 )
    goto LABEL_53;
  static_fields = v19->static_fields;
  LEFT_X = static_fields->LEFT_X;
  TOP_Y = static_fields->TOP_Y;
  *((_DWORD *)v20 + 10) = 0;
  *((float *)v20 + 8) = (float)LEFT_X;
  *((float *)v20 + 9) = (float)TOP_Y;
  if ( v21 == 1 )
    goto LABEL_53;
  v25.n64_u64[0] = *(unsigned __int64 *)&UIImageRender_TypeInfo->static_fields->RIGHT_X;
  *((_DWORD *)v20 + 13) = 0;
  *(float32x2_t *)(v20 + 44) = vcvt_f32_s32(v25);
  if ( v21 <= 2 )
    goto LABEL_53;
  v26 = UIImageRender_TypeInfo->static_fields;
  v27 = v26->LEFT_X;
  BOTTOM_Y = v26->BOTTOM_Y;
  *((_DWORD *)v20 + 16) = 0;
  *((float *)v20 + 14) = (float)v27;
  *((float *)v20 + 15) = (float)BOTTOM_Y;
  if ( v21 == 3 )
    goto LABEL_53;
  v29 = UIImageRender_TypeInfo->static_fields;
  RIGHT_X = v29->RIGHT_X;
  v31 = v29->BOTTOM_Y;
  *((_DWORD *)v20 + 19) = 0;
  *((float *)v20 + 17) = (float)RIGHT_X;
  *((float *)v20 + 18) = (float)v31;
  if ( !v18 )
    goto LABEL_54;
  UnityEngine_Mesh__set_vertices(v18, (UnityEngine_Vector3_array *)v20, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v32 = bodyRenderer;
  if ( !byte_5969AE9 )
  {
    bodyRenderer = (char *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v32 )
LABEL_54:
    sub_2213CDC(bodyRenderer, method);
  v33 = *((_DWORD *)v32 + 6);
  if ( !v33 )
    goto LABEL_53;
  v34 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v35 = -v34[10].n64_f32[0];
  *((float32x2_t *)v32 + 4) = vneg_f32(v34[9]);
  *((float *)v32 + 10) = v35;
  if ( (v33 & 0xFFFFFFFE) == 0 )
    goto LABEL_53;
  v36 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v37 = -v36[10].n64_f32[0];
  *(float32x2_t *)(v32 + 44) = vneg_f32(v36[9]);
  *((float *)v32 + 13) = v37;
  if ( v33 <= 2 )
    goto LABEL_53;
  v38 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v39 = -v38[10].n64_f32[0];
  *((float32x2_t *)v32 + 7) = vneg_f32(v38[9]);
  *((float *)v32 + 16) = v39;
  if ( (v33 & 0xFFFFFFFC) == 0 )
    goto LABEL_53;
  v40 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v41 = -v40[10].n64_f32[0];
  *(float32x2_t *)(v32 + 68) = vneg_f32(v40[9]);
  *((float *)v32 + 19) = v41;
  UnityEngine_Mesh__set_normals(v18, (UnityEngine_Vector3_array *)v32, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_54;
  v42 = *((_DWORD *)bodyRenderer + 6);
  if ( !v42 )
    goto LABEL_53;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIImageRender_TypeInfo->static_fields->BODY_U;
  if ( v42 == 1 )
    goto LABEL_53;
  v43 = UIImageRender_TypeInfo->static_fields;
  BODY_V = v43->BODY_V;
  *((float *)bodyRenderer + 10) = v43->BODY_U + v43->BODY_W;
  *((float *)bodyRenderer + 11) = BODY_V;
  if ( v42 <= 2 )
    goto LABEL_53;
  v45 = UIImageRender_TypeInfo->static_fields;
  v46 = v45->BODY_V - v45->BODY_H;
  *((_DWORD *)bodyRenderer + 12) = LODWORD(v45->BODY_U);
  *((float *)bodyRenderer + 13) = v46;
  if ( v42 == 3 )
    goto LABEL_53;
  v47 = UIImageRender_TypeInfo->static_fields;
  v48.n64_u64[0] = *(unsigned __int64 *)&v47->BODY_U;
  v49.n64_u64[0] = *(unsigned __int64 *)&v47->BODY_W;
  LODWORD(v50) = vadd_f32(v48, v49).n64_u32[0];
  HIDWORD(v50) = vsub_f32(v48, v49).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v50;
  UnityEngine_Mesh__set_uv(v18, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_54;
  v51 = *((_DWORD *)bodyRenderer + 6);
  if ( !v51 )
    goto LABEL_53;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIImageRender_TypeInfo->static_fields->BODY_U;
  if ( v51 == 1 )
    goto LABEL_53;
  v52 = UIImageRender_TypeInfo->static_fields;
  v53 = v52->BODY_V;
  *((float *)bodyRenderer + 10) = v52->BODY_U + v52->BODY_W;
  *((float *)bodyRenderer + 11) = v53;
  if ( v51 <= 2
    || (v54 = UIImageRender_TypeInfo->static_fields,
        v55 = v54->BODY_V - v54->BODY_H,
        *((_DWORD *)bodyRenderer + 12) = LODWORD(v54->BODY_U),
        *((float *)bodyRenderer + 13) = v55,
        v51 == 3) )
  {
LABEL_53:
    sub_2213CE4(bodyRenderer);
  }
  v56 = UIImageRender_TypeInfo->static_fields;
  v57.n64_u64[0] = *(unsigned __int64 *)&v56->BODY_U;
  v58.n64_u64[0] = *(unsigned __int64 *)&v56->BODY_W;
  LODWORD(v59) = vadd_f32(v57, v58).n64_u32[0];
  HIDWORD(v59) = vsub_f32(v57, v58).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v59;
  UnityEngine_Mesh__set_uv2(v18, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v60 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
  v61.fields.value = Field__PrivateImplementationDetails__B2CF02C10F1F309AC8FB52A3CCE888191E73C7E1C5A0D699CA4CBBE2C76F2C0F;
  v62 = (System_Int32_array *)v60;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v60, v61, 0);
  UnityEngine_Mesh__set_triangles(v18, v62, 0);
  bodyRenderer = (char *)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_54;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v18, 0);
  UnityEngine_Mesh__RecalculateNormals(v18, 0);
  UnityEngine_Mesh__RecalculateBounds(v18, 0);
  LODWORD(v63) = 1.0;
  *(float *)&v64 = this->fields.mColor.fields.a;
  v65 = !this->fields.isShadow;
  isTalkMask = this->fields.isTalkMask;
  this->fields.isBusyMoveAlpha = 0;
  if ( !v65 )
    *(float *)&v63 = 0.1;
  if ( isTalkMask )
    *(float *)&v63 = *(float *)&v63 * 0.5;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v63,
    *(float *)&v63,
    *(float *)&v63,
    v64);
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
    sub_2213CDC(transform, v6);
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
  UIImageRender__RecoverSharder(this, v14);
  v16.fields.b = b;
  v16.fields.a = a;
  v16.fields.r = r;
  v16.fields.g = g;
  UIImageRender__SetFilterColor(this, v16, v15);
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
  if ( (byte_597215B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16871/*"_FilterColor"*/);
    byte_597215B = 1;
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


void UIImageRender__SetGradation(UIImageRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_597215C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16885/*"_Gradation"*/);
    byte_597215C = 1;
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


void UIImageRender__SetLayer(UIImageRender_o *this, int32_t layer, const MethodInfo *method)
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
    UIImageRender__SetLayer_51004628(this, transform, layer, v8);
  }
}


void UIImageRender__SetLayer_51004628(
        UIImageRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIImageRender_o *v6; // x20
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
  if ( (byte_5972161 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (UIImageRender_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_5972161 = 1;
  }
  if ( !tf || (this = (UIImageRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
    sub_2213CDC(this, tf);
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
    UIImageRender__SetLayer_51004628(v6, v17, layer, v19);
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


void UIImageRender__SetMaskInteraction(UIImageRender_o *this, int32_t maskInteraction, const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  __int64 v6; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x8
  int32_t v8; // w19

  if ( (byte_5972162 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17004/*"_StencilComp"*/);
    byte_5972162 = 1;
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
    sub_2213CDC(RenderingCompareFunction, v6);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_17004/*"_StencilComp"*/, v8, 0);
}


void UIImageRender__SetShadow(UIImageRender_o *this, bool isShadow, const MethodInfo *method)
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
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
    v4);
}


void UIImageRender__SetSharder(UIImageRender_o *this, System_String_o *shaderName, const MethodInfo *method)
{
  System_String_o *v3; // x19
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v9; // x21

  v3 = shaderName;
  if ( (byte_5972158 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1393/*"2"*/);
    byte_5972158 = 1;
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
void UIImageRender__SetSortingOrder(UIImageRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_2213CDC(0, *(_QWORD *)&order);
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIImageRender__SetTalkMask(UIImageRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  _BOOL4 isShadow; // w10
  UIImageRender_c *klass; // x9

  LODWORD(v3) = 1.0;
  isShadow = this->fields.isShadow;
  klass = this->klass;
  *(float *)&v4 = this->fields.mColor.fields.a;
  this->fields.isTalkMask = isMask;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  ((void (__fastcall *)(UIImageRender_o *, const MethodInfo *, long double, float, float, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
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
  if ( (byte_5972154 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_5972154 = 1;
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


void UIImageRender__SetVolume(UIImageRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_597215D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17066/*"_Volume"*/);
    byte_597215D = 1;
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


void UIImageRender__SetWipeTexture(UIImageRender_o *this, UnityEngine_Texture_o *texture, const MethodInfo *method)
{
  void *bodyRenderer; // x0
  float x; // s8
  int v7; // s9
  int32_t height; // w20
  UIImageRender_c *v9; // x8
  struct UIImageRender_StaticFields *static_fields; // x8
  float y; // s8
  int32_t BODY_SIZE_Y; // w22
  int MAIN_SIZE_Y; // s9

  if ( (byte_597215A & 1) == 0 )
  {
    sub_2213A60(&UIImageRender_TypeInfo);
    sub_2213A60(&StringLiteral_17073/*"_WipeY"*/);
    sub_2213A60(&StringLiteral_17071/*"_WipeTex"*/);
    sub_2213A60(&StringLiteral_17072/*"_WipeX"*/);
    byte_597215A = 1;
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
    bodyRenderer = UIImageRender_TypeInfo;
    if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, texture);
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
    v9 = UIImageRender_TypeInfo;
    if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, texture);
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