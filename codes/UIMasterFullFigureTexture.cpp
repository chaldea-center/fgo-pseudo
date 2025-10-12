void UIMasterFullFigureTexture___ctor(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4C39295 & 1) == 0 )
  {
    sub_1C32C20(&UIMasterFullFigureRender_TypeInfo);
    byte_4C39295 = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


// attributes: thunk
void UIMasterFullFigureTexture__Destroy(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  UIMasterFullFigureTexture__ReleaseCharacter(this, method);
}


void UIMasterFullFigureTexture__EndLoadAsset(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_40443500; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int max_length; // w8
  struct AssetData_array *v8; // x20
  __int64 v9; // x9
  AssetData_array *assetDataList; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C39293 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C39293 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_40443500 = AssetManager__getAssetStorage_40443500(loadNameList, 0);
    if ( AssetStorage_40443500 )
    {
      max_length = AssetStorage_40443500->max_length;
      v8 = AssetStorage_40443500;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v5, v6);
        this->fields.assetDataList = v8;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v8, v11, v12);
        UIMasterFullFigureTexture__SetTexture(this, v13);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40435536(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v14, v15);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1C32E84(AssetStorage_40443500);
          if ( !AssetStorage_40443500->m_Items[v9] )
            break;
          if ( (int)++v9 >= max_length )
            goto LABEL_12;
        }
      }
    }
  }
}


void UIMasterFullFigureTexture__ReleaseCharacter(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x20
  AssetData_array *assetDataList; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_array *loadNameList; // x20
  CGThumbnailListItem_o *p_loadNameList; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C39291 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39291 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v4 )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v4, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v4 )
        goto LABEL_33;
      v4 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v4, 0);
      if ( !v4 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v4, 0, 0);
    }
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v4 )
      goto LABEL_33;
    v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v4->klass[1].vtable._0_Equals.method)(
                                   v4,
                                   v4->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v4 )
        goto LABEL_33;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v4->klass[1].vtable._0_Equals.method)(
                                     v4,
                                     v4->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v7, 0);
      v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v4 )
        goto LABEL_33;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppMethodPointer))v4->klass[1].vtable._1_Finalize.method)(
        v4,
        0,
        v4->klass[1].vtable._2_GetHashCode.methodPtr);
    }
    v4 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v4 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v4->klass[1].vtable._3_ToString.method)(
        v4,
        0,
        v4->klass[2]._1.image);
      goto LABEL_24;
    }
LABEL_33:
    sub_1C32E7C(v4);
  }
LABEL_24:
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435536(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v9, v10);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40444488(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C32BC4(p_loadNameList, 0, v13, v14);
  }
}


void UIMasterFullFigureTexture__SetActive(UIMasterFullFigureTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C32E7C(bodyTexture);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFullFigureTexture__SetCharacter(
        UIMasterFullFigureTexture_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_array *AssetNameList; // x21
  const MethodInfo *v12; // x4
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_array *loadNameList; // x23
  System_Delegate_o *v16; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Delegate_o *v21; // x8
  System_Action_c *v22; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v24; // x1
  System_String_array *v25; // x23
  struct System_Action_o **v26; // x23
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Action_c *v30; // x1
  System_String_array *v31; // x20
  System_Action_o *v32; // x21

  if ( (byte_4C39292 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UIMasterFullFigureRender_TypeInfo);
    sub_1C32C20(&Method_UIMasterFullFigureTexture_EndLoadAsset__);
    byte_4C39292 = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  AssetNameList = UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, *(const MethodInfo **)&genderType);
  UIMasterFullFigureRender__SetCharacter((UIMasterFullFigureRender_o *)this, dispType, genderType, equipId, v12);
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorageList(loadNameList, AssetNameList, 0) )
    {
      if ( !callbackFunc )
        return;
      v16 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      v18 = System_Delegate__Combine(v16, (System_Delegate_o *)callbackFunc, 0);
      v21 = v18;
      if ( v18 )
      {
        v22 = System_Action_TypeInfo;
        if ( (System_Action_c *)v18->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (CGThumbnailListItem_c *)v18, (System_Action_c *)v18->klass != v22) )
        {
LABEL_27:
          sub_1C3313C(v21);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C32BC4(p_callbackFunc, (int32_t)v18, v19, v20);
      return;
    }
    v25 = this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40444488(v25, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_40433272(assetDataList, AssetNameList, 0) )
      {
        UIMasterFullFigureTexture__SetTextureStatus(this, v24);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        return;
      }
    }
  }
  if ( callbackFunc )
  {
    v26 = &this->fields.callbackFunc;
    v27 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v21 = v27;
    if ( v27 )
    {
      v30 = System_Action_TypeInfo;
      if ( (System_Action_c *)v27->klass != System_Action_TypeInfo )
        goto LABEL_27;
      *v26 = (struct System_Action_o *)v27;
      if ( (System_Action_c *)v27->klass != v30 )
        goto LABEL_27;
    }
    else
    {
      *v26 = 0;
    }
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v27, v28, v29);
  }
  this->fields.loadNameList = AssetNameList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadNameList, (int32_t)AssetNameList, v13, v14);
  v31 = this->fields.loadNameList;
  v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_UIMasterFullFigureTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40442140(v31, v32, 1, 0);
}


void UIMasterFullFigureTexture__SetDepth(UIMasterFullFigureTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C32E7C(0);
  UIWidget__set_depth(bodyTexture, d, 0);
}


void UIMasterFullFigureTexture__SetTexture(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Shader_o *v4; // x22
  UnityEngine_Material_o *v5; // x21
  UnityEngine_Texture_o *BodyAlphaTexture; // x0
  UIMasterFullFigureRender_o *v7; // x0
  struct UITexture_o *v8; // x20
  const MethodInfo *v9; // x2
  UIMasterFullFigureRender_o *v10; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4C39294 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C39294 = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v5 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v5, v4, 0);
  if ( !bodyTexture
    || (v7 = (UIMasterFullFigureRender_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
                                             bodyTexture,
                                             v5,
                                             bodyTexture->klass->vtable._25_set_material.method),
        v8 = this->fields.bodyTexture,
        BodyAlphaTexture = (UnityEngine_Texture_o *)UIMasterFullFigureRender__GetBodyTexture(
                                                      v7,
                                                      this->fields.assetDataList,
                                                      v9),
        !v8)
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
          v8,
          BodyAlphaTexture,
          v8->klass->vtable._27_set_mainTexture.method),
        (BodyAlphaTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture) == 0)
    || (v10 = (UIMasterFullFigureRender_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&BodyAlphaTexture->klass[1]._2.cctor_finished)(
                                              BodyAlphaTexture,
                                              BodyAlphaTexture->klass[1]._2.cctor_thread),
        BodyAlphaTexture = (UnityEngine_Texture_o *)UIMasterFullFigureRender__GetBodyAlphaTexture(
                                                      v10,
                                                      this->fields.assetDataList,
                                                      v11),
        !v10) )
  {
    sub_1C32E7C(BodyAlphaTexture);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)v10,
    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
    BodyAlphaTexture,
    0);
  UIMasterFullFigureTexture__SetTextureStatus(this, v12);
}


void UIMasterFullFigureTexture__SetTextureStatus(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  UITexture_o *bodyTexture; // x20
  UIWidget_o *transform; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v7; // w1
  int32_t v8; // w1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  bodyTexture = this->fields.bodyTexture;
  BodyUvRect = UIMasterFullFigureRender__GetBodyUvRect((UIMasterFullFigureRender_o *)this, method);
  if ( !bodyTexture )
    goto LABEL_18;
  UITexture__set_uvRect(bodyTexture, BodyUvRect, 0);
  BodySize = UIMasterFullFigureRender__GetBodySize((UIMasterFullFigureRender_o *)this, v5);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  v7 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
  UIWidget__set_width(transform, v7, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  v8 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
  UIWidget__set_height(transform, v8, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_18;
  v9.fields.y = this->fields.dispOffset.fields.y;
  v9.fields.x = this->fields.dispOffset.fields.x;
  v9.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v9, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
    return;
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform
    || (transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_18:
    sub_1C32E7C(transform);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
}


void UIMasterFullFigureTexture__SetTweenColor(
        UIMasterFullFigureTexture_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C32E7C(0);
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIWidget__set_color(bodyTexture, v9, 0);
}


bool UIMasterFullFigureTexture__get_IsLoad(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}