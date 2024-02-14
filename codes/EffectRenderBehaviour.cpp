void __fastcall EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Component_o *material; // x0
  UnityEngine_Material_o *v8; // x20
  UnityEngine_Shader_o *shader; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Shader_o *v11; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *CustomShader; // x21
  char v14; // w8
  EffectRenderBehaviour_o *v15; // x0
  UnityEngine_Shader_o *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4218B6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_ParticleSystemRenderer_TypeInfo, v5);
    byte_4218B6A = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
  {
    LOBYTE(this[1].klass) = 0;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_21;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            material,
                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_21;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B0DC70(material);
      EffectRenderBehaviour___isCustomShader(v15, v16, v17);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
    if ( !material )
LABEL_21:
      sub_B0D97C(material);
    v8 = (UnityEngine_Material_o *)material;
    shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0LL);
    if ( !EffectRenderBehaviour___isCustomShader((EffectRenderBehaviour_o *)shader, shader, v10) )
    {
      v11 = UnityEngine_Material__get_shader(v8, 0LL);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               (EffectRenderBehaviour_o *)v11,
                                               v11,
                                               v12);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0LL, 0LL) )
      {
        v14 = 0;
        goto LABEL_19;
      }
      UnityEngine_Material__set_shader(v8, (UnityEngine_Shader_o *)CustomShader, 0LL);
    }
    v14 = 1;
LABEL_19:
    LOBYTE(this[1].klass) = v14;
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
  UnityEngine_Object_o *Component_WebViewObject; // x19
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Renderer_o *v13; // x19
  UnityEngine_Material_o *material; // x21
  int v15; // s0
  UnityEngine_Material_o *v19; // x21
  int v20; // s0
  UnityEngine_Material_o *v24; // x20
  UnityEngine_Material_o *v25; // x20
  UnityEngine_Material_o *v26; // x20
  EffectRenderBehaviour_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Matrix4x4_o v29; // [xsp+0h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v30; // [xsp+40h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v31; // [xsp+80h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v32; // [xsp+C0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v33; // [xsp+100h] [xbp-A0h]
  UnityEngine_Matrix4x4_o v34; // [xsp+140h] [xbp-60h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218B6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_ParticleSystemRenderer_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_16103/*"_Scaling"*/, v6);
    sub_B0D8A4(&StringLiteral_15980/*"_CameraInv"*/, v7);
    sub_B0D8A4(&StringLiteral_15981/*"_Center"*/, v8);
    sub_B0D8A4(&StringLiteral_15979/*"_Camera"*/, v9);
    sub_B0D8A4(&StringLiteral_16097/*"_RenderType"*/, v10);
    byte_4218B6E = 1;
  }
  memset(&v34, 0, sizeof(v34));
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) && LOBYTE(this[1].klass) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             transform,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_22;
    v13 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B0DC70(transform);
      EffectRenderBehaviour___ctor(v27, v28);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_22;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    *(UnityEngine_Vector4_o *)&v15 = UnityEngine_Vector4__op_Implicit(position, 0LL);
    if ( !material )
      goto LABEL_22;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_15981/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&v15,
      0LL);
    v19 = UnityEngine_Renderer__get_material(v13, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_22;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0LL);
    *(UnityEngine_Vector4_o *)&v20 = UnityEngine_Vector4__op_Implicit(lossyScale, 0LL);
    if ( !v19 )
      goto LABEL_22;
    UnityEngine_Material__SetVector(v19, (System_String_o *)StringLiteral_16103/*"_Scaling"*/, *(UnityEngine_Vector4_o *)&v20, 0LL);
    v24 = UnityEngine_Renderer__get_material(v13, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v32,
                                             (UnityEngine_Camera_o *)transform,
                                             0LL);
    v33 = v32;
    if ( !v24 )
      goto LABEL_22;
    v31 = v33;
    UnityEngine_Material__SetMatrix(v24, (System_String_o *)StringLiteral_15979/*"_Camera"*/, &v31, 0LL);
    v25 = UnityEngine_Renderer__get_material(v13, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Camera__get_worldToCameraMatrix(&v32, (UnityEngine_Camera_o *)transform, 0LL);
    v34 = v32;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v30, &v34, 0LL);
    v32 = v30;
    if ( !v25
      || (v29 = v32,
          UnityEngine_Material__SetMatrix(v25, (System_String_o *)StringLiteral_15980/*"_CameraInv"*/, &v29, 0LL),
          v26 = UnityEngine_Renderer__get_material(v13, 0LL),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v13,
                                                   0LL),
          !v26) )
    {
LABEL_22:
      sub_B0D97C(transform);
    }
    UnityEngine_Material__SetInt(v26, (System_String_o *)StringLiteral_16097/*"_RenderType"*/, (int32_t)transform, 0LL);
  }
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_4218B6C & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_B0D8A4(&StringLiteral_616/*"(Custom)"*/, sh);
    byte_4218B6C = 1;
  }
  if ( !sh )
    sub_B0D97C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL);
  v5 = System_String__Concat_43849904(name, (System_String_o *)StringLiteral_616/*"(Custom)"*/, 0LL);
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
  System_String_o *v10; // x0

  if ( (byte_4218B6D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, sh);
    sub_B0D8A4(&StringLiteral_616/*"(Custom)"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4218B6D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0LL, sh, v6);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
        sub_B0D97C(isCustomShader);
      v10 = System_String__Replace_43857140(
              isCustomShader,
              (System_String_o *)StringLiteral_616/*"(Custom)"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      return UnityEngine_Shader__Find(v10, 0LL);
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

  if ( (byte_4218B6B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, sh);
    sub_B0D8A4(&StringLiteral_616/*"(Custom)"*/, v4);
    byte_4218B6B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  name = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  if ( ((unsigned __int8)name & 1) != 0 )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
    sub_B0D97C(name);
  return System_String__IndexOf_43922252(name, (System_String_o *)StringLiteral_616/*"(Custom)"*/, 0LL) >= 0;
}