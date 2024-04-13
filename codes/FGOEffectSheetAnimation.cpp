void __fastcall FGOEffectSheetAnimation___ctor(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.compRenderer) = 1092616192;
  *(_QWORD *)&this->fields.uvAnimationTileY = 0x400000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOEffectSheetAnimation__OnEnable(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E8C31 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v2, v3);
    byte_42E8C31 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this[1].klass = (FGOEffectSheetAnimation_c *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall FGOEffectSheetAnimation__Update(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *klass; // x20
  __int64 v9; // x1
  float time; // s0
  UnityEngine_Renderer_o *material; // x0
  float v12; // s0
  double v13; // d8
  int32_t uvAnimationTileY; // w20
  float framesPerSecond; // w21
  int v16; // w8
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4

  if ( (byte_42E8C32 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v5, v6, v7);
    byte_42E8C32 = 1;
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
    v12 = time * *(float *)&this->fields.compRenderer;
    if ( v12 == INFINITY )
      v13 = -v12;
    else
      v13 = v12;
    if ( !material )
      goto LABEL_16;
    uvAnimationTileY = this->fields.uvAnimationTileY;
    framesPerSecond = this->fields.framesPerSecond;
    material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL);
    if ( !material
      || (v16 = (int)v13 % (LODWORD(framesPerSecond) * uvAnimationTileY),
          v17.fields.x = (float)(1.0 / (float)uvAnimationTileY) * (float)(v16 % uvAnimationTileY),
          v17.fields.y = (float)(1.0 - (float)(1.0 / (float)SLODWORD(framesPerSecond)))
                       - (float)((float)(1.0 / (float)SLODWORD(framesPerSecond)) * (float)(v16 / uvAnimationTileY)),
          UnityEngine_Material__SetTextureOffset(
            (UnityEngine_Material_o *)material,
            (System_String_o *)StringLiteral_16205/*"_MainTex"*/,
            v17,
            0LL),
          (material = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
      || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL)) == 0LL )
    {
LABEL_16:
      sub_B5D69C(material, v9);
    }
    v18.fields.x = 1.0 / (float)uvAnimationTileY;
    v18.fields.y = 1.0 / (float)SLODWORD(framesPerSecond);
    UnityEngine_Material__SetTextureScale(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16205/*"_MainTex"*/,
      v18,
      0LL);
  }
}