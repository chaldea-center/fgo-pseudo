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

  if ( (byte_4C4478D & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    this = (UIAlphaMaskTextureRender_o *)sub_1C37058(&StringLiteral_16631/*"a"*/);
    byte_4C4478D = 1;
  }
  if ( !assetData )
    sub_1C372B4(this);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_63561656(LastName, (System_String_o *)StringLiteral_16631/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51154888(
                                      assetData,
                                      v5,
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4C4478C & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    byte_4C4478C = 1;
  }
  if ( !assetData )
    sub_1C372B4(this);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51154888(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
}