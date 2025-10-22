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
  if ( (byte_4C51D08 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51D08 = 1;
  }
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  if ( !touchInfo )
    sub_1C3E7C0(posInfo, method);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C51D06 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51D06 = 1;
  }
  if ( !v6 )
    sub_1C3E7C0(posInfo, isRecover);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C51D07 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51D07 = 1;
  }
  if ( !v6 )
    sub_1C3E7C0(posInfo, isRecover);
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
  __int64 v2; // x1
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Camera_o *camera; // x0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4C51D00 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51D00 = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_1C3E7C0(0, v2);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  v9 = UnityEngine_Camera__WorldToScreenPoint_71147832(camera, v8, 0);
  result.fields.y = v9.fields.y;
  result.fields.x = v9.fields.x;
  return result;
}


UnityEngine_Vector3_o GalleryFullScreenDragProcess__GetWorldPosition(
        UnityEngine_Vector2_o screenPos,
        const MethodInfo *method)
{
  __int64 v2; // x1
  float y; // s8
  float x; // s9
  UnityEngine_Camera_o *camera; // x0
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4C51CFF & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51CFF = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_1C3E7C0(0, v2);
  v6.fields.z = 0.0;
  v6.fields.x = x;
  v6.fields.y = y;
  return UnityEngine_Camera__ScreenToWorldPoint_71147856(camera, v6, 0);
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_GameObject_o *dragObject; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v14; // x0
  UnityEngine_Transform_o *parent; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  unsigned int localScale; // s0
  struct GalleryFullScreenDragProcess_StaticFields *v20; // x8
  BalanceConfig_c *v21; // x0
  struct BalanceConfig_StaticFields *v22; // x9
  UnityEngine_Transform_o *v23; // x19

  if ( (byte_4C51CFC & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51CFC = 1;
  }
  GalleryFullScreenDragProcess_TypeInfo->static_fields->camera = camera;
  sub_1C3E508(
    (CGThumbnailListItem_o *)GalleryFullScreenDragProcess_TypeInfo->static_fields,
    (int32_t)camera,
    (int32_t)method,
    v3);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  static_fields->actionObject = actionObject;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->actionObject, (int32_t)actionObject, v7, v8);
  if ( !actionObject )
    goto LABEL_14;
  dragObject = actionObject->fields.dragObject;
  v14 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v14->dragObject = dragObject;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->dragObject, (int32_t)dragObject, v11, v12);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
  v16 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v16->parent = parent;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->parent, (int32_t)parent, v17, v18);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v20 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  LODWORD(v20->baseScale) = localScale;
  v20->isOldMousePosition = 0;
  v20->oldTouchCount = 0;
  v20->isTouchScale = 0;
  v21 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
    v20 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  }
  v22 = v21->static_fields;
  transform = v20->dragObject;
  v20->defaultZoomRate = (float)v22->GalleryDefaultZoomRateMax;
  if ( !transform )
LABEL_14:
    sub_1C3E7C0(transform, v10);
  v23 = UnityEngine_GameObject__get_transform(transform, 0);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  TransformHelper__SetLocalPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenDragProcess__NonTouch(bool isAbleToPinch, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  UnityEngine_Transform_o *parent; // x0
  __int64 v4; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x9
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x10
  float x; // s8
  float y; // s9
  _BOOL4 v9; // w8
  int32_t width; // w0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v11; // x19
  float Axis; // s0
  _BOOL8 MouseButton; // x0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v14; // x19
  struct GalleryFullScreenDragProcess_StaticFields *v15; // x8
  UnityEngine_Vector3_o *v16; // x19
  const MethodInfo *v17; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v18; // x8
  GalleryFullScreenDragProcess_c *v19; // x8
  float32x2_t *v20; // x9
  float v21; // v0.s[1]
  float v22; // s1
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v2 = isAbleToPinch;
  if ( (byte_4C51D02 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C3E564(&StringLiteral_9167/*"Mouse ScrollWheel"*/);
    byte_4C51D02 = 1;
  }
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  touchInfo = static_fields->touchInfo;
  static_fields->isTouchScale = 0;
  if ( !touchInfo )
    goto LABEL_24;
  x = mousePosition.fields.x;
  y = mousePosition.fields.y;
  v9 = 0;
  touchInfo->fields.isTouchRelease = static_fields->oldTouchCount > 0;
  static_fields->oldTouchCount = 0;
  if ( mousePosition.fields.x >= 0.0 )
  {
    width = UnityEngine_Screen__get_width(0);
    v9 = 0;
    if ( y >= 0.0 && x <= (float)width )
      v9 = y <= (float)UnityEngine_Screen__get_height(0);
  }
  if ( v2 && v9 )
  {
    v11 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9167/*"Mouse ScrollWheel"*/, 0);
    if ( !v11 )
      goto LABEL_24;
    v11->fields.scaleDelta = Axis;
  }
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
  if ( MouseButton
    || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0))
    || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0)) )
  {
    v23.fields.x = x;
    v23.fields.y = y;
    v14 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(v23, (const MethodInfo *)MouseButton);
    if ( v14 )
    {
      v14->fields.newWorldPos = WorldPosition;
      v15 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      v16 = (UnityEngine_Vector3_o *)v15->touchInfo;
      if ( v16 )
      {
        parent = v15->parent;
        if ( parent )
        {
          v16[4] = UnityEngine_Transform__InverseTransformPoint(parent, v16[3], 0);
          v18 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
          if ( !v18->isOldMousePosition )
          {
            v18->isOldMousePosition = 1;
            goto LABEL_22;
          }
          v26 = GalleryFullScreenDragProcess__GetWorldPosition(v18->oldMousePosition, v17);
          parent = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
          if ( parent )
          {
            v27 = UnityEngine_Transform__InverseTransformPoint(parent, v26, 0);
            v19 = GalleryFullScreenDragProcess_TypeInfo;
            v20 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
            if ( v20 )
            {
              v21 = v27.fields.y;
              v22 = v20[7].n64_f32[0] - v27.fields.z;
              v20[3].n64_u64[0] = vsub_f32(v20[6], *(float32x2_t *)&v27.fields.x).n64_u64[0];
              v20[4].n64_f32[0] = v22;
              v18 = v19->static_fields;
LABEL_22:
              v18->oldMousePosition.fields.x = x;
              v18->oldMousePosition.fields.y = y;
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C3E7C0(parent, v4);
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
  __int64 v19; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v20; // x8
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localScale; // s0
  float scaleSqrMagnitude; // s1
  UnityEngine_Transform_o *v24; // x19
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v26; // x8
  UnityEngine_GameObject_o *v27; // x19
  GalleryFullScreenListViewObject_o *actionObject; // x20
  float v29; // s8
  float y; // s9
  GalleryFullScreenDragProcess_PosInfo_o *v31; // x0
  GalleryFullScreenDragProcess_PosInfo_o *v32; // x21
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  float v35; // s8
  float v36; // s9
  float z; // s10
  UnityEngine_Transform_o *v38; // x19
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o OffsetAddPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C51CFE & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&GalleryFullScreenDragProcess_PosInfo_TypeInfo);
    byte_4C51CFE = 1;
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
    if ( !byte_4C506A5 )
    {
      sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
      byte_4C506A5 = 1;
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
    v20 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    if ( v20->isTouchScaleRebase && v20->isTouchScale && v20->scaleSqrMagnitude > 0.0 )
    {
      transform = v20->dragObject;
      if ( !transform )
        goto LABEL_27;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_27;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      v20 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      scaleSqrMagnitude = v20->scaleSqrMagnitude;
      LODWORD(v20->baseTouchScale) = localScale;
      v20->baseTouchSqrMagnitude = scaleSqrMagnitude;
    }
    transform = v20->dragObject;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( transform )
      {
        v24 = (UnityEngine_Transform_o *)transform;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
        touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
        if ( touchInfo )
        {
          v41.fields.x = localPosition.fields.x + touchInfo->fields.localDelta.fields.x;
          v41.fields.y = localPosition.fields.y + touchInfo->fields.localDelta.fields.y;
          v41.fields.z = localPosition.fields.z + touchInfo->fields.localDelta.fields.z;
          UnityEngine_Transform__set_localPosition(v24, v41, 0);
          v26 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
          v27 = v26->dragObject;
          actionObject = v26->actionObject;
          v29 = v26->screenSize.fields.x;
          y = v26->screenSize.fields.y;
          v31 = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1C3E7B0(GalleryFullScreenDragProcess_PosInfo_TypeInfo);
          v39.fields.x = v29;
          v39.fields.y = y;
          v32 = v31;
          GalleryFullScreenDragProcess_PosInfo___ctor(v31, v27, actionObject, v39, v33);
          OffsetAddPos = GalleryFullScreenDragProcess__GetOffsetAddPos(v32, v34);
          transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
          if ( transform )
          {
            v35 = OffsetAddPos.fields.x;
            v36 = OffsetAddPos.fields.y;
            z = OffsetAddPos.fields.z;
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( transform )
            {
              v38 = (UnityEngine_Transform_o *)transform;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
              position.fields.x = v35 + position.fields.x;
              position.fields.y = v36 + position.fields.y;
              position.fields.z = z + position.fields.z;
              UnityEngine_Transform__set_position(v38, position, 0);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C3E7C0(transform, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenDragProcess__OneTouch(const MethodInfo *method)
{
  UnityEngine_Transform_o *touches; // x0
  __int64 v2; // x1
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x20
  const MethodInfo *v4; // x0
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o *v6; // x20
  const MethodInfo *v7; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v8; // x8
  float32x2_t *v9; // x8
  float y; // v0.s[1]
  float v11; // s1
  UnityEngine_Vector2_o v12; // kr00_8
  GalleryFullScreenDragProcess_c *v13; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v14; // x8
  UnityEngine_Touch_o v15; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C51D03 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51D03 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  GalleryFullScreenDragProcess_TypeInfo->static_fields->isOldMousePosition = 0;
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_13;
  if ( !LODWORD(touches[1].klass) )
    sub_1C3E7C8(touches, v2);
  memmove(&v15, &touches[1].monitor, 0x44u);
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  position = UnityEngine_Touch__get_position(&v15, 0);
  WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(position, v4);
  if ( !touchInfo )
    goto LABEL_13;
  touchInfo->fields.newWorldPos = WorldPosition;
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v6 = (UnityEngine_Vector3_o *)static_fields->touchInfo;
  if ( !v6 )
    goto LABEL_13;
  touches = static_fields->parent;
  if ( !touches )
    goto LABEL_13;
  v6[4] = UnityEngine_Transform__InverseTransformPoint(touches, v6[3], 0);
  v8 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  if ( v8->oldTouchCount == 1 )
  {
    v18 = GalleryFullScreenDragProcess__GetWorldPosition(v8->oldTouchPosition, v7);
    touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
    if ( touches )
    {
      v19 = UnityEngine_Transform__InverseTransformPoint(touches, v18, 0);
      v9 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( v9 )
      {
        y = v19.fields.y;
        v11 = v9[7].n64_f32[0] - v19.fields.z;
        v9[3].n64_u64[0] = vsub_f32(v9[6], *(float32x2_t *)&v19.fields.x).n64_u64[0];
        v9[4].n64_f32[0] = v11;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1C3E7C0(touches, v2);
  }
LABEL_12:
  v12 = UnityEngine_Touch__get_position(&v15, 0);
  v13 = GalleryFullScreenDragProcess_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->oldTouchPosition = v12;
  v14 = v13->static_fields;
  v14->isTouchScale = 0;
  v14->oldTouchCount = 1;
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

  if ( (byte_4C51D05 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51D05 = 1;
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
  if ( !byte_4C506A5 )
  {
    sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
    byte_4C506A5 = 1;
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
    sub_1C3E7C0(method, v1);
  }
}


void GalleryFullScreenDragProcess__SetUp(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  GalleryFullScreenDragProcess_c *v3; // x8
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  GalleryFullScreenDragProcess_TouchInfo_o *v5; // x19
  const MethodInfo *v6; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t height; // w0
  struct GalleryFullScreenDragProcess_StaticFields *v11; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C51CFD & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C3E564(&GalleryFullScreenDragProcess_TouchInfo_TypeInfo);
    byte_4C51CFD = 1;
  }
  dragObject = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0)) == 0 )
  {
    sub_1C3E7C0(dragObject, v1);
  }
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0);
  v3 = GalleryFullScreenDragProcess_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale = localScale;
  static_fields = v3->static_fields;
  static_fields->isTouchScaleRebase = 0;
  static_fields->scaleSqrMagnitude = 0.0;
  v5 = (GalleryFullScreenDragProcess_TouchInfo_o *)sub_1C3E7B0(GalleryFullScreenDragProcess_TouchInfo_TypeInfo);
  GalleryFullScreenDragProcess_TouchInfo___ctor(v5, v6);
  v7 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v7->touchInfo = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&v7->touchInfo, (int32_t)v5, v8, v9);
  LODWORD(v5) = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v11 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v11->screenSize.fields.x = (float)(int)v5;
  v11->screenSize.fields.y = (float)height;
}


void GalleryFullScreenDragProcess__Touch(bool isAbleToPinch, const MethodInfo *method)
{
  const MethodInfo *touchCount; // x0
  const MethodInfo *v4; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x9

  if ( (byte_4C51D01 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    byte_4C51D01 = 1;
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
      sub_1C3E7C0(touchCount, v4);
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
  __int64 v4; // x1
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x19
  const MethodInfo *v8; // x0
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o *v10; // x19
  const MethodInfo *v11; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v12; // x8
  GalleryFullScreenDragProcess_c *v13; // x8
  float32x2_t *v14; // x9
  float y; // v0.s[1]
  float v16; // s1
  UnityEngine_Vector2_o v17; // kr10_8
  UnityEngine_Vector2_o v18; // kr18_8
  struct GalleryFullScreenDragProcess_StaticFields *v19; // x8
  float v20; // s8
  _BOOL4 isTouchScale; // w9
  struct GalleryFullScreenDragProcess_TouchInfo_o *v22; // x19
  float baseTouchSqrMagnitude; // s9
  float x; // s0
  UnityEngine_Touch_o v25; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C51D04 & 1) == 0 )
  {
    sub_1C3E564(&GalleryFullScreenDragProcess_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C51D04 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v25, 0, sizeof(v25));
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
      sub_1C3E7C8(touches, v4);
    memmove(&v25, (char *)&touches[4].klass + 4, 0x44u);
    position = UnityEngine_Touch__get_position(&dest, 0);
    v6 = UnityEngine_Touch__get_position(&v25, 0);
    v27.fields.x = (float)(position.fields.x + v6.fields.x) * 0.5;
    touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    v27.fields.y = (float)(position.fields.y + v6.fields.y) * 0.5;
    WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(v27, v8);
    if ( !touchInfo
      || (touchInfo->fields.newWorldPos = WorldPosition,
          static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields,
          (v10 = (UnityEngine_Vector3_o *)static_fields->touchInfo) == 0)
      || (touches = static_fields->parent) == 0 )
    {
LABEL_24:
      sub_1C3E7C0(touches, v4);
    }
    v10[4] = UnityEngine_Transform__InverseTransformPoint(touches, v10[3], 0);
    v12 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    if ( v12->oldTouchCount == 2 )
    {
      v29 = GalleryFullScreenDragProcess__GetWorldPosition(v12->oldTouchPosition, v11);
      touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
      if ( !touches )
        goto LABEL_24;
      v30 = UnityEngine_Transform__InverseTransformPoint(touches, v29, 0);
      v13 = GalleryFullScreenDragProcess_TypeInfo;
      v14 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( !v14 )
        goto LABEL_24;
      y = v30.fields.y;
      v16 = v14[7].n64_f32[0] - v30.fields.z;
      v14[3].n64_u64[0] = vsub_f32(v14[6], *(float32x2_t *)&v30.fields.x).n64_u64[0];
      v14[4].n64_f32[0] = v16;
      v12 = v13->static_fields;
    }
    else
    {
      v12->isTouchScale = 0;
      v12->oldTouchCount = 2;
    }
    v12->oldTouchPosition.fields.x = (float)(position.fields.x + v6.fields.x) * 0.5;
    v12->oldTouchPosition.fields.y = (float)(position.fields.y + v6.fields.y) * 0.5;
    v17 = UnityEngine_Touch__get_position(&dest, 0);
    v18 = UnityEngine_Touch__get_position(&v25, 0);
    v19 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    v20 = (float)((float)(v17.fields.x - v18.fields.x) * (float)(v17.fields.x - v18.fields.x))
        + (float)((float)(v17.fields.y - v18.fields.y) * (float)(v17.fields.y - v18.fields.y));
    isTouchScale = v19->isTouchScale;
    v19->scaleSqrMagnitude = v20;
    if ( isTouchScale )
    {
      v22 = v19->touchInfo;
      baseTouchSqrMagnitude = v19->baseTouchSqrMagnitude;
      touches = (UnityEngine_Transform_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v19 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      }
      if ( v22 )
      {
        v22->fields.scaleDelta = (float)(sqrtf(v20 / baseTouchSqrMagnitude) * v19->baseTouchScale)
                               - v19->localScale.fields.x;
        return;
      }
      goto LABEL_24;
    }
    if ( v20 > 0.0 )
    {
      x = v19->localScale.fields.x;
      v19->isTouchScale = 1;
      v19->baseTouchScale = x;
      v19->baseTouchSqrMagnitude = v20;
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
  MethodInfo *transform; // x0
  __int64 v11; // x1
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s12
  float m_Height; // s13
  const MethodInfo *v16; // x0
  const MethodInfo *v17; // x0
  const MethodInfo *v18; // x0
  const MethodInfo *v19; // x0
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  y = screenSize.fields.y;
  x = screenSize.fields.x;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !actionObject )
    goto LABEL_9;
  m_XMin = actionObject->fields.dragObjectRect.fields.m_XMin;
  m_YMin = actionObject->fields.dragObjectRect.fields.m_YMin;
  m_Width = actionObject->fields.dragObjectRect.fields.m_Width;
  m_Height = actionObject->fields.dragObjectRect.fields.m_Height;
  if ( !byte_4C5059A )
  {
    transform = (MethodInfo *)sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
  }
  this->fields.worldStartPos = GalleryFullScreenDragProcess__GetWorldPosition(
                                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                                 transform);
  v20.fields.x = x;
  v20.fields.y = y;
  this->fields.worldEndPos = GalleryFullScreenDragProcess__GetWorldPosition(v20, v16);
  if ( !dragObject )
    goto LABEL_9;
  transform = (MethodInfo *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !transform )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
  this->fields.worldCenterPos = position;
  this->fields.screenCenterPos = GalleryFullScreenDragProcess__GetScreenPosition(position, v17);
  transform = (MethodInfo *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !transform
    || (v22.fields.z = 0.0,
        v22.fields.x = m_XMin,
        v22.fields.y = m_YMin,
        v23 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v22, 0),
        this->fields.worldTopLeftPos = v23,
        this->fields.screenTopLeftPos = GalleryFullScreenDragProcess__GetScreenPosition(v23, v18),
        (transform = (MethodInfo *)UnityEngine_GameObject__get_transform(dragObject, 0)) == 0) )
  {
LABEL_9:
    sub_1C3E7C0(transform, v11);
  }
  v24.fields.y = m_YMin + m_Height;
  v24.fields.x = m_XMin + m_Width;
  v24.fields.z = 0.0;
  v25 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v24, 0);
  this->fields.worldBottomRightPos = v25;
  this->fields.screenBottomRightPos = GalleryFullScreenDragProcess__GetScreenPosition(v25, v19);
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
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
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