void PlanetMapBackground___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2D47F & 1) == 0 )
  {
    sub_1C93AD4(&PlanetMapBackground_TypeInfo);
    sub_1C93AD4(&StringLiteral_10706/*"PlanetEarthBg"*/);
    byte_4D2D47F = 1;
  }
  PlanetMapBackground_TypeInfo->static_fields->Fgo20251220MapBaseName = (struct System_String_o *)StringLiteral_10706/*"PlanetEarthBg"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PlanetMapBackground_TypeInfo->static_fields,
    StringLiteral_10706/*"PlanetEarthBg"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void PlanetMapBackground___ctor(PlanetMapBackground_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PlanetMapBackground__Setup(
        PlanetMapBackground_o *this,
        AssetData_o *assetData,
        int32_t mapImageId,
        const MethodInfo *method)
{
  PlanetMapBackground_c *v6; // x0
  System_String_o *Fgo20251220MapBaseName; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  Il2CppObject *Object_object__51927708; // x21
  __int64 v11; // x1
  struct UITexture_o *bgTexture; // x0
  UITexture_c *klass; // x8
  PlanetMapBackground_c *v14; // x0
  Il2CppObject *v15; // x20
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF

  v16 = mapImageId;
  if ( (byte_4D2D47E & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&PlanetMapBackground_TypeInfo);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D2D47E = 1;
  }
  if ( assetData )
  {
    v6 = PlanetMapBackground_TypeInfo;
    if ( !PlanetMapBackground_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlanetMapBackground_TypeInfo);
      v6 = PlanetMapBackground_TypeInfo;
    }
    Fgo20251220MapBaseName = v6->static_fields->Fgo20251220MapBaseName;
    v8 = System_Int32__ToString((int32_t)&v16, 0);
    v9 = System_String__Concat_64463988(Fgo20251220MapBaseName, (System_String_o *)StringLiteral_16207/*"_"*/, v8, 0);
    Object_object__51927708 = AssetData__GetObject_object__51927708(
                                assetData,
                                v9,
                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51927708, 0, 0) )
    {
      bgTexture = this->fields.bgTexture;
      if ( bgTexture )
      {
        klass = bgTexture->klass;
LABEL_18:
        klass->vtable._27_set_mainTexture.methodPtr();
        return;
      }
      goto LABEL_20;
    }
    v14 = PlanetMapBackground_TypeInfo;
    if ( !PlanetMapBackground_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PlanetMapBackground_TypeInfo);
      v14 = PlanetMapBackground_TypeInfo;
    }
    v15 = AssetData__GetObject_object__51927708(
            assetData,
            v14->static_fields->Fgo20251220MapBaseName,
            (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
    {
      bgTexture = this->fields.bgTexture;
      if ( bgTexture )
      {
        klass = bgTexture->klass;
        goto LABEL_18;
      }
LABEL_20:
      sub_1C93D2C(bgTexture, v11);
    }
  }
}