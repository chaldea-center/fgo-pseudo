void UIJoystick___ctor(UIJoystick_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d1
  float z; // s2

  if ( !byte_4C506A6 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.deadZone = 4.0;
  this->fields.range = (struct UnityEngine_Vector2_o)vdup_n_s32(0x42C80000u).n64_u64[0];
  *(_QWORD *)&this->fields.scale.fields.x = v4;
  this->fields.scale.fields.z = z;
  this->fields.springBackSpeed = 20.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIJoystick__LateUpdate(UIJoystick_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *target; // x0
  float x; // s8
  float y; // s11
  float z; // s9
  float v7; // s12
  float v8; // s10
  float v9; // s0
  float v10; // s10
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float v14; // s3
  float v15; // s4
  float v16; // s2
  float v17; // s0
  float v18; // s11
  float v19; // s12
  float v20; // s13
  float v21; // s8
  float v22; // s10
  float v23; // s9
  float v24; // s8
  float v25; // s9
  float v26; // s0
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.started )
  {
    target = (UnityEngine_Component_o *)this->fields.target;
    if ( !target )
      goto LABEL_36;
    target = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(target, 0);
    if ( !target )
      goto LABEL_36;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)target, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( this->fields.circularPadConstraint )
    {
      v7 = this->fields.range.fields.x;
      if ( !byte_4C54C0F )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C54C0F = 1;
      }
      v8 = (float)(z * z) + (float)((float)(x * x) + (float)(y * y));
      if ( v8 <= (float)(v7 * v7) )
      {
        v10 = y;
      }
      else
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v9 = sqrtf(v8);
        x = (float)(x / v9) * v7;
        v10 = (float)(y / v9) * v7;
        z = (float)(z / v9) * v7;
      }
    }
    else
    {
      v12 = this->fields.range.fields.x;
      v11 = this->fields.range.fields.y;
      v14 = this->fields.mStartLocalPos.fields.x;
      v13 = this->fields.mStartLocalPos.fields.y;
      v15 = v14 - v12;
      v16 = v14 + v12;
      v10 = v13 - v11;
      if ( x <= v16 )
        v16 = x;
      if ( x < v15 )
        x = v15;
      else
        x = v16;
      if ( y >= v10 )
      {
        v17 = v13 + v11;
        if ( y <= v17 )
          v10 = y;
        else
          v10 = v17;
      }
    }
    target = (UnityEngine_Component_o *)this->fields.target;
    if ( !target || (target = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(target, 0)) == 0 )
LABEL_36:
      sub_1C3E7C0(target, method);
    v30.fields.x = x;
    v30.fields.y = v10;
    v30.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, v30, 0);
    v18 = this->fields.mStartLocalPos.fields.x;
    v19 = this->fields.mStartLocalPos.fields.y;
    v20 = this->fields.mStartLocalPos.fields.z;
    if ( !byte_4C506A3 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C506A3 = 1;
    }
    v21 = x - v18;
    v22 = v10 - v19;
    v23 = z - v20;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)((float)(v21 * v21) + (float)(v22 * v22)) + (float)(v23 * v23)) <= this->fields.deadZone )
    {
      if ( !byte_4C5059A )
      {
        sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
        byte_4C5059A = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      this->fields.padAngle = 0.0;
      this->fields.padPosition = zeroVector;
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v24 = static_fields->zeroVector.fields.x;
      v25 = static_fields->zeroVector.fields.y;
      v26 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v24 = v21 / this->fields.range.fields.x;
      v25 = v22 / this->fields.range.fields.y;
      this->fields.padPosition.fields.x = v24;
      this->fields.padPosition.fields.y = v25;
      v26 = (float)(atan2f(v24, v25) * 180.0) / 3.1416;
      this->fields.padAngle = v26;
    }
    this->fields.padPositionAndAngle.fields.x = v24;
    this->fields.padPositionAndAngle.fields.y = v25;
    this->fields.padPositionAndAngle.fields.z = v26;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIJoystick__OnDrag(UIJoystick_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v5; // x1
  void *target; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  __int64 v9; // x9
  __int64 v10; // x8
  float z; // s9
  float x; // s8
  float y; // s15
  float m_Distance; // s10
  float v15; // s14
  __int64 v16; // kr00_8
  float v17; // s12
  struct UnityEngine_Mathf_StaticFields *v18; // x8
  float v19; // s0
  float v20; // s0
  float v21; // s3
  float v22; // s4
  float v23; // s5
  float v24; // s0 OVERLAPPED
  float v25; // s1
  float v26; // s2
  float v27; // s0
  float v28; // s1
  float v29; // s2
  UnityEngine_Ray_o v30; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v31; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mLastPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C54B91 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C54B91 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49418336(gameObject, 0) )
    {
      target = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        target = UICamera_TypeInfo;
      }
      static_fields = (struct UICamera_StaticFields *)*((_QWORD *)target + 23);
      currentTouch = static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_32;
      currentTouch->fields.clickNotification = 2;
      if ( !this->fields.mDragStarted )
      {
        this->fields.mDragStarted = 1;
        if ( !*((_DWORD *)target + 56) )
        {
          j_il2cpp_runtime_class_init_0(target);
          static_fields = UICamera_TypeInfo->static_fields;
        }
        this->fields.mLastPos = UnityEngine_RaycastHit__get_point(&static_fields->lastHit, 0);
        target = UICamera_TypeInfo;
      }
      if ( !*((_DWORD *)target + 56) )
      {
        j_il2cpp_runtime_class_init_0(target);
        target = UICamera_TypeInfo;
      }
      v9 = *((_QWORD *)target + 23);
      v10 = *(_QWORD *)(v9 + 160);
      if ( !v10 )
        goto LABEL_32;
      target = *(void **)(v9 + 136);
      if ( !target )
        goto LABEL_32;
      v32.fields.x = *(float *)(v10 + 16);
      v32.fields.y = *(float *)(v10 + 20);
      v32.fields.z = 0.0;
      UnityEngine_Camera__ScreenPointToRay_71148320(&v30, (UnityEngine_Camera_o *)target, v32, 0);
      v31 = v30;
      z = v30.fields.m_Origin.fields.z;
      x = this->fields.mPlane.fields.m_Normal.fields.x;
      y = this->fields.mPlane.fields.m_Normal.fields.y;
      v15 = this->fields.mPlane.fields.m_Normal.fields.z;
      m_Distance = this->fields.mPlane.fields.m_Distance;
      v16 = *(_QWORD *)&v30.fields.m_Origin.fields.x;
      v17 = (float)(v30.fields.m_Direction.fields.z * v15)
          + (float)((float)(v30.fields.m_Direction.fields.x * x) + (float)(v30.fields.m_Direction.fields.y * y));
      if ( !byte_4C506A5 )
      {
        sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
        byte_4C506A5 = 1;
      }
      v18 = UnityEngine_Mathf_TypeInfo->static_fields;
      v19 = fmaxf(fabsf(v17), 0.0) * 0.000001;
      if ( v19 <= (float)(v18->Epsilon * 8.0) )
        v19 = v18->Epsilon * 8.0;
      if ( vabds_f32(0.0, v17) >= v19 )
      {
        v20 = (float)((float)-(float)((float)(z * v15)
                                    + (float)((float)(*(float *)&v16 * x) + (float)(*((float *)&v16 + 1) * y)))
                    - m_Distance)
            / v17;
        if ( v20 > 0.0 )
        {
          Point = UnityEngine_Ray__GetPoint(&v31, v20, 0);
          v21 = Point.fields.x;
          v22 = Point.fields.y;
          v23 = Point.fields.z;
          mLastPos = this->fields.mLastPos;
          this->fields.mLastPos.fields.x = v21;
          this->fields.mLastPos.fields.y = v22;
          v24 = v21 - mLastPos.fields.x;
          v25 = v22 - mLastPos.fields.y;
          v26 = v23 - mLastPos.fields.z;
          this->fields.mLastPos.fields.z = v23;
          if ( v24 != 0.0 || v25 != 0.0 )
          {
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v35 = UnityEngine_Transform__InverseTransformDirection(
                    (UnityEngine_Transform_o *)target,
                    *(UnityEngine_Vector3_o *)&v24,
                    0);
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v36.fields.z = v35.fields.z * this->fields.scale.fields.z;
            v36.fields.y = v35.fields.y * this->fields.scale.fields.y;
            v36.fields.x = v35.fields.x * this->fields.scale.fields.x;
            *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__TransformDirection(
                                               (UnityEngine_Transform_o *)target,
                                               v36,
                                               0);
          }
          target = this->fields.target;
          v27 = v24 + this->fields.totalOffset.fields.x;
          v28 = v25 + this->fields.totalOffset.fields.y;
          v29 = v26 + this->fields.totalOffset.fields.z;
          this->fields.totalOffset.fields.x = v27;
          this->fields.totalOffset.fields.y = v28;
          this->fields.totalOffset.fields.z = v29;
          if ( target )
          {
            v37.fields.z = v29 + this->fields.mStartPos.fields.z;
            v37.fields.y = v28 + this->fields.mStartPos.fields.y;
            v37.fields.x = v27 + this->fields.mStartPos.fields.x;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)target, v37, 0);
            return;
          }
LABEL_32:
          sub_1C3E7C0(target, v5);
        }
      }
    }
  }
}


void UIJoystick__OnPress(UIJoystick_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UICamera_c *v10; // x0
  float x; // s8
  float y; // s9
  float v13; // s10
  float w; // s11
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s2
  float v22; // s0
  float v23; // s1
  float v24; // s2
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C54B90 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C54B90 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49418336(gameObject, 0) )
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
          if ( !byte_4C506A1 )
          {
            sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          z = static_fields->zeroVector.fields.z;
          *(_QWORD *)&this->fields.totalOffset.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
          this->fields.totalOffset.fields.z = z;
          v10 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v10 = UICamera_TypeInfo;
          }
          transform = (UnityEngine_Transform_o *)v10->static_fields->currentCamera;
          if ( transform )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
            if ( transform )
            {
              rotation = UnityEngine_Transform__get_rotation(transform, 0);
              x = rotation.fields.x;
              y = rotation.fields.y;
              v13 = rotation.fields.z;
              w = rotation.fields.w;
              if ( !byte_4C53574 )
              {
                sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                byte_4C53574 = 1;
              }
              v28.fields.x = x;
              v28.fields.y = y;
              v28.fields.z = v13;
              v28.fields.w = w;
              v26 = UnityEngine_Quaternion__op_Multiply_71280864(
                      v28,
                      UnityEngine_Vector3_TypeInfo->static_fields->backVector,
                      0);
              v15 = this->fields.mLastPos.fields.x;
              v16 = this->fields.mLastPos.fields.y;
              v17 = this->fields.mLastPos.fields.z;
              v18 = v26.fields.x;
              v19 = v26.fields.y;
              v20 = v26.fields.z;
              if ( !byte_4C506A4 )
              {
                sub_1C3E564(&System_Math_TypeInfo);
                byte_4C506A4 = 1;
              }
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v21 = sqrtf((float)(v20 * v20) + (float)((float)(v18 * v18) + (float)(v19 * v19)));
              if ( v21 <= 0.00001 )
              {
                if ( !byte_4C506A1 )
                {
                  sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
                  byte_4C506A1 = 1;
                }
                v25 = UnityEngine_Vector3_TypeInfo->static_fields;
                v22 = v25->zeroVector.fields.x;
                v23 = v25->zeroVector.fields.y;
                v24 = v25->zeroVector.fields.z;
              }
              else
              {
                v22 = v18 / v21;
                v23 = v19 / v21;
                v24 = v20 / v21;
              }
              this->fields.mPlane.fields.m_Normal.fields.x = v22;
              this->fields.mPlane.fields.m_Normal.fields.y = v23;
              this->fields.mPlane.fields.m_Normal.fields.z = v24;
              this->fields.mPlane.fields.m_Distance = -(float)((float)(v17 * v24)
                                                             + (float)((float)(v15 * v22) + (float)(v16 * v23)));
              return;
            }
          }
        }
LABEL_32:
        sub_1C3E7C0(transform, v7);
      }
    }
  }
}


void UIJoystick__Start(UIJoystick_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.target = transform;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.target, (int32_t)transform, v4, v5);
}


void UIJoystick__Update(UIJoystick_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *target; // x0
  UnityEngine_Transform_o *v4; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s0
  float v12; // s1
  bool v13; // nf
  float v14; // s0
  float v15; // s2
  float v16; // s3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.mPressed )
  {
    target = this->fields.target;
    if ( !target )
      goto LABEL_9;
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
LABEL_9:
      sub_1C3E7C0(target, method);
    v18 = UnityEngine_Transform__get_position(this->fields.target, 0);
    x = this->fields.mStartPos.fields.x;
    y = this->fields.mStartPos.fields.y;
    z = this->fields.mStartPos.fields.z;
    v8 = v18.fields.x;
    v9 = v18.fields.y;
    v10 = v18.fields.z;
    v11 = UnityEngine_Time__get_deltaTime(0) * this->fields.springBackSpeed;
    v12 = fminf(v11, 1.0);
    v13 = v11 < 0.0;
    v14 = 0.0;
    if ( !v13 )
      v14 = v12;
    v15 = (float)(y - v9) * v14;
    v16 = (float)(z - v10) * v14;
    v19.fields.x = v8 + (float)((float)(x - v8) * v14);
    v19.fields.y = v9 + v15;
    v19.fields.z = v10 + v16;
    UnityEngine_Transform__set_position(v4, v19, 0);
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