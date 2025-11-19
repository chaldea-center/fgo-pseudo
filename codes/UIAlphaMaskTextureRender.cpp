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

  if ( (byte_4CB7ACF & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    this = (UIAlphaMaskTextureRender_o *)sub_1C6BA08(&StringLiteral_16625/*"a"*/);
    byte_4CB7ACF = 1;
  }
  if ( !assetData )
    sub_1C6BC60(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  v5 = System_String__Concat_63966792(LastName, (System_String_o *)StringLiteral_16625/*"a"*/, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51495936(
                                      assetData,
                                      v5,
                                      (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
}


UnityEngine_Texture2D_o *UIAlphaMaskTextureRender__GetTexture(
        UIAlphaMaskTextureRender_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *LastName; // x1

  if ( (byte_4CB7ACE & 1) == 0 )
  {
    this = (UIAlphaMaskTextureRender_o *)sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    byte_4CB7ACE = 1;
  }
  if ( !assetData )
    sub_1C6BC60(this, assetData);
  LastName = AssetData__get_LastName(assetData, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51495936(
                                      assetData,
                                      LastName,
                                      (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
}