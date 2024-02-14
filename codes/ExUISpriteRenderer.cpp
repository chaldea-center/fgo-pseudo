void __fastcall ExUISpriteRenderer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ExUISpriteRenderer_c *v2; // x8

  if ( (byte_421515A & 1) == 0 )
  {
    sub_B0D8A4(&ExUISpriteRenderer_TypeInfo, v1);
    byte_421515A = 1;
  }
  ExUISpriteRenderer_TypeInfo->static_fields->BACK_WIDTH_21_9 = 1345;
  ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_21_9 = 823;
  v2 = ExUISpriteRenderer_TypeInfo;
  ExUISpriteRenderer_TypeInfo->static_fields->BACK_WIDTH_16_9 = 1025;
  v2->static_fields->BACK_HEIGHT_16_9 = 627;
}


void __fastcall ExUISpriteRenderer___ctor(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.oldWidth = 0x100000001LL;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall ExUISpriteRenderer__ClearImage(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_SpriteRenderer_o *spriteRenderer; // x0
  AssetData_o *assetData; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_o *loadAssetName; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o *callbackFunc; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4215151 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16120/*"_SubTex"*/, v3);
    byte_4215151 = 1;
  }
  spriteRenderer = this->fields.spriteRenderer;
  if ( !spriteRenderer )
    goto LABEL_20;
  UnityEngine_SpriteRenderer__set_sprite(spriteRenderer, 0LL, 0LL);
  if ( !this->fields.isTextureAlphaImage )
    goto LABEL_8;
  spriteRenderer = this->fields.spriteRenderer;
  this->fields.isTextureAlphaImage = 0;
  if ( !spriteRenderer
    || (spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_Renderer__get_material(
                                                           (UnityEngine_Renderer_o *)spriteRenderer,
                                                           0LL)) == 0LL )
  {
LABEL_20:
    sub_B0D97C(spriteRenderer);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)spriteRenderer,
    (System_String_o *)StringLiteral_16120/*"_SubTex"*/,
    0LL,
    0LL);
LABEL_8:
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v13, v14, v15, v16, v17, v18);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
    if ( callbackFunc )
      System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall ExUISpriteRenderer__EndLoad(ExUISpriteRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  AssetData_o *assetData; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Action_o *callbackFunc; // x20

  if ( (byte_4215156 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, data);
    byte_4215156 = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__compAssetStorage_29513976(data, loadAssetName, 0LL) )
      {
        assetData = this->fields.assetData;
        this->fields.loadAssetName = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v6, v7, v8, v9, v10, v11);
        this->fields.assetData = data;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.assetData,
          (System_Int32_array **)data,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        ExUISpriteRenderer__SetAssetTexture(this, v19);
        if ( assetData )
        {
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAsset_29516400(assetData, 0LL);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
        if ( callbackFunc )
          System_Action__Invoke(callbackFunc, 0LL);
      }
    }
  }
}


UnityEngine_Color_o __fastcall ExUISpriteRenderer__GetTweenColor(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  a = this->fields.mColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


void __fastcall ExUISpriteRenderer__InitBaseScale(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      sub_B0D97C(0LL);
    this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExUISpriteRenderer__LoadAssetTexture(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        bool isUseAlphaImage,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *loadAssetName; // x23
  bool v23; // w8
  struct System_String_o **p_loadAssetName; // x22
  System_Delegate_o *callbackFunc; // x0
  System_Delegate_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  void *v33; // x8
  AssetData_o *assetData; // x23
  const MethodInfo *v35; // x1
  System_Action_o *v36; // x0
  System_String_o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  struct System_Action_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  AssetLoader_LoadEndDataHandler_o *v47; // x21
  ExUISpriteRenderer_o *v48; // x0
  System_String_o *v49; // x1
  System_Action_o *v50; // x2
  const MethodInfo *v51; // x3

  if ( (byte_4215155 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetName);
    sub_B0D8A4(&AssetManager_TypeInfo, v13);
    sub_B0D8A4(&Method_ExUISpriteRenderer_EndLoad__, v14);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    byte_4215155 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.assetLabel,
    (System_Int32_array **)assetLabel,
    (System_String_array **)assetLabel,
    (System_String_array **)isUseAlphaImage,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  loadAssetName = this->fields.loadAssetName;
  v23 = isUseAlphaImage;
  p_loadAssetName = &this->fields.loadAssetName;
  this->fields.isUseAlphaImage = v23;
  if ( loadAssetName )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0LL) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( callbackFunc )
      {
        v26 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)this->fields.callbackFunc, 0LL);
        v33 = v26;
        if ( !v26 || (System_Action_c *)v26->klass == System_Action_TypeInfo )
        {
          this->fields.callbackFunc = (struct System_Action_o *)v26;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          return;
        }
        goto LABEL_32;
      }
      return;
    }
    v37 = *p_loadAssetName;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v37, 0LL);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__compAssetStorage_29513976(assetData, assetName, 0LL) )
      {
        ExUISpriteRenderer__SetAssetTexture(this, v35);
        v36 = this->fields.callbackFunc;
        if ( v36 )
          System_Action__Invoke(v36, 0LL);
        return;
      }
    }
  }
  *p_loadAssetName = assetName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadAssetName,
    (System_Int32_array **)assetName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( callback )
  {
    v40 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callback,
                                      0LL);
    v33 = v40;
    if ( v40 && v40->klass != System_Action_TypeInfo )
    {
LABEL_32:
      v48 = (ExUISpriteRenderer_o *)sub_B0DC70(v33);
      ExUISpriteRenderer__SetAssetImageBackFS(v48, v49, v50, v51);
      return;
    }
    this->fields.callbackFunc = v40;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v38, v39);
  AssetLoader_LoadEndDataHandler___ctor(v47, (Il2CppObject *)this, Method_ExUISpriteRenderer_EndLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v47, 1, 0LL);
}


void __fastcall ExUISpriteRenderer__OnInit(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIWidget__OnInit((UIWidget_o *)this, 0LL);
  ExUISpriteRenderer__InitBaseScale(this, v3);
}


void __fastcall ExUISpriteRenderer__OnStart(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *spriteRenderer; // x20
  struct UnityEngine_SpriteRenderer_o *Component_WebViewObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  if ( (byte_4215150 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215150 = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0LL);
  spriteRenderer = (UnityEngine_Object_o *)this->fields.spriteRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(spriteRenderer, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct UnityEngine_SpriteRenderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                       (UnityEngine_Component_o *)this,
                                                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    this->fields.spriteRenderer = Component_WebViewObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.spriteRenderer,
      (System_Int32_array **)Component_WebViewObject,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(defaultTexture, 0LL, 0LL) )
    ExUISpriteRenderer__SetImage(this, this->fields.defaultTexture, v14);
  ExUISpriteRenderer__InitBaseScale(this, v13);
  ExUISpriteRenderer__ReScaleUpdate(this, v15);
}


void __fastcall ExUISpriteRenderer__ReScaleUpdate(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_SpriteRenderer_o *spriteRenderer; // x0
  UnityEngine_Object_o *sprite; // x20
  const MethodInfo *v5; // x1
  int32_t mWidth; // w22
  float x; // s9
  UnityEngine_SpriteRenderer_o *v8; // x21
  int v9; // w0
  float y; // s10
  int32_t mHeight; // w23
  int v12; // w20
  int v13; // w0
  float v14; // s8
  int v15; // w21
  int32_t v16; // w9
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215159 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215159 = 1;
  }
  if ( this->fields.isInit
    && (this->fields.oldWidth != this->fields.mWidth || this->fields.oldHeight != this->fields.mHeight) )
  {
    spriteRenderer = this->fields.spriteRenderer;
    if ( spriteRenderer )
    {
      sprite = (UnityEngine_Object_o *)UnityEngine_SpriteRenderer__get_sprite(spriteRenderer, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(sprite, 0LL, 0LL) )
        goto LABEL_16;
      ExUISpriteRenderer__InitBaseScale(this, v5);
      spriteRenderer = this->fields.spriteRenderer;
      if ( spriteRenderer )
      {
        spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_SpriteRenderer__get_sprite(spriteRenderer, 0LL);
        if ( spriteRenderer )
        {
          spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_Sprite__get_texture(
                                                             (UnityEngine_Sprite_o *)spriteRenderer,
                                                             0LL);
          if ( spriteRenderer )
          {
            mWidth = this->fields.mWidth;
            x = this->fields.baseScale.fields.x;
            v8 = spriteRenderer;
            v9 = ((__int64 (__fastcall *)(UnityEngine_SpriteRenderer_o *, const char *))spriteRenderer->klass[1]._1.gc_desc)(
                   spriteRenderer,
                   spriteRenderer->klass[1]._1.name);
            y = this->fields.baseScale.fields.y;
            mHeight = this->fields.mHeight;
            v12 = v9;
            v13 = (*(__int64 (__fastcall **)(UnityEngine_SpriteRenderer_o *, void *))&v8->klass[1]._1.byval_arg.bits)(
                    v8,
                    v8->klass[1]._1.this_arg.data);
            v14 = this->fields.baseScale.fields.y;
            v15 = v13;
            spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
            if ( spriteRenderer )
            {
              v17.fields.y = (float)(y * (float)mHeight) / (float)v15;
              v17.fields.x = (float)(x * (float)mWidth) / (float)v12;
              v17.fields.z = v14;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v17, 0LL);
LABEL_16:
              v16 = this->fields.mHeight;
              this->fields.oldWidth = this->fields.mWidth;
              this->fields.oldHeight = v16;
              return;
            }
          }
        }
      }
    }
    sub_B0D97C(spriteRenderer);
  }
}


void __fastcall ExUISpriteRenderer__Resize(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ExUISpriteRenderer_c *v7; // x0
  int32_t BACK_WIDTH_21_9; // w1
  ExUISpriteRenderer_c *v9; // x0
  const MethodInfo *v10; // x1
  int32_t width; // w21
  int32_t height; // w0
  float v13; // s8
  ExUISpriteRenderer_c *v14; // x0
  int32_t v15; // w0
  int32_t v16; // w0
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float z; // s9
  float BackFSOffsetY; // s0
  int32_t mHeight; // w22
  struct ExUISpriteRenderer_StaticFields *static_fields; // x8
  float v23; // s10
  int32_t BACK_HEIGHT_16_9; // w20
  int32_t BACK_HEIGHT_21_9; // w21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215153 & 1) == 0 )
  {
    sub_B0D8A4(&CommonUI_TypeInfo, assetName);
    sub_B0D8A4(&ExUISpriteRenderer_TypeInfo, v5);
    sub_B0D8A4(&FSUtility_TypeInfo, v6);
    byte_4215153 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsFullScreenBack(assetName, 0LL) )
  {
    v7 = ExUISpriteRenderer_TypeInfo;
    if ( (BYTE3(ExUISpriteRenderer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
      v7 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v7->static_fields->BACK_WIDTH_21_9;
LABEL_19:
    UIWidget__set_width((UIWidget_o *)this, BACK_WIDTH_21_9, 0LL);
    UIWidget__set_height((UIWidget_o *)this, ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9, 0LL);
    goto LABEL_29;
  }
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    v9 = ExUISpriteRenderer_TypeInfo;
    if ( (BYTE3(ExUISpriteRenderer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
      v9 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v9->static_fields->BACK_WIDTH_16_9;
    goto LABEL_19;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v13 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
  v14 = ExUISpriteRenderer_TypeInfo;
  if ( (BYTE3(ExUISpriteRenderer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
    v14 = ExUISpriteRenderer_TypeInfo;
  }
  v15 = UnityEngine_Mathf__RoundToInt(
          (float)((float)(v13 * (float)v14->static_fields->BACK_WIDTH_16_9) * 9.0) * 0.0625,
          0LL);
  UIWidget__set_width((UIWidget_o *)this, v15, 0LL);
  v16 = UnityEngine_Mathf__RoundToInt(
          (float)((float)(v13 * (float)ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9) * 9.0) * 0.0625,
          0LL);
  UIWidget__set_height((UIWidget_o *)this, v16, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_30;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  BackFSOffsetY = FSUtility__GetBackFSOffsetY(assetName, 0LL);
  mHeight = this->fields.mHeight;
  static_fields = ExUISpriteRenderer_TypeInfo->static_fields;
  v23 = BackFSOffsetY;
  BACK_HEIGHT_16_9 = static_fields->BACK_HEIGHT_16_9;
  BACK_HEIGHT_21_9 = static_fields->BACK_HEIGHT_21_9;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
LABEL_30:
    sub_B0D97C(transform);
  v27.fields.y = (float)(v23 * (float)(mHeight - BACK_HEIGHT_16_9)) / (float)(BACK_HEIGHT_21_9 - BACK_HEIGHT_16_9);
  v27.fields.x = x;
  v27.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v27, 0LL);
LABEL_29:
  ExUISpriteRenderer__ReScaleUpdate(this, v10);
}


void __fastcall ExUISpriteRenderer__SetAssetImage(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, 0LL, 0, callback, v4);
}


void __fastcall ExUISpriteRenderer__SetAssetImage2(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, assetLabel, 1, callback, v5);
}


void __fastcall ExUISpriteRenderer__SetAssetImageBackFS(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  const MethodInfo *v7; // x2

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, 0LL, 0, callback, v4);
  ExUISpriteRenderer__Resize(this, assetName, v7);
}


void __fastcall ExUISpriteRenderer__SetAssetImage_25672300(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, assetLabel, 0, callback, v5);
}


void __fastcall ExUISpriteRenderer__SetAssetTexture(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Renderer_o *spriteRenderer; // x0
  _BOOL4 isUseAlphaImage; // w8
  AssetData_o *assetData; // x20
  UnityEngine_Texture_o *v9; // x20
  UnityEngine_Shader_o *shader; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Material_o *v13; // x21
  UnityEngine_Texture2D_o *v14; // x20
  int v15; // w21
  int v16; // w0
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  UnityEngine_SpriteRenderer_o *v21; // x21
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  const MethodInfo *v24; // x1
  float x; // s9
  int32_t mWidth; // w22
  int v27; // w0
  float y; // s10
  int32_t mHeight; // w23
  int v30; // w21
  int v31; // w0
  float v32; // s8
  int v33; // w20
  MethodInfo v34; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215158 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, method);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_16268/*"a"*/, v4);
    sub_B0D8A4(&StringLiteral_16120/*"_SubTex"*/, v5);
    byte_4215158 = 1;
  }
  v34.methodPointer = 0LL;
  v34.invoker_method = 0LL;
  if ( this->fields.isTextureAlphaImage )
  {
    spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
    if ( !spriteRenderer )
      goto LABEL_19;
    spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(spriteRenderer, 0LL);
    if ( !spriteRenderer )
      goto LABEL_19;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)spriteRenderer,
      (System_String_o *)StringLiteral_16120/*"_SubTex"*/,
      0LL,
      0LL);
  }
  isUseAlphaImage = this->fields.isUseAlphaImage;
  this->fields.isTextureAlphaImage = isUseAlphaImage;
  if ( isUseAlphaImage )
  {
    assetData = this->fields.assetData;
    spriteRenderer = (UnityEngine_Renderer_o *)System_String__Concat_43849904(
                                                 this->fields.assetLabel,
                                                 (System_String_o *)StringLiteral_16268/*"a"*/,
                                                 0LL);
    if ( assetData )
    {
      spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                   assetData,
                                                   (System_String_o *)spriteRenderer,
                                                   (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
      if ( this->fields.spriteRenderer )
      {
        v9 = (UnityEngine_Texture_o *)spriteRenderer;
        spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)this->fields.spriteRenderer,
                                                     0LL);
        if ( spriteRenderer )
        {
          shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteRenderer, 0LL);
          v13 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v11, v12);
          UnityEngine_Material___ctor(v13, shader, 0LL);
          if ( v13 )
          {
            UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16120/*"_SubTex"*/, v9, 0LL);
            spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
            if ( spriteRenderer )
            {
              UnityEngine_Renderer__set_material(spriteRenderer, v13, 0LL);
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_19:
    sub_B0D97C(spriteRenderer);
  }
LABEL_14:
  spriteRenderer = (UnityEngine_Renderer_o *)this->fields.assetData;
  if ( !spriteRenderer )
    goto LABEL_19;
  spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                               (AssetData_o *)spriteRenderer,
                                               this->fields.assetLabel,
                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  if ( !spriteRenderer )
    goto LABEL_19;
  v14 = (UnityEngine_Texture2D_o *)spriteRenderer;
  v15 = ((__int64 (__fastcall *)(UnityEngine_Renderer_o *, const char *))spriteRenderer->klass[1]._1.gc_desc)(
          spriteRenderer,
          spriteRenderer->klass[1]._1.name);
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v14->klass->vtable._6_get_height.method)(
          v14,
          v14->klass->vtable._7_set_height.methodPtr);
  v37.fields.m_Width = (float)v15;
  v37.fields.m_Height = (float)v16;
  v37.fields.m_XMin = 0.0;
  v37.fields.m_YMin = 0.0;
  UnityEngine_Rect___ctor(v37, v17, v18, v19, v20, &v34);
  v21 = this->fields.spriteRenderer;
  methodPointer = v34.methodPointer;
  invoker_method = v34.invoker_method;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
  *(_QWORD *)&v38.fields.m_XMin = methodPointer;
  *(_QWORD *)&v38.fields.m_Width = invoker_method;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Sprite__Create_35021580(v14, v38, pivotOffset, 1.0, 0LL);
  if ( !v21 )
    goto LABEL_19;
  UnityEngine_SpriteRenderer__set_sprite(v21, (UnityEngine_Sprite_o *)spriteRenderer, 0LL);
  ExUISpriteRenderer__InitBaseScale(this, v24);
  x = this->fields.baseScale.fields.x;
  mWidth = this->fields.mWidth;
  v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v14->klass->vtable._4_get_width.method)(
          v14,
          v14->klass->vtable._5_set_width.methodPtr);
  y = this->fields.baseScale.fields.y;
  mHeight = this->fields.mHeight;
  v30 = v27;
  v31 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v14->klass->vtable._6_get_height.method)(
          v14,
          v14->klass->vtable._7_set_height.methodPtr);
  v32 = this->fields.baseScale.fields.y;
  v33 = v31;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !spriteRenderer )
    goto LABEL_19;
  v36.fields.y = (float)(y * (float)mHeight) / (float)v33;
  v36.fields.x = (float)(x * (float)mWidth) / (float)v30;
  v36.fields.z = v32;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v36, 0LL);
  *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
}


void __fastcall ExUISpriteRenderer__SetImage(
        ExUISpriteRenderer_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  AssetData_o *assetData; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_o *loadAssetName; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o *callbackFunc; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4215152 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, tex);
    byte_4215152 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29516400(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v13, v14, v15, v16, v17, v18);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
    if ( callbackFunc )
      System_Action__Invoke(callbackFunc, 0LL);
  }
  ExUISpriteRenderer__SetTexture(this, tex, method);
}


void __fastcall ExUISpriteRenderer__SetSceneMode(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        int32_t sceneMode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t width; // w20
  int32_t height; // w0
  float v14; // s8
  ManagerConfig_c *v15; // x0
  float v16; // s9
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  float LocalScaleX; // s0
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  float LocalScaleY; // s0
  ExUISpriteRenderer_c *v23; // x0
  float v24; // s8
  UnityEngine_GameObject_o *v25; // x0
  double v26; // d0
  UIWidget_o *klass; // x19
  UnityEngine_GameObject_o *v28; // x0
  ManagerConfig_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x19
  int v31; // w8
  int v32; // w8

  if ( (byte_4215154 & 1) == 0 )
  {
    sub_B0D8A4(&ExUISpriteRenderer_TypeInfo, assetName);
    sub_B0D8A4(&FSUtility_TypeInfo, v7);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v9);
    byte_4215154 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (UnityEngine_Component_o *)Instance[24].klass;
  if ( !Instance )
    goto LABEL_42;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsFullScreenBack(assetName, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
    if ( sceneMode == 1 )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v14 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
      v15 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v15 = ManagerConfig_TypeInfo;
      }
      v16 = (float)v15->static_fields->WIDTH_21_9 / (float)v15->static_fields->HEIGHT;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalScaleX = GameObjectExtensions__GetLocalScaleX(v18, 0LL);
      GameObjectExtensions__SetLocalScaleX(v17, LocalScaleX * (float)(v14 / v16), 0LL);
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalScaleY = GameObjectExtensions__GetLocalScaleY(v21, 0LL);
      GameObjectExtensions__SetLocalScaleY(v20, (float)(v14 / v16) * LocalScaleY, 0LL);
      v23 = ExUISpriteRenderer_TypeInfo;
      if ( (BYTE3(ExUISpriteRenderer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
        v23 = ExUISpriteRenderer_TypeInfo;
      }
      v24 = (float)((float)(v16 - v14)
                  / (float)(v16
                          - (float)((float)ManagerConfig_TypeInfo->static_fields->WIDTH
                                  / (float)ManagerConfig_TypeInfo->static_fields->HEIGHT)))
          * (float)(v23->static_fields->BACK_HEIGHT_16_9 - ManagerConfig_TypeInfo->static_fields->HEIGHT);
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v25, v24, 0LL);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (UnityEngine_Component_o *)Instance[24].klass;
        if ( Instance )
        {
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)Instance[24].klass;
              if ( Instance )
              {
                if ( v24 == INFINITY )
                  v26 = -v24;
                else
                  v26 = v24;
                UIWidget__set_height((UIWidget_o *)Instance, 2 * (int)v26, 0LL);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                if ( !FSUtility__IsTablet(0LL) )
                {
                  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_42;
                  klass = (UIWidget_o *)Instance[24].klass;
                  Instance = (UnityEngine_Component_o *)UnityEngine_Screen__get_width(0LL);
                  if ( !klass )
                    goto LABEL_42;
                  UIWidget__set_width(klass, (int32_t)Instance, 0LL);
                }
                Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (UnityEngine_Component_o *)Instance[24].klass;
                  if ( Instance )
                  {
                    v28 = UnityEngine_Component__get_gameObject(Instance, 0LL);
                    v29 = ManagerConfig_TypeInfo;
                    v30 = v28;
                    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      v29 = ManagerConfig_TypeInfo;
                    }
                    v31 = v29->static_fields->HEIGHT;
                    if ( v31 <= 0 )
                      v32 = -v31;
                    else
                      v32 = 1 - v31;
                    GameObjectExtensions__SetLocalPositionY(v30, v24 + (float)(v32 >> 1), 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_42:
      sub_B0D97C(Instance);
    }
  }
}


void __fastcall ExUISpriteRenderer__SetTexture(
        ExUISpriteRenderer_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  ExUISpriteRenderer_o *v4; // x19
  int v5; // w21
  int v6; // w0
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  UnityEngine_SpriteRenderer_o *spriteRenderer; // x21
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  const MethodInfo *v14; // x1
  float x; // s9
  int mWidth; // w22
  int v17; // w0
  float y; // s10
  int mHeight; // w23
  int v20; // w21
  int v21; // w0
  float v22; // s8
  int v23; // w20
  MethodInfo v24; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4215157 & 1) == 0 )
  {
    this = (ExUISpriteRenderer_o *)sub_B0D8A4(&StringLiteral_16120/*"_SubTex"*/, tex);
    byte_4215157 = 1;
  }
  v24.methodPointer = 0LL;
  v24.invoker_method = 0LL;
  if ( v4->fields.isTextureAlphaImage )
  {
    this = (ExUISpriteRenderer_o *)v4->fields.spriteRenderer;
    if ( !this
      || (this = (ExUISpriteRenderer_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL)) == 0LL )
    {
LABEL_11:
      sub_B0D97C(this);
    }
    UnityEngine_Material__SetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16120/*"_SubTex"*/, 0LL, 0LL);
  }
  v4->fields.isTextureAlphaImage = 0;
  if ( !tex )
    goto LABEL_11;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, const MethodInfo *))tex->klass->vtable._4_get_width.method)(
         tex,
         tex->klass->vtable._5_set_width.methodPtr,
         method);
  v6 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
         tex,
         tex->klass->vtable._7_set_height.methodPtr);
  v27.fields.m_Width = (float)v5;
  v27.fields.m_Height = (float)v6;
  v27.fields.m_XMin = 0.0;
  v27.fields.m_YMin = 0.0;
  UnityEngine_Rect___ctor(v27, v7, v8, v9, v10, &v24);
  spriteRenderer = v4->fields.spriteRenderer;
  methodPointer = v24.methodPointer;
  invoker_method = v24.invoker_method;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)v4, 0LL);
  *(_QWORD *)&v28.fields.m_XMin = methodPointer;
  *(_QWORD *)&v28.fields.m_Width = invoker_method;
  this = (ExUISpriteRenderer_o *)UnityEngine_Sprite__Create_35021580(tex, v28, pivotOffset, 1.0, 0LL);
  if ( !spriteRenderer )
    goto LABEL_11;
  UnityEngine_SpriteRenderer__set_sprite(spriteRenderer, (UnityEngine_Sprite_o *)this, 0LL);
  ExUISpriteRenderer__InitBaseScale(v4, v14);
  x = v4->fields.baseScale.fields.x;
  mWidth = v4->fields.mWidth;
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  y = v4->fields.baseScale.fields.y;
  mHeight = v4->fields.mHeight;
  v20 = v17;
  v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v22 = v4->fields.baseScale.fields.y;
  v23 = v21;
  this = (ExUISpriteRenderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_11;
  v26.fields.y = (float)(y * (float)mHeight) / (float)v23;
  v26.fields.x = (float)(x * (float)mWidth) / (float)v20;
  v26.fields.z = v22;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v26, 0LL);
  *(_QWORD *)&v4->fields.oldWidth = *(_QWORD *)&v4->fields.mWidth;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExUISpriteRenderer__SetTweenColor(
        ExUISpriteRenderer_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Renderer_o *spriteRenderer; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
  if ( !spriteRenderer
    || (UnityEngine_Renderer__set_enabled(spriteRenderer, a > 0.0, 0LL),
        (spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer) == 0LL) )
  {
    sub_B0D97C(spriteRenderer);
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UnityEngine_SpriteRenderer__set_color((UnityEngine_SpriteRenderer_o *)spriteRenderer, v9, 0LL);
}