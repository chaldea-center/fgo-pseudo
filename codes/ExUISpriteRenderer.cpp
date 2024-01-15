void __fastcall ExUISpriteRenderer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ExUISpriteRenderer_c *v2; // x8

  if ( (byte_40F9C6D & 1) == 0 )
  {
    sub_B16FFC(&ExUISpriteRenderer_TypeInfo, v1);
    byte_40F9C6D = 1;
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
  UnityEngine_Renderer_o *v5; // x0
  UnityEngine_Material_o *material; // x0
  AssetData_o *assetData; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *loadAssetName; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *callbackFunc; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F9C64 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16009/*"_SubTex"*/, v3);
    byte_40F9C64 = 1;
  }
  spriteRenderer = this->fields.spriteRenderer;
  if ( !spriteRenderer )
    goto LABEL_20;
  UnityEngine_SpriteRenderer__set_sprite(spriteRenderer, 0LL, 0LL);
  if ( !this->fields.isTextureAlphaImage )
    goto LABEL_8;
  v5 = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
  this->fields.isTextureAlphaImage = 0;
  if ( !v5 || (material = UnityEngine_Renderer__get_material(v5, 0LL)) == 0LL )
LABEL_20:
    sub_B170D4();
  UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16009/*"_SubTex"*/, 0LL, 0LL);
LABEL_8:
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v15, v16, v17, v18, v19, v20);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_40F9C69 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, data);
    byte_40F9C69 = 1;
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
      if ( AssetManager__compAssetStorage_29944952(data, loadAssetName, 0LL) )
      {
        assetData = this->fields.assetData;
        this->fields.loadAssetName = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v6, v7, v8, v9, v10, v11);
        this->fields.assetData = data;
        sub_B16F98(
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
          AssetManager__releaseAsset_29947376(assetData, 0LL);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
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
      sub_B170D4();
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
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Action_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  AssetLoader_LoadEndDataHandler_o *v49; // x21
  ExUISpriteRenderer_o *v50; // x0
  System_String_o *v51; // x1
  System_Action_o *v52; // x2
  const MethodInfo *v53; // x3

  if ( (byte_40F9C68 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetName);
    sub_B16FFC(&AssetManager_TypeInfo, v13);
    sub_B16FFC(&Method_ExUISpriteRenderer_EndLoad__, v14);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    byte_40F9C68 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_B16F98(
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
          sub_B16F98(
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
      if ( AssetManager__compAssetStorage_29944952(assetData, assetName, 0LL) )
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
  sub_B16F98(
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
    v42 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callback,
                                      0LL);
    v33 = v42;
    if ( v42 && v42->klass != System_Action_TypeInfo )
    {
LABEL_32:
      v50 = (ExUISpriteRenderer_o *)sub_B173C8(v33);
      ExUISpriteRenderer__SetAssetImageBackFS(v50, v51, v52, v53);
      return;
    }
    this->fields.callbackFunc = v42;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  v49 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v38, v39, v40, v41);
  AssetLoader_LoadEndDataHandler___ctor(v49, (Il2CppObject *)this, Method_ExUISpriteRenderer_EndLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v49, 1, 0LL);
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

  if ( (byte_40F9C63 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9C63 = 1;
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
                                                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    this->fields.spriteRenderer = Component_WebViewObject;
    sub_B16F98(
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
  UnityEngine_SpriteRenderer_o *v6; // x0
  UnityEngine_Sprite_o *v7; // x0
  UnityEngine_Texture2D_o *texture; // x0
  int32_t mWidth; // w22
  float x; // s9
  UnityEngine_Texture2D_o *v11; // x21
  int v12; // w0
  float y; // s10
  int32_t mHeight; // w23
  int v15; // w20
  int v16; // w0
  float v17; // s8
  int v18; // w21
  UnityEngine_Transform_o *transform; // x0
  int32_t v20; // w9
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9C6C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9C6C = 1;
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
      v6 = this->fields.spriteRenderer;
      if ( v6 )
      {
        v7 = UnityEngine_SpriteRenderer__get_sprite(v6, 0LL);
        if ( v7 )
        {
          texture = UnityEngine_Sprite__get_texture(v7, 0LL);
          if ( texture )
          {
            mWidth = this->fields.mWidth;
            x = this->fields.baseScale.fields.x;
            v11 = texture;
            v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                    texture,
                    texture->klass->vtable._5_set_width.methodPtr);
            y = this->fields.baseScale.fields.y;
            mHeight = this->fields.mHeight;
            v15 = v12;
            v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v11->klass->vtable._6_get_height.method)(
                    v11,
                    v11->klass->vtable._7_set_height.methodPtr);
            v17 = this->fields.baseScale.fields.y;
            v18 = v16;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( transform )
            {
              v21.fields.y = (float)(y * (float)mHeight) / (float)v18;
              v21.fields.x = (float)(x * (float)mWidth) / (float)v15;
              v21.fields.z = v17;
              UnityEngine_Transform__set_localScale(transform, v21, 0LL);
LABEL_16:
              v20 = this->fields.mHeight;
              this->fields.oldWidth = this->fields.mWidth;
              this->fields.oldHeight = v20;
              return;
            }
          }
        }
      }
    }
    sub_B170D4();
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
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9C66 & 1) == 0 )
  {
    sub_B16FFC(&CommonUI_TypeInfo, assetName);
    sub_B16FFC(&ExUISpriteRenderer_TypeInfo, v5);
    sub_B16FFC(&FSUtility_TypeInfo, v6);
    byte_40F9C66 = 1;
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
  v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v26 )
LABEL_30:
    sub_B170D4();
  v28.fields.y = (float)(v23 * (float)(mHeight - BACK_HEIGHT_16_9)) / (float)(BACK_HEIGHT_21_9 - BACK_HEIGHT_16_9);
  v28.fields.x = x;
  v28.fields.z = z;
  UnityEngine_Transform__set_localPosition(v26, v28, 0LL);
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


void __fastcall ExUISpriteRenderer__SetAssetImage_24627348(
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
  UnityEngine_Material_o *material; // x0
  _BOOL4 isUseAlphaImage; // w8
  AssetData_o *assetData; // x20
  System_String_o *v10; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Texture_o *v12; // x20
  UnityEngine_Material_o *v13; // x0
  UnityEngine_Shader_o *shader; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Renderer_o *v20; // x0
  AssetData_o *v21; // x0
  WarBoardWaitTimeSetting_o *v22; // x0
  UnityEngine_Texture2D_o *v23; // x20
  int v24; // w21
  int v25; // w0
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  UnityEngine_SpriteRenderer_o *v30; // x21
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  UnityEngine_Sprite_o *_34895768; // x0
  const MethodInfo *v34; // x1
  float x; // s9
  int32_t mWidth; // w22
  int v37; // w0
  float y; // s10
  int32_t mHeight; // w23
  int v40; // w21
  int v41; // w0
  float v42; // s8
  int v43; // w20
  UnityEngine_Transform_o *transform; // x0
  MethodInfo v45; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9C6B & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, method);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16155/*"a"*/, v4);
    sub_B16FFC(&StringLiteral_16009/*"_SubTex"*/, v5);
    byte_40F9C6B = 1;
  }
  v45.methodPointer = 0LL;
  v45.invoker_method = 0LL;
  if ( this->fields.isTextureAlphaImage )
  {
    spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
    if ( !spriteRenderer )
      goto LABEL_19;
    material = UnityEngine_Renderer__get_material(spriteRenderer, 0LL);
    if ( !material )
      goto LABEL_19;
    UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16009/*"_SubTex"*/, 0LL, 0LL);
  }
  isUseAlphaImage = this->fields.isUseAlphaImage;
  this->fields.isTextureAlphaImage = isUseAlphaImage;
  if ( isUseAlphaImage )
  {
    assetData = this->fields.assetData;
    v10 = System_String__Concat_43743732(this->fields.assetLabel, (System_String_o *)StringLiteral_16155/*"a"*/, 0LL);
    if ( assetData )
    {
      Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         assetData,
                                         v10,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
      if ( this->fields.spriteRenderer )
      {
        v12 = (UnityEngine_Texture_o *)Object_WarBoardWaitTimeSetting;
        v13 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this->fields.spriteRenderer, 0LL);
        if ( v13 )
        {
          shader = UnityEngine_Material__get_shader(v13, 0LL);
          v19 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v15, v16, v17, v18);
          UnityEngine_Material___ctor(v19, shader, 0LL);
          if ( v19 )
          {
            UnityEngine_Material__SetTexture(v19, (System_String_o *)StringLiteral_16009/*"_SubTex"*/, v12, 0LL);
            v20 = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
            if ( v20 )
            {
              UnityEngine_Renderer__set_material(v20, v19, 0LL);
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_14:
  v21 = this->fields.assetData;
  if ( !v21 )
    goto LABEL_19;
  v22 = AssetData__GetObject_WarBoardWaitTimeSetting_(
          v21,
          this->fields.assetLabel,
          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v22 )
    goto LABEL_19;
  v23 = (UnityEngine_Texture2D_o *)v22;
  v24 = ((__int64 (__fastcall *)(WarBoardWaitTimeSetting_o *, const char *))v22->klass[1]._1.gc_desc)(
          v22,
          v22->klass[1]._1.name);
  v25 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v23->klass->vtable._6_get_height.method)(
          v23,
          v23->klass->vtable._7_set_height.methodPtr);
  v48.fields.m_Width = (float)v24;
  v48.fields.m_Height = (float)v25;
  v48.fields.m_XMin = 0.0;
  v48.fields.m_YMin = 0.0;
  UnityEngine_Rect___ctor(v48, v26, v27, v28, v29, &v45);
  v30 = this->fields.spriteRenderer;
  methodPointer = v45.methodPointer;
  invoker_method = v45.invoker_method;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
  *(_QWORD *)&v49.fields.m_XMin = methodPointer;
  *(_QWORD *)&v49.fields.m_Width = invoker_method;
  _34895768 = UnityEngine_Sprite__Create_34895768(v23, v49, pivotOffset, 1.0, 0LL);
  if ( !v30 )
    goto LABEL_19;
  UnityEngine_SpriteRenderer__set_sprite(v30, _34895768, 0LL);
  ExUISpriteRenderer__InitBaseScale(this, v34);
  x = this->fields.baseScale.fields.x;
  mWidth = this->fields.mWidth;
  v37 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v23->klass->vtable._4_get_width.method)(
          v23,
          v23->klass->vtable._5_set_width.methodPtr);
  y = this->fields.baseScale.fields.y;
  mHeight = this->fields.mHeight;
  v40 = v37;
  v41 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v23->klass->vtable._6_get_height.method)(
          v23,
          v23->klass->vtable._7_set_height.methodPtr);
  v42 = this->fields.baseScale.fields.y;
  v43 = v41;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v47.fields.y = (float)(y * (float)mHeight) / (float)v43;
  v47.fields.x = (float)(x * (float)mWidth) / (float)v40;
  v47.fields.z = v42;
  UnityEngine_Transform__set_localScale(transform, v47, 0LL);
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

  if ( (byte_40F9C65 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, tex);
    byte_40F9C65 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_29947376(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v13, v14, v15, v16, v17, v18);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
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
  WebViewManager_o *Instance; // x0
  UnityEngine_Component_o *commonCamera; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  int32_t width; // w20
  int32_t height; // w0
  float v16; // s8
  ManagerConfig_c *v17; // x0
  float v18; // s9
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  float LocalScaleX; // s0
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  float LocalScaleY; // s0
  ExUISpriteRenderer_c *v25; // x0
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x0
  WebViewManager_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  WebViewManager_o *v31; // x0
  UIWidget_o *v32; // x0
  double v33; // d0
  WebViewManager_o *v34; // x0
  UIWidget_o *v35; // x19
  int32_t v36; // w0
  WebViewManager_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  ManagerConfig_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x19
  int v42; // w8
  int v43; // w8

  if ( (byte_40F9C67 & 1) == 0 )
  {
    sub_B16FFC(&ExUISpriteRenderer_TypeInfo, assetName);
    sub_B16FFC(&FSUtility_TypeInfo, v7);
    sub_B16FFC(&ManagerConfig_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v9);
    byte_40F9C67 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  commonCamera = (UnityEngine_Component_o *)Instance[5].fields.commonCamera;
  if ( !commonCamera )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject(commonCamera, 0LL);
  if ( !gameObject )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsFullScreenBack(assetName, 0LL) )
  {
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v13, 0.0, 0LL);
    if ( sceneMode == 1 )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = UnityEngine_Screen__get_height(0LL);
      v16 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
      v17 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v17 = ManagerConfig_TypeInfo;
      }
      v18 = (float)v17->static_fields->WIDTH_21_9 / (float)v17->static_fields->HEIGHT;
      v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalScaleX = GameObjectExtensions__GetLocalScaleX(v20, 0LL);
      GameObjectExtensions__SetLocalScaleX(v19, LocalScaleX * (float)(v16 / v18), 0LL);
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalScaleY = GameObjectExtensions__GetLocalScaleY(v23, 0LL);
      GameObjectExtensions__SetLocalScaleY(v22, (float)(v16 / v18) * LocalScaleY, 0LL);
      v25 = ExUISpriteRenderer_TypeInfo;
      if ( (BYTE3(ExUISpriteRenderer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
        v25 = ExUISpriteRenderer_TypeInfo;
      }
      v26 = (float)((float)(v18 - v16)
                  / (float)(v18
                          - (float)((float)ManagerConfig_TypeInfo->static_fields->WIDTH
                                  / (float)ManagerConfig_TypeInfo->static_fields->HEIGHT)))
          * (float)(v25->static_fields->BACK_HEIGHT_16_9 - ManagerConfig_TypeInfo->static_fields->HEIGHT);
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v27, v26, 0LL);
      v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( v28 )
      {
        v29 = (UnityEngine_Component_o *)v28[5].fields.commonCamera;
        if ( v29 )
        {
          v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
          if ( v30 )
          {
            UnityEngine_GameObject__SetActive(v30, 1, 0LL);
            v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( v31 )
            {
              v32 = (UIWidget_o *)v31[5].fields.commonCamera;
              if ( v32 )
              {
                if ( v26 == INFINITY )
                  v33 = -v26;
                else
                  v33 = v26;
                UIWidget__set_height(v32, 2 * (int)v33, 0LL);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                if ( !FSUtility__IsTablet(0LL) )
                {
                  v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                  if ( !v34 )
                    goto LABEL_42;
                  v35 = (UIWidget_o *)v34[5].fields.commonCamera;
                  v36 = UnityEngine_Screen__get_width(0LL);
                  if ( !v35 )
                    goto LABEL_42;
                  UIWidget__set_width(v35, v36, 0LL);
                }
                v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( v37 )
                {
                  v38 = (UnityEngine_Component_o *)v37[5].fields.commonCamera;
                  if ( v38 )
                  {
                    v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
                    v40 = ManagerConfig_TypeInfo;
                    v41 = v39;
                    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      v40 = ManagerConfig_TypeInfo;
                    }
                    v42 = v40->static_fields->HEIGHT;
                    if ( v42 <= 0 )
                      v43 = -v42;
                    else
                      v43 = 1 - v42;
                    GameObjectExtensions__SetLocalPositionY(v41, v26 + (float)(v43 >> 1), 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_42:
      sub_B170D4();
    }
  }
}


void __fastcall ExUISpriteRenderer__SetTexture(
        ExUISpriteRenderer_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *spriteRenderer; // x0
  UnityEngine_Material_o *material; // x0
  int v7; // w21
  int v8; // w0
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s7
  UnityEngine_SpriteRenderer_o *v13; // x21
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  UnityEngine_Sprite_o *_34895768; // x0
  const MethodInfo *v17; // x1
  float x; // s9
  int32_t mWidth; // w22
  int v20; // w0
  float y; // s10
  int32_t mHeight; // w23
  int v23; // w21
  int v24; // w0
  float v25; // s8
  int v26; // w20
  UnityEngine_Transform_o *transform; // x0
  MethodInfo v28; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9C6A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16009/*"_SubTex"*/, tex);
    byte_40F9C6A = 1;
  }
  v28.methodPointer = 0LL;
  v28.invoker_method = 0LL;
  if ( this->fields.isTextureAlphaImage )
  {
    spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
    if ( !spriteRenderer || (material = UnityEngine_Renderer__get_material(spriteRenderer, 0LL)) == 0LL )
LABEL_11:
      sub_B170D4();
    UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16009/*"_SubTex"*/, 0LL, 0LL);
  }
  this->fields.isTextureAlphaImage = 0;
  if ( !tex )
    goto LABEL_11;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, const MethodInfo *))tex->klass->vtable._4_get_width.method)(
         tex,
         tex->klass->vtable._5_set_width.methodPtr,
         method);
  v8 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
         tex,
         tex->klass->vtable._7_set_height.methodPtr);
  v31.fields.m_Width = (float)v7;
  v31.fields.m_Height = (float)v8;
  v31.fields.m_XMin = 0.0;
  v31.fields.m_YMin = 0.0;
  UnityEngine_Rect___ctor(v31, v9, v10, v11, v12, &v28);
  v13 = this->fields.spriteRenderer;
  methodPointer = v28.methodPointer;
  invoker_method = v28.invoker_method;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
  *(_QWORD *)&v32.fields.m_XMin = methodPointer;
  *(_QWORD *)&v32.fields.m_Width = invoker_method;
  _34895768 = UnityEngine_Sprite__Create_34895768(tex, v32, pivotOffset, 1.0, 0LL);
  if ( !v13 )
    goto LABEL_11;
  UnityEngine_SpriteRenderer__set_sprite(v13, _34895768, 0LL);
  ExUISpriteRenderer__InitBaseScale(this, v17);
  x = this->fields.baseScale.fields.x;
  mWidth = this->fields.mWidth;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  y = this->fields.baseScale.fields.y;
  mHeight = this->fields.mHeight;
  v23 = v20;
  v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v25 = this->fields.baseScale.fields.y;
  v26 = v24;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_11;
  v30.fields.y = (float)(y * (float)mHeight) / (float)v26;
  v30.fields.x = (float)(x * (float)mWidth) / (float)v23;
  v30.fields.z = v25;
  UnityEngine_Transform__set_localScale(transform, v30, 0LL);
  *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
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
  UnityEngine_SpriteRenderer_o *v9; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
  if ( !spriteRenderer
    || (UnityEngine_Renderer__set_enabled(spriteRenderer, a > 0.0, 0LL), (v9 = this->fields.spriteRenderer) == 0LL) )
  {
    sub_B170D4();
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_SpriteRenderer__set_color(v9, v10, 0LL);
}