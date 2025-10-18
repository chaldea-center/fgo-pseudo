UnityEngine_Vector3_o GalleryFullScreenDragProcess__GetOffsetAddPos(
        GalleryFullScreenDragProcess_PosInfo_o *posInfo,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GalleryFullScreenDragProcess_PosInfo_o *v3; // x19
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x8
  bool v5; // w20
  float x; // s8
  float y; // s9
  float z; // s10
  float OffsetAddX; // s11
  const MethodInfo *v10; // x2
  float OffsetAddY; // s0
  float v12; // s2
  float v13; // s1
  float v14; // s0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = posInfo;
  if ( (byte_4C3DF88 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF88 = 1;
  }
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  if ( !touchInfo )
    sub_1C372B4(posInfo);
  v5 = touchInfo->fields.scaleDelta < 0.0 || touchInfo->fields.isTouchRelease;
  x = touchInfo->fields.localDelta.fields.x;
  y = touchInfo->fields.localDelta.fields.y;
  z = touchInfo->fields.localDelta.fields.z;
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  OffsetAddX = GalleryFullScreenDragProcess__GetOffsetAddX(v3, v5, v15, v2);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  OffsetAddY = GalleryFullScreenDragProcess__GetOffsetAddY(v3, v5, v16, v10);
  v12 = 0.0;
  v13 = OffsetAddY;
  v14 = OffsetAddX;
  result.fields.z = v12;
  result.fields.y = v13;
  result.fields.x = v14;
  return result;
}


float GalleryFullScreenDragProcess__GetOffsetAddX(
        GalleryFullScreenDragProcess_PosInfo_o *posInfo,
        bool isRecover,
        UnityEngine_Vector3_o localDelta,
        const MethodInfo *method)
{
  float x; // s8
  _BOOL4 v5; // w20
  GalleryFullScreenDragProcess_PosInfo_o *v6; // x19
  float v7; // s0
  float v8; // s1
  _BOOL4 v9; // w10
  _BOOL4 v10; // w11
  float v11; // s2
  float v12; // s0
  int v13; // w9
  float v14; // s3
  float result; // s0
  float v16; // s0
  float v17; // s1

  x = localDelta.fields.x;
  v5 = isRecover;
  v6 = posInfo;
  if ( (byte_4C3DF86 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF86 = 1;
  }
  if ( !v6 )
    sub_1C372B4(posInfo);
  v7 = v6->fields.screenCenterPos.fields.x;
  v8 = GalleryFullScreenDragProcess_TypeInfo->static_fields->screenSize.fields.x;
  v9 = v7 > (float)(v8 * 0.5);
  v10 = v7 < (float)(v8 * 0.5);
  v11 = v6->fields.screenBottomRightPos.fields.x;
  v12 = v6->fields.screenTopLeftPos.fields.x;
  v13 = x > 0.0 || v5;
  v14 = v11 - v12;
  if ( (v13 & v9 | ((x < 0.0 || v5) && v10)) == 1 && v14 <= v8 )
    return (float)((float)(v6->fields.worldStartPos.fields.x + v6->fields.worldEndPos.fields.x) * 0.5)
         - v6->fields.worldCenterPos.fields.x;
  if ( v12 > 0.0 && v14 > v8 && ((v13 ^ 1) & 1) == 0 )
  {
    v16 = v6->fields.worldStartPos.fields.x;
    v17 = v6->fields.worldTopLeftPos.fields.x;
    return v16 - v17;
  }
  result = 0.0;
  if ( (x < 0.0 || v5) && v11 < v8 && v14 > v8 )
  {
    v16 = v6->fields.worldEndPos.fields.x;
    v17 = v6->fields.worldBottomRightPos.fields.x;
    return v16 - v17;
  }
  return result;
}


float GalleryFullScreenDragProcess__GetOffsetAddY(
        GalleryFullScreenDragProcess_PosInfo_o *posInfo,
        bool isRecover,
        UnityEngine_Vector3_o localDelta,
        const MethodInfo *method)
{
  float y; // s8
  _BOOL4 v5; // w20
  GalleryFullScreenDragProcess_PosInfo_o *v6; // x19
  float v7; // s0
  float v8; // s1
  _BOOL4 v9; // w10
  _BOOL4 v10; // w11
  float v11; // s2
  float v12; // s0
  int v13; // w9
  float v14; // s3
  float result; // s0
  float v16; // s0
  float v17; // s1

  y = localDelta.fields.y;
  v5 = isRecover;
  v6 = posInfo;
  if ( (byte_4C3DF87 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF87 = 1;
  }
  if ( !v6 )
    sub_1C372B4(posInfo);
  v7 = v6->fields.screenCenterPos.fields.y;
  v8 = GalleryFullScreenDragProcess_TypeInfo->static_fields->screenSize.fields.y;
  v9 = v7 > (float)(v8 * 0.5);
  v10 = v7 < (float)(v8 * 0.5);
  v11 = v6->fields.screenBottomRightPos.fields.y;
  v12 = v6->fields.screenTopLeftPos.fields.y;
  v13 = y > 0.0 || v5;
  v14 = v11 - v12;
  if ( (v13 & v9 | ((y < 0.0 || v5) && v10)) == 1 && v14 <= v8 )
    return (float)((float)(v6->fields.worldStartPos.fields.y + v6->fields.worldEndPos.fields.y) * 0.5)
         - v6->fields.worldCenterPos.fields.y;
  if ( v12 > 0.0 && v14 > v8 && ((v13 ^ 1) & 1) == 0 )
  {
    v16 = v6->fields.worldStartPos.fields.y;
    v17 = v6->fields.worldTopLeftPos.fields.y;
    return v16 - v17;
  }
  result = 0.0;
  if ( (y < 0.0 || v5) && v11 < v8 && v14 > v8 )
  {
    v16 = v6->fields.worldEndPos.fields.y;
    v17 = v6->fields.worldBottomRightPos.fields.y;
    return v16 - v17;
  }
  return result;
}


UnityEngine_Vector2_o GalleryFullScreenDragProcess__GetScreenPosition(
        UnityEngine_Vector3_o worldPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Camera_o *camera; // x0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4C3DF80 & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF80 = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_1C372B4(0);
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  v8 = UnityEngine_Camera__WorldToScreenPoint_71073020(camera, v7, 0);
  result.fields.y = v8.fields.y;
  result.fields.x = v8.fields.x;
  return result;
}


UnityEngine_Vector3_o GalleryFullScreenDragProcess__GetWorldPosition(
        UnityEngine_Vector2_o screenPos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Camera_o *camera; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4C3DF7F & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF7F = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_1C372B4(0);
  v5.fields.z = 0.0;
  v5.fields.x = x;
  v5.fields.y = y;
  return UnityEngine_Camera__ScreenToWorldPoint_71073044(camera, v5, 0);
}


void GalleryFullScreenDragProcess__Init(
        UnityEngine_Camera_o *camera,
        GalleryFullScreenListViewObject_o *actionObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *transform; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_GameObject_o *dragObject; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v13; // x0
  UnityEngine_Transform_o *parent; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v15; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  unsigned int localScale; // s0
  struct GalleryFullScreenDragProcess_StaticFields *v19; // x8
  BalanceConfig_c *v20; // x0
  struct BalanceConfig_StaticFields *v21; // x9
  UnityEngine_Transform_o *v22; // x19

  if ( (byte_4C3DF7C & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF7C = 1;
  }
  GalleryFullScreenDragProcess_TypeInfo->static_fields->camera = camera;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)GalleryFullScreenDragProcess_TypeInfo->static_fields,
    (int32_t)camera,
    (int32_t)method,
    v3);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  static_fields->actionObject = actionObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->actionObject, (int32_t)actionObject, v7, v8);
  if ( !actionObject )
    goto LABEL_14;
  dragObject = actionObject->fields.dragObject;
  v13 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v13->dragObject = dragObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->dragObject, (int32_t)dragObject, v10, v11);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
  v15 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v15->parent = parent;
  sub_1C36FFC((CGThumbnailListItem_o *)&v15->parent, (int32_t)parent, v16, v17);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v19 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  LODWORD(v19->baseScale) = localScale;
  v19->isOldMousePosition = 0;
  v19->oldTouchCount = 0;
  v19->isTouchScale = 0;
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
    v19 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  }
  v21 = v20->static_fields;
  transform = v19->dragObject;
  v19->defaultZoomRate = (float)v21->GalleryDefaultZoomRateMax;
  if ( !transform )
LABEL_14:
    sub_1C372B4(transform);
  v22 = UnityEngine_GameObject__get_transform(transform, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  TransformHelper__SetLocalPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenDragProcess__NonTouch(bool isAbleToPinch, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  UnityEngine_Transform_o *parent; // x0
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x9
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x10
  float x; // s8
  float y; // s9
  _BOOL4 v8; // w8
  int32_t width; // w0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v10; // x19
  float Axis; // s0
  _BOOL8 MouseButton; // x0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v13; // x19
  struct GalleryFullScreenDragProcess_StaticFields *v14; // x8
  UnityEngine_Vector3_o *v15; // x19
  const MethodInfo *v16; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v17; // x8
  GalleryFullScreenDragProcess_c *v18; // x8
  float32x2_t *v19; // x9
  float v20; // v0.s[1]
  float v21; // s1
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v2 = isAbleToPinch;
  if ( (byte_4C3DF82 & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C37058(&StringLiteral_9167/*"Mouse ScrollWheel"*/);
    byte_4C3DF82 = 1;
  }
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  touchInfo = static_fields->touchInfo;
  static_fields->isTouchScale = 0;
  if ( !touchInfo )
    goto LABEL_24;
  x = mousePosition.fields.x;
  y = mousePosition.fields.y;
  v8 = 0;
  touchInfo->fields.isTouchRelease = static_fields->oldTouchCount > 0;
  static_fields->oldTouchCount = 0;
  if ( mousePosition.fields.x >= 0.0 )
  {
    width = UnityEngine_Screen__get_width(0);
    v8 = 0;
    if ( y >= 0.0 && x <= (float)width )
      v8 = y <= (float)UnityEngine_Screen__get_height(0);
  }
  if ( v2 && v8 )
  {
    v10 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9167/*"Mouse ScrollWheel"*/, 0);
    if ( !v10 )
      goto LABEL_24;
    v10->fields.scaleDelta = Axis;
  }
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
  if ( MouseButton
    || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0))
    || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0)) )
  {
    v22.fields.x = x;
    v22.fields.y = y;
    v13 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(v22, (const MethodInfo *)MouseButton);
    if ( v13 )
    {
      v13->fields.newWorldPos = WorldPosition;
      v14 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      v15 = (UnityEngine_Vector3_o *)v14->touchInfo;
      if ( v15 )
      {
        parent = v14->parent;
        if ( parent )
        {
          v15[4] = UnityEngine_Transform__InverseTransformPoint(parent, v15[3], 0);
          v17 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
          if ( !v17->isOldMousePosition )
          {
            v17->isOldMousePosition = 1;
            goto LABEL_22;
          }
          v25 = GalleryFullScreenDragProcess__GetWorldPosition(v17->oldMousePosition, v16);
          parent = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
          if ( parent )
          {
            v26 = UnityEngine_Transform__InverseTransformPoint(parent, v25, 0);
            v18 = GalleryFullScreenDragProcess_TypeInfo;
            v19 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
            if ( v19 )
            {
              v20 = v26.fields.y;
              v21 = v19[7].n64_f32[0] - v26.fields.z;
              v19[3].n64_u64[0] = vsub_f32(v19[6], *(float32x2_t *)&v26.fields.x).n64_u64[0];
              v19[4].n64_f32[0] = v21;
              v17 = v18->static_fields;
LABEL_22:
              v17->oldMousePosition.fields.x = x;
              v17->oldMousePosition.fields.y = y;
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C372B4(parent);
  }
  GalleryFullScreenDragProcess_TypeInfo->static_fields->isOldMousePosition = 0;
}


void GalleryFullScreenDragProcess__OnDragUpdate(
        bool isAbleToPinch,
        System_Action_o *sameScale,
        System_Action_o *notSameScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x0
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  float x; // s8
  float baseScale; // s9
  float v14; // s1
  float v15; // s2
  struct UnityEngine_Mathf_StaticFields *v16; // x8
  float v17; // s0
  System_Action_o *v18; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v19; // x8
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localScale; // s0
  float scaleSqrMagnitude; // s1
  UnityEngine_Transform_o *v23; // x19
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v25; // x8
  UnityEngine_GameObject_o *v26; // x19
  GalleryFullScreenListViewObject_o *actionObject; // x20
  float v28; // s8
  float y; // s9
  GalleryFullScreenDragProcess_PosInfo_o *v30; // x0
  GalleryFullScreenDragProcess_PosInfo_o *v31; // x21
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  float v34; // s8
  float v35; // s9
  float z; // s10
  UnityEngine_Transform_o *v37; // x19
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o OffsetAddPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3DF7E & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&GalleryFullScreenDragProcess_PosInfo_TypeInfo);
    byte_4C3DF7E = 1;
  }
  dragObject = (UnityEngine_Object_o *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(dragObject, 0, 0);
  if ( !v8 )
  {
    GalleryFullScreenDragProcess__SetUp((const MethodInfo *)v8);
    GalleryFullScreenDragProcess__Touch(isAbleToPinch, v9);
    GalleryFullScreenDragProcess__Scale(v10);
    static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    x = static_fields->localScale.fields.x;
    baseScale = static_fields->baseScale;
    if ( !byte_4C3C925 )
    {
      sub_1C37058(&UnityEngine_Mathf_TypeInfo);
      byte_4C3C925 = 1;
    }
    v14 = fabsf(x);
    v15 = fabsf(baseScale);
    if ( v14 <= v15 )
      v14 = v15;
    v16 = UnityEngine_Mathf_TypeInfo->static_fields;
    v17 = v14 * 0.000001;
    if ( (float)(v14 * 0.000001) <= (float)(v16->Epsilon * 8.0) )
      v17 = v16->Epsilon * 8.0;
    if ( vabds_f32(baseScale, x) >= v17 )
      v18 = notSameScale;
    else
      v18 = sameScale;
    ActionExtensions__Call(v18, 0);
    v19 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    if ( v19->isTouchScaleRebase && v19->isTouchScale && v19->scaleSqrMagnitude > 0.0 )
    {
      transform = v19->dragObject;
      if ( !transform )
        goto LABEL_27;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_27;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      v19 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      scaleSqrMagnitude = v19->scaleSqrMagnitude;
      LODWORD(v19->baseTouchScale) = localScale;
      v19->baseTouchSqrMagnitude = scaleSqrMagnitude;
    }
    transform = v19->dragObject;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( transform )
      {
        v23 = (UnityEngine_Transform_o *)transform;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
        touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
        if ( touchInfo )
        {
          v40.fields.x = localPosition.fields.x + touchInfo->fields.localDelta.fields.x;
          v40.fields.y = localPosition.fields.y + touchInfo->fields.localDelta.fields.y;
          v40.fields.z = localPosition.fields.z + touchInfo->fields.localDelta.fields.z;
          UnityEngine_Transform__set_localPosition(v23, v40, 0);
          v25 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
          v26 = v25->dragObject;
          actionObject = v25->actionObject;
          v28 = v25->screenSize.fields.x;
          y = v25->screenSize.fields.y;
          v30 = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C372A4(GalleryFullScreenDragProcess_PosInfo_TypeInfo);
          v38.fields.x = v28;
          v38.fields.y = y;
          v31 = v30;
          GalleryFullScreenDragProcess_PosInfo___ctor(v30, v26, actionObject, v38, v32);
          OffsetAddPos = GalleryFullScreenDragProcess__GetOffsetAddPos(v31, v33);
          transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
          if ( transform )
          {
            v34 = OffsetAddPos.fields.x;
            v35 = OffsetAddPos.fields.y;
            z = OffsetAddPos.fields.z;
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( transform )
            {
              v37 = (UnityEngine_Transform_o *)transform;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
              position.fields.x = v34 + position.fields.x;
              position.fields.y = v35 + position.fields.y;
              position.fields.z = z + position.fields.z;
              UnityEngine_Transform__set_position(v37, position, 0);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C372B4(transform);
  }
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenDragProcess__OneTouch(const MethodInfo *method)
{
  UnityEngine_Transform_o *touches; // x0
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x20
  const MethodInfo *v3; // x0
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o *v5; // x20
  const MethodInfo *v6; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v7; // x8
  float32x2_t *v8; // x8
  float y; // v0.s[1]
  float v10; // s1
  UnityEngine_Vector2_o v11; // kr00_8
  GalleryFullScreenDragProcess_c *v12; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v13; // x8
  UnityEngine_Touch_o v14; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C3DF83 & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF83 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  GalleryFullScreenDragProcess_TypeInfo->static_fields->isOldMousePosition = 0;
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_13;
  if ( !LODWORD(touches[1].klass) )
    sub_1C372BC(touches);
  memmove(&v14, &touches[1].monitor, 0x44u);
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  position = UnityEngine_Touch__get_position(&v14, 0);
  WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(position, v3);
  if ( !touchInfo )
    goto LABEL_13;
  touchInfo->fields.newWorldPos = WorldPosition;
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v5 = (UnityEngine_Vector3_o *)static_fields->touchInfo;
  if ( !v5 )
    goto LABEL_13;
  touches = static_fields->parent;
  if ( !touches )
    goto LABEL_13;
  v5[4] = UnityEngine_Transform__InverseTransformPoint(touches, v5[3], 0);
  v7 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  if ( v7->oldTouchCount == 1 )
  {
    v17 = GalleryFullScreenDragProcess__GetWorldPosition(v7->oldTouchPosition, v6);
    touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
    if ( touches )
    {
      v18 = UnityEngine_Transform__InverseTransformPoint(touches, v17, 0);
      v8 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( v8 )
      {
        y = v18.fields.y;
        v10 = v8[7].n64_f32[0] - v18.fields.z;
        v8[3].n64_u64[0] = vsub_f32(v8[6], *(float32x2_t *)&v18.fields.x).n64_u64[0];
        v8[4].n64_f32[0] = v10;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1C372B4(touches);
  }
LABEL_12:
  v11 = UnityEngine_Touch__get_position(&v14, 0);
  v12 = GalleryFullScreenDragProcess_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->oldTouchPosition = v11;
  v13 = v12->static_fields;
  v13->isTouchScale = 0;
  v13->oldTouchCount = 1;
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenDragProcess__Scale(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x9
  float ZoomRateMax; // s0
  struct GalleryFullScreenDragProcess_StaticFields *v5; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *v6; // x9
  float scaleDelta; // s2
  float x; // s9
  float baseScale; // s1
  float v10; // s8
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float Epsilon; // s3
  struct GalleryFullScreenDragProcess_StaticFields *v15; // x8
  int oldTouchCount; // w9
  struct GalleryFullScreenDragProcess_TouchInfo_o *v17; // x8
  float v18; // s8
  float y; // s9
  float z; // s10
  struct GalleryFullScreenDragProcess_StaticFields *v21; // x9
  float32x2_t *v22; // x8
  float v23; // s9
  float32x2_t v24; // d8
  float32x2_t *v25; // x8
  float v26; // v0.s[1]
  float v27; // s1
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C3DF85 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF85 = 1;
  }
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  touchInfo = static_fields->touchInfo;
  if ( !touchInfo )
    goto LABEL_38;
  if ( touchInfo->fields.scaleDelta == 0.0 )
    return;
  method = (const MethodInfo *)static_fields->actionObject;
  if ( !method )
    goto LABEL_38;
  method = (const MethodInfo *)GalleryFullScreenListViewObject__GetItem((GalleryFullScreenListViewObject_o *)method, v1);
  if ( !method )
    goto LABEL_38;
  method = (const MethodInfo *)method[1].return_type;
  if ( !method )
    goto LABEL_38;
  ZoomRateMax = GalleryResourceEntity__GetZoomRateMax(
                  (GalleryResourceEntity_o *)method,
                  GalleryFullScreenDragProcess_TypeInfo->static_fields->defaultZoomRate,
                  0);
  v5 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v6 = v5->touchInfo;
  if ( !v6 )
    goto LABEL_38;
  scaleDelta = v6->fields.scaleDelta;
  x = v5->localScale.fields.x;
  baseScale = v5->baseScale;
  v10 = x + scaleDelta;
  if ( scaleDelta < 0.0 && v10 < baseScale || scaleDelta > 0.0 && (baseScale = ZoomRateMax * baseScale, v10 > baseScale) )
  {
    v10 = baseScale;
    v5->isTouchScaleRebase = 1;
  }
  if ( !byte_4C3C925 )
  {
    sub_1C37058(&UnityEngine_Mathf_TypeInfo);
    byte_4C3C925 = 1;
  }
  v11 = fabsf(x);
  v12 = fabsf(v10);
  if ( v11 <= v12 )
    v11 = v12;
  v13 = v11 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v11 * 0.000001) <= (float)(Epsilon * 8.0) )
    v13 = Epsilon * 8.0;
  if ( vabds_f32(v10, x) >= v13 )
  {
    v15 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    oldTouchCount = v15->oldTouchCount;
    v15->localScale.fields.x = v10;
    v15->localScale.fields.y = v10;
    if ( oldTouchCount > 0 || v15->isOldMousePosition )
    {
      method = (const MethodInfo *)v15->dragObject;
      if ( method )
      {
        method = (const MethodInfo *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method, 0);
        v17 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
        if ( v17 )
        {
          if ( method )
          {
            v28 = UnityEngine_Transform__InverseTransformPoint(
                    (UnityEngine_Transform_o *)method,
                    v17->fields.newWorldPos,
                    0);
            method = (const MethodInfo *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
            if ( method )
            {
              v18 = v28.fields.x;
              y = v28.fields.y;
              z = v28.fields.z;
              method = (const MethodInfo *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method, 0);
              if ( method )
              {
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)method,
                  GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale,
                  0);
                method = (const MethodInfo *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
                if ( method )
                {
                  method = (const MethodInfo *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)method,
                                                 0);
                  if ( method )
                  {
                    v29.fields.x = v18;
                    v29.fields.y = y;
                    v29.fields.z = z;
                    v30 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)method, v29, 0);
                    v21 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
                    v22 = (float32x2_t *)v21->touchInfo;
                    if ( v22 )
                    {
                      method = (const MethodInfo *)v21->parent;
                      if ( method )
                      {
                        v23 = v22[7].n64_f32[0];
                        v24.n64_u64[0] = v22[6].n64_u64[0];
                        v31 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)method, v30, 0);
                        v25 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
                        if ( v25 )
                        {
                          v26 = v31.fields.y;
                          v27 = (float)(v23 - v31.fields.z) + v25[4].n64_f32[0];
                          v25[3].n64_u64[0] = vadd_f32(vsub_f32(v24, *(float32x2_t *)&v31.fields.x), v25[3]).n64_u64[0];
                          v25[4].n64_f32[0] = v27;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      method = (const MethodInfo *)v15->dragObject;
      if ( method )
      {
        method = (const MethodInfo *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method, 0);
        if ( method )
        {
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)method,
            GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale,
            0);
          return;
        }
      }
    }
LABEL_38:
    sub_1C372B4(method);
  }
}


void GalleryFullScreenDragProcess__SetUp(const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  GalleryFullScreenDragProcess_c *v2; // x8
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  GalleryFullScreenDragProcess_TouchInfo_o *v4; // x19
  const MethodInfo *v5; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t height; // w0
  struct GalleryFullScreenDragProcess_StaticFields *v10; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3DF7D & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C37058(&GalleryFullScreenDragProcess_TouchInfo_TypeInfo);
    byte_4C3DF7D = 1;
  }
  dragObject = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0)) == 0 )
  {
    sub_1C372B4(dragObject);
  }
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0);
  v2 = GalleryFullScreenDragProcess_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale = localScale;
  static_fields = v2->static_fields;
  static_fields->isTouchScaleRebase = 0;
  static_fields->scaleSqrMagnitude = 0.0;
  v4 = (GalleryFullScreenDragProcess_TouchInfo_o *)sub_1C372A4(GalleryFullScreenDragProcess_TouchInfo_TypeInfo);
  GalleryFullScreenDragProcess_TouchInfo___ctor(v4, v5);
  v6 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v6->touchInfo = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->touchInfo, (int32_t)v4, v7, v8);
  LODWORD(v4) = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v10 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v10->screenSize.fields.x = (float)(int)v4;
  v10->screenSize.fields.y = (float)height;
}


void GalleryFullScreenDragProcess__Touch(bool isAbleToPinch, const MethodInfo *method)
{
  const MethodInfo *touchCount; // x0
  const MethodInfo *v4; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x9

  if ( (byte_4C3DF81 & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C3DF81 = 1;
  }
  touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0);
  if ( (_DWORD)touchCount == 2 )
  {
    GalleryFullScreenDragProcess__TwoTouch(isAbleToPinch, v4);
  }
  else if ( (_DWORD)touchCount == 1 )
  {
    GalleryFullScreenDragProcess__OneTouch(touchCount);
  }
  else if ( (_DWORD)touchCount )
  {
    static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    touchInfo = static_fields->touchInfo;
    if ( !touchInfo )
      sub_1C372B4(touchCount);
    touchInfo->fields.isTouchRelease = static_fields->oldTouchCount > 0;
    static_fields->oldTouchCount = 0;
    static_fields->isTouchScale = 0;
  }
  else
  {
    GalleryFullScreenDragProcess__NonTouch(isAbleToPinch, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenDragProcess__TwoTouch(bool isAbleToPinch, const MethodInfo *method)
{
  UnityEngine_Transform_o *touches; // x0
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o v5; // kr08_8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x19
  const MethodInfo *v7; // x0
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o *v9; // x19
  const MethodInfo *v10; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v11; // x8
  GalleryFullScreenDragProcess_c *v12; // x8
  float32x2_t *v13; // x9
  float y; // v0.s[1]
  float v15; // s1
  UnityEngine_Vector2_o v16; // kr10_8
  UnityEngine_Vector2_o v17; // kr18_8
  struct GalleryFullScreenDragProcess_StaticFields *v18; // x8
  float v19; // s8
  _BOOL4 isTouchScale; // w9
  struct GalleryFullScreenDragProcess_TouchInfo_o *v21; // x19
  float baseTouchSqrMagnitude; // s9
  float x; // s0
  UnityEngine_Touch_o v24; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C3DF84 & 1) == 0 )
  {
    sub_1C37058(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3DF84 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v24, 0, sizeof(v24));
  GalleryFullScreenDragProcess_TypeInfo->static_fields->isOldMousePosition = 0;
  if ( isAbleToPinch )
  {
    touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
    if ( !touches )
      goto LABEL_24;
    if ( !LODWORD(touches[1].klass) )
      goto LABEL_25;
    memmove(&dest, &touches[1].monitor, 0x44u);
    touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
    if ( !touches )
      goto LABEL_24;
    if ( LODWORD(touches[1].klass) <= 1 )
LABEL_25:
      sub_1C372BC(touches);
    memmove(&v24, (char *)&touches[4].klass + 4, 0x44u);
    position = UnityEngine_Touch__get_position(&dest, 0);
    v5 = UnityEngine_Touch__get_position(&v24, 0);
    v26.fields.x = (float)(position.fields.x + v5.fields.x) * 0.5;
    touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    v26.fields.y = (float)(position.fields.y + v5.fields.y) * 0.5;
    WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(v26, v7);
    if ( !touchInfo
      || (touchInfo->fields.newWorldPos = WorldPosition,
          static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields,
          (v9 = (UnityEngine_Vector3_o *)static_fields->touchInfo) == 0)
      || (touches = static_fields->parent) == 0 )
    {
LABEL_24:
      sub_1C372B4(touches);
    }
    v9[4] = UnityEngine_Transform__InverseTransformPoint(touches, v9[3], 0);
    v11 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    if ( v11->oldTouchCount == 2 )
    {
      v28 = GalleryFullScreenDragProcess__GetWorldPosition(v11->oldTouchPosition, v10);
      touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
      if ( !touches )
        goto LABEL_24;
      v29 = UnityEngine_Transform__InverseTransformPoint(touches, v28, 0);
      v12 = GalleryFullScreenDragProcess_TypeInfo;
      v13 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( !v13 )
        goto LABEL_24;
      y = v29.fields.y;
      v15 = v13[7].n64_f32[0] - v29.fields.z;
      v13[3].n64_u64[0] = vsub_f32(v13[6], *(float32x2_t *)&v29.fields.x).n64_u64[0];
      v13[4].n64_f32[0] = v15;
      v11 = v12->static_fields;
    }
    else
    {
      v11->isTouchScale = 0;
      v11->oldTouchCount = 2;
    }
    v11->oldTouchPosition.fields.x = (float)(position.fields.x + v5.fields.x) * 0.5;
    v11->oldTouchPosition.fields.y = (float)(position.fields.y + v5.fields.y) * 0.5;
    v16 = UnityEngine_Touch__get_position(&dest, 0);
    v17 = UnityEngine_Touch__get_position(&v24, 0);
    v18 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    v19 = (float)((float)(v16.fields.x - v17.fields.x) * (float)(v16.fields.x - v17.fields.x))
        + (float)((float)(v16.fields.y - v17.fields.y) * (float)(v16.fields.y - v17.fields.y));
    isTouchScale = v18->isTouchScale;
    v18->scaleSqrMagnitude = v19;
    if ( isTouchScale )
    {
      v21 = v18->touchInfo;
      baseTouchSqrMagnitude = v18->baseTouchSqrMagnitude;
      touches = (UnityEngine_Transform_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v18 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      }
      if ( v21 )
      {
        v21->fields.scaleDelta = (float)(sqrtf(v19 / baseTouchSqrMagnitude) * v18->baseTouchScale)
                               - v18->localScale.fields.x;
        return;
      }
      goto LABEL_24;
    }
    if ( v19 > 0.0 )
    {
      x = v18->localScale.fields.x;
      v18->isTouchScale = 1;
      v18->baseTouchScale = x;
      v18->baseTouchSqrMagnitude = v19;
    }
  }
}


void GalleryFullScreenDragProcess_PosInfo___ctor(
        GalleryFullScreenDragProcess_PosInfo_o *this,
        UnityEngine_GameObject_o *dragObject,
        GalleryFullScreenListViewObject_o *actionObject,
        UnityEngine_Vector2_o screenSize,
        const MethodInfo *method)
{
  float y; // s10
  float x; // s11
  UnityEngine_Transform_o *transform; // x0
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s12
  float m_Height; // s13
  const MethodInfo *v15; // x0
  const MethodInfo *v16; // x0
  const MethodInfo *v17; // x0
  const MethodInfo *v18; // x0
  UnityEngine_Vector2_o v19; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  y = screenSize.fields.y;
  x = screenSize.fields.x;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !actionObject )
    goto LABEL_9;
  m_XMin = actionObject->fields.dragObjectRect.fields.m_XMin;
  m_YMin = actionObject->fields.dragObjectRect.fields.m_YMin;
  m_Width = actionObject->fields.dragObjectRect.fields.m_Width;
  m_Height = actionObject->fields.dragObjectRect.fields.m_Height;
  if ( !byte_4C3C81A )
  {
    transform = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  this->fields.worldStartPos = GalleryFullScreenDragProcess__GetWorldPosition(
                                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                                 (const MethodInfo *)transform);
  v19.fields.x = x;
  v19.fields.y = y;
  this->fields.worldEndPos = GalleryFullScreenDragProcess__GetWorldPosition(v19, v15);
  if ( !dragObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !transform )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position(transform, 0);
  this->fields.worldCenterPos = position;
  this->fields.screenCenterPos = GalleryFullScreenDragProcess__GetScreenPosition(position, v16);
  transform = UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !transform
    || (v21.fields.z = 0.0,
        v21.fields.x = m_XMin,
        v21.fields.y = m_YMin,
        v22 = UnityEngine_Transform__TransformPoint(transform, v21, 0),
        this->fields.worldTopLeftPos = v22,
        this->fields.screenTopLeftPos = GalleryFullScreenDragProcess__GetScreenPosition(v22, v17),
        (transform = UnityEngine_GameObject__get_transform(dragObject, 0)) == 0) )
  {
LABEL_9:
    sub_1C372B4(transform);
  }
  v23.fields.y = m_YMin + m_Height;
  v23.fields.x = m_XMin + m_Width;
  v23.fields.z = 0.0;
  v24 = UnityEngine_Transform__TransformPoint(transform, v23, 0);
  this->fields.worldBottomRightPos = v24;
  this->fields.screenBottomRightPos = GalleryFullScreenDragProcess__GetScreenPosition(v24, v18);
}


void GalleryFullScreenDragProcess_TouchInfo___ctor(
        GalleryFullScreenDragProcess_TouchInfo_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x9
  float v7; // s1
  struct UnityEngine_Vector3_StaticFields *v8; // x8
  float v9; // s1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isTouchRelease = 0;
  this->fields.scaleDelta = 0.0;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.localDelta.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.localDelta.fields.z = z;
  v6 = v3->static_fields;
  v7 = v6->zeroVector.fields.z;
  *(_QWORD *)&this->fields.newWorldPos.fields.x = *(_QWORD *)&v6->zeroVector.fields.x;
  this->fields.newWorldPos.fields.z = v7;
  v8 = v3->static_fields;
  v9 = v8->zeroVector.fields.z;
  *(_QWORD *)&this->fields.newPos.fields.x = *(_QWORD *)&v8->zeroVector.fields.x;
  this->fields.newPos.fields.z = v9;
}