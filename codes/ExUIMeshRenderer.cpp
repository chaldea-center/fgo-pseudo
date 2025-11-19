void ExUIMeshRenderer___ctor(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_CEBC80;
  this->fields.isFirst = 1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void ExUIMeshRenderer__ClearImage(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  AssetData_o *assetData; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *loadAssetName; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Action_o *callbackFunc; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB569C & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB569C = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( v4 )
  {
    if ( !material )
      sub_1C6BC60(v4, v5);
    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)material, 0, 0);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40765532(assetData, 0);
    this->fields.assetData = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, 0, v7, v8);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadAssetName, 0, v10, v11);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v13, v14);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void ExUIMeshRenderer__EndLoad(ExUIMeshRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  AssetData_o *assetData; // x21
  Il2CppObject *Object_object__51495936; // x0
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4CB569F & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB569F = 1;
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
        this->fields.assetData = data;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)data, v6, v7);
        Object_object__51495936 = AssetData__GetObject_object__51495936(
                                    data,
                                    this->fields.assetLabel,
                                    (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__51495936, v10);
        if ( assetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40765532(assetData, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v11, v12);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
      }
    }
  }
}


void ExUIMeshRenderer__OnStart(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x20
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4CB5699 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5699 = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0);
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshRenderer, (int32_t)Component_object, v5, v6);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(defaultTexture, 0, 0) )
    ExUIMeshRenderer__SetImage(this, this->fields.defaultTexture, v8);
  ((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *))this->klass->vtable._43_ReScale.methodPtr)(
    this,
    this->klass->vtable._43_ReScale.method);
}


void ExUIMeshRenderer__ReScale(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // d0
  int32_t height; // w0
  ManagerConfig_c *v5; // x8
  int32_t v6; // w20
  int32_t WIDTH; // w22
  float v8; // s1
  float v9; // s0
  float v10; // s1
  float v11; // s0
  int32_t v12; // w23
  int32_t v13; // w22
  __int64 v14; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  __int64 v17; // x21
  float v18; // s8
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  unsigned int v20; // w8
  float v21; // s4
  float v22; // s3
  float v23; // s1
  float v24; // s4
  float v25; // s0
  unsigned int klass; // w8
  float y; // s2
  float v28; // s0

  if ( (byte_4CB56A1 & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector2___TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    byte_4CB56A1 = 1;
  }
  if ( this->fields.isFirst )
  {
    v3 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v3;
    UIWidget__set_width((UIWidget_o *)this, 0, 0);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0);
    v5 = ManagerConfig_TypeInfo;
    v6 = height;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v5 = ManagerConfig_TypeInfo;
    }
    WIDTH = v5->static_fields->WIDTH;
    v8 = (float)(WIDTH * v6) / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0));
    v9 = 1.0;
    if ( v8 > 1.0 )
      v9 = v8;
  }
  else
  {
    v9 = 1.0;
  }
  v10 = v9 * (float)this->fields.baseWidth;
  v11 = v9 * (float)this->fields.baseHeight;
  if ( v10 == INFINITY )
    v12 = 0x80000000;
  else
    v12 = (int)v10;
  if ( v11 == INFINITY )
    v13 = 0x80000000;
  else
    v13 = (int)v11;
  if ( v12 != this->fields.mWidth || v13 != this->fields.mHeight )
  {
    UIWidget__set_width((UIWidget_o *)this, v12, 0);
    UIWidget__set_height((UIWidget_o *)this, v13, 0);
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0);
      v17 = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
      LODWORD(v18) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
      pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
      if ( v17 )
      {
        v20 = *(_DWORD *)(v17 + 24);
        if ( !v20 )
          goto LABEL_35;
        v21 = (float)v12 * (float)-v18;
        v22 = (float)v13 * (float)-pivotOffset.fields.y;
        v23 = v21 + 0.0;
        *(float *)(v17 + 32) = v21 + 0.0;
        *(float *)(v17 + 36) = v22 + 0.0;
        *(_DWORD *)(v17 + 40) = 0;
        if ( v20 == 1 )
          goto LABEL_35;
        v24 = (float)(v21 + (float)v12) + 0.0;
        *(float *)(v17 + 44) = v24;
        *(float *)(v17 + 48) = v22 + 0.0;
        *(_DWORD *)(v17 + 52) = 0;
        if ( v20 <= 2 )
          goto LABEL_35;
        v25 = (float)(v22 + (float)v13) + 0.0;
        *(float *)(v17 + 56) = v23;
        *(float *)(v17 + 60) = v25;
        *(_DWORD *)(v17 + 64) = 0;
        if ( v20 == 3 )
          goto LABEL_35;
        *(float *)(v17 + 68) = v24;
        *(float *)(v17 + 72) = v25;
        *(_DWORD *)(v17 + 76) = 0;
        if ( !mesh )
          goto LABEL_36;
        UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)v17, 0);
        meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1C6BAB0(UnityEngine_Vector2___TypeInfo, 4);
        if ( !meshFilter )
          goto LABEL_36;
        klass = (unsigned int)meshFilter[1].klass;
        if ( !klass
          || (meshFilter[1].monitor = (void *)this->fields.uvOffset, klass == 1)
          || (y = this->fields.uvOffset.fields.y,
              *(float *)&meshFilter[1].fields.m_CachedPtr = this->fields.uvOffset.fields.x
                                                          + this->fields.uvSize.fields.x,
              *((float *)&meshFilter[1].fields.m_CachedPtr + 1) = y,
              klass <= 2)
          || (v28 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y,
              *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x,
              *((float *)&meshFilter[2].klass + 1) = v28,
              klass == 3) )
        {
LABEL_35:
          sub_1C6BC68(meshFilter);
        }
        meshFilter[2].monitor = (void *)vadd_f32((float32x2_t)this->fields.uvOffset, (float32x2_t)this->fields.uvSize).n64_u64[0];
        UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0);
        if ( this->fields.isRecalculateBounds )
          UnityEngine_Mesh__RecalculateBounds(mesh, 0);
        meshFilter = this->fields.meshFilter;
        if ( meshFilter )
        {
          UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0);
          return;
        }
      }
    }
LABEL_36:
    sub_1C6BC60(meshFilter, v14);
  }
}


void ExUIMeshRenderer__SetAssetImage(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ExUIMeshRenderer__SetAssetImage_41120592(this, assetName, 0, callback, v4);
}


void ExUIMeshRenderer__SetAssetImage_41120592(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *loadAssetName; // x24
  struct System_String_o **p_loadAssetName; // x23
  System_Delegate_o *callbackFunc; // x0
  System_Delegate_o *v14; // x1
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Delegate_o *v19; // x8
  System_Action_c *v20; // x1
  AssetData_o *assetData; // x24
  __int64 v22; // x1
  AssetData_o *v23; // x0
  Il2CppObject *Object_object__51495936; // x0
  const MethodInfo *v25; // x2
  struct System_Action_o *v26; // x8
  System_String_o *v27; // x22
  struct System_Action_o **v28; // x22
  System_Delegate_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Action_c *v32; // x1
  AssetLoader_LoadEndDataHandler_o *v33; // x21

  if ( (byte_4CB569E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_ExUIMeshRenderer_EndLoad__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CB569E = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    (int32_t)assetLabel,
    (const MethodInfo *)callback);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = &this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( !callbackFunc )
        return;
      v14 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      v16 = System_Delegate__Combine(callbackFunc, v14, 0);
      v19 = v16;
      if ( v16 )
      {
        v20 = System_Action_TypeInfo;
        if ( (System_Action_c *)v16->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (CGThumbnailListItem_c *)v16, (System_Action_c *)v16->klass != v20) )
        {
LABEL_26:
          sub_1C6BFFC(v19);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C6B9AC(p_callbackFunc, (int32_t)v16, v17, v18);
      return;
    }
    v27 = *p_loadAssetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v27, 0);
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
        v23 = this->fields.assetData;
        if ( !v23 )
          sub_1C6BC60(0, v22);
        Object_object__51495936 = AssetData__GetObject_object__51495936(
                                    v23,
                                    assetLabel,
                                    (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__51495936, v25);
        v26 = this->fields.callbackFunc;
        if ( v26 )
          ((void (__fastcall *)(intptr_t, intptr_t))v26->fields.invoke_impl)(
            v26->fields.method_code,
            v26->fields.method);
        return;
      }
    }
  }
  *p_loadAssetName = assetName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadAssetName, (int32_t)assetName, v9, v10);
  if ( callback )
  {
    v28 = &this->fields.callbackFunc;
    v29 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0);
    v19 = v29;
    if ( v29 )
    {
      v32 = System_Action_TypeInfo;
      if ( (System_Action_c *)v29->klass != System_Action_TypeInfo )
        goto LABEL_26;
      *v28 = (struct System_Action_o *)v29;
      if ( (System_Action_c *)v29->klass != v32 )
        goto LABEL_26;
    }
    else
    {
      *v28 = 0;
    }
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v29, v30, v31);
  }
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v33, (Il2CppObject *)this, Method_ExUIMeshRenderer_EndLoad__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v33, 1, 0);
}


void ExUIMeshRenderer__SetBaseWidth(ExUIMeshRenderer_o *this, int32_t setWidth, const MethodInfo *method)
{
  ExUIMeshRenderer_c *klass; // x8

  this->fields.baseWidth = setWidth;
  UIWidget__set_width((UIWidget_o *)this, setWidth, 0);
  klass = this->klass;
  this->fields.isFirst = 1;
  ((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *))klass->vtable._43_ReScale.methodPtr)(
    this,
    klass->vtable._43_ReScale.method);
}


void ExUIMeshRenderer__SetImage(ExUIMeshRenderer_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  AssetData_o *assetData; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *loadAssetName; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Action_o *callbackFunc; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB569D & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB569D = 1;
  }
  ExUIMeshRenderer__SetTexture(this, tex, method);
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
}


void ExUIMeshRenderer__SetTexture(ExUIMeshRenderer_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CB56A0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB56A0 = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, (const MethodInfo *)tex);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( v6 )
  {
    if ( !material )
      sub_1C6BC60(v6, v7);
    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)material, tex, 0);
  }
  ((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *))this->klass->vtable._43_ReScale.methodPtr)(
    this,
    this->klass->vtable._43_ReScale.method);
}


void ExUIMeshRenderer__SetTweenColor(ExUIMeshRenderer_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_MeshRenderer_o *meshRenderer; // x0
  __int64 v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4CB569A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16166/*"_Color"*/);
    byte_4CB569A = 1;
  }
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v12, 0);
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, v8);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  meshRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( ((unsigned __int8)meshRenderer & 1) != 0 )
  {
    if ( !material )
      goto LABEL_11;
    if ( UnityEngine_Material__HasProperty_71525148(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16166/*"_Color"*/,
           0) )
    {
      v13.fields.r = r;
      v13.fields.g = g;
      v13.fields.b = b;
      v13.fields.a = a;
      UnityEngine_Material__SetColor((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16166/*"_Color"*/, v13, 0);
    }
  }
  meshRenderer = this->fields.meshRenderer;
  if ( !meshRenderer )
LABEL_11:
    sub_1C6BC60(meshRenderer, v11);
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)meshRenderer, a > 0.0, 0);
}


void ExUIMeshRenderer__SetTweenVolume(ExUIMeshRenderer_o *this, float v, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CB569B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16403/*"_Volume"*/);
    byte_4CB569B = 1;
  }
  this->fields.volume = v;
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( v6 )
  {
    if ( !material )
      sub_1C6BC60(v6, v7);
    if ( UnityEngine_Material__HasProperty_71525148(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16403/*"_Volume"*/,
           0) )
    {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16403/*"_Volume"*/, v, 0);
    }
  }
}


UnityEngine_Material_o *ExUIMeshRenderer__get_material(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_4CB5698 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5698 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(meshRenderer, 0, 0) )
    return 0;
  v5 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !v5 )
    sub_1C6BC60(0, v4);
  return UnityEngine_Renderer__get_material(v5, 0);
}


void ExUIMeshRenderer__set_material(ExUIMeshRenderer_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Renderer_o *meshRenderer; // x0

  meshRenderer = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !meshRenderer )
    sub_1C6BC60(0, value);
  UnityEngine_Renderer__set_material(meshRenderer, value, 0);
}