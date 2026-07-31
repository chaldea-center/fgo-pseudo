void FGOEffectSheetAnimation___ctor(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  this->fields.framesPerSecond = 10.0;
  *(_QWORD *)&this->fields.uvAnimationTileX = 0x400000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOEffectSheetAnimation__OnEnable(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59373CD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Renderer___);
    byte_59373CD = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields.compRenderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.compRenderer,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


bool FGOEffectSheetAnimation__TryGetMainTexTiling(
        FGOEffectSheetAnimation_o *this,
        UnityEngine_Vector2_o *scale,
        UnityEngine_Vector2_o *offset,
        const MethodInfo *method)
{
  float time; // s0
  int32x2_t v8; // d2
  bool result; // w0
  float v10; // s0
  float32x2_t v16; // d3
  signed __int32 v17; // s2
  float32x2_t v18; // d1
  int v19; // w8
  int v20; // w8
  int32_t uvAnimationTileX; // w9
  float v22; // s2
  float y; // s0
  int v24; // w8
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8

  if ( this->fields.uvAnimationTileX < 1 || this->fields.uvAnimationTileY <= 0 )
  {
    if ( !byte_59373DF )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      byte_59373DF = 1;
    }
    v24 = (unsigned __int8)byte_5931820;
    *scale = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
    if ( !v24 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      byte_5931820 = 1;
    }
    result = 0;
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v18.n64_u32[0] = LODWORD(static_fields->zeroVector.fields.x);
    y = static_fields->zeroVector.fields.y;
  }
  else
  {
    time = UnityEngine_Time__get_time(0);
    v8.n64_u64[0] = *(unsigned __int64 *)&this->fields.uvAnimationTileX;
    result = 1;
    v10 = time * this->fields.framesPerSecond;
    __asm { FMOV            V1.2S, #1.0 }
    v16.n64_u64[0] = vcvt_f32_s32(v8).n64_u64[0];
    v17 = vmul_lane_s32(v8, v8, 1).n64_u32[0];
    v18.n64_u64[0] = vdiv_f32(_D1, v16).n64_u64[0];
    if ( v10 == INFINITY )
      v19 = 0x80000000;
    else
      v19 = (int)v10;
    *scale = (UnityEngine_Vector2_o)v18.n64_u64[0];
    v20 = v19 % v17;
    uvAnimationTileX = this->fields.uvAnimationTileX;
    v22 = vmuls_lane_f32((float)(v20 / uvAnimationTileX), v18, 1);
    v18.n64_f32[0] = (float)(v20 % uvAnimationTileX) * v18.n64_f32[0];
    y = (float)(1.0 - v18.n64_f32[1]) - v22;
  }
  LODWORD(offset->fields.x) = v18.n64_u32[0];
  offset->fields.y = y;
  return result;
}


void FGOEffectSheetAnimation__Update(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *compRenderer; // x20
  __int64 v5; // x1
  float time; // s0
  UnityEngine_Renderer_o *material; // x0
  float v8; // s0
  int v9; // w21
  int32_t uvAnimationTileX; // w20
  int32_t uvAnimationTileY; // w22
  int v12; // w8
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4

  if ( (byte_59373CE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    byte_59373CE = 1;
  }
  compRenderer = (UnityEngine_Object_o *)this->fields.compRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(compRenderer, 0, 0) )
  {
    time = UnityEngine_Time__get_time(0);
    material = this->fields.compRenderer;
    v8 = time * this->fields.framesPerSecond;
    if ( v8 == INFINITY )
      v9 = 0x80000000;
    else
      v9 = (int)v8;
    if ( !material )
      goto LABEL_15;
    uvAnimationTileX = this->fields.uvAnimationTileX;
    uvAnimationTileY = this->fields.uvAnimationTileY;
    material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0);
    if ( !material
      || (v12 = v9 % (uvAnimationTileY * uvAnimationTileX),
          v13.fields.x = (float)(1.0 / (float)uvAnimationTileX) * (float)(v12 % uvAnimationTileX),
          v13.fields.y = (float)(1.0 - (float)(1.0 / (float)uvAnimationTileY))
                       - (float)((float)(1.0 / (float)uvAnimationTileY) * (float)(v12 / uvAnimationTileX)),
          UnityEngine_Material__SetTextureOffset(
            (UnityEngine_Material_o *)material,
            (System_String_o *)StringLiteral_16879/*"_MainTex"*/,
            v13,
            0),
          (material = this->fields.compRenderer) == 0)
      || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0)) == 0 )
    {
LABEL_15:
      sub_21FFECC(material, v5);
    }
    v14.fields.x = 1.0 / (float)uvAnimationTileX;
    v14.fields.y = 1.0 / (float)uvAnimationTileY;
    UnityEngine_Material__SetTextureScale(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16879/*"_MainTex"*/,
      v14,
      0);
  }
}