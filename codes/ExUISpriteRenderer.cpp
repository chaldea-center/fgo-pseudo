void ExUISpriteRenderer___cctor(const MethodInfo *method)
{
  if ( (byte_596FB9F & 1) == 0 )
  {
    sub_2213A60(&ExUISpriteRenderer_TypeInfo);
    byte_596FB9F = 1;
  }
  *ExUISpriteRenderer_TypeInfo->static_fields = (struct ExUISpriteRenderer_StaticFields)xmmword_E9D6E0;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *loadAssetName; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Action_o *callbackFunc; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596FB96 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    byte_596FB96 = 1;
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
    sub_2213CDC(spriteRenderer, method);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)spriteRenderer,
    (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
    0,
    0);
LABEL_8:
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(assetData, 0);
    this->fields.assetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v5, v6, v7, v8, v9, v10);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v12, v13, v14, v15, v16, v17);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v19, v20, v21, v22, v23, v24);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void ExUISpriteRenderer__EndLoad(ExUISpriteRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  AssetData_o *assetData; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_596FB9B & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596FB9B = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
      if ( AssetManager__compAssetStorage_47494556(data, loadAssetName, 0) )
      {
        assetData = this->fields.assetData;
        this->fields.loadAssetName = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v6, v7, v8, v9, v10, v11);
        this->fields.assetData = data;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
          (int32_t)data,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        ExUISpriteRenderer__SetAssetTexture(this, v19);
        if ( assetData )
        {
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
          AssetManager__releaseAsset_47496972(assetData, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
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
      sub_2213CDC(0, v4);
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
  bool v6; // w6
  bool v7; // w7
  bool v12; // w24
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *loadAssetName; // x22
  __int64 v21; // x1
  System_Delegate_o *callbackFunc; // x0
  struct System_Action_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Action_o *v30; // x8
  System_Action_c *v31; // x1
  AssetData_o *assetData; // x22
  const MethodInfo *v33; // x1
  struct System_Action_o *v34; // x8
  System_String_o *v35; // x22
  struct System_Action_o *v36; // x0
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  AssetLoader_LoadEndDataHandler_o *v41; // x21
  __int64 v42; // x1

  v12 = isUseAlphaImage;
  if ( (byte_596FB9A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_ExUISpriteRenderer_EndLoad__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_596FB9A = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    assetLabel,
    (System_String_o *)isUseAlphaImage,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  loadAssetName = this->fields.loadAssetName;
  this->fields.isUseAlphaImage = v12;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( !callbackFunc )
        return;
      v23 = (struct System_Action_o *)System_Delegate__Combine(
                                        callbackFunc,
                                        (System_Delegate_o *)this->fields.callbackFunc,
                                        0);
      v30 = v23;
      if ( v23 )
      {
        v31 = System_Action_TypeInfo;
        if ( v23->klass != System_Action_TypeInfo || (this->fields.callbackFunc = v23, v23->klass != v31) )
        {
LABEL_25:
          sub_221405C(v30, v31, v24, v25);
          return;
        }
      }
      else
      {
        this->fields.callbackFunc = 0;
      }
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      return;
    }
    v35 = this->fields.loadAssetName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
    AssetManager__releaseAssetStorage(v35, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
      if ( AssetManager__compAssetStorage_47494556(assetData, assetName, 0) )
      {
        ExUISpriteRenderer__SetAssetTexture(this, v33);
        v34 = this->fields.callbackFunc;
        if ( v34 )
          ((void (__fastcall *)(intptr_t, intptr_t))v34->fields.invoke_impl)(
            v34->fields.method_code,
            v34->fields.method);
        return;
      }
    }
  }
  this->fields.loadAssetName = assetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName,
    (int32_t)assetName,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( callback )
  {
    v36 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callback,
                                      0);
    v30 = v36;
    if ( v36 )
    {
      v31 = System_Action_TypeInfo;
      if ( v36->klass != System_Action_TypeInfo )
        goto LABEL_25;
      this->fields.callbackFunc = v36;
      if ( v36->klass != v31 )
        goto LABEL_25;
    }
    else
    {
      this->fields.callbackFunc = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)v36,
      v24,
      v25,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v41, (Il2CppObject *)this, Method_ExUISpriteRenderer_EndLoad__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v42);
  AssetManager__loadAssetStorage(assetName, v41, 1, 0, 0);
}


void ExUISpriteRenderer__OnInit(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIWidget__OnInit((UIWidget_o *)this, 0);
  ExUISpriteRenderer__InitBaseScale(this, v3);
}


void ExUISpriteRenderer__OnStart(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *spriteRenderer; // x20
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( (byte_596FB95 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB95 = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0);
  spriteRenderer = (UnityEngine_Object_o *)this->fields.spriteRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Equality(spriteRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpriteRenderer___);
    this->fields.spriteRenderer = (struct UnityEngine_SpriteRenderer_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.spriteRenderer,
      (int32_t)Component_object,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(defaultTexture, 0, 0) )
    ExUISpriteRenderer__SetImage(this, this->fields.defaultTexture, v15);
  ExUISpriteRenderer__InitBaseScale(this, v14);
  ExUISpriteRenderer__ReScaleUpdate(this, v16);
}


void ExUISpriteRenderer__ReScaleUpdate(ExUISpriteRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_SpriteRenderer_o *spriteRenderer; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *sprite; // x20
  const MethodInfo *v6; // x1
  int32_t mWidth; // w22
  UnityEngine_SpriteRenderer_o *v8; // x20
  float x; // s9
  int v10; // w0
  float y; // s10
  int v12; // w21
  int32_t mHeight; // w23
  int v14; // w0
  float v15; // s8
  int v16; // w20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FB9E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB9E = 1;
  }
  if ( this->fields.isInit
    && (this->fields.oldWidth != this->fields.mWidth || this->fields.oldHeight != this->fields.mHeight) )
  {
    spriteRenderer = this->fields.spriteRenderer;
    if ( spriteRenderer )
    {
      sprite = (UnityEngine_Object_o *)UnityEngine_SpriteRenderer__get_sprite(spriteRenderer, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      if ( !UnityEngine_Object__op_Inequality(sprite, 0, 0) )
        goto LABEL_15;
      ExUISpriteRenderer__InitBaseScale(this, v6);
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
            v8 = spriteRenderer;
            x = this->fields.baseScale.fields.x;
            v10 = ((__int64 (__fastcall *)(UnityEngine_SpriteRenderer_o *, void *))spriteRenderer->klass[1]._1.image)(
                    spriteRenderer,
                    spriteRenderer->klass[1]._1.gc_desc);
            y = this->fields.baseScale.fields.y;
            v12 = v10;
            mHeight = this->fields.mHeight;
            v14 = ((__int64 (__fastcall *)(UnityEngine_SpriteRenderer_o *, _QWORD))v8->klass[1]._1.byval_arg.data)(
                    v8,
                    *(_QWORD *)&v8->klass[1]._1.byval_arg.bits);
            v15 = this->fields.baseScale.fields.y;
            v16 = v14;
            spriteRenderer = (UnityEngine_SpriteRenderer_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
            if ( spriteRenderer )
            {
              v17.fields.y = (float)(y * (float)mHeight) / (float)v16;
              v17.fields.x = (float)(x * (float)mWidth) / (float)v12;
              v17.fields.z = v15;
              UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v17, 0);
LABEL_15:
              *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
              return;
            }
          }
        }
      }
    }
    sub_2213CDC(spriteRenderer, method);
  }
}


void ExUISpriteRenderer__Resize(ExUISpriteRenderer_o *this, System_String_o *assetName, const MethodInfo *method)
{
  __int64 v5; // x1
  ExUISpriteRenderer_c *v6; // x0
  int32_t BACK_WIDTH_21_9; // w1
  __int64 v8; // x1
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
  __int64 v37; // x1
  float x; // s8
  float z; // s9
  float BackFSOffsetY; // s0
  int32_t mHeight; // w22
  float v42; // s10
  struct ExUISpriteRenderer_StaticFields *static_fields; // x8
  int32_t BACK_HEIGHT_16_9; // w20
  int32_t BACK_HEIGHT_21_9; // w21
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FB98 & 1) == 0 )
  {
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&ExUISpriteRenderer_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    byte_596FB98 = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, assetName);
  if ( FSUtility__IsFullScreenBack(assetName, 0) )
  {
    v6 = ExUISpriteRenderer_TypeInfo;
    if ( !*(&ExUISpriteRenderer_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo, v5);
      v6 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v6->static_fields->BACK_WIDTH_21_9;
LABEL_15:
    UIWidget__set_width((UIWidget_o *)this, BACK_WIDTH_21_9, 0);
    UIWidget__set_height((UIWidget_o *)this, ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9, 0);
    goto LABEL_62;
  }
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v5);
  if ( CommonUI__GetForceObi_16_9(0) )
  {
    v9 = ExUISpriteRenderer_TypeInfo;
    if ( !*(&ExUISpriteRenderer_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo, v8);
      v9 = ExUISpriteRenderer_TypeInfo;
    }
    BACK_WIDTH_21_9 = v9->static_fields->BACK_WIDTH_16_9;
    goto LABEL_15;
  }
  width = UnityEngine_Screen__get_width(0);
  height = (float)UnityEngine_Screen__get_height(0);
  v14 = ExUISpriteRenderer_TypeInfo;
  v15 = (float)width / height;
  v16 = 2.3333;
  if ( v15 <= 2.3333 )
    v16 = v15;
  if ( v15 >= 1.7778 )
    v17 = v16;
  else
    v17 = 1.7778;
  if ( !*(&ExUISpriteRenderer_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo, v12);
    v14 = ExUISpriteRenderer_TypeInfo;
  }
  v18 = (float)(v17 * (float)v14->static_fields->BACK_WIDTH_16_9) * 9.0;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v19 = v18 * 0.0625;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
  v20 = v19;
  v21 = modf(v19, &iptr);
  if ( v19 >= 0.0 )
  {
    if ( v21 != 0.5 )
    {
      v22 = floor(v20 + 0.5);
      goto LABEL_37;
    }
    v23 = 1.0;
    v22 = iptr;
  }
  else
  {
    if ( v21 != -0.5 )
    {
      v22 = ceil(v20 + -0.5);
      goto LABEL_37;
    }
    v22 = iptr;
    v23 = -1.0;
  }
  v24 = v22 + v23;
  if ( ((__int64)v22 & 1) != 0 )
    v22 = v24;
LABEL_37:
  if ( v22 == INFINITY )
    v25 = 0x80000000;
  else
    v25 = (int)v22;
  UIWidget__set_width((UIWidget_o *)this, v25, 0);
  v27 = (float)(v17 * (float)ExUISpriteRenderer_TypeInfo->static_fields->BACK_HEIGHT_16_9) * 9.0;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v28 = v27 * 0.0625;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v26);
  v29 = v28;
  v30 = modf(v28, &iptr);
  if ( v28 >= 0.0 )
  {
    if ( v30 == 0.5 )
    {
      v32 = 1.0;
      v31 = iptr;
LABEL_49:
      v33 = v31 + v32;
      if ( ((__int64)v31 & 1) != 0 )
        v31 = v33;
      goto LABEL_54;
    }
    v31 = floor(v29 + 0.5);
  }
  else
  {
    if ( v30 == -0.5 )
    {
      v31 = iptr;
      v32 = -1.0;
      goto LABEL_49;
    }
    v31 = ceil(v29 + -0.5);
  }
LABEL_54:
  if ( v31 == INFINITY )
    v34 = 0x80000000;
  else
    v34 = (int)v31;
  UIWidget__set_height((UIWidget_o *)this, v34, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_63;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v37);
  BackFSOffsetY = FSUtility__GetBackFSOffsetY(assetName, 0);
  mHeight = this->fields.mHeight;
  v42 = BackFSOffsetY;
  static_fields = ExUISpriteRenderer_TypeInfo->static_fields;
  BACK_HEIGHT_16_9 = static_fields->BACK_HEIGHT_16_9;
  BACK_HEIGHT_21_9 = static_fields->BACK_HEIGHT_21_9;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_63:
    sub_2213CDC(transform, v36);
  v48.fields.z = z;
  v48.fields.y = (float)(v42 * (float)(mHeight - BACK_HEIGHT_16_9)) / (float)(BACK_HEIGHT_21_9 - BACK_HEIGHT_16_9);
  v48.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v48, 0);
LABEL_62:
  ExUISpriteRenderer__ReScaleUpdate(this, v10);
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


void ExUISpriteRenderer__SetAssetImage_47858712(
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
  float v10; // s8
  float v11; // s9
  UnityEngine_SpriteRenderer_o *v12; // x21
  const MethodInfo *v13; // x1
  float x; // s9
  int32_t mWidth; // w22
  int v16; // w0
  float y; // s10
  int v18; // w21
  int32_t mHeight; // w23
  int v20; // w0
  float v21; // s8
  int v22; // w20
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FB9D & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&StringLiteral_17306/*"a"*/);
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    byte_596FB9D = 1;
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
      (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
      0,
      0);
  }
  isUseAlphaImage = this->fields.isUseAlphaImage;
  this->fields.isTextureAlphaImage = isUseAlphaImage;
  if ( isUseAlphaImage )
  {
    assetData = this->fields.assetData;
    spriteRenderer = (UnityEngine_Renderer_o *)System_String__Concat_75651716(
                                                 this->fields.assetLabel,
                                                 (System_String_o *)StringLiteral_17306/*"a"*/,
                                                 0);
    if ( assetData )
    {
      spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_object__58532980(
                                                   assetData,
                                                   (System_String_o *)spriteRenderer,
                                                   (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
      if ( this->fields.spriteRenderer )
      {
        v6 = (UnityEngine_Texture_o *)spriteRenderer;
        spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)this->fields.spriteRenderer,
                                                     0);
        if ( spriteRenderer )
        {
          shader = UnityEngine_Material__get_shader((UnityEngine_Material_o *)spriteRenderer, 0);
          v8 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor(v8, shader, 0);
          if ( v8 )
          {
            UnityEngine_Material__SetTexture(v8, (System_String_o *)StringLiteral_17011/*"_SubTex"*/, v6, 0);
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
    sub_2213CDC(spriteRenderer, method);
  }
LABEL_14:
  spriteRenderer = (UnityEngine_Renderer_o *)this->fields.assetData;
  if ( !spriteRenderer )
    goto LABEL_19;
  spriteRenderer = (UnityEngine_Renderer_o *)AssetData__GetObject_object__58532980(
                                               (AssetData_o *)spriteRenderer,
                                               this->fields.assetLabel,
                                               (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !spriteRenderer )
    goto LABEL_19;
  v9 = (UnityEngine_Texture2D_o *)spriteRenderer;
  v10 = (float)((int (__fastcall *)(UnityEngine_Renderer_o *, void *))spriteRenderer->klass[1]._1.image)(
                 spriteRenderer,
                 spriteRenderer->klass[1]._1.gc_desc);
  v11 = (float)((int (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v9->klass->vtable._6_get_height.methodPtr)(
                 v9,
                 v9->klass->vtable._6_get_height.method);
  v12 = this->fields.spriteRenderer;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
  v25.fields.m_XMin = 0.0;
  v25.fields.m_YMin = 0.0;
  v25.fields.m_Width = v10;
  v25.fields.m_Height = v11;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Sprite__Create_83172416(v9, v25, pivotOffset, 1.0, 0);
  if ( !v12 )
    goto LABEL_19;
  UnityEngine_SpriteRenderer__set_sprite(v12, (UnityEngine_Sprite_o *)spriteRenderer, 0);
  ExUISpriteRenderer__InitBaseScale(this, v13);
  x = this->fields.baseScale.fields.x;
  mWidth = this->fields.mWidth;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v9->klass->vtable._4_get_width.methodPtr)(
          v9,
          v9->klass->vtable._4_get_width.method);
  y = this->fields.baseScale.fields.y;
  v18 = v16;
  mHeight = this->fields.mHeight;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v9->klass->vtable._6_get_height.methodPtr)(
          v9,
          v9->klass->vtable._6_get_height.method);
  v21 = this->fields.baseScale.fields.y;
  v22 = v20;
  spriteRenderer = (UnityEngine_Renderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !spriteRenderer )
    goto LABEL_19;
  v24.fields.y = (float)(y * (float)mHeight) / (float)v22;
  v24.fields.x = (float)(x * (float)mWidth) / (float)v18;
  v24.fields.z = v21;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)spriteRenderer, v24, 0);
  *(_QWORD *)&this->fields.oldWidth = *(_QWORD *)&this->fields.mWidth;
}


void ExUISpriteRenderer__SetImage(ExUISpriteRenderer_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  AssetData_o *assetData; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *loadAssetName; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Action_o *callbackFunc; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596FB97 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596FB97 = 1;
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, tex);
    AssetManager__releaseAsset_47496972(assetData, 0);
    this->fields.assetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v6, v7, v8, v9, v10, v11);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, tex);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v13, v14, v15, v16, v17, v18);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v20, v21, v22, v23, v24, v25);
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t width; // w20
  __int64 v12; // x1
  float v13; // s0
  float v14; // s1
  ManagerConfig_c *v15; // x0
  float v16; // s8
  float v17; // s9
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  float LocalScaleX; // s0
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  float LocalScaleY; // s0
  __int64 v24; // x1
  ExUISpriteRenderer_c *v25; // x0
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x0
  int32_t v28; // w1
  __int64 v29; // x1
  UIWidget_o *klass; // x19
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  ManagerConfig_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x19
  int HEIGHT; // w8
  int v36; // w8

  if ( (byte_596FB99 & 1) == 0 )
  {
    sub_2213A60(&ExUISpriteRenderer_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_596FB99 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (UnityEngine_Component_o *)Instance[25].klass;
  if ( !Instance )
    goto LABEL_42;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
  if ( !Instance )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v9);
  if ( FSUtility__IsFullScreenBack(assetName, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
    if ( sceneMode == 1 )
    {
      width = UnityEngine_Screen__get_width(0);
      v13 = (float)width / (float)UnityEngine_Screen__get_height(0);
      v14 = 2.3333;
      v15 = ManagerConfig_TypeInfo;
      if ( v13 <= 2.3333 )
        v14 = v13;
      if ( v13 >= 1.7778 )
        v16 = v14;
      else
        v16 = 1.7778;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v12);
        v15 = ManagerConfig_TypeInfo;
      }
      v17 = (float)v15->static_fields->WIDTH_21_9 / (float)v15->static_fields->HEIGHT;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      LocalScaleX = GameObjectExtensions__GetLocalScaleX(v19, 0);
      GameObjectExtensions__SetLocalScaleX(v18, LocalScaleX * (float)(v16 / v17), 0);
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      LocalScaleY = GameObjectExtensions__GetLocalScaleY(v22, 0);
      GameObjectExtensions__SetLocalScaleY(v21, (float)(v16 / v17) * LocalScaleY, 0);
      v25 = ExUISpriteRenderer_TypeInfo;
      if ( !*(&ExUISpriteRenderer_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExUISpriteRenderer_TypeInfo, v24);
        v25 = ExUISpriteRenderer_TypeInfo;
      }
      v26 = (float)((float)(v17 - v16)
                  / (float)(v17
                          - (float)((float)ManagerConfig_TypeInfo->static_fields->WIDTH
                                  / (float)ManagerConfig_TypeInfo->static_fields->HEIGHT)))
          * (float)(v25->static_fields->BACK_HEIGHT_16_9 - ManagerConfig_TypeInfo->static_fields->HEIGHT);
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionY(v27, v26, 0);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (UnityEngine_Component_o *)Instance[25].klass;
        if ( Instance )
        {
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)Instance[25].klass;
              if ( Instance )
              {
                if ( v26 == INFINITY )
                  v28 = 0;
                else
                  v28 = 2 * (int)v26;
                UIWidget__set_height((UIWidget_o *)Instance, v28, 0);
                if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v29);
                if ( !FSUtility__IsTablet(0) )
                {
                  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_42;
                  klass = (UIWidget_o *)Instance[25].klass;
                  Instance = (UnityEngine_Component_o *)UnityEngine_Screen__get_width(0);
                  if ( !klass )
                    goto LABEL_42;
                  UIWidget__set_width(klass, (int32_t)Instance, 0);
                }
                Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (UnityEngine_Component_o *)Instance[25].klass;
                  if ( Instance )
                  {
                    v31 = UnityEngine_Component__get_gameObject(Instance, 0);
                    v33 = ManagerConfig_TypeInfo;
                    v34 = v31;
                    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v32);
                      v33 = ManagerConfig_TypeInfo;
                    }
                    HEIGHT = v33->static_fields->HEIGHT;
                    if ( HEIGHT <= 0 )
                      v36 = -HEIGHT;
                    else
                      v36 = 1 - HEIGHT;
                    GameObjectExtensions__SetLocalPositionY(v34, v26 + (float)(v36 >> 1), 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_42:
      sub_2213CDC(Instance, v8);
    }
  }
}


void ExUISpriteRenderer__SetTexture(ExUISpriteRenderer_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  ExUISpriteRenderer_o *v4; // x19
  float v5; // s8
  float v6; // s9
  UnityEngine_SpriteRenderer_o *spriteRenderer; // x21
  const MethodInfo *v8; // x1
  float x; // s9
  int mWidth; // w22
  int v11; // w0
  float y; // s10
  int v13; // w21
  int mHeight; // w23
  int v15; // w0
  float v16; // s8
  int v17; // w20
  UnityEngine_Vector2_o pivotOffset; // 0:s4.4,4:s5.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_596FB9C & 1) == 0 )
  {
    this = (ExUISpriteRenderer_o *)sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    byte_596FB9C = 1;
  }
  if ( v4->fields.isTextureAlphaImage )
  {
    this = (ExUISpriteRenderer_o *)v4->fields.spriteRenderer;
    if ( !this
      || (this = (ExUISpriteRenderer_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0)) == 0 )
    {
LABEL_11:
      sub_2213CDC(this, tex);
    }
    UnityEngine_Material__SetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_17011/*"_SubTex"*/, 0, 0);
  }
  v4->fields.isTextureAlphaImage = 0;
  if ( !tex )
    goto LABEL_11;
  v5 = (float)((int (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, const MethodInfo *))tex->klass->vtable._4_get_width.methodPtr)(
                tex,
                tex->klass->vtable._4_get_width.method,
                method);
  v6 = (float)((int (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
                tex,
                tex->klass->vtable._6_get_height.method);
  spriteRenderer = v4->fields.spriteRenderer;
  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)v4, 0);
  v20.fields.m_XMin = 0.0;
  v20.fields.m_YMin = 0.0;
  v20.fields.m_Width = v5;
  v20.fields.m_Height = v6;
  this = (ExUISpriteRenderer_o *)UnityEngine_Sprite__Create_83172416(tex, v20, pivotOffset, 1.0, 0);
  if ( !spriteRenderer )
    goto LABEL_11;
  UnityEngine_SpriteRenderer__set_sprite(spriteRenderer, (UnityEngine_Sprite_o *)this, 0);
  ExUISpriteRenderer__InitBaseScale(v4, v8);
  x = v4->fields.baseScale.fields.x;
  mWidth = v4->fields.mWidth;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._4_get_width.methodPtr)(
          tex,
          tex->klass->vtable._4_get_width.method);
  y = v4->fields.baseScale.fields.y;
  v13 = v11;
  mHeight = v4->fields.mHeight;
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  v16 = v4->fields.baseScale.fields.y;
  v17 = v15;
  this = (ExUISpriteRenderer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_11;
  v19.fields.y = (float)(y * (float)mHeight) / (float)v17;
  v19.fields.x = (float)(x * (float)mWidth) / (float)v13;
  v19.fields.z = v16;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v19, 0);
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
    sub_2213CDC(spriteRenderer, v8);
  }
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_SpriteRenderer__set_color((UnityEngine_SpriteRenderer_o *)spriteRenderer, v10, 0);
}