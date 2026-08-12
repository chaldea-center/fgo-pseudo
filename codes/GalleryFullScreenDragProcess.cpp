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
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = posInfo;
  if ( (byte_596B51F & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B51F = 1;
  }
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  if ( !touchInfo )
    sub_2213CDC(posInfo, method);
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
  result.fields.z = 0.0;
  result.fields.y = OffsetAddY;
  result.fields.x = OffsetAddX;
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
  float v7; // s3
  float v8; // s4
  float v9; // s1
  bool v10; // nf
  float v11; // s2
  float v12; // s3
  int v13; // w10
  int v14; // w11
  int v15; // w9
  bool v16; // cc
  float v17; // s0
  float v18; // s1
  float result; // s0

  x = localDelta.fields.x;
  v5 = isRecover;
  v6 = posInfo;
  if ( (byte_596B51D & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B51D = 1;
  }
  if ( !v6 )
    sub_2213CDC(posInfo, isRecover);
  v7 = v6->fields.screenCenterPos.fields.x;
  v8 = v6->fields.screenTopLeftPos.fields.x;
  v9 = GalleryFullScreenDragProcess_TypeInfo->static_fields->screenSize.fields.x;
  v10 = v7 < (float)(v9 * 0.5);
  v16 = v7 <= (float)(v9 * 0.5);
  v11 = v6->fields.screenBottomRightPos.fields.x;
  v12 = v11 - v8;
  v13 = !v16;
  v14 = v10;
  v15 = x > 0.0 || v5;
  v16 = (v15 & v13 | (x < 0.0 || v5) & v14) != 1 || v12 > v9;
  if ( !v16 )
  {
    v17 = (float)(v6->fields.worldStartPos.fields.x + v6->fields.worldEndPos.fields.x) * 0.5;
    v18 = v6->fields.worldCenterPos.fields.x;
    return v17 - v18;
  }
  if ( v8 > 0.0 && ((v15 ^ 1) & 1) == 0 && v12 > v9 )
  {
    v17 = v6->fields.worldStartPos.fields.x;
    v18 = v6->fields.worldTopLeftPos.fields.x;
    return v17 - v18;
  }
  result = 0.0;
  if ( (x < 0.0 || v5) && v11 < v9 && v12 > v9 )
  {
    v17 = v6->fields.worldEndPos.fields.x;
    v18 = v6->fields.worldBottomRightPos.fields.x;
    return v17 - v18;
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
  float v7; // s3
  float v8; // s4
  float v9; // s1
  bool v10; // nf
  bool v11; // cc
  float v12; // s2
  float v13; // s3
  int v14; // w10
  int v15; // w11
  int v16; // w9
  int v17; // w10
  float v19; // s0
  float v20; // s1
  float result; // s0

  y = localDelta.fields.y;
  v5 = isRecover;
  v6 = posInfo;
  if ( (byte_596B51E & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B51E = 1;
  }
  if ( !v6 )
    sub_2213CDC(posInfo, isRecover);
  v7 = v6->fields.screenCenterPos.fields.y;
  v8 = v6->fields.screenTopLeftPos.fields.y;
  v9 = GalleryFullScreenDragProcess_TypeInfo->static_fields->screenSize.fields.y;
  v10 = v7 < (float)(v9 * 0.5);
  v11 = v7 <= (float)(v9 * 0.5);
  v12 = v6->fields.screenBottomRightPos.fields.y;
  v13 = v12 - v8;
  v14 = !v11;
  v15 = v10;
  v16 = y > 0.0 || v5;
  v17 = v16 & v14 | (y < 0.0 || v5) & v15;
  if ( v13 <= v9 && v17 != 0 )
  {
    v19 = (float)(v6->fields.worldStartPos.fields.y + v6->fields.worldEndPos.fields.y) * 0.5;
    v20 = v6->fields.worldCenterPos.fields.y;
    return v19 - v20;
  }
  if ( v8 > 0.0 && ((v16 ^ 1) & 1) == 0 && v13 > v9 )
  {
    v19 = v6->fields.worldStartPos.fields.y;
    v20 = v6->fields.worldTopLeftPos.fields.y;
    return v19 - v20;
  }
  result = 0.0;
  if ( (y < 0.0 || v5) && v12 < v9 && v13 > v9 )
  {
    v19 = v6->fields.worldEndPos.fields.y;
    v20 = v6->fields.worldBottomRightPos.fields.y;
    return v19 - v20;
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
  if ( (byte_596B517 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B517 = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_2213CDC(0, v2);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  v9 = UnityEngine_Camera__WorldToScreenPoint_83198204(camera, v8, 0);
  result.fields.x = v9.fields.x;
  result.fields.y = v9.fields.y;
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
  if ( (byte_596B516 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B516 = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_2213CDC(0, v2);
  v6.fields.z = 0.0;
  v6.fields.x = x;
  v6.fields.y = y;
  return UnityEngine_Camera__ScreenToWorldPoint_83198228(camera, v6, 0);
}


void GalleryFullScreenDragProcess__Init(
        UnityEngine_Camera_o *camera,
        GalleryFullScreenListViewObject_o *actionObject,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_o *transform; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UnityEngine_GameObject_o *dragObject; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v26; // x0
  UnityEngine_Transform_o *parent; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v28; // x8
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  BalanceConfig_c *v35; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v36; // x8
  int v37; // w9
  struct BalanceConfig_StaticFields *v38; // x9
  UnityEngine_Transform_o *v39; // x19
  __int64 v40; // x2
  unsigned int localScale; // s0

  if ( (byte_596B513 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B513 = 1;
  }
  GalleryFullScreenDragProcess_TypeInfo->static_fields->camera = camera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GalleryFullScreenDragProcess_TypeInfo->static_fields,
    (int32_t)camera,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  static_fields->actionObject = actionObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->actionObject,
    (int32_t)actionObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !actionObject )
    goto LABEL_14;
  dragObject = actionObject->fields.dragObject;
  v26 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v26->dragObject = dragObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->dragObject, (int32_t)dragObject, v19, v20, v21, v22, v23, v24);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
  v28 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v28->parent = parent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->parent, (int32_t)parent, v29, v30, v31, v32, v33, v34);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v35 = BalanceConfig_TypeInfo;
  v36 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v37 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  LODWORD(v36->baseScale) = localScale;
  v36->isOldMousePosition = 0;
  v36->oldTouchCount = 0;
  v36->isTouchScale = 0;
  if ( !v37 )
  {
    j_il2cpp_runtime_class_init_0(v35, v18, v40);
    v35 = BalanceConfig_TypeInfo;
    v36 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  }
  v38 = v35->static_fields;
  transform = v36->dragObject;
  v36->defaultZoomRate = (float)v38->GalleryDefaultZoomRateMax;
  if ( !transform )
LABEL_14:
    sub_2213CDC(transform, v18);
  v39 = UnityEngine_GameObject__get_transform(transform, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  TransformHelper__SetLocalPosition(v39, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
}


void GalleryFullScreenDragProcess__NonTouch(bool isAbleToPinch, const MethodInfo *method)
{
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x9
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x8
  int32_t oldTouchCount; // w10
  _BOOL8 MouseButton; // x0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v7; // x19
  GalleryFullScreenDragProcess_c *v8; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v9; // x8
  UnityEngine_Vector3_o *v10; // x19
  const MethodInfo *v11; // x0
  GalleryFullScreenDragProcess_c *v12; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v13; // x8
  GalleryFullScreenDragProcess_c *v14; // x8
  float32x2_t *v15; // x9
  float v16; // s1
  int32_t height; // w0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v18; // x19
  float Axis; // s0
  UnityEngine_Transform_o *parent; // x0
  __int64 v21; // x1
  unsigned __int64 mousePosition; // kr00_8
  float32x2_t v23; // d0
  UnityEngine_Vector3_o WorldPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v25; // 0:kr20_12.12
  UnityEngine_Vector3_o v26; // 0:kr40_12.12
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B519 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    sub_2213A60(&StringLiteral_9548/*"Mouse ScrollWheel"*/);
    byte_596B519 = 1;
  }
  mousePosition = (unsigned __int64)UnityEngine_Input__get_mousePosition(0);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  touchInfo = static_fields->touchInfo;
  static_fields->isTouchScale = 0;
  if ( !touchInfo )
    goto LABEL_24;
  oldTouchCount = static_fields->oldTouchCount;
  static_fields->oldTouchCount = 0;
  touchInfo->fields.isTouchRelease = oldTouchCount > 0;
  if ( *(float *)&mousePosition >= 0.0
    && *(float *)&mousePosition <= (float)UnityEngine_Screen__get_width(0)
    && *((float *)&mousePosition + 1) >= 0.0 )
  {
    height = UnityEngine_Screen__get_height(0);
    if ( isAbleToPinch && *((float *)&mousePosition + 1) <= (float)height )
    {
      v18 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9548/*"Mouse ScrollWheel"*/, 0);
      if ( !v18 )
        goto LABEL_24;
      v18->fields.scaleDelta = Axis;
    }
  }
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
  if ( MouseButton
    || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0))
    || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0)) )
  {
    v7 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(
                      (UnityEngine_Vector2_o)mousePosition,
                      (const MethodInfo *)MouseButton);
    if ( v7 )
    {
      v8 = GalleryFullScreenDragProcess_TypeInfo;
      v7->fields.newWorldPos = WorldPosition;
      v9 = v8->static_fields;
      v10 = (UnityEngine_Vector3_o *)v9->touchInfo;
      if ( v10 )
      {
        parent = v9->parent;
        if ( parent )
        {
          v25 = UnityEngine_Transform__InverseTransformPoint(parent, v10[3], 0);
          v12 = GalleryFullScreenDragProcess_TypeInfo;
          v10[4] = v25;
          v13 = v12->static_fields;
          if ( !v13->isOldMousePosition )
          {
            v13->isOldMousePosition = 1;
            goto LABEL_22;
          }
          v27 = GalleryFullScreenDragProcess__GetWorldPosition(v13->oldMousePosition, v11);
          parent = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
          if ( parent )
          {
            v26 = UnityEngine_Transform__InverseTransformPoint(parent, v27, 0);
            v23.n64_u32[0] = LODWORD(v26.fields.x);
            v14 = GalleryFullScreenDragProcess_TypeInfo;
            v15 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
            if ( v15 )
            {
              v23.n64_u32[1] = LODWORD(v26.fields.y);
              v16 = v15[7].n64_f32[0] - v26.fields.z;
              v15[3].n64_u64[0] = vsub_f32(v15[6], v23).n64_u64[0];
              v15[4].n64_f32[0] = v16;
              v13 = v14->static_fields;
LABEL_22:
              v13->oldMousePosition = (struct UnityEngine_Vector2_o)mousePosition;
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_2213CDC(parent, v21);
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
  float v14; // s0
  float v15; // s1
  struct UnityEngine_Mathf_StaticFields *v16; // x8
  float v17; // s0
  System_Action_o *v18; // x0
  __int64 v19; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v20; // x8
  UnityEngine_GameObject_o *transform; // x0
  float scaleSqrMagnitude; // s1
  UnityEngine_Transform_o *v23; // x19
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v25; // x8
  float v26; // s8
  float y; // s9
  UnityEngine_GameObject_o *v28; // x19
  GalleryFullScreenListViewObject_o *actionObject; // x20
  GalleryFullScreenDragProcess_PosInfo_o *v30; // x0
  GalleryFullScreenDragProcess_PosInfo_o *v31; // x21
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  UnityEngine_Transform_o *v34; // x19
  unsigned int localScale; // s0
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o OffsetAddPos; // 0:kr20_12.12
  UnityEngine_Vector3_o position; // 0:kr34_12.12
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B515 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&GalleryFullScreenDragProcess_PosInfo_TypeInfo);
    byte_596B515 = 1;
  }
  dragObject = (UnityEngine_Object_o *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sameScale, notSameScale);
  v8 = UnityEngine_Object__op_Equality(dragObject, 0, 0);
  if ( !v8 )
  {
    GalleryFullScreenDragProcess__SetUp((const MethodInfo *)v8);
    GalleryFullScreenDragProcess__Touch(isAbleToPinch, v9);
    GalleryFullScreenDragProcess__Scale(v10);
    static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    x = static_fields->localScale.fields.x;
    baseScale = static_fields->baseScale;
    if ( !byte_5969AE4 )
    {
      sub_2213A60(&UnityEngine_Mathf_TypeInfo);
      byte_5969AE4 = 1;
    }
    v14 = fabsf(x);
    v15 = fabsf(baseScale);
    v16 = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v14 <= v15 )
      v14 = v15;
    v17 = v14 * 0.000001;
    if ( v17 <= (float)(v16->Epsilon * 8.0) )
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
          v26 = v25->screenSize.fields.x;
          y = v25->screenSize.fields.y;
          v28 = v25->dragObject;
          actionObject = v25->actionObject;
          v30 = (GalleryFullScreenDragProcess_PosInfo_o *)sub_2213CCC(GalleryFullScreenDragProcess_PosInfo_TypeInfo);
          v39.fields.x = v26;
          v39.fields.y = y;
          v31 = v30;
          GalleryFullScreenDragProcess_PosInfo___ctor(v30, v28, actionObject, v39, v32);
          OffsetAddPos = GalleryFullScreenDragProcess__GetOffsetAddPos(v31, v33);
          transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
          if ( transform )
          {
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
            if ( transform )
            {
              v34 = (UnityEngine_Transform_o *)transform;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
              v41.fields.x = OffsetAddPos.fields.x + position.fields.x;
              v41.fields.y = OffsetAddPos.fields.y + position.fields.y;
              v41.fields.z = OffsetAddPos.fields.z + position.fields.z;
              UnityEngine_Transform__set_position(v34, v41, 0);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(transform, v19);
  }
}


void GalleryFullScreenDragProcess__OneTouch(const MethodInfo *method)
{
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Transform_o *touches; // x0
  __int64 v3; // x1
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x20
  const MethodInfo *v5; // x0
  GalleryFullScreenDragProcess_c *v6; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v7; // x8
  UnityEngine_Vector3_o *v8; // x20
  const MethodInfo *v9; // x0
  GalleryFullScreenDragProcess_c *v10; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v11; // x8
  float32x2_t *v12; // x8
  float v13; // s1
  UnityEngine_Vector2_o v14; // kr40_8
  GalleryFullScreenDragProcess_c *v15; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v16; // x8
  float32x2_t v17; // d0
  UnityEngine_Touch_o v18; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o WorldPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v20; // 0:kr14_12.12
  UnityEngine_Vector3_o v21; // 0:kr34_12.12
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B51A & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B51A = 1;
  }
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  memset(&v18, 0, sizeof(v18));
  static_fields->isOldMousePosition = 0;
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_13;
  if ( !LODWORD(touches[1].klass) )
    sub_2213CE4(touches);
  memmove(&v18, &touches[1].monitor, 0x44u);
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  position = UnityEngine_Touch__get_position(&v18, 0);
  WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(position, v5);
  if ( !touchInfo )
    goto LABEL_13;
  v6 = GalleryFullScreenDragProcess_TypeInfo;
  touchInfo->fields.newWorldPos = WorldPosition;
  v7 = v6->static_fields;
  v8 = (UnityEngine_Vector3_o *)v7->touchInfo;
  if ( !v8 )
    goto LABEL_13;
  touches = v7->parent;
  if ( !touches )
    goto LABEL_13;
  v20 = UnityEngine_Transform__InverseTransformPoint(touches, v8[3], 0);
  v10 = GalleryFullScreenDragProcess_TypeInfo;
  v8[4] = v20;
  v11 = v10->static_fields;
  if ( v11->oldTouchCount == 1 )
  {
    v23 = GalleryFullScreenDragProcess__GetWorldPosition(v11->oldTouchPosition, v9);
    touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
    if ( touches )
    {
      v21 = UnityEngine_Transform__InverseTransformPoint(touches, v23, 0);
      v17.n64_u32[0] = LODWORD(v21.fields.x);
      v12 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( v12 )
      {
        v17.n64_u32[1] = LODWORD(v21.fields.y);
        v13 = v12[7].n64_f32[0] - v21.fields.z;
        v12[3].n64_u64[0] = vsub_f32(v12[6], v17).n64_u64[0];
        v12[4].n64_f32[0] = v13;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_2213CDC(touches, v3);
  }
LABEL_12:
  v14 = UnityEngine_Touch__get_position(&v18, 0);
  v15 = GalleryFullScreenDragProcess_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->oldTouchPosition = v14;
  v16 = v15->static_fields;
  v16->isTouchScale = 0;
  v16->oldTouchCount = 1;
}


void GalleryFullScreenDragProcess__Scale(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x9
  float ZoomRateMax; // s0
  struct GalleryFullScreenDragProcess_StaticFields *v5; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *v6; // x9
  float x; // s9
  float scaleDelta; // s2
  float baseScale; // s1
  float v10; // s8
  float v11; // s0
  float v12; // s1
  struct UnityEngine_Mathf_StaticFields *v13; // x8
  float v14; // s0
  struct GalleryFullScreenDragProcess_StaticFields *v15; // x8
  int oldTouchCount; // w9
  struct GalleryFullScreenDragProcess_TouchInfo_o *v17; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v18; // x9
  float32x2_t *v19; // x8
  float v20; // s8
  float32x2_t v21; // d9
  float32x2_t *v22; // x8
  unsigned __int64 v23; // d0
  float32x2_t v24; // d0
  UnityEngine_Vector3_o v25; // 0:kr00_12.12
  UnityEngine_Vector3_o v26; // 0:kr20_12.12
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B51C & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B51C = 1;
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
  x = v5->localScale.fields.x;
  scaleDelta = v6->fields.scaleDelta;
  baseScale = v5->baseScale;
  v10 = x + scaleDelta;
  if ( scaleDelta < 0.0 && v10 < baseScale || scaleDelta > 0.0 && (baseScale = ZoomRateMax * baseScale, v10 > baseScale) )
  {
    v10 = baseScale;
    v5->isTouchScaleRebase = 1;
  }
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v11 = fabsf(x);
  v12 = fabsf(v10);
  v13 = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v11 <= v12 )
    v11 = v12;
  v14 = v11 * 0.000001;
  if ( v14 <= (float)(v13->Epsilon * 8.0) )
    v14 = v13->Epsilon * 8.0;
  if ( vabds_f32(v10, x) >= v14 )
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
            v25 = UnityEngine_Transform__InverseTransformPoint(
                    (UnityEngine_Transform_o *)method,
                    v17->fields.newWorldPos,
                    0);
            method = (const MethodInfo *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
            if ( method )
            {
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
                    v27 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)method, v25, 0);
                    v18 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
                    v19 = (float32x2_t *)v18->touchInfo;
                    if ( v19 )
                    {
                      method = (const MethodInfo *)v18->parent;
                      if ( method )
                      {
                        v20 = v19[7].n64_f32[0];
                        v21.n64_u64[0] = v19[6].n64_u64[0];
                        v26 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)method, v27, 0);
                        v24.n64_u32[0] = LODWORD(v26.fields.x);
                        v22 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
                        if ( v22 )
                        {
                          v24.n64_u32[1] = LODWORD(v26.fields.y);
                          v23 = vadd_f32(vsub_f32(v21, v24), v22[3]).n64_u64[0];
                          v22[4].n64_f32[0] = (float)(v20 - v26.fields.z) + v22[4].n64_f32[0];
                          v22[3].n64_u64[0] = v23;
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
    sub_2213CDC(method, v1);
  }
}


void GalleryFullScreenDragProcess__SetUp(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  GalleryFullScreenDragProcess_c *v3; // x8
  GalleryFullScreenDragProcess_TouchInfo_c *v4; // x0
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  GalleryFullScreenDragProcess_TouchInfo_o *v6; // x19
  const MethodInfo *v7; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t height; // w0
  struct GalleryFullScreenDragProcess_StaticFields *v16; // x8
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_596B514 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    sub_2213A60(&GalleryFullScreenDragProcess_TouchInfo_TypeInfo);
    byte_596B514 = 1;
  }
  dragObject = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0)) == 0 )
  {
    sub_2213CDC(dragObject, v1);
  }
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0);
  v3 = GalleryFullScreenDragProcess_TypeInfo;
  v4 = GalleryFullScreenDragProcess_TouchInfo_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale = localScale;
  static_fields = v3->static_fields;
  static_fields->isTouchScaleRebase = 0;
  static_fields->scaleSqrMagnitude = 0.0;
  v6 = (GalleryFullScreenDragProcess_TouchInfo_o *)sub_2213CCC(v4);
  GalleryFullScreenDragProcess_TouchInfo___ctor(v6, v7);
  v8 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v8->touchInfo = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->touchInfo, (int32_t)v6, v9, v10, v11, v12, v13, v14);
  LODWORD(v6) = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v16 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v16->screenSize.fields.x = (float)(int)v6;
  v16->screenSize.fields.y = (float)height;
}


void GalleryFullScreenDragProcess__Touch(bool isAbleToPinch, const MethodInfo *method)
{
  const MethodInfo *touchCount; // x0
  const MethodInfo *v4; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x9
  int32_t oldTouchCount; // w10

  if ( (byte_596B518 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    byte_596B518 = 1;
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
      sub_2213CDC(touchCount, v4);
    oldTouchCount = static_fields->oldTouchCount;
    static_fields->oldTouchCount = 0;
    static_fields->isTouchScale = 0;
    touchInfo->fields.isTouchRelease = oldTouchCount > 0;
  }
  else
  {
    GalleryFullScreenDragProcess__NonTouch(isAbleToPinch, v4);
  }
}


void GalleryFullScreenDragProcess__TwoTouch(bool isAbleToPinch, const MethodInfo *method)
{
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Transform_o *touches; // x0
  __int64 v5; // x1
  UnityEngine_Vector2_o position; // kr40_8
  UnityEngine_Vector2_o v7; // kr48_8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x19
  const MethodInfo *v9; // x0
  GalleryFullScreenDragProcess_c *v10; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v11; // x8
  UnityEngine_Vector3_o *v12; // x19
  const MethodInfo *v13; // x0
  GalleryFullScreenDragProcess_c *v14; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v15; // x8
  GalleryFullScreenDragProcess_c *v16; // x8
  float32x2_t *v17; // x9
  float v18; // s1
  UnityEngine_Vector2_o v19; // kr50_8
  UnityEngine_Vector2_o v20; // x2
  UnityEngine_Vector2_o v21; // kr58_8
  struct GalleryFullScreenDragProcess_StaticFields *v22; // x8
  _BOOL4 isTouchScale; // w9
  float v24; // s8
  struct GalleryFullScreenDragProcess_TouchInfo_o *v25; // x19
  float baseTouchSqrMagnitude; // s9
  float x; // s0
  float32x2_t v28; // d0
  UnityEngine_Touch_o v29; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector3_o WorldPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v32; // 0:kr14_12.12
  UnityEngine_Vector3_o v33; // 0:kr34_12.12
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B51B & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenDragProcess_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_596B51B = 1;
  }
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  memset(&v29, 0, sizeof(v29));
  memset(&dest, 0, sizeof(dest));
  static_fields->isOldMousePosition = 0;
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
    if ( ((__int64)touches[1].klass & 0xFFFFFFFE) == 0 )
LABEL_25:
      sub_2213CE4(touches);
    memmove(&v29, (char *)&touches[4].klass + 4, 0x44u);
    position = UnityEngine_Touch__get_position(&dest, 0);
    v7 = UnityEngine_Touch__get_position(&v29, 0);
    touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    v34.fields.x = (float)(position.fields.x + v7.fields.x) * 0.5;
    v34.fields.y = (float)(position.fields.y + v7.fields.y) * 0.5;
    WorldPosition = GalleryFullScreenDragProcess__GetWorldPosition(v34, v9);
    if ( !touchInfo
      || (v10 = GalleryFullScreenDragProcess_TypeInfo,
          touchInfo->fields.newWorldPos = WorldPosition,
          v11 = v10->static_fields,
          (v12 = (UnityEngine_Vector3_o *)v11->touchInfo) == 0)
      || (touches = v11->parent) == 0 )
    {
LABEL_24:
      sub_2213CDC(touches, v5);
    }
    v32 = UnityEngine_Transform__InverseTransformPoint(touches, v12[3], 0);
    v14 = GalleryFullScreenDragProcess_TypeInfo;
    v12[4] = v32;
    v15 = v14->static_fields;
    if ( v15->oldTouchCount == 2 )
    {
      v35 = GalleryFullScreenDragProcess__GetWorldPosition(v15->oldTouchPosition, v13);
      touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
      if ( !touches )
        goto LABEL_24;
      v33 = UnityEngine_Transform__InverseTransformPoint(touches, v35, 0);
      v28.n64_u32[0] = LODWORD(v33.fields.x);
      v16 = GalleryFullScreenDragProcess_TypeInfo;
      v17 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( !v17 )
        goto LABEL_24;
      v28.n64_u32[1] = LODWORD(v33.fields.y);
      v18 = v17[7].n64_f32[0] - v33.fields.z;
      v17[3].n64_u64[0] = vsub_f32(v17[6], v28).n64_u64[0];
      v17[4].n64_f32[0] = v18;
      v15 = v16->static_fields;
    }
    else
    {
      v15->isTouchScale = 0;
      v15->oldTouchCount = 2;
    }
    v15->oldTouchPosition.fields.x = (float)(position.fields.x + v7.fields.x) * 0.5;
    v15->oldTouchPosition.fields.y = (float)(position.fields.y + v7.fields.y) * 0.5;
    v19 = UnityEngine_Touch__get_position(&dest, 0);
    v21 = UnityEngine_Touch__get_position(&v29, 0);
    v22 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    isTouchScale = v22->isTouchScale;
    v24 = (float)((float)(v19.fields.x - v21.fields.x) * (float)(v19.fields.x - v21.fields.x))
        + (float)((float)(v19.fields.y - v21.fields.y) * (float)(v19.fields.y - v21.fields.y));
    v22->scaleSqrMagnitude = v24;
    if ( isTouchScale )
    {
      v25 = v22->touchInfo;
      baseTouchSqrMagnitude = v22->baseTouchSqrMagnitude;
      touches = (UnityEngine_Transform_o *)System_Math_TypeInfo;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(System_Math_TypeInfo, v5, v20);
      if ( v25 )
      {
        v25->fields.scaleDelta = (float)(sqrtf(v24 / baseTouchSqrMagnitude)
                                       * GalleryFullScreenDragProcess_TypeInfo->static_fields->baseTouchScale)
                               - GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale.fields.x;
        return;
      }
      goto LABEL_24;
    }
    if ( v24 > 0.0 )
    {
      x = v22->localScale.fields.x;
      v22->isTouchScale = 1;
      v22->baseTouchScale = x;
      v22->baseTouchSqrMagnitude = v24;
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
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
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
  if ( !byte_59699C0 )
  {
    transform = (MethodInfo *)sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
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
    || (v21.fields.z = 0.0,
        v21.fields.x = m_XMin,
        v21.fields.y = m_YMin,
        v24 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v21, 0),
        this->fields.worldTopLeftPos = v24,
        this->fields.screenTopLeftPos = GalleryFullScreenDragProcess__GetScreenPosition(v24, v18),
        (transform = (MethodInfo *)UnityEngine_GameObject__get_transform(dragObject, 0)) == 0) )
  {
LABEL_9:
    sub_2213CDC(transform, v11);
  }
  v22.fields.y = m_YMin + m_Height;
  v22.fields.x = m_XMin + m_Width;
  v22.fields.z = 0.0;
  v25 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v22, 0);
  this->fields.worldBottomRightPos = v25;
  this->fields.screenBottomRightPos = GalleryFullScreenDragProcess__GetScreenPosition(v25, v19);
}


void GalleryFullScreenDragProcess_TouchInfo___ctor(
        GalleryFullScreenDragProcess_TouchInfo_o *this,
        const MethodInfo *method)
{
  int v3; // w8
  UnityEngine_Vector3_c *v4; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v7; // x9
  float v8; // s1
  struct UnityEngine_Vector3_StaticFields *v9; // x8
  float v10; // s1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.isTouchRelease = 0;
  v3 = (unsigned __int8)byte_5969AE0;
  this->fields.scaleDelta = 0.0;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v4 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.localDelta.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.localDelta.fields.z = z;
  v7 = v4->static_fields;
  v8 = v7->zeroVector.fields.z;
  *(_QWORD *)&this->fields.newWorldPos.fields.x = *(_QWORD *)&v7->zeroVector.fields.x;
  this->fields.newWorldPos.fields.z = v8;
  v9 = v4->static_fields;
  v10 = v9->zeroVector.fields.z;
  *(_QWORD *)&this->fields.newPos.fields.x = *(_QWORD *)&v9->zeroVector.fields.x;
  this->fields.newPos.fields.z = v10;
}