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

  if ( (byte_4D2E095 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    this = (UIAlphaMaskTextureRender_o *)sub_1C94098(&StringLiteral_16690/*"a"*/);
    byte_4D2E095 = 1;
  }
  if ( !assetData )
    sub_1C942F0(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_64417744(LastName, (System_String_o *)StringLiteral_16690/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51893132(
                                      assetData,
                                      v5,
                                      (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4D2E094 & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    byte_4D2E094 = 1;
  }
  if ( !assetData )
    sub_1C942F0(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51893132(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
}