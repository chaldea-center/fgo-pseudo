void FGOEffectSheetAnimation___ctor(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  this->fields.framesPerSecond = 10.0;
  *(_QWORD *)&this->fields.uvAnimationTileX = 0x400000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FGOEffectSheetAnimation__OnEnable(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C41D3A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Renderer___);
    byte_4C41D3A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields.compRenderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.compRenderer, (int32_t)Component_object, v4, v5);
}


void FGOEffectSheetAnimation__Update(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *compRenderer; // x20
  float time; // s0
  UnityEngine_Renderer_o *material; // x0
  float v6; // s0
  int v7; // w21
  int32_t uvAnimationTileX; // w20
  int32_t uvAnimationTileY; // w22
  int v10; // w8
  UnityEngine_Vector2_o v11; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4

  if ( (byte_4C41D3B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16264/*"_MainTex"*/);
    byte_4C41D3B = 1;
  }
  compRenderer = (UnityEngine_Object_o *)this->fields.compRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(compRenderer, 0, 0) )
  {
    time = UnityEngine_Time__get_time(0);
    material = this->fields.compRenderer;
    v6 = time * this->fields.framesPerSecond;
    if ( v6 == INFINITY )
      v7 = 0x80000000;
    else
      v7 = (int)v6;
    if ( !material )
      goto LABEL_15;
    uvAnimationTileX = this->fields.uvAnimationTileX;
    uvAnimationTileY = this->fields.uvAnimationTileY;
    material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0);
    if ( !material
      || (v10 = v7 % (uvAnimationTileY * uvAnimationTileX),
          v11.fields.x = (float)(1.0 / (float)uvAnimationTileX) * (float)(v10 % uvAnimationTileX),
          v11.fields.y = (float)(1.0 - (float)(1.0 / (float)uvAnimationTileY))
                       - (float)((float)(1.0 / (float)uvAnimationTileY) * (float)(v10 / uvAnimationTileX)),
          UnityEngine_Material__SetTextureOffset(
            (UnityEngine_Material_o *)material,
            (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
            v11,
            0),
          (material = this->fields.compRenderer) == 0)
      || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0)) == 0 )
    {
LABEL_15:
      sub_1C372B4(material);
    }
    v12.fields.x = 1.0 / (float)uvAnimationTileX;
    v12.fields.y = 1.0 / (float)uvAnimationTileY;
    UnityEngine_Material__SetTextureScale(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
      v12,
      0);
  }
}