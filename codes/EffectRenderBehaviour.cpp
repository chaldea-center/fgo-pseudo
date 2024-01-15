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
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Renderer_o *v8; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v10; // x20
  UnityEngine_Shader_o *shader; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Shader_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *CustomShader; // x21
  char v16; // w8
  EffectRenderBehaviour_o *v17; // x0
  UnityEngine_Shader_o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_40FE265 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_ParticleSystemRenderer_TypeInfo, v5);
    byte_40FE265 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
  {
    LOBYTE(this[1].klass) = 0;
    v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !v7 )
      goto LABEL_21;
    v8 = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     v7,
                                     (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !v8 )
      goto LABEL_21;
    if ( (UnityEngine_ParticleSystemRenderer_c *)v8->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B173C8(v8);
      EffectRenderBehaviour___isCustomShader(v17, v18, v19);
      return;
    }
    material = UnityEngine_Renderer__get_material(v8, 0LL);
    if ( !material )
LABEL_21:
      sub_B170D4();
    v10 = material;
    shader = UnityEngine_Material__get_shader(material, 0LL);
    if ( !EffectRenderBehaviour___isCustomShader((EffectRenderBehaviour_o *)shader, shader, v12) )
    {
      v13 = UnityEngine_Material__get_shader(v10, 0LL);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               (EffectRenderBehaviour_o *)v13,
                                               v13,
                                               v14);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0LL, 0LL) )
      {
        v16 = 0;
        goto LABEL_19;
      }
      UnityEngine_Material__set_shader(v10, (UnityEngine_Shader_o *)CustomShader, 0LL);
    }
    v16 = 1;
LABEL_19:
    LOBYTE(this[1].klass) = v16;
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
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Renderer_o *v13; // x0
  UnityEngine_Renderer_o *v14; // x19
  UnityEngine_Material_o *material; // x21
  UnityEngine_Transform_o *transform; // x0
  int v17; // s0
  UnityEngine_Material_o *v21; // x21
  UnityEngine_Transform_o *v22; // x0
  int v23; // s0
  UnityEngine_Material_o *v27; // x20
  UnityEngine_Camera_o *current; // x0
  UnityEngine_Material_o *v29; // x20
  UnityEngine_Camera_o *v30; // x0
  UnityEngine_Material_o *v31; // x20
  int32_t renderMode; // w0
  EffectRenderBehaviour_o *v33; // x0
  const MethodInfo *v34; // x1
  UnityEngine_Matrix4x4_o v35; // [xsp+0h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+40h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+80h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+C0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+100h] [xbp-A0h]
  UnityEngine_Matrix4x4_o v40; // [xsp+140h] [xbp-60h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE269 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_ParticleSystemRenderer_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15992/*"_Scaling"*/, v6);
    sub_B16FFC(&StringLiteral_15869/*"_CameraInv"*/, v7);
    sub_B16FFC(&StringLiteral_15870/*"_Center"*/, v8);
    sub_B16FFC(&StringLiteral_15868/*"_Camera"*/, v9);
    sub_B16FFC(&StringLiteral_15986/*"_RenderType"*/, v10);
    byte_40FE269 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) && LOBYTE(this[1].klass) )
  {
    v12 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)this,
                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !v12 )
      goto LABEL_22;
    v13 = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v12,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !v13 )
      goto LABEL_22;
    v14 = v13;
    if ( (UnityEngine_ParticleSystemRenderer_c *)v13->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B173C8(v13);
      EffectRenderBehaviour___ctor(v33, v34);
      return;
    }
    material = UnityEngine_Renderer__get_material(v13, 0LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_22;
    position = UnityEngine_Transform__get_position(transform, 0LL);
    *(UnityEngine_Vector4_o *)&v17 = UnityEngine_Vector4__op_Implicit(position, 0LL);
    if ( !material )
      goto LABEL_22;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_15870/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&v17,
      0LL);
    v21 = UnityEngine_Renderer__get_material(v14, 0LL);
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v22 )
      goto LABEL_22;
    lossyScale = UnityEngine_Transform__get_lossyScale(v22, 0LL);
    *(UnityEngine_Vector4_o *)&v23 = UnityEngine_Vector4__op_Implicit(lossyScale, 0LL);
    if ( !v21 )
      goto LABEL_22;
    UnityEngine_Material__SetVector(v21, (System_String_o *)StringLiteral_15992/*"_Scaling"*/, *(UnityEngine_Vector4_o *)&v23, 0LL);
    v27 = UnityEngine_Renderer__get_material(v14, 0LL);
    current = UnityEngine_Camera__get_current(0LL);
    if ( !current )
      goto LABEL_22;
    UnityEngine_Camera__get_worldToCameraMatrix(&v38, current, 0LL);
    v39 = v38;
    if ( !v27 )
      goto LABEL_22;
    v37 = v39;
    UnityEngine_Material__SetMatrix(v27, (System_String_o *)StringLiteral_15868/*"_Camera"*/, &v37, 0LL);
    v29 = UnityEngine_Renderer__get_material(v14, 0LL);
    v30 = UnityEngine_Camera__get_current(0LL);
    if ( !v30 )
      goto LABEL_22;
    UnityEngine_Camera__get_worldToCameraMatrix(&v38, v30, 0LL);
    v40 = v38;
    UnityEngine_Matrix4x4__get_inverse(&v36, &v40, 0LL);
    v38 = v36;
    if ( !v29
      || (v35 = v38,
          UnityEngine_Material__SetMatrix(v29, (System_String_o *)StringLiteral_15869/*"_CameraInv"*/, &v35, 0LL),
          v31 = UnityEngine_Renderer__get_material(v14, 0LL),
          renderMode = UnityEngine_ParticleSystemRenderer__get_renderMode(
                         (UnityEngine_ParticleSystemRenderer_o *)v14,
                         0LL),
          !v31) )
    {
LABEL_22:
      sub_B170D4();
    }
    UnityEngine_Material__SetInt(v31, (System_String_o *)StringLiteral_15986/*"_RenderType"*/, renderMode, 0LL);
  }
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *v5; // x0

  if ( (byte_40FE267 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_610/*"(Custom)"*/, sh);
    byte_40FE267 = 1;
  }
  if ( !sh )
    sub_B170D4();
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL);
  v5 = System_String__Concat_43743732(name, (System_String_o *)StringLiteral_610/*"(Custom)"*/, 0LL);
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
  System_String_o *name; // x0
  System_String_o *v10; // x0

  if ( (byte_40FE268 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sh);
    sub_B16FFC(&StringLiteral_610/*"(Custom)"*/, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FE268 = 1;
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
    if ( EffectRenderBehaviour___isCustomShader(0LL, sh, v6) )
    {
      if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
        sub_B170D4();
      v10 = System_String__Replace_43750968(
              name,
              (System_String_o *)StringLiteral_610/*"(Custom)"*/,
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

  if ( (byte_40FE266 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sh);
    sub_B16FFC(&StringLiteral_610/*"(Custom)"*/, v4);
    byte_40FE266 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL) )
    return 0;
  if ( !sh || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
    sub_B170D4();
  return System_String__IndexOf_43816080(name, (System_String_o *)StringLiteral_610/*"(Custom)"*/, 0LL) >= 0;
}