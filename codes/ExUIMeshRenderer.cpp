void ExUIMeshRenderer___ctor(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_E9C960;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void ExUIMeshRenderer__ClearImage(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *material; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  AssetData_o *assetData; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *loadAssetName; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Action_o *callbackFunc; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_596FB8F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB8F = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( v5 )
  {
    if ( !material )
      sub_2213CDC(v5, v6);
    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)material, 0, 0);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    AssetManager__releaseAsset_47496972(assetData, 0);
    this->fields.assetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v8, v9, v10, v11, v12, v13);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v15, v16, v17, v18, v19, v20);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v22, v23, v24, v25, v26, v27);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void ExUIMeshRenderer__EndLoad(ExUIMeshRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *loadAssetName; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  AssetData_o *assetData; // x21
  Il2CppObject *Object_object__58532980; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_596FB92 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596FB92 = 1;
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
        this->fields.assetData = data;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
          (int32_t)data,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    data,
                                    this->fields.assetLabel,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__58532980, v14);
        if ( assetData )
        {
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
          AssetManager__releaseAsset_47496972(assetData, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v16, v17, v18, v19, v20, v21);
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
  __int64 v3; // x1
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v14; // x2

  if ( (byte_596FB8C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB8C = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0);
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.meshRenderer,
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
    ExUIMeshRenderer__SetImage(this, this->fields.defaultTexture, v14);
  ((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *))this->klass->vtable._43_ReScale.methodPtr)(
    this,
    this->klass->vtable._43_ReScale.method);
}


void ExUIMeshRenderer__ReScale(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // d0
  int32_t height; // w0
  __int64 v5; // x1
  ManagerConfig_c *v6; // x8
  int32_t v7; // w20
  int32_t WIDTH; // w22
  int32_t v9; // w0
  float v10; // s0
  float32x2_t v11; // d0
  unsigned __int64 v12; // d0
  __int64 v13; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  __int64 v16; // x21
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  unsigned int v18; // w8
  float32x2_t v19; // d0
  float32x2_t v20; // d2
  unsigned __int64 v21; // d1
  unsigned __int64 v22; // d0
  unsigned int klass; // w8
  float y; // s1
  float v25; // s0
  unsigned int v26; // [xsp+0h] [xbp-50h]
  int32x2_t v27; // [xsp+10h] [xbp-40h]

  if ( (byte_596FB94 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_596FB94 = 1;
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
    v6 = ManagerConfig_TypeInfo;
    v7 = height;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v5);
      v6 = ManagerConfig_TypeInfo;
    }
    WIDTH = v6->static_fields->WIDTH;
    v9 = UnityEngine_Screen__get_width(0);
    v10 = 1.0;
    if ( (float)((float)(WIDTH * v7) / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * v9)) > 1.0 )
      v10 = (float)(WIDTH * v7) / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * v9);
  }
  else
  {
    v10 = 1.0;
  }
  v11.n64_u64[0] = vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.baseWidth), v10).n64_u64[0];
  v12 = vbsl_s8(vceq_f32(v11, vdup_n_s32(0x7F800000u)), (int8x8_t)0x8000000080000000LL, vcvt_s32_f32(v11)).n64_u64[0];
  if ( v12 != *(_QWORD *)&this->fields.mWidth )
  {
    v27.n64_u64[0] = v12;
    UIWidget__set_width((UIWidget_o *)this, v12, 0);
    UIWidget__set_height((UIWidget_o *)this, v27.n64_i32[1], 0);
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0);
      v16 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
      v26 = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
      pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0);
      if ( v16 )
      {
        v18 = *(_DWORD *)(v16 + 24);
        if ( !v18 )
          goto LABEL_28;
        *(_DWORD *)(v16 + 40) = 0;
        v19.n64_u64[0] = vcvt_f32_s32(v27).n64_u64[0];
        v20.n64_u64[0] = vmul_f32(v19, vneg_f32((float32x2_t)__PAIR64__(LODWORD(pivotOffset.fields.y), v26))).n64_u64[0];
        v21 = vadd_f32(v20, 0).n64_u64[0];
        *(_QWORD *)(v16 + 32) = v21;
        if ( v18 == 1 )
          goto LABEL_28;
        v22 = vadd_f32(v20, v19).n64_u64[0];
        *(_DWORD *)(v16 + 48) = HIDWORD(v21);
        *(_DWORD *)(v16 + 52) = 0;
        *(_DWORD *)(v16 + 44) = v22;
        if ( v18 <= 2 )
          goto LABEL_28;
        *(_DWORD *)(v16 + 64) = 0;
        *(_DWORD *)(v16 + 56) = v21;
        *(_DWORD *)(v16 + 60) = HIDWORD(v22);
        if ( v18 == 3 )
          goto LABEL_28;
        *(_QWORD *)(v16 + 68) = v22;
        *(_DWORD *)(v16 + 76) = 0;
        if ( !mesh )
          goto LABEL_29;
        UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)v16, 0);
        meshFilter = (struct UnityEngine_MeshFilter_o *)sub_2213B20(UnityEngine_Vector2___TypeInfo, 4);
        if ( !meshFilter )
          goto LABEL_29;
        klass = (unsigned int)meshFilter[1].klass;
        if ( !klass
          || (meshFilter[1].monitor = (void *)this->fields.uvOffset, klass == 1)
          || (y = this->fields.uvOffset.fields.y,
              *(float *)&meshFilter[1].fields.m_CachedPtr = this->fields.uvOffset.fields.x
                                                          + this->fields.uvSize.fields.x,
              *((float *)&meshFilter[1].fields.m_CachedPtr + 1) = y,
              klass <= 2)
          || (v25 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y,
              *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x,
              *((float *)&meshFilter[2].klass + 1) = v25,
              klass == 3) )
        {
LABEL_28:
          sub_2213CE4(meshFilter);
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
LABEL_29:
    sub_2213CDC(meshFilter, v13);
  }
}


void ExUIMeshRenderer__SetAssetImage(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ExUIMeshRenderer__SetAssetImage_47852628(this, assetName, 0, callback, v4);
}


void ExUIMeshRenderer__SetAssetImage_47852628(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *loadAssetName; // x23
  __int64 v20; // x1
  System_Delegate_o *callbackFunc; // x0
  struct System_Action_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Action_o *v29; // x8
  System_Action_c *v30; // x1
  AssetData_o *assetData; // x23
  __int64 v32; // x1
  AssetData_o *v33; // x0
  Il2CppObject *Object_object__58532980; // x0
  const MethodInfo *v35; // x2
  struct System_Action_o *v36; // x8
  System_String_o *v37; // x22
  struct System_Action_o *v38; // x0
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  AssetLoader_LoadEndDataHandler_o *v43; // x21
  __int64 v44; // x1

  if ( (byte_596FB91 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_ExUIMeshRenderer_EndLoad__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_596FB91 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetLabel,
    (int32_t)assetLabel,
    assetLabel,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( !callbackFunc )
        return;
      v22 = (struct System_Action_o *)System_Delegate__Combine(
                                        callbackFunc,
                                        (System_Delegate_o *)this->fields.callbackFunc,
                                        0);
      v29 = v22;
      if ( v22 )
      {
        v30 = System_Action_TypeInfo;
        if ( v22->klass != System_Action_TypeInfo || (this->fields.callbackFunc = v22, v22->klass != v30) )
        {
LABEL_26:
          sub_221405C(v29, v30, v23, v24);
          return;
        }
      }
      else
      {
        this->fields.callbackFunc = 0;
      }
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      return;
    }
    v37 = this->fields.loadAssetName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
    AssetManager__releaseAssetStorage(v37, 0);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
      if ( AssetManager__compAssetStorage_47494556(assetData, assetName, 0) )
      {
        v33 = this->fields.assetData;
        if ( !v33 )
          sub_2213CDC(0, v32);
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    v33,
                                    assetLabel,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__58532980, v35);
        v36 = this->fields.callbackFunc;
        if ( v36 )
          ((void (__fastcall *)(intptr_t, intptr_t))v36->fields.invoke_impl)(
            v36->fields.method_code,
            v36->fields.method);
        return;
      }
    }
  }
  this->fields.loadAssetName = assetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName,
    (int32_t)assetName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( callback )
  {
    v38 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)this->fields.callbackFunc,
                                      (System_Delegate_o *)callback,
                                      0);
    v29 = v38;
    if ( v38 )
    {
      v30 = System_Action_TypeInfo;
      if ( v38->klass != System_Action_TypeInfo )
        goto LABEL_26;
      this->fields.callbackFunc = v38;
      if ( v38->klass != v30 )
        goto LABEL_26;
    }
    else
    {
      this->fields.callbackFunc = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)v38,
      v23,
      v24,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v43, (Il2CppObject *)this, Method_ExUIMeshRenderer_EndLoad__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v44);
  AssetManager__loadAssetStorage(assetName, v43, 1, 0, 0);
}


void ExUIMeshRenderer__SetBaseWidth(ExUIMeshRenderer_o *this, int32_t setWidth, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  Il2CppMethodPointer methodPtr; // x2

  this->fields.baseWidth = setWidth;
  UIWidget__set_width((UIWidget_o *)this, setWidth, 0);
  v4 = this->klass->vtable._43_ReScale.method;
  methodPtr = this->klass->vtable._43_ReScale.methodPtr;
  this->fields.isFirst = 1;
  ((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *))methodPtr)(this, v4);
}


void ExUIMeshRenderer__SetImage(ExUIMeshRenderer_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  __int64 v5; // x1
  AssetData_o *assetData; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *loadAssetName; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Action_o *callbackFunc; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596FB90 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596FB90 = 1;
  }
  ExUIMeshRenderer__SetTexture(this, tex, method);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAsset_47496972(assetData, 0);
    this->fields.assetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetData, 0, v7, v8, v9, v10, v11, v12);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAssetStorage(loadAssetName, 0);
    this->fields.loadAssetName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetName, 0, v14, v15, v16, v17, v18, v19);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void ExUIMeshRenderer__SetTexture(ExUIMeshRenderer_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_596FB93 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB93 = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, (const MethodInfo *)tex);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( v7 )
  {
    if ( !material )
      sub_2213CDC(v7, v8);
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
  __int64 v9; // x1
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_MeshRenderer_o *meshRenderer; // x0
  __int64 v12; // x1
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_596FB8D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    byte_596FB8D = 1;
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v13, 0);
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, v8);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  meshRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( ((unsigned __int8)meshRenderer & 1) != 0 )
  {
    if ( !material )
      goto LABEL_11;
    if ( UnityEngine_Material__HasProperty_83277340(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16813/*"_Color"*/,
           0) )
    {
      v14.fields.r = r;
      v14.fields.g = g;
      v14.fields.b = b;
      v14.fields.a = a;
      UnityEngine_Material__SetColor((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16813/*"_Color"*/, v14, 0);
    }
  }
  meshRenderer = this->fields.meshRenderer;
  if ( !meshRenderer )
LABEL_11:
    sub_2213CDC(meshRenderer, v12);
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)meshRenderer, a > 0.0, 0);
}


void ExUIMeshRenderer__SetTweenVolume(ExUIMeshRenderer_o *this, float v, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_596FB8E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17066/*"_Volume"*/);
    byte_596FB8E = 1;
  }
  this->fields.volume = v;
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality(material, 0, 0);
  if ( v7 )
  {
    if ( !material )
      sub_2213CDC(v7, v8);
    if ( UnityEngine_Material__HasProperty_83277340(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_17066/*"_Volume"*/,
           0) )
    {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_17066/*"_Volume"*/, v, 0);
    }
  }
}


UnityEngine_Material_o *ExUIMeshRenderer__get_material(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_596FB8B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB8B = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(meshRenderer, 0, 0) )
    return 0;
  v5 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return UnityEngine_Renderer__get_material(v5, 0);
}


void ExUIMeshRenderer__set_material(ExUIMeshRenderer_o *this, UnityEngine_Material_o *value, const MethodInfo *method)
{
  UnityEngine_Renderer_o *meshRenderer; // x0

  meshRenderer = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !meshRenderer )
    sub_2213CDC(0, value);
  UnityEngine_Renderer__set_material(meshRenderer, value, 0);
}