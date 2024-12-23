void __fastcall ExUIMeshRenderer___ctor(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_BE1790;
  this->fields.isFirst = 1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall ExUIMeshRenderer__ClearImage(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *material; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  AssetData_o *assetData; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_String_o *loadAssetName; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Action_o *callbackFunc; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B66021 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B66021 = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v5 )
  {
    if ( !material )
      sub_1BE4D28(v5, v6);
    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)material, 0LL, 0LL);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38697776(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v8, v9, v10, v11, v12, v13);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadAssetName, 0LL, v15, v16, v17, v18, v19, v20);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v22, v23, v24, v25, v26, v27);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ExUIMeshRenderer__EndLoad(ExUIMeshRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *loadAssetName; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  AssetData_o *assetData; // x21
  Il2CppObject *Object_object__49525204; // x0
  const MethodInfo *v15; // x2
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4B66024 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_Texture2D____77158432, data);
    sub_1BE4ACC(&AssetManager_TypeInfo, v5);
    byte_4B66024 = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_38695452(data, loadAssetName, 0LL) )
      {
        assetData = this->fields.assetData;
        this->fields.assetData = data;
        sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetData, (int64_t)data, v7, v8, v9, v10, v11, v12);
        Object_object__49525204 = AssetData__GetObject_object__49525204(
                                    data,
                                    this->fields.assetLabel,
                                    (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__49525204, v15);
        if ( assetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_38697776(assetData, 0LL);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v16, v17, v18, v19, v20, v21);
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
      }
    }
  }
}


void __fastcall ExUIMeshRenderer__OnStart(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *meshRenderer; // x20
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4B6601E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B6601E = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0LL);
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.meshRenderer,
      (int64_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v5; // d0
  int32_t height; // w0
  ManagerConfig_c *v7; // x8
  int32_t v8; // w20
  int32_t WIDTH; // w22
  float v10; // s1
  float v11; // s0
  float v12; // s1
  float v13; // s0
  int32_t v14; // w23
  int32_t v15; // w22
  struct UnityEngine_MeshFilter_o *v16; // x1
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
  float y; // s2
  float v30; // s0

  if ( (byte_4B66026 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Vector2___TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Vector3___TypeInfo, v4);
    byte_4B66026 = 1;
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
    v8 = height;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v7 = ManagerConfig_TypeInfo;
    }
    WIDTH = v7->static_fields->WIDTH;
    v10 = (float)(WIDTH * v8)
        / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v11 = 1.0;
    if ( v10 > 1.0 )
      v11 = v10;
  }
  else
  {
    v11 = 1.0;
  }
  v12 = v11 * (float)this->fields.baseWidth;
  v13 = v11 * (float)this->fields.baseHeight;
  if ( v12 == INFINITY )
    v14 = 0x80000000;
  else
    v14 = (int)v12;
  if ( v13 == INFINITY )
    v15 = 0x80000000;
  else
    v15 = (int)v13;
  if ( v14 != this->fields.mWidth || v15 != this->fields.mHeight )
  {
    UIWidget__set_width((UIWidget_o *)this, v14, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v15, 0LL);
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
      v19 = sub_1BE4B74(UnityEngine_Vector3___TypeInfo, 4LL);
      LODWORD(v20) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      if ( v19 )
      {
        v22 = *(_DWORD *)(v19 + 24);
        if ( !v22 )
          goto LABEL_35;
        v23 = (float)v14 * (float)-v20;
        v24 = (float)v15 * (float)-pivotOffset.fields.y;
        v25 = v23 + 0.0;
        *(float *)(v19 + 32) = v23 + 0.0;
        *(float *)(v19 + 36) = v24 + 0.0;
        *(_DWORD *)(v19 + 40) = 0;
        if ( v22 == 1 )
          goto LABEL_35;
        v26 = (float)(v23 + (float)v14) + 0.0;
        *(float *)(v19 + 44) = v26;
        *(float *)(v19 + 48) = v24 + 0.0;
        *(_DWORD *)(v19 + 52) = 0;
        if ( v22 <= 2 )
          goto LABEL_35;
        v27 = (float)(v24 + (float)v15) + 0.0;
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
        meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BE4B74(UnityEngine_Vector2___TypeInfo, 4LL);
        if ( !meshFilter )
          goto LABEL_36;
        klass = (unsigned int)meshFilter[1].klass;
        v16 = meshFilter;
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
          sub_1BE4D30(meshFilter, v16);
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
    sub_1BE4D28(meshFilter, v16);
  }
}


void __fastcall ExUIMeshRenderer__SetAssetImage(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ExUIMeshRenderer__SetAssetImage_39017244(this, assetName, 0LL, callback, v4);
}


void __fastcall ExUIMeshRenderer__SetAssetImage_39017244(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_String_o *assetLabel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *loadAssetName; // x24
  struct System_String_o **p_loadAssetName; // x23
  System_Delegate_o *callbackFunc; // x0
  System_Delegate_o *v25; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x19
  System_Delegate_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Delegate_o *v34; // x8
  System_Action_c *v35; // x1
  AssetData_o *assetData; // x24
  __int64 v37; // x1
  AssetData_o *v38; // x0
  Il2CppObject *Object_object__49525204; // x0
  const MethodInfo *v40; // x2
  struct System_Action_o *v41; // x8
  System_String_o *v42; // x22
  struct System_Action_o **v43; // x22
  System_Delegate_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Action_c *v51; // x1
  AssetLoader_LoadEndDataHandler_o *v52; // x21

  if ( (byte_4B66023 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, assetName);
    sub_1BE4ACC(&Method_AssetData_GetObject_Texture2D____77158432, v12);
    sub_1BE4ACC(&AssetManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_ExUIMeshRenderer_EndLoad__, v14);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    byte_4B66023 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.assetLabel,
    (int64_t)assetLabel,
    (int64_t)assetLabel,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  loadAssetName = this->fields.loadAssetName;
  p_loadAssetName = &this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0LL) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( !callbackFunc )
        return;
      v25 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
      v27 = System_Delegate__Combine(callbackFunc, v25, 0LL);
      v34 = v27;
      if ( v27 )
      {
        v35 = System_Action_TypeInfo;
        if ( (System_Action_c *)v27->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (PartyOrganizationUtility_c *)v27, (System_Action_c *)v27->klass != v35) )
        {
LABEL_26:
          sub_1BE4FE8(v34);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0LL;
      }
      sub_1BE4A70(p_callbackFunc, (int64_t)v27, v28, v29, v30, v31, v32, v33);
      return;
    }
    v42 = *p_loadAssetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v42, 0LL);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorage_38695452(assetData, assetName, 0LL) )
      {
        v38 = this->fields.assetData;
        if ( !v38 )
          sub_1BE4D28(0LL, v37);
        Object_object__49525204 = AssetData__GetObject_object__49525204(
                                    v38,
                                    assetLabel,
                                    (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__49525204, v40);
        v41 = this->fields.callbackFunc;
        if ( v41 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v41->fields.m_target)(
            v41->fields.original_method_info,
            *(_QWORD *)&v41->fields.extra_arg);
        return;
      }
    }
  }
  *p_loadAssetName = assetName;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.loadAssetName,
    (int64_t)assetName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( callback )
  {
    v43 = &this->fields.callbackFunc;
    v44 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0LL);
    v34 = v44;
    if ( v44 )
    {
      v51 = System_Action_TypeInfo;
      if ( (System_Action_c *)v44->klass != System_Action_TypeInfo )
        goto LABEL_26;
      *v43 = (struct System_Action_o *)v44;
      if ( (System_Action_c *)v44->klass != v51 )
        goto LABEL_26;
    }
    else
    {
      *v43 = 0LL;
    }
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  }
  v52 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v52, (Il2CppObject *)this, Method_ExUIMeshRenderer_EndLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(assetName, v52, 1, 0LL);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_String_o *loadAssetName; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Action_o *callbackFunc; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B66022 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, tex);
    byte_4B66022 = 1;
  }
  ExUIMeshRenderer__SetTexture(this, tex, method);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38697776(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.loadAssetName, 0LL, v13, v14, v15, v16, v17, v18);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ExUIMeshRenderer__SetTexture(
        ExUIMeshRenderer_o *this,
        UnityEngine_Texture_o *tex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B66025 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, tex);
    byte_4B66025 = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, (const MethodInfo *)tex);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v6 )
  {
    if ( !material )
      sub_1BE4D28(v6, v7);
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
  __int64 v12; // x1
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4B6601F & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_16386/*"_Color"*/, v8);
    byte_4B6601F = 1;
  }
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v13, 0LL);
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  meshRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( ((unsigned __int8)meshRenderer & 1) != 0 )
  {
    if ( !material )
      goto LABEL_11;
    if ( UnityEngine_Material__HasProperty_70318180(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16386/*"_Color"*/,
           0LL) )
    {
      v14.fields.r = r;
      v14.fields.g = g;
      v14.fields.b = b;
      v14.fields.a = a;
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)material,
        (System_String_o *)StringLiteral_16386/*"_Color"*/,
        v14,
        0LL);
    }
  }
  meshRenderer = this->fields.meshRenderer;
  if ( !meshRenderer )
LABEL_11:
    sub_1BE4D28(meshRenderer, v12);
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)meshRenderer, a > 0.0, 0LL);
}


void __fastcall ExUIMeshRenderer__SetTweenVolume(ExUIMeshRenderer_o *this, float v, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B66020 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_16610/*"_Volume"*/, v5);
    byte_4B66020 = 1;
  }
  this->fields.volume = v;
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v7 )
  {
    if ( !material )
      sub_1BE4D28(v7, v8);
    if ( UnityEngine_Material__HasProperty_70318180(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16610/*"_Volume"*/,
           0LL) )
    {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16610/*"_Volume"*/, v, 0LL);
    }
  }
}


UnityEngine_Material_o *__fastcall ExUIMeshRenderer__get_material(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v4; // x1
  UnityEngine_Renderer_o *v5; // x0

  if ( (byte_4B6601D & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6601D = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(meshRenderer, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !v5 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Renderer__get_material(v5, 0LL);
}


void __fastcall ExUIMeshRenderer__set_material(
        ExUIMeshRenderer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *meshRenderer; // x0

  meshRenderer = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !meshRenderer )
    sub_1BE4D28(0LL, value);
  UnityEngine_Renderer__set_material(meshRenderer, value, 0LL);
}