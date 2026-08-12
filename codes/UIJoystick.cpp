void UIJoystick___ctor(UIJoystick_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.scale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.deadZone = 4.0;
  this->fields.springBackSpeed = 20.0;
  this->fields.scale.fields.z = z;
  this->fields.range = (struct UnityEngine_Vector2_o)vdup_n_s32(0x42C80000u).n64_u64[0];
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIJoystick__LateUpdate(UIJoystick_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *target; // x0
  __int64 v4; // x2
  int32x2_t v5; // d2
  float z; // s8
  float x; // s3
  float v8; // s9
  float32x2_t v9; // d3
  struct UnityEngine_Vector2_o range; // d4
  int8x8_t v11; // d2
  int8x8_t v12; // d4
  __int64 v13; // x1
  __int64 v14; // x2
  float32x2_t v15; // d9
  float v16; // s10
  float v17; // s8
  float32x2_t v18; // d9
  float v19; // s0
  struct UnityEngine_Vector2_o v20; // d1
  struct UnityEngine_Vector2_o zeroVector; // d0
  int v22; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int8x8_t v24; // d0
  float y; // s1
  float v26; // [xsp+10h] [xbp-60h]
  float v27; // [xsp+10h] [xbp-60h]
  unsigned __int64 valuea; // [xsp+20h] [xbp-50h]
  float32x2_t value; // [xsp+20h] [xbp-50h]
  struct UnityEngine_Vector2_o valueb; // [xsp+20h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v32; // 0:kr14_12.12

  if ( this->fields.started )
  {
    target = (UnityEngine_Component_o *)this->fields.target;
    if ( !target )
      goto LABEL_27;
    target = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(target, 0);
    if ( !target )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)target, 0);
    v24.n64_u32[0] = LODWORD(localPosition.fields.x);
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( this->fields.circularPadConstraint )
    {
      x = this->fields.range.fields.x;
      if ( !byte_596E5D6 )
      {
        v26 = this->fields.range.fields.x;
        sub_2213A60(&System_Math_TypeInfo);
        y = localPosition.fields.y;
        x = v26;
        v24.n64_u32[0] = LODWORD(localPosition.fields.x);
        byte_596E5D6 = 1;
      }
      v24.n64_f32[1] = y;
      v8 = (float)(localPosition.fields.z * localPosition.fields.z)
         + (float)((float)(v24.n64_f32[0] * v24.n64_f32[0]) + (float)(y * y));
      if ( v8 > (float)(x * x) )
      {
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        {
          v27 = x;
          valuea = v24.n64_u64[0];
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v4);
          x = v27;
          v24.n64_u64[0] = valuea;
        }
        v5.n64_f32[0] = sqrtf(v8);
        v24.n64_u64[0] = vmul_n_f32(vdiv_f32(v24, vdup_lane_s32(v5, 0)), x).n64_u64[0];
        z = (float)(localPosition.fields.z / v5.n64_f32[0]) * x;
      }
    }
    else
    {
      v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.mStartLocalPos.fields.x;
      range = this->fields.range;
      v24.n64_u32[1] = LODWORD(localPosition.fields.y);
      v11.n64_u64[0] = vadd_f32(v9, (float32x2_t)range).n64_u64[0];
      v12.n64_u64[0] = vsub_f32(v9, (float32x2_t)range).n64_u64[0];
      v24.n64_u64[0] = vbsl_s8(vcgt_f32(v12, v24), v12, vbsl_s8(vcgt_f32(v24, v11), v11, v24)).n64_u64[0];
    }
    target = (UnityEngine_Component_o *)this->fields.target;
    value.n64_u64[0] = v24.n64_u64[0];
    if ( !target || (target = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(target, 0)) == 0 )
LABEL_27:
      sub_2213CDC(target, method);
    *(float32x2_t *)&v32.fields.x = value;
    v32.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, v32, 0);
    v15.n64_u64[0] = *(unsigned __int64 *)&this->fields.mStartLocalPos.fields.x;
    v16 = this->fields.mStartLocalPos.fields.z;
    if ( !byte_5969AE2 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE2 = 1;
    }
    v17 = z - v16;
    v18.n64_u64[0] = vsub_f32(value, v15).n64_u64[0];
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v14);
    if ( sqrtf(vaddv_f32(vmul_f32(v18, v18)) + (float)(v17 * v17)) <= this->fields.deadZone )
    {
      if ( !byte_59699C0 )
      {
        sub_2213A60(&UnityEngine_Vector2_TypeInfo);
        byte_59699C0 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      v22 = (unsigned __int8)byte_5969AE0;
      this->fields.padAngle = 0.0;
      this->fields.padPosition = zeroVector;
      if ( !v22 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v20 = *(struct UnityEngine_Vector2_o *)&static_fields->zeroVector.fields.x;
      v19 = static_fields->zeroVector.fields.z;
    }
    else
    {
      valueb = (struct UnityEngine_Vector2_o)vdiv_f32(v18, (float32x2_t)this->fields.range).n64_u64[0];
      this->fields.padPosition = valueb;
      v19 = (float)(atan2f(valueb.fields.x, valueb.fields.y) * 180.0) / 3.1416;
      v20 = valueb;
      this->fields.padAngle = v19;
    }
    *(struct UnityEngine_Vector2_o *)&this->fields.padPositionAndAngle.fields.x = v20;
    this->fields.padPositionAndAngle.fields.z = v19;
  }
}


void UIJoystick__OnDrag(UIJoystick_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  void *target; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  _BOOL4 mDragStarted; // w10
  int v13; // w9
  __int64 v14; // x9
  __int64 v15; // x8
  float x; // s9
  float y; // s10
  float z; // s11
  float m_Distance; // s12
  float v20; // s15
  __int64 v21; // kr40_8
  float v22; // s13
  struct UnityEngine_Mathf_StaticFields *v23; // x8
  float v24; // s0
  float v25; // s0
  float v28; // s2
  float v29; // s0
  float v30; // s1
  UnityEngine_Ray_o v31; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v32; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o point; // 0:kr00_12.12
  UnityEngine_Vector3_o v34; // 0:kr14_12.12
  UnityEngine_Vector3_o v35; // 0:kr20_12.12
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E558 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E558 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
    if ( NGUITools__GetActive_56411004(gameObject, 0) )
    {
      target = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7, v8);
        target = UICamera_TypeInfo;
      }
      static_fields = (struct UICamera_StaticFields *)*((_QWORD *)target + 23);
      currentTouch = static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_32;
      mDragStarted = this->fields.mDragStarted;
      currentTouch->fields.clickNotification = 2;
      if ( !mDragStarted )
      {
        v13 = *((_DWORD *)target + 57);
        this->fields.mDragStarted = 1;
        if ( !v13 )
        {
          j_il2cpp_runtime_class_init_0(target, v7, v8);
          static_fields = UICamera_TypeInfo->static_fields;
        }
        point = UnityEngine_RaycastHit__get_point(&static_fields->lastHit, 0);
        target = UICamera_TypeInfo;
        this->fields.mLastPos = point;
      }
      if ( !*((_DWORD *)target + 57) )
      {
        j_il2cpp_runtime_class_init_0(target, v7, v8);
        target = UICamera_TypeInfo;
      }
      v14 = *((_QWORD *)target + 23);
      v15 = *(_QWORD *)(v14 + 160);
      if ( !v15 )
        goto LABEL_32;
      target = *(void **)(v14 + 136);
      if ( !target )
        goto LABEL_32;
      v36.fields.z = 0.0;
      v36.fields.x = *(float *)(v15 + 16);
      v36.fields.y = *(float *)(v15 + 20);
      UnityEngine_Camera__ScreenPointToRay_83198808(&v31, (UnityEngine_Camera_o *)target, v36, 0);
      x = this->fields.mPlane.fields.m_Normal.fields.x;
      y = this->fields.mPlane.fields.m_Normal.fields.y;
      *(_OWORD *)&v32.fields.m_Origin.fields.x = *(_OWORD *)&v31.fields.m_Origin.fields.x;
      z = this->fields.mPlane.fields.m_Normal.fields.z;
      m_Distance = this->fields.mPlane.fields.m_Distance;
      *(_QWORD *)&v32.fields.m_Direction.fields.y = *(_QWORD *)&v31.fields.m_Direction.fields.y;
      v20 = v31.fields.m_Origin.fields.x;
      v21 = *(_QWORD *)&v31.fields.m_Origin.fields.y;
      v22 = (float)(v31.fields.m_Direction.fields.z * z)
          + (float)((float)(v31.fields.m_Direction.fields.x * x) + (float)(v31.fields.m_Direction.fields.y * y));
      if ( !byte_5969AE4 )
      {
        sub_2213A60(&UnityEngine_Mathf_TypeInfo);
        byte_5969AE4 = 1;
      }
      v23 = UnityEngine_Mathf_TypeInfo->static_fields;
      v24 = fmaxf(fabsf(v22), 0.0) * 0.000001;
      if ( v24 <= (float)(v23->Epsilon * 8.0) )
        v24 = v23->Epsilon * 8.0;
      if ( vabds_f32(0.0, v22) >= v24 )
      {
        v25 = (float)((float)-(float)((float)(*((float *)&v21 + 1) * z)
                                    + (float)((float)(v20 * x) + (float)(*(float *)&v21 * y)))
                    - m_Distance)
            / v22;
        if ( v25 > 0.0 )
        {
          v34 = UnityEngine_Ray__GetPoint(&v32, v25, 0);
          v37.fields.x = v34.fields.x - this->fields.mLastPos.fields.x;
          v37.fields.y = v34.fields.y - this->fields.mLastPos.fields.y;
          v37.fields.z = v34.fields.z - this->fields.mLastPos.fields.z;
          this->fields.mLastPos = v34;
          if ( v37.fields.x != 0.0 || v37.fields.y != 0.0 )
          {
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v35 = UnityEngine_Transform__InverseTransformDirection((UnityEngine_Transform_o *)target, v37, 0);
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v38.fields.z = v35.fields.z * this->fields.scale.fields.z;
            v38.fields.y = v35.fields.y * this->fields.scale.fields.y;
            v38.fields.x = v35.fields.x * this->fields.scale.fields.x;
            v37 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)target, v38, 0);
          }
          target = this->fields.target;
          v28 = v37.fields.z + this->fields.totalOffset.fields.z;
          v29 = v37.fields.x + this->fields.totalOffset.fields.x;
          v30 = v37.fields.y + this->fields.totalOffset.fields.y;
          this->fields.totalOffset.fields.z = v28;
          this->fields.totalOffset.fields.x = v29;
          this->fields.totalOffset.fields.y = v30;
          if ( target )
          {
            v39.fields.z = v28 + this->fields.mStartPos.fields.z;
            v39.fields.y = v30 + this->fields.mStartPos.fields.y;
            v39.fields.x = v29 + this->fields.mStartPos.fields.x;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)target, v39, 0);
            return;
          }
LABEL_32:
          sub_2213CDC(target, v7);
        }
      }
    }
  }
}


void UIJoystick__OnPress(UIJoystick_o *this, bool pressed, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UICamera_c *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  float x; // s12
  float y; // s13
  float v18; // s11
  float v19; // s2
  float v20; // s0
  float v21; // s1
  float v22; // s2
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  UnityEngine_Vector3_o v24; // 0:kr30_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr20_16.16

  if ( (byte_596E557 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E557 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5, v6);
    if ( NGUITools__GetActive_56411004(gameObject, 0) )
    {
      this->fields.mPressed = pressed;
      if ( pressed )
      {
        if ( !this->fields.started )
        {
          this->fields.started = 1;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !transform )
            goto LABEL_32;
          this->fields.mStartPos = UnityEngine_Transform__get_position(transform, 0);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !transform )
            goto LABEL_32;
          this->fields.mStartLocalPos = UnityEngine_Transform__get_localPosition(transform, 0);
        }
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( transform )
        {
          UnityEngine_Transform__set_position(transform, this->fields.mStartPos, 0);
          this->fields.mDragStarted = 0;
          if ( !byte_5969AE0 )
          {
            sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          z = static_fields->zeroVector.fields.z;
          v13 = UICamera_TypeInfo;
          *(_QWORD *)&this->fields.totalOffset.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
          this->fields.totalOffset.fields.z = z;
          if ( !*(&v13->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v13, v9, v10);
            v13 = UICamera_TypeInfo;
          }
          transform = (UnityEngine_Transform_o *)v13->static_fields->currentCamera;
          if ( transform )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
            if ( transform )
            {
              rotation = UnityEngine_Transform__get_rotation(transform, 0);
              if ( !byte_596CDEB )
              {
                sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                byte_596CDEB = 1;
              }
              v24 = UnityEngine_Quaternion__op_Multiply_83371700(
                      rotation,
                      UnityEngine_Vector3_TypeInfo->static_fields->backVector,
                      0);
              x = this->fields.mLastPos.fields.x;
              y = this->fields.mLastPos.fields.y;
              v18 = this->fields.mLastPos.fields.z;
              if ( !byte_5969AE3 )
              {
                sub_2213A60(&System_Math_TypeInfo);
                byte_5969AE3 = 1;
              }
              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v14, v15);
              v19 = sqrtf(
                      (float)(v24.fields.z * v24.fields.z)
                    + (float)((float)(v24.fields.x * v24.fields.x) + (float)(v24.fields.y * v24.fields.y)));
              if ( v19 <= 0.00001 )
              {
                if ( !byte_5969AE0 )
                {
                  sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                  byte_5969AE0 = 1;
                }
                v23 = UnityEngine_Vector3_TypeInfo->static_fields;
                v20 = v23->zeroVector.fields.x;
                v21 = v23->zeroVector.fields.y;
                v22 = v23->zeroVector.fields.z;
              }
              else
              {
                v20 = v24.fields.x / v19;
                v21 = v24.fields.y / v19;
                v22 = v24.fields.z / v19;
              }
              this->fields.mPlane.fields.m_Normal.fields.x = v20;
              this->fields.mPlane.fields.m_Normal.fields.y = v21;
              this->fields.mPlane.fields.m_Normal.fields.z = v22;
              this->fields.mPlane.fields.m_Distance = -(float)((float)(v18 * v22)
                                                             + (float)((float)(x * v20) + (float)(y * v21)));
              return;
            }
          }
        }
LABEL_32:
        sub_2213CDC(transform, v9);
      }
    }
  }
}


void UIJoystick__Start(UIJoystick_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.target = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.target, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}


void UIJoystick__Update(UIJoystick_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *target; // x0
  UnityEngine_Transform_o *v4; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v8; // s0
  float v9; // s1
  float v10; // s3
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v12; // 0:kr14_12.12
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.mPressed )
  {
    target = this->fields.target;
    if ( !target )
      goto LABEL_11;
    position = UnityEngine_Transform__get_position(target, 0);
    if ( (float)((float)((float)(position.fields.z - this->fields.mStartPos.fields.z)
                       * (float)(position.fields.z - this->fields.mStartPos.fields.z))
               + (float)((float)((float)(position.fields.x - this->fields.mStartPos.fields.x)
                               * (float)(position.fields.x - this->fields.mStartPos.fields.x))
                       + (float)((float)(position.fields.y - this->fields.mStartPos.fields.y)
                               * (float)(position.fields.y - this->fields.mStartPos.fields.y)))) >= 0.1 )
      return;
    v4 = this->fields.target;
    if ( !v4 )
LABEL_11:
      sub_2213CDC(target, method);
    v12 = UnityEngine_Transform__get_position(this->fields.target, 0);
    x = this->fields.mStartPos.fields.x;
    y = this->fields.mStartPos.fields.y;
    z = this->fields.mStartPos.fields.z;
    v8 = UnityEngine_Time__get_deltaTime(0) * this->fields.springBackSpeed;
    v9 = 1.0;
    if ( v8 <= 1.0 )
      v9 = v8;
    if ( v8 < 0.0 )
      v9 = 0.0;
    v10 = (float)(z - v12.fields.z) * v9;
    v13.fields.x = v12.fields.x + (float)((float)(x - v12.fields.x) * v9);
    v13.fields.y = v12.fields.y + (float)((float)(y - v12.fields.y) * v9);
    v13.fields.z = v12.fields.z + v10;
    UnityEngine_Transform__set_position(v4, v13, 0);
  }
}


bool UIJoystick__Vector3AlmostEquals(
        UnityEngine_Vector3_o target,
        UnityEngine_Vector3_o second,
        float sqrMagniturePrecision,
        const MethodInfo *method)
{
  return (float)((float)((float)(target.fields.z - second.fields.z) * (float)(target.fields.z - second.fields.z))
               + (float)((float)((float)(target.fields.x - second.fields.x) * (float)(target.fields.x - second.fields.x))
                       + (float)((float)(target.fields.y - second.fields.y) * (float)(target.fields.y - second.fields.y)))) < sqrMagniturePrecision;
}