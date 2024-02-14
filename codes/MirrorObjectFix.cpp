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

  if ( (byte_4214578 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20134/*"joint_all_Base/joint_all"*/, method);
    byte_4214578 = 1;
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
  v4 = (System_Int32_array **)StringLiteral_20134/*"joint_all_Base/joint_all"*/;
  this->fields.rootTransformPath = (struct System_String_o *)StringLiteral_20134/*"joint_all_Base/joint_all"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.rootTransformPath, v4, v5, v6, v7, v8, v9, v10);
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
  int v7; // s0
  UnityEngine_Bounds_o *result; // x0
  __int128 v11; // q0
  UnityEngine_Bounds_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_OWORD *)&this->fields.mirrorBounds.fields.m_Center.fields.y;
  *(_QWORD *)&v12.fields.m_Extents.fields.y = *(_QWORD *)&this->fields.mirrorBounds.fields.m_Extents.fields.z;
  *(_OWORD *)&v12.fields.m_Center.fields.x = v4;
  RootTransform = MirrorObjectFix__get_RootTransform(this, method);
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Bounds__get_center(&v12, 0LL);
  if ( !RootTransform )
    sub_B0D97C(v6);
  v13 = UnityEngine_Transform__TransformPoint(RootTransform, *(UnityEngine_Vector3_o *)&v7, 0LL);
  UnityEngine_Bounds__set_center(&v12, v13, 0LL);
  v11 = *(_OWORD *)&v12.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v12.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v11;
  return result;
}


void __fastcall MirrorObjectFix__OnDrawGizmos(MirrorObjectFix_o *this, const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *RootTransform; // x0
  float v8; // s11
  float v9; // s12
  float v10; // s13
  float w; // s14
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_Vector3_o lossyScale; // [xsp+0h] [xbp-180h]
  UnityEngine_Matrix4x4_o v16; // [xsp+10h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v17; // [xsp+50h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v18; // [xsp+90h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+D0h] [xbp-B0h]
  UnityEngine_Bounds_o v20; // [xsp+118h] [xbp-68h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o yellow; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v28; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  memset(&v20, 0, sizeof(v20));
  MirrorObjectFix__GetBounds(&v20, this, method);
  UnityEngine_Gizmos__get_matrix(&v18, 0LL);
  v19 = v18;
  yellow = UnityEngine_Color__get_yellow(0LL);
  UnityEngine_Gizmos__set_color(yellow, 0LL);
  center = UnityEngine_Bounds__get_center(&v20, 0LL);
  x = center.fields.x;
  y = center.fields.y;
  z = center.fields.z;
  RootTransform = MirrorObjectFix__get_RootTransform(this, v6);
  if ( !RootTransform
    || (rotation = UnityEngine_Transform__get_rotation(RootTransform, 0LL),
        v8 = rotation.fields.x,
        v9 = rotation.fields.y,
        v10 = rotation.fields.z,
        w = rotation.fields.w,
        (RootTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(RootTransform);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(RootTransform, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  v28.fields.x = v8;
  v28.fields.y = v9;
  v28.fields.z = v10;
  v28.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v18, v22, v28, lossyScale, 0LL);
  v17 = v18;
  UnityEngine_Gizmos__set_matrix(&v17, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v12 = zero.fields.x;
  v13 = zero.fields.y;
  v14 = zero.fields.z;
  size = UnityEngine_Bounds__get_size(&v20, 0LL);
  v24.fields.x = v12;
  v24.fields.y = v13;
  v24.fields.z = v14;
  UnityEngine_Gizmos__DrawWireCube(v24, size, 0LL);
  v16 = v19;
  UnityEngine_Gizmos__set_matrix(&v16, 0LL);
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
  UnityEngine_Transform_o *v14; // x21
  struct UnityEngine_Transform_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4214577 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214577 = 1;
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
        sub_B0D97C(0LL);
      v12 = UnityEngine_Transform__Find(transform, this->fields.rootTransformPath, 0LL);
      this->fields.cacheRootTransform = v12;
    }
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.cacheRootTransform,
      (System_Int32_array **)v12,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
LABEL_16:
    v14 = *p_cacheRootTransform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this->fields.cacheRootTransform = v15;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.cacheRootTransform,
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
  }
  return *p_cacheRootTransform;
}