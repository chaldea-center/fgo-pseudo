void __fastcall FGOEffectSheetAnimation___ctor(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  this->fields.framesPerSecond = 10.0;
  *(_QWORD *)&this->fields.uvAnimationTileX = 0x400000002LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOEffectSheetAnimation__OnEnable(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15080 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, method, v2);
    byte_4B15080 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  this->fields.compRenderer = (struct UnityEngine_Renderer_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.compRenderer,
    (int64_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall FGOEffectSheetAnimation__Update(FGOEffectSheetAnimation_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *compRenderer; // x20
  __int64 v7; // x1
  float time; // s0
  UnityEngine_Renderer_o *material; // x0
  float v10; // s0
  int v11; // w21
  int32_t uvAnimationTileX; // w20
  int32_t uvAnimationTileY; // w22
  int v14; // w8
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  if ( (byte_4B15081 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v4, v5);
    byte_4B15081 = 1;
  }
  compRenderer = (UnityEngine_Object_o *)this->fields.compRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(compRenderer, 0LL, 0LL) )
  {
    time = UnityEngine_Time__get_time(0LL);
    material = this->fields.compRenderer;
    v10 = time * this->fields.framesPerSecond;
    if ( v10 == INFINITY )
      v11 = 0x80000000;
    else
      v11 = (int)v10;
    if ( !material )
      goto LABEL_15;
    uvAnimationTileX = this->fields.uvAnimationTileX;
    uvAnimationTileY = this->fields.uvAnimationTileY;
    material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL);
    if ( !material
      || (v14 = v11 % (uvAnimationTileY * uvAnimationTileX),
          v15.fields.x = (float)(1.0 / (float)uvAnimationTileX) * (float)(v14 % uvAnimationTileX),
          v15.fields.y = (float)(1.0 - (float)(1.0 / (float)uvAnimationTileY))
                       - (float)((float)(1.0 / (float)uvAnimationTileY) * (float)(v14 / uvAnimationTileX)),
          UnityEngine_Material__SetTextureOffset(
            (UnityEngine_Material_o *)material,
            (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
            v15,
            0LL),
          (material = this->fields.compRenderer) == 0LL)
      || (material = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(material, 0LL)) == 0LL )
    {
LABEL_15:
      sub_1BCAA3C(material, v7);
    }
    v16.fields.x = 1.0 / (float)uvAnimationTileX;
    v16.fields.y = 1.0 / (float)uvAnimationTileY;
    UnityEngine_Material__SetTextureScale(
      (UnityEngine_Material_o *)material,
      (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
      v16,
      0LL);
  }
}