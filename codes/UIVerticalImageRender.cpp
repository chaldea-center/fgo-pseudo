void UIVerticalImageRender___cctor(const MethodInfo *method)
{
  struct UIVerticalImageRender_StaticFields *static_fields; // x8

  if ( (byte_4D2E267 & 1) == 0 )
  {
    sub_1C94098(&UIVerticalImageRender_TypeInfo);
    byte_4D2E267 = 1;
  }
  static_fields = UIVerticalImageRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_CFF620;
  *(_OWORD *)&static_fields->OVERLAP_V = xmmword_D00190;
  *(_QWORD *)&static_fields->BOTTOM_Y = 0xFFFFF2C2FFFFFA42LL;
  *(_OWORD *)&static_fields->BODY_U = xmmword_CFE3B0;
  *(_QWORD *)&static_fields->BODY_W = 0x3F77A0003EFF4000LL;
}


void UIVerticalImageRender___ctor(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2E266 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22489/*"normal"*/);
    byte_4D2E266 = 1;
  }
  v9 = StringLiteral_22489/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22489/*"normal"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.filterName, v9, v2, v3, v4, v5, v6, v7);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIVerticalImageRender__EndMoveAlpha(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  long double v2; // q0
  long double v3; // q3
  UnityEngine_Object_o *moveAlphaCallbackObject; // x20
  System_String_o *moveAlphaCallbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  _BOOL8 v19; // x0
  __int64 v20; // x1

  if ( (byte_4D2E263 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E263 = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
  moveAlphaCallbackObject = (UnityEngine_Object_o *)this->fields.moveAlphaCallbackObject;
  moveAlphaCallbackFunc = this->fields.moveAlphaCallbackFunc;
  this->fields.moveAlphaCallbackObject = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v13, v14, v15, v16, v17, v18);
  this->fields.isBusyMoveAlpha = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v19 )
  {
    if ( !moveAlphaCallbackObject )
      sub_1C942F0(v19, v20);
    UnityEngine_GameObject__SendMessage_72092340(
      (UnityEngine_GameObject_o *)moveAlphaCallbackObject,
      moveAlphaCallbackFunc,
      0);
  }
}


System_String_array *UIVerticalImageRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  System_String_o *v9; // x20

  v2 = imageName;
  if ( (byte_4D2E255 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_7587/*"Image/00001"*/);
    imageName = (System_String_o *)sub_1C94098(&StringLiteral_7586/*"Image/"*/);
    byte_4D2E255 = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_7586/*"Image/"*/, 0) )
    v2 = System_String__Concat_64417744((System_String_o *)StringLiteral_7586/*"Image/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v2, 0) )
    v2 = (System_String_o *)StringLiteral_7587/*"Image/00001"*/;
  imageName = (System_String_o *)sub_1C94140(string___TypeInfo, 1);
  if ( !imageName )
LABEL_13:
    sub_1C942F0(imageName, method);
  v9 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_1C942F8(imageName);
  imageName[1].monitor = v2;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&imageName[1].monitor, (int32_t)v2, v3, v4, v5, v6, v7, v8);
  return (System_String_array *)v9;
}


UnityEngine_Vector2_o UIVerticalImageRender__GetBodySize(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  UIVerticalImageRender_c *v2; // x0
  struct UIVerticalImageRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D2E258 & 1) == 0 )
  {
    sub_1C94098(&UIVerticalImageRender_TypeInfo);
    byte_4D2E258 = 1;
  }
  v2 = UIVerticalImageRender_TypeInfo;
  if ( !UIVerticalImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo);
    v2 = UIVerticalImageRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  BODY_SIZE_X = (float)static_fields->BODY_SIZE_X;
  BODY_SIZE_Y = (float)static_fields->BODY_SIZE_Y;
  result.fields.y = BODY_SIZE_Y;
  result.fields.x = BODY_SIZE_X;
  return result;
}


UnityEngine_Vector2_o UIVerticalImageRender__GetCenterOffset(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  float v3; // s0
  int HEIGHT; // w8
  int v5; // w8
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D2E256 & 1) == 0 )
  {
    sub_1C94098(&ManagerConfig_TypeInfo);
    byte_4D2E256 = 1;
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


UnityEngine_Vector2_o UIVerticalImageRender__GetCharacterOffset(const MethodInfo *method)
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


UnityEngine_Vector2_o UIVerticalImageRender__GetCharacterOffsetMyroom(const MethodInfo *method)
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


bool UIVerticalImageRender__IsBusyMoveAlpha(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  return this->fields.isBusyMoveAlpha;
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__MoveAlpha(
        UIVerticalImageRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  long double v12; // q8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  float r; // s10
  float g; // s11
  float b; // s12
  UnityEngine_GameObject_o *v24; // x0
  TweenRendererColor_o *v25; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *Component_object; // x20
  const MethodInfo *v42; // x1
  UnityEngine_Color_o v43; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v12 = *(long double *)&alpha;
  if ( (byte_4D2E261 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_6015/*"EndMoveAlpha"*/);
    byte_4D2E261 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackFunc,
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
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v43.fields.r = r;
    v43.fields.g = g;
    v43.fields.b = b;
    v43.fields.a = *(float *)&v12;
    v25 = TweenRendererColor__Begin(v24, duration, v43, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v25 )
      {
        v25->fields.eventReceiver = gameObject;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v25->fields.eventReceiver,
          (int32_t)gameObject,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        v34 = StringLiteral_6015/*"EndMoveAlpha"*/;
        v25->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6015/*"EndMoveAlpha"*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v25->fields.callWhenFinished, v34, v35, v36, v37, v38, v39, v40);
        return;
      }
LABEL_16:
      sub_1C942F0(gameObject, v27);
    }
  }
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v12);
  UIVerticalImageRender__EndMoveAlpha(this, v42);
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__MoveAlphaSpeed(
        UIVerticalImageRender_o *this,
        float speed,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  long double v12; // q8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  float b; // s10
  float r; // s11
  float g; // s12
  float v24; // s0
  float v25; // s9
  UnityEngine_GameObject_o *v26; // x0
  TweenRendererColor_o *v27; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppObject *Component_object; // x20
  const MethodInfo *v44; // x1
  UnityEngine_Color_o v45; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v12 = *(long double *)&alpha;
  if ( (byte_4D2E262 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_6015/*"EndMoveAlpha"*/);
    byte_4D2E262 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackFunc,
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
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
    v24 = (float)(*(float *)&v12 - this->fields.mColor.fields.a) / speed;
    if ( v24 >= 0.0 )
      v25 = (float)(*(float *)&v12 - this->fields.mColor.fields.a) / speed;
    else
      v25 = -v24;
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v45.fields.r = r;
    v45.fields.g = g;
    v45.fields.b = b;
    v45.fields.a = *(float *)&v12;
    v27 = TweenRendererColor__Begin(v26, v25, v45, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v27 )
      {
        v27->fields.eventReceiver = gameObject;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v27->fields.eventReceiver,
          (int32_t)gameObject,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v36 = StringLiteral_6015/*"EndMoveAlpha"*/;
        v27->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6015/*"EndMoveAlpha"*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->fields.callWhenFinished, v36, v37, v38, v39, v40, v41, v42);
        return;
      }
LABEL_19:
      sub_1C942F0(gameObject, v29);
    }
  }
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v12);
  UIVerticalImageRender__EndMoveAlpha(this, v44);
}


void UIVerticalImageRender__RecoverSharder(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4D2E25C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C94098(&StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C94098(&StringLiteral_22489/*"normal"*/);
    sub_1C94098(&StringLiteral_23728/*"silhouette"*/);
    byte_4D2E25C = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23728/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22489/*"normal"*/, 0);
    v5 = &StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  UIVerticalImageRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIVerticalImageRender__ReleaseCharacter(UIVerticalImageRender_o *this, const MethodInfo *method)
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Object_o *v17; // x20

  if ( (byte_4D2E259 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E259 = 1;
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
      UIVerticalImageRender__SetActive(this, 0, v7);
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
      UnityEngine_Object__Destroy_72110972(v9, 0);
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
      v17 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v17, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_1C942F0(bodyFilter, v4);
  }
LABEL_29:
  this->fields.textureList = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.textureList, 0, v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__SetActive(UIVerticalImageRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_1C942F0(bodyRenderer, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyRenderer, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIVerticalImageRender__SetAlpha(UIVerticalImageRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
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
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    v2,
    v2,
    v3);
}


void UIVerticalImageRender__SetCharacter(
        UIVerticalImageRender_o *this,
        System_String_o *imageName,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    faceType,
    (int32_t)textureList,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  UIVerticalImageRender__SetCharacterRender(this, v9);
}


void UIVerticalImageRender__SetCharacterRender(UIVerticalImageRender_o *this, const MethodInfo *method)
{
  char *bodyRenderer; // x0
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
  UIVerticalImageRender_c *v18; // x8
  char *v19; // x21
  unsigned int v20; // w9
  struct UIVerticalImageRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int TOP_Y; // s1
  int32x2_t v24; // d0
  struct UIVerticalImageRender_StaticFields *v25; // x8
  int BOTTOM_Y; // s0
  int v27; // s1
  struct UIVerticalImageRender_StaticFields *v28; // x8
  int v29; // s0
  int RIGHT_X; // s1
  struct UIVerticalImageRender_StaticFields *v31; // x8
  int v32; // s0
  int v33; // s1
  struct UIVerticalImageRender_StaticFields *v34; // x8
  int v35; // s0
  int v36; // s1
  struct UIVerticalImageRender_StaticFields *v37; // x8
  int BOTTOM_Y2; // s0
  int v39; // s1
  struct UIVerticalImageRender_StaticFields *v40; // x8
  int v41; // s0
  int v42; // s1
  char *v43; // x21
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
  struct UIVerticalImageRender_StaticFields *v62; // x9
  float BODY_V; // s2
  struct UIVerticalImageRender_StaticFields *v64; // x9
  float v65; // s0
  struct UIVerticalImageRender_StaticFields *v66; // x9
  float32x2_t v67; // d0
  float32x2_t v68; // d1
  __int64 v69; // d2
  struct UIVerticalImageRender_StaticFields *v70; // x9
  float BODY_V2; // s2
  struct UIVerticalImageRender_StaticFields *v72; // x9
  float v73; // s0
  struct UIVerticalImageRender_StaticFields *v74; // x8
  float32x2_t v75; // d0
  float32x2_t v76; // d1
  __int64 v77; // d2
  unsigned int v78; // w8
  struct UIVerticalImageRender_StaticFields *v79; // x9
  float v80; // s2
  struct UIVerticalImageRender_StaticFields *v81; // x9
  float v82; // s0
  struct UIVerticalImageRender_StaticFields *v83; // x9
  float32x2_t v84; // d0
  float32x2_t v85; // d1
  __int64 v86; // d2
  struct UIVerticalImageRender_StaticFields *v87; // x9
  float v88; // s2
  struct UIVerticalImageRender_StaticFields *v89; // x9
  float v90; // s0
  struct UIVerticalImageRender_StaticFields *v91; // x8
  float32x2_t v92; // d0
  float32x2_t v93; // d1
  __int64 v94; // d2
  System_Array_o *v95; // x0
  System_RuntimeFieldHandle_o v96; // x1
  System_Int32_array *v97; // x21
  long double v98; // q3
  _BOOL4 isTalkMask; // w9
  bool v100; // zf
  UIVerticalImageRender_c *klass; // x8
  long double v102; // q0
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x2

  if ( (byte_4D2E25A & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&UnityEngine_Mesh_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__D34B481CF7365656E79A8F13CBD15BBF6B12B11B23727F2345088914BFC15F80);
    sub_1C94098(&UIVerticalImageRender_TypeInfo);
    sub_1C94098(&UnityEngine_Vector2___TypeInfo);
    sub_1C94098(&UnityEngine_Vector3___TypeInfo);
    sub_1C94098(&StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSilhouette"*/);
    sub_1C94098(&StringLiteral_16321/*"_MainTex"*/);
    sub_1C94098(&StringLiteral_4933/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/);
    sub_1C94098(&StringLiteral_4930/*"Custom/Sprite-ScriptActionFigureNormal2"*/);
    sub_1C94098(&StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureNormal"*/);
    sub_1C94098(&StringLiteral_22489/*"normal"*/);
    sub_1C94098(&StringLiteral_16417/*"_SubTex"*/);
    sub_1C94098(&StringLiteral_23728/*"silhouette"*/);
    byte_4D2E25A = 1;
  }
  bodyRenderer = (char *)UIVerticalImageRender_TypeInfo;
  if ( !UIVerticalImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo);
    bodyRenderer = (char *)UIVerticalImageRender_TypeInfo;
  }
  v4 = *(_DWORD *)(*((_QWORD *)bodyRenderer + 23) + 28LL);
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-v4;
  v5 = *(_DWORD *)(*((_QWORD *)bodyRenderer + 23) + 28LL);
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
  v11 = System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23728/*"silhouette"*/, 0);
  if ( v10 )
  {
    if ( v11 )
    {
      v12 = &StringLiteral_4933/*"Custom/Sprite-ScriptActionFigureSilhouette2"*/;
    }
    else
    {
      System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22489/*"normal"*/, 0);
      v12 = &StringLiteral_4930/*"Custom/Sprite-ScriptActionFigureNormal2"*/;
    }
  }
  else if ( v11 )
  {
    v12 = &StringLiteral_4932/*"Custom/Sprite-ScriptActionFigureSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22489/*"normal"*/, 0);
    v12 = &StringLiteral_4929/*"Custom/Sprite-ScriptActionFigureNormal"*/;
  }
  v13 = UnityEngine_Shader__Find((System_String_o *)*v12, 0);
  v14 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16321/*"_MainTex"*/,
    (UnityEngine_Texture_o *)v15->m_Items[0],
    0);
  v16 = this->fields.textureList;
  if ( !v16 )
    goto LABEL_70;
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_69;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16417/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v16->m_Items[1],
    0);
  bodyRenderer = (char *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_70;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v14, 0);
  v17 = (UnityEngine_Mesh_o *)sub_1C942E4(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v17, 0);
  bodyRenderer = (char *)sub_1C94140(UnityEngine_Vector3___TypeInfo, 8);
  v18 = UIVerticalImageRender_TypeInfo;
  v19 = bodyRenderer;
  if ( !UIVerticalImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo);
    v18 = UIVerticalImageRender_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_70;
  v20 = *((_DWORD *)v19 + 6);
  if ( !v20 )
    goto LABEL_69;
  static_fields = v18->static_fields;
  LEFT_X = static_fields->LEFT_X;
  TOP_Y = static_fields->TOP_Y;
  *((_DWORD *)v19 + 10) = 0;
  *((float *)v19 + 8) = (float)LEFT_X;
  *((float *)v19 + 9) = (float)TOP_Y;
  if ( v20 == 1 )
    goto LABEL_69;
  v24.n64_u64[0] = *(unsigned __int64 *)&UIVerticalImageRender_TypeInfo->static_fields->RIGHT_X;
  *((_DWORD *)v19 + 13) = 0;
  *(float32x2_t *)(v19 + 44) = vcvt_f32_s32(v24);
  if ( v20 <= 2 )
    goto LABEL_69;
  v25 = UIVerticalImageRender_TypeInfo->static_fields;
  BOTTOM_Y = v25->BOTTOM_Y;
  v27 = v25->LEFT_X;
  *((_DWORD *)v19 + 16) = 0;
  *((float *)v19 + 14) = (float)v27;
  *((float *)v19 + 15) = (float)BOTTOM_Y;
  if ( v20 == 3 )
    goto LABEL_69;
  v28 = UIVerticalImageRender_TypeInfo->static_fields;
  v29 = v28->BOTTOM_Y;
  RIGHT_X = v28->RIGHT_X;
  *((_DWORD *)v19 + 19) = 0;
  *((float *)v19 + 17) = (float)RIGHT_X;
  *((float *)v19 + 18) = (float)v29;
  if ( v20 <= 4 )
    goto LABEL_69;
  v31 = UIVerticalImageRender_TypeInfo->static_fields;
  v32 = v31->BOTTOM_Y;
  v33 = v31->LEFT_X;
  *((_DWORD *)v19 + 22) = 0;
  *((float *)v19 + 20) = (float)v33;
  *((float *)v19 + 21) = (float)v32;
  if ( v20 == 5 )
    goto LABEL_69;
  v34 = UIVerticalImageRender_TypeInfo->static_fields;
  v35 = v34->BOTTOM_Y;
  v36 = v34->RIGHT_X;
  *((_DWORD *)v19 + 25) = 0;
  *((float *)v19 + 23) = (float)v36;
  *((float *)v19 + 24) = (float)v35;
  if ( v20 <= 6 )
    goto LABEL_69;
  v37 = UIVerticalImageRender_TypeInfo->static_fields;
  BOTTOM_Y2 = v37->BOTTOM_Y2;
  v39 = v37->LEFT_X;
  *((_DWORD *)v19 + 28) = 0;
  *((float *)v19 + 26) = (float)v39;
  *((float *)v19 + 27) = (float)BOTTOM_Y2;
  if ( v20 == 7 )
    goto LABEL_69;
  v40 = UIVerticalImageRender_TypeInfo->static_fields;
  v41 = v40->BOTTOM_Y2;
  v42 = v40->RIGHT_X;
  *((_DWORD *)v19 + 31) = 0;
  *((float *)v19 + 29) = (float)v42;
  *((float *)v19 + 30) = (float)v41;
  if ( !v17 )
    goto LABEL_70;
  UnityEngine_Mesh__set_vertices(v17, (UnityEngine_Vector3_array *)v19, 0);
  bodyRenderer = (char *)sub_1C94140(UnityEngine_Vector3___TypeInfo, 8);
  v43 = bodyRenderer;
  if ( !byte_4D25F22 )
  {
    bodyRenderer = (char *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F22 = 1;
  }
  if ( !v43 )
LABEL_70:
    sub_1C942F0(bodyRenderer, method);
  v44 = *((_DWORD *)v43 + 6);
  if ( !v44 )
    goto LABEL_69;
  v45 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v46 = -v45[10].n64_f32[0];
  *((float32x2_t *)v43 + 4) = vneg_f32(v45[9]);
  *((float *)v43 + 10) = v46;
  if ( v44 == 1 )
    goto LABEL_69;
  v47 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v48 = -v47[10].n64_f32[0];
  *(float32x2_t *)(v43 + 44) = vneg_f32(v47[9]);
  *((float *)v43 + 13) = v48;
  if ( v44 <= 2 )
    goto LABEL_69;
  v49 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v50 = -v49[10].n64_f32[0];
  *((float32x2_t *)v43 + 7) = vneg_f32(v49[9]);
  *((float *)v43 + 16) = v50;
  if ( v44 == 3 )
    goto LABEL_69;
  v51 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v52 = -v51[10].n64_f32[0];
  *(float32x2_t *)(v43 + 68) = vneg_f32(v51[9]);
  *((float *)v43 + 19) = v52;
  if ( v44 <= 4 )
    goto LABEL_69;
  v53 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v54 = -v53[10].n64_f32[0];
  *((float32x2_t *)v43 + 10) = vneg_f32(v53[9]);
  *((float *)v43 + 22) = v54;
  if ( v44 == 5 )
    goto LABEL_69;
  v55 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v56 = -v55[10].n64_f32[0];
  *(float32x2_t *)(v43 + 92) = vneg_f32(v55[9]);
  *((float *)v43 + 25) = v56;
  if ( v44 <= 6 )
    goto LABEL_69;
  v57 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v58 = -v57[10].n64_f32[0];
  *((float32x2_t *)v43 + 13) = vneg_f32(v57[9]);
  *((float *)v43 + 28) = v58;
  if ( v44 == 7 )
    goto LABEL_69;
  v59 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v60 = -v59[10].n64_f32[0];
  *(float32x2_t *)(v43 + 116) = vneg_f32(v59[9]);
  *((float *)v43 + 31) = v60;
  UnityEngine_Mesh__set_normals(v17, (UnityEngine_Vector3_array *)v43, 0);
  bodyRenderer = (char *)sub_1C94140(UnityEngine_Vector2___TypeInfo, 8);
  if ( !bodyRenderer )
    goto LABEL_70;
  v61 = *((_DWORD *)bodyRenderer + 6);
  if ( !v61 )
    goto LABEL_69;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U;
  if ( v61 == 1 )
    goto LABEL_69;
  v62 = UIVerticalImageRender_TypeInfo->static_fields;
  BODY_V = v62->BODY_V;
  *((float *)bodyRenderer + 10) = v62->BODY_U + v62->BODY_W;
  *((float *)bodyRenderer + 11) = BODY_V;
  if ( v61 <= 2 )
    goto LABEL_69;
  v64 = UIVerticalImageRender_TypeInfo->static_fields;
  v65 = v64->BODY_V - v64->BODY_H;
  *((_DWORD *)bodyRenderer + 12) = LODWORD(v64->BODY_U);
  *((float *)bodyRenderer + 13) = v65;
  if ( v61 == 3 )
    goto LABEL_69;
  v66 = UIVerticalImageRender_TypeInfo->static_fields;
  v67.n64_u64[0] = *(unsigned __int64 *)&v66->BODY_U;
  v68.n64_u64[0] = *(unsigned __int64 *)&v66->BODY_W;
  LODWORD(v69) = vadd_f32(v67, v68).n64_u32[0];
  HIDWORD(v69) = vsub_f32(v67, v68).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v69;
  if ( v61 <= 4 )
    goto LABEL_69;
  *((_QWORD *)bodyRenderer + 8) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U2;
  if ( v61 == 5 )
    goto LABEL_69;
  v70 = UIVerticalImageRender_TypeInfo->static_fields;
  BODY_V2 = v70->BODY_V2;
  *((float *)bodyRenderer + 18) = v70->BODY_U2 + v70->BODY_W;
  *((float *)bodyRenderer + 19) = BODY_V2;
  if ( v61 <= 6 )
    goto LABEL_69;
  v72 = UIVerticalImageRender_TypeInfo->static_fields;
  v73 = v72->BODY_V2 - v72->BODY_H;
  *((_DWORD *)bodyRenderer + 20) = LODWORD(v72->BODY_U2);
  *((float *)bodyRenderer + 21) = v73;
  if ( v61 == 7 )
    goto LABEL_69;
  v74 = UIVerticalImageRender_TypeInfo->static_fields;
  v75.n64_u64[0] = *(unsigned __int64 *)&v74->BODY_U2;
  v76.n64_u64[0] = *(unsigned __int64 *)&v74->BODY_W;
  LODWORD(v77) = vadd_f32(v75, v76).n64_u32[0];
  HIDWORD(v77) = vsub_f32(v75, v76).n64_u32[1];
  *((_QWORD *)bodyRenderer + 11) = v77;
  UnityEngine_Mesh__set_uv(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = (char *)sub_1C94140(UnityEngine_Vector2___TypeInfo, 8);
  if ( !bodyRenderer )
    goto LABEL_70;
  v78 = *((_DWORD *)bodyRenderer + 6);
  if ( !v78 )
    goto LABEL_69;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U;
  if ( v78 == 1 )
    goto LABEL_69;
  v79 = UIVerticalImageRender_TypeInfo->static_fields;
  v80 = v79->BODY_V;
  *((float *)bodyRenderer + 10) = v79->BODY_U + v79->BODY_W;
  *((float *)bodyRenderer + 11) = v80;
  if ( v78 <= 2 )
    goto LABEL_69;
  v81 = UIVerticalImageRender_TypeInfo->static_fields;
  v82 = v81->BODY_V - v81->BODY_H;
  *((_DWORD *)bodyRenderer + 12) = LODWORD(v81->BODY_U);
  *((float *)bodyRenderer + 13) = v82;
  if ( v78 == 3 )
    goto LABEL_69;
  v83 = UIVerticalImageRender_TypeInfo->static_fields;
  v84.n64_u64[0] = *(unsigned __int64 *)&v83->BODY_U;
  v85.n64_u64[0] = *(unsigned __int64 *)&v83->BODY_W;
  LODWORD(v86) = vadd_f32(v84, v85).n64_u32[0];
  HIDWORD(v86) = vsub_f32(v84, v85).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v86;
  if ( v78 <= 4 )
    goto LABEL_69;
  *((_QWORD *)bodyRenderer + 8) = *(_QWORD *)&UIVerticalImageRender_TypeInfo->static_fields->BODY_U2;
  if ( v78 == 5 )
    goto LABEL_69;
  v87 = UIVerticalImageRender_TypeInfo->static_fields;
  v88 = v87->BODY_V2;
  *((float *)bodyRenderer + 18) = v87->BODY_U2 + v87->BODY_W;
  *((float *)bodyRenderer + 19) = v88;
  if ( v78 <= 6
    || (v89 = UIVerticalImageRender_TypeInfo->static_fields,
        v90 = v89->BODY_V2 - v89->BODY_H,
        *((_DWORD *)bodyRenderer + 20) = LODWORD(v89->BODY_U2),
        *((float *)bodyRenderer + 21) = v90,
        v78 == 7) )
  {
LABEL_69:
    sub_1C942F8(bodyRenderer);
  }
  v91 = UIVerticalImageRender_TypeInfo->static_fields;
  v92.n64_u64[0] = *(unsigned __int64 *)&v91->BODY_U2;
  v93.n64_u64[0] = *(unsigned __int64 *)&v91->BODY_W;
  LODWORD(v94) = vadd_f32(v92, v93).n64_u32[0];
  HIDWORD(v94) = vsub_f32(v92, v93).n64_u32[1];
  *((_QWORD *)bodyRenderer + 11) = v94;
  UnityEngine_Mesh__set_uv2(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v95 = (System_Array_o *)sub_1C94140(int___TypeInfo, 12);
  v96.fields.value = Field__PrivateImplementationDetails__D34B481CF7365656E79A8F13CBD15BBF6B12B11B23727F2345088914BFC15F80;
  v97 = (System_Int32_array *)v95;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v95, v96, 0);
  UnityEngine_Mesh__set_triangles(v17, v97, 0);
  bodyRenderer = (char *)this->fields.bodyFilter;
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
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v102,
    v102,
    v102,
    v98);
  UIVerticalImageRender__SetFilterColor(this, this->fields.filterColor, v103);
  UIVerticalImageRender__SetActive(this, 1, v104);
}


void UIVerticalImageRender__SetDepth(UIVerticalImageRender_o *this, float d, const MethodInfo *method)
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
    sub_1C942F0(transform, v6);
  }
  v10.fields.z = -d;
  v10.fields.x = x;
  v10.fields.y = y;
  UnityEngine_Transform__set_localPosition(transform, v10, 0);
}


void UIVerticalImageRender__SetFilter(
        UIVerticalImageRender_o *this,
        System_String_o *filterName,
        UnityEngine_Color_o filterColor,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = filterColor.fields.a;
  b = filterColor.fields.b;
  g = filterColor.fields.g;
  r = filterColor.fields.r;
  this->fields.filterName = filterName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (int32_t)method,
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
  if ( (byte_4D2E25E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16279/*"_FilterColor"*/);
    byte_4D2E25E = 1;
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
      sub_1C942F0(bodyRenderer, method);
    }
    v10.fields.b = b;
    v10.fields.a = a;
    v10.fields.r = r;
    v10.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16279/*"_FilterColor"*/,
      v10,
      0);
  }
}


void UIVerticalImageRender__SetGradation(UIVerticalImageRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4D2E25F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16292/*"_Gradation"*/);
    byte_4D2E25F = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16292/*"_Gradation"*/,
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
          (System_String_o *)StringLiteral_16292/*"_Gradation"*/,
          g,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C942F0(bodyRenderer, method);
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
    sub_1C942F0(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIVerticalImageRender__SetLayer_44915216(this, transform, layer, v8);
  }
}


void UIVerticalImageRender__SetLayer_44915216(
        UIVerticalImageRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIVerticalImageRender_o *v6; // x21
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
  if ( (byte_4D2E264 & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    this = (UIVerticalImageRender_o *)sub_1C94098(&UnityEngine_Transform_TypeInfo);
    byte_4D2E264 = 1;
  }
  if ( !tf
    || (this = (UIVerticalImageRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C942F0(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v7);
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
      v12 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
        sub_1C9468C(v17);
        goto LABEL_33;
      }
    }
    UIVerticalImageRender__SetLayer_44915216(v6, v17, layer, v18);
  }
  v20 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
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
      v25 = sub_1C6A420(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}


void UIVerticalImageRender__SetMaskInteraction(
        UIVerticalImageRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  __int64 v6; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x8
  int32_t v8; // w19

  if ( (byte_4D2E265 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16410/*"_StencilComp"*/);
    byte_4D2E265 = 1;
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
    sub_1C942F0(RenderingCompareFunction, v6);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16410/*"_StencilComp"*/, v8, 0);
}


void UIVerticalImageRender__SetShadow(UIVerticalImageRender_o *this, bool isShadow, const MethodInfo *method)
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
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
    v4);
}


void UIVerticalImageRender__SetSharder(
        UIVerticalImageRender_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  UnityEngine_Renderer_o *bodyRenderer; // x0
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_Texture2D_array *textureList; // x8
  UnityEngine_Object_o *v8; // x21

  v3 = shaderName;
  if ( (byte_4D2E25B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1310/*"2"*/);
    byte_4D2E25B = 1;
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
          sub_1C942F8(bodyRenderer);
        v8 = (UnityEngine_Object_o *)textureList->m_Items[1];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
          v3 = System_String__Concat_64417744(v3, (System_String_o *)StringLiteral_1310/*"2"*/, 0);
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(v3, 0);
        if ( material )
        {
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, (UnityEngine_Shader_o *)bodyRenderer, 0);
          return;
        }
      }
    }
    sub_1C942F0(bodyRenderer, shaderName);
  }
}


void UIVerticalImageRender__SetSortingOrder(UIVerticalImageRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_1C942F0(0, order);
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIVerticalImageRender__SetTalkMask(UIVerticalImageRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  UIVerticalImageRender_c *klass; // x8

  LODWORD(v3) = 1036831949;
  klass = this->klass;
  if ( !this->fields.isShadow )
    *(float *)&v3 = 1.0;
  this->fields.isTalkMask = isMask;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  *(float *)&v4 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIVerticalImageRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    v3,
    v3,
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
  if ( (byte_4D2E257 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16229/*"_Color"*/);
    byte_4D2E257 = 1;
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16229/*"_Color"*/, v12, 0);
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
    sub_1C942F0(bodyRenderer, v8);
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

  if ( (byte_4D2E260 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16468/*"_Volume"*/);
    byte_4D2E260 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16468/*"_Volume"*/,
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
          (System_String_o *)StringLiteral_16468/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C942F0(bodyRenderer, method);
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
  int32_t BODY_SIZE_Y; // w19
  int MAIN_SIZE_Y; // s9

  if ( (byte_4D2E25D & 1) == 0 )
  {
    sub_1C94098(&UIVerticalImageRender_TypeInfo);
    sub_1C94098(&StringLiteral_16474/*"_WipeY"*/);
    sub_1C94098(&StringLiteral_16472/*"_WipeTex"*/);
    sub_1C94098(&StringLiteral_16473/*"_WipeX"*/);
    byte_4D2E25D = 1;
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_16472/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16473/*"_WipeX"*/,
         0) )
  {
    x = this->fields.figureOffset.fields.x;
    bodyRenderer = UIVerticalImageRender_TypeInfo;
    if ( !UIVerticalImageRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo);
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
      (System_String_o *)StringLiteral_16473/*"_WipeX"*/,
      (float)-x / (float)v7,
      0);
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16474/*"_WipeY"*/,
         0) )
  {
    height = UnityEngine_Screen__get_height(0);
    v9 = UIVerticalImageRender_TypeInfo;
    if ( !UIVerticalImageRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIVerticalImageRender_TypeInfo);
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
          (System_String_o *)StringLiteral_16474/*"_WipeY"*/,
          (float)((float)((float)(height - BODY_SIZE_Y) * 0.5) - y) / (float)MAIN_SIZE_Y,
          0);
        return;
      }
    }
LABEL_22:
    sub_1C942F0(bodyRenderer, texture);
  }
}