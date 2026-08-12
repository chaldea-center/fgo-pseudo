void PhotoStandFigureDragProcess___ctor(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoStandFigureDragProcess__CheckDisplayPhotoUi(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *MyRoomControl_k__BackingField; // x20
  __int64 v5; // x1
  MyRoomControl_o *v6; // x0

  if ( (byte_596BC53 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BC53 = 1;
  }
  MyRoomControl_k__BackingField = (UnityEngine_Object_o *)this->fields._MyRoomControl_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(MyRoomControl_k__BackingField, 0, 0) && !this->fields.isDragOperateTouching )
  {
    v6 = this->fields._MyRoomControl_k__BackingField;
    if ( !v6 )
      sub_2213CDC(0, v5);
    MyRoomControl__DispPhotoUi(v6, 0);
  }
}


void PhotoStandFigureDragProcess__CheckDragOperate(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8
  PhotoStandFigureDragProcess_o *v3; // x19
  float32x2_t v4; // d9
  float z; // s8
  float32x2_t *static_fields; // x8
  float32x2_t v7; // d0
  struct PhotoStandFigureDragProcess_TouchInfo_o *v8; // x8

  if ( !this->fields.isDragOperateTouching )
  {
    touchInfo = this->fields.touchInfo;
    v3 = this;
    if ( touchInfo )
    {
      v4.n64_u64[0] = *(unsigned __int64 *)&touchInfo->fields.PositionDelta.fields.x;
      z = touchInfo->fields.PositionDelta.fields.z;
      if ( !byte_5969AE0 )
      {
        this = (PhotoStandFigureDragProcess_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
      v7.n64_u64[0] = vsub_f32(v4, (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
      if ( (float)((float)((float)(z - static_fields[1].n64_f32[0]) * (float)(z - static_fields[1].n64_f32[0]))
                 + vaddv_f32(vmul_f32(v7, v7))) >= 1.0e-10 )
      {
LABEL_8:
        v3->fields.isDragOperateTouching = 1;
        return;
      }
      v8 = v3->fields.touchInfo;
      if ( v8 )
      {
        if ( v8->fields.ScaleDelta == 0.0 )
          return;
        goto LABEL_8;
      }
    }
    sub_2213CDC(this, method);
  }
}


void PhotoStandFigureDragProcess__GetPositionDelta(
        PhotoStandFigureDragProcess_o *this,
        UnityEngine_Vector3_o touchPosition,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *parent; // x0
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8
  float32x2_t v6; // d10
  float z; // s9
  float32x2_t *static_fields; // x9
  float32x2_t v9; // d3
  float32x2_t v10; // d3
  __int64 v11; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector3_o v14; // 0:kr14_12.12
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4

  WorldPosition = PhotoStandFigureDragProcess__GetWorldPosition(
                    this,
                    *(UnityEngine_Vector2_o *)&touchPosition.fields.x,
                    method);
  parent = this->fields.parent;
  if ( !parent )
    goto LABEL_10;
  v14 = UnityEngine_Transform__InverseTransformPoint(parent, WorldPosition, 0);
  x = v14.fields.x;
  y = v14.fields.y;
  touchInfo = this->fields.touchInfo;
  if ( !touchInfo )
    goto LABEL_10;
  v6.n64_u64[0] = *(unsigned __int64 *)&touchInfo->fields.TouchPosition.fields.x;
  z = touchInfo->fields.TouchPosition.fields.z;
  if ( !byte_5969AE0 )
  {
    parent = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    x = v14.fields.x;
    y = v14.fields.y;
    touchInfo = this->fields.touchInfo;
    byte_5969AE0 = 1;
  }
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v9.n64_u64[0] = vsub_f32(v6, (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  if ( (float)((float)((float)(z - static_fields[1].n64_f32[0]) * (float)(z - static_fields[1].n64_f32[0]))
             + vaddv_f32(vmul_f32(v9, v9))) >= 1.0e-10 )
  {
    if ( !touchInfo )
      goto LABEL_10;
    v10.n64_u64[0] = *(unsigned __int64 *)&touchInfo->fields.TouchPosition.fields.x;
    touchInfo->fields.PositionDelta.fields.z = v14.fields.z - touchInfo->fields.TouchPosition.fields.z;
    *(float32x2_t *)&touchInfo->fields.PositionDelta.fields.x = vsub_f32(
                                                                  (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x)),
                                                                  v10);
    touchInfo = this->fields.touchInfo;
  }
  if ( !touchInfo )
LABEL_10:
    sub_2213CDC(parent, v11);
  touchInfo->fields.TouchPosition.fields.z = v14.fields.z;
  touchInfo->fields.TouchPosition.fields.x = x;
  touchInfo->fields.TouchPosition.fields.y = y;
}


UnityEngine_Vector3_o PhotoStandFigureDragProcess__GetWorldPosition(
        PhotoStandFigureDragProcess_o *this,
        UnityEngine_Vector2_o screenPos,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *mainCamera; // x0
  float v4; // s2
  UnityEngine_Vector3_o v5; // 0:kr00_12.12

  mainCamera = this->fields.mainCamera;
  if ( !mainCamera )
    sub_2213CDC(0, method);
  v4 = 0.0;
  v5.fields.x = screenPos.fields.x;
  v5.fields.y = screenPos.fields.y;
  v5.fields.z = v4;
  return UnityEngine_Camera__ScreenToWorldPoint_83198228(mainCamera, v5, 0);
}


void PhotoStandFigureDragProcess__Init(PhotoStandFigureDragProcess_o *this, bool isMaster, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Transform_o *targetTransform; // x0
  struct UnityEngine_Transform_o *parent; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UnityEngine_Camera_o *main; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  BalanceConfig_c *v30; // x0
  float v31; // s0
  bool IsOtherImage; // w0

  if ( (byte_596BC50 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596BC50 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.targetTransform = transform;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetTransform,
    (int32_t)transform,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  targetTransform = this->fields.targetTransform;
  if ( !targetTransform )
    sub_2213CDC(0, v12);
  parent = UnityEngine_Transform__get_parent(targetTransform, 0);
  this->fields.parent = parent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.parent, (int32_t)parent, v15, v16, v17, v18, v19, v20);
  main = UnityEngine_Camera__get_main(0);
  this->fields.mainCamera = main;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainCamera, (int32_t)main, v22, v23, v24, v25, v26, v27);
  v30 = BalanceConfig_TypeInfo;
  this->fields.isTouchScale = 0;
  if ( !*(&v30->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v30, v28, v29);
    v30 = BalanceConfig_TypeInfo;
  }
  *(int32x2_t *)&this->fields.zoomRateMax = vrev64_s32(
                                              vdiv_f32(
                                                vcvt_f32_s32(*(int32x2_t *)&v30->static_fields->PhotoStandFigureZoomRateMin),
                                                vdup_n_s32(0x447A0000u)));
  PhotoStandFigureDragProcess__InitTouchInfo(this, v28);
  v31 = 1.0;
  if ( isMaster )
  {
    IsOtherImage = ConstantMaster__IsOtherImage(0);
    v31 = 0.75;
    if ( !IsOtherImage )
      v31 = *(float *)"fff?";
  }
  this->fields.baseScale = v31;
}


void PhotoStandFigureDragProcess__InitTouchInfo(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  PhotoStandFigureDragProcess_TouchInfo_o *v3; // x20
  const MethodInfo *v4; // x1
  struct PhotoStandFigureDragProcess_TouchInfo_o **p_touchInfo; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596BC51 & 1) == 0 )
  {
    sub_2213A60(&PhotoStandFigureDragProcess_TouchInfo_TypeInfo);
    byte_596BC51 = 1;
  }
  v3 = (PhotoStandFigureDragProcess_TouchInfo_o *)sub_2213CCC(PhotoStandFigureDragProcess_TouchInfo_TypeInfo);
  PhotoStandFigureDragProcess_TouchInfo___ctor(v3, v4);
  this->fields.touchInfo = v3;
  p_touchInfo = &this->fields.touchInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_touchInfo, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  *((_BYTE *)p_touchInfo + 24) = 0;
}


void PhotoStandFigureDragProcess__NonTouch(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  ;
}


void PhotoStandFigureDragProcess__OnDragUpdate(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( this->fields.touchInfo )
  {
    PhotoStandFigureDragProcess__SetUp(this, method);
    PhotoStandFigureDragProcess__Touch(this, v3);
    PhotoStandFigureDragProcess__SetScale(this, v4);
    PhotoStandFigureDragProcess__SetPosition(this, v5);
    PhotoStandFigureDragProcess__CheckDragOperate(this, v6);
  }
}


// attributes: thunk
void PhotoStandFigureDragProcess__OnOutsideTouch(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  PhotoStandFigureDragProcess__CheckDisplayPhotoUi(this, method);
}


void PhotoStandFigureDragProcess__OnPress(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  PhotoStandFigureDragProcess__SetCanOtherTouch(this, 0, v2);
  PhotoStandFigureDragProcess__InitTouchInfo(this, v4);
}


void PhotoStandFigureDragProcess__OnRelease(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  PhotoStandFigureDragProcess__SetCanOtherTouch(this, 1, v2);
  PhotoStandFigureDragProcess__CheckDisplayPhotoUi(this, v4);
  PhotoStandFigureDragProcess__InitTouchInfo(this, v5);
}


void PhotoStandFigureDragProcess__OneTouch(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  _DWORD *touches; // x0
  __int64 v4; // x1
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  const MethodInfo *v8; // x1
  UnityEngine_Touch_o v9; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  memset(&v9, 0, sizeof(v9));
  touches = UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_9;
  if ( !touches[6] )
    sub_2213CE4(touches);
  touches = memmove(&v9, touches + 8, 0x44u);
  touchInfo = this->fields.touchInfo;
  if ( !touchInfo )
LABEL_9:
    sub_2213CDC(touches, v4);
  if ( touchInfo->fields.TouchCount >= 2 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&touchInfo->fields.TouchPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    touchInfo->fields.TouchPosition.fields.z = z;
  }
  *(UnityEngine_Vector2_o *)&v10.fields.x = UnityEngine_Touch__get_position(&v9, 0);
  v10.fields.z = 0.0;
  PhotoStandFigureDragProcess__GetPositionDelta(this, v10, v8);
  this->fields.isTouchScale = 0;
}


// local variable allocation has failed, the output may be wrong!
void PhotoStandFigureDragProcess__SetCanOtherTouch(
        PhotoStandFigureDragProcess_o *this,
        bool canOtherTouch,
        const MethodInfo *method)
{
  UnityEngine_Object_o *MyRoomControl_k__BackingField; // x21
  __int64 v6; // x1
  MyRoomControl_o *v7; // x0

  if ( (byte_596BC54 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BC54 = 1;
  }
  MyRoomControl_k__BackingField = (UnityEngine_Object_o *)this->fields._MyRoomControl_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, canOtherTouch, method);
  if ( !UnityEngine_Object__op_Equality(MyRoomControl_k__BackingField, 0, 0) )
  {
    v7 = this->fields._MyRoomControl_k__BackingField;
    if ( !v7 )
      sub_2213CDC(0, v6);
    MyRoomControl__SetMaskCollider(v7, !canOtherTouch, 0);
  }
}


void PhotoStandFigureDragProcess__SetPosition(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *targetTransform; // x19
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  targetTransform = this->fields.targetTransform;
  if ( !targetTransform
    || (localPosition = UnityEngine_Transform__get_localPosition(this->fields.targetTransform, 0),
        (touchInfo = this->fields.touchInfo) == 0) )
  {
    sub_2213CDC(this, method);
  }
  v6.fields.x = localPosition.fields.x + touchInfo->fields.PositionDelta.fields.x;
  v6.fields.y = localPosition.fields.y + touchInfo->fields.PositionDelta.fields.y;
  v6.fields.z = localPosition.fields.z + touchInfo->fields.PositionDelta.fields.z;
  UnityEngine_Transform__set_localPosition(targetTransform, v6, 0);
}


void PhotoStandFigureDragProcess__SetScale(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8
  float ScaleDelta; // s0
  float x; // s9
  float baseScale; // s2
  PhotoStandFigureDragProcess_o *v6; // x19
  float v7; // s1
  float v8; // s8
  float v9; // s2
  float v11; // s0
  float v12; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v14; // s0
  float32x2_t *v15; // x8
  bool v16; // w20
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  float v18; // s9
  float y; // s10
  float z; // s11
  float32x2_t v21; // d10
  float v22; // s9
  float32x2_t *v23; // x8
  float32x2_t v24; // d0
  UnityEngine_Vector3_o *v25; // x8
  UnityEngine_Vector3_o *v26; // x8
  UnityEngine_Transform_o *targetTransform; // x19
  UnityEngine_Vector3_o v28; // 0:kr00_12.12
  UnityEngine_Vector3_o v29; // 0:kr20_12.12
  UnityEngine_Vector3_o v30; // 0:kr34_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr40_12.12
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  touchInfo = this->fields.touchInfo;
  if ( !touchInfo )
    goto LABEL_38;
  ScaleDelta = touchInfo->fields.ScaleDelta;
  if ( ScaleDelta != 0.0 )
  {
    x = this->fields.localScale.fields.x;
    baseScale = this->fields.baseScale;
    v6 = this;
    v7 = ScaleDelta + x;
    if ( ScaleDelta >= 0.0 || (v8 = baseScale * this->fields.zoomRateMin, v7 >= v8) )
    {
      v9 = baseScale * this->fields.zoomRateMax;
      if ( v7 <= v9 || ScaleDelta <= 0.0 )
        v8 = ScaleDelta + x;
      else
        v8 = v9;
    }
    if ( !byte_5969AE4 )
    {
      this = (PhotoStandFigureDragProcess_o *)sub_2213A60(&UnityEngine_Mathf_TypeInfo);
      byte_5969AE4 = 1;
    }
    v11 = fabsf(x);
    v12 = fabsf(v8);
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v11 <= v12 )
      v11 = v12;
    v14 = v11 * 0.000001;
    if ( v14 <= (float)(static_fields->Epsilon * 8.0) )
      v14 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(v8, x) >= v14 )
    {
      v15 = (float32x2_t *)v6->fields.touchInfo;
      if ( !v15 )
        goto LABEL_38;
      if ( v15[5].n64_i32[1] >= 2 )
      {
        v21.n64_u64[0] = v15[6].n64_u64[0];
        v22 = v15[7].n64_f32[0];
        if ( !byte_5969AE0 )
        {
          this = (PhotoStandFigureDragProcess_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        v23 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
        v24.n64_u64[0] = vsub_f32(v21, (float32x2_t)v23->n64_u64[0]).n64_u64[0];
        v16 = (float)((float)((float)(v22 - v23[1].n64_f32[0]) * (float)(v22 - v23[1].n64_f32[0]))
                    + vaddv_f32(vmul_f32(v24, v24))) < 1.0e-10;
        if ( !v16 )
        {
          v25 = (UnityEngine_Vector3_o *)v6->fields.touchInfo;
          if ( !v25 )
            goto LABEL_38;
          this = (PhotoStandFigureDragProcess_o *)v6->fields.targetTransform;
          if ( !this )
            goto LABEL_38;
          v28 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v25[4], 0);
          v18 = v28.fields.x;
          y = v28.fields.y;
          z = v28.fields.z;
          goto LABEL_29;
        }
      }
      else
      {
        v16 = 1;
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
      }
      v17 = UnityEngine_Vector3_TypeInfo->static_fields;
      v18 = v17->zeroVector.fields.x;
      y = v17->zeroVector.fields.y;
      z = v17->zeroVector.fields.z;
LABEL_29:
      this = (PhotoStandFigureDragProcess_o *)v6->fields.targetTransform;
      v6->fields.localScale.fields.x = v8;
      v6->fields.localScale.fields.y = v8;
      if ( this )
      {
        v32.fields.x = v8;
        v32.fields.y = v8;
        v32.fields.z = v6->fields.localScale.fields.z;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v32, 0);
        if ( v16 )
          return;
        this = (PhotoStandFigureDragProcess_o *)v6->fields.targetTransform;
        if ( this )
        {
          v33.fields.x = v18;
          v33.fields.y = y;
          v33.fields.z = z;
          v35 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v33, 0);
          this = (PhotoStandFigureDragProcess_o *)v6->fields.parent;
          if ( this )
          {
            v29 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v35, 0);
            v26 = (UnityEngine_Vector3_o *)v6->fields.touchInfo;
            if ( v26 )
            {
              this = (PhotoStandFigureDragProcess_o *)v6->fields.parent;
              if ( this )
              {
                v30 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v26[4], 0);
                targetTransform = v6->fields.targetTransform;
                if ( targetTransform )
                {
                  localPosition = UnityEngine_Transform__get_localPosition(targetTransform, 0);
                  v34.fields.x = (float)(v30.fields.x - v29.fields.x) + localPosition.fields.x;
                  v34.fields.y = (float)(v30.fields.y - v29.fields.y) + localPosition.fields.y;
                  v34.fields.z = (float)(v30.fields.z - v29.fields.z) + localPosition.fields.z;
                  UnityEngine_Transform__set_localPosition(targetTransform, v34, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_38:
      sub_2213CDC(this, method);
    }
  }
}


void PhotoStandFigureDragProcess__SetUp(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *targetTransform; // x0
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  targetTransform = this->fields.targetTransform;
  if ( !targetTransform )
    sub_2213CDC(0, method);
  localScale = UnityEngine_Transform__get_localScale(targetTransform, 0);
  touchInfo = this->fields.touchInfo;
  this->fields.localScale = localScale;
  this->fields.scaleSqrMagnitude = 0.0;
  if ( touchInfo )
  {
    touchInfo->fields.ScaleDelta = 0.0;
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    *(_QWORD *)&touchInfo->fields.PositionDelta.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    touchInfo->fields.PositionDelta.fields.z = z;
  }
}


void PhotoStandFigureDragProcess__Touch(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  __int64 touchCount; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w20
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8

  touchCount = UnityEngine_Input__get_touchCount(0);
  v5 = touchCount;
  if ( (_DWORD)touchCount )
  {
    if ( (_DWORD)touchCount == 2 )
    {
      PhotoStandFigureDragProcess__TwoTouch(this, v4);
    }
    else if ( (_DWORD)touchCount == 1 )
    {
      PhotoStandFigureDragProcess__OneTouch(this, v4);
    }
    else
    {
      this->fields.isTouchScale = 0;
    }
  }
  touchInfo = this->fields.touchInfo;
  if ( !touchInfo )
    sub_2213CDC(touchCount, v4);
  touchInfo->fields.TouchCount = v5;
}


void PhotoStandFigureDragProcess__TwoTouch(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *touches; // x0
  __int64 v4; // x1
  UnityEngine_Vector2_o position; // kr20_8
  UnityEngine_Vector2_o v6; // kr28_8
  UnityEngine_Vector2_o v7; // kr30_8
  UnityEngine_Vector2_o v8; // kr38_8
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x20
  const MethodInfo *v10; // x1
  struct PhotoStandFigureDragProcess_TouchInfo_o *v11; // x8
  __int64 v12; // x2
  struct PhotoStandFigureDragProcess_TouchInfo_o *v13; // x8
  float v14; // s4
  _BOOL4 isTouchScale; // w8
  float v16; // s8
  struct PhotoStandFigureDragProcess_TouchInfo_o *v17; // x20
  float baseTouchSqrMagnitude; // s9
  float x; // s0
  UnityEngine_Touch_o v20; // [xsp+0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o WorldPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v23; // 0:kr14_12.12
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4

  if ( (byte_596BC52 & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596BC52 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&dest, 0, sizeof(dest));
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_23;
  if ( !LODWORD(touches[1].klass) )
    goto LABEL_24;
  memmove(&dest, &touches[1].monitor, 0x44u);
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_23;
  if ( ((__int64)touches[1].klass & 0xFFFFFFFE) == 0 )
LABEL_24:
    sub_2213CE4(touches);
  memmove(&v20, (char *)&touches[4].klass + 4, 0x44u);
  position = UnityEngine_Touch__get_position(&dest, 0);
  v6 = UnityEngine_Touch__get_position(&v20, 0);
  v7 = UnityEngine_Touch__get_position(&dest, 0);
  v8 = UnityEngine_Touch__get_position(&v20, 0);
  touchInfo = this->fields.touchInfo;
  v24.fields.x = (float)(v7.fields.x + v8.fields.x) * 0.5;
  v24.fields.y = (float)(v7.fields.y + v8.fields.y) * 0.5;
  WorldPosition = PhotoStandFigureDragProcess__GetWorldPosition(this, v24, v10);
  if ( !touchInfo )
    goto LABEL_23;
  touchInfo->fields.ScalePivotWorldPos = WorldPosition;
  v11 = this->fields.touchInfo;
  if ( !v11 )
    goto LABEL_23;
  touches = this->fields.parent;
  if ( !touches )
    goto LABEL_23;
  v23 = UnityEngine_Transform__InverseTransformPoint(touches, v11->fields.ScalePivotWorldPos, 0);
  v13 = this->fields.touchInfo;
  if ( !v13 )
    goto LABEL_23;
  if ( v13->fields.TouchCount == 2 )
  {
    v14 = v23.fields.z - v13->fields.TouchPosition.fields.z;
    *(float32x2_t *)&v13->fields.PositionDelta.fields.x = vsub_f32(
                                                            *(float32x2_t *)&v23.fields.x,
                                                            *(float32x2_t *)&v13->fields.TouchPosition.fields.x);
    v13->fields.PositionDelta.fields.z = v14;
    v13 = this->fields.touchInfo;
    if ( !v13 )
      goto LABEL_23;
  }
  else
  {
    this->fields.isTouchScale = 0;
    v13->fields.TouchCount = 2;
  }
  v13->fields.TouchPosition = v23;
  isTouchScale = this->fields.isTouchScale;
  v16 = (float)((float)(position.fields.x - v6.fields.x) * (float)(position.fields.x - v6.fields.x))
      + (float)((float)(position.fields.y - v6.fields.y) * (float)(position.fields.y - v6.fields.y));
  this->fields.scaleSqrMagnitude = v16;
  if ( isTouchScale )
  {
    v17 = this->fields.touchInfo;
    baseTouchSqrMagnitude = this->fields.baseTouchSqrMagnitude;
    touches = (UnityEngine_Transform_o *)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4, v12);
    if ( v17 )
    {
      v17->fields.ScaleDelta = (float)(sqrtf(v16 / baseTouchSqrMagnitude) * this->fields.baseTouchScale)
                             - this->fields.localScale.fields.x;
      return;
    }
LABEL_23:
    sub_2213CDC(touches, v4);
  }
  if ( v16 > 0.0 )
  {
    x = this->fields.localScale.fields.x;
    this->fields.isTouchScale = 1;
    this->fields.baseTouchScale = x;
    this->fields.baseTouchSqrMagnitude = v16;
  }
}


MyRoomControl_o *PhotoStandFigureDragProcess__get_MyRoomControl(
        PhotoStandFigureDragProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._MyRoomControl_k__BackingField;
}


void PhotoStandFigureDragProcess__set_MyRoomControl(
        PhotoStandFigureDragProcess_o *this,
        MyRoomControl_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MyRoomControl_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MyRoomControl_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoStandFigureDragProcess_TouchInfo___ctor(
        PhotoStandFigureDragProcess_TouchInfo_o *this,
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
  this->fields.TouchCount = 0;
  v3 = (unsigned __int8)byte_5969AE0;
  this->fields.ScaleDelta = 0.0;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v4 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.PositionDelta.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.PositionDelta.fields.z = z;
  v7 = v4->static_fields;
  v8 = v7->zeroVector.fields.z;
  *(_QWORD *)&this->fields.TouchPosition.fields.x = *(_QWORD *)&v7->zeroVector.fields.x;
  this->fields.TouchPosition.fields.z = v8;
  v9 = v4->static_fields;
  v10 = v9->zeroVector.fields.z;
  *(_QWORD *)&this->fields.ScalePivotWorldPos.fields.x = *(_QWORD *)&v9->zeroVector.fields.x;
  this->fields.ScalePivotWorldPos.fields.z = v10;
}