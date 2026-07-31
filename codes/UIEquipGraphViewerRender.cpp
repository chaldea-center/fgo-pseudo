void UIEquipGraphViewerRender___cctor(const MethodInfo *method)
{
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8

  if ( (byte_5939F59 & 1) == 0 )
  {
    sub_21FFC50(&UIEquipGraphViewerRender_TypeInfo);
    byte_5939F59 = 1;
  }
  static_fields = UIEquipGraphViewerRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_E93D90;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_E93C60;
  *(_OWORD *)&static_fields->BODY_U = xmmword_E94660;
  *(_QWORD *)&static_fields->NAME_SIZE_X = 0xA900000200LL;
  static_fields->BODY_Y_FIX = 150;
  *(_QWORD *)&static_fields->NAME_TOP_Y = 0xC2A9000042A90000LL;
  static_fields->NAME_Y_FIX = 150.0;
}


void UIEquipGraphViewerRender___ctor(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  __int64 v10; // x1
  UIEquipGraphViewerRender_c *v16; // x0

  if ( (byte_5939F58 & 1) == 0 )
  {
    sub_21FFC50(&UIEquipGraphViewerRender_TypeInfo);
    sub_21FFC50(&StringLiteral_23361/*"normal"*/);
    byte_5939F58 = 1;
  }
  v9 = StringLiteral_23361/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_23361/*"normal"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.filterName, v9, v2, v3, v4, v5, v6, v7);
  __asm { FMOV            V0.4S, #1.0 }
  v16 = UIEquipGraphViewerRender_TypeInfo;
  this->fields.filterColor = _Q0;
  if ( !*(&v16->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v16, v10);
    v16 = UIEquipGraphViewerRender_TypeInfo;
  }
  this->fields.EquipGraphBodyRect = *(struct UnityEngine_Rect_o *)&v16->static_fields->BODY_U;
  this->fields.EquipGraphNameRect = (struct UnityEngine_Rect_o)xmmword_E929E0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIEquipGraphViewerRender__EndMoveAlpha(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
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

  if ( (byte_5939F55 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F55 = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
  moveAlphaCallbackObject = (UnityEngine_Object_o *)this->fields.moveAlphaCallbackObject;
  moveAlphaCallbackFunc = this->fields.moveAlphaCallbackFunc;
  this->fields.moveAlphaCallbackObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v13, v14, v15, v16, v17, v18);
  v20 = UnityEngine_Object_TypeInfo;
  this->fields.isBusyMoveAlpha = 0;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v19);
  v21 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v21 )
  {
    if ( !moveAlphaCallbackObject )
      sub_21FFECC(v21, v22);
    UnityEngine_GameObject__SendMessage_83224792(
      (UnityEngine_GameObject_o *)moveAlphaCallbackObject,
      moveAlphaCallbackFunc,
      0);
  }
}


System_String_array *UIEquipGraphViewerRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
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
  if ( (byte_5939F47 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_4550/*"CharaGraph/9400010"*/);
    imageName = (System_String_o *)sub_21FFC50(&StringLiteral_4548/*"CharaGraph/"*/);
    byte_5939F47 = 1;
  }
  if ( !v2 )
    goto LABEL_14;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_4548/*"CharaGraph/"*/, 0) )
    v2 = System_String__Concat_75438412((System_String_o *)StringLiteral_4548/*"CharaGraph/"*/, v2, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
  isExistAssetStorage = AssetManager__isExistAssetStorage(v2, 0);
  v5 = StringLiteral_4550/*"CharaGraph/9400010"*/;
  v6 = isExistAssetStorage;
  imageName = (System_String_o *)sub_21FFD10(string___TypeInfo, 1);
  if ( !imageName )
LABEL_14:
    sub_21FFECC(imageName, method);
  v13 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_21FFED4(imageName);
  if ( v6 )
    v14 = v2;
  else
    v14 = (void *)v5;
  imageName[1].monitor = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&imageName[1].monitor, (int32_t)v14, v7, v8, v9, v10, v11, v12);
  return (System_String_array *)v13;
}


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetBodySize(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v2; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5939F4A & 1) == 0 )
  {
    sub_21FFC50(&UIEquipGraphViewerRender_TypeInfo);
    byte_5939F4A = 1;
  }
  v2 = UIEquipGraphViewerRender_TypeInfo;
  if ( !*(&UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo, method);
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

  if ( (byte_5939F48 & 1) == 0 )
  {
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_5939F48 = 1;
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


void UIEquipGraphViewerRender__MoveAlpha(
        UIEquipGraphViewerRender_o *this,
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

  if ( (byte_5939F53 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6253/*"EndMoveAlpha"*/);
    byte_5939F53 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    callbackFunc,
    (System_String_o *)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_21FFBF4(
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
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v26->fields.eventReceiver,
          (int32_t)gameObject,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v35 = StringLiteral_6253/*"EndMoveAlpha"*/;
        v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6253/*"EndMoveAlpha"*/;
        sub_21FFBF4(
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
      sub_21FFECC(gameObject, v28);
    }
  }
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIEquipGraphViewerRender__EndMoveAlpha(this, v44);
}


void UIEquipGraphViewerRender__MoveAlphaSpeed(
        UIEquipGraphViewerRender_o *this,
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

  if ( (byte_5939F54 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6253/*"EndMoveAlpha"*/);
    byte_5939F54 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    callbackFunc,
    (System_String_o *)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_21FFBF4(
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
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v28->fields.eventReceiver,
          (int32_t)gameObject,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = StringLiteral_6253/*"EndMoveAlpha"*/;
        v28->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6253/*"EndMoveAlpha"*/;
        sub_21FFBF4(
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
      sub_21FFECC(gameObject, v30);
    }
  }
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIEquipGraphViewerRender__EndMoveAlpha(this, v46);
}


void UIEquipGraphViewerRender__RecoverSharder(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_5939F4F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5094/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_21FFC50(&StringLiteral_23361/*"normal"*/);
    sub_21FFC50(&StringLiteral_5093/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_21FFC50(&StringLiteral_24693/*"silhouette"*/);
    byte_5939F4F = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24693/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_5094/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23361/*"normal"*/, 0);
    v5 = &StringLiteral_5093/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  UIEquipGraphViewerRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIEquipGraphViewerRender__ReleaseCharacter(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
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
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *nameRenderer; // x20
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x20
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x20
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x20

  if ( (byte_5939F4B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F4B = 1;
  }
  bodyRenderer = (UnityEngine_Object_o *)this->fields.bodyRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bodyRenderer, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      UIEquipGraphViewerRender__SetActiveBody(this, 0, v8);
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
    {
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      v12 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_83246496(v12, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(mesh, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( !bodyFilter )
      goto LABEL_56;
    v16 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_83246496(v16, 0);
    bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
    if ( !bodyFilter )
      goto LABEL_56;
    UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
  }
  nameRenderer = (UnityEngine_Object_o *)this->fields.nameRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(nameRenderer, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
      UIEquipGraphViewerRender__SetActiveName(this, 0, v20);
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
    if ( !bodyFilter )
      goto LABEL_56;
    v22 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
    {
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      v24 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyFilter, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_83246496(v24, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameRenderer;
      if ( !bodyFilter )
        goto LABEL_56;
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyFilter, 0, 0);
    }
  }
  bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
  if ( !bodyFilter )
    goto LABEL_56;
  v26 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
    if ( bodyFilter )
    {
      v34 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      UnityEngine_Object__Destroy_83246496(v34, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_55;
      }
    }
LABEL_56:
    sub_21FFECC(bodyFilter, v4);
  }
LABEL_55:
  this->fields.textureList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.textureList, 0, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__SetActiveBody(UIEquipGraphViewerRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_21FFECC(bodyRenderer, isActive);
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
    sub_21FFECC(nameRenderer, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameRenderer, isActive, 0);
}


void UIEquipGraphViewerRender__SetAlpha(UIEquipGraphViewerRender_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
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
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__SetCharacter(
        UIEquipGraphViewerRender_o *this,
        int32_t svtId,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    *(System_String_o **)&faceType,
    (System_String_o *)textureList,
    (int32_t)method,
    v5,
    v6,
    v7);
  UIEquipGraphViewerRender__SetCharacterRender(this, v9);
}


void UIEquipGraphViewerRender__SetCharacterRender(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v3; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  int32_t TOP_Y; // w9
  struct UIEquipGraphViewerRender_StaticFields *v6; // x8
  int32_t v7; // w9
  System_String_o *filterName; // x20
  System_String_o *v9; // x1
  System_String_o *v10; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  __int64 bodyRenderer; // x0
  __int64 v14; // x1
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v16; // x8
  UnityEngine_Mesh_o *v17; // x20
  UIEquipGraphViewerRender_c *v18; // x8
  __int64 v19; // x21
  unsigned int v20; // w9
  struct UIEquipGraphViewerRender_StaticFields *v21; // x8
  int LEFT_X; // s0
  int v23; // s1
  int32x2_t v24; // d0
  struct UIEquipGraphViewerRender_StaticFields *v25; // x8
  int v26; // s0
  int BOTTOM_Y; // s1
  struct UIEquipGraphViewerRender_StaticFields *v28; // x8
  int RIGHT_X; // s0
  int v30; // s1
  __int64 v31; // x21
  unsigned int v32; // w9
  float32x2_t *v33; // x10
  float v34; // s1
  float32x2_t *v35; // x10
  float v36; // s1
  float32x2_t *v37; // x10
  float v38; // s1
  float32x2_t *v39; // x8
  float v40; // s1
  unsigned int v41; // w8
  struct UIEquipGraphViewerRender_StaticFields *v42; // x9
  float BODY_V; // s2
  struct UIEquipGraphViewerRender_StaticFields *v44; // x9
  float v45; // s0
  struct UIEquipGraphViewerRender_StaticFields *v46; // x8
  float32x2_t v47; // d0
  float32x2_t v48; // d1
  __int64 v49; // d2
  unsigned int v50; // w8
  struct UIEquipGraphViewerRender_StaticFields *v51; // x9
  float v52; // s2
  struct UIEquipGraphViewerRender_StaticFields *v53; // x9
  float v54; // s0
  struct UIEquipGraphViewerRender_StaticFields *v55; // x8
  float32x2_t v56; // d0
  float32x2_t v57; // d1
  __int64 v58; // d2
  System_Array_o *v59; // x0
  System_RuntimeFieldHandle_o v60; // x1
  System_Int32_array *v61; // x21
  long double v62; // q0
  long double v63; // q3
  bool v64; // zf
  _BOOL4 isTalkMask; // w8
  const MethodInfo *v66; // x2

  if ( (byte_5939F4C & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Mesh_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_21FFC50(&UIEquipGraphViewerRender_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    sub_21FFC50(&StringLiteral_5094/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_21FFC50(&StringLiteral_23361/*"normal"*/);
    sub_21FFC50(&StringLiteral_16976/*"_SubTex"*/);
    sub_21FFC50(&StringLiteral_5093/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_21FFC50(&StringLiteral_24693/*"silhouette"*/);
    byte_5939F4C = 1;
  }
  v3 = UIEquipGraphViewerRender_TypeInfo;
  if ( !*(&UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo, method);
    v3 = UIEquipGraphViewerRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  TOP_Y = static_fields->TOP_Y;
  LODWORD(static_fields) = static_fields->BODY_Y_FIX;
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)((int)static_fields - TOP_Y);
  v6 = v3->static_fields;
  v7 = v6->TOP_Y;
  LODWORD(v6) = v6->BODY_Y_FIX;
  filterName = this->fields.filterName;
  v9 = (System_String_o *)StringLiteral_24693/*"silhouette"*/;
  this->fields.dispOffset.fields.x = 0.0;
  this->fields.dispOffset.fields.y = (float)((int)v6 - v7);
  if ( System_String__op_Equality(filterName, v9, 0) )
  {
    v10 = (System_String_o *)StringLiteral_5094/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23361/*"normal"*/, 0);
    v10 = (System_String_o *)StringLiteral_5093/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v11 = UnityEngine_Shader__Find(v10, 0);
  v12 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_46;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_45;
  if ( !v12 )
    goto LABEL_46;
  UnityEngine_Material__SetTexture(
    v12,
    (System_String_o *)StringLiteral_16879/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v16 = this->fields.textureList;
  if ( !v16 )
    goto LABEL_46;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v12,
    (System_String_o *)StringLiteral_16976/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v16->m_Items[0],
    0);
  bodyRenderer = (__int64)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v12, 0);
  v17 = (UnityEngine_Mesh_o *)sub_21FFEBC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v17, 0);
  bodyRenderer = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
  v18 = UIEquipGraphViewerRender_TypeInfo;
  v19 = bodyRenderer;
  if ( !*(&UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo, v14);
    v18 = UIEquipGraphViewerRender_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_46;
  v20 = *(_DWORD *)(v19 + 24);
  if ( !v20 )
    goto LABEL_45;
  v21 = v18->static_fields;
  LEFT_X = v21->LEFT_X;
  v23 = v21->TOP_Y;
  *(_DWORD *)(v19 + 40) = 0;
  *(float *)(v19 + 32) = (float)LEFT_X;
  *(float *)(v19 + 36) = (float)v23;
  if ( v20 == 1 )
    goto LABEL_45;
  v24.n64_u64[0] = *(unsigned __int64 *)&UIEquipGraphViewerRender_TypeInfo->static_fields->RIGHT_X;
  *(_DWORD *)(v19 + 52) = 0;
  *(float32x2_t *)(v19 + 44) = vcvt_f32_s32(v24);
  if ( v20 <= 2 )
    goto LABEL_45;
  v25 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v26 = v25->LEFT_X;
  BOTTOM_Y = v25->BOTTOM_Y;
  *(_DWORD *)(v19 + 64) = 0;
  *(float *)(v19 + 56) = (float)v26;
  *(float *)(v19 + 60) = (float)BOTTOM_Y;
  if ( v20 == 3 )
    goto LABEL_45;
  v28 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  RIGHT_X = v28->RIGHT_X;
  v30 = v28->BOTTOM_Y;
  *(_DWORD *)(v19 + 76) = 0;
  *(float *)(v19 + 68) = (float)RIGHT_X;
  *(float *)(v19 + 72) = (float)v30;
  if ( !v17 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v17, (UnityEngine_Vector3_array *)v19, 0);
  bodyRenderer = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
  v31 = bodyRenderer;
  if ( !byte_5931949 )
  {
    bodyRenderer = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931949 = 1;
  }
  if ( !v31 )
LABEL_46:
    sub_21FFECC(bodyRenderer, v14);
  v32 = *(_DWORD *)(v31 + 24);
  if ( !v32 )
    goto LABEL_45;
  v33 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v34 = -v33[10].n64_f32[0];
  *(float32x2_t *)(v31 + 32) = vneg_f32(v33[9]);
  *(float *)(v31 + 40) = v34;
  if ( (v32 & 0xFFFFFFFE) == 0 )
    goto LABEL_45;
  v35 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v36 = -v35[10].n64_f32[0];
  *(float32x2_t *)(v31 + 44) = vneg_f32(v35[9]);
  *(float *)(v31 + 52) = v36;
  if ( v32 <= 2 )
    goto LABEL_45;
  v37 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v38 = -v37[10].n64_f32[0];
  *(float32x2_t *)(v31 + 56) = vneg_f32(v37[9]);
  *(float *)(v31 + 64) = v38;
  if ( (v32 & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  v39 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v40 = -v39[10].n64_f32[0];
  *(float32x2_t *)(v31 + 68) = vneg_f32(v39[9]);
  *(float *)(v31 + 76) = v40;
  UnityEngine_Mesh__set_normals(v17, (UnityEngine_Vector3_array *)v31, 0);
  bodyRenderer = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v41 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v41 )
    goto LABEL_45;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIEquipGraphViewerRender_TypeInfo->static_fields->BODY_U;
  if ( v41 == 1 )
    goto LABEL_45;
  v42 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  BODY_V = v42->BODY_V;
  *(float *)(bodyRenderer + 40) = v42->BODY_U + v42->BODY_W;
  *(float *)(bodyRenderer + 44) = BODY_V;
  if ( v41 <= 2 )
    goto LABEL_45;
  v44 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v45 = v44->BODY_V - v44->BODY_H;
  *(float *)(bodyRenderer + 48) = v44->BODY_U;
  *(float *)(bodyRenderer + 52) = v45;
  if ( v41 == 3 )
    goto LABEL_45;
  v46 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v47.n64_u64[0] = *(unsigned __int64 *)&v46->BODY_U;
  v48.n64_u64[0] = *(unsigned __int64 *)&v46->BODY_W;
  LODWORD(v49) = vadd_f32(v47, v48).n64_u32[0];
  HIDWORD(v49) = vsub_f32(v47, v48).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v49;
  UnityEngine_Mesh__set_uv(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v50 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v50 )
    goto LABEL_45;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIEquipGraphViewerRender_TypeInfo->static_fields->BODY_U;
  if ( v50 == 1 )
    goto LABEL_45;
  v51 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v52 = v51->BODY_V;
  *(float *)(bodyRenderer + 40) = v51->BODY_U + v51->BODY_W;
  *(float *)(bodyRenderer + 44) = v52;
  if ( v50 <= 2
    || (v53 = UIEquipGraphViewerRender_TypeInfo->static_fields,
        v54 = v53->BODY_V - v53->BODY_H,
        *(float *)(bodyRenderer + 48) = v53->BODY_U,
        *(float *)(bodyRenderer + 52) = v54,
        v50 == 3) )
  {
LABEL_45:
    sub_21FFED4(bodyRenderer);
  }
  v55 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v56.n64_u64[0] = *(unsigned __int64 *)&v55->BODY_U;
  v57.n64_u64[0] = *(unsigned __int64 *)&v55->BODY_W;
  LODWORD(v58) = vadd_f32(v56, v57).n64_u32[0];
  HIDWORD(v58) = vsub_f32(v56, v57).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v58;
  UnityEngine_Mesh__set_uv2(v17, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v59 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 6);
  v60.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v61 = (System_Int32_array *)v59;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v59, v60, 0);
  UnityEngine_Mesh__set_triangles(v17, v61, 0);
  bodyRenderer = (__int64)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v17, 0);
  UnityEngine_Mesh__RecalculateNormals(v17, 0);
  UnityEngine_Mesh__RecalculateBounds(v17, 0);
  LODWORD(v62) = 1.0;
  *(float *)&v63 = this->fields.mColor.fields.a;
  v64 = !this->fields.isShadow;
  isTalkMask = this->fields.isTalkMask;
  this->fields.isBusyMoveAlpha = 0;
  if ( !v64 )
    *(float *)&v62 = 0.1;
  if ( isTalkMask )
    *(float *)&v62 = *(float *)&v62 * 0.5;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v62,
    *(float *)&v62,
    *(float *)&v62,
    v63);
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
    sub_21FFECC(transform, v6);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  UIEquipGraphViewerRender__RecoverSharder(this, v14);
  v16.fields.b = b;
  v16.fields.a = a;
  v16.fields.r = r;
  v16.fields.g = g;
  UIEquipGraphViewerRender__SetFilterColor(this, v16, v15);
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
  if ( (byte_5939F50 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16837/*"_FilterColor"*/);
    byte_5939F50 = 1;
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
            (System_String_o *)StringLiteral_16837/*"_FilterColor"*/,
            v10,
            0),
          (bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer) == 0)
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
LABEL_10:
      sub_21FFECC(bodyRenderer, method);
    }
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16837/*"_FilterColor"*/,
      v11,
      0);
  }
}


void UIEquipGraphViewerRender__SetGradation(UIEquipGraphViewerRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_5939F51 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16850/*"_Gradation"*/);
    byte_5939F51 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16850/*"_Gradation"*/,
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
          (System_String_o *)StringLiteral_16850/*"_Gradation"*/,
          g,
          0);
        return;
      }
    }
LABEL_10:
    sub_21FFECC(bodyRenderer, method);
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
    sub_21FFECC(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIEquipGraphViewerRender__SetLayer_50913400(this, transform, layer, v8);
  }
}


void UIEquipGraphViewerRender__SetLayer_50913400(
        UIEquipGraphViewerRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIEquipGraphViewerRender_o *v6; // x20
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
  if ( (byte_5939F56 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    this = (UIEquipGraphViewerRender_o *)sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_5939F56 = 1;
  }
  if ( !tf
    || (this = (UIEquipGraphViewerRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
    sub_21FFECC(this, tf);
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
      v12 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 1);
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
        sub_220024C(v17, UnityEngine_Transform_TypeInfo, v18);
LABEL_34:
        sub_21FFECC(Enumerator, v8);
      }
    }
    UIEquipGraphViewerRender__SetLayer_50913400(v6, v17, layer, v19);
  }
  v21 = sub_21FFDA4(v27, System_IDisposable_TypeInfo);
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
      v26 = sub_2237E2C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


void UIEquipGraphViewerRender__SetMaskInteraction(
        UIEquipGraphViewerRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  __int64 v6; // x1
  int32_t v7; // w20

  if ( (byte_5939F57 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16969/*"_StencilComp"*/);
    byte_5939F57 = 1;
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
    || (UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16969/*"_StencilComp"*/, v7, 0),
        (RenderingCompareFunction = (UnityEngine_Material_o *)this->fields.nameRenderer) == 0)
    || (RenderingCompareFunction = UnityEngine_Renderer__get_material(
                                     (UnityEngine_Renderer_o *)RenderingCompareFunction,
                                     0)) == 0 )
  {
    sub_21FFECC(RenderingCompareFunction, v6);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16969/*"_StencilComp"*/, v7, 0);
}


void UIEquipGraphViewerRender__SetNameRender(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v3; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  float v5; // s0
  float NAME_Y_FIX; // s1
  struct UIEquipGraphViewerRender_StaticFields *v7; // x8
  float v8; // s0
  float v9; // s1
  System_String_o *filterName; // x20
  System_String_o *v11; // x1
  System_String_o *v12; // x0
  UnityEngine_Shader_o *v13; // x21
  UnityEngine_Material_o *v14; // x20
  __int64 nameRenderer; // x0
  __int64 v16; // x1
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v18; // x8
  UnityEngine_Mesh_o *v19; // x20
  UIEquipGraphViewerRender_c *v20; // x8
  __int64 v21; // x21
  unsigned int v22; // w9
  struct UIEquipGraphViewerRender_StaticFields *v23; // x8
  int LEFT_X; // s0
  float NAME_TOP_Y; // s1
  struct UIEquipGraphViewerRender_StaticFields *v26; // x8
  int RIGHT_X; // s0
  float v28; // s1
  struct UIEquipGraphViewerRender_StaticFields *v29; // x8
  int v30; // s0
  float NAME_BOTTOM_Y; // s1
  struct UIEquipGraphViewerRender_StaticFields *v32; // x8
  int v33; // s0
  float v34; // s1
  __int64 v35; // x21
  unsigned int v36; // w9
  float32x2_t *v37; // x10
  float v38; // s1
  float32x2_t *v39; // x10
  float v40; // s1
  float32x2_t *v41; // x10
  float v42; // s1
  float32x2_t *v43; // x8
  float v44; // s1
  unsigned int v45; // w8
  unsigned int v46; // w8
  System_Array_o *v47; // x0
  System_RuntimeFieldHandle_o v48; // x1
  System_Int32_array *v49; // x21
  long double v50; // q0
  long double v51; // q3
  bool v52; // zf
  _BOOL4 isTalkMask; // w8
  const MethodInfo *v54; // x2

  if ( (byte_5939F4D & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Mesh_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_21FFC50(&UIEquipGraphViewerRender_TypeInfo);
    sub_21FFC50(&UnityEngine_Vector2___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    sub_21FFC50(&StringLiteral_5094/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_21FFC50(&StringLiteral_23361/*"normal"*/);
    sub_21FFC50(&StringLiteral_16976/*"_SubTex"*/);
    sub_21FFC50(&StringLiteral_5093/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_21FFC50(&StringLiteral_24693/*"silhouette"*/);
    byte_5939F4D = 1;
  }
  v3 = UIEquipGraphViewerRender_TypeInfo;
  if ( !*(&UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo, method);
    v3 = UIEquipGraphViewerRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = (float)(static_fields->TOP_Y + 418) - static_fields->NAME_TOP_Y;
  NAME_Y_FIX = static_fields->NAME_Y_FIX;
  this->fields.dispNameTop.fields.x = 0.0;
  this->fields.dispNameTop.fields.y = -(float)(v5 - NAME_Y_FIX);
  v7 = v3->static_fields;
  v8 = (float)(v7->TOP_Y + 418) - v7->NAME_TOP_Y;
  v9 = v7->NAME_Y_FIX;
  filterName = this->fields.filterName;
  v11 = (System_String_o *)StringLiteral_24693/*"silhouette"*/;
  this->fields.dispNameOffset.fields.x = 0.0;
  this->fields.dispNameOffset.fields.y = -(float)(v8 - v9);
  if ( System_String__op_Equality(filterName, v11, 0) )
  {
    v12 = (System_String_o *)StringLiteral_5094/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23361/*"normal"*/, 0);
    v12 = (System_String_o *)StringLiteral_5093/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v13 = UnityEngine_Shader__Find(v12, 0);
  v14 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v14, v13, 0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_46;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_45;
  if ( !v14 )
    goto LABEL_46;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16879/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v18 = this->fields.textureList;
  if ( !v18 )
    goto LABEL_46;
  if ( !LODWORD(v18->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16976/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v18->m_Items[0],
    0);
  nameRenderer = (__int64)this->fields.nameRenderer;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)nameRenderer, v14, 0);
  v19 = (UnityEngine_Mesh_o *)sub_21FFEBC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v19, 0);
  nameRenderer = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
  v20 = UIEquipGraphViewerRender_TypeInfo;
  v21 = nameRenderer;
  if ( !*(&UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo, v16);
    v20 = UIEquipGraphViewerRender_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_46;
  v22 = *(_DWORD *)(v21 + 24);
  if ( !v22 )
    goto LABEL_45;
  v23 = v20->static_fields;
  LEFT_X = v23->LEFT_X;
  NAME_TOP_Y = v23->NAME_TOP_Y;
  *(_DWORD *)(v21 + 40) = 0;
  *(float *)(v21 + 32) = (float)LEFT_X;
  *(float *)(v21 + 36) = NAME_TOP_Y;
  if ( v22 == 1 )
    goto LABEL_45;
  v26 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  RIGHT_X = v26->RIGHT_X;
  v28 = v26->NAME_TOP_Y;
  *(_DWORD *)(v21 + 52) = 0;
  *(float *)(v21 + 44) = (float)RIGHT_X;
  *(float *)(v21 + 48) = v28;
  if ( v22 <= 2 )
    goto LABEL_45;
  v29 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v30 = v29->LEFT_X;
  NAME_BOTTOM_Y = v29->NAME_BOTTOM_Y;
  *(_DWORD *)(v21 + 64) = 0;
  *(float *)(v21 + 56) = (float)v30;
  *(float *)(v21 + 60) = NAME_BOTTOM_Y;
  if ( v22 == 3 )
    goto LABEL_45;
  v32 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v33 = v32->RIGHT_X;
  v34 = v32->NAME_BOTTOM_Y;
  *(_DWORD *)(v21 + 76) = 0;
  *(float *)(v21 + 68) = (float)v33;
  *(float *)(v21 + 72) = v34;
  if ( !v19 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v19, (UnityEngine_Vector3_array *)v21, 0);
  nameRenderer = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
  v35 = nameRenderer;
  if ( !byte_5931949 )
  {
    nameRenderer = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931949 = 1;
  }
  if ( !v35 )
LABEL_46:
    sub_21FFECC(nameRenderer, v16);
  v36 = *(_DWORD *)(v35 + 24);
  if ( !v36 )
    goto LABEL_45;
  v37 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v38 = -v37[10].n64_f32[0];
  *(float32x2_t *)(v35 + 32) = vneg_f32(v37[9]);
  *(float *)(v35 + 40) = v38;
  if ( (v36 & 0xFFFFFFFE) == 0 )
    goto LABEL_45;
  v39 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v40 = -v39[10].n64_f32[0];
  *(float32x2_t *)(v35 + 44) = vneg_f32(v39[9]);
  *(float *)(v35 + 52) = v40;
  if ( v36 <= 2 )
    goto LABEL_45;
  v41 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v42 = -v41[10].n64_f32[0];
  *(float32x2_t *)(v35 + 56) = vneg_f32(v41[9]);
  *(float *)(v35 + 64) = v42;
  if ( (v36 & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  v43 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v44 = -v43[10].n64_f32[0];
  *(float32x2_t *)(v35 + 68) = vneg_f32(v43[9]);
  *(float *)(v35 + 76) = v44;
  UnityEngine_Mesh__set_normals(v19, (UnityEngine_Vector3_array *)v35, 0);
  nameRenderer = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  if ( !nameRenderer )
    goto LABEL_46;
  v45 = *(_DWORD *)(nameRenderer + 24);
  if ( !v45 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 32) = 0x3E11FDDF00000000LL;
  if ( v45 == 1 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 40) = 0x3E11FDDF3F000000LL;
  if ( v45 <= 2 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 48) = 0;
  if ( v45 == 3 )
    goto LABEL_45;
  *(_QWORD *)(nameRenderer + 56) = 1056964608;
  UnityEngine_Mesh__set_uv(v19, (UnityEngine_Vector2_array *)nameRenderer, 0);
  nameRenderer = sub_21FFD10(UnityEngine_Vector2___TypeInfo, 4);
  if ( !nameRenderer )
    goto LABEL_46;
  v46 = *(_DWORD *)(nameRenderer + 24);
  if ( !v46
    || (*(_QWORD *)(nameRenderer + 32) = 0x3E11FDDF00000000LL, v46 == 1)
    || (*(_QWORD *)(nameRenderer + 40) = 0x3E11FDDF3F000000LL, v46 <= 2)
    || (*(_QWORD *)(nameRenderer + 48) = 0, v46 == 3) )
  {
LABEL_45:
    sub_21FFED4(nameRenderer);
  }
  *(_QWORD *)(nameRenderer + 56) = 1056964608;
  UnityEngine_Mesh__set_uv2(v19, (UnityEngine_Vector2_array *)nameRenderer, 0);
  v47 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 6);
  v48.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v49 = (System_Int32_array *)v47;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v47, v48, 0);
  UnityEngine_Mesh__set_triangles(v19, v49, 0);
  nameRenderer = (__int64)this->fields.nameFilter;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)nameRenderer, v19, 0);
  UnityEngine_Mesh__RecalculateNormals(v19, 0);
  UnityEngine_Mesh__RecalculateBounds(v19, 0);
  LODWORD(v50) = 1.0;
  *(float *)&v51 = this->fields.mColor.fields.a;
  v52 = !this->fields.isShadow;
  isTalkMask = this->fields.isTalkMask;
  this->fields.isBusyMoveAlpha = 0;
  if ( !v52 )
    *(float *)&v50 = 0.1;
  if ( isTalkMask )
    *(float *)&v50 = *(float *)&v50 * 0.5;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v50,
    *(float *)&v50,
    *(float *)&v50,
    v51);
  UIEquipGraphViewerRender__SetActiveName(this, 1, v54);
}


void UIEquipGraphViewerRender__SetShadow(UIEquipGraphViewerRender_o *this, bool isShadow, const MethodInfo *method)
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
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
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
  __int64 v8; // x1
  UnityEngine_Object_o *material; // x21
  __int64 v10; // x1
  UnityEngine_Shader_o *v11; // x19

  if ( (byte_5939F4E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F4E = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Equality(v7, 0, 0) )
          return;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( UnityEngine_Object__op_Equality(material, 0, 0) )
          return;
        bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(shaderName, 0);
        if ( v7 )
        {
          v11 = (UnityEngine_Shader_o *)bodyRenderer;
          UnityEngine_Material__set_shader((UnityEngine_Material_o *)v7, (UnityEngine_Shader_o *)bodyRenderer, 0);
          if ( material )
          {
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, v11, 0);
            return;
          }
        }
      }
    }
    sub_21FFECC(bodyRenderer, shaderName);
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
    sub_21FFECC(bodyRenderer, *(_QWORD *)&order);
  }
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIEquipGraphViewerRender__SetTalkMask(UIEquipGraphViewerRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  _BOOL4 isShadow; // w10
  UIEquipGraphViewerRender_c *klass; // x9

  LODWORD(v3) = 1.0;
  isShadow = this->fields.isShadow;
  klass = this->klass;
  *(float *)&v4 = this->fields.mColor.fields.a;
  this->fields.isTalkMask = isMask;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, float, float, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
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
  bool v10; // w1
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_5939F49 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    byte_5939F49 = 1;
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16781/*"_Color"*/, v12, 0);
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16781/*"_Color"*/, v13, 0);
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
    sub_21FFECC(bodyRenderer, v8);
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  UnityEngine_Renderer__set_enabled(bodyRenderer, 1, 0);
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer;
  if ( !bodyRenderer )
    goto LABEL_16;
  v10 = 1;
LABEL_15:
  UnityEngine_Renderer__set_enabled(bodyRenderer, v10, 0);
}


void UIEquipGraphViewerRender__SetVolume(UIEquipGraphViewerRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_5939F52 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17031/*"_Volume"*/);
    byte_5939F52 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_83064036(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_17031/*"_Volume"*/,
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
          (System_String_o *)StringLiteral_17031/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_21FFECC(bodyRenderer, method);
  }
}