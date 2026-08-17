void EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo_3820CA8 *v6; // x1
  UnityEngine_Component_o *material; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  UnityEngine_Material_o *v11; // x20
  EffectRenderBehaviour_o *shader; // x0
  const MethodInfo *v13; // x2
  EffectRenderBehaviour_o *v14; // x0
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *CustomShader; // x21
  bool v19; // w8
  EffectRenderBehaviour_o *v20; // x0
  UnityEngine_Shader_o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_596F518 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_596F518 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v6 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___;
    this->fields.mbCustomShader = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            v6);
    if ( !material )
      goto LABEL_19;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            material,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_19;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_221405C(material, UnityEngine_ParticleSystemRenderer_TypeInfo, v9, v10);
      EffectRenderBehaviour___isCustomShader(v20, v21, v22);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0);
    if ( !material )
LABEL_19:
      sub_2213CDC(material, v8);
    v11 = (UnityEngine_Material_o *)material;
    shader = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0);
    if ( !EffectRenderBehaviour___isCustomShader(shader, (UnityEngine_Shader_o *)shader, v13) )
    {
      v14 = (EffectRenderBehaviour_o *)UnityEngine_Material__get_shader(v11, 0);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               v14,
                                               (UnityEngine_Shader_o *)v14,
                                               v15);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0, 0) )
      {
        v19 = 0;
        goto LABEL_17;
      }
      UnityEngine_Material__set_shader(v11, (UnityEngine_Shader_o *)CustomShader, 0);
    }
    v19 = 1;
LABEL_17:
    this->fields.mbCustomShader = v19;
  }
}


void EffectRenderBehaviour__OnDestroy(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Component_object; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  UnityEngine_Renderer_o *v10; // x19
  UnityEngine_Material_o *material; // x21
  int v12; // s3
  UnityEngine_Material_o *v13; // x21
  int v14; // s3
  UnityEngine_Material_o *v15; // x20
  UnityEngine_Material_o *v16; // x20
  UnityEngine_Material_o *v17; // x20
  EffectRenderBehaviour_o *v18; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Matrix4x4_o v20; // [xsp+0h] [xbp-1B0h] BYREF
  UnityEngine_Matrix4x4_o v21; // [xsp+40h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v22; // [xsp+80h] [xbp-130h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+C0h] [xbp-F0h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+100h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+140h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_596F51C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_2213A60(&StringLiteral_16988/*"_Scaling"*/);
    sub_2213A60(&StringLiteral_16789/*"_CameraInv"*/);
    sub_2213A60(&StringLiteral_16790/*"_Center"*/);
    sub_2213A60(&StringLiteral_16788/*"_Camera"*/);
    sub_2213A60(&StringLiteral_16973/*"_RenderType"*/);
    byte_596F51C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) && this->fields.mbCustomShader )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             transform,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_21;
    v10 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_221405C(transform, UnityEngine_ParticleSystemRenderer_TypeInfo, v8, v9);
      EffectRenderBehaviour___ctor(v18, v19);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !material )
      goto LABEL_21;
    v12 = 0;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16790/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&position.fields.x,
      0);
    v13 = UnityEngine_Renderer__get_material(v10, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_21;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    if ( !v13 )
      goto LABEL_21;
    v14 = 0;
    UnityEngine_Material__SetVector(
      v13,
      (System_String_o *)StringLiteral_16988/*"_Scaling"*/,
      *(UnityEngine_Vector4_o *)&lossyScale.fields.x,
      0);
    v15 = UnityEngine_Renderer__get_material(v10, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v24,
                                             (UnityEngine_Camera_o *)transform,
                                             0);
    if ( !v15 )
      goto LABEL_21;
    v23 = v24;
    UnityEngine_Material__SetMatrix(v15, (System_String_o *)StringLiteral_16788/*"_Camera"*/, &v23, 0);
    v16 = UnityEngine_Renderer__get_material(v10, 0);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0);
    if ( !transform
      || (UnityEngine_Camera__get_worldToCameraMatrix(&v22, (UnityEngine_Camera_o *)transform, 0),
          v25 = v22,
          transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v21, &v25, 0),
          !v16)
      || (v20 = v21,
          UnityEngine_Material__SetMatrix(v16, (System_String_o *)StringLiteral_16789/*"_CameraInv"*/, &v20, 0),
          v17 = UnityEngine_Renderer__get_material(v10, 0),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v10,
                                                   0),
          !v17) )
    {
LABEL_21:
      sub_2213CDC(transform, v7);
    }
    UnityEngine_Material__SetInt(v17, (System_String_o *)StringLiteral_16973/*"_RenderType"*/, (int32_t)transform, 0);
  }
}


UnityEngine_Shader_o *EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_596F51A & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_2213A60(&StringLiteral_714/*"(Custom)"*/);
    byte_596F51A = 1;
  }
  if ( !sh )
    sub_2213CDC(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0);
  v5 = System_String__Concat_75651716(name, (System_String_o *)StringLiteral_714/*"(Custom)"*/, 0);
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

  if ( (byte_596F51B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_714/*"(Custom)"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F51B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sh, method);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0, 0);
  result = 0;
  if ( !v5 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0, sh, v4);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0)) == 0 )
        sub_2213CDC(isCustomShader, v8);
      v9 = System_String__Replace_75703400(
             isCustomShader,
             (System_String_o *)StringLiteral_714/*"(Custom)"*/,
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

  if ( (byte_596F519 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_714/*"(Custom)"*/);
    byte_596F519 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sh, method);
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0, 0);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0)) == 0 )
    sub_2213CDC(name, v5);
  return System_String__IndexOf_75715196(name, (System_String_o *)StringLiteral_714/*"(Custom)"*/, 0) >= 0;
}