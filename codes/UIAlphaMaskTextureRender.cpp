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

  if ( (byte_4E78E7D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_Texture2D____80369832);
    this = (UIAlphaMaskTextureRender_o *)sub_1D0F0B4(&StringLiteral_16857/*"a"*/);
    byte_4E78E7D = 1;
  }
  if ( !assetData )
    sub_1D0F30C(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_65562772(LastName, (System_String_o *)StringLiteral_16857/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__52624444(
                                      assetData,
                                      v5,
                                      (const MethodInfo_322FC3C *)Method_AssetData_GetObject_Texture2D____80369832);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4E78E7C & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1D0F0B4(&Method_AssetData_GetObject_Texture2D____80369832);
    byte_4E78E7C = 1;
  }
  if ( !assetData )
    sub_1D0F30C(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__52624444(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_322FC3C *)Method_AssetData_GetObject_Texture2D____80369832);
}