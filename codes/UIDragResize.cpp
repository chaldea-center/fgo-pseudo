void UIDragResize___ctor(UIDragResize_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.pivot = xmmword_C0F590;
  this->fields.maxHeight = 100000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragResize__OnDrag(UIDragResize_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  float z; // s8
  float y; // s14
  float x; // s15
  float m_Distance; // s9
  float v9; // s13
  __int64 v10; // kr00_8
  float v11; // s11
  float v12; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v14; // s8
  UIRect_o *cachedTransform; // x0
  UnityEngine_Transform_o *v16; // x20
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s8
  float v21; // s9
  float v22; // s10
  float w; // s11
  float v24; // s8
  float v25; // s9
  UnityEngine_Ray_o v26; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v27; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C47594 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47594 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( this->fields.mDragging )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__get_currentRay(&v26, 0);
      v27 = v26;
      z = v26.fields.m_Origin.fields.z;
      x = this->fields.mPlane.fields.m_Normal.fields.x;
      y = this->fields.mPlane.fields.m_Normal.fields.y;
      v9 = this->fields.mPlane.fields.m_Normal.fields.z;
      m_Distance = this->fields.mPlane.fields.m_Distance;
      v10 = *(_QWORD *)&v26.fields.m_Origin.fields.x;
      v11 = (float)(v26.fields.m_Direction.fields.z * v9)
          + (float)((float)(v26.fields.m_Direction.fields.x * x) + (float)(v26.fields.m_Direction.fields.y * y));
      if ( !byte_4C3C925 )
      {
        sub_1C37058(&UnityEngine_Mathf_TypeInfo);
        byte_4C3C925 = 1;
      }
      v12 = fmaxf(fabsf(v11), 0.0) * 0.000001;
      static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
      if ( v12 <= (float)(static_fields->Epsilon * 8.0) )
        v12 = static_fields->Epsilon * 8.0;
      if ( vabds_f32(0.0, v11) >= v12 )
      {
        v14 = (float)((float)-(float)((float)(z * v9)
                                    + (float)((float)(*(float *)&v10 * x) + (float)(*((float *)&v10 + 1) * y)))
                    - m_Distance)
            / v11;
        if ( v14 > 0.0 )
        {
          cachedTransform = (UIRect_o *)this->fields.target;
          if ( !cachedTransform
            || (cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0)) == 0
            || (v16 = (UnityEngine_Transform_o *)cachedTransform,
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)cachedTransform,
                  this->fields.mLocalPos,
                  0),
                (cachedTransform = (UIRect_o *)this->fields.target) == 0)
            || (UIWidget__set_width((UIWidget_o *)cachedTransform, this->fields.mWidth, 0),
                (cachedTransform = (UIRect_o *)this->fields.target) == 0) )
          {
            sub_1C372B4(cachedTransform);
          }
          UIWidget__set_height((UIWidget_o *)cachedTransform, this->fields.mHeight, 0);
          Point = UnityEngine_Ray__GetPoint(&v27, v14, 0);
          v17 = Point.fields.x - this->fields.mRayPos.fields.x;
          v18 = Point.fields.y - this->fields.mRayPos.fields.y;
          v19 = Point.fields.z - this->fields.mRayPos.fields.z;
          position = UnityEngine_Transform__get_position(v16, 0);
          position.fields.x = v17 + position.fields.x;
          position.fields.y = v18 + position.fields.y;
          position.fields.z = v19 + position.fields.z;
          UnityEngine_Transform__set_position(v16, position, 0);
          localRotation = UnityEngine_Transform__get_localRotation(v16, 0);
          v33 = UnityEngine_Quaternion__Inverse(localRotation, 0);
          v20 = v33.fields.x;
          v21 = v33.fields.y;
          v22 = v33.fields.z;
          w = v33.fields.w;
          *(UnityEngine_Vector3_o *)&v34.fields.x = UnityEngine_Transform__get_localPosition(v16, 0);
          v31.fields.x = v34.fields.x - this->fields.mLocalPos.fields.x;
          v31.fields.y = v34.fields.y - this->fields.mLocalPos.fields.y;
          v31.fields.z = v34.fields.z - this->fields.mLocalPos.fields.z;
          v34.fields.x = v20;
          v34.fields.y = v21;
          v34.fields.z = v22;
          v34.fields.w = w;
          v30 = UnityEngine_Quaternion__op_Multiply_71206052(v34, v31, 0);
          v24 = v30.fields.x;
          v25 = v30.fields.y;
          UnityEngine_Transform__set_localPosition(v16, this->fields.mLocalPos, 0);
          NGUIMath__ResizeWidget_49303972(
            this->fields.target,
            this->fields.pivot,
            v24,
            v25,
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
  UIRect_o *cachedTransform; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s4
  float v8; // s5
  float v9; // s2
  float v10; // s3
  float z; // s8
  float y; // s14
  float x; // s15
  float m_Distance; // s9
  float v15; // s13
  __int64 v16; // kr00_8
  float v17; // s11
  float v18; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v20; // s0
  struct UIWidget_o *v21; // x8
  __int64 v22; // d0
  UnityEngine_Ray_o v23; // [xsp+18h] [xbp-A8h] BYREF
  struct UnityEngine_Plane_o v24; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Ray_o v25; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47593 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47593 = 1;
  }
  memset(&v25, 0, sizeof(v25));
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
      sub_1C372BC(cachedTransform);
    v5 = *(float *)&cachedTransform->fields.leftAnchor;
    v6 = *((float *)&cachedTransform->fields.leftAnchor + 1);
    v7 = *(float *)&cachedTransform->fields.bottomAnchor;
    v8 = *((float *)&cachedTransform->fields.bottomAnchor + 1);
    v9 = *(float *)&cachedTransform->fields.rightAnchor;
    v10 = *((float *)&cachedTransform->fields.rightAnchor + 1);
    v24 = (struct UnityEngine_Plane_o)0LL;
    sub_2EEFD24(&v24, 0, v5, v6, v9, v10, v7, v8);
    this->fields.mPlane = v24;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__get_currentRay(&v23, 0);
    v25 = v23;
    z = v23.fields.m_Origin.fields.z;
    x = this->fields.mPlane.fields.m_Normal.fields.x;
    y = this->fields.mPlane.fields.m_Normal.fields.y;
    v15 = this->fields.mPlane.fields.m_Normal.fields.z;
    m_Distance = this->fields.mPlane.fields.m_Distance;
    v16 = *(_QWORD *)&v23.fields.m_Origin.fields.x;
    v17 = (float)(v23.fields.m_Direction.fields.z * v15)
        + (float)((float)(v23.fields.m_Direction.fields.x * x) + (float)(v23.fields.m_Direction.fields.y * y));
    if ( !byte_4C3C925 )
    {
      sub_1C37058(&UnityEngine_Mathf_TypeInfo);
      byte_4C3C925 = 1;
    }
    v18 = fmaxf(fabsf(v17), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v18 <= (float)(static_fields->Epsilon * 8.0) )
      v18 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, v17) >= v18 )
    {
      v20 = (float)((float)-(float)((float)(z * v15)
                                  + (float)((float)(*(float *)&v16 * x) + (float)(*((float *)&v16 + 1) * y)))
                  - m_Distance)
          / v17;
      if ( v20 > 0.0 )
      {
        Point = UnityEngine_Ray__GetPoint(&v25, v20, 0);
        cachedTransform = (UIRect_o *)this->fields.target;
        this->fields.mRayPos = Point;
        if ( cachedTransform )
        {
          cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0);
          if ( cachedTransform )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
            v21 = this->fields.target;
            this->fields.mLocalPos = localPosition;
            if ( v21 )
            {
              v22 = *(_QWORD *)&v21->fields.mWidth;
              this->fields.mDragging = 1;
              *(_QWORD *)&this->fields.mWidth = v22;
              return;
            }
          }
        }
LABEL_23:
        sub_1C372B4(cachedTransform);
      }
    }
  }
}