void UIDragResize___ctor(UIDragResize_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.pivot = xmmword_C12C00;
  this->fields.maxHeight = 100000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragResize__OnDrag(UIDragResize_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x1
  float z; // s8
  float y; // s14
  float x; // s15
  float m_Distance; // s9
  float v10; // s13
  __int64 v11; // kr00_8
  float v12; // s11
  float v13; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v15; // s8
  UIRect_o *cachedTransform; // x0
  UnityEngine_Transform_o *v17; // x20
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float w; // s11
  float v25; // s8
  float v26; // s9
  UnityEngine_Ray_o v27; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v28; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B38B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B38B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.mDragging )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__get_currentRay(&v27, 0);
      v28 = v27;
      z = v27.fields.m_Origin.fields.z;
      x = this->fields.mPlane.fields.m_Normal.fields.x;
      y = this->fields.mPlane.fields.m_Normal.fields.y;
      v10 = this->fields.mPlane.fields.m_Normal.fields.z;
      m_Distance = this->fields.mPlane.fields.m_Distance;
      v11 = *(_QWORD *)&v27.fields.m_Origin.fields.x;
      v12 = (float)(v27.fields.m_Direction.fields.z * v10)
          + (float)((float)(v27.fields.m_Direction.fields.x * x) + (float)(v27.fields.m_Direction.fields.y * y));
      if ( !byte_4C506A5 )
      {
        sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
        byte_4C506A5 = 1;
      }
      v13 = fmaxf(fabsf(v12), 0.0) * 0.000001;
      static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
      if ( v13 <= (float)(static_fields->Epsilon * 8.0) )
        v13 = static_fields->Epsilon * 8.0;
      if ( vabds_f32(0.0, v12) >= v13 )
      {
        v15 = (float)((float)-(float)((float)(z * v10)
                                    + (float)((float)(*(float *)&v11 * x) + (float)(*((float *)&v11 + 1) * y)))
                    - m_Distance)
            / v12;
        if ( v15 > 0.0 )
        {
          cachedTransform = (UIRect_o *)this->fields.target;
          if ( !cachedTransform
            || (cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0)) == 0
            || (v17 = (UnityEngine_Transform_o *)cachedTransform,
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)cachedTransform,
                  this->fields.mLocalPos,
                  0),
                (cachedTransform = (UIRect_o *)this->fields.target) == 0)
            || (UIWidget__set_width((UIWidget_o *)cachedTransform, this->fields.mWidth, 0),
                (cachedTransform = (UIRect_o *)this->fields.target) == 0) )
          {
            sub_1C3E7C0(cachedTransform, v5);
          }
          UIWidget__set_height((UIWidget_o *)cachedTransform, this->fields.mHeight, 0);
          Point = UnityEngine_Ray__GetPoint(&v28, v15, 0);
          v18 = Point.fields.x - this->fields.mRayPos.fields.x;
          v19 = Point.fields.y - this->fields.mRayPos.fields.y;
          v20 = Point.fields.z - this->fields.mRayPos.fields.z;
          position = UnityEngine_Transform__get_position(v17, 0);
          position.fields.x = v18 + position.fields.x;
          position.fields.y = v19 + position.fields.y;
          position.fields.z = v20 + position.fields.z;
          UnityEngine_Transform__set_position(v17, position, 0);
          localRotation = UnityEngine_Transform__get_localRotation(v17, 0);
          v34 = UnityEngine_Quaternion__Inverse(localRotation, 0);
          v21 = v34.fields.x;
          v22 = v34.fields.y;
          v23 = v34.fields.z;
          w = v34.fields.w;
          *(UnityEngine_Vector3_o *)&v35.fields.x = UnityEngine_Transform__get_localPosition(v17, 0);
          v32.fields.x = v35.fields.x - this->fields.mLocalPos.fields.x;
          v32.fields.y = v35.fields.y - this->fields.mLocalPos.fields.y;
          v32.fields.z = v35.fields.z - this->fields.mLocalPos.fields.z;
          v35.fields.x = v21;
          v35.fields.y = v22;
          v35.fields.z = v23;
          v35.fields.w = w;
          v31 = UnityEngine_Quaternion__op_Multiply_71280864(v35, v32, 0);
          v25 = v31.fields.x;
          v26 = v31.fields.y;
          UnityEngine_Transform__set_localPosition(v17, this->fields.mLocalPos, 0);
          NGUIMath__ResizeWidget_49377212(
            this->fields.target,
            this->fields.pivot,
            v25,
            v26,
            this->fields.minWidth,
            this->fields.minHeight,
            this->fields.maxWidth,
            this->fields.maxHeight,
            0);
        }
      }
    }
  }
}


void UIDragResize__OnDragEnd(UIDragResize_o *this, const MethodInfo *method)
{
  this->fields.mDragging = 0;
}


void UIDragResize__OnDragStart(UIDragResize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UIRect_o *cachedTransform; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s4
  float v9; // s5
  float v10; // s2
  float v11; // s3
  float z; // s8
  float y; // s14
  float x; // s15
  float m_Distance; // s9
  float v16; // s13
  __int64 v17; // kr00_8
  float v18; // s11
  float v19; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v21; // s0
  struct UIWidget_o *v22; // x8
  __int64 v23; // d0
  UnityEngine_Ray_o v24; // [xsp+18h] [xbp-A8h] BYREF
  struct UnityEngine_Plane_o v25; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Ray_o v26; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B38A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B38A = 1;
  }
  memset(&v26, 0, sizeof(v26));
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    cachedTransform = (UIRect_o *)this->fields.target;
    if ( !cachedTransform )
      goto LABEL_23;
    cachedTransform = (UIRect_o *)((__int64 (__fastcall *)(UIRect_o *, const MethodInfo *))cachedTransform->klass->vtable._11_unknown.methodPtr)(
                                    cachedTransform,
                                    cachedTransform->klass->vtable._11_unknown.method);
    if ( !cachedTransform )
      goto LABEL_23;
    if ( LODWORD(cachedTransform->fields.m_CancellationTokenSource) < 4 )
      sub_1C3E7C8(cachedTransform, v4);
    v6 = *(float *)&cachedTransform->fields.leftAnchor;
    v7 = *((float *)&cachedTransform->fields.leftAnchor + 1);
    v8 = *(float *)&cachedTransform->fields.bottomAnchor;
    v9 = *((float *)&cachedTransform->fields.bottomAnchor + 1);
    v10 = *(float *)&cachedTransform->fields.rightAnchor;
    v11 = *((float *)&cachedTransform->fields.rightAnchor + 1);
    v25 = (struct UnityEngine_Plane_o)0LL;
    sub_2F01B3C(&v25, 0, v6, v7, v10, v11, v8, v9);
    this->fields.mPlane = v25;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__get_currentRay(&v24, 0);
    v26 = v24;
    z = v24.fields.m_Origin.fields.z;
    x = this->fields.mPlane.fields.m_Normal.fields.x;
    y = this->fields.mPlane.fields.m_Normal.fields.y;
    v16 = this->fields.mPlane.fields.m_Normal.fields.z;
    m_Distance = this->fields.mPlane.fields.m_Distance;
    v17 = *(_QWORD *)&v24.fields.m_Origin.fields.x;
    v18 = (float)(v24.fields.m_Direction.fields.z * v16)
        + (float)((float)(v24.fields.m_Direction.fields.x * x) + (float)(v24.fields.m_Direction.fields.y * y));
    if ( !byte_4C506A5 )
    {
      sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
      byte_4C506A5 = 1;
    }
    v19 = fmaxf(fabsf(v18), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v19 <= (float)(static_fields->Epsilon * 8.0) )
      v19 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, v18) >= v19 )
    {
      v21 = (float)((float)-(float)((float)(z * v16)
                                  + (float)((float)(*(float *)&v17 * x) + (float)(*((float *)&v17 + 1) * y)))
                  - m_Distance)
          / v18;
      if ( v21 > 0.0 )
      {
        Point = UnityEngine_Ray__GetPoint(&v26, v21, 0);
        cachedTransform = (UIRect_o *)this->fields.target;
        this->fields.mRayPos = Point;
        if ( cachedTransform )
        {
          cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0);
          if ( cachedTransform )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
            v22 = this->fields.target;
            this->fields.mLocalPos = localPosition;
            if ( v22 )
            {
              v23 = *(_QWORD *)&v22->fields.mWidth;
              this->fields.mDragging = 1;
              *(_QWORD *)&this->fields.mWidth = v23;
              return;
            }
          }
        }
LABEL_23:
        sub_1C3E7C0(cachedTransform, v4);
      }
    }
  }
}