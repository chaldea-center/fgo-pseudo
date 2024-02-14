void __fastcall FGOEffectSheetAnimation___ctor(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.compRenderer) = 1092616192;
  *(_QWORD *)&this->fields.uvAnimationTileY = 0x400000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOEffectSheetAnimation__OnEnable(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42141AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_42141AF = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this[1].klass = (FGOEffectSheetAnimation_c *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall FGOEffectSheetAnimation__Update(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x20
  float time; // s0
  UnityEngine_Renderer_o *material; // x0
  float v7; // s0
  double v8; // d8
  int32_t uvAnimationTileY; // w20
  float framesPerSecond; // w21
  int v11; // w8
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4

  if ( (byte_42141B0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16061/*"_MainTex"*/, v3);
    byte_42141B0 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    time = UnityEngine_Time__get_time(0LL);
    material = (UnityEngine_Renderer_o *)this[1].klass;
    v7 = time * *(float *)&this->fields.compRenderer;
    if ( v7 == INFINITY )
      v8 = -v7;
    else
      v8 = v7;
    if ( !material )
      goto LABEL_16;
    uvAnimationTileY = this->fields.uvAnimationTileY;
    framesPerSecond = this->fields.framesPerSecond;
    material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL);
    if ( !material
      || (v11 = (int)v8 % (LODWORD(framesPerSecond) * uvAnimationTileY),
          v12.fields.x = (float)(1.0 / (float)uvAnimationTileY) * (float)(v11 % uvAnimationTileY),
          v12.fields.y = (float)(1.0 - (float)(1.0 / (float)SLODWORD(framesPerSecond)))
                       - (float)((float)(1.0 / (float)SLODWORD(framesPerSecond)) * (float)(v11 / uvAnimationTileY)),
          UnityEngine_Material__SetTextureOffset(
            (UnityEngine_Material_o *)material,
            (System_String_o *)StringLiteral_16061/*"_MainTex"*/,
            v12,
            0LL),
          (material = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
      || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL)) == 0LL )
    {
LABEL_16:
      sub_B0D97C(material);
    }
    v13.fields.x = 1.0 / (float)uvAnimationTileY;
    v13.fields.y = 1.0 / (float)SLODWORD(framesPerSecond);
    UnityEngine_Material__SetTextureScale(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16061/*"_MainTex"*/,
      v13,
      0LL);
  }
}