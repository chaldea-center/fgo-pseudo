void UIDragResize___ctor(UIDragResize_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.pivot = xmmword_E946B0;
  this->fields.maxHeight = 100000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragResize__OnDrag(UIDragResize_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  _BOOL4 mDragging; // w8
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float m_Distance; // s11
  float v12; // s14
  __int64 v13; // kr00_8
  float v14; // s12
  float v15; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v17; // s0
  float v18; // s8
  UIRect_o *cachedTransform; // x0
  UnityEngine_Transform_o *v20; // x20
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float w; // s11
  float v28; // s8
  float v29; // s9
  UnityEngine_Ray_o v30; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v31; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mLocalPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CCF9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CCF9 = 1;
  }
  mDragging = this->fields.mDragging;
  memset(&v31, 0, sizeof(v31));
  if ( mDragging )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
      UICamera__get_currentRay(&v30, 0);
      x = this->fields.mPlane.fields.m_Normal.fields.x;
      y = this->fields.mPlane.fields.m_Normal.fields.y;
      *(_OWORD *)&v31.fields.m_Origin.fields.x = *(_OWORD *)&v30.fields.m_Origin.fields.x;
      z = this->fields.mPlane.fields.m_Normal.fields.z;
      m_Distance = this->fields.mPlane.fields.m_Distance;
      *(_QWORD *)&v31.fields.m_Direction.fields.y = *(_QWORD *)&v30.fields.m_Direction.fields.y;
      v12 = v30.fields.m_Origin.fields.x;
      v13 = *(_QWORD *)&v30.fields.m_Origin.fields.y;
      v14 = (float)(v30.fields.m_Direction.fields.z * z)
          + (float)((float)(v30.fields.m_Direction.fields.x * x) + (float)(v30.fields.m_Direction.fields.y * y));
      if ( !byte_5931944 )
      {
        sub_21FFC50(&UnityEngine_Mathf_TypeInfo);
        byte_5931944 = 1;
      }
      v15 = vabds_f32(0.0, v14);
      static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
      v17 = fmaxf(fabsf(v14), 0.0) * 0.000001;
      if ( v17 <= (float)(static_fields->Epsilon * 8.0) )
        v17 = static_fields->Epsilon * 8.0;
      if ( v15 >= v17 )
      {
        v18 = (float)((float)-(float)((float)(*((float *)&v13 + 1) * z)
                                    + (float)((float)(v12 * x) + (float)(*(float *)&v13 * y)))
                    - m_Distance)
            / v14;
        if ( v18 > 0.0 )
        {
          cachedTransform = (UIRect_o *)this->fields.target;
          if ( !cachedTransform
            || (cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0)) == 0
            || (v20 = (UnityEngine_Transform_o *)cachedTransform,
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)cachedTransform,
                  this->fields.mLocalPos,
                  0),
                (cachedTransform = (UIRect_o *)this->fields.target) == 0)
            || (UIWidget__set_width((UIWidget_o *)cachedTransform, this->fields.mWidth, 0),
                (cachedTransform = (UIRect_o *)this->fields.target) == 0) )
          {
            sub_21FFECC(cachedTransform, v7);
          }
          UIWidget__set_height((UIWidget_o *)cachedTransform, this->fields.mHeight, 0);
          Point = UnityEngine_Ray__GetPoint(&v31, v18, 0);
          v21 = Point.fields.x - this->fields.mRayPos.fields.x;
          v22 = Point.fields.y - this->fields.mRayPos.fields.y;
          v23 = Point.fields.z - this->fields.mRayPos.fields.z;
          position = UnityEngine_Transform__get_position(v20, 0);
          position.fields.x = v21 + position.fields.x;
          position.fields.y = v22 + position.fields.y;
          position.fields.z = v23 + position.fields.z;
          UnityEngine_Transform__set_position(v20, position, 0);
          localRotation = UnityEngine_Transform__get_localRotation(v20, 0);
          v37 = UnityEngine_Quaternion__Inverse(localRotation, 0);
          v24 = v37.fields.x;
          v25 = v37.fields.y;
          v26 = v37.fields.z;
          w = v37.fields.w;
          *(UnityEngine_Vector3_o *)&v38.fields.x = UnityEngine_Transform__get_localPosition(v20, 0);
          v35.fields.x = v38.fields.x - this->fields.mLocalPos.fields.x;
          v35.fields.y = v38.fields.y - this->fields.mLocalPos.fields.y;
          v35.fields.z = v38.fields.z - this->fields.mLocalPos.fields.z;
          v38.fields.x = v24;
          v38.fields.y = v25;
          v38.fields.z = v26;
          v38.fields.w = w;
          LODWORD(v28) = (unsigned int)UnityEngine_Quaternion__op_Multiply_83158396(v38, v35, 0);
          mLocalPos = this->fields.mLocalPos;
          v29 = mLocalPos.fields.y;
          UnityEngine_Transform__set_localPosition(v20, mLocalPos, 0);
          NGUIMath__ResizeWidget_56162244(
            this->fields.target,
            this->fields.pivot,
            v28,
            v29,
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
  float v6; // s6
  float v7; // s9
  float v8; // s4
  float v9; // s10
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float v13; // s3
  float v14; // s5
  float v15; // s8
  float v16; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s15
  float v21; // s11
  float v22; // s12
  float v23; // s13
  float v24; // s8
  float v25; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  float v29; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UICamera_c *v31; // x0
  float v32; // s8
  float v33; // s9
  float v34; // s10
  float m_Distance; // s11
  float v36; // s14
  __int64 v37; // kr00_8
  float v38; // s12
  float v39; // s1
  struct UnityEngine_Mathf_StaticFields *v40; // x8
  float v41; // s0
  float v42; // s0
  struct UIWidget_o *v43; // x8
  __int64 v44; // d0
  float v45; // [xsp+4h] [xbp-9Ch]
  UnityEngine_Ray_o v46; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v47; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CCF8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CCF8 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  memset(&v47, 0, sizeof(v47));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    cachedTransform = (UIRect_o *)this->fields.target;
    if ( !cachedTransform )
      goto LABEL_32;
    cachedTransform = (UIRect_o *)((__int64 (__fastcall *)(UIRect_o *, const MethodInfo *))cachedTransform->klass->vtable._11_unknown.methodPtr)(
                                    cachedTransform,
                                    cachedTransform->klass->vtable._11_unknown.method);
    if ( !cachedTransform )
      goto LABEL_32;
    if ( LODWORD(cachedTransform->fields.m_CancellationTokenSource) < 4 )
      sub_21FFED4(cachedTransform);
    v6 = *(float *)&cachedTransform->fields.leftAnchor;
    v7 = *((float *)&cachedTransform->fields.leftAnchor + 1);
    v8 = *((float *)&cachedTransform->fields.updateAnchors + 1) - v6;
    v9 = *(float *)&cachedTransform->fields.rightAnchor;
    v10 = *(float *)&cachedTransform->fields.bottomAnchor - v7;
    v11 = *(float *)&cachedTransform->fields.mGo - v7;
    v12 = *((float *)&cachedTransform->fields.bottomAnchor + 1) - v9;
    v13 = *((float *)&cachedTransform->fields.mGo + 1) - v9;
    v14 = *((float *)&cachedTransform->fields.rightAnchor + 1) - v6;
    v15 = v10 * v8;
    v16 = v10 * v13;
    v17 = v12 * v11;
    v18 = v12 * v8;
    v19 = v14 * v13;
    v20 = v14 * v11;
    if ( !byte_5931943 )
    {
      v45 = *(float *)&cachedTransform->fields.leftAnchor;
      sub_21FFC50(&System_Math_TypeInfo);
      v6 = v45;
      byte_5931943 = 1;
    }
    v21 = v16 - v17;
    v22 = v18 - v19;
    v23 = v20 - v15;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    {
      v24 = v6;
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
      v6 = v24;
    }
    v25 = sqrtf((float)(v23 * v23) + (float)((float)(v21 * v21) + (float)(v22 * v22)));
    if ( v25 <= 0.00001 )
    {
      if ( !byte_5931940 )
      {
        v29 = v6;
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        v6 = v29;
        byte_5931940 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
    }
    else
    {
      x = v21 / v25;
      y = v22 / v25;
      z = v23 / v25;
    }
    this->fields.mPlane.fields.m_Normal.fields.x = x;
    this->fields.mPlane.fields.m_Normal.fields.y = y;
    v31 = UICamera_TypeInfo;
    this->fields.mPlane.fields.m_Normal.fields.z = z;
    this->fields.mPlane.fields.m_Distance = -(float)((float)(v9 * z) + (float)((float)(v6 * x) + (float)(v7 * y)));
    if ( !*(&v31->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v31, v4);
    UICamera__get_currentRay(&v46, 0);
    v32 = this->fields.mPlane.fields.m_Normal.fields.x;
    v33 = this->fields.mPlane.fields.m_Normal.fields.y;
    *(_OWORD *)&v47.fields.m_Origin.fields.x = *(_OWORD *)&v46.fields.m_Origin.fields.x;
    v34 = this->fields.mPlane.fields.m_Normal.fields.z;
    m_Distance = this->fields.mPlane.fields.m_Distance;
    *(_QWORD *)&v47.fields.m_Direction.fields.y = *(_QWORD *)&v46.fields.m_Direction.fields.y;
    v36 = v46.fields.m_Origin.fields.x;
    v37 = *(_QWORD *)&v46.fields.m_Origin.fields.y;
    v38 = (float)(v46.fields.m_Direction.fields.z * v34)
        + (float)((float)(v46.fields.m_Direction.fields.x * v32) + (float)(v46.fields.m_Direction.fields.y * v33));
    if ( !byte_5931944 )
    {
      sub_21FFC50(&UnityEngine_Mathf_TypeInfo);
      byte_5931944 = 1;
    }
    v39 = vabds_f32(0.0, v38);
    v40 = UnityEngine_Mathf_TypeInfo->static_fields;
    v41 = fmaxf(fabsf(v38), 0.0) * 0.000001;
    if ( v41 <= (float)(v40->Epsilon * 8.0) )
      v41 = v40->Epsilon * 8.0;
    if ( v39 >= v41 )
    {
      v42 = (float)((float)-(float)((float)(*((float *)&v37 + 1) * v34)
                                  + (float)((float)(v36 * v32) + (float)(*(float *)&v37 * v33)))
                  - m_Distance)
          / v38;
      if ( v42 > 0.0 )
      {
        Point = UnityEngine_Ray__GetPoint(&v47, v42, 0);
        cachedTransform = (UIRect_o *)this->fields.target;
        this->fields.mRayPos = Point;
        if ( cachedTransform )
        {
          cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0);
          if ( cachedTransform )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
            v43 = this->fields.target;
            this->fields.mLocalPos = localPosition;
            if ( v43 )
            {
              v44 = *(_QWORD *)&v43->fields.mWidth;
              this->fields.mDragging = 1;
              *(_QWORD *)&this->fields.mWidth = v44;
              return;
            }
          }
        }
LABEL_32:
        sub_21FFECC(cachedTransform, v4);
      }
    }
  }
}