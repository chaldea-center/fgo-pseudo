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

  if ( (byte_4E061D6 & 1) == 0 )
  {
    sub_1CE6700(&Method_AssetData_GetObject_Texture2D____79905048);
    this = (UIAlphaMaskTextureRender_o *)sub_1CE6700(&StringLiteral_16786/*"a"*/);
    byte_4E061D6 = 1;
  }
  if ( !assetData )
    sub_1CE6958(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_65122828(LastName, (System_String_o *)StringLiteral_16786/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__52317288(
                                      assetData,
                                      v5,
                                      (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_Texture2D____79905048);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4E061D5 & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1CE6700(&Method_AssetData_GetObject_Texture2D____79905048);
    byte_4E061D5 = 1;
  }
  if ( !assetData )
    sub_1CE6958(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__52317288(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_Texture2D____79905048);
}