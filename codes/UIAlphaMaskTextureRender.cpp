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

  if ( (byte_59720A0 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    this = (UIAlphaMaskTextureRender_o *)sub_2213A60(&StringLiteral_17306/*"a"*/);
    byte_59720A0 = 1;
  }
  if ( !assetData )
    sub_2213CDC(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_75651716(LastName, (System_String_o *)StringLiteral_17306/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                      assetData,
                                      v5,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_597209F & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    byte_597209F = 1;
  }
  if ( !assetData )
    sub_2213CDC(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
}