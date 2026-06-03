void PhotoStandFigureDragProcess___ctor(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoStandFigureDragProcess__CheckDisplayPhotoUi(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *MyRoomControl_k__BackingField; // x20
  __int64 v4; // x1
  MyRoomControl_o *v5; // x0

  if ( (byte_4E72B41 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72B41 = 1;
  }
  MyRoomControl_k__BackingField = (UnityEngine_Object_o *)this->fields._MyRoomControl_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(MyRoomControl_k__BackingField, 0, 0) && !this->fields.isDragOperateTouching )
  {
    v5 = this->fields._MyRoomControl_k__BackingField;
    if ( !v5 )
      sub_1D0F30C(0, v4);
    MyRoomControl__DispPhotoUi(v5, 0);
  }
}


void PhotoStandFigureDragProcess__CheckDragOperate(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8
  PhotoStandFigureDragProcess_o *v3; // x19
  float x; // s8
  float32x2_t v5; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v7; // d1
  unsigned __int64 v8; // d1
  struct PhotoStandFigureDragProcess_TouchInfo_o *v9; // x8

  if ( !this->fields.isDragOperateTouching )
  {
    touchInfo = this->fields.touchInfo;
    v3 = this;
    if ( touchInfo )
    {
      x = touchInfo->fields.PositionDelta.fields.x;
      v5.n64_u64[0] = *(unsigned __int64 *)&touchInfo->fields.PositionDelta.fields.y;
      if ( !byte_4E70C99 )
      {
        this = (PhotoStandFigureDragProcess_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
        byte_4E70C99 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v7.n64_u64[0] = vsub_f32(v5, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v8 = vmul_f32(v7, v7).n64_u64[0];
      if ( (float)(*((float *)&v8 + 1)
                 + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                                 * (float)(x - static_fields->zeroVector.fields.x))
                         + *(float *)&v8)) >= 1.0e-10 )
      {
LABEL_8:
        v3->fields.isDragOperateTouching = 1;
        return;
      }
      v9 = v3->fields.touchInfo;
      if ( v9 )
      {
        if ( v9->fields.ScaleDelta == 0.0 )
          return;
        goto LABEL_8;
      }
    }
    sub_1D0F30C(this, method);
  }
}


void PhotoStandFigureDragProcess__GetPositionDelta(
        PhotoStandFigureDragProcess_o *this,
        UnityEngine_Vector3_o touchPosition,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Transform_o *parent; // x0
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8
  float x; // s9
  float32x2_t v8; // d10
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v11; // d3
  unsigned __int64 v12; // d3
  struct PhotoStandFigureDragProcess_TouchInfo_o *v13; // x8
  float v14; // s2
  struct PhotoStandFigureDragProcess_TouchInfo_o *v15; // x8
  float v16; // [xsp+0h] [xbp-50h]
  float y; // [xsp+10h] [xbp-40h]
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  WorldPosition = PhotoStandFigureDragProcess__GetWorldPosition(
                    this,
                    *(UnityEngine_Vector2_o *)&touchPosition.fields.x,
                    method);
  parent = this->fields.parent;
  if ( !parent )
    goto LABEL_10;
  v19 = UnityEngine_Transform__InverseTransformPoint(parent, WorldPosition, 0);
  touchInfo = this->fields.touchInfo;
  if ( !touchInfo )
    goto LABEL_10;
  x = touchInfo->fields.TouchPosition.fields.x;
  v8.n64_u64[0] = *(unsigned __int64 *)&touchInfo->fields.TouchPosition.fields.y;
  z = v19.fields.z;
  if ( !byte_4E70C99 )
  {
    v16 = v19.fields.x;
    y = v19.fields.y;
    parent = (UnityEngine_Transform_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    v19.fields.x = v16;
    v19.fields.y = y;
    byte_4E70C99 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v11.n64_u64[0] = vsub_f32(v8, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
  v12 = vmul_f32(v11, v11).n64_u64[0];
  if ( (float)(*((float *)&v12 + 1)
             + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                             * (float)(x - static_fields->zeroVector.fields.x))
                     + *(float *)&v12)) >= 1.0e-10 )
  {
    v13 = this->fields.touchInfo;
    if ( !v13 )
      goto LABEL_10;
    v14 = z - v13->fields.TouchPosition.fields.z;
    *(float32x2_t *)&v13->fields.PositionDelta.fields.x = vsub_f32(
                                                            *(float32x2_t *)&v19.fields.x,
                                                            *(float32x2_t *)&v13->fields.TouchPosition.fields.x);
    v13->fields.PositionDelta.fields.z = v14;
  }
  v15 = this->fields.touchInfo;
  if ( !v15 )
LABEL_10:
    sub_1D0F30C(parent, v4);
  v15->fields.TouchPosition.fields.z = z;
  v15->fields.TouchPosition.fields.x = v19.fields.x;
  v15->fields.TouchPosition.fields.y = v19.fields.y;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o PhotoStandFigureDragProcess__GetWorldPosition(
        PhotoStandFigureDragProcess_o *this,
        UnityEngine_Vector2_o screenPos,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *mainCamera; // x0
  int v4; // s2

  mainCamera = this->fields.mainCamera;
  if ( !mainCamera )
    sub_1D0F30C(0, method);
  v4 = 0;
  return UnityEngine_Camera__ScreenToWorldPoint_73162832(mainCamera, *(UnityEngine_Vector3_o *)&screenPos.fields.x, 0);
}


void PhotoStandFigureDragProcess__Init(PhotoStandFigureDragProcess_o *this, bool isMaster, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_Transform_o *targetTransform; // x0
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UnityEngine_Camera_o *main; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  BalanceConfig_c *v29; // x0
  float v30; // s0
  bool IsOtherImage; // w0

  if ( (byte_4E72B3E & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E72B3E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.targetTransform = transform;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetTransform,
    (int32_t)transform,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  targetTransform = this->fields.targetTransform;
  if ( !targetTransform )
    sub_1D0F30C(0, v12);
  parent = UnityEngine_Transform__get_parent(targetTransform, 0);
  this->fields.parent = parent;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.parent, (int32_t)parent, v15, v16, v17, v18, v19, v20);
  main = UnityEngine_Camera__get_main(0);
  this->fields.mainCamera = main;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.mainCamera, (int32_t)main, v22, v23, v24, v25, v26, v27);
  this->fields.isTouchScale = 0;
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  *(float32x2_t *)&this->fields.zoomRateMax = vdiv_f32(
                                                vcvt_f32_s32(vrev64_s32(*(int32x2_t *)&v29->static_fields->PhotoStandFigureZoomRateMin)),
                                                vdup_n_s32(0x447A0000u));
  PhotoStandFigureDragProcess__InitTouchInfo(this, v28);
  v30 = 1.0;
  if ( isMaster )
  {
    IsOtherImage = ConstantMaster__IsOtherImage(0);
    v30 = 0.9;
    if ( IsOtherImage )
      v30 = 0.75;
  }
  this->fields.baseScale = v30;
}


void PhotoStandFigureDragProcess__InitTouchInfo(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  PhotoStandFigureDragProcess_TouchInfo_o *v3; // x20
  const MethodInfo *v4; // x1
  struct PhotoStandFigureDragProcess_TouchInfo_o **p_touchInfo; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E72B3F & 1) == 0 )
  {
    sub_1D0F0B4(&PhotoStandFigureDragProcess_TouchInfo_TypeInfo);
    byte_4E72B3F = 1;
  }
  v3 = (PhotoStandFigureDragProcess_TouchInfo_o *)sub_1D0F300(PhotoStandFigureDragProcess_TouchInfo_TypeInfo);
  PhotoStandFigureDragProcess_TouchInfo___ctor(v3, v4);
  this->fields.touchInfo = v3;
  p_touchInfo = &this->fields.touchInfo;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)p_touchInfo, (int32_t)v3, v6, v7, v8, v9, v10, v11);
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
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  memset(&v9, 0, sizeof(v9));
  touches = UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_9;
  if ( !touches[6] )
    sub_1D0F314(touches);
  touches = memmove(&v9, touches + 8, 0x44u);
  touchInfo = this->fields.touchInfo;
  if ( !touchInfo )
LABEL_9:
    sub_1D0F30C(touches, v4);
  if ( touchInfo->fields.TouchCount >= 2 )
  {
    if ( !byte_4E70C99 )
    {
      sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C99 = 1;
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


void PhotoStandFigureDragProcess__SetCanOtherTouch(
        PhotoStandFigureDragProcess_o *this,
        bool canOtherTouch,
        const MethodInfo *method)
{
  UnityEngine_Object_o *MyRoomControl_k__BackingField; // x21
  __int64 v6; // x1
  MyRoomControl_o *v7; // x0

  if ( (byte_4E72B42 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E72B42 = 1;
  }
  MyRoomControl_k__BackingField = (UnityEngine_Object_o *)this->fields._MyRoomControl_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(MyRoomControl_k__BackingField, 0, 0) )
  {
    v7 = this->fields._MyRoomControl_k__BackingField;
    if ( !v7 )
      sub_1D0F30C(0, v6);
    MyRoomControl__SetMaskCollider(v7, !canOtherTouch, 0);
  }
}


void PhotoStandFigureDragProcess__SetPosition(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *targetTransform; // x19
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  targetTransform = this->fields.targetTransform;
  if ( !targetTransform
    || (localPosition = UnityEngine_Transform__get_localPosition(this->fields.targetTransform, 0),
        (touchInfo = this->fields.touchInfo) == 0) )
  {
    sub_1D0F30C(this, method);
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
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float Epsilon; // s3
  struct PhotoStandFigureDragProcess_TouchInfo_o *v15; // x8
  bool v16; // w20
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  float v18; // s9
  float y; // s10
  float z; // s11
  float v21; // s9
  float32x2_t v22; // d10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v24; // d1
  unsigned __int64 v25; // d1
  UnityEngine_Vector3_o *v26; // x8
  UnityEngine_Vector3_o *v27; // x8
  float v28; // s8
  float v29; // s9
  float v30; // s10
  UnityEngine_Transform_o *targetTransform; // x19
  float v32; // s10
  float v33; // s9
  float v34; // s8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

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
    if ( !byte_4E70C9D )
    {
      this = (PhotoStandFigureDragProcess_o *)sub_1D0F0B4(&UnityEngine_Mathf_TypeInfo);
      byte_4E70C9D = 1;
    }
    v11 = fabsf(x);
    v12 = fabsf(v8);
    if ( v11 <= v12 )
      v11 = v12;
    v13 = v11 * 0.000001;
    Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
    if ( (float)(v11 * 0.000001) <= (float)(Epsilon * 8.0) )
      v13 = Epsilon * 8.0;
    if ( vabds_f32(v8, x) >= v13 )
    {
      v15 = v6->fields.touchInfo;
      if ( !v15 )
        goto LABEL_38;
      if ( v15->fields.TouchCount >= 2 )
      {
        v21 = v15->fields.ScalePivotWorldPos.fields.x;
        v22.n64_u64[0] = *(unsigned __int64 *)&v15->fields.ScalePivotWorldPos.fields.y;
        if ( !byte_4E70C99 )
        {
          this = (PhotoStandFigureDragProcess_o *)sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
          byte_4E70C99 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v24.n64_u64[0] = vsub_f32(v22, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
        v25 = vmul_f32(v24, v24).n64_u64[0];
        v16 = (float)(*((float *)&v25 + 1)
                    + (float)((float)((float)(v21 - static_fields->zeroVector.fields.x)
                                    * (float)(v21 - static_fields->zeroVector.fields.x))
                            + *(float *)&v25)) < 1.0e-10;
        if ( (float)(*((float *)&v25 + 1)
                   + (float)((float)((float)(v21 - static_fields->zeroVector.fields.x)
                                   * (float)(v21 - static_fields->zeroVector.fields.x))
                           + *(float *)&v25)) >= 1.0e-10 )
        {
          v26 = (UnityEngine_Vector3_o *)v6->fields.touchInfo;
          if ( !v26 )
            goto LABEL_38;
          this = (PhotoStandFigureDragProcess_o *)v6->fields.targetTransform;
          if ( !this )
            goto LABEL_38;
          v35 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v26[4], 0);
          v18 = v35.fields.x;
          y = v35.fields.y;
          z = v35.fields.z;
          goto LABEL_29;
        }
      }
      else
      {
        v16 = 1;
        if ( !byte_4E70C99 )
        {
          sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
          byte_4E70C99 = 1;
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
        v36.fields.z = v6->fields.localScale.fields.z;
        v36.fields.x = v8;
        v36.fields.y = v8;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v36, 0);
        if ( v16 )
          return;
        this = (PhotoStandFigureDragProcess_o *)v6->fields.targetTransform;
        if ( this )
        {
          v37.fields.x = v18;
          v37.fields.y = y;
          v37.fields.z = z;
          v38 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)this, v37, 0);
          this = (PhotoStandFigureDragProcess_o *)v6->fields.parent;
          if ( this )
          {
            v39 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v38, 0);
            v27 = (UnityEngine_Vector3_o *)v6->fields.touchInfo;
            if ( v27 )
            {
              this = (PhotoStandFigureDragProcess_o *)v6->fields.parent;
              if ( this )
              {
                v28 = v39.fields.x;
                v29 = v39.fields.y;
                v30 = v39.fields.z;
                v40 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v27[4], 0);
                targetTransform = v6->fields.targetTransform;
                if ( targetTransform )
                {
                  v32 = v40.fields.z - v30;
                  v33 = v40.fields.y - v29;
                  v34 = v40.fields.x - v28;
                  localPosition = UnityEngine_Transform__get_localPosition(targetTransform, 0);
                  localPosition.fields.x = v34 + localPosition.fields.x;
                  localPosition.fields.y = v33 + localPosition.fields.y;
                  localPosition.fields.z = v32 + localPosition.fields.z;
                  UnityEngine_Transform__set_localPosition(targetTransform, localPosition, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_38:
      sub_1D0F30C(this, method);
    }
  }
}


void PhotoStandFigureDragProcess__SetUp(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *targetTransform; // x0
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  targetTransform = this->fields.targetTransform;
  if ( !targetTransform )
    sub_1D0F30C(0, method);
  localScale = UnityEngine_Transform__get_localScale(targetTransform, 0);
  touchInfo = this->fields.touchInfo;
  this->fields.localScale = localScale;
  this->fields.scaleSqrMagnitude = 0.0;
  if ( touchInfo )
  {
    touchInfo->fields.ScaleDelta = 0.0;
    if ( !byte_4E70C99 )
    {
      sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C99 = 1;
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
    sub_1D0F30C(touchCount, v4);
  touchInfo->fields.TouchCount = v5;
}


void PhotoStandFigureDragProcess__TwoTouch(PhotoStandFigureDragProcess_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *touches; // x0
  __int64 v4; // x1
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  UnityEngine_Vector2_o v7; // kr10_8
  UnityEngine_Vector2_o v8; // kr18_8
  struct PhotoStandFigureDragProcess_TouchInfo_o *touchInfo; // x20
  const MethodInfo *v10; // x1
  struct PhotoStandFigureDragProcess_TouchInfo_o *v11; // x8
  struct PhotoStandFigureDragProcess_TouchInfo_o *v12; // x8
  float v13; // s4
  _BOOL4 isTouchScale; // w8
  float v15; // s8
  struct PhotoStandFigureDragProcess_TouchInfo_o *v16; // x20
  float baseTouchSqrMagnitude; // s9
  float x; // s0
  UnityEngine_Touch_o v19; // [xsp+0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o WorldPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E72B40 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Math_TypeInfo);
    byte_4E72B40 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  memset(&v19, 0, sizeof(v19));
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_23;
  if ( !LODWORD(touches[1].klass) )
    goto LABEL_24;
  memmove(&dest, &touches[1].monitor, 0x44u);
  touches = (UnityEngine_Transform_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_23;
  if ( LODWORD(touches[1].klass) <= 1 )
LABEL_24:
    sub_1D0F314(touches);
  memmove(&v19, (char *)&touches[4].klass + 4, 0x44u);
  position = UnityEngine_Touch__get_position(&dest, 0);
  v6 = UnityEngine_Touch__get_position(&v19, 0);
  v7 = UnityEngine_Touch__get_position(&dest, 0);
  v8 = UnityEngine_Touch__get_position(&v19, 0);
  touchInfo = this->fields.touchInfo;
  v21.fields.x = (float)(v7.fields.x + v8.fields.x) * 0.5;
  v21.fields.y = (float)(v7.fields.y + v8.fields.y) * 0.5;
  WorldPosition = PhotoStandFigureDragProcess__GetWorldPosition(this, v21, v10);
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
  v12 = this->fields.touchInfo;
  if ( !v12 )
    goto LABEL_23;
  if ( v12->fields.TouchCount == 2 )
  {
    v13 = v23.fields.z - v12->fields.TouchPosition.fields.z;
    *(float32x2_t *)&v12->fields.PositionDelta.fields.x = vsub_f32(
                                                            *(float32x2_t *)&v23.fields.x,
                                                            *(float32x2_t *)&v12->fields.TouchPosition.fields.x);
    v12->fields.PositionDelta.fields.z = v13;
    v12 = this->fields.touchInfo;
    if ( !v12 )
      goto LABEL_23;
  }
  else
  {
    this->fields.isTouchScale = 0;
    v12->fields.TouchCount = 2;
  }
  v12->fields.TouchPosition = v23;
  isTouchScale = this->fields.isTouchScale;
  v15 = (float)((float)(position.fields.x - v6.fields.x) * (float)(position.fields.x - v6.fields.x))
      + (float)((float)(position.fields.y - v6.fields.y) * (float)(position.fields.y - v6.fields.y));
  this->fields.scaleSqrMagnitude = v15;
  if ( isTouchScale )
  {
    v16 = this->fields.touchInfo;
    baseTouchSqrMagnitude = this->fields.baseTouchSqrMagnitude;
    touches = (UnityEngine_Transform_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v16 )
    {
      v16->fields.ScaleDelta = (float)(sqrtf(v15 / baseTouchSqrMagnitude) * this->fields.baseTouchScale)
                             - this->fields.localScale.fields.x;
      return;
    }
LABEL_23:
    sub_1D0F30C(touches, v4);
  }
  if ( v15 > 0.0 )
  {
    x = this->fields.localScale.fields.x;
    this->fields.isTouchScale = 1;
    this->fields.baseTouchScale = x;
    this->fields.baseTouchSqrMagnitude = v15;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MyRoomControl_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._MyRoomControl_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x9
  float v7; // s1
  struct UnityEngine_Vector3_StaticFields *v8; // x8
  float v9; // s1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.TouchCount = 0;
  this->fields.ScaleDelta = 0.0;
  if ( !byte_4E70C99 )
  {
    sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
    byte_4E70C99 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.PositionDelta.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.PositionDelta.fields.z = z;
  v6 = v3->static_fields;
  v7 = v6->zeroVector.fields.z;
  *(_QWORD *)&this->fields.TouchPosition.fields.x = *(_QWORD *)&v6->zeroVector.fields.x;
  this->fields.TouchPosition.fields.z = v7;
  v8 = v3->static_fields;
  v9 = v8->zeroVector.fields.z;
  *(_QWORD *)&this->fields.ScalePivotWorldPos.fields.x = *(_QWORD *)&v8->zeroVector.fields.x;
  this->fields.ScalePivotWorldPos.fields.z = v9;
}