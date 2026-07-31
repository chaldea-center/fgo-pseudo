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

  if ( (byte_5939ECD & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    this = (UIAlphaMaskTextureRender_o *)sub_21FFC50(&StringLiteral_17270/*"a"*/);
    byte_5939ECD = 1;
  }
  if ( !assetData )
    sub_21FFECC(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_75438412(LastName, (System_String_o *)StringLiteral_17270/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58323140(
                                      assetData,
                                      v5,
                                      (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_5939ECC & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    byte_5939ECC = 1;
  }
  if ( !assetData )
    sub_21FFECC(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58323140(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
}