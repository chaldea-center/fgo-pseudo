UnityEngine_Vector3_o __fastcall GalleryFullScreenDragProcess__GetOffsetAddPos(
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
  if ( (byte_4A495D7 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, method);
    byte_4A495D7 = 1;
  }
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  if ( !touchInfo )
    sub_1B86614(posInfo, method);
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
float __fastcall GalleryFullScreenDragProcess__GetOffsetAddX(
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
  if ( (byte_4A495D5 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, isRecover);
    byte_4A495D5 = 1;
  }
  if ( !v6 )
    sub_1B86614(posInfo, isRecover);
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
float __fastcall GalleryFullScreenDragProcess__GetOffsetAddY(
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
  if ( (byte_4A495D6 & 1) == 0 )
  {
    posInfo = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, isRecover);
    byte_4A495D6 = 1;
  }
  if ( !v6 )
    sub_1B86614(posInfo, isRecover);
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall GalleryFullScreenDragProcess__GetScreenPosition(
        UnityEngine_Vector3_o worldPos,
        const MethodInfo *method)
{
  __int64 v2; // x1
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Camera_o *camera; // x0
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4A495CF & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, v2);
    byte_4A495CF = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_1B86614(0LL, v2);
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Camera__WorldToScreenPoint_69162180(camera, v10, 0LL);
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall GalleryFullScreenDragProcess__GetWorldPosition(
        UnityEngine_Vector2_o screenPos,
        const MethodInfo *method)
{
  __int64 v2; // x1
  float y; // s8
  float x; // s9
  UnityEngine_Camera_o *camera; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  if ( (byte_4A495CE & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, v2);
    byte_4A495CE = 1;
  }
  camera = GalleryFullScreenDragProcess_TypeInfo->static_fields->camera;
  if ( !camera )
    sub_1B86614(0LL, v2);
  v9.fields.z = 0.0;
  v9.fields.x = x;
  v9.fields.y = y;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Camera__ScreenToWorldPoint_69162204(camera, v9, 0LL);
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void __fastcall GalleryFullScreenDragProcess__Init(
        UnityEngine_Camera_o *camera,
        GalleryFullScreenListViewObject_o *actionObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_GameObject_o *dragObject; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v15; // x0
  UnityEngine_Transform_o *parent; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned int localScale; // s0
  struct GalleryFullScreenDragProcess_StaticFields *v21; // x8
  BalanceConfig_c *v22; // x0
  struct BalanceConfig_StaticFields *v23; // x9
  __int64 v24; // x1
  UnityEngine_Transform_o *v25; // x19

  if ( (byte_4A495CB & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, actionObject);
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, v6);
    byte_4A495CB = 1;
  }
  GalleryFullScreenDragProcess_TypeInfo->static_fields->camera = camera;
  sub_1B8635C(
    (CGThumbnailListItem_o *)GalleryFullScreenDragProcess_TypeInfo->static_fields,
    (int32_t)camera,
    (int32_t)method,
    v3);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  static_fields->actionObject = actionObject;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->actionObject, (int32_t)actionObject, v8, v9);
  if ( !actionObject )
    goto LABEL_14;
  dragObject = actionObject->fields.dragObject;
  v15 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v15->dragObject = dragObject;
  sub_1B8635C((CGThumbnailListItem_o *)&v15->dragObject, (int32_t)dragObject, v12, v13);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_14;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
  v17 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v17->parent = parent;
  sub_1B8635C((CGThumbnailListItem_o *)&v17->parent, (int32_t)parent, v18, v19);
  transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_14;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v21 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  LODWORD(v21->baseScale) = localScale;
  v21->isOldMousePosition = 0;
  v21->oldTouchCount = 0;
  v21->isTouchScale = 0;
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
    v21 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  }
  v23 = v22->static_fields;
  transform = v21->dragObject;
  v21->defaultZoomRate = (float)v23->GalleryDefaultZoomRateMax;
  if ( !transform )
LABEL_14:
    sub_1B86614(transform, v11);
  v25 = UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v24);
    byte_4A487E1 = 1;
  }
  TransformHelper__SetLocalPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenDragProcess__NonTouch(bool isAbleToPinch, const MethodInfo *method)
{
  _BOOL4 v2; // w19
  __int64 v3; // x1
  UnityEngine_Transform_o *parent; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x9
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x10
  float v10; // s8
  float v11; // s9
  _BOOL4 v12; // w8
  int32_t width; // w0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v14; // x19
  float Axis; // s0
  _BOOL8 MouseButton; // x0
  struct GalleryFullScreenDragProcess_TouchInfo_o *v17; // x19
  float v18; // s0
  float v19; // s1
  float v20; // s2
  struct GalleryFullScreenDragProcess_StaticFields *v21; // x8
  UnityEngine_Vector3_o *v22; // x19
  const MethodInfo *v23; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v24; // x8
  int v25; // s0
  float32x2_t v28; // d0
  unsigned __int32 v29; // s1
  float v30; // s2
  GalleryFullScreenDragProcess_c *v31; // x8
  float32x2_t *v32; // x9
  float v33; // s1
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4

  v2 = isAbleToPinch;
  if ( (byte_4A495D1 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, method);
    sub_1B863B8(&StringLiteral_9019/*"Mouse ScrollWheel"*/, v3);
    byte_4A495D1 = 1;
  }
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Input__get_mousePosition(0LL);
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  touchInfo = static_fields->touchInfo;
  static_fields->isTouchScale = 0;
  if ( !touchInfo )
    goto LABEL_24;
  v10 = v6;
  v11 = v7;
  v12 = 0;
  touchInfo->fields.isTouchRelease = static_fields->oldTouchCount > 0;
  static_fields->oldTouchCount = 0;
  if ( v6 >= 0.0 )
  {
    width = UnityEngine_Screen__get_width(0LL);
    v12 = 0;
    if ( v11 >= 0.0 && v10 <= (float)width )
      v12 = v11 <= (float)UnityEngine_Screen__get_height(0LL);
  }
  if ( v2 && v12 )
  {
    v14 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    Axis = UnityEngine_Input__GetAxis((System_String_o *)StringLiteral_9019/*"Mouse ScrollWheel"*/, 0LL);
    if ( !v14 )
      goto LABEL_24;
    v14->fields.scaleDelta = Axis;
  }
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0LL);
  if ( MouseButton
    || (MouseButton = UnityEngine_Input__GetMouseButton(1, 0LL))
    || (MouseButton = UnityEngine_Input__GetMouseButton(2, 0LL)) )
  {
    v34.fields.x = v10;
    v34.fields.y = v11;
    v17 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    *(UnityEngine_Vector3_o *)&v18 = GalleryFullScreenDragProcess__GetWorldPosition(
                                       v34,
                                       (const MethodInfo *)MouseButton);
    if ( v17 )
    {
      v17->fields.newWorldPos.fields.x = v18;
      v17->fields.newWorldPos.fields.y = v19;
      v17->fields.newWorldPos.fields.z = v20;
      v21 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      v22 = (UnityEngine_Vector3_o *)v21->touchInfo;
      if ( v22 )
      {
        parent = v21->parent;
        if ( parent )
        {
          v22[4] = UnityEngine_Transform__InverseTransformPoint(parent, v22[3], 0LL);
          v24 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
          if ( !v24->isOldMousePosition )
          {
            v24->isOldMousePosition = 1;
            goto LABEL_22;
          }
          *(UnityEngine_Vector3_o *)&v25 = GalleryFullScreenDragProcess__GetWorldPosition(v24->oldMousePosition, v23);
          parent = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
          if ( parent )
          {
            *(UnityEngine_Vector3_o *)v28.n64_u64 = UnityEngine_Transform__InverseTransformPoint(
                                                      parent,
                                                      *(UnityEngine_Vector3_o *)&v25,
                                                      0LL);
            v31 = GalleryFullScreenDragProcess_TypeInfo;
            v32 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
            if ( v32 )
            {
              v28.n64_u32[1] = v29;
              v33 = v32[7].n64_f32[0] - v30;
              v32[3].n64_u64[0] = vsub_f32(v32[6], v28).n64_u64[0];
              v32[4].n64_f32[0] = v33;
              v24 = v31->static_fields;
LABEL_22:
              v24->oldMousePosition.fields.x = v10;
              v24->oldMousePosition.fields.y = v11;
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1B86614(parent, v5);
  }
  GalleryFullScreenDragProcess_TypeInfo->static_fields->isOldMousePosition = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenDragProcess__OnDragUpdate(
        bool isAbleToPinch,
        System_Action_o *sameScale,
        System_Action_o *notSameScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *dragObject; // x22
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x0
  __int64 v13; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  float x; // s8
  float baseScale; // s9
  float v17; // s1
  float v18; // s2
  struct UnityEngine_Mathf_StaticFields *v19; // x8
  float v20; // s0
  System_Action_o *v21; // x0
  __int64 v22; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v23; // x8
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localScale; // s0
  float scaleSqrMagnitude; // s1
  UnityEngine_Transform_o *v27; // x19
  float v28; // s0
  float v29; // s1
  float v30; // s2
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v32; // x8
  UnityEngine_GameObject_o *v33; // x19
  GalleryFullScreenListViewObject_o *actionObject; // x20
  float v35; // s8
  float y; // s9
  GalleryFullScreenDragProcess_PosInfo_o *v37; // x0
  GalleryFullScreenDragProcess_PosInfo_o *v38; // x21
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  float v41; // s0
  float v42; // s1
  float v43; // s2
  float v44; // s8
  float v45; // s9
  float v46; // s10
  UnityEngine_Transform_o *v47; // x19
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A495CD & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, sameScale);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&GalleryFullScreenDragProcess_PosInfo_TypeInfo, v8);
    byte_4A495CD = 1;
  }
  dragObject = (UnityEngine_Object_o *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL);
  if ( !v10 )
  {
    GalleryFullScreenDragProcess__SetUp((const MethodInfo *)v10);
    GalleryFullScreenDragProcess__Touch(isAbleToPinch, v11);
    GalleryFullScreenDragProcess__Scale(v12);
    static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    x = static_fields->localScale.fields.x;
    baseScale = static_fields->baseScale;
    if ( !byte_4A487E5 )
    {
      sub_1B863B8(&UnityEngine_Mathf_TypeInfo, v13);
      byte_4A487E5 = 1;
    }
    v17 = fabsf(x);
    v18 = fabsf(baseScale);
    if ( v17 <= v18 )
      v17 = v18;
    v19 = UnityEngine_Mathf_TypeInfo->static_fields;
    v20 = v17 * 0.000001;
    if ( (float)(v17 * 0.000001) <= (float)(v19->Epsilon * 8.0) )
      v20 = v19->Epsilon * 8.0;
    if ( vabds_f32(baseScale, x) >= v20 )
      v21 = notSameScale;
    else
      v21 = sameScale;
    ActionExtensions__Call(v21, 0LL);
    v23 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    if ( v23->isTouchScaleRebase && v23->isTouchScale && v23->scaleSqrMagnitude > 0.0 )
    {
      transform = v23->dragObject;
      if ( !transform )
        goto LABEL_27;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_27;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      v23 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      scaleSqrMagnitude = v23->scaleSqrMagnitude;
      LODWORD(v23->baseTouchScale) = localScale;
      v23->baseTouchSqrMagnitude = scaleSqrMagnitude;
    }
    transform = v23->dragObject;
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        v27 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
        touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
        if ( touchInfo )
        {
          v49.fields.x = v28 + touchInfo->fields.localDelta.fields.x;
          v49.fields.y = v29 + touchInfo->fields.localDelta.fields.y;
          v49.fields.z = v30 + touchInfo->fields.localDelta.fields.z;
          UnityEngine_Transform__set_localPosition(v27, v49, 0LL);
          v32 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
          v33 = v32->dragObject;
          actionObject = v32->actionObject;
          v35 = v32->screenSize.fields.x;
          y = v32->screenSize.fields.y;
          v37 = (GalleryFullScreenDragProcess_PosInfo_o *)sub_1B86604(GalleryFullScreenDragProcess_PosInfo_TypeInfo);
          v48.fields.x = v35;
          v48.fields.y = y;
          v38 = v37;
          GalleryFullScreenDragProcess_PosInfo___ctor(v37, v33, actionObject, v48, v39);
          *(UnityEngine_Vector3_o *)&v41 = GalleryFullScreenDragProcess__GetOffsetAddPos(v38, v40);
          transform = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
          if ( transform )
          {
            v44 = v41;
            v45 = v42;
            v46 = v43;
            transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
            if ( transform )
            {
              v47 = (UnityEngine_Transform_o *)transform;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
              position.fields.x = v44 + position.fields.x;
              position.fields.y = v45 + position.fields.y;
              position.fields.z = v46 + position.fields.z;
              UnityEngine_Transform__set_position(v47, position, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1B86614(transform, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenDragProcess__OneTouch(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_Transform_o *touches; // x0
  __int64 v3; // x1
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x20
  const MethodInfo *v5; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s2
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o *v10; // x20
  const MethodInfo *v11; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v12; // x8
  int v13; // s0
  float32x2_t v16; // d0
  unsigned __int32 v17; // s1
  float v18; // s2
  float32x2_t *v19; // x8
  float v20; // s1
  struct UnityEngine_Vector2_o v21; // kr00_8
  GalleryFullScreenDragProcess_c *v22; // x8
  struct GalleryFullScreenDragProcess_StaticFields *v23; // x8
  UnityEngine_Touch_o v24; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector2_o position; // 0:s0.4,4:s1.4

  if ( (byte_4A495D2 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, v1);
    byte_4A495D2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  GalleryFullScreenDragProcess_TypeInfo->static_fields->isOldMousePosition = 0;
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
  if ( !touches )
    goto LABEL_13;
  if ( !LODWORD(touches[1].klass) )
    sub_1B8661C(touches, v3);
  memmove(&v24, &touches[1].monitor, 0x44u);
  touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
  position = UnityEngine_Touch__get_position(&v24, 0LL);
  *(UnityEngine_Vector3_o *)&v6 = GalleryFullScreenDragProcess__GetWorldPosition(position, v5);
  if ( !touchInfo )
    goto LABEL_13;
  touchInfo->fields.newWorldPos.fields.x = v6;
  touchInfo->fields.newWorldPos.fields.y = v7;
  touchInfo->fields.newWorldPos.fields.z = v8;
  static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v10 = (UnityEngine_Vector3_o *)static_fields->touchInfo;
  if ( !v10 )
    goto LABEL_13;
  touches = static_fields->parent;
  if ( !touches )
    goto LABEL_13;
  v10[4] = UnityEngine_Transform__InverseTransformPoint(touches, v10[3], 0LL);
  v12 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  if ( v12->oldTouchCount == 1 )
  {
    *(UnityEngine_Vector3_o *)&v13 = GalleryFullScreenDragProcess__GetWorldPosition(v12->oldTouchPosition, v11);
    touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
    if ( touches )
    {
      *(UnityEngine_Vector3_o *)v16.n64_u64 = UnityEngine_Transform__InverseTransformPoint(
                                                touches,
                                                *(UnityEngine_Vector3_o *)&v13,
                                                0LL);
      v19 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( v19 )
      {
        v16.n64_u32[1] = v17;
        v20 = v19[7].n64_f32[0] - v18;
        v19[3].n64_u64[0] = vsub_f32(v19[6], v16).n64_u64[0];
        v19[4].n64_f32[0] = v20;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1B86614(touches, v3);
  }
LABEL_12:
  v21 = UnityEngine_Touch__get_position(&v24, 0LL);
  v22 = GalleryFullScreenDragProcess_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->oldTouchPosition = v21;
  v23 = v22->static_fields;
  v23->isTouchScale = 0;
  v23->oldTouchCount = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenDragProcess__Scale(const MethodInfo *method)
{
  __int64 v1; // x1
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
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s9
  float v23; // s10
  int v24; // s0
  struct GalleryFullScreenDragProcess_StaticFields *v27; // x9
  float32x2_t *v28; // x8
  float v29; // s9
  float32x2_t v30; // d8
  float32x2_t v31; // d0
  unsigned __int32 v32; // s1
  float v33; // s2
  float32x2_t *v34; // x8
  float v35; // s1
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A495D4 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, v1);
    byte_4A495D4 = 1;
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
  method = (const MethodInfo *)GalleryFullScreenListViewObject__GetItem(
                                 (GalleryFullScreenListViewObject_o *)method,
                                 0LL);
  if ( !method )
    goto LABEL_38;
  method = (const MethodInfo *)method[1].klass;
  if ( !method )
    goto LABEL_38;
  ZoomRateMax = GalleryResourceEntity__GetZoomRateMax(
                  (GalleryResourceEntity_o *)method,
                  GalleryFullScreenDragProcess_TypeInfo->static_fields->defaultZoomRate,
                  0LL);
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
  if ( !byte_4A487E5 )
  {
    sub_1B863B8(&UnityEngine_Mathf_TypeInfo, v1);
    byte_4A487E5 = 1;
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
        method = (const MethodInfo *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method, 0LL);
        v17 = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
        if ( v17 )
        {
          if ( method )
          {
            *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__InverseTransformPoint(
                                               (UnityEngine_Transform_o *)method,
                                               v17->fields.newWorldPos,
                                               0LL);
            method = (const MethodInfo *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
            if ( method )
            {
              v21 = v18;
              v22 = v19;
              v23 = v20;
              method = (const MethodInfo *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)method,
                                             0LL);
              if ( method )
              {
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)method,
                  GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale,
                  0LL);
                method = (const MethodInfo *)GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
                if ( method )
                {
                  method = (const MethodInfo *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)method,
                                                 0LL);
                  if ( method )
                  {
                    v36.fields.x = v21;
                    v36.fields.y = v22;
                    v36.fields.z = v23;
                    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__TransformPoint(
                                                       (UnityEngine_Transform_o *)method,
                                                       v36,
                                                       0LL);
                    v27 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
                    v28 = (float32x2_t *)v27->touchInfo;
                    if ( v28 )
                    {
                      method = (const MethodInfo *)v27->parent;
                      if ( method )
                      {
                        v29 = v28[7].n64_f32[0];
                        v30.n64_u64[0] = v28[6].n64_u64[0];
                        *(UnityEngine_Vector3_o *)v31.n64_u64 = UnityEngine_Transform__InverseTransformPoint(
                                                                  (UnityEngine_Transform_o *)method,
                                                                  *(UnityEngine_Vector3_o *)&v24,
                                                                  0LL);
                        v34 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
                        if ( v34 )
                        {
                          v31.n64_u32[1] = v32;
                          v35 = (float)(v29 - v33) + v34[4].n64_f32[0];
                          v34[3].n64_u64[0] = vadd_f32(vsub_f32(v30, v31), v34[3]).n64_u64[0];
                          v34[4].n64_f32[0] = v35;
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
        method = (const MethodInfo *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method, 0LL);
        if ( method )
        {
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)method,
            GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale,
            0LL);
          return;
        }
      }
    }
LABEL_38:
    sub_1B86614(method, v1);
  }
}


void __fastcall GalleryFullScreenDragProcess__SetUp(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  GalleryFullScreenDragProcess_c *v4; // x8
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  GalleryFullScreenDragProcess_TouchInfo_o *v6; // x19
  const MethodInfo *v7; // x1
  struct GalleryFullScreenDragProcess_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t height; // w0
  struct GalleryFullScreenDragProcess_StaticFields *v12; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A495CC & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, v1);
    sub_1B863B8(&GalleryFullScreenDragProcess_TouchInfo_TypeInfo, v2);
    byte_4A495CC = 1;
  }
  dragObject = GalleryFullScreenDragProcess_TypeInfo->static_fields->dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL)) == 0LL )
  {
    sub_1B86614(dragObject, v1);
  }
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dragObject, 0LL);
  v4 = GalleryFullScreenDragProcess_TypeInfo;
  GalleryFullScreenDragProcess_TypeInfo->static_fields->localScale = localScale;
  static_fields = v4->static_fields;
  static_fields->isTouchScaleRebase = 0;
  static_fields->scaleSqrMagnitude = 0.0;
  v6 = (GalleryFullScreenDragProcess_TouchInfo_o *)sub_1B86604(GalleryFullScreenDragProcess_TouchInfo_TypeInfo);
  GalleryFullScreenDragProcess_TouchInfo___ctor(v6, v7);
  v8 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v8->touchInfo = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&v8->touchInfo, (int32_t)v6, v9, v10);
  LODWORD(v6) = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v12 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
  v12->screenSize.fields.x = (float)(int)v6;
  v12->screenSize.fields.y = (float)height;
}


void __fastcall GalleryFullScreenDragProcess__Touch(bool isAbleToPinch, const MethodInfo *method)
{
  const MethodInfo *touchCount; // x0
  const MethodInfo *v4; // x1
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x9

  if ( (byte_4A495D0 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, method);
    byte_4A495D0 = 1;
  }
  touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0LL);
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
      sub_1B86614(touchCount, v4);
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
void __fastcall GalleryFullScreenDragProcess__TwoTouch(bool isAbleToPinch, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *touches; // x0
  __int64 v5; // x1
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o v7; // kr08_8
  struct GalleryFullScreenDragProcess_TouchInfo_o *touchInfo; // x19
  const MethodInfo *v9; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  struct GalleryFullScreenDragProcess_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o *v14; // x19
  const MethodInfo *v15; // x0
  struct GalleryFullScreenDragProcess_StaticFields *v16; // x8
  int v17; // s0
  float32x2_t v20; // d0
  unsigned __int32 v21; // s1
  float v22; // s2
  GalleryFullScreenDragProcess_c *v23; // x8
  float32x2_t *v24; // x9
  float v25; // s1
  UnityEngine_Vector2_o v26; // kr10_8
  UnityEngine_Vector2_o v27; // kr18_8
  struct GalleryFullScreenDragProcess_StaticFields *v28; // x8
  float v29; // s8
  _BOOL4 isTouchScale; // w9
  struct GalleryFullScreenDragProcess_TouchInfo_o *v31; // x19
  float baseTouchSqrMagnitude; // s9
  float x; // s0
  UnityEngine_Touch_o v34; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4

  if ( (byte_4A495D3 & 1) == 0 )
  {
    sub_1B863B8(&GalleryFullScreenDragProcess_TypeInfo, method);
    sub_1B863B8(&System_Math_TypeInfo, v3);
    byte_4A495D3 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v34, 0, sizeof(v34));
  GalleryFullScreenDragProcess_TypeInfo->static_fields->isOldMousePosition = 0;
  if ( isAbleToPinch )
  {
    touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
    if ( !touches )
      goto LABEL_24;
    if ( !LODWORD(touches[1].klass) )
      goto LABEL_25;
    memmove(&dest, &touches[1].monitor, 0x44u);
    touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0LL);
    if ( !touches )
      goto LABEL_24;
    if ( LODWORD(touches[1].klass) <= 1 )
LABEL_25:
      sub_1B8661C(touches, v5);
    memmove(&v34, (char *)&touches[4].klass + 4, 0x44u);
    position = UnityEngine_Touch__get_position(&dest, 0LL);
    v7 = UnityEngine_Touch__get_position(&v34, 0LL);
    v36.fields.x = (float)(position.fields.x + v7.fields.x) * 0.5;
    touchInfo = GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
    v36.fields.y = (float)(position.fields.y + v7.fields.y) * 0.5;
    *(UnityEngine_Vector3_o *)&v10 = GalleryFullScreenDragProcess__GetWorldPosition(v36, v9);
    if ( !touchInfo
      || (touchInfo->fields.newWorldPos.fields.x = v10,
          touchInfo->fields.newWorldPos.fields.y = v11,
          touchInfo->fields.newWorldPos.fields.z = v12,
          static_fields = GalleryFullScreenDragProcess_TypeInfo->static_fields,
          (v14 = (UnityEngine_Vector3_o *)static_fields->touchInfo) == 0LL)
      || (touches = static_fields->parent) == 0LL )
    {
LABEL_24:
      sub_1B86614(touches, v5);
    }
    v14[4] = UnityEngine_Transform__InverseTransformPoint(touches, v14[3], 0LL);
    v16 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    if ( v16->oldTouchCount == 2 )
    {
      *(UnityEngine_Vector3_o *)&v17 = GalleryFullScreenDragProcess__GetWorldPosition(v16->oldTouchPosition, v15);
      touches = GalleryFullScreenDragProcess_TypeInfo->static_fields->parent;
      if ( !touches )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)v20.n64_u64 = UnityEngine_Transform__InverseTransformPoint(
                                                touches,
                                                *(UnityEngine_Vector3_o *)&v17,
                                                0LL);
      v23 = GalleryFullScreenDragProcess_TypeInfo;
      v24 = (float32x2_t *)GalleryFullScreenDragProcess_TypeInfo->static_fields->touchInfo;
      if ( !v24 )
        goto LABEL_24;
      v20.n64_u32[1] = v21;
      v25 = v24[7].n64_f32[0] - v22;
      v24[3].n64_u64[0] = vsub_f32(v24[6], v20).n64_u64[0];
      v24[4].n64_f32[0] = v25;
      v16 = v23->static_fields;
    }
    else
    {
      v16->isTouchScale = 0;
      v16->oldTouchCount = 2;
    }
    v16->oldTouchPosition.fields.x = (float)(position.fields.x + v7.fields.x) * 0.5;
    v16->oldTouchPosition.fields.y = (float)(position.fields.y + v7.fields.y) * 0.5;
    v26 = UnityEngine_Touch__get_position(&dest, 0LL);
    v27 = UnityEngine_Touch__get_position(&v34, 0LL);
    v28 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
    v29 = (float)((float)(v26.fields.x - v27.fields.x) * (float)(v26.fields.x - v27.fields.x))
        + (float)((float)(v26.fields.y - v27.fields.y) * (float)(v26.fields.y - v27.fields.y));
    isTouchScale = v28->isTouchScale;
    v28->scaleSqrMagnitude = v29;
    if ( isTouchScale )
    {
      v31 = v28->touchInfo;
      baseTouchSqrMagnitude = v28->baseTouchSqrMagnitude;
      touches = (UnityEngine_Transform_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v28 = GalleryFullScreenDragProcess_TypeInfo->static_fields;
      }
      if ( v31 )
      {
        v31->fields.scaleDelta = (float)(sqrtf(v29 / baseTouchSqrMagnitude) * v28->baseTouchScale)
                               - v28->localScale.fields.x;
        return;
      }
      goto LABEL_24;
    }
    if ( v29 > 0.0 )
    {
      x = v28->localScale.fields.x;
      v28->isTouchScale = 1;
      v28->baseTouchScale = x;
      v28->baseTouchSqrMagnitude = v29;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenDragProcess_PosInfo___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !actionObject )
    goto LABEL_9;
  m_XMin = actionObject->fields.dragObjectRect.fields.m_XMin;
  m_YMin = actionObject->fields.dragObjectRect.fields.m_YMin;
  m_Width = actionObject->fields.dragObjectRect.fields.m_Width;
  m_Height = actionObject->fields.dragObjectRect.fields.m_Height;
  if ( !byte_4A486DA )
  {
    transform = (MethodInfo *)sub_1B863B8(&UnityEngine_Vector2_TypeInfo, v11);
    byte_4A486DA = 1;
  }
  this->fields.worldStartPos = GalleryFullScreenDragProcess__GetWorldPosition(
                                 UnityEngine_Vector2_TypeInfo->static_fields->zeroVector,
                                 transform);
  v20.fields.x = x;
  v20.fields.y = y;
  this->fields.worldEndPos = GalleryFullScreenDragProcess__GetWorldPosition(v20, v16);
  if ( !dragObject )
    goto LABEL_9;
  transform = (MethodInfo *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  this->fields.worldCenterPos = position;
  this->fields.screenCenterPos = GalleryFullScreenDragProcess__GetScreenPosition(position, v17);
  transform = (MethodInfo *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform
    || (v22.fields.z = 0.0,
        v22.fields.x = m_XMin,
        v22.fields.y = m_YMin,
        v23 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v22, 0LL),
        this->fields.worldTopLeftPos = v23,
        this->fields.screenTopLeftPos = GalleryFullScreenDragProcess__GetScreenPosition(v23, v18),
        (transform = (MethodInfo *)UnityEngine_GameObject__get_transform(dragObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B86614(transform, v11);
  }
  v24.fields.y = m_YMin + m_Height;
  v24.fields.x = m_XMin + m_Width;
  v24.fields.z = 0.0;
  v25 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v24, 0LL);
  this->fields.worldBottomRightPos = v25;
  this->fields.screenBottomRightPos = GalleryFullScreenDragProcess__GetScreenPosition(v25, v19);
}


void __fastcall GalleryFullScreenDragProcess_TouchInfo___ctor(
        GalleryFullScreenDragProcess_TouchInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Vector3_c *v4; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v7; // x9
  float v8; // s1
  struct UnityEngine_Vector3_StaticFields *v9; // x8
  float v10; // s1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.isTouchRelease = 0;
  this->fields.scaleDelta = 0.0;
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v3);
    byte_4A487E1 = 1;
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