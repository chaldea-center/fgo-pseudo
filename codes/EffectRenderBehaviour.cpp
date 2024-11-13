void __fastcall EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Component_o *material; // x0
  __int64 v13; // x1
  UnityEngine_Material_o *v14; // x20
  EffectRenderBehaviour_o *shader; // x0
  const MethodInfo *v16; // x2
  EffectRenderBehaviour_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  UnityEngine_Object_o *CustomShader; // x21
  bool v21; // w8
  EffectRenderBehaviour_o *v22; // x0
  UnityEngine_Shader_o *v23; // x1
  const MethodInfo *v24; // x2

  if ( (byte_4B15071 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_ParticleSystemRenderer_TypeInfo, v8, v9);
    byte_4B15071 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this->fields.mbCustomShader = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_19;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            material,
                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_19;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1BCACFC(material);
      EffectRenderBehaviour___isCustomShader(v22, v23, v24);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
    if ( !material )
LABEL_19:
      sub_1BCAA3C(material, v13);
    v14 = (UnityEngine_Material_o *)material;
    shader = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0LL);
    if ( !EffectRenderBehaviour___isCustomShader(shader, (UnityEngine_Shader_o *)shader, v16) )
    {
      v17 = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader(v14, 0LL);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               v17,
                                               (UnityEngine_Shader_o *)v17,
                                               v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0LL, 0LL) )
      {
        v21 = 0;
        goto LABEL_17;
      }
      UnityEngine_Material__set_shader(v14, (UnityEngine_Shader_o *)CustomShader, 0LL);
    }
    v21 = 1;
LABEL_17:
    this->fields.mbCustomShader = v21;
  }
}


void __fastcall EffectRenderBehaviour__OnDestroy(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  Il2CppObject *Component_object; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_Renderer_o *v24; // x19
  UnityEngine_Material_o *material; // x21
  int v26; // s0
  int v29; // s3
  UnityEngine_Material_o *v30; // x21
  int v31; // s0
  int v34; // s3
  UnityEngine_Material_o *v35; // x20
  UnityEngine_Material_o *v36; // x20
  UnityEngine_Material_o *v37; // x20
  EffectRenderBehaviour_o *v38; // x0
  const MethodInfo *v39; // x1
  UnityEngine_Matrix4x4_o v40; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v41; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v42; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v44; // [xsp+100h] [xbp-B0h]
  UnityEngine_Matrix4x4_o v45; // [xsp+140h] [xbp-70h] BYREF

  if ( (byte_4B15075 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_ParticleSystemRenderer_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16500/*"_Scaling"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16321/*"_CameraInv"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16322/*"_Center"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16320/*"_Camera"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16485/*"_RenderType"*/, v18, v19);
    byte_4B15075 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL)
    && this->fields.mbCustomShader )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             transform,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_21;
    v24 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1BCACFC(transform);
      EffectRenderBehaviour___ctor(v38, v39);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !material )
      goto LABEL_21;
    v29 = 0;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16322/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&v26,
      0LL);
    v30 = UnityEngine_Renderer__get_material(v24, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0LL);
    if ( !v30 )
      goto LABEL_21;
    v34 = 0;
    UnityEngine_Material__SetVector(v30, (System_String_o *)StringLiteral_16500/*"_Scaling"*/, *(UnityEngine_Vector4_o *)&v31, 0LL);
    v35 = UnityEngine_Renderer__get_material(v24, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v43,
                                             (UnityEngine_Camera_o *)transform,
                                             0LL);
    v44 = v43;
    if ( !v35 )
      goto LABEL_21;
    v42 = v44;
    UnityEngine_Material__SetMatrix(v35, (System_String_o *)StringLiteral_16320/*"_Camera"*/, &v42, 0LL);
    v36 = UnityEngine_Renderer__get_material(v24, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Camera__get_worldToCameraMatrix(&v43, (UnityEngine_Camera_o *)transform, 0LL);
    v45 = v43;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v41, &v45, 0LL);
    v43 = v41;
    if ( !v36
      || (v40 = v43,
          UnityEngine_Material__SetMatrix(v36, (System_String_o *)StringLiteral_16321/*"_CameraInv"*/, &v40, 0LL),
          v37 = UnityEngine_Renderer__get_material(v24, 0LL),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v24,
                                                   0LL),
          !v37) )
    {
LABEL_21:
      sub_1BCAA3C(transform, v23);
    }
    UnityEngine_Material__SetInt(v37, (System_String_o *)StringLiteral_16485/*"_RenderType"*/, (int32_t)transform, 0LL);
  }
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_4B15073 & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_1BCA7E0(&StringLiteral_728/*"(Custom)"*/, sh, method);
    byte_4B15073 = 1;
  }
  if ( !sh )
    sub_1BCAA3C(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL);
  v5 = System_String__Concat_62401220(name, (System_String_o *)StringLiteral_728/*"(Custom)"*/, 0LL);
  return UnityEngine_Shader__Find(v5, 0LL);
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getNonCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x2
  bool v9; // w8
  UnityEngine_Shader_o *result; // x0
  System_String_o *isCustomShader; // x0
  __int64 v12; // x1
  System_String_o *v13; // x0

  if ( (byte_4B15074 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sh, method);
    sub_1BCA7E0(&StringLiteral_728/*"(Custom)"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B15074 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sh);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  result = 0LL;
  if ( !v9 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0LL, sh, v8);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
        sub_1BCAA3C(isCustomShader, v12);
      v13 = System_String__Replace_62420848(
              isCustomShader,
              (System_String_o *)StringLiteral_728/*"(Custom)"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      return UnityEngine_Shader__Find(v13, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *name; // x0
  __int64 v7; // x1

  if ( (byte_4B15072 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sh, method);
    sub_1BCA7E0(&StringLiteral_728/*"(Custom)"*/, v4, v5);
    byte_4B15072 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sh);
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
    sub_1BCAA3C(name, v7);
  return System_String__IndexOf_62432796(name, (System_String_o *)StringLiteral_728/*"(Custom)"*/, 0LL) >= 0;
}