void EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  UnityEngine_Component_o *material; // x0
  UnityEngine_Material_o *v5; // x20
  EffectRenderBehaviour_o *shader; // x0
  const MethodInfo *v7; // x2
  EffectRenderBehaviour_o *v8; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *CustomShader; // x21
  bool v11; // w8
  EffectRenderBehaviour_o *v12; // x0
  UnityEngine_Shader_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C41D2A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4C41D2A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    this->fields.mbCustomShader = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_19;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            material,
                                            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_19;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C37574(material);
      EffectRenderBehaviour___isCustomShader(v12, v13, v14);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0);
    if ( !material )
LABEL_19:
      sub_1C372B4(material);
    v5 = (UnityEngine_Material_o *)material;
    shader = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
    if ( !EffectRenderBehaviour___isCustomShader(shader, (UnityEngine_Shader_o *)shader, v7) )
    {
      v8 = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader(v5, 0);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(v8, (UnityEngine_Shader_o *)v8, v9);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0, 0) )
      {
        v11 = 0;
        goto LABEL_17;
      }
      UnityEngine_Material__set_shader(v5, (UnityEngine_Shader_o *)CustomShader, 0);
    }
    v11 = 1;
LABEL_17:
    this->fields.mbCustomShader = v11;
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
  UnityEngine_Renderer_o *v5; // x19
  UnityEngine_Material_o *material; // x21
  int v7; // s3
  UnityEngine_Material_o *v8; // x21
  int v9; // s3
  UnityEngine_Material_o *v10; // x20
  UnityEngine_Material_o *v11; // x20
  UnityEngine_Material_o *v12; // x20
  EffectRenderBehaviour_o *v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Matrix4x4_o v15; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v16; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v17; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v18; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v19; // [xsp+100h] [xbp-B0h]
  UnityEngine_Matrix4x4_o v20; // [xsp+140h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C41D2E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_1C37058(&StringLiteral_16337/*"_Scaling"*/);
    sub_1C37058(&StringLiteral_16148/*"_CameraInv"*/);
    sub_1C37058(&StringLiteral_16149/*"_Center"*/);
    sub_1C37058(&StringLiteral_16147/*"_Camera"*/);
    sub_1C37058(&StringLiteral_16322/*"_RenderType"*/);
    byte_4C41D2E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) && this->fields.mbCustomShader )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             transform,
                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_21;
    v5 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_1C37574(transform);
      EffectRenderBehaviour___ctor(v13, v14);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !material )
      goto LABEL_21;
    v7 = 0;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16149/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&position.fields.x,
      0);
    v8 = UnityEngine_Renderer__get_material(v5, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    if ( !v8 )
      goto LABEL_21;
    v9 = 0;
    UnityEngine_Material__SetVector(
      v8,
      (System_String_o *)StringLiteral_16337/*"_Scaling"*/,
      *(UnityEngine_Vector4_o *)&lossyScale.fields.x,
      0);
    v10 = UnityEngine_Renderer__get_material(v5, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v18,
                                             (UnityEngine_Camera_o *)transform,
                                             0);
    v19 = v18;
    if ( !v10 )
      goto LABEL_21;
    v17 = v19;
    UnityEngine_Material__SetMatrix(v10, (System_String_o *)StringLiteral_16147/*"_Camera"*/, &v17, 0);
    v11 = UnityEngine_Renderer__get_material(v5, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Camera__get_worldToCameraMatrix(&v18, (UnityEngine_Camera_o *)transform, 0);
    v20 = v18;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v16, &v20, 0);
    v18 = v16;
    if ( !v11
      || (v15 = v18,
          UnityEngine_Material__SetMatrix(v11, (System_String_o *)StringLiteral_16148/*"_CameraInv"*/, &v15, 0),
          v12 = UnityEngine_Renderer__get_material(v5, 0),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v5,
                                                   0),
          !v12) )
    {
LABEL_21:
      sub_1C372B4(transform);
    }
    UnityEngine_Material__SetInt(v12, (System_String_o *)StringLiteral_16322/*"_RenderType"*/, (int32_t)transform, 0);
  }
}


UnityEngine_Shader_o *EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_4C41D2C & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_1C37058(&StringLiteral_687/*"(Custom)"*/);
    byte_4C41D2C = 1;
  }
  if ( !sh )
    sub_1C372B4(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0);
  v5 = System_String__Concat_63561656(name, (System_String_o *)StringLiteral_687/*"(Custom)"*/, 0);
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
  System_String_o *v8; // x0

  if ( (byte_4C41D2D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_687/*"(Custom)"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41D2D = 1;
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
        sub_1C372B4(isCustomShader);
      v8 = System_String__Replace_63608204(
             isCustomShader,
             (System_String_o *)StringLiteral_687/*"(Custom)"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      return UnityEngine_Shader__Find(v8, 0);
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

  if ( (byte_4C41D2B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_687/*"(Custom)"*/);
    byte_4C41D2B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0, 0);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0)) == 0 )
    sub_1C372B4(name);
  return System_String__IndexOf_63620032(name, (System_String_o *)StringLiteral_687/*"(Custom)"*/, 0) >= 0;
}