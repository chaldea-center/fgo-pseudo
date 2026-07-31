void UIJoystick___ctor(UIJoystick_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
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


// local variable allocation has failed, the output may be wrong!
void UIJoystick__LateUpdate(UIJoystick_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *target; // x0
  __int64 v4; // x2
  float z; // s8
  float x; // s3
  float v7; // v0.s[1]
  float v8; // s9
  float32x2_t v9; // d3
  struct UnityEngine_Vector2_o range; // d4
  float v11; // v0.s[1]
  int8x8_t v12; // d2
  int8x8_t v13; // d4
  __int64 v14; // x1
  __int64 v15; // x2
  float32x2_t v16; // d9
  float v17; // s10
  float v18; // s8
  float32x2_t v19; // d9
  float v20; // s0
  struct UnityEngine_Vector2_o v21; // d1
  struct UnityEngine_Vector2_o zeroVector; // d0
  int v23; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // [xsp+0h] [xbp-70h]
  float v26; // [xsp+10h] [xbp-60h]
  float v27; // [xsp+10h] [xbp-60h]
  float valuea; // [xsp+20h] [xbp-50h]
  __int64 valueb; // [xsp+20h] [xbp-50h]
  float32x2_t value; // [xsp+20h] [xbp-50h]
  struct UnityEngine_Vector2_o valuec; // [xsp+20h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.started )
  {
    target = (UnityEngine_Component_o *)this->fields.target;
    if ( !target )
      goto LABEL_27;
    target = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(target, 0);
    if ( !target )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)target, 0);
    z = localPosition.fields.z;
    if ( this->fields.circularPadConstraint )
    {
      x = this->fields.range.fields.x;
      if ( !byte_5936480 )
      {
        v26 = this->fields.range.fields.x;
        valuea = localPosition.fields.x;
        y = localPosition.fields.y;
        sub_21FFC50(&System_Math_TypeInfo);
        localPosition.fields.y = y;
        x = v26;
        localPosition.fields.x = valuea;
        byte_5936480 = 1;
      }
      v7 = localPosition.fields.y;
      v8 = (float)(z * z)
         + (float)((float)(localPosition.fields.x * localPosition.fields.x)
                 + (float)(localPosition.fields.y * localPosition.fields.y));
      if ( v8 > (float)(x * x) )
      {
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        {
          v27 = x;
          valueb = *(_QWORD *)&localPosition.fields.x;
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v4);
          x = v27;
          *(_QWORD *)&localPosition.fields.x = valueb;
        }
        localPosition.fields.z = sqrtf(v8);
        *(float32x2_t *)&localPosition.fields.x = vmul_n_f32(
                                                    vdiv_f32(
                                                      *(float32x2_t *)&localPosition.fields.x,
                                                      vdup_lane_s32(*(int32x2_t *)&localPosition.fields.z, 0)),
                                                    x);
        z = (float)(z / localPosition.fields.z) * x;
      }
    }
    else
    {
      v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.mStartLocalPos.fields.x;
      range = this->fields.range;
      v11 = localPosition.fields.y;
      v12.n64_u64[0] = vadd_f32(v9, (float32x2_t)range).n64_u64[0];
      v13.n64_u64[0] = vsub_f32(v9, (float32x2_t)range).n64_u64[0];
      *(int8x8_t *)&localPosition.fields.x = vbsl_s8(
                                               vcgt_f32(v13, *(float32x2_t *)&localPosition.fields.x),
                                               v13,
                                               vbsl_s8(
                                                 vcgt_f32(*(float32x2_t *)&localPosition.fields.x, v12),
                                                 v12,
                                                 *(int8x8_t *)&localPosition.fields.x));
    }
    target = (UnityEngine_Component_o *)this->fields.target;
    value.n64_u64[0] = *(unsigned __int64 *)&localPosition.fields.x;
    if ( !target || (target = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(target, 0)) == 0 )
LABEL_27:
      sub_21FFECC(target, method);
    LODWORD(v33.fields.x) = value.n64_u32[0];
    v33.fields.z = z;
    LODWORD(v33.fields.y) = value.n64_u32[1];
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)target, v33, 0);
    v16.n64_u64[0] = *(unsigned __int64 *)&this->fields.mStartLocalPos.fields.x;
    v17 = this->fields.mStartLocalPos.fields.z;
    if ( !byte_5931942 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931942 = 1;
    }
    v18 = z - v17;
    v19.n64_u64[0] = vsub_f32(value, v16).n64_u64[0];
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v14, v15);
    if ( sqrtf(vaddv_f32(vmul_f32(v19, v19)) + (float)(v18 * v18)) <= this->fields.deadZone )
    {
      if ( !byte_5931820 )
      {
        sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
        byte_5931820 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      v23 = (unsigned __int8)byte_5931940;
      this->fields.padAngle = 0.0;
      this->fields.padPosition = zeroVector;
      if ( !v23 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v21 = *(struct UnityEngine_Vector2_o *)&static_fields->zeroVector.fields.x;
      v20 = static_fields->zeroVector.fields.z;
    }
    else
    {
      valuec = (struct UnityEngine_Vector2_o)vdiv_f32(v19, (float32x2_t)this->fields.range).n64_u64[0];
      this->fields.padPosition = valuec;
      v20 = (float)(atan2f(valuec.fields.x, valuec.fields.y) * 180.0) / 3.1416;
      v21 = valuec;
      this->fields.padAngle = v20;
    }
    *(struct UnityEngine_Vector2_o *)&this->fields.padPositionAndAngle.fields.x = v21;
    this->fields.padPositionAndAngle.fields.z = v20;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v21; // kr00_8
  float v22; // s13
  struct UnityEngine_Mathf_StaticFields *v23; // x8
  float v24; // s0
  float v25; // s0
  float v26; // s3
  float v27; // s4
  float v28; // s5
  float v29; // s0 OVERLAPPED
  float v30; // s1
  float v31; // s2
  float v32; // s2
  float v33; // s0
  float v34; // s1
  UnityEngine_Ray_o v35; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v36; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59363FE & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363FE = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
    if ( NGUITools__GetActive_56206348(gameObject, 0) )
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
      v38.fields.z = 0.0;
      v38.fields.x = *(float *)(v15 + 16);
      v38.fields.y = *(float *)(v15 + 20);
      UnityEngine_Camera__ScreenPointToRay_82985504(&v35, (UnityEngine_Camera_o *)target, v38, 0);
      x = this->fields.mPlane.fields.m_Normal.fields.x;
      y = this->fields.mPlane.fields.m_Normal.fields.y;
      *(_OWORD *)&v36.fields.m_Origin.fields.x = *(_OWORD *)&v35.fields.m_Origin.fields.x;
      z = this->fields.mPlane.fields.m_Normal.fields.z;
      m_Distance = this->fields.mPlane.fields.m_Distance;
      *(_QWORD *)&v36.fields.m_Direction.fields.y = *(_QWORD *)&v35.fields.m_Direction.fields.y;
      v20 = v35.fields.m_Origin.fields.x;
      v21 = *(_QWORD *)&v35.fields.m_Origin.fields.y;
      v22 = (float)(v35.fields.m_Direction.fields.z * z)
          + (float)((float)(v35.fields.m_Direction.fields.x * x) + (float)(v35.fields.m_Direction.fields.y * y));
      if ( !byte_5931944 )
      {
        sub_21FFC50(&UnityEngine_Mathf_TypeInfo);
        byte_5931944 = 1;
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
          v39 = UnityEngine_Ray__GetPoint(&v36, v25, 0);
          v26 = v39.fields.x;
          v27 = v39.fields.y;
          v28 = v39.fields.z;
          v29 = v39.fields.x - this->fields.mLastPos.fields.x;
          v30 = v39.fields.y - this->fields.mLastPos.fields.y;
          v31 = v39.fields.z - this->fields.mLastPos.fields.z;
          this->fields.mLastPos.fields.x = v26;
          this->fields.mLastPos.fields.y = v27;
          this->fields.mLastPos.fields.z = v28;
          if ( v29 != 0.0 || v30 != 0.0 )
          {
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v40 = UnityEngine_Transform__InverseTransformDirection(
                    (UnityEngine_Transform_o *)target,
                    *(UnityEngine_Vector3_o *)&v29,
                    0);
            target = this->fields.target;
            if ( !target )
              goto LABEL_32;
            v41.fields.z = v40.fields.z * this->fields.scale.fields.z;
            v41.fields.y = v40.fields.y * this->fields.scale.fields.y;
            v41.fields.x = v40.fields.x * this->fields.scale.fields.x;
            *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__TransformDirection(
                                               (UnityEngine_Transform_o *)target,
                                               v41,
                                               0);
          }
          target = this->fields.target;
          v32 = v31 + this->fields.totalOffset.fields.z;
          v33 = v29 + this->fields.totalOffset.fields.x;
          v34 = v30 + this->fields.totalOffset.fields.y;
          this->fields.totalOffset.fields.z = v32;
          this->fields.totalOffset.fields.x = v33;
          this->fields.totalOffset.fields.y = v34;
          if ( target )
          {
            v42.fields.z = v32 + this->fields.mStartPos.fields.z;
            v42.fields.y = v34 + this->fields.mStartPos.fields.y;
            v42.fields.x = v33 + this->fields.mStartPos.fields.x;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)target, v42, 0);
            return;
          }
LABEL_32:
          sub_21FFECC(target, v7);
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
  float x; // s8
  float y; // s9
  float v16; // s10
  float w; // s11
  __int64 v18; // x1
  __int64 v19; // x2
  float v20; // s8
  float v21; // s9
  float v22; // s10
  float v23; // s12
  float v24; // s13
  float v25; // s11
  float v26; // s2
  float v27; // s0
  float v28; // s1
  float v29; // s2
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59363FD & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363FD = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5, v6);
    if ( NGUITools__GetActive_56206348(gameObject, 0) )
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
          if ( !byte_5931940 )
          {
            sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931940 = 1;
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
              x = rotation.fields.x;
              y = rotation.fields.y;
              v16 = rotation.fields.z;
              w = rotation.fields.w;
              if ( !byte_5934CBC )
              {
                sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                byte_5934CBC = 1;
              }
              v33.fields.x = x;
              v33.fields.y = y;
              v33.fields.z = v16;
              v33.fields.w = w;
              v31 = UnityEngine_Quaternion__op_Multiply_83158396(
                      v33,
                      UnityEngine_Vector3_TypeInfo->static_fields->backVector,
                      0);
              v20 = v31.fields.x;
              v21 = v31.fields.y;
              v22 = v31.fields.z;
              v23 = this->fields.mLastPos.fields.x;
              v24 = this->fields.mLastPos.fields.y;
              v25 = this->fields.mLastPos.fields.z;
              if ( !byte_5931943 )
              {
                sub_21FFC50(&System_Math_TypeInfo);
                byte_5931943 = 1;
              }
              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18, v19);
              v26 = sqrtf((float)(v22 * v22) + (float)((float)(v20 * v20) + (float)(v21 * v21)));
              if ( v26 <= 0.00001 )
              {
                if ( !byte_5931940 )
                {
                  sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                  byte_5931940 = 1;
                }
                v30 = UnityEngine_Vector3_TypeInfo->static_fields;
                v27 = v30->zeroVector.fields.x;
                v28 = v30->zeroVector.fields.y;
                v29 = v30->zeroVector.fields.z;
              }
              else
              {
                v27 = v20 / v26;
                v28 = v21 / v26;
                v29 = v22 / v26;
              }
              this->fields.mPlane.fields.m_Normal.fields.x = v27;
              this->fields.mPlane.fields.m_Normal.fields.y = v28;
              this->fields.mPlane.fields.m_Normal.fields.z = v29;
              this->fields.mPlane.fields.m_Distance = -(float)((float)(v25 * v29)
                                                             + (float)((float)(v23 * v27) + (float)(v24 * v28)));
              return;
            }
          }
        }
LABEL_32:
        sub_21FFECC(transform, v9);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.target, (int32_t)transform, v4, v5, v6, v7, v8, v9);
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
  float v13; // s3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

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
      sub_21FFECC(target, method);
    v15 = UnityEngine_Transform__get_position(this->fields.target, 0);
    x = this->fields.mStartPos.fields.x;
    y = this->fields.mStartPos.fields.y;
    z = this->fields.mStartPos.fields.z;
    v8 = v15.fields.x;
    v9 = v15.fields.y;
    v10 = v15.fields.z;
    v11 = UnityEngine_Time__get_deltaTime(0) * this->fields.springBackSpeed;
    v12 = 1.0;
    if ( v11 <= 1.0 )
      v12 = v11;
    if ( v11 < 0.0 )
      v12 = 0.0;
    v13 = (float)(z - v10) * v12;
    v16.fields.x = v8 + (float)((float)(x - v8) * v12);
    v16.fields.y = v9 + (float)((float)(y - v9) * v12);
    v16.fields.z = v10 + v13;
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