void UIAlphaMaskTexture___ctor(UIAlphaMaskTexture_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIAlphaMaskTexture__DestroyMaterial(UIAlphaMaskTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x20
  __int64 v4; // x1
  struct UITexture_o *v5; // x0
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4C58556 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58556 = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
  {
    v5 = this->fields.texture;
    if ( !v5 )
      goto LABEL_16;
    v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))v5->klass->vtable._24_get_material.methodPtr)(
                                   v5,
                                   v5->klass->vtable._24_get_material.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      v5 = this->fields.texture;
      if ( v5 )
      {
        v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))v5->klass->vtable._24_get_material.methodPtr)(
                                       v5,
                                       v5->klass->vtable._24_get_material.method);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71341564(v7, 0);
        v5 = this->fields.texture;
        if ( v5 )
        {
          ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))v5->klass->vtable._25_set_material.methodPtr)(
            v5,
            0,
            v5->klass->vtable._25_set_material.method);
          return;
        }
      }
LABEL_16:
      sub_1C3E7C0(v5, v4);
    }
  }
}


void UIAlphaMaskTexture__EndLoadAsset(UIAlphaMaskTexture_o *this, AssetData_o *asset, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  struct System_Action_o *callback; // x8

  if ( asset )
  {
    this->fields.assetData = asset;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)asset, (int32_t)method, v3);
    UIAlphaMaskTexture__SetTexture(this, v5);
  }
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


// attributes: thunk
void UIAlphaMaskTexture__OnDestroy(UIAlphaMaskTexture_o *this, const MethodInfo *method)
{
  UIAlphaMaskTexture__Release(this, method);
}


void UIAlphaMaskTexture__Release(UIAlphaMaskTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  AssetData_o *assetData; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *loadName; // x20
  CGThumbnailListItem_o *p_loadName; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C58555 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C58555 = 1;
  }
  UIAlphaMaskTexture__SetActive(this, 0, v2);
  UIAlphaMaskTexture__DestroyMaterial(this, v4);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40580972(assetData, 0);
    this->fields.assetData = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetData, 0, v6, v7);
  }
  loadName = this->fields.loadName;
  if ( loadName )
  {
    p_loadName = (CGThumbnailListItem_o *)&this->fields.loadName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadName, 0);
    p_loadName->klass = 0;
    sub_1C3E508(p_loadName, 0, v10, v11);
  }
}


void UIAlphaMaskTexture__SetActive(UIAlphaMaskTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C58554 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58554 = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.texture;
    if ( !v7 )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)this->fields.texture;
      if ( v7 )
      {
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0);
        if ( v7 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, isActive, 0);
          return;
        }
      }
LABEL_14:
      sub_1C3E7C0(v7, v6);
    }
  }
}


// attributes: thunk
void UIAlphaMaskTexture__SetAlphaMaskTexture(
        UIAlphaMaskTexture_o *this,
        System_String_o *loadName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UIAlphaMaskTexture__StartLoadAsset(this, loadName, callback, method);
}


void UIAlphaMaskTexture__SetOffsetDirect(
        UIAlphaMaskTexture_o *this,
        UnityEngine_Vector3_o offset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C3E7C0(0, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIAlphaMaskTexture__SetSizeDirect(
        UIAlphaMaskTexture_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *texture; // x0

  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture || (UIWidget__set_width(texture, width, 0), (texture = (UIWidget_o *)this->fields.texture) == 0) )
    sub_1C3E7C0(texture, *(_QWORD *)&width);
  UIWidget__set_height(texture, height, 0);
}


void UIAlphaMaskTexture__SetTexture(UIAlphaMaskTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *texture; // x20
  UnityEngine_Shader_o *v4; // x22
  UnityEngine_Material_o *v5; // x21
  UITexture_o *AlphaTexture; // x0
  __int64 v7; // x1
  struct UITexture_o *v8; // x20
  UIAlphaMaskTextureRender_o *v9; // x0
  const MethodInfo *v10; // x2
  UIAlphaMaskTextureRender_o *v11; // x0
  AssetData_o *assetData; // x1
  UnityEngine_Material_o *v13; // x19
  const MethodInfo *v14; // x2
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C58553 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C3E564(&StringLiteral_16279/*"_MaskTex"*/);
    byte_4C58553 = 1;
  }
  texture = this->fields.texture;
  v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v5 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v5, v4, 0);
  if ( !texture )
    goto LABEL_10;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
    texture,
    v5,
    texture->klass->vtable._25_set_material.method);
  AlphaTexture = this->fields.texture;
  if ( !AlphaTexture )
    goto LABEL_10;
  v15.fields.m_XMin = 0.0;
  v15.fields.m_YMin = 0.0;
  v15.fields.m_Width = 1.0;
  v15.fields.m_Height = 1.0;
  UITexture__set_uvRect(AlphaTexture, v15, 0);
  v8 = this->fields.texture;
  AlphaTexture = (UITexture_o *)UIAlphaMaskTextureRender__GetTexture(v9, this->fields.assetData, v10);
  if ( !v8 )
    goto LABEL_10;
  ((void (__fastcall *)(struct UITexture_o *, UITexture_o *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
    v8,
    AlphaTexture,
    v8->klass->vtable._27_set_mainTexture.method);
  AlphaTexture = this->fields.texture;
  if ( !AlphaTexture
    || (((void (__fastcall *)(UITexture_o *, const MethodInfo *))AlphaTexture->klass->vtable._33_MakePixelPerfect.methodPtr)(
          AlphaTexture,
          AlphaTexture->klass->vtable._33_MakePixelPerfect.method),
        (AlphaTexture = this->fields.texture) == 0)
    || (v11 = (UIAlphaMaskTextureRender_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))AlphaTexture->klass->vtable._24_get_material.methodPtr)(
                                              AlphaTexture,
                                              AlphaTexture->klass->vtable._24_get_material.method),
        assetData = this->fields.assetData,
        v13 = (UnityEngine_Material_o *)v11,
        AlphaTexture = (UITexture_o *)UIAlphaMaskTextureRender__GetAlphaTexture(v11, assetData, v14),
        !v13) )
  {
LABEL_10:
    sub_1C3E7C0(AlphaTexture, v7);
  }
  UnityEngine_Material__SetTexture(
    v13,
    (System_String_o *)StringLiteral_16279/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AlphaTexture,
    0);
}


void UIAlphaMaskTexture__StartLoadAsset(
        UIAlphaMaskTexture_o *this,
        System_String_o *loadName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetLoader_LoadEndDataHandler_o *v12; // x21

  if ( (byte_4C58552 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_UIAlphaMaskTexture_EndLoadAsset__);
    byte_4C58552 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(loadName, 0);
  if ( callback && IsNullOrEmpty )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  this->fields.loadName = loadName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadName, (int32_t)loadName, v8, v9);
  this->fields.callback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)callback, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_UIAlphaMaskTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(loadName, v12, 1, 0);
}