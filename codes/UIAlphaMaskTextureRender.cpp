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

  if ( (byte_4CC8BF8 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    this = (UIAlphaMaskTextureRender_o *)sub_1C713B0(&StringLiteral_16632/*"a"*/);
    byte_4CC8BF8 = 1;
  }
  if ( !assetData )
    sub_1C71608(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_64031724(LastName, (System_String_o *)StringLiteral_16632/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51560868(
                                      assetData,
                                      v5,
                                      (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4CC8BF7 & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    byte_4CC8BF7 = 1;
  }
  if ( !assetData )
    sub_1C71608(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51560868(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
}