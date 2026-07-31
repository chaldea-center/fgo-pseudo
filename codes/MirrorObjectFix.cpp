void MirrorObjectFix___ctor(MirrorObjectFix_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593BC52 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22103/*"joint_all_Base/joint_all"*/);
    byte_593BC52 = 1;
  }
  v9 = StringLiteral_22103/*"joint_all_Base/joint_all"*/;
  this->fields.rootTransformPath = (struct System_String_o *)StringLiteral_22103/*"joint_all_Base/joint_all"*/;
  *(_OWORD *)&this->fields.mirrorBounds.fields.m_Center.fields.x = xmmword_E94390;
  *(_QWORD *)&this->fields.mirrorBounds.fields.m_Extents.fields.y = 0x3E99999A3F333333LL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.rootTransformPath, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Bounds_o *MirrorObjectFix__GetBounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        MirrorObjectFix_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *RootTransform; // x0
  __int64 v8; // x1
  UnityEngine_Bounds_o *result; // x0
  struct UnityEngine_Vector3_o m_Extents; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.mirrorBounds.fields.m_Center.fields.x;
  y = this->fields.mirrorBounds.fields.m_Center.fields.y;
  z = this->fields.mirrorBounds.fields.m_Center.fields.z;
  m_Extents = this->fields.mirrorBounds.fields.m_Extents;
  RootTransform = MirrorObjectFix__get_RootTransform(this, method);
  if ( !RootTransform )
    sub_21FFECC(0, v8);
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  retstr->fields.m_Center = UnityEngine_Transform__TransformPoint(RootTransform, v11, 0);
  retstr->fields.m_Extents = m_Extents;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void MirrorObjectFix__OnDrawGizmos(MirrorObjectFix_o *this, const MethodInfo *method)
{
  __int64 v3; // kr00_8
  float m20; // s10
  float32x2_t v5; // d15
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *RootTransform; // x0
  __int64 v8; // x1
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  float v13; // s7
  unsigned __int64 v14; // d3 OVERLAPPED
  float v15; // s5
  int v16; // s4
  UnityEngine_Vector3_o v17; // [xsp+0h] [xbp-170h]
  UnityEngine_Matrix4x4_o v18; // [xsp+10h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+50h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v20; // [xsp+90h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+D0h] [xbp-A0h] BYREF
  float m11; // [xsp+15Ch] [xbp-14h]
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v26; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  MirrorObjectFix__GetBounds((UnityEngine_Bounds_o *)&v21, this, method);
  v3 = *(_QWORD *)&v21.fields.m00;
  m20 = v21.fields.m20;
  v5.n64_u64[0] = *(unsigned __int64 *)&v21.fields.m30;
  m11 = v21.fields.m11;
  UnityEngine_Gizmos__get_matrix(&v21, 0);
  v24.fields.r = 1.0;
  v24.fields.a = 1.0;
  v24.fields.g = 0.92157;
  v24.fields.b = 0.015686;
  UnityEngine_Gizmos__set_color(v24, 0);
  RootTransform = MirrorObjectFix__get_RootTransform(this, v6);
  if ( !RootTransform
    || (rotation = UnityEngine_Transform__get_rotation(RootTransform, 0),
        x = rotation.fields.x,
        y = rotation.fields.y,
        z = rotation.fields.z,
        w = rotation.fields.w,
        (RootTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(RootTransform, v8);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(RootTransform, 0);
  v13 = lossyScale.fields.x;
  *(_QWORD *)&v17.fields.y = *(_QWORD *)&lossyScale.fields.y;
  *(_QWORD *)&lossyScale.fields.x = v3;
  lossyScale.fields.z = m20;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v26.fields.w = w;
  v17.fields.x = v13;
  UnityEngine_Matrix4x4__TRS(&v20, lossyScale, v26, v17, 0);
  v19 = v20;
  UnityEngine_Gizmos__set_matrix(&v19, 0);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v14 = vadd_f32(v5, v5).n64_u64[0];
  v15 = m11 + m11;
  v16 = HIDWORD(v14);
  UnityEngine_Gizmos__DrawWireCube(
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    *(UnityEngine_Vector3_o *)&v14,
    0);
  v18 = v21;
  UnityEngine_Gizmos__set_matrix(&v18, 0);
}


UnityEngine_Transform_o *MirrorObjectFix__get_RootTransform(MirrorObjectFix_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_cacheRootTransform; // x20
  UnityEngine_Object_o *cacheRootTransform; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *rootTransform; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UnityEngine_Transform_o *v13; // x1
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x21
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593BC51 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC51 = 1;
  }
  p_cacheRootTransform = &this->fields.cacheRootTransform;
  cacheRootTransform = (UnityEngine_Object_o *)this->fields.cacheRootTransform;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cacheRootTransform, 0, 0) )
  {
    rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(rootTransform, 0, 0) )
    {
      v13 = this->fields.rootTransform;
    }
    else
    {
      if ( System_String__IsNullOrEmpty(this->fields.rootTransformPath, 0) )
      {
LABEL_14:
        v17 = *p_cacheRootTransform;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0, 0) )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this->fields.cacheRootTransform = transform;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.cacheRootTransform,
            (int32_t)transform,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
        return *p_cacheRootTransform;
      }
      v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v15 )
        sub_21FFECC(0, v16);
      v13 = UnityEngine_Transform__Find(v15, this->fields.rootTransformPath, 0);
    }
    *p_cacheRootTransform = v13;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cacheRootTransform,
      (int32_t)v13,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    goto LABEL_14;
  }
  return *p_cacheRootTransform;
}