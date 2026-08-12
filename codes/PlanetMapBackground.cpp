void PlanetMapBackground___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596D14C & 1) == 0 )
  {
    sub_2213A60(&PlanetMapBackground_TypeInfo);
    sub_2213A60(&StringLiteral_11080/*"PlanetEarthBg"*/);
    byte_596D14C = 1;
  }
  v7 = StringLiteral_11080/*"PlanetEarthBg"*/;
  PlanetMapBackground_TypeInfo->static_fields->Fgo20251220MapBaseName = (struct System_String_o *)StringLiteral_11080/*"PlanetEarthBg"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PlanetMapBackground_TypeInfo->static_fields,
    v7,
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Object_object__58532980; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  struct UITexture_o *bgTexture; // x0
  UITexture_c *klass; // x8
  PlanetMapBackground_c *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x20
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  v21 = mapImageId;
  if ( (byte_596D14B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PlanetMapBackground_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596D14B = 1;
  }
  if ( assetData )
  {
    v6 = PlanetMapBackground_TypeInfo;
    if ( !*(&PlanetMapBackground_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PlanetMapBackground_TypeInfo, assetData, *(_QWORD *)&mapImageId);
      v6 = PlanetMapBackground_TypeInfo;
    }
    Fgo20251220MapBaseName = v6->static_fields->Fgo20251220MapBaseName;
    v8 = System_Int32__ToString((int32_t)&v21, 0);
    v9 = System_String__Concat_75694928(Fgo20251220MapBaseName, (System_String_o *)StringLiteral_16746/*"_"*/, v8, 0);
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                assetData,
                                v9,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
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
    v17 = PlanetMapBackground_TypeInfo;
    if ( !*(&PlanetMapBackground_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PlanetMapBackground_TypeInfo, v13, v14);
      v17 = PlanetMapBackground_TypeInfo;
    }
    v20 = AssetData__GetObject_object__58532980(
            assetData,
            v17->static_fields->Fgo20251220MapBaseName,
            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
    {
      bgTexture = this->fields.bgTexture;
      if ( bgTexture )
      {
        klass = bgTexture->klass;
        goto LABEL_18;
      }
LABEL_20:
      sub_2213CDC(bgTexture, v13);
    }
  }
}