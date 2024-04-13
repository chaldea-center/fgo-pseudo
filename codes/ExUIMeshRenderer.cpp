void __fastcall ExUIMeshRenderer___ctor(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_32A2A90;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall ExUIMeshRenderer__ClearImage(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *material; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  AssetData_o *assetData; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *loadAssetName; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o *callbackFunc; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E851A & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E851A = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v9 )
  {
    if ( !material )
      sub_B5D69C(v9, v10);
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
    AssetManager__releaseAsset_30657564(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v12, v13, v14, v15, v16, v17);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v19, v20, v21, v22, v23, v24);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v26, v27, v28, v29, v30, v31);
    if ( callbackFunc )
      System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall ExUIMeshRenderer__EndLoad(ExUIMeshRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *loadAssetName; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  AssetData_o *assetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v18; // x2
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o *callbackFunc; // x20

  if ( (byte_42E851D & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    byte_42E851D = 1;
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
      if ( AssetManager__compAssetStorage_30655140(data, loadAssetName, 0LL) )
      {
        assetData = this->fields.assetData;
        this->fields.assetData = data;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.assetData,
          (System_Int32_array **)data,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    data,
                                                                    this->fields.assetLabel,
                                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
        ExUIMeshRenderer__SetTexture(this, Object_WarBoardWaitTimeSetting, v18);
        if ( assetData )
        {
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAsset_30657564(assetData, 0LL);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v19, v20, v21, v22, v23, v24);
        if ( callbackFunc )
          System_Action__Invoke(callbackFunc, 0LL);
      }
    }
  }
}


void __fastcall ExUIMeshRenderer__OnStart(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *meshRenderer; // x20
  struct UnityEngine_MeshRenderer_o *Component_WebViewObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v17; // x2

  if ( (byte_42E8517 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8517 = 1;
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
                                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.meshRenderer,
      (System_Int32_array **)Component_WebViewObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(defaultTexture, 0LL, 0LL) )
    ExUIMeshRenderer__SetImage(this, this->fields.defaultTexture, v17);
  ((void (__fastcall *)(ExUIMeshRenderer_o *, void *))this->klass->vtable._43_ReScale.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall ExUIMeshRenderer__ReScale(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x8
  int32_t height; // w20
  ManagerConfig_c *v13; // x8
  int32_t WIDTH; // w22
  float v15; // s1
  float v16; // s0
  float v17; // s1
  float v18; // s0
  double v19; // d2
  int32_t v20; // w23
  double v21; // d0
  int32_t v22; // w22
  __int64 v23; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  __int64 v26; // x21
  float v27; // s8
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  unsigned int v29; // w8
  float v30; // s4
  float v31; // s3
  float v32; // s1
  float v33; // s4
  float v34; // s0
  unsigned int klass; // w8
  float y; // w9
  float v37; // s0
  __int64 v38; // x0

  if ( (byte_42E851F & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v8, v9, v10);
    byte_42E851F = 1;
  }
  if ( this->fields.isFirst )
  {
    v11 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v11;
    UIWidget__set_width((UIWidget_o *)this, 0, 0LL);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0LL);
    v13 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v13 = ManagerConfig_TypeInfo;
    }
    WIDTH = v13->static_fields->WIDTH;
    v15 = (float)(WIDTH * height)
        / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v16 = 1.0;
    if ( v15 > 1.0 )
      v16 = v15;
  }
  else
  {
    v16 = 1.0;
  }
  v17 = v16 * (float)this->fields.baseWidth;
  v18 = v16 * (float)this->fields.baseHeight;
  v19 = v17;
  if ( v17 == INFINITY )
    v19 = -v19;
  v20 = (int)v19;
  if ( v18 == INFINITY )
    v21 = -v18;
  else
    v21 = v18;
  v22 = (int)v21;
  if ( this->fields.mWidth != v20 || this->fields.mHeight != v22 )
  {
    UIWidget__set_width((UIWidget_o *)this, v20, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v22, 0LL);
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
      v26 = sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 4LL);
      LODWORD(v27) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      if ( v26 )
      {
        v29 = *(_DWORD *)(v26 + 24);
        if ( !v29 )
          goto LABEL_35;
        v30 = v27 * (float)v20;
        v31 = pivotOffset.fields.y * (float)v22;
        v32 = 0.0 - v30;
        *(float *)(v26 + 32) = 0.0 - v30;
        *(float *)(v26 + 36) = 0.0 - v31;
        *(_DWORD *)(v26 + 40) = 0;
        if ( v29 == 1 )
          goto LABEL_35;
        v33 = (float)((float)v20 - v30) + 0.0;
        *(float *)(v26 + 44) = v33;
        *(float *)(v26 + 48) = 0.0 - v31;
        *(_DWORD *)(v26 + 52) = 0;
        if ( v29 <= 2 )
          goto LABEL_35;
        v34 = (float)((float)v22 - v31) + 0.0;
        *(float *)(v26 + 56) = v32;
        *(float *)(v26 + 60) = v34;
        *(_DWORD *)(v26 + 64) = 0;
        if ( v29 == 3 )
          goto LABEL_35;
        *(float *)(v26 + 68) = v33;
        *(float *)(v26 + 72) = v34;
        *(_DWORD *)(v26 + 76) = 0;
        if ( !mesh )
          goto LABEL_36;
        UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)v26, 0LL);
        meshFilter = (struct UnityEngine_MeshFilter_o *)sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 4LL);
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
          || (v37 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y,
              *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x,
              *((float *)&meshFilter[2].klass + 1) = v37,
              klass == 3) )
        {
LABEL_35:
          v38 = sub_B5D6C8(meshFilter);
          sub_B5D668(v38, 0LL);
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
    sub_B5D69C(meshFilter, v23);
  }
}


void __fastcall ExUIMeshRenderer__SetAssetImage(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ExUIMeshRenderer__SetAssetImage_24762016(this, assetName, 0LL, callback, v4);
}


void __fastcall ExUIMeshRenderer__SetAssetImage_24762016(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *loadAssetName; // x24
  struct System_String_o **p_loadAssetName; // x22
  System_Delegate_o *callbackFunc; // x0
  System_Delegate_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  void *v40; // x8
  AssetData_o *assetData; // x24
  __int64 v42; // x1
  AssetData_o *v43; // x0
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v45; // x2
  System_Action_o *v46; // x0
  System_String_o *v47; // x23
  struct System_Action_o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  AssetLoader_LoadEndDataHandler_o *v55; // x21

  if ( (byte_42E851C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetName, (_DWORD)assetLabel, callback);
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, v12, v13, v14);
    sub_B5D5C4(&AssetManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ExUIMeshRenderer_EndLoad__, v18, v19, v20);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22, v23);
    byte_42E851C = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_B5D560(
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
        v33 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)this->fields.callbackFunc, 0LL);
        v40 = v33;
        if ( !v33 || (System_Action_c *)v33->klass == System_Action_TypeInfo )
        {
          this->fields.callbackFunc = (struct System_Action_o *)v33;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          return;
        }
        goto LABEL_33;
      }
      return;
    }
    v47 = *p_loadAssetName;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v47, 0LL);
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
      if ( AssetManager__compAssetStorage_30655140(assetData, assetName, 0LL) )
      {
        v43 = this->fields.assetData;
        if ( !v43 )
          goto LABEL_34;
        Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    v43,
                                                                    assetLabel,
                                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
        ExUIMeshRenderer__SetTexture(this, Object_WarBoardWaitTimeSetting, v45);
        v46 = this->fields.callbackFunc;
        if ( v46 )
          System_Action__Invoke(v46, 0LL);
        return;
      }
    }
  }
  *p_loadAssetName = assetName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadAssetName,
    (System_Int32_array **)assetName,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( callback )
  {
    v48 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callback,
                                      0LL);
    v40 = v48;
    if ( v48 && v48->klass != System_Action_TypeInfo )
    {
LABEL_33:
      v43 = (AssetData_o *)sub_B5D990(v40);
LABEL_34:
      sub_B5D69C(v43, v42);
    }
    this->fields.callbackFunc = v48;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v55, (Il2CppObject *)this, Method_ExUIMeshRenderer_EndLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v55, 1, 0LL);
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
  __int64 v3; // x3
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

  if ( (byte_42E851B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)tex, (_DWORD)method, v3);
    byte_42E851B = 1;
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
    AssetManager__releaseAsset_30657564(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.assetData, 0LL, v7, v8, v9, v10, v11, v12);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.loadAssetName, 0LL, v14, v15, v16, v17, v18, v19);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
    if ( callbackFunc )
      System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall ExUIMeshRenderer__SetTexture(
        ExUIMeshRenderer_o *this,
        UnityEngine_Texture_o *tex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *material; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E851E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)tex, (_DWORD)method, v3);
    byte_42E851E = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, (const MethodInfo *)tex);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v7 )
  {
    if ( !material )
      sub_B5D69C(v7, v8);
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
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_MeshRenderer_o *meshRenderer; // x0
  __int64 v16; // x1
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_42E8518 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v10, v11, v12);
    byte_42E8518 = 1;
  }
  v17.fields.r = r;
  v17.fields.g = g;
  v17.fields.b = b;
  v17.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v17, 0LL);
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, v13);
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
    if ( UnityEngine_Material__HasProperty_41623368(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16146/*"_Color"*/,
           0LL) )
    {
      v18.fields.r = r;
      v18.fields.g = g;
      v18.fields.b = b;
      v18.fields.a = a;
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)material,
        (System_String_o *)StringLiteral_16146/*"_Color"*/,
        v18,
        0LL);
    }
  }
  meshRenderer = this->fields.meshRenderer;
  if ( !meshRenderer )
LABEL_12:
    sub_B5D69C(meshRenderer, v16);
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)meshRenderer, a > 0.0, 0LL);
}


void __fastcall ExUIMeshRenderer__SetTweenVolume(ExUIMeshRenderer_o *this, float v, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *material; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E8519 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_16291/*"_Volume"*/, v7, v8, v9);
    byte_42E8519 = 1;
  }
  this->fields.volume = v;
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v11 )
  {
    if ( !material )
      sub_B5D69C(v11, v12);
    if ( UnityEngine_Material__HasProperty_41623368(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16291/*"_Volume"*/,
           0LL) )
    {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16291/*"_Volume"*/, v, 0LL);
    }
  }
}


UnityEngine_Material_o *__fastcall ExUIMeshRenderer__get_material(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v6; // x1
  UnityEngine_Renderer_o *v7; // x0

  if ( (byte_42E8516 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8516 = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(meshRenderer, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !v7 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Renderer__get_material(v7, 0LL);
}


void __fastcall ExUIMeshRenderer__set_material(
        ExUIMeshRenderer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *meshRenderer; // x0

  meshRenderer = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !meshRenderer )
    sub_B5D69C(0LL, value);
  UnityEngine_Renderer__set_material(meshRenderer, value, 0LL);
}