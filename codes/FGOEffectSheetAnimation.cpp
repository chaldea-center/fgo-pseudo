void __fastcall FGOEffectSheetAnimation___ctor(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  this->fields.framesPerSecond = 10.0;
  *(_QWORD *)&this->fields.uvAnimationTileX = 0x400000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOEffectSheetAnimation__OnEnable(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A6ED2A & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    byte_4A6ED2A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields.compRenderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.compRenderer, (int32_t)Component_object, v4, v5);
}


void __fastcall FGOEffectSheetAnimation__Update(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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

  if ( (byte_4A6ED2B & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_16287/*"_MainTex"*/, v3);
    byte_4A6ED2B = 1;
  }
  compRenderer = (UnityEngine_Object_o *)this->fields.compRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(compRenderer, 0LL, 0LL) )
  {
    time = UnityEngine_Time__get_time(0LL);
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
    material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL);
    if ( !material
      || (v12 = v9 % (uvAnimationTileY * uvAnimationTileX),
          v13.fields.x = (float)(1.0 / (float)uvAnimationTileX) * (float)(v12 % uvAnimationTileX),
          v13.fields.y = (float)(1.0 - (float)(1.0 / (float)uvAnimationTileY))
                       - (float)((float)(1.0 / (float)uvAnimationTileY) * (float)(v12 / uvAnimationTileX)),
          UnityEngine_Material__SetTextureOffset(
            (UnityEngine_Material_o *)material,
            (System_String_o *)StringLiteral_16287/*"_MainTex"*/,
            v13,
            0LL),
          (material = this->fields.compRenderer) == 0LL)
      || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL)) == 0LL )
    {
LABEL_15:
      sub_1B9026C(material, v5);
    }
    v14.fields.x = 1.0 / (float)uvAnimationTileX;
    v14.fields.y = 1.0 / (float)uvAnimationTileY;
    UnityEngine_Material__SetTextureScale(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16287/*"_MainTex"*/,
      v14,
      0LL);
  }
}