void ExUISpriteRenderer___cctor(const MethodInfo *method)
{
  if ( (byte_4CB56AC & 1) == 0 )
  {
    sub_1C6BA08(&ExUISpriteRenderer_TypeInfo);
    byte_4CB56AC = 1;
  }
  *ExUISpriteRenderer_TypeInfo->static_fields = (struct ExUISpriteRenderer_StaticFields)xmmword_CECB80;
}


void ExUISpriteRenderer___ctor(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.oldWidth = 0x100000001LL;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void ExUISpriteRenderer__ClearImage(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_SpriteRenderer_o *spriteRenderer; // x0
  AssetData_o *assetData; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *loadAssetName; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Action_o *callbackFunc; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB56A3 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_16353/*"_SubTex"*/);
    byte_4CB56A3 = 1;
  }
  spriteRenderer = this->fields.spriteRenderer;
  if ( !spriteRenderer )
    goto LABEL_18;
  UnityEngine_SpriteRenderer__set_sprite(spriteRenderer, 0, 0);
  if ( !this->fields.isTextureAlphaImage )
    goto LABEL_8;
  spriteRenderer = this->fields.spriteRenderer;
  this->fields.isTextureAlphaImage = 0;
  if ( !spriteRenderer
    || (spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_Renderer__get_material(
                                                           (UnityEngine_Renderer_o *)spriteRenderer,
                                                           0)) == 0 )
  {
LABEL_18:
    sub_1C6BC60(spriteRenderer, method);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)spriteRenderer,
    (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
    0,
    0);
LABEL_8:
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40765532(assetData, 0);
    this->fields.assetData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v5, v6);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadAssetName, 0, v8, v9);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v11, v12);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void ExUISpriteRenderer__EndLoad(ExUISpriteRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  AssetData_o *assetData; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4CB56A8 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB56A8 = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_40763204(data, loadAssetName, 0) )
      {
        assetData = this->fields.assetData;
        this->fields.loadAssetName = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadAssetName, 0, v6, v7);
        this->fields.assetData = data;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)data, v9, v10);
        ExUISpriteRenderer__SetAssetTexture(this, v11);
        if ( assetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40765532(assetData, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v12, v13);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
      }
    }
  }
}


UnityEngine_Color_o ExUISpriteRenderer__GetTweenColor(ExUISpriteRenderer_o *this, const MethodInfo *method)
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


void ExUISpriteRenderer__InitBaseScale(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      sub_1C6BC60(0, v4);
    this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ExUISpriteRenderer__LoadAssetTexture(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        bool isUseAlphaImage,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v10; // w25
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *loadAssetName; // x23
  struct System_String_o **p_loadAssetName; // x22
  System_Delegate_o *callbackFunc; // x0
  struct System_Action_o **p_callbackFunc; // x19
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Delegate_o *v20; // x8
  System_Action_c *v21; // x1
  AssetData_o *assetData; // x23
  const MethodInfo *v23; // x1
  struct System_Action_o *v24; // x8
  System_String_o *v25; // x23
  struct System_Action_o **v26; // x22
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Action_c *v30; // x1
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  v10 = isUseAlphaImage;
  if ( (byte_4CB56A7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_ExUISpriteRenderer_EndLoad__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CB56A7 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    (int32_t)assetLabel,
    (const MethodInfo *)isUseAlphaImage);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = &this->fields.loadAssetName;
  this->fields.isUseAlphaImage = v10;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( !callbackFunc )
        return;
      p_callbackFunc = &this->fields.callbackFunc;
      v17 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)this->fields.callbackFunc, 0);
      v20 = v17;
      if ( v17 )
      {
        v21 = System_Action_TypeInfo;
        if ( (System_Action_c *)v17->klass != System_Action_TypeInfo
          || (*p_callbackFunc = (struct System_Action_o *)v17, (System_Action_c *)v17->klass != v21) )
        {
LABEL_25:
          sub_1C6BFFC(v20);
          return;
        }
      }
      else
      {
        *p_callbackFunc = 0;
      }
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v17, v18, v19);
      return;
    }
    v25 = *p_loadAssetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v25, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_40763204(assetData, assetName, 0) )
      {
        ExUISpriteRenderer__SetAssetTexture(this, v23);
        v24 = this->fields.callbackFunc;
        if ( v24 )
          ((void (__fastcall *)(intptr_t, intptr_t))v24->fields.invoke_impl)(
            v24->fields.method_code,
            v24->fields.method);
        return;
      }
    }
  }
  *p_loadAssetName = assetName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadAssetName, (int32_t)assetName, v11, v12);
  if ( callback )
  {
    v26 = &this->fields.callbackFunc;
    v27 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0);
    v20 = v27;
    if ( v27 )
    {
      v30 = System_Action_TypeInfo;
      if ( (System_Action_c *)v27->klass != System_Action_TypeInfo )
        goto LABEL_25;
      *v26 = (struct System_Action_o *)v27;
      if ( (System_Action_c *)v27->klass != v30 )
        goto LABEL_25;
    }
    else
    {
      *v26 = 0;
    }
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v27, v28, v29);
  }
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v31, (Il2CppObject *)this, Method_ExUISpriteRenderer_EndLoad__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v31, 1, 0);
}


void ExUISpriteRenderer__OnInit(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIWidget__OnInit((UIWidget_o *)this, 0);
  ExUISpriteRenderer__InitBaseScale(this, v3);
}


void ExUISpriteRenderer__OnStart(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *spriteRenderer; // x20
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_4CB56A2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB56A2 = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0);
  spriteRenderer = (UnityEngine_Object_o *)this->fields.spriteRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(spriteRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    this->fields.spriteRenderer = (struct UnityEngine_SpriteRenderer_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.spriteRenderer, (int32_t)Component_object, v5, v6);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(defaultTexture, 0, 0) )
    ExUISpriteRenderer__SetImage(this, this->fields.defaultTexture, v9);
  ExUISpriteRenderer__InitBaseScale(this, v8);
  ExUISpriteRenderer__ReScaleUpdate(this, v10);
}


void ExUISpriteRenderer__ReScaleUpdate(ExUISpriteRenderer_o *this, const MethodInfo *method)
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
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB56AB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB56AB = 1;
  }
  if ( this->fields.isInit
    && (this->fields.oldWidth != this->fields.mWidth || this->fields.oldHeight != this->fields.mHeight) )
  {
    spriteRenderer = this->fields.spriteRenderer;
    if ( spriteRenderer )
    {
      sprite = (UnityEngine_Object_o *)UnityEngine_SpriteRenderer__get_sprite(spriteRenderer, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(sprite, 0, 0) )
        goto LABEL_15;
      ExUISpriteRenderer__InitBaseScale(this, v5);
      spriteRenderer = this->fields.spriteRenderer;
      if ( spriteRenderer )
      {
        spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_SpriteRenderer__get_sprite(spriteRenderer, 0);
        if ( spriteRenderer )
        {
          spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_Sprite__get_texture(
                                                             (UnityEngine_Sprite_o *)spriteRenderer,
                                                             0);
          if ( spriteRenderer )
          {
            mWidth = this->fields.mWidth;
            x = this->fields.baseScale.fields.x;
            v8 = spriteRenderer;
            v9 = ((__int64 (__fastcall *)(UnityEngine_SpriteRenderer_o *, void *))spriteRenderer->klass[1]._1.image)(
                   spriteRenderer,
                   spriteRenderer->klass[1]._1.gc_desc);
            y = this->fields.baseScale.fields.y;
            mHeight = this->fields.mHeight;
            v12 = v9;
            v13 = ((__int64 (__fastcall *)(UnityEngine_SpriteRenderer_o *, _QWORD))v8->klass[1]._1.byval_arg.data)(
                    v8,
                    *(_QWORD *)&v8->klass[1]._1.byval_arg.bits);
            v14 = this->fields.baseScale.fields.y;
            v15 = v13;
            spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
            if ( spriteRenderer )
            {
              v16.fields.y = (float)(y * (float)mHeight) / (float)v15;
              v16.fields.x = (float)(x * (float)mWidth) / (float)v12;
              v16.fields.z = v14;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v16, 0);
LABEL_15:
              *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
              return;
            }
          }
        }
      }
    }
    sub_1C6BC60(spriteRenderer, method);
  }
}


void ExUISpriteRenderer__Resize(ExUISpriteRenderer_o *this, System_String_o *assetName, const MethodInfo *method)
{
  ExUISpriteRenderer_c *v5; // x0
  int32_t BACK_WIDTH_21_9; // w1
  ExUISpriteRenderer_c *v7; // x0
  const MethodInfo *v8; // x1
  int32_t width; // w21
  float height; // s1
  ExUISpriteRenderer_c *v11; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s9
  float v15; // s8
  float v16; // s10
  double v17; // d8
  double v18; // d0
  double v19; // d0
  double v20; // d1
  double v21; // d1
  int32_t v22; // w1
  float v23; // s8
  float v24; // s9
  double v25; // d8
  double v26; // d0
  double v27; // d0
  double v28; // d1
  double v29; // d1
  int32_t v30; // w1
  UnityEngine_Transform_o *transform; // x0
  __int64 v32; // x1
  float x; // s8
  float z; // s9
  float BackFSOffsetY; // s0
  int32_t mHeight; // w22
  struct ExUISpriteRenderer_StaticFields *static_fields; // x8
  float v38; // s10
  int32_t BACK_HEIGHT_16_9; // w20
  int32_t BACK_HEIGHT_21_9; // w21
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB56A5 & 1) == 0 )
  {
    sub_1C6BA08(&CommonUI_TypeInfo);
    sub_1C6BA08(&ExUISpriteRenderer_TypeInfo);
    sub_1C6BA08(&FSUtility_TypeInfo);
    byte_4CB56A5 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsFullScreenBack(assetName, 0) )
  {
    v5 = ExUISpriteRenderer_TypeInfo;
    if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
      v5 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v5->static_fields->BACK_WIDTH_21_9;
LABEL_15:
    UIWidget__set_width((UIWidget_o *)this, BACK_WIDTH_21_9, 0);
    UIWidget__set_height((UIWidget_o *)this, ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9, 0);
    goto LABEL_60;
  }
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0) )
  {
    v7 = ExUISpriteRenderer_TypeInfo;
    if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
      v7 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v7->static_fields->BACK_WIDTH_16_9;
    goto LABEL_15;
  }
  width = UnityEngine_Screen__get_width(0);
  height = (float)UnityEngine_Screen__get_height(0);
  v11 = ExUISpriteRenderer_TypeInfo;
  v12 = (float)width / height;
  v13 = fminf(v12, 2.3333);
  if ( v12 < 1.7778 )
    v14 = 1.7778;
  else
    v14 = v13;
  if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
    v11 = ExUISpriteRenderer_TypeInfo;
  }
  v15 = (float)(v14 * (float)v11->static_fields->BACK_WIDTH_16_9) * 9.0;
  if ( !byte_4CB13C8 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB13C8 = 1;
  }
  v16 = v15 * 0.0625;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = v16;
  v18 = modf(v16, &iptr);
  if ( v16 >= 0.0 )
  {
    if ( v18 != 0.5 )
    {
      v19 = floor(v17 + 0.5);
      goto LABEL_35;
    }
    v19 = iptr;
    v20 = 1.0;
  }
  else
  {
    if ( v18 != -0.5 )
    {
      v19 = ceil(v17 + -0.5);
      goto LABEL_35;
    }
    v19 = iptr;
    v20 = -1.0;
  }
  v21 = v19 + v20;
  if ( ((__int64)v19 & 1) != 0 )
    v19 = v21;
LABEL_35:
  if ( v19 == INFINITY )
    v22 = 0x80000000;
  else
    v22 = (int)v19;
  UIWidget__set_width((UIWidget_o *)this, v22, 0);
  v23 = (float)(v14 * (float)ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9) * 9.0;
  if ( !byte_4CB13C8 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB13C8 = 1;
  }
  v24 = v23 * 0.0625;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v25 = v24;
  v26 = modf(v24, &iptr);
  if ( v24 >= 0.0 )
  {
    if ( v26 == 0.5 )
    {
      v27 = iptr;
      v28 = 1.0;
LABEL_47:
      v29 = v27 + v28;
      if ( ((__int64)v27 & 1) != 0 )
        v27 = v29;
      goto LABEL_52;
    }
    v27 = floor(v25 + 0.5);
  }
  else
  {
    if ( v26 == -0.5 )
    {
      v27 = iptr;
      v28 = -1.0;
      goto LABEL_47;
    }
    v27 = ceil(v25 + -0.5);
  }
LABEL_52:
  if ( v27 == INFINITY )
    v30 = 0x80000000;
  else
    v30 = (int)v27;
  UIWidget__set_height((UIWidget_o *)this, v30, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_61;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  BackFSOffsetY = FSUtility__GetBackFSOffsetY(assetName, 0);
  mHeight = this->fields.mHeight;
  static_fields = ExUISpriteRenderer_TypeInfo->static_fields;
  v38 = BackFSOffsetY;
  BACK_HEIGHT_16_9 = static_fields->BACK_HEIGHT_16_9;
  BACK_HEIGHT_21_9 = static_fields->BACK_HEIGHT_21_9;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_61:
    sub_1C6BC60(transform, v32);
  v43.fields.y = (float)(v38 * (float)(mHeight - BACK_HEIGHT_16_9)) / (float)(BACK_HEIGHT_21_9 - BACK_HEIGHT_16_9);
  v43.fields.x = x;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v43, 0);
LABEL_60:
  ExUISpriteRenderer__ReScaleUpdate(this, v8);
}


void ExUISpriteRenderer__SetAssetImage(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, 0, 0, callback, v4);
}


void ExUISpriteRenderer__SetAssetImage2(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, assetLabel, 1, callback, v5);
}


void ExUISpriteRenderer__SetAssetImageBackFS(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  const MethodInfo *v7; // x2

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, 0, 0, callback, v4);
  ExUISpriteRenderer__Resize(this, assetName, v7);
}


void ExUISpriteRenderer__SetAssetImage_41126736(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  ExUISpriteRenderer__LoadAssetTexture(this, assetName, assetLabel, 0, callback, v5);
}


void ExUISpriteRenderer__SetAssetTexture(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *spriteRenderer; // x0
  _BOOL4 isUseAlphaImage; // w8
  AssetData_o *assetData; // x20
  UnityEngine_Texture_o *v6; // x20
  UnityEngine_Shader_o *shader; // x22
  UnityEngine_Material_o *v8; // x21
  UnityEngine_Texture2D_o *v9; // x20
  int v10; // w22
  int v11; // w0
  UnityEngine_SpriteRenderer_o *v12; // x21
  float v13; // s9
  const MethodInfo *v14; // x1
  float x; // s9
  int32_t mWidth; // w22
  int v17; // w0
  float y; // s10
  int32_t mHeight; // w23
  int v20; // w21
  int v21; // w0
  float v22; // s8
  int v23; // w20
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB56AA & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&StringLiteral_16625/*"a"*/);
    sub_1C6BA08(&StringLiteral_16353/*"_SubTex"*/);
    byte_4CB56AA = 1;
  }
  if ( this->fields.isTextureAlphaImage )
  {
    spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
    if ( !spriteRenderer )
      goto LABEL_19;
    spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(spriteRenderer, 0);
    if ( !spriteRenderer )
      goto LABEL_19;
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)spriteRenderer,
      (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
      0,
      0);
  }
  isUseAlphaImage = this->fields.isUseAlphaImage;
  this->fields.isTextureAlphaImage = isUseAlphaImage;
  if ( isUseAlphaImage )
  {
    assetData = this->fields.assetData;
    spriteRenderer = (UnityEngine_Renderer_o *)System_String__Concat_63966792(
                                                 this->fields.assetLabel,
                                                 (System_String_o *)StringLiteral_16625/*"a"*/,
                                                 0);
    if ( assetData )
    {
      spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_object__51495936(
                                                   assetData,
                                                   (System_String_o *)spriteRenderer,
                                                   (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
      if ( this->fields.spriteRenderer )
      {
        v6 = (UnityEngine_Texture_o *)spriteRenderer;
        spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)this->fields.spriteRenderer,
                                                     0);
        if ( spriteRenderer )
        {
          shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteRenderer, 0);
          v8 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor(v8, shader, 0);
          if ( v8 )
          {
            UnityEngine_Material__SetTexture(v8, (System_String_o *)StringLiteral_16353/*"_SubTex"*/, v6, 0);
            spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
            if ( spriteRenderer )
            {
              UnityEngine_Renderer__set_material(spriteRenderer, v8, 0);
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C6BC60(spriteRenderer, method);
  }
LABEL_14:
  spriteRenderer = (UnityEngine_Renderer_o *)this->fields.assetData;
  if ( !spriteRenderer )
    goto LABEL_19;
  spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_object__51495936(
                                               (AssetData_o *)spriteRenderer,
                                               this->fields.assetLabel,
                                               (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !spriteRenderer )
    goto LABEL_19;
  v9 = (UnityEngine_Texture2D_o *)spriteRenderer;
  v10 = ((__int64 (__fastcall *)(UnityEngine_Renderer_o *, void *))spriteRenderer->klass[1]._1.image)(
          spriteRenderer,
          spriteRenderer->klass[1]._1.gc_desc);
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v9->klass->vtable._6_get_height.methodPtr)(
          v9,
          v9->klass->vtable._6_get_height.method);
  v12 = this->fields.spriteRenderer;
  v13 = (float)v11;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  v26.fields.m_XMin = 0.0;
  v26.fields.m_YMin = 0.0;
  v26.fields.m_Width = (float)v10;
  v26.fields.m_Height = v13;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Sprite__Create_71692688(v9, v26, pivotOffset, 1.0, 0);
  if ( !v12 )
    goto LABEL_19;
  UnityEngine_SpriteRenderer__set_sprite(v12, (UnityEngine_Sprite_o *)spriteRenderer, 0);
  ExUISpriteRenderer__InitBaseScale(this, v14);
  x = this->fields.baseScale.fields.x;
  mWidth = this->fields.mWidth;
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v9->klass->vtable._4_get_width.methodPtr)(
          v9,
          v9->klass->vtable._4_get_width.method);
  y = this->fields.baseScale.fields.y;
  mHeight = this->fields.mHeight;
  v20 = v17;
  v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v9->klass->vtable._6_get_height.methodPtr)(
          v9,
          v9->klass->vtable._6_get_height.method);
  v22 = this->fields.baseScale.fields.y;
  v23 = v21;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !spriteRenderer )
    goto LABEL_19;
  v25.fields.y = (float)(y * (float)mHeight) / (float)v23;
  v25.fields.x = (float)(x * (float)mWidth) / (float)v20;
  v25.fields.z = v22;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v25, 0);
  *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
}


void ExUISpriteRenderer__SetImage(ExUISpriteRenderer_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  AssetData_o *assetData; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *loadAssetName; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Action_o *callbackFunc; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB56A4 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB56A4 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40765532(assetData, 0);
    this->fields.assetData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v6, v7);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadAssetName, 0, v9, v10);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v12, v13);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
  ExUISpriteRenderer__SetTexture(this, tex, method);
}


void ExUISpriteRenderer__SetSceneMode(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        int32_t sceneMode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Instance; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t width; // w20
  float height; // s1
  ManagerConfig_c *v12; // x0
  float v13; // s0
  float v14; // s1
  float v15; // s8
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
  int32_t v26; // w1
  UIWidget_o *klass; // x19
  UnityEngine_GameObject_o *v28; // x0
  ManagerConfig_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x19
  int v31; // w8
  int v32; // w8

  if ( (byte_4CB56A6 & 1) == 0 )
  {
    sub_1C6BA08(&ExUISpriteRenderer_TypeInfo);
    sub_1C6BA08(&FSUtility_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4CB56A6 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (UnityEngine_Component_o *)Instance[25].klass;
  if ( !Instance )
    goto LABEL_40;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsFullScreenBack(assetName, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
    if ( sceneMode == 1 )
    {
      width = UnityEngine_Screen__get_width(0);
      height = (float)UnityEngine_Screen__get_height(0);
      v12 = ManagerConfig_TypeInfo;
      v13 = (float)width / height;
      v14 = fminf(v13, 2.3333);
      if ( v13 < 1.7778 )
        v15 = 1.7778;
      else
        v15 = v14;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v12 = ManagerConfig_TypeInfo;
      }
      v16 = (float)v12->static_fields->WIDTH_21_9 / (float)v12->static_fields->HEIGHT;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      LocalScaleX = GameObjectExtensions__GetLocalScaleX(v18, 0);
      GameObjectExtensions__SetLocalScaleX(v17, LocalScaleX * (float)(v15 / v16), 0);
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      LocalScaleY = GameObjectExtensions__GetLocalScaleY(v21, 0);
      GameObjectExtensions__SetLocalScaleY(v20, (float)(v15 / v16) * LocalScaleY, 0);
      v23 = ExUISpriteRenderer_TypeInfo;
      if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
        v23 = ExUISpriteRenderer_TypeInfo;
      }
      v24 = (float)((float)(v16 - v15)
                  / (float)(v16
                          - (float)((float)ManagerConfig_TypeInfo->static_fields->WIDTH
                                  / (float)ManagerConfig_TypeInfo->static_fields->HEIGHT)))
          * (float)(v23->static_fields->BACK_HEIGHT_16_9 - ManagerConfig_TypeInfo->static_fields->HEIGHT);
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionY(v25, v24, 0);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (UnityEngine_Component_o *)Instance[25].klass;
        if ( Instance )
        {
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)Instance[25].klass;
              if ( Instance )
              {
                if ( v24 == INFINITY )
                  v26 = 0;
                else
                  v26 = 2 * (int)v24;
                UIWidget__set_height((UIWidget_o *)Instance, v26, 0);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                if ( !FSUtility__IsTablet(0) )
                {
                  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_40;
                  klass = (UIWidget_o *)Instance[25].klass;
                  Instance = (UnityEngine_Component_o *)UnityEngine_Screen__get_width(0);
                  if ( !klass )
                    goto LABEL_40;
                  UIWidget__set_width(klass, (int32_t)Instance, 0);
                }
                Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (UnityEngine_Component_o *)Instance[25].klass;
                  if ( Instance )
                  {
                    v28 = UnityEngine_Component__get_gameObject(Instance, 0);
                    v29 = ManagerConfig_TypeInfo;
                    v30 = v28;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      v29 = ManagerConfig_TypeInfo;
                    }
                    v31 = v29->static_fields->HEIGHT;
                    if ( v31 <= 0 )
                      v32 = -v31;
                    else
                      v32 = 1 - v31;
                    GameObjectExtensions__SetLocalPositionY(v30, v24 + (float)(v32 >> 1), 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_40:
      sub_1C6BC60(Instance, v8);
    }
  }
}


void ExUISpriteRenderer__SetTexture(ExUISpriteRenderer_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  ExUISpriteRenderer_o *v4; // x19
  int v5; // w22
  int v6; // w0
  UnityEngine_SpriteRenderer_o *spriteRenderer; // x21
  float v8; // s9
  const MethodInfo *v9; // x1
  float x; // s9
  int mWidth; // w22
  int v12; // w0
  float y; // s10
  int mHeight; // w23
  int v15; // w21
  int v16; // w0
  float v17; // s8
  int v18; // w20
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4CB56A9 & 1) == 0 )
  {
    this = (ExUISpriteRenderer_o *)sub_1C6BA08(&StringLiteral_16353/*"_SubTex"*/);
    byte_4CB56A9 = 1;
  }
  if ( v4->fields.isTextureAlphaImage )
  {
    this = (ExUISpriteRenderer_o *)v4->fields.spriteRenderer;
    if ( !this
      || (this = (ExUISpriteRenderer_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0)) == 0 )
    {
LABEL_11:
      sub_1C6BC60(this, tex);
    }
    UnityEngine_Material__SetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16353/*"_SubTex"*/, 0, 0);
  }
  v4->fields.isTextureAlphaImage = 0;
  if ( !tex )
    goto LABEL_11;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, const MethodInfo *))tex->klass->vtable._4_get_width.methodPtr)(
         tex,
         tex->klass->vtable._4_get_width.method,
         method);
  v6 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
         tex,
         tex->klass->vtable._6_get_height.method);
  spriteRenderer = v4->fields.spriteRenderer;
  v8 = (float)v6;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)v4, 0);
  v21.fields.m_XMin = 0.0;
  v21.fields.m_YMin = 0.0;
  v21.fields.m_Width = (float)v5;
  v21.fields.m_Height = v8;
  this = (ExUISpriteRenderer_o *)UnityEngine_Sprite__Create_71692688(tex, v21, pivotOffset, 1.0, 0);
  if ( !spriteRenderer )
    goto LABEL_11;
  UnityEngine_SpriteRenderer__set_sprite(spriteRenderer, (UnityEngine_Sprite_o *)this, 0);
  ExUISpriteRenderer__InitBaseScale(v4, v9);
  x = v4->fields.baseScale.fields.x;
  mWidth = v4->fields.mWidth;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._4_get_width.methodPtr)(
          tex,
          tex->klass->vtable._4_get_width.method);
  y = v4->fields.baseScale.fields.y;
  mHeight = v4->fields.mHeight;
  v15 = v12;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  v17 = v4->fields.baseScale.fields.y;
  v18 = v16;
  this = (ExUISpriteRenderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_11;
  v20.fields.y = (float)(y * (float)mHeight) / (float)v18;
  v20.fields.x = (float)(x * (float)mWidth) / (float)v15;
  v20.fields.z = v17;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v20, 0);
  *(_QWORD *)&v4->fields.oldWidth = *(_QWORD *)&v4->fields.mWidth;
}


void ExUISpriteRenderer__SetTweenColor(ExUISpriteRenderer_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  UnityEngine_Renderer_o *spriteRenderer; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
  if ( !spriteRenderer
    || (UnityEngine_Renderer__set_enabled(spriteRenderer, a > 0.0, 0),
        (spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer) == 0) )
  {
    sub_1C6BC60(spriteRenderer, v8);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_SpriteRenderer__set_color((UnityEngine_SpriteRenderer_o *)spriteRenderer, v10, 0);
}