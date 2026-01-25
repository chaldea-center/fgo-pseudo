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

  if ( (byte_4CEFE01 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    this = (UIAlphaMaskTextureRender_o *)sub_1C7BAE8(&StringLiteral_16692/*"a"*/);
    byte_4CEFE01 = 1;
  }
  if ( !assetData )
    sub_1C7BD40(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_64176912(LastName, (System_String_o *)StringLiteral_16692/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51713432(
                                      assetData,
                                      v5,
                                      (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4CEFE00 & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    byte_4CEFE00 = 1;
  }
  if ( !assetData )
    sub_1C7BD40(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51713432(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
}