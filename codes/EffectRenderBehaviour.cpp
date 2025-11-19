void EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  UnityEngine_Component_o *material; // x0
  __int64 v5; // x1
  UnityEngine_Material_o *v6; // x20
  EffectRenderBehaviour_o *shader; // x0
  const MethodInfo *v8; // x2
  EffectRenderBehaviour_o *v9; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *CustomShader; // x21
  bool v12; // w8
  EffectRenderBehaviour_o *v13; // x0
  UnityEngine_Shader_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4CB5029 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4CB5029 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    this->fields.mbCustomShader = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_19;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            material,
                                            (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_19;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C6BFFC(material);
      EffectRenderBehaviour___isCustomShader(v13, v14, v15);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0);
    if ( !material )
LABEL_19:
      sub_1C6BC60(material, v5);
    v6 = (UnityEngine_Material_o *)material;
    shader = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
    if ( !EffectRenderBehaviour___isCustomShader(shader, (UnityEngine_Shader_o *)shader, v8) )
    {
      v9 = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader(v6, 0);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               v9,
                                               (UnityEngine_Shader_o *)v9,
                                               v10);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0, 0) )
      {
        v12 = 0;
        goto LABEL_17;
      }
      UnityEngine_Material__set_shader(v6, (UnityEngine_Shader_o *)CustomShader, 0);
    }
    v12 = 1;
LABEL_17:
    this->fields.mbCustomShader = v12;
  }
}


void EffectRenderBehaviour__OnDestroy(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Renderer_o *v6; // x19
  UnityEngine_Material_o *material; // x21
  int v8; // s3
  UnityEngine_Material_o *v9; // x21
  int v10; // s3
  UnityEngine_Material_o *v11; // x20
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *v13; // x20
  EffectRenderBehaviour_o *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Matrix4x4_o v16; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v17; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v18; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v20; // [xsp+100h] [xbp-B0h]
  UnityEngine_Matrix4x4_o v21; // [xsp+140h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4CB502D & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_1C6BA08(&StringLiteral_16331/*"_Scaling"*/);
    sub_1C6BA08(&StringLiteral_16141/*"_CameraInv"*/);
    sub_1C6BA08(&StringLiteral_16142/*"_Center"*/);
    sub_1C6BA08(&StringLiteral_16140/*"_Camera"*/);
    sub_1C6BA08(&StringLiteral_16316/*"_RenderType"*/);
    byte_4CB502D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) && this->fields.mbCustomShader )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             transform,
                                             (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_21;
    v6 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C6BFFC(transform);
      EffectRenderBehaviour___ctor(v14, v15);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !material )
      goto LABEL_21;
    v8 = 0;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16142/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&position.fields.x,
      0);
    v9 = UnityEngine_Renderer__get_material(v6, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    if ( !v9 )
      goto LABEL_21;
    v10 = 0;
    UnityEngine_Material__SetVector(
      v9,
      (System_String_o *)StringLiteral_16331/*"_Scaling"*/,
      *(UnityEngine_Vector4_o *)&lossyScale.fields.x,
      0);
    v11 = UnityEngine_Renderer__get_material(v6, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v19,
                                             (UnityEngine_Camera_o *)transform,
                                             0);
    v20 = v19;
    if ( !v11 )
      goto LABEL_21;
    v18 = v20;
    UnityEngine_Material__SetMatrix(v11, (System_String_o *)StringLiteral_16140/*"_Camera"*/, &v18, 0);
    v12 = UnityEngine_Renderer__get_material(v6, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Camera__get_worldToCameraMatrix(&v19, (UnityEngine_Camera_o *)transform, 0);
    v21 = v19;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v17, &v21, 0);
    v19 = v17;
    if ( !v12
      || (v16 = v19,
          UnityEngine_Material__SetMatrix(v12, (System_String_o *)StringLiteral_16141/*"_CameraInv"*/, &v16, 0),
          v13 = UnityEngine_Renderer__get_material(v6, 0),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v6,
                                                   0),
          !v13) )
    {
LABEL_21:
      sub_1C6BC60(transform, v5);
    }
    UnityEngine_Material__SetInt(v13, (System_String_o *)StringLiteral_16316/*"_RenderType"*/, (int32_t)transform, 0);
  }
}


UnityEngine_Shader_o *EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_4CB502B & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_1C6BA08(&StringLiteral_683/*"(Custom)"*/);
    byte_4CB502B = 1;
  }
  if ( !sh )
    sub_1C6BC60(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0);
  v5 = System_String__Concat_63966792(name, (System_String_o *)StringLiteral_683/*"(Custom)"*/, 0);
  return UnityEngine_Shader__Find(v5, 0);
}


UnityEngine_Shader_o *EffectRenderBehaviour___getNonCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  bool v5; // w8
  UnityEngine_Shader_o *result; // x0
  System_String_o *isCustomShader; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0

  if ( (byte_4CB502C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_683/*"(Custom)"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB502C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0, 0);
  result = 0;
  if ( !v5 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0, sh, v4);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0)) == 0 )
        sub_1C6BC60(isCustomShader, v8);
      v9 = System_String__Replace_64013356(
             isCustomShader,
             (System_String_o *)StringLiteral_683/*"(Custom)"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      return UnityEngine_Shader__Find(v9, 0);
    }
    else
    {
      return sh;
    }
  }
  return result;
}


bool EffectRenderBehaviour___isCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 v5; // x1

  if ( (byte_4CB502A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_683/*"(Custom)"*/);
    byte_4CB502A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0, 0);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0)) == 0 )
    sub_1C6BC60(name, v5);
  return System_String__IndexOf_64025184(name, (System_String_o *)StringLiteral_683/*"(Custom)"*/, 0) >= 0;
}