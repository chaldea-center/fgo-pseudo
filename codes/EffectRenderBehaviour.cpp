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

  if ( (byte_4D2F759 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4D2F759 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    this->fields.mbCustomShader = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_19;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            material,
                                            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_19;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C940C8(material);
      EffectRenderBehaviour___isCustomShader(v13, v14, v15);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0);
    if ( !material )
LABEL_19:
      sub_1C93D2C(material, v5);
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


void EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Renderer_o *v6; // x19
  UnityEngine_Material_o *material; // x21
  UnityEngine_Material_o *v8; // x21
  UnityEngine_Material_o *v9; // x20
  UnityEngine_Material_o *v10; // x20
  UnityEngine_Material_o *v11; // x20
  EffectRenderBehaviour_o *v12; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Matrix4x4_o v18; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v20; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+100h] [xbp-B0h]
  UnityEngine_Matrix4x4_o v23; // [xsp+140h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o lossyScale; // 0:kr14_12.12
  UnityEngine_Vector4_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2F75D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_1C93AD4(&StringLiteral_16438/*"_Scaling"*/);
    sub_1C93AD4(&StringLiteral_16248/*"_CameraInv"*/);
    sub_1C93AD4(&StringLiteral_16249/*"_Center"*/);
    sub_1C93AD4(&StringLiteral_16247/*"_Camera"*/);
    sub_1C93AD4(&StringLiteral_16423/*"_RenderType"*/);
    byte_4D2F75D = 1;
  }
  memset(&v23, 0, sizeof(v23));
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) && this->fields.mbCustomShader )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             transform,
                                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_21;
    v6 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C940C8(transform);
      EffectRenderBehaviour___ctor(v12, v13);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    v26.fields.x = position.fields.x;
    v26.fields.y = position.fields.y;
    v26.fields.z = position.fields.z;
    if ( !material )
      goto LABEL_21;
    v26.fields.w = 0.0;
    UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16249/*"_Center"*/, v26, 0);
    v8 = UnityEngine_Renderer__get_material(v6, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    v27.fields.x = lossyScale.fields.x;
    v27.fields.y = lossyScale.fields.y;
    v27.fields.z = lossyScale.fields.z;
    if ( !v8 )
      goto LABEL_21;
    v27.fields.w = 0.0;
    UnityEngine_Material__SetVector(v8, (System_String_o *)StringLiteral_16438/*"_Scaling"*/, v27, 0);
    v9 = UnityEngine_Renderer__get_material(v6, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v21,
                                             (UnityEngine_Camera_o *)transform,
                                             0);
    v22 = v21;
    if ( !v9 )
      goto LABEL_21;
    v20 = v22;
    UnityEngine_Material__SetMatrix(v9, (System_String_o *)StringLiteral_16247/*"_Camera"*/, &v20, 0);
    v10 = UnityEngine_Renderer__get_material(v6, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Camera__get_worldToCameraMatrix(&v21, (UnityEngine_Camera_o *)transform, 0);
    v23 = v21;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v19, &v23, 0);
    v21 = v19;
    if ( !v10
      || (v18 = v21,
          UnityEngine_Material__SetMatrix(v10, (System_String_o *)StringLiteral_16248/*"_CameraInv"*/, &v18, 0),
          v11 = UnityEngine_Renderer__get_material(v6, 0),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v6,
                                                   0),
          !v11) )
    {
LABEL_21:
      sub_1C93D2C(transform, v5);
    }
    UnityEngine_Material__SetInt(v11, (System_String_o *)StringLiteral_16423/*"_RenderType"*/, (int32_t)transform, 0);
  }
}


UnityEngine_Shader_o *EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_4D2F75B & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_1C93AD4(&StringLiteral_684/*"(Custom)"*/);
    byte_4D2F75B = 1;
  }
  if ( !sh )
    sub_1C93D2C(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0);
  v5 = System_String__Concat_64425724(name, (System_String_o *)StringLiteral_684/*"(Custom)"*/, 0);
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

  if ( (byte_4D2F75C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_684/*"(Custom)"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F75C = 1;
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
        sub_1C93D2C(isCustomShader, v8);
      v9 = System_String__Replace_64472288(
             isCustomShader,
             (System_String_o *)StringLiteral_684/*"(Custom)"*/,
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

  if ( (byte_4D2F75A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_684/*"(Custom)"*/);
    byte_4D2F75A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0, 0);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0)) == 0 )
    sub_1C93D2C(name, v5);
  return System_String__IndexOf_64484116(name, (System_String_o *)StringLiteral_684/*"(Custom)"*/, 0) >= 0;
}