void __fastcall EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Component_o *material; // x0
  __int64 v5; // x1
  UnityEngine_Material_o *v6; // x20
  UnityEngine_Shader_o *shader; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Shader_o *v9; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *CustomShader; // x21
  char v12; // w8
  EffectRenderBehaviour_o *v13; // x0
  UnityEngine_Shader_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_43563CE & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_43563CE = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
                                            (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_21;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            material,
                                            (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_21;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B70A60(material);
      EffectRenderBehaviour___isCustomShader(v13, v14, v15);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
    if ( !material )
LABEL_21:
      sub_B7076C(material, v5);
    v6 = (UnityEngine_Material_o *)material;
    shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0LL);
    if ( !EffectRenderBehaviour___isCustomShader((EffectRenderBehaviour_o *)shader, shader, v8) )
    {
      v9 = UnityEngine_Material__get_shader(v6, 0LL);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               (EffectRenderBehaviour_o *)v9,
                                               v9,
                                               v10);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0LL, 0LL) )
      {
        v12 = 0;
        goto LABEL_19;
      }
      UnityEngine_Material__set_shader(v6, (UnityEngine_Shader_o *)CustomShader, 0LL);
    }
    v12 = 1;
LABEL_19:
    LOBYTE(this[1].klass) = v12;
  }
}


void __fastcall EffectRenderBehaviour__OnDestroy(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Renderer_o *v6; // x19
  UnityEngine_Material_o *material; // x21
  int v8; // s0
  UnityEngine_Material_o *v12; // x21
  int v13; // s0
  UnityEngine_Material_o *v17; // x20
  UnityEngine_Material_o *v18; // x20
  UnityEngine_Material_o *v19; // x20
  EffectRenderBehaviour_o *v20; // x0
  const MethodInfo *v21; // x1
  UnityEngine_Matrix4x4_o v22; // [xsp+0h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v23; // [xsp+40h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v24; // [xsp+80h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v25; // [xsp+C0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v26; // [xsp+100h] [xbp-A0h]
  UnityEngine_Matrix4x4_o v27; // [xsp+140h] [xbp-60h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43563D2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_B70694(&StringLiteral_16287/*"_Scaling"*/);
    sub_B70694(&StringLiteral_16155/*"_CameraInv"*/);
    sub_B70694(&StringLiteral_16156/*"_Center"*/);
    sub_B70694(&StringLiteral_16154/*"_Camera"*/);
    sub_B70694(&StringLiteral_16280/*"_RenderType"*/);
    byte_43563D2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) && LOBYTE(this[1].klass) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             transform,
                                             (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_22;
    v6 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B70A60(transform);
      EffectRenderBehaviour___ctor(v20, v21);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_22;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    *(UnityEngine_Vector4_o *)&v8 = UnityEngine_Vector4__op_Implicit(position, 0LL);
    if ( !material )
      goto LABEL_22;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16156/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&v8,
      0LL);
    v12 = UnityEngine_Renderer__get_material(v6, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_22;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0LL);
    *(UnityEngine_Vector4_o *)&v13 = UnityEngine_Vector4__op_Implicit(lossyScale, 0LL);
    if ( !v12 )
      goto LABEL_22;
    UnityEngine_Material__SetVector(v12, (System_String_o *)StringLiteral_16287/*"_Scaling"*/, *(UnityEngine_Vector4_o *)&v13, 0LL);
    v17 = UnityEngine_Renderer__get_material(v6, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v25,
                                             (UnityEngine_Camera_o *)transform,
                                             0LL);
    v26 = v25;
    if ( !v17 )
      goto LABEL_22;
    v24 = v26;
    UnityEngine_Material__SetMatrix(v17, (System_String_o *)StringLiteral_16154/*"_Camera"*/, &v24, 0LL);
    v18 = UnityEngine_Renderer__get_material(v6, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Camera__get_worldToCameraMatrix(&v25, (UnityEngine_Camera_o *)transform, 0LL);
    v27 = v25;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v23, &v27, 0LL);
    v25 = v23;
    if ( !v18
      || (v22 = v25,
          UnityEngine_Material__SetMatrix(v18, (System_String_o *)StringLiteral_16155/*"_CameraInv"*/, &v22, 0LL),
          v19 = UnityEngine_Renderer__get_material(v6, 0LL),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v6,
                                                   0LL),
          !v19) )
    {
LABEL_22:
      sub_B7076C(transform, v5);
    }
    UnityEngine_Material__SetInt(v19, (System_String_o *)StringLiteral_16280/*"_RenderType"*/, (int32_t)transform, 0LL);
  }
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_43563D0 & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_B70694(&StringLiteral_621/*"(Custom)"*/);
    byte_43563D0 = 1;
  }
  if ( !sh )
    sub_B7076C(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL);
  v5 = System_String__Concat_44758168(name, (System_String_o *)StringLiteral_621/*"(Custom)"*/, 0LL);
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

  if ( (byte_43563D1 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_621/*"(Custom)"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43563D1 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0LL, sh, v4);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
        sub_B7076C(isCustomShader, v8);
      v9 = System_String__Replace_44765404(
             isCustomShader,
             (System_String_o *)StringLiteral_621/*"(Custom)"*/,
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

  if ( (byte_43563CF & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_621/*"(Custom)"*/);
    byte_43563CF = 1;
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
    sub_B7076C(name, v5);
  return System_String__IndexOf_44830516(name, (System_String_o *)StringLiteral_621/*"(Custom)"*/, 0LL) >= 0;
}