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

  if ( (byte_40FAD8E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_40FAD8E = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this[1].klass = (FGOEffectSheetAnimation_c *)Component_WebViewObject;
  sub_B16F98(
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
  UnityEngine_Renderer_o *v6; // x0
  float v7; // s0
  double v8; // d8
  int32_t uvAnimationTileY; // w20
  float framesPerSecond; // w21
  UnityEngine_Material_o *material; // x0
  int v12; // w8
  UnityEngine_Renderer_o *v13; // x0
  UnityEngine_Material_o *v14; // x0
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  if ( (byte_40FAD8F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15950, v3);
    byte_40FAD8F = 1;
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
    v6 = (UnityEngine_Renderer_o *)this[1].klass;
    v7 = time * *(float *)&this->fields.compRenderer;
    if ( v7 == INFINITY )
      v8 = -v7;
    else
      v8 = v7;
    if ( !v6 )
      goto LABEL_16;
    uvAnimationTileY = this->fields.uvAnimationTileY;
    framesPerSecond = this->fields.framesPerSecond;
    material = UnityEngine_Renderer__get_material(v6, 0LL);
    if ( !material
      || (v12 = (int)v8 % (LODWORD(framesPerSecond) * uvAnimationTileY),
          v15.fields.x = (float)(1.0 / (float)uvAnimationTileY) * (float)(v12 % uvAnimationTileY),
          v15.fields.y = (float)(1.0 - (float)(1.0 / (float)SLODWORD(framesPerSecond)))
                       - (float)((float)(1.0 / (float)SLODWORD(framesPerSecond)) * (float)(v12 / uvAnimationTileY)),
          UnityEngine_Material__SetTextureOffset(material, (System_String_o *)StringLiteral_15950, v15, 0LL),
          (v13 = (UnityEngine_Renderer_o *)this[1].klass) == 0LL)
      || (v14 = UnityEngine_Renderer__get_material(v13, 0LL)) == 0LL )
    {
LABEL_16:
      sub_B170D4();
    }
    v16.fields.x = 1.0 / (float)uvAnimationTileY;
    v16.fields.y = 1.0 / (float)SLODWORD(framesPerSecond);
    UnityEngine_Material__SetTextureScale(v14, (System_String_o *)StringLiteral_15950, v16, 0LL);
  }
}