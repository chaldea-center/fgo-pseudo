void __fastcall ExUIMeshRenderer___ctor(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.uvSize.fields.x = xmmword_BD2210;
  this->fields.isFirst = 1;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall ExUIMeshRenderer__ClearImage(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Object_o *material; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  AssetData_o *assetData; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *loadAssetName; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Action_o *callbackFunc; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B1566E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1566E = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v8 )
  {
    if ( !material )
      sub_1BCAA3C(v8, v9);
    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)material, 0LL, 0LL);
  }
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
    AssetManager__releaseAsset_38505704(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v11, v12, v13, v14, v15, v16);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadAssetName, 0LL, v18, v19, v20, v21, v22, v23);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ExUIMeshRenderer__EndLoad(ExUIMeshRenderer_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *loadAssetName; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  AssetData_o *assetData; // x21
  Il2CppObject *Object_object__49237568; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4B15671 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, data, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    byte_4B15671 = 1;
  }
  if ( data )
  {
    loadAssetName = this->fields.loadAssetName;
    if ( loadAssetName )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
      if ( AssetManager__compAssetStorage_38503380(data, loadAssetName, 0LL) )
      {
        assetData = this->fields.assetData;
        this->fields.assetData = data;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetData, (int64_t)data, v8, v9, v10, v11, v12, v13);
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    data,
                                    this->fields.assetLabel,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__49237568, v16);
        if ( assetData )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
          AssetManager__releaseAsset_38505704(assetData, 0LL);
        }
        callbackFunc = this->fields.callbackFunc;
        this->fields.callbackFunc = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v18, v19, v20, v21, v22, v23);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Object_o *defaultTexture; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4B1566B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1566B = 1;
  }
  UIWidget__OnStart((UIWidget_o *)this, 0LL);
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Equality(meshRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    this->fields.meshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.meshRenderer,
      (int64_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  defaultTexture = (UnityEngine_Object_o *)this->fields.defaultTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(defaultTexture, 0LL, 0LL) )
    ExUIMeshRenderer__SetImage(this, this->fields.defaultTexture, v17);
  ((void (__fastcall *)(ExUIMeshRenderer_o *, void *))this->klass->vtable._43_ReScale.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall ExUIMeshRenderer__ReScale(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // d0
  int32_t height; // w0
  __int64 v10; // x1
  ManagerConfig_c *v11; // x8
  int32_t v12; // w20
  int32_t WIDTH; // w22
  float v14; // s1
  float v15; // s0
  float v16; // s1
  float v17; // s0
  int32_t v18; // w23
  int32_t v19; // w22
  struct UnityEngine_MeshFilter_o *v20; // x1
  struct UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Mesh_o *mesh; // x20
  __int64 v23; // x21
  float v24; // s8
  UnityEngine_Vector2_o pivotOffset; // kr00_8
  unsigned int v26; // w8
  float v27; // s4
  float v28; // s3
  float v29; // s1
  float v30; // s4
  float v31; // s0
  unsigned int klass; // w8
  float y; // s2
  float v34; // s0

  if ( (byte_4B15673 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Vector2___TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, v6, v7);
    byte_4B15673 = 1;
  }
  if ( this->fields.isFirst )
  {
    v8 = *(_QWORD *)&this->fields.mWidth;
    this->fields.isFirst = 0;
    *(_QWORD *)&this->fields.baseWidth = v8;
    UIWidget__set_width((UIWidget_o *)this, 0, 0LL);
  }
  if ( this->fields.isRescale )
  {
    height = UnityEngine_Screen__get_height(0LL);
    v11 = ManagerConfig_TypeInfo;
    v12 = height;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v10);
      v11 = ManagerConfig_TypeInfo;
    }
    WIDTH = v11->static_fields->WIDTH;
    v14 = (float)(WIDTH * v12)
        / (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT * UnityEngine_Screen__get_width(0LL));
    v15 = 1.0;
    if ( v14 > 1.0 )
      v15 = v14;
  }
  else
  {
    v15 = 1.0;
  }
  v16 = v15 * (float)this->fields.baseWidth;
  v17 = v15 * (float)this->fields.baseHeight;
  if ( v16 == INFINITY )
    v18 = 0x80000000;
  else
    v18 = (int)v16;
  if ( v17 == INFINITY )
    v19 = 0x80000000;
  else
    v19 = (int)v17;
  if ( v18 != this->fields.mWidth || v19 != this->fields.mHeight )
  {
    UIWidget__set_width((UIWidget_o *)this, v18, 0LL);
    UIWidget__set_height((UIWidget_o *)this, v19, 0LL);
    meshFilter = this->fields.meshFilter;
    if ( meshFilter )
    {
      mesh = UnityEngine_MeshFilter__get_mesh(meshFilter, 0LL);
      v23 = sub_1BCA888(UnityEngine_Vector3___TypeInfo, 4LL);
      LODWORD(v24) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)this, 0LL);
      if ( v23 )
      {
        v26 = *(_DWORD *)(v23 + 24);
        if ( !v26 )
          goto LABEL_35;
        v27 = (float)v18 * (float)-v24;
        v28 = (float)v19 * (float)-pivotOffset.fields.y;
        v29 = v27 + 0.0;
        *(float *)(v23 + 32) = v27 + 0.0;
        *(float *)(v23 + 36) = v28 + 0.0;
        *(_DWORD *)(v23 + 40) = 0;
        if ( v26 == 1 )
          goto LABEL_35;
        v30 = (float)(v27 + (float)v18) + 0.0;
        *(float *)(v23 + 44) = v30;
        *(float *)(v23 + 48) = v28 + 0.0;
        *(_DWORD *)(v23 + 52) = 0;
        if ( v26 <= 2 )
          goto LABEL_35;
        v31 = (float)(v28 + (float)v19) + 0.0;
        *(float *)(v23 + 56) = v29;
        *(float *)(v23 + 60) = v31;
        *(_DWORD *)(v23 + 64) = 0;
        if ( v26 == 3 )
          goto LABEL_35;
        *(float *)(v23 + 68) = v30;
        *(float *)(v23 + 72) = v31;
        *(_DWORD *)(v23 + 76) = 0;
        if ( !mesh )
          goto LABEL_36;
        UnityEngine_Mesh__set_vertices(mesh, (UnityEngine_Vector3_array *)v23, 0LL);
        meshFilter = (struct UnityEngine_MeshFilter_o *)sub_1BCA888(UnityEngine_Vector2___TypeInfo, 4LL);
        if ( !meshFilter )
          goto LABEL_36;
        klass = (unsigned int)meshFilter[1].klass;
        v20 = meshFilter;
        if ( !klass
          || (meshFilter[1].monitor = (void *)this->fields.uvOffset, klass == 1)
          || (y = this->fields.uvOffset.fields.y,
              *(float *)&meshFilter[1].fields.m_CachedPtr = this->fields.uvOffset.fields.x
                                                          + this->fields.uvSize.fields.x,
              *((float *)&meshFilter[1].fields + 1) = y,
              klass <= 2)
          || (v34 = this->fields.uvOffset.fields.y + this->fields.uvSize.fields.y,
              *(float *)&meshFilter[2].klass = this->fields.uvOffset.fields.x,
              *((float *)&meshFilter[2].klass + 1) = v34,
              klass == 3) )
        {
LABEL_35:
          sub_1BCAA44(meshFilter, v20);
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
    sub_1BCAA3C(meshFilter, v20);
  }
}


void __fastcall ExUIMeshRenderer__SetAssetImage(
        ExUIMeshRenderer_o *this,
        System_String_o *assetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ExUIMeshRenderer__SetAssetImage_38824340(this, assetName, 0LL, callback, v4);
}


void __fastcall ExUIMeshRenderer__SetAssetImage_38824340(
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *loadAssetName; // x24
  struct System_String_o **p_loadAssetName; // x23
  __int64 v29; // x1
  System_Delegate_o *callbackFunc; // x0
  System_Delegate_o *v31; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x19
  System_Delegate_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Delegate_o *v40; // x8
  System_Action_c *v41; // x1
  AssetData_o *assetData; // x24
  __int64 v43; // x1
  AssetData_o *v44; // x0
  Il2CppObject *Object_object__49237568; // x0
  const MethodInfo *v46; // x2
  struct System_Action_o *v47; // x8
  System_String_o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  struct System_Action_o **v52; // x22
  System_Delegate_o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Action_c *v60; // x1
  AssetLoader_LoadEndDataHandler_o *v61; // x21
  __int64 v62; // x1

  if ( (byte_4B15670 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, assetName, assetLabel);
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, v12, v13);
    sub_1BCA7E0(&AssetManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_ExUIMeshRenderer_EndLoad__, v16, v17);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
    byte_4B15670 = 1;
  }
  this->fields.assetLabel = assetLabel;
  sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
    if ( AssetManager__compAssetStorage(loadAssetName, assetName, 0LL) )
    {
      callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
      if ( !callbackFunc )
        return;
      v31 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
      v33 = System_Delegate__Combine(callbackFunc, v31, 0LL);
      v40 = v33;
      if ( v33 )
      {
        v41 = System_Action_TypeInfo;
        if ( (System_Action_c *)v33->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (PartyOrganizationUtility_c *)v33, (System_Action_c *)v33->klass != v41) )
        {
LABEL_26:
          sub_1BCACFC(v40);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0LL;
      }
      sub_1BCA784(p_callbackFunc, (int64_t)v33, v34, v35, v36, v37, v38, v39);
      return;
    }
    v48 = *p_loadAssetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29);
    AssetManager__releaseAssetStorage(v48, 0LL);
  }
  else
  {
    assetData = this->fields.assetData;
    if ( assetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
      if ( AssetManager__compAssetStorage_38503380(assetData, assetName, 0LL) )
      {
        v44 = this->fields.assetData;
        if ( !v44 )
          sub_1BCAA3C(0LL, v43);
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    v44,
                                    assetLabel,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
        ExUIMeshRenderer__SetTexture(this, (UnityEngine_Texture_o *)Object_object__49237568, v46);
        v47 = this->fields.callbackFunc;
        if ( v47 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v47->fields.m_target)(
            v47->fields.original_method_info,
            *(_QWORD *)&v47->fields.extra_arg);
        return;
      }
    }
  }
  *p_loadAssetName = assetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadAssetName,
    (int64_t)assetName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( callback )
  {
    v52 = &this->fields.callbackFunc;
    v53 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callback, 0LL);
    v40 = v53;
    if ( v53 )
    {
      v60 = System_Action_TypeInfo;
      if ( (System_Action_c *)v53->klass != System_Action_TypeInfo )
        goto LABEL_26;
      *v52 = (struct System_Action_o *)v53;
      if ( (System_Action_c *)v53->klass != v60 )
        goto LABEL_26;
    }
    else
    {
      *v52 = 0LL;
    }
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  }
  v61 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v49, v50, v51);
  AssetLoader_LoadEndDataHandler___ctor(v61, (Il2CppObject *)this, Method_ExUIMeshRenderer_EndLoad__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v62);
  AssetManager__loadAssetStorage(assetName, v61, 1, 0LL);
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
  __int64 v5; // x1
  AssetData_o *assetData; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_String_o *loadAssetName; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Action_o *callbackFunc; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B1566F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, tex, method);
    byte_4B1566F = 1;
  }
  ExUIMeshRenderer__SetTexture(this, tex, method);
  assetData = this->fields.assetData;
  if ( assetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAsset_38505704(assetData, 0LL);
    this->fields.assetData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetData, 0LL, v7, v8, v9, v10, v11, v12);
  }
  loadAssetName = this->fields.loadAssetName;
  if ( loadAssetName )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
    AssetManager__releaseAssetStorage(loadAssetName, 0LL);
    this->fields.loadAssetName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadAssetName, 0LL, v14, v15, v16, v17, v18, v19);
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
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
  __int64 v5; // x1
  UnityEngine_Object_o *material; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B15672 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, tex, method);
    byte_4B15672 = 1;
  }
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, (const MethodInfo *)tex);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v7 )
  {
    if ( !material )
      sub_1BCAA3C(v7, v8);
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
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *material; // x20
  struct UnityEngine_MeshRenderer_o *meshRenderer; // x0
  __int64 v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  if ( (byte_4B1566C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v9, v10);
    byte_4B1566C = 1;
  }
  v16.fields.r = r;
  v16.fields.g = g;
  v16.fields.b = b;
  v16.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v16, 0LL);
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, v11);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  meshRenderer = (struct UnityEngine_MeshRenderer_o *)UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( ((unsigned __int8)meshRenderer & 1) != 0 )
  {
    if ( !material )
      goto LABEL_11;
    if ( UnityEngine_Material__HasProperty_70020424(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16346/*"_Color"*/,
           0LL) )
    {
      v17.fields.r = r;
      v17.fields.g = g;
      v17.fields.b = b;
      v17.fields.a = a;
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)material,
        (System_String_o *)StringLiteral_16346/*"_Color"*/,
        v17,
        0LL);
    }
  }
  meshRenderer = this->fields.meshRenderer;
  if ( !meshRenderer )
LABEL_11:
    sub_1BCAA3C(meshRenderer, v15);
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)meshRenderer, a > 0.0, 0LL);
}


void __fastcall ExUIMeshRenderer__SetTweenVolume(ExUIMeshRenderer_o *this, float v, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *material; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B1566D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    sub_1BCA7E0(&StringLiteral_16570/*"_Volume"*/, v6, v7);
    byte_4B1566D = 1;
  }
  this->fields.volume = v;
  material = (UnityEngine_Object_o *)ExUIMeshRenderer__get_material(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v10 = UnityEngine_Object__op_Inequality(material, 0LL, 0LL);
  if ( v10 )
  {
    if ( !material )
      sub_1BCAA3C(v10, v11);
    if ( UnityEngine_Material__HasProperty_70020424(
           (UnityEngine_Material_o *)material,
           (System_String_o *)StringLiteral_16570/*"_Volume"*/,
           0LL) )
    {
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)material, (System_String_o *)StringLiteral_16570/*"_Volume"*/, v, 0LL);
    }
  }
}


UnityEngine_Material_o *__fastcall ExUIMeshRenderer__get_material(ExUIMeshRenderer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *meshRenderer; // x20
  __int64 v5; // x1
  UnityEngine_Renderer_o *v6; // x0

  if ( (byte_4B1566A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1566A = 1;
  }
  meshRenderer = (UnityEngine_Object_o *)this->fields.meshRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(meshRenderer, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Renderer__get_material(v6, 0LL);
}


void __fastcall ExUIMeshRenderer__set_material(
        ExUIMeshRenderer_o *this,
        UnityEngine_Material_o *value,
        const MethodInfo *method)
{
  UnityEngine_Renderer_o *meshRenderer; // x0

  meshRenderer = (UnityEngine_Renderer_o *)this->fields.meshRenderer;
  if ( !meshRenderer )
    sub_1BCAA3C(0LL, value);
  UnityEngine_Renderer__set_material(meshRenderer, value, 0LL);
}