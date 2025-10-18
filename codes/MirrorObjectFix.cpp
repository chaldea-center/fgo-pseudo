void MirrorObjectFix___ctor(MirrorObjectFix_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C46295 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21086/*"joint_all_Base/joint_all"*/);
    byte_4C46295 = 1;
  }
  *(_OWORD *)&this->fields.mirrorBounds.fields.m_Center.fields.x = xmmword_C0DFA0;
  *(_QWORD *)&this->fields.mirrorBounds.fields.m_Extents.fields.y = 0x3E99999A3F333333LL;
  v5 = StringLiteral_21086/*"joint_all_Base/joint_all"*/;
  this->fields.rootTransformPath = (struct System_String_o *)StringLiteral_21086/*"joint_all_Base/joint_all"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rootTransformPath, v5, v2, v3);
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
  UnityEngine_Bounds_o *result; // x0
  struct UnityEngine_Vector3_o m_Extents; // [xsp+0h] [xbp-40h]
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.mirrorBounds.fields.m_Center.fields.x;
  y = this->fields.mirrorBounds.fields.m_Center.fields.y;
  z = this->fields.mirrorBounds.fields.m_Center.fields.z;
  m_Extents = this->fields.mirrorBounds.fields.m_Extents;
  RootTransform = MirrorObjectFix__get_RootTransform(this, method);
  if ( !RootTransform )
    sub_1C372B4(0);
  v10.fields.x = x;
  v10.fields.y = y;
  v10.fields.z = z;
  retstr->fields.m_Center = UnityEngine_Transform__TransformPoint(RootTransform, v10, 0);
  retstr->fields.m_Extents = m_Extents;
  return result;
}


void MirrorObjectFix__OnDrawGizmos(MirrorObjectFix_o *this, const MethodInfo *method)
{
  __int128 v3; // kr00_16
  unsigned __int64 v4; // kr10_8
  const MethodInfo *v5; // x1
  UnityEngine_Transform_o *RootTransform; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  UnityEngine_Vector3_o lossyScale; // [xsp+0h] [xbp-170h]
  UnityEngine_Matrix4x4_o v12; // [xsp+10h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v13; // [xsp+50h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v14; // [xsp+90h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v15; // [xsp+D0h] [xbp-A0h] BYREF
  float v16; // [xsp+158h] [xbp-18h]
  float v17; // [xsp+15Ch] [xbp-14h]
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v22; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  MirrorObjectFix__GetBounds((UnityEngine_Bounds_o *)&v15, this, method);
  v3 = *(_OWORD *)&v15.fields.m00;
  v4 = *(_QWORD *)&v15.fields.m01;
  LODWORD(v16) = HIDWORD(v4);
  LODWORD(v17) = v4;
  UnityEngine_Gizmos__get_matrix(&v14, 0);
  v15 = v14;
  v20.fields.g = 0.92157;
  v20.fields.b = 0.015686;
  v20.fields.r = 1.0;
  v20.fields.a = 1.0;
  UnityEngine_Gizmos__set_color(v20, 0);
  RootTransform = MirrorObjectFix__get_RootTransform(this, v5);
  if ( !RootTransform
    || (rotation = UnityEngine_Transform__get_rotation(RootTransform, 0),
        x = rotation.fields.x,
        y = rotation.fields.y,
        z = rotation.fields.z,
        w = rotation.fields.w,
        (RootTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C372B4(RootTransform);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(RootTransform, 0);
  *(_QWORD *)&v18.fields.x = v3;
  v18.fields.z = *((float *)&v3 + 2);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  v22.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v14, v18, v22, lossyScale, 0);
  v13 = v14;
  UnityEngine_Gizmos__set_matrix(&v13, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v19.fields.x = *((float *)&v3 + 3) + *((float *)&v3 + 3);
  v19.fields.y = v17 + v17;
  v19.fields.z = v16 + v16;
  UnityEngine_Gizmos__DrawWireCube(UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, v19, 0);
  v12 = v15;
  UnityEngine_Gizmos__set_matrix(&v12, 0);
}


UnityEngine_Transform_o *MirrorObjectFix__get_RootTransform(MirrorObjectFix_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_cacheRootTransform; // x20
  UnityEngine_Object_o *cacheRootTransform; // x21
  UnityEngine_Object_o *rootTransform; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UnityEngine_Transform_o *v8; // x1
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Transform_o *v10; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C46294 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46294 = 1;
  }
  p_cacheRootTransform = &this->fields.cacheRootTransform;
  cacheRootTransform = (UnityEngine_Object_o *)this->fields.cacheRootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cacheRootTransform, 0, 0) )
  {
    rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rootTransform, 0, 0) )
    {
      v8 = this->fields.rootTransform;
    }
    else
    {
      if ( System_String__IsNullOrEmpty(this->fields.rootTransformPath, 0) )
      {
LABEL_14:
        v10 = *p_cacheRootTransform;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0) )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this->fields.cacheRootTransform = transform;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cacheRootTransform, (int32_t)transform, v12, v13);
        }
        return *p_cacheRootTransform;
      }
      v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v9 )
        sub_1C372B4(0);
      v8 = UnityEngine_Transform__Find(v9, this->fields.rootTransformPath, 0);
    }
    *p_cacheRootTransform = v8;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cacheRootTransform, (int32_t)v8, v6, v7);
    goto LABEL_14;
  }
  return *p_cacheRootTransform;
}