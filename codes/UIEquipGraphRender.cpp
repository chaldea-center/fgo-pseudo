void UIEquipGraphRender___cctor(const MethodInfo *method)
{
  struct UIEquipGraphRender_StaticFields *static_fields; // x8

  if ( (byte_4CC8C65 & 1) == 0 )
  {
    sub_1C713B0(&UIEquipGraphRender_TypeInfo);
    byte_4CC8C65 = 1;
  }
  static_fields = UIEquipGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_CEF8C0;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_CEF090;
  *(_OWORD *)&static_fields->BODY_U = xmmword_CEED60;
}


void UIEquipGraphRender___ctor(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CC8C64 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22381/*"normal"*/);
    byte_4CC8C64 = 1;
  }
  v9 = StringLiteral_22381/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22381/*"normal"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.filterName, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4CC8C61 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8C61 = 1;
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v13, v14, v15, v16, v17, v18);
  this->fields.isBusyMoveAlpha = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v19 )
  {
    if ( !moveAlphaCallbackObject )
      sub_1C71608(v19, v20);
    UnityEngine_GameObject__SendMessage_71705976(
      (UnityEngine_GameObject_o *)moveAlphaCallbackObject,
      moveAlphaCallbackFunc,
      0);
  }
}


System_String_array *UIEquipGraphRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
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
  if ( (byte_4CC8C53 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_4380/*"CharaGraph/9400010"*/);
    imageName = (System_String_o *)sub_1C713B0(&StringLiteral_4378/*"CharaGraph/"*/);
    byte_4CC8C53 = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_4378/*"CharaGraph/"*/, 0) )
    v2 = System_String__Concat_64031724((System_String_o *)StringLiteral_4378/*"CharaGraph/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v2, 0) )
    v2 = (System_String_o *)StringLiteral_4380/*"CharaGraph/9400010"*/;
  imageName = (System_String_o *)sub_1C71458(string___TypeInfo, 1);
  if ( !imageName )
LABEL_13:
    sub_1C71608(imageName, method);
  v9 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_1C71610(imageName);
  imageName[1].monitor = v2;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&imageName[1].monitor, (int32_t)v2, v3, v4, v5, v6, v7, v8);
  return (System_String_array *)v9;
}


UnityEngine_Vector2_o UIEquipGraphRender__GetBodySize(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  UIEquipGraphRender_c *v2; // x0
  struct UIEquipGraphRender_StaticFields *static_fields; // x8
  float BODY_SIZE_X; // s0
  float BODY_SIZE_Y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CC8C56 & 1) == 0 )
  {
    sub_1C713B0(&UIEquipGraphRender_TypeInfo);
    byte_4CC8C56 = 1;
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

  if ( (byte_4CC8C54 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    byte_4CC8C54 = 1;
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
  const MethodInfo *v25; // x1
  TweenRendererColor_o *v26; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppObject *Component_object; // x20
  const MethodInfo *v43; // x1
  UnityEngine_Color_o v44; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v12 = *(long double *)&alpha;
  if ( (byte_4CC8C5F & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_6003/*"EndMoveAlpha"*/);
    byte_4CC8C5F = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C71354(
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
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
    v44.fields.r = r;
    v44.fields.g = g;
    v44.fields.b = b;
    v44.fields.a = *(float *)&v12;
    v26 = TweenRendererColor__Begin(v24, duration, v44, v25);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v26 )
      {
        v26->fields.eventReceiver = gameObject;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v26->fields.eventReceiver,
          (int32_t)gameObject,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v35 = StringLiteral_6003/*"EndMoveAlpha"*/;
        v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6003/*"EndMoveAlpha"*/;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v26->fields.callWhenFinished, v35, v36, v37, v38, v39, v40, v41);
        return;
      }
LABEL_16:
      sub_1C71608(gameObject, v28);
    }
  }
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v12);
  UIEquipGraphRender__EndMoveAlpha(this, v43);
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
  const MethodInfo *v27; // x1
  TweenRendererColor_o *v28; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *Component_object; // x20
  const MethodInfo *v45; // x1
  UnityEngine_Color_o v46; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v12 = *(long double *)&alpha;
  if ( (byte_4CC8C60 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_6003/*"EndMoveAlpha"*/);
    byte_4CC8C60 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C71354(
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
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
    v46.fields.r = r;
    v46.fields.g = g;
    v46.fields.b = b;
    v46.fields.a = *(float *)&v12;
    v28 = TweenRendererColor__Begin(v26, v25, v46, v27);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( v28 )
      {
        v28->fields.eventReceiver = gameObject;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v28->fields.eventReceiver,
          (int32_t)gameObject,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = StringLiteral_6003/*"EndMoveAlpha"*/;
        v28->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6003/*"EndMoveAlpha"*/;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.callWhenFinished, v37, v38, v39, v40, v41, v42, v43);
        return;
      }
LABEL_19:
      sub_1C71608(gameObject, v30);
    }
  }
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v12);
  UIEquipGraphRender__EndMoveAlpha(this, v45);
}


void UIEquipGraphRender__RecoverSharder(UIEquipGraphRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4CC8C5A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_4911/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C713B0(&StringLiteral_22381/*"normal"*/);
    sub_1C713B0(&StringLiteral_4910/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C713B0(&StringLiteral_23613/*"silhouette"*/);
    byte_4CC8C5A = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23613/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4911/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22381/*"normal"*/, 0);
    v5 = &StringLiteral_4910/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  UIEquipGraphRender__SetSharder(this, (System_String_o *)*v5, v4);
}


void UIEquipGraphRender__ReleaseCharacter(UIEquipGraphRender_o *this, const MethodInfo *method)
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

  if ( (byte_4CC8C57 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8C57 = 1;
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
      UIEquipGraphRender__SetActive(this, 0, v7);
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
      UnityEngine_Object__Destroy_71724608(v9, 0);
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
      UnityEngine_Object__Destroy_71724608(v17, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_1C71608(bodyFilter, v4);
  }
LABEL_29:
  this->fields.textureList = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.textureList, 0, v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphRender__SetActive(UIEquipGraphRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_1C71608(bodyRenderer, isActive);
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
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    faceType,
    (int32_t)textureList,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  UIEquipGraphRender__SetCharacterRender(this, v9);
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
  __int64 bodyRenderer; // x0
  __int64 v11; // x1
  struct UnityEngine_Texture2D_array *textureList; // x8
  struct UnityEngine_Texture2D_array *v13; // x8
  UnityEngine_Mesh_o *v14; // x20
  UIEquipGraphRender_c *v15; // x8
  __int64 v16; // x21
  unsigned int v17; // w9
  struct UIEquipGraphRender_StaticFields *static_fields; // x8
  int LEFT_X; // s0
  int v20; // s1
  int32x2_t v21; // d0
  struct UIEquipGraphRender_StaticFields *v22; // x8
  int BOTTOM_Y; // s0
  int v24; // s1
  struct UIEquipGraphRender_StaticFields *v25; // x8
  int v26; // s0
  int RIGHT_X; // s1
  __int64 v28; // x21
  unsigned int v29; // w9
  float32x2_t *v30; // x10
  float v31; // s1
  float32x2_t *v32; // x10
  float v33; // s0
  float32x2_t *v34; // x10
  float v35; // s0
  float32x2_t *v36; // x8
  float v37; // s0
  unsigned int v38; // w8
  struct UIEquipGraphRender_StaticFields *v39; // x9
  float BODY_V; // s2
  struct UIEquipGraphRender_StaticFields *v41; // x9
  float v42; // s0
  struct UIEquipGraphRender_StaticFields *v43; // x8
  float32x2_t v44; // d0
  float32x2_t v45; // d1
  __int64 v46; // d2
  unsigned int v47; // w8
  struct UIEquipGraphRender_StaticFields *v48; // x9
  float v49; // s2
  struct UIEquipGraphRender_StaticFields *v50; // x9
  float v51; // s0
  struct UIEquipGraphRender_StaticFields *v52; // x8
  float32x2_t v53; // d0
  float32x2_t v54; // d1
  __int64 v55; // d2
  System_Array_o *v56; // x0
  System_RuntimeFieldHandle_o v57; // x1
  System_Int32_array *v58; // x21
  long double v59; // q3
  _BOOL4 isTalkMask; // w9
  bool v61; // zf
  UIEquipGraphRender_c *klass; // x8
  long double v63; // q0
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x2

  if ( (byte_4CC8C58 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&UnityEngine_Mesh_TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C713B0(&UIEquipGraphRender_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector2___TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3___TypeInfo);
    sub_1C713B0(&StringLiteral_16265/*"_MainTex"*/);
    sub_1C713B0(&StringLiteral_4911/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C713B0(&StringLiteral_22381/*"normal"*/);
    sub_1C713B0(&StringLiteral_16360/*"_SubTex"*/);
    sub_1C713B0(&StringLiteral_4910/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C713B0(&StringLiteral_23613/*"silhouette"*/);
    byte_4CC8C58 = 1;
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
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23613/*"silhouette"*/, 0) )
  {
    v7 = (System_String_o *)StringLiteral_4911/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22381/*"normal"*/, 0);
    v7 = (System_String_o *)StringLiteral_4910/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v8 = UnityEngine_Shader__Find(v7, 0);
  v9 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16265/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v13 = this->fields.textureList;
  if ( !v13 )
    goto LABEL_46;
  if ( !LODWORD(v13->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v9,
    (System_String_o *)StringLiteral_16360/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v13->m_Items[0],
    0);
  bodyRenderer = (__int64)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v9, 0);
  v14 = (UnityEngine_Mesh_o *)sub_1C715FC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v14, 0);
  bodyRenderer = sub_1C71458(UnityEngine_Vector3___TypeInfo, 4);
  v15 = UIEquipGraphRender_TypeInfo;
  v16 = bodyRenderer;
  if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
    v15 = UIEquipGraphRender_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_46;
  v17 = *(_DWORD *)(v16 + 24);
  if ( !v17 )
    goto LABEL_45;
  static_fields = v15->static_fields;
  LEFT_X = static_fields->LEFT_X;
  v20 = static_fields->TOP_Y;
  *(_DWORD *)(v16 + 40) = 0;
  *(float *)(v16 + 32) = (float)LEFT_X;
  *(float *)(v16 + 36) = (float)v20;
  if ( v17 == 1 )
    goto LABEL_45;
  v21.n64_u64[0] = *(unsigned __int64 *)&UIEquipGraphRender_TypeInfo->static_fields->RIGHT_X;
  *(_DWORD *)(v16 + 52) = 0;
  *(float32x2_t *)(v16 + 44) = vcvt_f32_s32(v21);
  if ( v17 <= 2 )
    goto LABEL_45;
  v22 = UIEquipGraphRender_TypeInfo->static_fields;
  BOTTOM_Y = v22->BOTTOM_Y;
  v24 = v22->LEFT_X;
  *(_DWORD *)(v16 + 64) = 0;
  *(float *)(v16 + 56) = (float)v24;
  *(float *)(v16 + 60) = (float)BOTTOM_Y;
  if ( v17 == 3 )
    goto LABEL_45;
  v25 = UIEquipGraphRender_TypeInfo->static_fields;
  v26 = v25->BOTTOM_Y;
  RIGHT_X = v25->RIGHT_X;
  *(_DWORD *)(v16 + 76) = 0;
  *(float *)(v16 + 68) = (float)RIGHT_X;
  *(float *)(v16 + 72) = (float)v26;
  if ( !v14 )
    goto LABEL_46;
  UnityEngine_Mesh__set_vertices(v14, (UnityEngine_Vector3_array *)v16, 0);
  bodyRenderer = sub_1C71458(UnityEngine_Vector3___TypeInfo, 4);
  v28 = bodyRenderer;
  if ( !byte_4CC0D12 )
  {
    bodyRenderer = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D12 = 1;
  }
  if ( !v28 )
LABEL_46:
    sub_1C71608(bodyRenderer, v11);
  v29 = *(_DWORD *)(v28 + 24);
  if ( !v29 )
    goto LABEL_45;
  v30 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v31 = -v30[10].n64_f32[0];
  *(float32x2_t *)(v28 + 32) = vneg_f32(v30[9]);
  *(float *)(v28 + 40) = v31;
  if ( v29 == 1 )
    goto LABEL_45;
  v32 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v33 = -v32[10].n64_f32[0];
  *(float32x2_t *)(v28 + 44) = vneg_f32(v32[9]);
  *(float *)(v28 + 52) = v33;
  if ( v29 <= 2 )
    goto LABEL_45;
  v34 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v35 = -v34[10].n64_f32[0];
  *(float32x2_t *)(v28 + 56) = vneg_f32(v34[9]);
  *(float *)(v28 + 64) = v35;
  if ( v29 == 3 )
    goto LABEL_45;
  v36 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v37 = -v36[10].n64_f32[0];
  *(float32x2_t *)(v28 + 68) = vneg_f32(v36[9]);
  *(float *)(v28 + 76) = v37;
  UnityEngine_Mesh__set_normals(v14, (UnityEngine_Vector3_array *)v28, 0);
  bodyRenderer = sub_1C71458(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v38 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v38 )
    goto LABEL_45;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIEquipGraphRender_TypeInfo->static_fields->BODY_U;
  if ( v38 == 1 )
    goto LABEL_45;
  v39 = UIEquipGraphRender_TypeInfo->static_fields;
  BODY_V = v39->BODY_V;
  *(float *)(bodyRenderer + 40) = v39->BODY_U + v39->BODY_W;
  *(float *)(bodyRenderer + 44) = BODY_V;
  if ( v38 <= 2 )
    goto LABEL_45;
  v41 = UIEquipGraphRender_TypeInfo->static_fields;
  v42 = v41->BODY_V - v41->BODY_H;
  *(float *)(bodyRenderer + 48) = v41->BODY_U;
  *(float *)(bodyRenderer + 52) = v42;
  if ( v38 == 3 )
    goto LABEL_45;
  v43 = UIEquipGraphRender_TypeInfo->static_fields;
  v44.n64_u64[0] = *(unsigned __int64 *)&v43->BODY_U;
  v45.n64_u64[0] = *(unsigned __int64 *)&v43->BODY_W;
  LODWORD(v46) = vadd_f32(v44, v45).n64_u32[0];
  HIDWORD(v46) = vsub_f32(v44, v45).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v46;
  UnityEngine_Mesh__set_uv(v14, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  bodyRenderer = sub_1C71458(UnityEngine_Vector2___TypeInfo, 4);
  if ( !bodyRenderer )
    goto LABEL_46;
  v47 = *(_DWORD *)(bodyRenderer + 24);
  if ( !v47 )
    goto LABEL_45;
  *(_QWORD *)(bodyRenderer + 32) = *(_QWORD *)&UIEquipGraphRender_TypeInfo->static_fields->BODY_U;
  if ( v47 == 1 )
    goto LABEL_45;
  v48 = UIEquipGraphRender_TypeInfo->static_fields;
  v49 = v48->BODY_V;
  *(float *)(bodyRenderer + 40) = v48->BODY_U + v48->BODY_W;
  *(float *)(bodyRenderer + 44) = v49;
  if ( v47 <= 2
    || (v50 = UIEquipGraphRender_TypeInfo->static_fields,
        v51 = v50->BODY_V - v50->BODY_H,
        *(float *)(bodyRenderer + 48) = v50->BODY_U,
        *(float *)(bodyRenderer + 52) = v51,
        v47 == 3) )
  {
LABEL_45:
    sub_1C71610(bodyRenderer);
  }
  v52 = UIEquipGraphRender_TypeInfo->static_fields;
  v53.n64_u64[0] = *(unsigned __int64 *)&v52->BODY_U;
  v54.n64_u64[0] = *(unsigned __int64 *)&v52->BODY_W;
  LODWORD(v55) = vadd_f32(v53, v54).n64_u32[0];
  HIDWORD(v55) = vsub_f32(v53, v54).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v55;
  UnityEngine_Mesh__set_uv2(v14, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v56 = (System_Array_o *)sub_1C71458(int___TypeInfo, 6);
  v57.fields.value = Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418;
  v58 = (System_Int32_array *)v56;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v56, v57, 0);
  UnityEngine_Mesh__set_triangles(v14, v58, 0);
  bodyRenderer = (__int64)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v14, 0);
  UnityEngine_Mesh__RecalculateNormals(v14, 0);
  UnityEngine_Mesh__RecalculateBounds(v14, 0);
  isTalkMask = this->fields.isTalkMask;
  v61 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v63) = 1.0;
  if ( !v61 )
    *(float *)&v63 = 0.1;
  if ( isTalkMask )
    *(float *)&v63 = *(float *)&v63 * 0.5;
  *(float *)&v59 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v63,
    v63,
    v63,
    v59);
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
    sub_1C71608(transform, v6);
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (int32_t)method,
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
  if ( (byte_4CC8C5C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16223/*"_FilterColor"*/);
    byte_4CC8C5C = 1;
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
      sub_1C71608(bodyRenderer, method);
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

  if ( (byte_4CC8C5D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16236/*"_Gradation"*/);
    byte_4CC8C5D = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71590080(
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
    sub_1C71608(bodyRenderer, method);
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
    sub_1C71608(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIEquipGraphRender__SetLayer_44246464(this, transform, layer, v8);
  }
}


void UIEquipGraphRender__SetLayer_44246464(
        UIEquipGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIEquipGraphRender_o *v6; // x21
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
  if ( (byte_4CC8C62 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    this = (UIEquipGraphRender_o *)sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    byte_4CC8C62 = 1;
  }
  if ( !tf
    || (this = (UIEquipGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C71608(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C71608(0, v7);
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
      v12 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
        sub_1C719A4(v17);
        goto LABEL_33;
      }
    }
    UIEquipGraphRender__SetLayer_44246464(v6, v17, layer, v18);
  }
  v20 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
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
      v25 = sub_1C47738(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
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

  if ( (byte_4CC8C63 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16353/*"_StencilComp"*/);
    byte_4CC8C63 = 1;
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
    sub_1C71608(RenderingCompareFunction, v6);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16353/*"_StencilComp"*/, v8, 0);
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

  if ( (byte_4CC8C59 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8C59 = 1;
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
    sub_1C71608(bodyRenderer, shaderName);
  }
}


void UIEquipGraphRender__SetSortingOrder(UIEquipGraphRender_o *this, int32_t order, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    sub_1C71608(0, order);
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
  __int64 v8; // x1
  UnityEngine_Renderer_o *bodyRenderer; // x0
  bool v10; // w1
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4CC8C55 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16173/*"_Color"*/);
    byte_4CC8C55 = 1;
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16173/*"_Color"*/, v12, 0);
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
    sub_1C71608(bodyRenderer, v8);
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

  if ( (byte_4CC8C5E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16410/*"_Volume"*/);
    byte_4CC8C5E = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71590080(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16410/*"_Volume"*/,
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
          (System_String_o *)StringLiteral_16410/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C71608(bodyRenderer, method);
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

  if ( (byte_4CC8C5B & 1) == 0 )
  {
    sub_1C713B0(&UIEquipGraphRender_TypeInfo);
    sub_1C713B0(&StringLiteral_16416/*"_WipeY"*/);
    sub_1C713B0(&StringLiteral_16414/*"_WipeTex"*/);
    sub_1C713B0(&StringLiteral_16415/*"_WipeX"*/);
    byte_4CC8C5B = 1;
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)bodyRenderer,
    (System_String_o *)StringLiteral_16414/*"_WipeTex"*/,
    texture,
    0);
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71590080(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16415/*"_WipeX"*/,
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
      (System_String_o *)StringLiteral_16415/*"_WipeX"*/,
      (float)-x / (float)v7,
      0);
  }
  bodyRenderer = this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_22;
  bodyRenderer = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_22;
  if ( UnityEngine_Material__HasProperty_71590080(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16416/*"_WipeY"*/,
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
          (System_String_o *)StringLiteral_16416/*"_WipeY"*/,
          (float)((float)((float)(height - BODY_SIZE_Y) * 0.5) - y) / (float)MAIN_SIZE_Y,
          0);
        return;
      }
    }
LABEL_22:
    sub_1C71608(bodyRenderer, texture);
  }
}