void __fastcall EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Component_o *material; // x0
  __int64 v8; // x1
  UnityEngine_Material_o *v9; // x20
  EffectRenderBehaviour_o *shader; // x0
  const MethodInfo *v11; // x2
  EffectRenderBehaviour_o *v12; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *CustomShader; // x21
  bool v15; // w8
  EffectRenderBehaviour_o *v16; // x0
  UnityEngine_Shader_o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_49FD924 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&UnityEngine_ParticleSystemRenderer_TypeInfo, v5);
    byte_49FD924 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    this->fields.mbCustomShader = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_19;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            material,
                                            (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_19;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1B64F1C(material);
      EffectRenderBehaviour___isCustomShader(v16, v17, v18);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
    if ( !material )
LABEL_19:
      sub_1B64C5C(material, v8);
    v9 = (UnityEngine_Material_o *)material;
    shader = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0LL);
    if ( !EffectRenderBehaviour___isCustomShader(shader, (UnityEngine_Shader_o *)shader, v11) )
    {
      v12 = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader(v9, 0LL);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               v12,
                                               (UnityEngine_Shader_o *)v12,
                                               v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0LL, 0LL) )
      {
        v15 = 0;
        goto LABEL_17;
      }
      UnityEngine_Material__set_shader(v9, (UnityEngine_Shader_o *)CustomShader, 0LL);
    }
    v15 = 1;
LABEL_17:
    this->fields.mbCustomShader = v15;
  }
}


void __fastcall EffectRenderBehaviour__OnDestroy(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Component_object; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Renderer_o *v14; // x19
  UnityEngine_Material_o *material; // x21
  int v16; // s0
  int v19; // s3
  UnityEngine_Material_o *v20; // x21
  int v21; // s0
  int v24; // s3
  UnityEngine_Material_o *v25; // x20
  UnityEngine_Material_o *v26; // x20
  UnityEngine_Material_o *v27; // x20
  EffectRenderBehaviour_o *v28; // x0
  const MethodInfo *v29; // x1
  UnityEngine_Matrix4x4_o v30; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v34; // [xsp+100h] [xbp-B0h]
  UnityEngine_Matrix4x4_o v35; // [xsp+140h] [xbp-70h] BYREF

  if ( (byte_49FD928 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&UnityEngine_ParticleSystemRenderer_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_16265/*"_Scaling"*/, v6);
    sub_1B64A00(&StringLiteral_16088/*"_CameraInv"*/, v7);
    sub_1B64A00(&StringLiteral_16089/*"_Center"*/, v8);
    sub_1B64A00(&StringLiteral_16087/*"_Camera"*/, v9);
    sub_1B64A00(&StringLiteral_16250/*"_RenderType"*/, v10);
    byte_49FD928 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL)
    && this->fields.mbCustomShader )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             transform,
                                             (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_21;
    v14 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1B64F1C(transform);
      EffectRenderBehaviour___ctor(v28, v29);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !material )
      goto LABEL_21;
    v19 = 0;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16089/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&v16,
      0LL);
    v20 = UnityEngine_Renderer__get_material(v14, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0LL);
    if ( !v20 )
      goto LABEL_21;
    v24 = 0;
    UnityEngine_Material__SetVector(v20, (System_String_o *)StringLiteral_16265/*"_Scaling"*/, *(UnityEngine_Vector4_o *)&v21, 0LL);
    v25 = UnityEngine_Renderer__get_material(v14, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v33,
                                             (UnityEngine_Camera_o *)transform,
                                             0LL);
    v34 = v33;
    if ( !v25 )
      goto LABEL_21;
    v32 = v34;
    UnityEngine_Material__SetMatrix(v25, (System_String_o *)StringLiteral_16087/*"_Camera"*/, &v32, 0LL);
    v26 = UnityEngine_Renderer__get_material(v14, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Camera__get_worldToCameraMatrix(&v33, (UnityEngine_Camera_o *)transform, 0LL);
    v35 = v33;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v31, &v35, 0LL);
    v33 = v31;
    if ( !v26
      || (v30 = v33,
          UnityEngine_Material__SetMatrix(v26, (System_String_o *)StringLiteral_16088/*"_CameraInv"*/, &v30, 0LL),
          v27 = UnityEngine_Renderer__get_material(v14, 0LL),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v14,
                                                   0LL),
          !v27) )
    {
LABEL_21:
      sub_1B64C5C(transform, v13);
    }
    UnityEngine_Material__SetInt(v27, (System_String_o *)StringLiteral_16250/*"_RenderType"*/, (int32_t)transform, 0LL);
  }
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_49FD926 & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_1B64A00(&StringLiteral_734/*"(Custom)"*/, sh);
    byte_49FD926 = 1;
  }
  if ( !sh )
    sub_1B64C5C(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL);
  v5 = System_String__Concat_61385136(name, (System_String_o *)StringLiteral_734/*"(Custom)"*/, 0LL);
  return UnityEngine_Shader__Find(v5, 0LL);
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getNonCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  bool v7; // w8
  UnityEngine_Shader_o *result; // x0
  System_String_o *isCustomShader; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0

  if ( (byte_49FD927 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, sh);
    sub_1B64A00(&StringLiteral_734/*"(Custom)"*/, v4);
    sub_1B64A00(&StringLiteral_1/*""*/, v5);
    byte_49FD927 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0LL, sh, v6);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
        sub_1B64C5C(isCustomShader, v10);
      v11 = System_String__Replace_61404756(
              isCustomShader,
              (System_String_o *)StringLiteral_734/*"(Custom)"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      return UnityEngine_Shader__Find(v11, 0LL);
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
  System_String_o *name; // x0
  __int64 v6; // x1

  if ( (byte_49FD925 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, sh);
    sub_1B64A00(&StringLiteral_734/*"(Custom)"*/, v4);
    byte_49FD925 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
    sub_1B64C5C(name, v6);
  return System_String__IndexOf_61416704(name, (System_String_o *)StringLiteral_734/*"(Custom)"*/, 0LL) >= 0;
}