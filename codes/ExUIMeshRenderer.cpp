void __fastcall ExUIMeshRenderer___ctor(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_3204820;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall ExUIMeshRenderer__ClearImage(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *material; // x20
  _BOOL8 v5; // x0
  AssetData_o *assetData; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_o *loadAssetName; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *callbackFunc; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4215146 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215146 = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v5 )
  {
    if ( !material )
      sub_B0D97C(v5);
    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)material, 0LL, 0LL);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v14, v15, v16, v17, v18, v19);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
    if ( callbackFunc )
      System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall ExUIMeshRenderer__EndLoad(ExUIMeshRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *loadAssetName; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  AssetData_o *assetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v15; // x2
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o *callbackFunc; // x20

  if ( (byte_4215149 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    byte_4215149 = 1;
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
        this->fields.assetData = data;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.assetData,
          (System_Int32_array **)data,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    data,
                                                                    this->fields.assetLabel,
                                                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
        ExUIMeshRenderer__SetTexture(this, Object_WarBoardWaitTimeSetting, v15);
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
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v16, v17, v18, v19, v20, v21);
        if ( callbackFunc )
          System_Action__Invoke(callbackFunc, 0LL);
      }
    }
  }
}


void __fastcall ExUIMeshRenderer__OnStart(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *meshRenderer; // x20
  struct UnityEngine_MeshRenderer_o *Component_WebViewObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4215143 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215143 = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0LL);
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                     (UnityEngine_Component_o *)this,
                                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = Component_WebViewObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.meshRenderer,
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
    ExUIMeshRenderer__SetImage(this, this->fields.defaultTexture, v13);
  ((void (__fastcall *)(ExUIMeshRenderer_o *, void *))this->klass->vtable._43_ReScale.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall ExUIMeshRenderer__ReScale(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x8
  int32_t height; // w20
  ManagerConfig_c *v7; // x8
  int32_t WIDTH; // w22
  float v9; // s1
  float v10; // s0
  float v11; // s1
  float v12; // s0
  double v13; // d2
  int32_t v14; // w23
  double v15; // d0
  int32_t v16; // w22
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  __int64 v19; // x21
  float v20; // s8
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  unsigned int v22; // w8
  float v23; // s4
  float v24; // s3
  float v25; // s1
  float v26; // s4
  float v27; // s0
  unsigned int klass; // w8
  float y; // w9
  float v30; // s0
  __int64 v31; // x0

  if ( (byte_421514B & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Vector2___TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Vector3___TypeInfo, v4);
    byte_421514B = 1;
  }
  if ( this->fields.isFirst )
  {
    v5 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v5;
    UIWidget__set_width((UIWidget_o *)this, 0, 0LL);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0LL);
    v7 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v7 = ManagerConfig_TypeInfo;
    }
    WIDTH = v7->static_fields->WIDTH;
    v9 = (float)(WIDTH * height)
       / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v10 = 1.0;
    if ( v9 > 1.0 )
      v10 = v9;
  }
  else
  {
    v10 = 1.0;
  }
  v11 = v10 * (float)this->fields.baseWidth;
  v12 = v10 * (float)this->fields.baseHeight;
  v13 = v11;
  if ( v11 == INFINITY )
    v13 = -v13;
  v14 = (int)v13;
  if ( v12 == INFINITY )
    v15 = -v12;
  else
    v15 = v12;
  v16 = (int)v15;
  if ( this->fields.mWidth != v14 || this->fields.mHeight != v16 )
  {
    UIWidget__set_width((UIWidget_o *)this, v14, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v16, 0LL);
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
      v19 = sub_B0D8BC(UnityEngine_Vector3___TypeInfo, 4LL);
      LODWORD(v20) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      if ( v19 )
      {
        v22 = *(_DWORD *)(v19 + 24);
        if ( !v22 )
          goto LABEL_35;
        v23 = v20 * (float)v14;
        v24 = pivotOffset.fields.y * (float)v16;
        v25 = 0.0 - v23;
        *(float *)(v19 + 32) = 0.0 - v23;
        *(float *)(v19 + 36) = 0.0 - v24;
        *(_DWORD *)(v19 + 40) = 0;
        if ( v22 == 1 )
          goto LABEL_35;
        v26 = (float)((float)v14 - v23) + 0.0;
        *(float *)(v19 + 44) = v26;
        *(float *)(v19 + 48) = 0.0 - v24;
        *(_DWORD *)(v19 + 52) = 0;
        if ( v22 <= 2 )
          goto LABEL_35;
        v27 = (float)((float)v16 - v24) + 0.0;
        *(float *)(v19 + 56) = v25;
        *(float *)(v19 + 60) = v27;
        *(_DWORD *)(v19 + 64) = 0;
        if ( v22 == 3 )
          goto LABEL_35;
        *(float *)(v19 + 68) = v26;
        *(float *)(v19 + 72) = v27;
        *(_DWORD *)(v19 + 76) = 0;
        if ( !mesh )
          goto LABEL_36;
        UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)v19, 0LL);
        meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B0D8BC(UnityEngine_Vector2___TypeInfo, 4LL);
        if ( !meshFilter )
          goto LABEL_36;
        klass = (unsigned int)meshFilter[1].klass;
        if ( !klass
          || (meshFilter[1].monitor = (void *)this->fields.uvOffset, klass == 1)
          || (y = this->fields.uvOffset.fields.y,
              *(float *)&meshFilter[1].fields.m_CachedPtr = this->fields.uvOffset.fields.x
                                                          + this->fields.uvSize.fields.x,
              *((float *)&meshFilter[1].fields + 1) = y,
              klass <= 2)
          || (v30 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y,
              *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x,
              *((float *)&meshFilter[2].klass + 1) = v30,
              klass == 3) )
        {
LABEL_35:
          v31 = sub_B0D9A8(meshFilter);
          sub_B0D948(v31, 0LL);
        }
        meshFilter[2].monitor = (void *)vadd_f32((float32x2_t)this->fields.uvOffset, (float32x2_t)this->fields.uvSize).n64_u64[0];
        UnityEngine_Mesh__set_uv(mesh, (UnityEngine_Vector2_array *)meshFilter, 0LL);
        if ( this->fields.isRecalculateBounds )
          UnityEngine_Mesh__RecalculateBounds(mesh, 0LL);
        meshFilter = this->fields.meshFilter;
        if ( meshFilter )
        {
          UnityEngine_MeshFilter__set_mesh(meshFilter, mesh, 0LL);
          return;
        }
      }
    }
LABEL_36:
    sub_B0D97C(meshFilter);
  }
}


void __fastcall ExUIMeshRenderer__SetAssetImage(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ExUIMeshRenderer__SetAssetImage_25665252(this, assetName, 0LL, callback, v4);
}


void __fastcall ExUIMeshRenderer__SetAssetImage_25665252(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *loadAssetName; // x24
  struct System_String_o **p_loadAssetName; // x22
  System_Delegate_o *callbackFunc; // x0
  System_Delegate_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  void *v32; // x8
  AssetData_o *assetData; // x24
  AssetData_o *v34; // x0
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v36; // x2
  System_Action_o *v37; // x0
  System_String_o *v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Action_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  AssetLoader_LoadEndDataHandler_o *v48; // x21

  if ( (byte_4215148 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetName);
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, v12);
    sub_B0D8A4(&AssetManager_TypeInfo, v13);
    sub_B0D8A4(&Method_ExUIMeshRenderer_EndLoad__, v14);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    byte_4215148 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.assetLabel,
    (System_Int32_array **)assetLabel,
    (System_String_array **)assetLabel,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = &this->fields.loadAssetName;
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
        v25 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)this->fields.callbackFunc, 0LL);
        v32 = v25;
        if ( !v25 || (System_Action_c *)v25->klass == System_Action_TypeInfo )
        {
          this->fields.callbackFunc = (struct System_Action_o *)v25;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          return;
        }
        goto LABEL_33;
      }
      return;
    }
    v38 = *p_loadAssetName;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v38, 0LL);
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
        v34 = this->fields.assetData;
        if ( !v34 )
          goto LABEL_34;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    v34,
                                                                    assetLabel,
                                                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
        ExUIMeshRenderer__SetTexture(this, Object_WarBoardWaitTimeSetting, v36);
        v37 = this->fields.callbackFunc;
        if ( v37 )
          System_Action__Invoke(v37, 0LL);
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
    v41 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callback,
                                      0LL);
    v32 = v41;
    if ( v41 && v41->klass != System_Action_TypeInfo )
    {
LABEL_33:
      v34 = (AssetData_o *)sub_B0DC70(v32);
LABEL_34:
      sub_B0D97C(v34);
    }
    this->fields.callbackFunc = v41;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v39, v40);
  AssetLoader_LoadEndDataHandler___ctor(v48, (Il2CppObject *)this, Method_ExUIMeshRenderer_EndLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v48, 1, 0LL);
}


void __fastcall ExUIMeshRenderer__SetBaseWidth(ExUIMeshRenderer_o *this, int32_t setWidth, const MethodInfo *method)
{
  ExUIMeshRenderer_c *klass; // x8

  this->fields.baseWidth = setWidth;
  UIWidget__set_width((UIWidget_o *)this, setWidth, 0LL);
  klass = this->klass;
  this->fields.isFirst = 1;
  ((void (__fastcall *)(ExUIMeshRenderer_o *, void *))klass->vtable._43_ReScale.method)(this, klass[1]._1.image);
}


void __fastcall ExUIMeshRenderer__SetImage(
        ExUIMeshRenderer_o *this,
        UnityEngine_Texture_o *tex,
        const MethodInfo *method)
{
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

  if ( (byte_4215147 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, tex);
    byte_4215147 = 1;
  }
  ExUIMeshRenderer__SetTexture(this, tex, method);
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


void __fastcall ExUIMeshRenderer__SetTexture(
        ExUIMeshRenderer_o *this,
        UnityEngine_Texture_o *tex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x21
  _BOOL8 v6; // x0

  if ( (byte_421514A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, tex);
    byte_421514A = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, (const MethodInfo *)tex);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v6 )
  {
    if ( !material )
      sub_B0D97C(v6);
    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)material, tex, 0LL);
  }
  ((void (__fastcall *)(ExUIMeshRenderer_o *, void *))this->klass->vtable._43_ReScale.method)(
    this,
    this->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ExUIMeshRenderer__SetTweenColor(
        ExUIMeshRenderer_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_MeshRenderer_o *meshRenderer; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4215144 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v8);
    byte_4215144 = 1;
  }
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v12, 0LL);
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, v9);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  meshRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( ((unsigned __int8)meshRenderer & 1) != 0 )
  {
    if ( !material )
      goto LABEL_12;
    if ( UnityEngine_Material__HasProperty_40813076(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16002/*"_Color"*/,
           0LL) )
    {
      v13.fields.r = r;
      v13.fields.g = g;
      v13.fields.b = b;
      v13.fields.a = a;
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)material,
        (System_String_o *)StringLiteral_16002/*"_Color"*/,
        v13,
        0LL);
    }
  }
  meshRenderer = this->fields.meshRenderer;
  if ( !meshRenderer )
LABEL_12:
    sub_B0D97C(meshRenderer);
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)meshRenderer, a > 0.0, 0LL);
}


void __fastcall ExUIMeshRenderer__SetTweenVolume(ExUIMeshRenderer_o *this, float v, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x19
  _BOOL8 v7; // x0

  if ( (byte_4215145 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16147/*"_Volume"*/, v5);
    byte_4215145 = 1;
  }
  this->fields.volume = v;
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v7 )
  {
    if ( !material )
      sub_B0D97C(v7);
    if ( UnityEngine_Material__HasProperty_40813076(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16147/*"_Volume"*/,
           0LL) )
    {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16147/*"_Volume"*/, v, 0LL);
    }
  }
}


UnityEngine_Material_o *__fastcall ExUIMeshRenderer__get_material(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x20
  UnityEngine_Renderer_o *v4; // x0

  if ( (byte_4215142 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215142 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(meshRenderer, 0LL, 0LL) )
    return 0LL;
  v4 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !v4 )
    sub_B0D97C(0LL);
  return UnityEngine_Renderer__get_material(v4, 0LL);
}


void __fastcall ExUIMeshRenderer__set_material(
        ExUIMeshRenderer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *meshRenderer; // x0

  meshRenderer = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !meshRenderer )
    sub_B0D97C(0LL);
  UnityEngine_Renderer__set_material(meshRenderer, value, 0LL);
}