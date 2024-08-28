void __fastcall ExUISpriteRenderer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A08123 & 1) == 0 )
  {
    sub_1B686D4(&ExUISpriteRenderer_TypeInfo, v1);
    byte_4A08123 = 1;
  }
  *ExUISpriteRenderer_TypeInfo->static_fields = (struct ExUISpriteRenderer_StaticFields)xmmword_BA6AE0;
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *loadAssetName; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Action_o *callbackFunc; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0811A & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_16286/*"_SubTex"*/, v3);
    byte_4A0811A = 1;
  }
  spriteRenderer = this->fields.spriteRenderer;
  if ( !spriteRenderer )
    goto LABEL_18;
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
LABEL_18:
    sub_1B68930(spriteRenderer, method);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)spriteRenderer,
    (System_String_o *)StringLiteral_16286/*"_SubTex"*/,
    0LL,
    0LL);
LABEL_8:
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37539444(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetData, 0, v6, v7);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetName, 0, v9, v10);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v12, v13);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ExUISpriteRenderer__EndLoad(ExUISpriteRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  AssetData_o *assetData; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4A0811F & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, data);
    byte_4A0811F = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_37537120(data, loadAssetName, 0LL) )
      {
        assetData = this->fields.assetData;
        this->fields.loadAssetName = 0LL;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetName, 0, v6, v7);
        this->fields.assetData = data;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetData, (int32_t)data, v9, v10);
        ExUISpriteRenderer__SetAssetTexture(this, v11);
        if ( assetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_37539444(assetData, 0LL);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0LL;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v12, v13);
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  __int64 v4; // x1

  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      sub_1B68930(0LL, v4);
    this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  }
}


void __fastcall ExUISpriteRenderer__LoadAssetTexture(
        ExUISpriteRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        bool isUseAlphaImage,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v10; // w25
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  char v15; // w3
  System_String_o *loadAssetName; // x23
  struct System_String_o **p_loadAssetName; // x22
  System_Delegate_o *callbackFunc; // x0
  struct System_Action_o **p_callbackFunc; // x19
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  char v22; // w3
  System_Delegate_o *v23; // x8
  System_Action_c *v24; // x1
  AssetData_o *assetData; // x23
  const MethodInfo *v26; // x1
  struct System_Action_o *v27; // x8
  System_String_o *v28; // x23
  struct System_Action_o **v29; // x22
  System_Delegate_o *v30; // x0
  int32_t v31; // w2
  char v32; // w3
  System_Action_c *v33; // x1
  AssetLoader_LoadEndDataHandler_o *v34; // x21

  v10 = isUseAlphaImage;
  if ( (byte_4A0811E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, assetName);
    sub_1B686D4(&AssetManager_TypeInfo, v11);
    sub_1B686D4(&Method_ExUISpriteRenderer_EndLoad__, v12);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    byte_4A0811E = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    (int32_t)assetLabel,
    isUseAlphaImage);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = &this->fields.loadAssetName;
  this->fields.isUseAlphaImage = v10;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0LL) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( !callbackFunc )
        return;
      p_callbackFunc = &this->fields.callbackFunc;
      v20 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)this->fields.callbackFunc, 0LL);
      v23 = v20;
      if ( v20 )
      {
        v24 = System_Action_TypeInfo;
        if ( (System_Action_c *)v20->klass != System_Action_TypeInfo
          || (*p_callbackFunc = (struct System_Action_o *)v20, (System_Action_c *)v20->klass != v24) )
        {
LABEL_25:
          sub_1B68BF0(v23);
          return;
        }
      }
      else
      {
        *p_callbackFunc = 0LL;
      }
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)v20, v21, v22);
      return;
    }
    v28 = *p_loadAssetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v28, 0LL);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_37537120(assetData, assetName, 0LL) )
      {
        ExUISpriteRenderer__SetAssetTexture(this, v26);
        v27 = this->fields.callbackFunc;
        if ( v27 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v27->fields.m_target)(
            v27->fields.original_method_info,
            *(_QWORD *)&v27->fields.extra_arg);
        return;
      }
    }
  }
  *p_loadAssetName = assetName;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetName, (int32_t)assetName, v14, v15);
  if ( callback )
  {
    v29 = &this->fields.callbackFunc;
    v30 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0LL);
    v23 = v30;
    if ( v30 )
    {
      v33 = System_Action_TypeInfo;
      if ( (System_Action_c *)v30->klass != System_Action_TypeInfo )
        goto LABEL_25;
      *v29 = (struct System_Action_o *)v30;
      if ( (System_Action_c *)v30->klass != v33 )
        goto LABEL_25;
    }
    else
    {
      *v29 = 0LL;
    }
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)v30, v31, v32);
  }
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v34, (Il2CppObject *)this, Method_ExUISpriteRenderer_EndLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v34, 1, 0LL);
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
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4A08119 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A08119 = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0LL);
  spriteRenderer = (UnityEngine_Object_o *)this->fields.spriteRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(spriteRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    this->fields.spriteRenderer = (struct UnityEngine_SpriteRenderer_o *)Component_object;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.spriteRenderer, (int32_t)Component_object, v6, v7);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(defaultTexture, 0LL, 0LL) )
    ExUISpriteRenderer__SetImage(this, this->fields.defaultTexture, v10);
  ExUISpriteRenderer__InitBaseScale(this, v9);
  ExUISpriteRenderer__ReScaleUpdate(this, v11);
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
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A08122 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A08122 = 1;
  }
  if ( this->fields.isInit
    && (this->fields.oldWidth != this->fields.mWidth || this->fields.oldHeight != this->fields.mHeight) )
  {
    spriteRenderer = this->fields.spriteRenderer;
    if ( spriteRenderer )
    {
      sprite = (UnityEngine_Object_o *)UnityEngine_SpriteRenderer__get_sprite(spriteRenderer, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(sprite, 0LL, 0LL) )
        goto LABEL_15;
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
              v16.fields.y = (float)(y * (float)mHeight) / (float)v15;
              v16.fields.x = (float)(x * (float)mWidth) / (float)v12;
              v16.fields.z = v14;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v16, 0LL);
LABEL_15:
              *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
              return;
            }
          }
        }
      }
    }
    sub_1B68930(spriteRenderer, method);
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
  __int64 v12; // x1
  float height; // s1
  ExUISpriteRenderer_c *v14; // x0
  float v15; // s0
  float v16; // s1
  float v17; // s9
  float v18; // s8
  float v19; // s10
  double v20; // d8
  double v21; // d0
  double v22; // d0
  double v23; // d1
  double v24; // d1
  int32_t v25; // w1
  __int64 v26; // x1
  float v27; // s8
  float v28; // s9
  double v29; // d8
  double v30; // d0
  double v31; // d0
  double v32; // d1
  double v33; // d1
  int32_t v34; // w1
  UnityEngine_Transform_o *transform; // x0
  __int64 v36; // x1
  float x; // s8
  float z; // s9
  float BackFSOffsetY; // s0
  int32_t mHeight; // w22
  struct ExUISpriteRenderer_StaticFields *static_fields; // x8
  float v42; // s10
  int32_t BACK_HEIGHT_16_9; // w20
  int32_t BACK_HEIGHT_21_9; // w21
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0811C & 1) == 0 )
  {
    sub_1B686D4(&CommonUI_TypeInfo, assetName);
    sub_1B686D4(&ExUISpriteRenderer_TypeInfo, v5);
    sub_1B686D4(&FSUtility_TypeInfo, v6);
    byte_4A0811C = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsFullScreenBack(assetName, 0LL) )
  {
    v7 = ExUISpriteRenderer_TypeInfo;
    if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
      v7 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v7->static_fields->BACK_WIDTH_21_9;
LABEL_15:
    UIWidget__set_width((UIWidget_o *)this, BACK_WIDTH_21_9, 0LL);
    UIWidget__set_height((UIWidget_o *)this, ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9, 0LL);
    goto LABEL_60;
  }
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    v9 = ExUISpriteRenderer_TypeInfo;
    if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
      v9 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v9->static_fields->BACK_WIDTH_16_9;
    goto LABEL_15;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = (float)UnityEngine_Screen__get_height(0LL);
  v14 = ExUISpriteRenderer_TypeInfo;
  v15 = (float)width / height;
  v16 = fminf(v15, 2.3333);
  if ( v15 < 1.7778 )
    v17 = 1.7778;
  else
    v17 = v16;
  if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
    v14 = ExUISpriteRenderer_TypeInfo;
  }
  v18 = (float)(v17 * (float)v14->static_fields->BACK_WIDTH_16_9) * 9.0;
  if ( !byte_4A042F2 )
  {
    sub_1B686D4(&System_Math_TypeInfo, v12);
    byte_4A042F2 = 1;
  }
  v19 = v18 * 0.0625;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = v19;
  v21 = modf(v19, &iptr);
  if ( v19 >= 0.0 )
  {
    if ( v21 != 0.5 )
    {
      v22 = floor(v20 + 0.5);
      goto LABEL_35;
    }
    v22 = iptr;
    v23 = 1.0;
  }
  else
  {
    if ( v21 != -0.5 )
    {
      v22 = ceil(v20 + -0.5);
      goto LABEL_35;
    }
    v22 = iptr;
    v23 = -1.0;
  }
  v24 = v22 + v23;
  if ( ((__int64)v22 & 1) != 0 )
    v22 = v24;
LABEL_35:
  if ( v22 == INFINITY )
    v25 = 0x80000000;
  else
    v25 = (int)v22;
  UIWidget__set_width((UIWidget_o *)this, v25, 0LL);
  v27 = (float)(v17 * (float)ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9) * 9.0;
  if ( !byte_4A042F2 )
  {
    sub_1B686D4(&System_Math_TypeInfo, v26);
    byte_4A042F2 = 1;
  }
  v28 = v27 * 0.0625;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v29 = v28;
  v30 = modf(v28, &iptr);
  if ( v28 >= 0.0 )
  {
    if ( v30 == 0.5 )
    {
      v31 = iptr;
      v32 = 1.0;
LABEL_47:
      v33 = v31 + v32;
      if ( ((__int64)v31 & 1) != 0 )
        v31 = v33;
      goto LABEL_52;
    }
    v31 = floor(v29 + 0.5);
  }
  else
  {
    if ( v30 == -0.5 )
    {
      v31 = iptr;
      v32 = -1.0;
      goto LABEL_47;
    }
    v31 = ceil(v29 + -0.5);
  }
LABEL_52:
  if ( v31 == INFINITY )
    v34 = 0x80000000;
  else
    v34 = (int)v31;
  UIWidget__set_height((UIWidget_o *)this, v34, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_61;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  BackFSOffsetY = FSUtility__GetBackFSOffsetY(assetName, 0LL);
  mHeight = this->fields.mHeight;
  static_fields = ExUISpriteRenderer_TypeInfo->static_fields;
  v42 = BackFSOffsetY;
  BACK_HEIGHT_16_9 = static_fields->BACK_HEIGHT_16_9;
  BACK_HEIGHT_21_9 = static_fields->BACK_HEIGHT_21_9;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
LABEL_61:
    sub_1B68930(transform, v36);
  v47.fields.y = (float)(v42 * (float)(mHeight - BACK_HEIGHT_16_9)) / (float)(BACK_HEIGHT_21_9 - BACK_HEIGHT_16_9);
  v47.fields.x = x;
  v47.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v47, 0LL);
LABEL_60:
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


void __fastcall ExUISpriteRenderer__SetAssetImage_37867532(
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
  UnityEngine_Material_o *v11; // x21
  UnityEngine_Texture2D_o *v12; // x20
  int v13; // w22
  int v14; // w0
  UnityEngine_SpriteRenderer_o *v15; // x21
  float v16; // s9
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
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A08121 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_Texture2D____75755216, method);
    sub_1B686D4(&UnityEngine_Material_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_16553/*"a"*/, v4);
    sub_1B686D4(&StringLiteral_16286/*"_SubTex"*/, v5);
    byte_4A08121 = 1;
  }
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
      (System_String_o *)StringLiteral_16286/*"_SubTex"*/,
      0LL,
      0LL);
  }
  isUseAlphaImage = this->fields.isUseAlphaImage;
  this->fields.isTextureAlphaImage = isUseAlphaImage;
  if ( isUseAlphaImage )
  {
    assetData = this->fields.assetData;
    spriteRenderer = (UnityEngine_Renderer_o *)System_String__Concat_61419468(
                                                 this->fields.assetLabel,
                                                 (System_String_o *)StringLiteral_16553/*"a"*/,
                                                 0LL);
    if ( assetData )
    {
      spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_object__48415484(
                                                   assetData,
                                                   (System_String_o *)spriteRenderer,
                                                   (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_Texture2D____75755216);
      if ( this->fields.spriteRenderer )
      {
        v9 = (UnityEngine_Texture_o *)spriteRenderer;
        spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)this->fields.spriteRenderer,
                                                     0LL);
        if ( spriteRenderer )
        {
          shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteRenderer, 0LL);
          v11 = (UnityEngine_Material_o *)sub_1B68920(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor(v11, shader, 0LL);
          if ( v11 )
          {
            UnityEngine_Material__SetTexture(v11, (System_String_o *)StringLiteral_16286/*"_SubTex"*/, v9, 0LL);
            spriteRenderer = (UnityEngine_Renderer_o *)this->fields.spriteRenderer;
            if ( spriteRenderer )
            {
              UnityEngine_Renderer__set_material(spriteRenderer, v11, 0LL);
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B68930(spriteRenderer, method);
  }
LABEL_14:
  spriteRenderer = (UnityEngine_Renderer_o *)this->fields.assetData;
  if ( !spriteRenderer )
    goto LABEL_19;
  spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_object__48415484(
                                               (AssetData_o *)spriteRenderer,
                                               this->fields.assetLabel,
                                               (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_Texture2D____75755216);
  if ( !spriteRenderer )
    goto LABEL_19;
  v12 = (UnityEngine_Texture2D_o *)spriteRenderer;
  v13 = ((__int64 (__fastcall *)(UnityEngine_Renderer_o *, const char *))spriteRenderer->klass[1]._1.gc_desc)(
          spriteRenderer,
          spriteRenderer->klass[1]._1.name);
  v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v12->klass->vtable._6_get_height.method)(
          v12,
          v12->klass->vtable._7_set_height.methodPtr);
  v15 = this->fields.spriteRenderer;
  v16 = (float)v14;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
  v29.fields.m_XMin = 0.0;
  v29.fields.m_YMin = 0.0;
  v29.fields.m_Width = (float)v13;
  v29.fields.m_Height = v16;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Sprite__Create_69202500(v12, v29, pivotOffset, 1.0, 0LL);
  if ( !v15 )
    goto LABEL_19;
  UnityEngine_SpriteRenderer__set_sprite(v15, (UnityEngine_Sprite_o *)spriteRenderer, 0LL);
  ExUISpriteRenderer__InitBaseScale(this, v17);
  x = this->fields.baseScale.fields.x;
  mWidth = this->fields.mWidth;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v12->klass->vtable._4_get_width.method)(
          v12,
          v12->klass->vtable._5_set_width.methodPtr);
  y = this->fields.baseScale.fields.y;
  mHeight = this->fields.mHeight;
  v23 = v20;
  v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))v12->klass->vtable._6_get_height.method)(
          v12,
          v12->klass->vtable._7_set_height.methodPtr);
  v25 = this->fields.baseScale.fields.y;
  v26 = v24;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !spriteRenderer )
    goto LABEL_19;
  v28.fields.y = (float)(y * (float)mHeight) / (float)v26;
  v28.fields.x = (float)(x * (float)mWidth) / (float)v23;
  v28.fields.z = v25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v28, 0LL);
  *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
}


void __fastcall ExUISpriteRenderer__SetImage(
        ExUISpriteRenderer_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  AssetData_o *assetData; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *loadAssetName; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Action_o *callbackFunc; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0811B & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, tex);
    byte_4A0811B = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37539444(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetData, 0, v6, v7);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetName, 0, v9, v10);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v12, v13);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  void *Instance; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t width; // w20
  float height; // s1
  ManagerConfig_c *v15; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s8
  float v19; // s9
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  float LocalScaleX; // s0
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x0
  float LocalScaleY; // s0
  ExUISpriteRenderer_c *v26; // x0
  float v27; // s8
  UnityEngine_GameObject_o *v28; // x0
  int32_t v29; // w1
  UIWidget_o *v30; // x19
  UnityEngine_GameObject_o *v31; // x0
  ManagerConfig_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x19
  int v34; // w8
  int v35; // w8

  if ( (byte_4A0811D & 1) == 0 )
  {
    sub_1B686D4(&ExUISpriteRenderer_TypeInfo, assetName);
    sub_1B686D4(&FSUtility_TypeInfo, v7);
    sub_1B686D4(&ManagerConfig_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v9);
    byte_4A0811D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (void *)*((_QWORD *)Instance + 74);
  if ( !Instance )
    goto LABEL_40;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsFullScreenBack(assetName, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
    if ( sceneMode == 1 )
    {
      width = UnityEngine_Screen__get_width(0LL);
      height = (float)UnityEngine_Screen__get_height(0LL);
      v15 = ManagerConfig_TypeInfo;
      v16 = (float)width / height;
      v17 = fminf(v16, 2.3333);
      if ( v16 < 1.7778 )
        v18 = 1.7778;
      else
        v18 = v17;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v15 = ManagerConfig_TypeInfo;
      }
      v19 = (float)v15->static_fields->WIDTH_21_9 / (float)v15->static_fields->HEIGHT;
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalScaleX = GameObjectExtensions__GetLocalScaleX(v21, 0LL);
      GameObjectExtensions__SetLocalScaleX(v20, LocalScaleX * (float)(v18 / v19), 0LL);
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalScaleY = GameObjectExtensions__GetLocalScaleY(v24, 0LL);
      GameObjectExtensions__SetLocalScaleY(v23, (float)(v18 / v19) * LocalScaleY, 0LL);
      v26 = ExUISpriteRenderer_TypeInfo;
      if ( !ExUISpriteRenderer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo);
        v26 = ExUISpriteRenderer_TypeInfo;
      }
      v27 = (float)((float)(v19 - v18)
                  / (float)(v19
                          - (float)((float)ManagerConfig_TypeInfo->static_fields->WIDTH
                                  / (float)ManagerConfig_TypeInfo->static_fields->HEIGHT)))
          * (float)(v26->static_fields->BACK_HEIGHT_16_9 - ManagerConfig_TypeInfo->static_fields->HEIGHT);
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v28, v27, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (void *)*((_QWORD *)Instance + 74);
        if ( Instance )
        {
          Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( Instance )
            {
              Instance = (void *)*((_QWORD *)Instance + 74);
              if ( Instance )
              {
                if ( v27 == INFINITY )
                  v29 = 0;
                else
                  v29 = 2 * (int)v27;
                UIWidget__set_height((UIWidget_o *)Instance, v29, 0LL);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                if ( !FSUtility__IsTablet(0LL) )
                {
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_40;
                  v30 = (UIWidget_o *)*((_QWORD *)Instance + 74);
                  Instance = (void *)UnityEngine_Screen__get_width(0LL);
                  if ( !v30 )
                    goto LABEL_40;
                  UIWidget__set_width(v30, (int32_t)Instance, 0LL);
                }
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (void *)*((_QWORD *)Instance + 74);
                  if ( Instance )
                  {
                    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                    v32 = ManagerConfig_TypeInfo;
                    v33 = v31;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      v32 = ManagerConfig_TypeInfo;
                    }
                    v34 = v32->static_fields->HEIGHT;
                    if ( v34 <= 0 )
                      v35 = -v34;
                    else
                      v35 = 1 - v34;
                    GameObjectExtensions__SetLocalPositionY(v33, v27 + (float)(v35 >> 1), 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_40:
      sub_1B68930(Instance, v11);
    }
  }
}


void __fastcall ExUISpriteRenderer__SetTexture(
        ExUISpriteRenderer_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
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
  if ( (byte_4A08120 & 1) == 0 )
  {
    this = (ExUISpriteRenderer_o *)sub_1B686D4(&StringLiteral_16286/*"_SubTex"*/, tex);
    byte_4A08120 = 1;
  }
  if ( v4->fields.isTextureAlphaImage )
  {
    this = (ExUISpriteRenderer_o *)v4->fields.spriteRenderer;
    if ( !this
      || (this = (ExUISpriteRenderer_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL)) == 0LL )
    {
LABEL_11:
      sub_1B68930(this, tex);
    }
    UnityEngine_Material__SetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16286/*"_SubTex"*/, 0LL, 0LL);
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
  spriteRenderer = v4->fields.spriteRenderer;
  v8 = (float)v6;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)v4, 0LL);
  v21.fields.m_XMin = 0.0;
  v21.fields.m_YMin = 0.0;
  v21.fields.m_Width = (float)v5;
  v21.fields.m_Height = v8;
  this = (ExUISpriteRenderer_o *)UnityEngine_Sprite__Create_69202500(tex, v21, pivotOffset, 1.0, 0LL);
  if ( !spriteRenderer )
    goto LABEL_11;
  UnityEngine_SpriteRenderer__set_sprite(spriteRenderer, (UnityEngine_Sprite_o *)this, 0LL);
  ExUISpriteRenderer__InitBaseScale(v4, v9);
  x = v4->fields.baseScale.fields.x;
  mWidth = v4->fields.mWidth;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  y = v4->fields.baseScale.fields.y;
  mHeight = v4->fields.mHeight;
  v15 = v12;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v17 = v4->fields.baseScale.fields.y;
  v18 = v16;
  this = (ExUISpriteRenderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_11;
  v20.fields.y = (float)(y * (float)mHeight) / (float)v18;
  v20.fields.x = (float)(x * (float)mWidth) / (float)v15;
  v20.fields.z = v17;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v20, 0LL);
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
  __int64 v8; // x1
  UnityEngine_Renderer_o *spriteRenderer; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
    sub_1B68930(spriteRenderer, v8);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_SpriteRenderer__set_color((UnityEngine_SpriteRenderer_o *)spriteRenderer, v10, 0LL);
}