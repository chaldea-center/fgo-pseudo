void __fastcall EffectRenderBehaviour___ctor(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectRenderBehaviour__Awake(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Component_o *material; // x0
  __int64 v16; // x1
  UnityEngine_Material_o *v17; // x20
  UnityEngine_Shader_o *shader; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Shader_o *v20; // x0
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *CustomShader; // x21
  char v23; // w8
  EffectRenderBehaviour_o *v24; // x0
  UnityEngine_Shader_o *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_42ECFAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_ParticleSystemRenderer_TypeInfo, v11, v12, v13);
    byte_42ECFAF = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !material )
      goto LABEL_21;
    material = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            material,
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !material )
      goto LABEL_21;
    if ( (UnityEngine_ParticleSystemRenderer_c *)material->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B5D990(material);
      EffectRenderBehaviour___isCustomShader(v24, v25, v26);
      return;
    }
    material = (UnityEngine_Component_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
    if ( !material )
LABEL_21:
      sub_B5D69C(material, v16);
    v17 = (UnityEngine_Material_o *)material;
    shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)material, 0LL);
    if ( !EffectRenderBehaviour___isCustomShader((EffectRenderBehaviour_o *)shader, shader, v19) )
    {
      v20 = UnityEngine_Material__get_shader(v17, 0LL);
      CustomShader = (UnityEngine_Object_o *)EffectRenderBehaviour___getCustomShader(
                                               (EffectRenderBehaviour_o *)v20,
                                               v20,
                                               v21);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(CustomShader, 0LL, 0LL) )
      {
        v23 = 0;
        goto LABEL_19;
      }
      UnityEngine_Material__set_shader(v17, (UnityEngine_Shader_o *)CustomShader, 0LL);
    }
    v23 = 1;
LABEL_19:
    LOBYTE(this[1].klass) = v23;
  }
}


void __fastcall EffectRenderBehaviour__OnDestroy(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectRenderBehaviour__OnWillRenderObject(EffectRenderBehaviour_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x19
  UnityEngine_Component_o *transform; // x0
  __int64 v31; // x1
  UnityEngine_Renderer_o *v32; // x19
  UnityEngine_Material_o *material; // x21
  int v34; // s0
  UnityEngine_Material_o *v38; // x21
  int v39; // s0
  UnityEngine_Material_o *v43; // x20
  UnityEngine_Material_o *v44; // x20
  UnityEngine_Material_o *v45; // x20
  EffectRenderBehaviour_o *v46; // x0
  const MethodInfo *v47; // x1
  UnityEngine_Matrix4x4_o v48; // [xsp+0h] [xbp-1A0h] BYREF
  UnityEngine_Matrix4x4_o v49; // [xsp+40h] [xbp-160h] BYREF
  UnityEngine_Matrix4x4_o v50; // [xsp+80h] [xbp-120h] BYREF
  UnityEngine_Matrix4x4_o v51; // [xsp+C0h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v52; // [xsp+100h] [xbp-A0h]
  UnityEngine_Matrix4x4_o v53; // [xsp+140h] [xbp-60h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECFB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_ParticleSystemRenderer_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16247/*"_Scaling"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16124/*"_CameraInv"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16125/*"_Center"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16123/*"_Camera"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16241/*"_RenderType"*/, v26, v27, v28);
    byte_42ECFB3 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) && LOBYTE(this[1].klass) )
  {
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             transform,
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !transform )
      goto LABEL_22;
    v32 = (UnityEngine_Renderer_o *)transform;
    if ( (UnityEngine_ParticleSystemRenderer_c *)transform->klass != UnityEngine_ParticleSystemRenderer_TypeInfo )
    {
      sub_B5D990(transform);
      EffectRenderBehaviour___ctor(v46, v47);
      return;
    }
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_22;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    *(UnityEngine_Vector4_o *)&v34 = UnityEngine_Vector4__op_Implicit(position, 0LL);
    if ( !material )
      goto LABEL_22;
    UnityEngine_Material__SetVector(
      material,
      (System_String_o *)StringLiteral_16125/*"_Center"*/,
      *(UnityEngine_Vector4_o *)&v34,
      0LL);
    v38 = UnityEngine_Renderer__get_material(v32, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_22;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0LL);
    *(UnityEngine_Vector4_o *)&v39 = UnityEngine_Vector4__op_Implicit(lossyScale, 0LL);
    if ( !v38 )
      goto LABEL_22;
    UnityEngine_Material__SetVector(v38, (System_String_o *)StringLiteral_16247/*"_Scaling"*/, *(UnityEngine_Vector4_o *)&v39, 0LL);
    v43 = UnityEngine_Renderer__get_material(v32, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_worldToCameraMatrix(
                                             &v51,
                                             (UnityEngine_Camera_o *)transform,
                                             0LL);
    v52 = v51;
    if ( !v43 )
      goto LABEL_22;
    v50 = v52;
    UnityEngine_Material__SetMatrix(v43, (System_String_o *)StringLiteral_16123/*"_Camera"*/, &v50, 0LL);
    v44 = UnityEngine_Renderer__get_material(v32, 0LL);
    transform = (UnityEngine_Component_o *)UnityEngine_Camera__get_current(0LL);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Camera__get_worldToCameraMatrix(&v51, (UnityEngine_Camera_o *)transform, 0LL);
    v53 = v51;
    transform = (UnityEngine_Component_o *)UnityEngine_Matrix4x4__get_inverse(&v49, &v53, 0LL);
    v51 = v49;
    if ( !v44
      || (v48 = v51,
          UnityEngine_Material__SetMatrix(v44, (System_String_o *)StringLiteral_16124/*"_CameraInv"*/, &v48, 0LL),
          v45 = UnityEngine_Renderer__get_material(v32, 0LL),
          transform = (UnityEngine_Component_o *)UnityEngine_ParticleSystemRenderer__get_renderMode(
                                                   (UnityEngine_ParticleSystemRenderer_o *)v32,
                                                   0LL),
          !v45) )
    {
LABEL_22:
      sub_B5D69C(transform, v31);
    }
    UnityEngine_Material__SetInt(v45, (System_String_o *)StringLiteral_16241/*"_RenderType"*/, (int32_t)transform, 0LL);
  }
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *name; // x0
  System_String_o *v6; // x0

  if ( (byte_42ECFB1 & 1) == 0 )
  {
    this = (EffectRenderBehaviour_o *)sub_B5D5C4(&StringLiteral_617/*"(Custom)"*/, (_DWORD)sh, (_DWORD)method, v3);
    byte_42ECFB1 = 1;
  }
  if ( !sh )
    sub_B5D69C(this, sh);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL);
  v6 = System_String__Concat_44577788(name, (System_String_o *)StringLiteral_617/*"(Custom)"*/, 0LL);
  return UnityEngine_Shader__Find(v6, 0LL);
}


UnityEngine_Shader_o *__fastcall EffectRenderBehaviour___getNonCustomShader(
        EffectRenderBehaviour_o *this,
        UnityEngine_Shader_o *sh,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  bool v12; // w8
  UnityEngine_Shader_o *result; // x0
  System_String_o *isCustomShader; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0

  if ( (byte_42ECFB2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sh, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_617/*"(Custom)"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42ECFB2 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sh, 0LL, 0LL);
  result = 0LL;
  if ( !v12 )
  {
    isCustomShader = (System_String_o *)EffectRenderBehaviour___isCustomShader(0LL, sh, v11);
    if ( ((unsigned __int8)isCustomShader & 1) != 0 )
    {
      if ( !sh || (isCustomShader = UnityEngine_Object__get_name((UnityEngine_Object_o *)sh, 0LL)) == 0LL )
        sub_B5D69C(isCustomShader, v15);
      v16 = System_String__Replace_44585024(
              isCustomShader,
              (System_String_o *)StringLiteral_617/*"(Custom)"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      return UnityEngine_Shader__Find(v16, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *name; // x0
  __int64 v9; // x1

  if ( (byte_42ECFB0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sh, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_617/*"(Custom)"*/, v5, v6, v7);
    byte_42ECFB0 = 1;
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
    sub_B5D69C(name, v9);
  return System_String__IndexOf_44650136(name, (System_String_o *)StringLiteral_617/*"(Custom)"*/, 0LL) >= 0;
}