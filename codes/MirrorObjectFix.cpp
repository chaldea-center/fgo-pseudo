void __fastcall MirrorObjectFix___ctor(MirrorObjectFix_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  System_Int32_array **v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Bounds_o v11; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_41872DF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20071/*"joint_all_Base/joint_all"*/, method);
    byte_41872DF = 1;
  }
  v12.fields.y = 0.78;
  v13.fields.x = 0.2;
  v13.fields.y = 1.4;
  v13.fields.z = 0.6;
  v12.fields.x = 0.0;
  v12.fields.z = 0.0;
  memset(&v11, 0, sizeof(v11));
  UnityEngine_Bounds___ctor(&v11, v12, v13, 0LL);
  v3 = *(_OWORD *)&v11.fields.m_Center.fields.x;
  *(_QWORD *)&this->fields.mirrorBounds.fields.m_Extents.fields.z = *(_QWORD *)&v11.fields.m_Extents.fields.y;
  *(_OWORD *)&this->fields.mirrorBounds.fields.m_Center.fields.y = v3;
  v4 = (System_Int32_array **)StringLiteral_20071/*"joint_all_Base/joint_all"*/;
  this->fields.rootTransformPath = (struct System_String_o *)StringLiteral_20071/*"joint_all_Base/joint_all"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rootTransformPath, v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Bounds_o *__fastcall MirrorObjectFix__GetBounds(
        UnityEngine_Bounds_o *retstr,
        MirrorObjectFix_o *this,
        const MethodInfo *method)
{
  __int128 v4; // q0
  UnityEngine_Transform_o *RootTransform; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // s0
  UnityEngine_Bounds_o *result; // x0
  __int128 v12; // q0
  UnityEngine_Bounds_o v13; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_OWORD *)&this->fields.mirrorBounds.fields.m_Center.fields.y;
  *(_QWORD *)&v13.fields.m_Extents.fields.y = *(_QWORD *)&this->fields.mirrorBounds.fields.m_Extents.fields.z;
  *(_OWORD *)&v13.fields.m_Center.fields.x = v4;
  RootTransform = MirrorObjectFix__get_RootTransform(this, method);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Bounds__get_center(&v13, 0LL);
  if ( !RootTransform )
    sub_B2C434(v6, v7);
  v14 = UnityEngine_Transform__TransformPoint(RootTransform, *(UnityEngine_Vector3_o *)&v8, 0LL);
  UnityEngine_Bounds__set_center(&v13, v14, 0LL);
  v12 = *(_OWORD *)&v13.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v13.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v12;
  return result;
}


void __fastcall MirrorObjectFix__OnDrawGizmos(MirrorObjectFix_o *this, const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *RootTransform; // x0
  __int64 v8; // x1
  float v9; // s11
  float v10; // s12
  float v11; // s13
  float w; // s14
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o lossyScale; // [xsp+0h] [xbp-180h]
  UnityEngine_Matrix4x4_o v17; // [xsp+10h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v18; // [xsp+50h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+90h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v20; // [xsp+D0h] [xbp-B0h]
  UnityEngine_Bounds_o v21; // [xsp+118h] [xbp-68h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o yellow; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v29; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  memset(&v21, 0, sizeof(v21));
  MirrorObjectFix__GetBounds(&v21, this, method);
  UnityEngine_Gizmos__get_matrix(&v19, 0LL);
  v20 = v19;
  yellow = UnityEngine_Color__get_yellow(0LL);
  UnityEngine_Gizmos__set_color(yellow, 0LL);
  center = UnityEngine_Bounds__get_center(&v21, 0LL);
  x = center.fields.x;
  y = center.fields.y;
  z = center.fields.z;
  RootTransform = MirrorObjectFix__get_RootTransform(this, v6);
  if ( !RootTransform
    || (rotation = UnityEngine_Transform__get_rotation(RootTransform, 0LL),
        v9 = rotation.fields.x,
        v10 = rotation.fields.y,
        v11 = rotation.fields.z,
        w = rotation.fields.w,
        (RootTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(RootTransform, v8);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(RootTransform, 0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  v29.fields.x = v9;
  v29.fields.y = v10;
  v29.fields.z = v11;
  v29.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v19, v23, v29, lossyScale, 0LL);
  v18 = v19;
  UnityEngine_Gizmos__set_matrix(&v18, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v13 = zero.fields.x;
  v14 = zero.fields.y;
  v15 = zero.fields.z;
  size = UnityEngine_Bounds__get_size(&v21, 0LL);
  v25.fields.x = v13;
  v25.fields.y = v14;
  v25.fields.z = v15;
  UnityEngine_Gizmos__DrawWireCube(v25, size, 0LL);
  v17 = v20;
  UnityEngine_Gizmos__set_matrix(&v17, 0LL);
}


UnityEngine_Transform_o *__fastcall MirrorObjectFix__get_RootTransform(
        MirrorObjectFix_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o **p_cacheRootTransform; // x20
  UnityEngine_Object_o *cacheRootTransform; // x21
  UnityEngine_Object_o *rootTransform; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UnityEngine_Transform_o *v12; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21
  struct UnityEngine_Transform_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_41872DE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41872DE = 1;
  }
  p_cacheRootTransform = &this->fields.cacheRootTransform;
  cacheRootTransform = (UnityEngine_Object_o *)this->fields.cacheRootTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cacheRootTransform, 0LL, 0LL) )
  {
    rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rootTransform, 0LL, 0LL) )
    {
      v12 = this->fields.rootTransform;
      this->fields.cacheRootTransform = v12;
    }
    else
    {
      if ( System_String__IsNullOrEmpty(this->fields.rootTransformPath, 0LL) )
        goto LABEL_16;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        sub_B2C434(0LL, v14);
      v12 = UnityEngine_Transform__Find(transform, this->fields.rootTransformPath, 0LL);
      this->fields.cacheRootTransform = v12;
    }
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.cacheRootTransform,
      (System_Int32_array **)v12,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
LABEL_16:
    v15 = *p_cacheRootTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
    {
      v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this->fields.cacheRootTransform = v16;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.cacheRootTransform,
        (System_Int32_array **)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
  }
  return *p_cacheRootTransform;
}