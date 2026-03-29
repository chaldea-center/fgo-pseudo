void MirrorObjectFix___ctor(MirrorObjectFix_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D33E84 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21345/*"joint_all_Base/joint_all"*/);
    byte_4D33E84 = 1;
  }
  *(_OWORD *)&this->fields.mirrorBounds.fields.m_Center.fields.x = xmmword_D00040;
  *(_QWORD *)&this->fields.mirrorBounds.fields.m_Extents.fields.y = 0x3E99999A3F333333LL;
  v9 = StringLiteral_21345/*"joint_all_Base/joint_all"*/;
  this->fields.rootTransformPath = (struct System_String_o *)StringLiteral_21345/*"joint_all_Base/joint_all"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.rootTransformPath, v9, v2, v3, v4, v5, v6, v7);
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
    sub_1C93D2C(0, v8);
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  retstr->fields.m_Center = UnityEngine_Transform__TransformPoint(RootTransform, v11, 0);
  retstr->fields.m_Extents = m_Extents;
  return result;
}


void MirrorObjectFix__OnDrawGizmos(MirrorObjectFix_o *this, const MethodInfo *method)
{
  __int128 v3; // kr20_16
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *RootTransform; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o lossyScale; // [xsp+0h] [xbp-170h]
  UnityEngine_Matrix4x4_o v8; // [xsp+10h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v9; // [xsp+50h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v10; // [xsp+90h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v11; // [xsp+D0h] [xbp-A0h] BYREF
  float m11; // [xsp+158h] [xbp-18h]
  float m01; // [xsp+15Ch] [xbp-14h]
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Vector3_o v15; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  MirrorObjectFix__GetBounds((UnityEngine_Bounds_o *)&v11, this, method);
  v3 = *(_OWORD *)&v11.fields.m00;
  m11 = v11.fields.m11;
  m01 = v11.fields.m01;
  UnityEngine_Gizmos__get_matrix(&v10, 0);
  v11 = v10;
  v16.fields.g = 0.92157;
  v16.fields.b = 0.015686;
  v16.fields.r = 1.0;
  v16.fields.a = 1.0;
  UnityEngine_Gizmos__set_color(v16, 0);
  RootTransform = MirrorObjectFix__get_RootTransform(this, v4);
  if ( !RootTransform
    || (rotation = UnityEngine_Transform__get_rotation(RootTransform, 0),
        (RootTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(RootTransform, v6);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(RootTransform, 0);
  UnityEngine_Matrix4x4__TRS(&v10, (UnityEngine_Vector3_o)v3, rotation, lossyScale, 0);
  v9 = v10;
  UnityEngine_Gizmos__set_matrix(&v9, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v15.fields.x = *((float *)&v3 + 3) + *((float *)&v3 + 3);
  v15.fields.y = m01 + m01;
  v15.fields.z = m11 + m11;
  UnityEngine_Gizmos__DrawWireCube(UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, v15, 0);
  v8 = v11;
  UnityEngine_Gizmos__set_matrix(&v8, 0);
}


UnityEngine_Transform_o *MirrorObjectFix__get_RootTransform(MirrorObjectFix_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o **p_cacheRootTransform; // x20
  UnityEngine_Object_o *cacheRootTransform; // x21
  UnityEngine_Object_o *rootTransform; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UnityEngine_Transform_o *v12; // x1
  UnityEngine_Transform_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D33E83 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33E83 = 1;
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
      v12 = this->fields.rootTransform;
    }
    else
    {
      if ( System_String__IsNullOrEmpty(this->fields.rootTransformPath, 0) )
      {
LABEL_14:
        v15 = *p_cacheRootTransform;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0, 0) )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this->fields.cacheRootTransform = transform;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.cacheRootTransform,
            (int32_t)transform,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
        }
        return *p_cacheRootTransform;
      }
      v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v13 )
        sub_1C93D2C(0, v14);
      v12 = UnityEngine_Transform__Find(v13, this->fields.rootTransformPath, 0);
    }
    *p_cacheRootTransform = v12;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cacheRootTransform, (int32_t)v12, v6, v7, v8, v9, v10, v11);
    goto LABEL_14;
  }
  return *p_cacheRootTransform;
}