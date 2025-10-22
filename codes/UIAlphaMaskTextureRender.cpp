void UIAlphaMaskTextureRender___ctor(UIAlphaMaskTextureRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetAlphaTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x0
  System_String_o *v5; // x1

  if ( (byte_4C58558 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    this = (UIAlphaMaskTextureRender_o *)sub_1C3E564(&StringLiteral_16641/*"a"*/);
    byte_4C58558 = 1;
  }
  if ( !assetData )
    sub_1C3E7C0(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_16641/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51228128(
                                      assetData,
                                      v5,
                                      (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4C58557 & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    byte_4C58557 = 1;
  }
  if ( !assetData )
    sub_1C3E7C0(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51228128(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
}