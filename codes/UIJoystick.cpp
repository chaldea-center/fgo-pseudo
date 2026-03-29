void UIJoystick___ctor(UIJoystick_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d1
  float z; // s2

  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
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
  float z; // s9
  float v6; // s12
  float v7; // s10
  float v8; // s0
  float y; // s10
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float v13; // s3
  float v14; // s4
  float v15; // s2
  float v16; // s0
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float v20; // s8
  float v21; // s10
  float v22; // s9
  float v23; // s8
  float v24; // s9
  float v25; // s0
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

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
    z = localPosition.fields.z;
    if ( this->fields.circularPadConstraint )
    {
      v6 = this->fields.range.fields.x;
      if ( !byte_4D2E864 )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2E864 = 1;
      }
      v7 = (float)(localPosition.fields.z * localPosition.fields.z)
         + (float)((float)(localPosition.fields.x * localPosition.fields.x)
                 + (float)(localPosition.fields.y * localPosition.fields.y));
      if ( v7 <= (float)(v6 * v6) )
      {
        y = localPosition.fields.y;
      }
      else
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v8 = sqrtf(v7);
        x = (float)(localPosition.fields.x / v8) * v6;
        y = (float)(localPosition.fields.y / v8) * v6;
        z = (float)(localPosition.fields.z / v8) * v6;
      }
    }
    else
    {
      v11 = this->fields.range.fields.x;
      v10 = this->fields.range.fields.y;
      v13 = this->fields.mStartLocalPos.fields.x;
      v12 = this->fields.mStartLocalPos.fields.y;
      v14 = v13 - v11;
      v15 = v13 + v11;
      y = v12 - v10;
      if ( localPosition.fields.x <= v15 )
        v15 = localPosition.fields.x;
      if ( localPosition.fields.x < v14 )
        x = v14;
      else
        x = v15;
      if ( localPosition.fields.y >= y )
      {
        v16 = v12 + v10;
        if ( localPosition.fields.y <= v16 )
          y = localPosition.fields.y;
        else
          y = v16;
      }
    }
    target = (UnityEngine_Component_o *)this->fields.target;
    if ( !target || (target = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(target, 0)) == 0 )
LABEL_36:
      sub_1C93D2C(target, method);
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, v29, 0);
    v17 = this->fields.mStartLocalPos.fields.x;
    v18 = this->fields.mStartLocalPos.fields.y;
    v19 = this->fields.mStartLocalPos.fields.z;
    if ( !byte_4D2A13B )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13B = 1;
    }
    v20 = x - v17;
    v21 = y - v18;
    v22 = z - v19;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22)) <= this->fields.deadZone )
    {
      if ( !byte_4D2A019 )
      {
        sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
        byte_4D2A019 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      this->fields.padAngle = 0.0;
      this->fields.padPosition = zeroVector;
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v23 = static_fields->zeroVector.fields.x;
      v24 = static_fields->zeroVector.fields.y;
      v25 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v23 = v20 / this->fields.range.fields.x;
      v24 = v21 / this->fields.range.fields.y;
      this->fields.padPosition.fields.x = v23;
      this->fields.padPosition.fields.y = v24;
      v25 = (float)(atan2f(v23, v24) * 180.0) / 3.1416;
      this->fields.padAngle = v25;
    }
    this->fields.padPositionAndAngle.fields.x = v23;
    this->fields.padPositionAndAngle.fields.y = v24;
    this->fields.padPositionAndAngle.fields.z = v25;
  }
}


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
  __int64 v16; // kr40_8
  float v17; // s12
  struct UnityEngine_Mathf_StaticFields *v18; // x8
  float v19; // s0
  float v20; // s0
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v26; // s0
  float v27; // s1
  float v28; // s2
  UnityEngine_Ray_o v29; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v30; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:kr14_12.12
  UnityEngine_Vector3_o v32; // 0:kr20_12.12
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E7E4 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2E7E4 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
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
      v33.fields.x = *(float *)(v10 + 16);
      v33.fields.y = *(float *)(v10 + 20);
      v33.fields.z = 0.0;
      UnityEngine_Camera__ScreenPointToRay_71924968(&v29, (UnityEngine_Camera_o *)target, v33, 0);
      v30 = v29;
      z = v29.fields.m_Origin.fields.z;
      x = this->fields.mPlane.fields.m_Normal.fields.x;
      y = this->fields.mPlane.fields.m_Normal.fields.y;
      v15 = this->fields.mPlane.fields.m_Normal.fields.z;
      m_Distance = this->fields.mPlane.fields.m_Distance;
      v16 = *(_QWORD *)&v29.fields.m_Origin.fields.x;
      v17 = (float)(v29.fields.m_Direction.fields.z * v15)
          + (float)((float)(v29.fields.m_Direction.fields.x * x) + (float)(v29.fields.m_Direction.fields.y * y));
      if ( !byte_4D2A13D )
      {
        sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
        byte_4D2A13D = 1;
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
          Point = UnityEngine_Ray__GetPoint(&v30, v20, 0);
          v21 = this->fields.mLastPos.fields.x;
          v22 = this->fields.mLastPos.fields.y;
          v23 = this->fields.mLastPos.fields.z;
          this->fields.mLastPos = Point;
          v34.fields.x = Point.fields.x - v21;
          v34.fields.y = Point.fields.y - v22;
          v34.fields.z = Point.fields.z - v23;
          if ( v34.fields.x != 0.0 || v34.fields.y != 0.0 )
          {
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v32 = UnityEngine_Transform__InverseTransformDirection((UnityEngine_Transform_o *)target, v34, 0);
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v35.fields.z = v32.fields.z * this->fields.scale.fields.z;
            v35.fields.y = v32.fields.y * this->fields.scale.fields.y;
            v35.fields.x = v32.fields.x * this->fields.scale.fields.x;
            v34 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)target, v35, 0);
          }
          target = this->fields.target;
          v26 = v34.fields.x + this->fields.totalOffset.fields.x;
          v27 = v34.fields.y + this->fields.totalOffset.fields.y;
          v28 = v34.fields.z + this->fields.totalOffset.fields.z;
          this->fields.totalOffset.fields.x = v26;
          this->fields.totalOffset.fields.y = v27;
          this->fields.totalOffset.fields.z = v28;
          if ( target )
          {
            v36.fields.z = v28 + this->fields.mStartPos.fields.z;
            v36.fields.y = v27 + this->fields.mStartPos.fields.y;
            v36.fields.x = v26 + this->fields.mStartPos.fields.x;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)target, v36, 0);
            return;
          }
LABEL_32:
          sub_1C93D2C(target, v5);
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
  float x; // s11
  float y; // s12
  float v13; // s13
  float v14; // s2
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  UnityEngine_Vector3_o v19; // 0:kr30_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr20_16.16

  if ( (byte_4D2E7E3 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2E7E3 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
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
          if ( !byte_4D2A139 )
          {
            sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
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
              if ( !byte_4D2D067 )
              {
                sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                byte_4D2D067 = 1;
              }
              v19 = UnityEngine_Quaternion__op_Multiply_72058644(
                      rotation,
                      UnityEngine_Vector3_TypeInfo->static_fields->backVector,
                      0);
              x = this->fields.mLastPos.fields.x;
              y = this->fields.mLastPos.fields.y;
              v13 = this->fields.mLastPos.fields.z;
              if ( !byte_4D2A13C )
              {
                sub_1C93AD4(&System_Math_TypeInfo);
                byte_4D2A13C = 1;
              }
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              v14 = sqrtf(
                      (float)(v19.fields.z * v19.fields.z)
                    + (float)((float)(v19.fields.x * v19.fields.x) + (float)(v19.fields.y * v19.fields.y)));
              if ( v14 <= 0.00001 )
              {
                if ( !byte_4D2A139 )
                {
                  sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                  byte_4D2A139 = 1;
                }
                v18 = UnityEngine_Vector3_TypeInfo->static_fields;
                v15 = v18->zeroVector.fields.x;
                v16 = v18->zeroVector.fields.y;
                v17 = v18->zeroVector.fields.z;
              }
              else
              {
                v15 = v19.fields.x / v14;
                v16 = v19.fields.y / v14;
                v17 = v19.fields.z / v14;
              }
              this->fields.mPlane.fields.m_Normal.fields.x = v15;
              this->fields.mPlane.fields.m_Normal.fields.y = v16;
              this->fields.mPlane.fields.m_Normal.fields.z = v17;
              this->fields.mPlane.fields.m_Distance = -(float)((float)(v13 * v17)
                                                             + (float)((float)(x * v15) + (float)(y * v16)));
              return;
            }
          }
        }
LABEL_32:
        sub_1C93D2C(transform, v7);
      }
    }
  }
}


void UIJoystick__Start(UIJoystick_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.target = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.target, (int32_t)transform, v4, v5, v6, v7, v8, v9);
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
  bool v10; // nf
  float v11; // s0
  float v12; // s2
  float v13; // s3
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v15; // 0:kr14_12.12
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

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
      sub_1C93D2C(target, method);
    v15 = UnityEngine_Transform__get_position(this->fields.target, 0);
    x = this->fields.mStartPos.fields.x;
    y = this->fields.mStartPos.fields.y;
    z = this->fields.mStartPos.fields.z;
    v8 = UnityEngine_Time__get_deltaTime(0) * this->fields.springBackSpeed;
    v9 = fminf(v8, 1.0);
    v10 = v8 < 0.0;
    v11 = 0.0;
    if ( !v10 )
      v11 = v9;
    v12 = (float)(y - v15.fields.y) * v11;
    v13 = (float)(z - v15.fields.z) * v11;
    v16.fields.x = v15.fields.x + (float)((float)(x - v15.fields.x) * v11);
    v16.fields.y = v15.fields.y + v12;
    v16.fields.z = v15.fields.z + v13;
    UnityEngine_Transform__set_position(v4, v16, 0);
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