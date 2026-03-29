void UIEquipGraphViewerRender___cctor(const MethodInfo *method)
{
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8

  if ( (byte_4D32218 & 1) == 0 )
  {
    sub_1C93AD4(&UIEquipGraphViewerRender_TypeInfo);
    byte_4D32218 = 1;
  }
  static_fields = UIEquipGraphViewerRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MAIN_SIZE_X = xmmword_D01400;
  *(_OWORD *)&static_fields->LEFT_X = xmmword_D01320;
  static_fields->BODY_Y_FIX = 150;
  *(_OWORD *)&static_fields->BODY_U = xmmword_D00870;
  *(_QWORD *)&static_fields->NAME_SIZE_X = 0xA900000200LL;
  *(_QWORD *)&static_fields->NAME_TOP_Y = 0xC2A9000042A90000LL;
  static_fields->NAME_Y_FIX = 150.0;
}


void UIEquipGraphViewerRender___ctor(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  UIEquipGraphViewerRender_c *v15; // x0

  if ( (byte_4D32217 & 1) == 0 )
  {
    sub_1C93AD4(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C93AD4(&StringLiteral_22549/*"normal"*/);
    byte_4D32217 = 1;
  }
  v9 = StringLiteral_22549/*"normal"*/;
  this->fields.filterName = (struct System_String_o *)StringLiteral_22549/*"normal"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.filterName, v9, v2, v3, v4, v5, v6, v7);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.filterColor = _Q0;
  v15 = UIEquipGraphViewerRender_TypeInfo;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v15 = UIEquipGraphViewerRender_TypeInfo;
  }
  this->fields.EquipGraphBodyRect = *(struct UnityEngine_Rect_o *)&v15->static_fields->BODY_U;
  this->fields.EquipGraphNameRect = (struct UnityEngine_Rect_o)xmmword_D01DA0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIEquipGraphViewerRender__EndMoveAlpha(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
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

  if ( (byte_4D32214 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32214 = 1;
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.moveAlphaCallbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackFunc, 0, v13, v14, v15, v16, v17, v18);
  this->fields.isBusyMoveAlpha = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__op_Inequality(moveAlphaCallbackObject, 0, 0);
  if ( v19 )
  {
    if ( !moveAlphaCallbackObject )
      sub_1C93D2C(v19, v20);
    UnityEngine_GameObject__SendMessage_72101276(
      (UnityEngine_GameObject_o *)moveAlphaCallbackObject,
      moveAlphaCallbackFunc,
      0);
  }
}


System_String_array *UIEquipGraphViewerRender__GetAssetNameList(System_String_o *imageName, const MethodInfo *method)
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
  if ( (byte_4D32206 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_4407/*"CharaGraph/9400010"*/);
    imageName = (System_String_o *)sub_1C93AD4(&StringLiteral_4405/*"CharaGraph/"*/);
    byte_4D32206 = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_4405/*"CharaGraph/"*/, 0) )
    v2 = System_String__Concat_64425724((System_String_o *)StringLiteral_4405/*"CharaGraph/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v2, 0) )
    v2 = (System_String_o *)StringLiteral_4407/*"CharaGraph/9400010"*/;
  imageName = (System_String_o *)sub_1C93B7C(string___TypeInfo, 1);
  if ( !imageName )
LABEL_13:
    sub_1C93D2C(imageName, method);
  v9 = imageName;
  if ( !LODWORD(imageName[1].klass) )
    sub_1C93D34(imageName);
  imageName[1].monitor = v2;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&imageName[1].monitor, (int32_t)v2, v3, v4, v5, v6, v7, v8);
  return (System_String_array *)v9;
}


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetBodySize(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  UIEquipGraphViewerRender_c *v2; // x0
  struct UIEquipGraphViewerRender_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D32209 & 1) == 0 )
  {
    sub_1C93AD4(&UIEquipGraphViewerRender_TypeInfo);
    byte_4D32209 = 1;
  }
  v2 = UIEquipGraphViewerRender_TypeInfo;
  if ( !UIEquipGraphViewerRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIEquipGraphViewerRender_TypeInfo);
    v2 = UIEquipGraphViewerRender_TypeInfo;
  }
  static_fields = v2->static_fields;
  result.fields.x = (float)static_fields->BODY_SIZE_X;
  result.fields.y = (float)static_fields->BODY_SIZE_Y;
  return result;
}


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetCenterOffset(
        UIEquipGraphViewerRender_o *this,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int HEIGHT; // w8
  int v5; // w8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D32207 & 1) == 0 )
  {
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    byte_4D32207 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
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


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetCharacterOffset(const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = 0.0;
  result.fields.y = 0.0;
  return result;
}


UnityEngine_Vector2_o UIEquipGraphViewerRender__GetCharacterOffsetMyroom(const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = 0.0;
  result.fields.y = 0.0;
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
  if ( (byte_4D32212 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6037/*"EndMoveAlpha"*/);
    byte_4D32212 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C93A78(
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
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v26->fields.eventReceiver,
          (int32_t)gameObject,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        v35 = StringLiteral_6037/*"EndMoveAlpha"*/;
        v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6037/*"EndMoveAlpha"*/;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26->fields.callWhenFinished, v35, v36, v37, v38, v39, v40, v41);
        return;
      }
LABEL_16:
      sub_1C93D2C(gameObject, v28);
    }
  }
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v12);
  UIEquipGraphViewerRender__EndMoveAlpha(this, v43);
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
  if ( (byte_4D32213 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_6037/*"EndMoveAlpha"*/);
    byte_4D32213 = 1;
  }
  this->fields.isBusyMoveAlpha = 1;
  this->fields.moveAlphaCallbackObject = callbackObject;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.moveAlphaCallbackObject,
    (int32_t)callbackObject,
    (int32_t)callbackFunc,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  this->fields.moveAlphaCallbackFunc = callbackFunc;
  sub_1C93A78(
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
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenRendererColor___);
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
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v28->fields.eventReceiver,
          (int32_t)gameObject,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = StringLiteral_6037/*"EndMoveAlpha"*/;
        v28->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6037/*"EndMoveAlpha"*/;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v28->fields.callWhenFinished, v37, v38, v39, v40, v41, v42, v43);
        return;
      }
LABEL_19:
      sub_1C93D2C(gameObject, v30);
    }
  }
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, float, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    v12);
  UIEquipGraphViewerRender__EndMoveAlpha(this, v45);
}


void UIEquipGraphViewerRender__RecoverSharder(UIEquipGraphViewerRender_o *this, const MethodInfo *method)
{
  System_String_o *filterName; // x20
  const MethodInfo *v4; // x2
  __int64 *v5; // x8

  if ( (byte_4D3220E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4938/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C93AD4(&StringLiteral_22549/*"normal"*/);
    sub_1C93AD4(&StringLiteral_4937/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C93AD4(&StringLiteral_23789/*"silhouette"*/);
    byte_4D3220E = 1;
  }
  filterName = this->fields.filterName;
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23789/*"silhouette"*/, 0) )
  {
    v5 = &StringLiteral_4938/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22549/*"normal"*/, 0);
    v5 = &StringLiteral_4937/*"Custom/Sprite-ScriptActionEquipNormal"*/;
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Object_o *v24; // x20

  if ( (byte_4D3220A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3220A = 1;
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
      UnityEngine_Object__Destroy_72119908(v9, 0);
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
    UnityEngine_Object__Destroy_72119908(v11, 0);
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
      UnityEngine_Object__Destroy_72119908(v16, 0);
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
      v24 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v24, 0);
      bodyFilter = (UnityEngine_Component_o *)this->fields.nameFilter;
      if ( bodyFilter )
      {
        UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0, 0);
        goto LABEL_55;
      }
    }
LABEL_56:
    sub_1C93D2C(bodyFilter, v4);
  }
LABEL_55:
  this->fields.textureList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.textureList, 0, v18, v19, v20, v21, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
void UIEquipGraphViewerRender__SetActiveBody(UIEquipGraphViewerRender_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyRenderer; // x0

  bodyRenderer = (UnityEngine_Component_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyRenderer, 0)) == 0 )
  {
    sub_1C93D2C(bodyRenderer, isActive);
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
    sub_1C93D2C(nameRenderer, isActive);
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
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  *(_WORD *)&this->fields.isShadow = 0;
  this->fields.textureList = textureList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    faceType,
    (int32_t)textureList,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  UIEquipGraphViewerRender__SetCharacterRender(this, v9);
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
  System_Array_o *v58; // x21
  long double v59; // q3
  _BOOL4 isTalkMask; // w9
  bool v61; // zf
  UIEquipGraphViewerRender_c *klass; // x8
  long double v63; // q0
  const MethodInfo *v64; // x2

  if ( (byte_4D3220B & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Mesh_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C93AD4(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    sub_1C93AD4(&StringLiteral_16365/*"_MainTex"*/);
    sub_1C93AD4(&StringLiteral_4938/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C93AD4(&StringLiteral_22549/*"normal"*/);
    sub_1C93AD4(&StringLiteral_16461/*"_SubTex"*/);
    sub_1C93AD4(&StringLiteral_4937/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C93AD4(&StringLiteral_23789/*"silhouette"*/);
    byte_4D3220B = 1;
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
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23789/*"silhouette"*/, 0) )
  {
    v9 = (System_String_o *)StringLiteral_4938/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22549/*"normal"*/, 0);
    v9 = (System_String_o *)StringLiteral_4937/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v10 = UnityEngine_Shader__Find(v9, 0);
  v11 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16365/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v15 = this->fields.textureList;
  if ( !v15 )
    goto LABEL_46;
  if ( !LODWORD(v15->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v11,
    (System_String_o *)StringLiteral_16461/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v15->m_Items[0],
    0);
  bodyRenderer = (__int64)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)bodyRenderer, v11, 0);
  v16 = (UnityEngine_Mesh_o *)sub_1C93D20(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v16, 0);
  bodyRenderer = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
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
  bodyRenderer = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
  v30 = bodyRenderer;
  if ( !byte_4D2A142 )
  {
    bodyRenderer = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A142 = 1;
  }
  if ( !v30 )
LABEL_46:
    sub_1C93D2C(bodyRenderer, v13);
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
  bodyRenderer = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
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
  bodyRenderer = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
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
    sub_1C93D34(bodyRenderer);
  }
  v54 = UIEquipGraphViewerRender_TypeInfo->static_fields;
  v55.n64_u64[0] = *(unsigned __int64 *)&v54->BODY_U;
  v56.n64_u64[0] = *(unsigned __int64 *)&v54->BODY_W;
  LODWORD(v57) = vadd_f32(v55, v56).n64_u32[0];
  HIDWORD(v57) = vsub_f32(v55, v56).n64_u32[1];
  *(_QWORD *)(bodyRenderer + 56) = v57;
  UnityEngine_Mesh__set_uv2(v16, (UnityEngine_Vector2_array *)bodyRenderer, 0);
  v58 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v58,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418,
    0);
  UnityEngine_Mesh__set_triangles(v16, (System_Int32_array *)v58, 0);
  bodyRenderer = (__int64)this->fields.bodyFilter;
  if ( !bodyRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)bodyRenderer, v16, 0);
  UnityEngine_Mesh__RecalculateNormals(v16, 0);
  UnityEngine_Mesh__RecalculateBounds(v16, 0);
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
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v63,
    v63,
    v63,
    v59);
  UIEquipGraphViewerRender__SetActiveBody(this, 1, v64);
}


void UIEquipGraphViewerRender__SetDepth(UIEquipGraphViewerRender_o *this, float d, const MethodInfo *method)
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
    sub_1C93D2C(transform, v6);
  }
  *(_QWORD *)&v8.fields.x = localPosition;
  v8.fields.z = -d;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


void UIEquipGraphViewerRender__SetFilter(
        UIEquipGraphViewerRender_o *this,
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.filterName,
    (int32_t)filterName,
    (int32_t)method,
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
  if ( (byte_4D3220F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16323/*"_FilterColor"*/);
    byte_4D3220F = 1;
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
            (System_String_o *)StringLiteral_16323/*"_FilterColor"*/,
            v10,
            0),
          (bodyRenderer = (UnityEngine_Renderer_o *)this->fields.nameRenderer) == 0)
      || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
    {
LABEL_10:
      sub_1C93D2C(bodyRenderer, method);
    }
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)bodyRenderer,
      (System_String_o *)StringLiteral_16323/*"_FilterColor"*/,
      v11,
      0);
  }
}


void UIEquipGraphViewerRender__SetGradation(UIEquipGraphViewerRender_o *this, float g, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4D32210 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16336/*"_Gradation"*/);
    byte_4D32210 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71985380(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16336/*"_Gradation"*/,
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
          (System_String_o *)StringLiteral_16336/*"_Gradation"*/,
          g,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C93D2C(bodyRenderer, method);
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
    sub_1C93D2C(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIEquipGraphViewerRender__SetLayer_44653708(this, transform, layer, v8);
  }
}


void UIEquipGraphViewerRender__SetLayer_44653708(
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
  if ( (byte_4D32215 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    this = (UIEquipGraphViewerRender_o *)sub_1C93AD4(&UnityEngine_Transform_TypeInfo);
    byte_4D32215 = 1;
  }
  if ( !tf
    || (this = (UIEquipGraphViewerRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C93D2C(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C93D2C(0, v7);
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
      v12 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
        sub_1C940C8(v17);
        goto LABEL_33;
      }
    }
    UIEquipGraphViewerRender__SetLayer_44653708(v6, v17, layer, v18);
  }
  v20 = sub_1C93C10(Enumerator, System_IDisposable_TypeInfo);
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
      v25 = sub_1C69E5C(v20, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4D32216 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16454/*"_StencilComp"*/);
    byte_4D32216 = 1;
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
    || (UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16454/*"_StencilComp"*/, v7, 0),
        (RenderingCompareFunction = (UnityEngine_Material_o *)this->fields.nameRenderer) == 0)
    || (RenderingCompareFunction = UnityEngine_Renderer__get_material(
                                     (UnityEngine_Renderer_o *)RenderingCompareFunction,
                                     0)) == 0 )
  {
    sub_1C93D2C(RenderingCompareFunction, v6);
  }
  UnityEngine_Material__SetInt(RenderingCompareFunction, (System_String_o *)StringLiteral_16454/*"_StencilComp"*/, v7, 0);
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
  System_Array_o *v48; // x21
  long double v49; // q3
  _BOOL4 isTalkMask; // w9
  bool v51; // zf
  UIEquipGraphViewerRender_c *klass; // x8
  long double v53; // q0
  const MethodInfo *v54; // x2

  if ( (byte_4D3220C & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&UnityEngine_Mesh_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418);
    sub_1C93AD4(&UIEquipGraphViewerRender_TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    sub_1C93AD4(&StringLiteral_16365/*"_MainTex"*/);
    sub_1C93AD4(&StringLiteral_4938/*"Custom/Sprite-ScriptActionEquipSilhouette"*/);
    sub_1C93AD4(&StringLiteral_22549/*"normal"*/);
    sub_1C93AD4(&StringLiteral_16461/*"_SubTex"*/);
    sub_1C93AD4(&StringLiteral_4937/*"Custom/Sprite-ScriptActionEquipNormal"*/);
    sub_1C93AD4(&StringLiteral_23789/*"silhouette"*/);
    byte_4D3220C = 1;
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
  if ( System_String__op_Equality(filterName, (System_String_o *)StringLiteral_23789/*"silhouette"*/, 0) )
  {
    v13 = (System_String_o *)StringLiteral_4938/*"Custom/Sprite-ScriptActionEquipSilhouette"*/;
  }
  else
  {
    System_String__op_Equality(filterName, (System_String_o *)StringLiteral_22549/*"normal"*/, 0);
    v13 = (System_String_o *)StringLiteral_4937/*"Custom/Sprite-ScriptActionEquipNormal"*/;
  }
  v14 = UnityEngine_Shader__Find(v13, 0);
  v15 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
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
    (System_String_o *)StringLiteral_16365/*"_MainTex"*/,
    (UnityEngine_Texture_o *)textureList->m_Items[0],
    0);
  v19 = this->fields.textureList;
  if ( !v19 )
    goto LABEL_46;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_45;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16461/*"_SubTex"*/,
    (UnityEngine_Texture_o *)v19->m_Items[0],
    0);
  nameRenderer = (__int64)this->fields.nameRenderer;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)nameRenderer, v15, 0);
  v20 = (UnityEngine_Mesh_o *)sub_1C93D20(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v20, 0);
  nameRenderer = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
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
  nameRenderer = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
  v36 = nameRenderer;
  if ( !byte_4D2A142 )
  {
    nameRenderer = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A142 = 1;
  }
  if ( !v36 )
LABEL_46:
    sub_1C93D2C(nameRenderer, v17);
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
  nameRenderer = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
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
  nameRenderer = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, 4);
  if ( !nameRenderer )
    goto LABEL_46;
  v47 = *(_DWORD *)(nameRenderer + 24);
  if ( !v47
    || (*(_QWORD *)(nameRenderer + 32) = 0x3E11FDDF00000000LL, v47 == 1)
    || (*(_QWORD *)(nameRenderer + 40) = 0x3E11FDDF3F000000LL, v47 <= 2)
    || (*(_QWORD *)(nameRenderer + 48) = 0, v47 == 3) )
  {
LABEL_45:
    sub_1C93D34(nameRenderer);
  }
  *(_QWORD *)(nameRenderer + 56) = 1056964608;
  UnityEngine_Mesh__set_uv2(v20, (UnityEngine_Vector2_array *)nameRenderer, 0);
  v48 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v48,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__A55571C9DB30026E44AC0BDD7674D9C597D8254732FEB18418F3AAF8A5B4F418,
    0);
  UnityEngine_Mesh__set_triangles(v20, (System_Int32_array *)v48, 0);
  nameRenderer = (__int64)this->fields.nameFilter;
  if ( !nameRenderer )
    goto LABEL_46;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)nameRenderer, v20, 0);
  UnityEngine_Mesh__RecalculateNormals(v20, 0);
  UnityEngine_Mesh__RecalculateBounds(v20, 0);
  isTalkMask = this->fields.isTalkMask;
  v51 = !this->fields.isShadow;
  klass = this->klass;
  this->fields.isBusyMoveAlpha = 0;
  LODWORD(v53) = 1.0;
  if ( !v51 )
    *(float *)&v53 = 0.1;
  if ( isTalkMask )
    *(float *)&v53 = *(float *)&v53 * 0.5;
  *(float *)&v49 = this->fields.mColor.fields.a;
  ((void (__fastcall *)(UIEquipGraphViewerRender_o *, const MethodInfo *, long double, long double, long double, long double))klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    klass->vtable._39_SetTweenColor.method,
    v53,
    v53,
    v53,
    v49);
  UIEquipGraphViewerRender__SetActiveName(this, 1, v54);
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

  if ( (byte_4D3220D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3220D = 1;
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
    sub_1C93D2C(bodyRenderer, shaderName);
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
    sub_1C93D2C(bodyRenderer, *(_QWORD *)&order);
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
  if ( (byte_4D32208 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    byte_4D32208 = 1;
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16273/*"_Color"*/, v12, 0);
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
  UnityEngine_Material__SetColor((UnityEngine_Material_o *)bodyRenderer, (System_String_o *)StringLiteral_16273/*"_Color"*/, v13, 0);
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
    sub_1C93D2C(bodyRenderer, v8);
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

  if ( (byte_4D32211 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16512/*"_Volume"*/);
    byte_4D32211 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer )
    goto LABEL_10;
  bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0);
  if ( !bodyRenderer )
    goto LABEL_10;
  if ( UnityEngine_Material__HasProperty_71985380(
         (UnityEngine_Material_o *)bodyRenderer,
         (System_String_o *)StringLiteral_16512/*"_Volume"*/,
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
          (System_String_o *)StringLiteral_16512/*"_Volume"*/,
          v,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C93D2C(bodyRenderer, method);
  }
}