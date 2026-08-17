void UIEquipGraphRender___cctor(const MethodInfo *method)
{
  struct UIEquipGraphRender_StaticFields *static_fields; // x8

  if ( (byte_5972107 & 1) == 0 )
  {
    sub_2213A60(&UIEquipGraphRender_TypeInfo);
    byte_5972107 = 1;
  }
  static_fields = UIEquipGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_E9CF20;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_E9BF90;
  *(_OWORD *)&static_fields->BODY_U = xmmword_E9D800;
}


void UIEquipGraphRender___ctor(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5972106 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    byte_5972106 = 1;
  }
  v9 = StringLiteral_23407/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_23407/*"normal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.filterName, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_5972103 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972103 = 1;
  }
  LODWORD(v2) = 1.0;
  if ( this->fields.isShadow )
    *(float *)&v2 = 0.1;
  if ( this->fields.isTalkMask )
    *(float *)&v2 = *(float *)&v2 * 0.5;
  *(float *)&v3 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
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


System_String_array *UIEquipGraphRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
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
  if ( (byte_59720F5 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_4558/*"CharaGraph/9400010"*/);
    imageName = (System_String_o *)sub_2213A60(&StringLiteral_4556/*"CharaGraph/"*/);
    byte_59720F5 = 1;
  }
  if ( !v2 )
    goto LABEL_14;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_4556/*"CharaGraph/"*/, 0) )
    v2 = System_String__Concat_75651716((System_String_o *)StringLiteral_4556/*"CharaGraph/"*/, v2, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
  isExistAssetStorage = AssetManager__isExistAssetStorage(v2, 0);
  v5 = StringLiteral_4558/*"CharaGraph/9400010"*/;
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


UnityEngine_Vector2_o UIEquipGraphRender__GetBodySize(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  UIEquipGraphRender_c *v2; // x0
  struct UIEquipGraphRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_59720F8 & 1) == 0 )
  {
    sub_2213A60(&UIEquipGraphRender_TypeInfo);
    byte_59720F8 = 1;
  }
  v2 = UIEquipGraphRender_TypeInfo;
  if ( !*(&UIEquipGraphRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo, method);
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

  if ( (byte_59720F6 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59720F6 = 1;
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


void UIEquipGraphRender__MoveAlpha(
        UIEquipGraphRender_o *this,
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

  if ( (byte_5972101 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_5972101 = 1;
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
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIEquipGraphRender__EndMoveAlpha(this, v44);
}


void UIEquipGraphRender__MoveAlphaSpeed(
        UIEquipGraphRender_o *this,
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

  if ( (byte_5972102 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6265/*"EndMoveAlpha"*/);
    byte_5972102 = 1;
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
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
  UIEquipGraphRender__EndMoveAlpha(this, v46);
}


void UIEquipGraphRender__RecoverSharder(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_59720FC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5102/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_5101/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_59720FC = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_24741/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_5102/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
    v5 = &StringLiteral_5101/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  UIEquipGraphRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIEquipGraphRender__ReleaseCharacter(UIEquipGraphRender_o *this, const MethodInfo *method)
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

  if ( (byte_59720F9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720F9 = 1;
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
      UIEquipGraphRender__SetActive(this, 0, v8);
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
void UIEquipGraphRender__SetActive(UIEquipGraphRender_o *this, bool isActive, const MethodInfo *method)
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


void UIEquipGraphRender__SetAlpha(UIEquipGraphRender_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
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
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v2,
    *(float *)&v2,
    *(float *)&v2,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphRender__SetCharacter(
        UIEquipGraphRender_o *this,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    *(System_String_o **)&faceType,
    (System_String_o *)textureList,
    (int32_t)method,
    v5,
    v6,
    v7);
  UIEquipGraphRender__SetCharacterRender(this, v9);
}


void UIEquipGraphRender__SetCharacterRender(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  UIEquipGraphRender_c *v3; // x0
  int32_t TOP_Y; // w8
  int32_t v5; // w8
  System_String_o *filterName; // x20
  System_String_o *v7; // x1
  System_String_o *v8; // x0
  UnityEngine_Shader_o *v9; // x21
  UnityEngine_Material_o *v10; // x20
  char *bodyRenderer; // x0
  __int64 v12; // x1
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v14; // x8
  UnityEngine_Mesh_o *v15; // x20
  UIEquipGraphRender_c *v16; // x8
  char *v17; // x21
  unsigned int v18; // w9
  struct UIEquipGraphRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int v21; // s1
  int32x2_t v22; // d0
  struct UIEquipGraphRender_StaticFields *v23; // x8
  int v24; // s0
  int BOTTOM_Y; // s1
  struct UIEquipGraphRender_StaticFields *v26; // x8
  int RIGHT_X; // s0
  int v28; // s1
  char *v29; // x21
  unsigned int v30; // w9
  float32x2_t *v31; // x10
  float v32; // s1
  float32x2_t *v33; // x10
  float v34; // s1
  float32x2_t *v35; // x10
  float v36; // s1
  float32x2_t *v37; // x8
  float v38; // s1
  unsigned int v39; // w8
  struct UIEquipGraphRender_StaticFields *v40; // x9
  float BODY_V; // s2
  struct UIEquipGraphRender_StaticFields *v42; // x9
  float v43; // s0
  struct UIEquipGraphRender_StaticFields *v44; // x8
  float32x2_t v45; // d0
  float32x2_t v46; // d1
  __int64 v47; // d2
  unsigned int v48; // w8
  struct UIEquipGraphRender_StaticFields *v49; // x9
  float v50; // s2
  struct UIEquipGraphRender_StaticFields *v51; // x9
  float v52; // s0
  struct UIEquipGraphRender_StaticFields *v53; // x8
  float32x2_t v54; // d0
  float32x2_t v55; // d1
  __int64 v56; // d2
  System_Array_o *v57; // x0
  System_RuntimeFieldHandle_o v58; // x1
  System_Int32_array *v59; // x21
  long double v60; // q0
  long double v61; // q3
  bool v62; // zf
  _BOOL4 isTalkMask; // w8
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x2

  if ( (byte_59720FA & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_2213A60(&UIEquipGraphRender_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_5102/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_2213A60(&StringLiteral_23407/*"normal"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    sub_2213A60(&StringLiteral_5101/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_2213A60(&StringLiteral_24741/*"silhouette"*/);
    byte_59720FA = 1;
  }
  v3 = UIEquipGraphRender_TypeInfo;
  if ( !*(&UIEquipGraphRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo, method);
    v3 = UIEquipGraphRender_TypeInfo;
  }
  TOP_Y = v3->static_fields->TOP_Y;
  this->fields.dispTop.fields.x = 0.0;
  this->fields.dispTop.fields.y = (float)-TOP_Y;
  v5 = v3->static_fields->TOP_Y;
  filterName = this->fields.filterName;
  v7 = (System_String_o *)StringLiteral_24741/*"silhouette"*/;
  this->fields.dispOffset.fields.x = 0.0;
  this->fields.dispOffset.fields.y = (float)-v5;
  if ( System_String__op_Equality(filterName, v7, 0) )
  {
    v8 = (System_String_o *)StringLiteral_5102/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23407/*"normal"*/, 0);
    v8 = (System_String_o *)StringLiteral_5101/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v9 = UnityEngine_Shader__Find(v8, 0);
  v10 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v10, v9, 0);
  textureList = this->fields.textureList;
  if ( !textureList )
    goto LABEL_46;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_45;
  if ( !v10 )
    goto LABEL_46;
  UnityEngine_Material__SetTexture(
    v10,
    (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v14 = this->fields.textureList;
  if ( !v14 )
    goto LABEL_46;
  if ( !LODWORD(v14->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v10,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v14->m_Items[0],
    0);
  bodyRenderer = (char *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v10, 0);
  v15 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v15, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v16 = UIEquipGraphRender_TypeInfo;
  v17 = bodyRenderer;
  if ( !*(&UIEquipGraphRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo, v12);
    v16 = UIEquipGraphRender_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_46;
  v18 = *((_DWORD *)v17 + 6);
  if ( !v18 )
    goto LABEL_45;
  static_fields = v16->static_fields;
  LEFT_X = static_fields->LEFT_X;
  v21 = static_fields->TOP_Y;
  *((_DWORD *)v17 + 10) = 0;
  *((float *)v17 + 8) = (float)LEFT_X;
  *((float *)v17 + 9) = (float)v21;
  if ( v18 == 1 )
    goto LABEL_45;
  v22.n64_u64[0] = *(unsigned __int64 *)&UIEquipGraphRender_TypeInfo->static_fields->RIGHT_X;
  *((_DWORD *)v17 + 13) = 0;
  *(float32x2_t *)(v17 + 44) = vcvt_f32_s32(v22);
  if ( v18 <= 2 )
    goto LABEL_45;
  v23 = UIEquipGraphRender_TypeInfo->static_fields;
  v24 = v23->LEFT_X;
  BOTTOM_Y = v23->BOTTOM_Y;
  *((_DWORD *)v17 + 16) = 0;
  *((float *)v17 + 14) = (float)v24;
  *((float *)v17 + 15) = (float)BOTTOM_Y;
  if ( v18 == 3 )
    goto LABEL_45;
  v26 = UIEquipGraphRender_TypeInfo->static_fields;
  RIGHT_X = v26->RIGHT_X;
  v28 = v26->BOTTOM_Y;
  *((_DWORD *)v17 + 19) = 0;
  *((float *)v17 + 17) = (float)RIGHT_X;
  *((float *)v17 + 18) = (float)v28;
  if ( !v15 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v15, (UnityEngine_Vector3_array *)v17, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v29 = bodyRenderer;
  if ( !byte_5969AE9 )
  {
    bodyRenderer = (char *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE9 = 1;
  }
  if ( !v29 )
LABEL_46:
    sub_2213CDC(bodyRenderer, v12);
  v30 = *((_DWORD *)v29 + 6);
  if ( !v30 )
    goto LABEL_45;
  v31 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = -v31[10].n64_f32[0];
  *((float32x2_t *)v29 + 4) = vneg_f32(v31[9]);
  *((float *)v29 + 10) = v32;
  if ( (v30 & 0xFFFFFFFE) == 0 )
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
  if ( (v30 & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  v37 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v38 = -v37[10].n64_f32[0];
  *(float32x2_t *)(v29 + 68) = vneg_f32(v37[9]);
  *((float *)v29 + 19) = v38;
  UnityEngine_Mesh__set_normals(v15, (UnityEngine_Vector3_array *)v29, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v39 = *((_DWORD *)bodyRenderer + 6);
  if ( !v39 )
    goto LABEL_45;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIEquipGraphRender_TypeInfo->static_fields->BODY_U;
  if ( v39 == 1 )
    goto LABEL_45;
  v40 = UIEquipGraphRender_TypeInfo->static_fields;
  BODY_V = v40->BODY_V;
  *((float *)bodyRenderer + 10) = v40->BODY_U + v40->BODY_W;
  *((float *)bodyRenderer + 11) = BODY_V;
  if ( v39 <= 2 )
    goto LABEL_45;
  v42 = UIEquipGraphRender_TypeInfo->static_fields;
  v43 = v42->BODY_V - v42->BODY_H;
  *((_DWORD *)bodyRenderer + 12) = LODWORD(v42->BODY_U);
  *((float *)bodyRenderer + 13) = v43;
  if ( v39 == 3 )
    goto LABEL_45;
  v44 = UIEquipGraphRender_TypeInfo->static_fields;
  v45.n64_u64[0] = *(unsigned __int64 *)&v44->BODY_U;
  v46.n64_u64[0] = *(unsigned __int64 *)&v44->BODY_W;
  LODWORD(v47) = vadd_f32(v45, v46).n64_u32[0];
  HIDWORD(v47) = vsub_f32(v45, v46).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v47;
  UnityEngine_Mesh__set_uv(v15, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = (char *)sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v48 = *((_DWORD *)bodyRenderer + 6);
  if ( !v48 )
    goto LABEL_45;
  *((_QWORD *)bodyRenderer + 4) = *(_QWORD *)&UIEquipGraphRender_TypeInfo->static_fields->BODY_U;
  if ( v48 == 1 )
    goto LABEL_45;
  v49 = UIEquipGraphRender_TypeInfo->static_fields;
  v50 = v49->BODY_V;
  *((float *)bodyRenderer + 10) = v49->BODY_U + v49->BODY_W;
  *((float *)bodyRenderer + 11) = v50;
  if ( v48 <= 2
    || (v51 = UIEquipGraphRender_TypeInfo->static_fields,
        v52 = v51->BODY_V - v51->BODY_H,
        *((_DWORD *)bodyRenderer + 12) = LODWORD(v51->BODY_U),
        *((float *)bodyRenderer + 13) = v52,
        v48 == 3) )
  {
LABEL_45:
    sub_2213CE4(bodyRenderer);
  }
  v53 = UIEquipGraphRender_TypeInfo->static_fields;
  v54.n64_u64[0] = *(unsigned __int64 *)&v53->BODY_U;
  v55.n64_u64[0] = *(unsigned __int64 *)&v53->BODY_W;
  LODWORD(v56) = vadd_f32(v54, v55).n64_u32[0];
  HIDWORD(v56) = vsub_f32(v54, v55).n64_u32[1];
  *((_QWORD *)bodyRenderer + 7) = v56;
  UnityEngine_Mesh__set_uv2(v15, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v57 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
  v58.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v59 = (System_Int32_array *)v57;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v57, v58, 0);
  UnityEngine_Mesh__set_triangles(v15, v59, 0);
  bodyRenderer = (char *)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v15, 0);
  UnityEngine_Mesh__RecalculateNormals(v15, 0);
  UnityEngine_Mesh__RecalculateBounds(v15, 0);
  LODWORD(v60) = 1.0;
  *(float *)&v61 = this->fields.mColor.fields.a;
  v62 = !this->fields.isShadow;
  isTalkMask = this->fields.isTalkMask;
  this->fields.isBusyMoveAlpha = 0;
  if ( !v62 )
    *(float *)&v60 = 0.1;
  if ( isTalkMask )
    *(float *)&v60 = *(float *)&v60 * 0.5;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v60,
    *(float *)&v60,
    *(float *)&v60,
    v61);
  UIEquipGraphRender__SetFilterColor(this, this->fields.filterColor, v64);
  UIEquipGraphRender__SetActive(this, 1, v65);
}


void UIEquipGraphRender__SetDepth(UIEquipGraphRender_o *this, float d, const MethodInfo *method)
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


void UIEquipGraphRender__SetFilter(
        UIEquipGraphRender_o *this,
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
  UIEquipGraphRender__RecoverSharder(this, v14);
  v16.fields.b = b;
  v16.fields.a = a;
  v16.fields.r = r;
  v16.fields.g = g;
  UIEquipGraphRender__SetFilterColor(this, v16, v15);
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
  if ( (byte_59720FE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16871/*"_FilterColor"*/);
    byte_59720FE = 1;
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


void UIEquipGraphRender__SetGradation(UIEquipGraphRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_59720FF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16885/*"_Gradation"*/);
    byte_59720FF = 1;
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


void UIEquipGraphRender__SetLayer(UIEquipGraphRender_o *this, int32_t layer, const MethodInfo *method)
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
    UIEquipGraphRender__SetLayer_50966408(this, transform, layer, v8);
  }
}


void UIEquipGraphRender__SetLayer_50966408(
        UIEquipGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIEquipGraphRender_o *v6; // x20
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
  if ( (byte_5972104 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (UIEquipGraphRender_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_5972104 = 1;
  }
  if ( !tf
    || (this = (UIEquipGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
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
    UIEquipGraphRender__SetLayer_50966408(v6, v17, layer, v19);
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


void UIEquipGraphRender__SetMaskInteraction(
        UIEquipGraphRender_o *this,
        int32_t maskInteraction,
        const MethodInfo *method)
{
  UnityEngine_Material_o *RenderingCompareFunction; // x0
  __int64 v6; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x8
  int32_t v8; // w19

  if ( (byte_5972105 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17004/*"_StencilComp"*/);
    byte_5972105 = 1;
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


void UIEquipGraphRender__SetShadow(UIEquipGraphRender_o *this, bool isShadow, const MethodInfo *method)
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
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
    v4);
}


void UIEquipGraphRender__SetSharder(UIEquipGraphRender_o *this, System_String_o *shaderName, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *material; // x20

  if ( (byte_59720FB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59720FB = 1;
  }
  if ( this->fields.textureList )
  {
    bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
    if ( bodyRenderer )
    {
      material = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Equality(material, 0, 0) )
        return;
      bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Shader__Find(shaderName, 0);
      if ( material )
      {
        UnityEngine_Material__set_shader((UnityEngine_Material_o *)material, (UnityEngine_Shader_o *)bodyRenderer, 0);
        return;
      }
    }
    sub_2213CDC(bodyRenderer, shaderName);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphRender__SetSortingOrder(UIEquipGraphRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_2213CDC(0, *(_QWORD *)&order);
  UnityEngine_Renderer__set_sortingOrder(bodyRenderer, order, 0);
}


void UIEquipGraphRender__SetTalkMask(UIEquipGraphRender_o *this, bool isMask, const MethodInfo *method)
{
  long double v3; // q0
  long double v4; // q3
  _BOOL4 isShadow; // w10
  UIEquipGraphRender_c *klass; // x9

  LODWORD(v3) = 1.0;
  isShadow = this->fields.isShadow;
  klass = this->klass;
  *(float *)&v4 = this->fields.mColor.fields.a;
  this->fields.isTalkMask = isMask;
  if ( isShadow )
    *(float *)&v3 = 0.1;
  if ( isMask )
    *(float *)&v3 = *(float *)&v3 * 0.5;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, float, float, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v3,
    *(float *)&v3,
    *(float *)&v3,
    v4);
}


void UIEquipGraphRender__SetTweenColor(UIEquipGraphRender_o *this, UnityEngine_Color_o c, const MethodInfo *method)
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
  if ( (byte_59720F7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_59720F7 = 1;
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


void UIEquipGraphRender__SetVolume(UIEquipGraphRender_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_5972100 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17066/*"_Volume"*/);
    byte_5972100 = 1;
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
  int32_t BODY_SIZE_Y; // w22
  int MAIN_SIZE_Y; // s9

  if ( (byte_59720FD & 1) == 0 )
  {
    sub_2213A60(&UIEquipGraphRender_TypeInfo);
    sub_2213A60(&StringLiteral_17073/*"_WipeY"*/);
    sub_2213A60(&StringLiteral_17071/*"_WipeTex"*/);
    sub_2213A60(&StringLiteral_17072/*"_WipeX"*/);
    byte_59720FD = 1;
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
    bodyRenderer = UIEquipGraphRender_TypeInfo;
    if ( !*(&UIEquipGraphRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo, texture);
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
    v9 = UIEquipGraphRender_TypeInfo;
    if ( !*(&UIEquipGraphRender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo, texture);
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