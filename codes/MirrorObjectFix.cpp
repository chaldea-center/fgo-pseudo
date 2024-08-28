void __fastcall MirrorObjectFix___ctor(MirrorObjectFix_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A22774 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_20898/*"joint_all_Base/joint_all"*/, method);
    byte_4A22774 = 1;
  }
  *(_OWORD *)&this->fields.mirrorBounds.fields.m_Center.fields.x = xmmword_BAA190;
  *(_QWORD *)&this->fields.mirrorBounds.fields.m_Extents.fields.y = 0x3E99999A3F333333LL;
  v5 = StringLiteral_20898/*"joint_all_Base/joint_all"*/;
  this->fields.rootTransformPath = (struct System_String_o *)StringLiteral_20898/*"joint_all_Base/joint_all"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.rootTransformPath, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Bounds_o *__fastcall MirrorObjectFix__GetBounds(
        UnityEngine_Bounds_o *retstr,
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
    sub_1B71828(0LL, v8);
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  retstr->fields.m_Center = UnityEngine_Transform__TransformPoint(RootTransform, v11, 0LL);
  retstr->fields.m_Extents = m_Extents;
  return result;
}


void __fastcall MirrorObjectFix__OnDrawGizmos(MirrorObjectFix_o *this, const MethodInfo *method)
{
  __int128 v3; // kr00_16
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *RootTransform; // x0
  __int64 v6; // x1
  float x; // s11
  float y; // s12
  float z; // s13
  float w; // s14
  __int64 v11; // x1
  UnityEngine_Vector3_o lossyScale; // [xsp+0h] [xbp-170h]
  UnityEngine_Matrix4x4_o v13; // [xsp+10h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v14; // [xsp+50h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v15; // [xsp+90h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v16; // [xsp+D0h] [xbp-A0h] BYREF
  float m11; // [xsp+158h] [xbp-18h]
  float m01; // [xsp+15Ch] [xbp-14h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  MirrorObjectFix__GetBounds((UnityEngine_Bounds_o *)&v16, this, method);
  v3 = *(_OWORD *)&v16.fields.m00;
  m11 = v16.fields.m11;
  m01 = v16.fields.m01;
  UnityEngine_Gizmos__get_matrix(&v15, 0LL);
  v16 = v15;
  v21.fields.g = 0.92157;
  v21.fields.b = 0.015686;
  v21.fields.r = 1.0;
  v21.fields.a = 1.0;
  UnityEngine_Gizmos__set_color(v21, 0LL);
  RootTransform = MirrorObjectFix__get_RootTransform(this, v4);
  if ( !RootTransform
    || (rotation = UnityEngine_Transform__get_rotation(RootTransform, 0LL),
        x = rotation.fields.x,
        y = rotation.fields.y,
        z = rotation.fields.z,
        w = rotation.fields.w,
        (RootTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B71828(RootTransform, v6);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(RootTransform, 0LL);
  *(_QWORD *)&v19.fields.x = v3;
  v19.fields.z = *((float *)&v3 + 2);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  v23.fields.w = w;
  UnityEngine_Matrix4x4__TRS(&v15, v19, v23, lossyScale, 0LL);
  v14 = v15;
  UnityEngine_Gizmos__set_matrix(&v14, 0LL);
  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4A1A751 = 1;
  }
  v20.fields.x = *((float *)&v3 + 3) + *((float *)&v3 + 3);
  v20.fields.y = m01 + m01;
  v20.fields.z = m11 + m11;
  UnityEngine_Gizmos__DrawWireCube(UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, v20, 0LL);
  v13 = v16;
  UnityEngine_Gizmos__set_matrix(&v13, 0LL);
}


UnityEngine_Transform_o *__fastcall MirrorObjectFix__get_RootTransform(
        MirrorObjectFix_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o **p_cacheRootTransform; // x20
  UnityEngine_Object_o *cacheRootTransform; // x21
  UnityEngine_Object_o *rootTransform; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct UnityEngine_Transform_o *v8; // x1
  UnityEngine_Transform_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A22773 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A22773 = 1;
  }
  p_cacheRootTransform = &this->fields.cacheRootTransform;
  cacheRootTransform = (UnityEngine_Object_o *)this->fields.cacheRootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cacheRootTransform, 0LL, 0LL) )
  {
    rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rootTransform, 0LL, 0LL) )
    {
      v8 = this->fields.rootTransform;
    }
    else
    {
      if ( System_String__IsNullOrEmpty(this->fields.rootTransformPath, 0LL) )
      {
LABEL_14:
        v11 = *p_cacheRootTransform;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this->fields.cacheRootTransform = transform;
          sub_1B71570(
            (ServantStatusBattleListViewItem_o *)&this->fields.cacheRootTransform,
            (int32_t)transform,
            v13,
            v14);
        }
        return *p_cacheRootTransform;
      }
      v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v9 )
        sub_1B71828(0LL, v10);
      v8 = UnityEngine_Transform__Find(v9, this->fields.rootTransformPath, 0LL);
    }
    *p_cacheRootTransform = v8;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.cacheRootTransform, (int32_t)v8, v6, v7);
    goto LABEL_14;
  }
  return *p_cacheRootTransform;
}