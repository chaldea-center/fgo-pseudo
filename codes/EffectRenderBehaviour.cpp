void __fastcall EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
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

  if ( (byte_4BDB39D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4BDB39D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this->fields.mbCustomShader = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_19;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            material,
                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_19;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C22354(material);
      EffectRenderBehaviour___isCustomShader(v13, v14, v15);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
    if ( !material )
LABEL_19:
      sub_1C22094(material, v5);
    v6 = (UnityEngine_Material_o *)material;
    shader = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0LL);
    if ( !EffectRenderBehaviour___isCustomShader(shader, (UnityEngine_Shader_o *)shader, v8) )
    {
      v9 = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader(v6, 0LL);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               v9,
                                               (UnityEngine_Shader_o *)v9,
                                               v10);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0LL, 0LL) )
      {
        v12 = 0;
        goto LABEL_17;
      }
      UnityEngine_Material__set_shader(v6, (UnityEngine_Shader_o *)CustomShader, 0LL);
    }
    v12 = 1;
LABEL_17:
    this->fields.mbCustomShader = v12;
  }
}


void __fastcall EffectRenderBehaviour__OnDestroy(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Renderer_o *v6; // x19
  UnityEngine_Material_o *material; // x21
  int v8; // s0
  int v11; // s3
  UnityEngine_Material_o *v12; // x21
  int v13; // s0
  int v16; // s3
  UnityEngine_Material_o *v17; // x20
  UnityEngine_Material_o *v18; // x20
  UnityEngine_Material_o *v19; // x20
  EffectRenderBehaviour_o *v20; // x0
  const MethodInfo *v21; // x1
  UnityEngine_Matrix4x4_o v22; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+100h] [xbp-B0h]
  UnityEngine_Matrix4x4_o v27; // [xsp+140h] [xbp-70h] BYREF

  if ( (byte_4BDB3A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_1C21E38(&StringLiteral_16610/*"_Scaling"*/);
    sub_1C21E38(&StringLiteral_16430/*"_CameraInv"*/);
    sub_1C21E38(&StringLiteral_16431/*"_Center"*/);
    sub_1C21E38(&StringLiteral_16429/*"_Camera"*/);
    sub_1C21E38(&StringLiteral_16595/*"_RenderType"*/);
    byte_4BDB3A1 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL)
    && this->fields.mbCustomShader )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             transform,
                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_21;
    v6 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C22354(transform);
      EffectRenderBehaviour___ctor(v20, v21);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !material )
      goto LABEL_21;
    v11 = 0;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16431/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&v8,
      0LL);
    v12 = UnityEngine_Renderer__get_material(v6, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0LL);
    if ( !v12 )
      goto LABEL_21;
    v16 = 0;
    UnityEngine_Material__SetVector(v12, (System_String_o *)StringLiteral_16610/*"_Scaling"*/, *(UnityEngine_Vector4_o *)&v13, 0LL);
    v17 = UnityEngine_Renderer__get_material(v6, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v25,
                                             (UnityEngine_Camera_o *)transform,
                                             0LL);
    v26 = v25;
    if ( !v17 )
      goto LABEL_21;
    v24 = v26;
    UnityEngine_Material__SetMatrix(v17, (System_String_o *)StringLiteral_16429/*"_Camera"*/, &v24, 0LL);
    v18 = UnityEngine_Renderer__get_material(v6, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Camera__get_worldToCameraMatrix(&v25, (UnityEngine_Camera_o *)transform, 0LL);
    v27 = v25;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v23, &v27, 0LL);
    v25 = v23;
    if ( !v18
      || (v22 = v25,
          UnityEngine_Material__SetMatrix(v18, (System_String_o *)StringLiteral_16430/*"_CameraInv"*/, &v22, 0LL),
          v19 = UnityEngine_Renderer__get_material(v6, 0LL),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v6,
                                                   0LL),
          !v19) )
    {
LABEL_21:
      sub_1C22094(transform, v5);
    }
    UnityEngine_Material__SetInt(v19, (System_String_o *)StringLiteral_16595/*"_RenderType"*/, (int32_t)transform, 0LL);
  }
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_4BDB39F & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_1C21E38(&StringLiteral_731/*"(Custom)"*/);
    byte_4BDB39F = 1;
  }
  if ( !sh )
    sub_1C22094(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL);
  v5 = System_String__Concat_63115476(name, (System_String_o *)StringLiteral_731/*"(Custom)"*/, 0LL);
  return UnityEngine_Shader__Find(v5, 0LL);
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getNonCustomShader(
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

  if ( (byte_4BDB3A0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_731/*"(Custom)"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB3A0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0LL, sh, v4);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
        sub_1C22094(isCustomShader, v8);
      v9 = System_String__Replace_63135104(
             isCustomShader,
             (System_String_o *)StringLiteral_731/*"(Custom)"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      return UnityEngine_Shader__Find(v9, 0LL);
    }
    else
    {
      return sh;
    }
  }
  return result;
}


bool __fastcall EffectRenderBehaviour___isCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 v5; // x1

  if ( (byte_4BDB39E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_731/*"(Custom)"*/);
    byte_4BDB39E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
    sub_1C22094(name, v5);
  return System_String__IndexOf_63147052(name, (System_String_o *)StringLiteral_731/*"(Custom)"*/, 0LL) >= 0;
}