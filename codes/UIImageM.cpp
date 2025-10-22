void UIImageM___ctor(UIImageM_o *this, const MethodInfo *method)
{
  if ( (byte_4C5860E & 1) == 0 )
  {
    sub_1C3E564(&UIImageRender_TypeInfo);
    byte_4C5860E = 1;
  }
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
  UIImageRender___ctor((UIImageRender_o *)this, 0);
}


// attributes: thunk
void UIImageM__Destroy(UIImageM_o *this, const MethodInfo *method)
{
  UIImageM__ReleaseCharacter(this, method);
}


void UIImageM__EndLoadAsset(UIImageM_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_40589144; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int max_length; // w8
  struct AssetData_array *v9; // x20
  __int64 v10; // x9
  AssetData_array *assetDataList; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C58609 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C58609 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_40589144 = AssetManager__getAssetStorage_40589144(loadNameList, 0);
    if ( AssetStorage_40589144 )
    {
      max_length = AssetStorage_40589144->max_length;
      v9 = AssetStorage_40589144;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v6, v7);
        this->fields.assetDataList = v9;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v9, v12, v13);
        UIImageM__SetTexture(this, v14);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40581180(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v15, v16);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= max_length )
            sub_1C3E7C8(AssetStorage_40589144, v5);
          if ( !AssetStorage_40589144->m_Items[v10] )
            break;
          if ( (int)++v10 >= max_length )
            goto LABEL_12;
        }
      }
    }
  }
}


UnityEngine_Transform_o *UIImageM__GetBody(UIImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyFilter; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C5860D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5860D = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIImageM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_1C3E7C0(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIImageM__GetBodySubTexture(UIImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C5860C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16369/*"_SubTex"*/);
    byte_4C5860C = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_1C3E7C0(bodyRenderer, method);
  }
  return UnityEngine_Material__GetTexture(
           (UnityEngine_Material_o *)bodyRenderer,
           (System_String_o *)StringLiteral_16369/*"_SubTex"*/,
           0);
}


void UIImageM__ReleaseCharacter(UIImageM_o *this, const MethodInfo *method)
{
  AssetData_array *assetDataList; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_String_array *loadNameList; // x20
  CGThumbnailListItem_o *p_loadNameList; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C58607 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C58607 = 1;
  }
  UIImageRender__ReleaseCharacter((UIImageRender_o *)this, 0);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40581180(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v4, v5);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40590132(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C3E508(p_loadNameList, 0, v8, v9);
  }
}


void UIImageM__SetCharacter(
        UIImageM_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UIImageM_o *v7; // x19
  bool v8; // w0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_array *AssetNameList; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_array *loadNameList; // x23
  System_Delegate_o *v15; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Delegate_o *v20; // x8
  System_Action_c *v21; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v23; // x1
  System_String_array *v24; // x23
  _QWORD *v25; // x23
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Action_c *v29; // x1
  System_String_array *v30; // x20
  System_Action_o *v31; // x21

  v7 = this;
  if ( (byte_4C58608 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&Method_UIImageM_EndLoadAsset__);
    sub_1C3E564(&UIImageRender_TypeInfo);
    this = (UIImageM_o *)sub_1C3E564(&StringLiteral_3029/*"Back/"*/);
    byte_4C58608 = 1;
  }
  if ( !imageName )
    goto LABEL_42;
  v8 = System_String__StartsWith(imageName, (System_String_o *)StringLiteral_3029/*"Back/"*/, 0);
  v7->fields.isBackImage = v8;
  if ( v8 )
  {
    this = (UIImageM_o *)sub_1C3E60C(string___TypeInfo, 1);
    if ( this )
    {
      AssetNameList = (System_String_array *)this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1C3E7C8(this, imageName);
      this->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)imageName;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.leftAnchor, (int32_t)imageName, v9, v10);
      goto LABEL_11;
    }
LABEL_42:
    sub_1C3E7C0(this, imageName);
  }
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
  AssetNameList = UIImageRender__GetAssetNameList(imageName, 0);
LABEL_11:
  loadNameList = v7->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorageList(loadNameList, AssetNameList, 0) )
    {
      if ( !callbackFunc )
        return;
      v15 = (System_Delegate_o *)v7->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&v7->fields.callbackFunc;
      v17 = System_Delegate__Combine(v15, (System_Delegate_o *)callbackFunc, 0);
      v20 = v17;
      if ( v17 )
      {
        v21 = System_Action_TypeInfo;
        if ( (System_Action_c *)v17->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (CGThumbnailListItem_c *)v17, (System_Action_c *)v17->klass != v21) )
        {
LABEL_33:
          sub_1C3EA80(v20);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C3E508(p_callbackFunc, (int32_t)v17, v18, v19);
      return;
    }
    v24 = v7->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40590132(v24, 0);
  }
  else
  {
    assetDataList = v7->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_40578916(assetDataList, AssetNameList, 0) )
      {
        UIImageM__SetTextureStatus(v7, v23);
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
    v25 = &v7->fields.callbackFunc;
    v26 = System_Delegate__Combine((System_Delegate_o *)v7->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v20 = v26;
    if ( v26 )
    {
      v29 = System_Action_TypeInfo;
      if ( (System_Action_c *)v26->klass != System_Action_TypeInfo )
        goto LABEL_33;
      *v25 = v26;
      if ( (System_Action_c *)v26->klass != v29 )
        goto LABEL_33;
    }
    else
    {
      *v25 = 0;
    }
    sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.callbackFunc, (int32_t)v26, v27, v28);
  }
  v7->fields.loadNameList = AssetNameList;
  sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.loadNameList, (int32_t)AssetNameList, v12, v13);
  v30 = v7->fields.loadNameList;
  v31 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v7, Method_UIImageM_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40587784(v30, v31, 1, 0);
}


void UIImageM__SetDispOffset(UIImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C3E7C0(bodyFilter, method);
  v4.fields.y = this->fields.dispOffset.fields.y;
  v4.fields.x = this->fields.dispOffset.fields.x;
  v4.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0);
}


void UIImageM__SetMaskImage(
        UIImageM_o *this,
        int32_t offsetX,
        int32_t offsetY,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  UIImageRender_c *v11; // x0
  struct UIImageRender_StaticFields *static_fields; // x8
  int32_t LEFT_X; // w27
  int32_t TOP_Y; // w26
  UnityEngine_Vector3_array *bodyFilter; // x0
  __int64 v16; // x1
  unsigned int max_length; // w8
  UnityEngine_Vector3_array *v18; // x24
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s9
  float v23; // s1
  struct UIImageRender_StaticFields *v24; // x8
  int MAIN_SIZE_Y; // s10
  int MAIN_SIZE_X; // s11
  unsigned int v27; // w8
  UnityEngine_Vector2_array *v28; // x22
  float v29; // s1
  float v30; // s0
  float v31; // s3
  float v32; // s2

  if ( (byte_4C5860B & 1) == 0 )
  {
    sub_1C3E564(&UIImageRender_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    byte_4C5860B = 1;
  }
  v11 = UIImageRender_TypeInfo;
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
    v11 = UIImageRender_TypeInfo;
  }
  static_fields = v11->static_fields;
  LEFT_X = static_fields->LEFT_X;
  TOP_Y = static_fields->TOP_Y;
  bodyFilter = (UnityEngine_Vector3_array *)sub_1C3E60C(UnityEngine_Vector3___TypeInfo, 4);
  if ( !bodyFilter )
    goto LABEL_23;
  max_length = bodyFilter->max_length;
  v18 = bodyFilter;
  if ( !max_length )
    goto LABEL_22;
  v19 = (float)(LEFT_X + offsetX);
  v20 = (float)(TOP_Y - offsetY);
  bodyFilter->m_Items[0].fields.x = v19;
  bodyFilter->m_Items[0].fields.y = v20;
  bodyFilter->m_Items[0].fields.z = 0.0;
  if ( max_length == 1 )
    goto LABEL_22;
  v21 = (float)width + v19;
  bodyFilter->m_Items[1].fields.x = v21;
  bodyFilter->m_Items[1].fields.y = v20;
  bodyFilter->m_Items[1].fields.z = 0.0;
  if ( max_length <= 2
    || (v22 = (float)height,
        v23 = v20 - (float)height,
        bodyFilter->m_Items[2].fields.x = v19,
        bodyFilter->m_Items[2].fields.y = v23,
        bodyFilter->m_Items[2].fields.z = 0.0,
        max_length == 3) )
  {
LABEL_22:
    sub_1C3E7C8(bodyFilter, v16);
  }
  bodyFilter->m_Items[3].fields.x = v21;
  bodyFilter->m_Items[3].fields.y = v23;
  bodyFilter->m_Items[3].fields.z = 0.0;
  bodyFilter = (UnityEngine_Vector3_array *)this->fields.bodyFilter;
  if ( !bodyFilter
    || (bodyFilter = (UnityEngine_Vector3_array *)UnityEngine_MeshFilter__get_mesh(
                                                    (UnityEngine_MeshFilter_o *)bodyFilter,
                                                    0)) == 0
    || (UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)bodyFilter, v18, 0),
        v24 = UIImageRender_TypeInfo->static_fields,
        MAIN_SIZE_X = v24->MAIN_SIZE_X,
        MAIN_SIZE_Y = v24->MAIN_SIZE_Y,
        (bodyFilter = (UnityEngine_Vector3_array *)sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 4)) == 0) )
  {
LABEL_23:
    sub_1C3E7C0(bodyFilter, v16);
  }
  v27 = bodyFilter->max_length;
  v28 = (UnityEngine_Vector2_array *)bodyFilter;
  if ( !v27 )
    goto LABEL_22;
  v29 = (float)offsetX / (float)MAIN_SIZE_X;
  v30 = (float)offsetY / (float)MAIN_SIZE_Y;
  v31 = (float)(v22 / (float)MAIN_SIZE_X) + v30;
  bodyFilter->m_Items[0].fields.x = v29;
  bodyFilter->m_Items[0].fields.y = v31;
  if ( v27 == 1 )
    goto LABEL_22;
  v32 = (float)((float)width / (float)MAIN_SIZE_X) + v29;
  bodyFilter->m_Items[0].fields.z = v32;
  bodyFilter->m_Items[1].fields.x = v31;
  if ( v27 <= 2 )
    goto LABEL_22;
  bodyFilter->m_Items[1].fields.y = v29;
  bodyFilter->m_Items[1].fields.z = v30;
  if ( v27 == 3 )
    goto LABEL_22;
  bodyFilter->m_Items[2].fields.x = v32;
  bodyFilter->m_Items[2].fields.y = v30;
  bodyFilter = (UnityEngine_Vector3_array *)this->fields.bodyFilter;
  if ( !bodyFilter )
    goto LABEL_23;
  bodyFilter = (UnityEngine_Vector3_array *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
  if ( !bodyFilter )
    goto LABEL_23;
  UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)bodyFilter, v28, 0);
  bodyFilter = (UnityEngine_Vector3_array *)this->fields.bodyFilter;
  if ( !bodyFilter )
    goto LABEL_23;
  bodyFilter = (UnityEngine_Vector3_array *)UnityEngine_MeshFilter__get_mesh((UnityEngine_MeshFilter_o *)bodyFilter, 0);
  if ( !bodyFilter )
    goto LABEL_23;
  UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)bodyFilter, v28, 0);
}


void UIImageM__SetTexture(UIImageM_o *this, const MethodInfo *method)
{
  UIImageM_o *v2; // x19
  struct AssetData_array *assetDataList; // x8
  AssetData_o *v4; // x20
  System_String_o *LastName; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Texture2D_array *textureList; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_Texture2D_array *v14; // x22
  const MethodInfo *v15; // x1
  System_String_o *v16; // x0

  v2 = this;
  if ( (byte_4C5860A & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    sub_1C3E564(&UnityEngine_Texture2D___TypeInfo);
    this = (UIImageM_o *)sub_1C3E564(&StringLiteral_16641/*"a"*/);
    byte_4C5860A = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_13;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_14;
  v4 = assetDataList->m_Items[0];
  if ( !v4 )
    goto LABEL_13;
  LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0);
  v6 = sub_1C3E60C(UnityEngine_Texture2D___TypeInfo, 2);
  v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.textureList, v6, v7, v8);
  textureList = v2->fields.textureList;
  this = (UIImageM_o *)AssetData__GetObject_object__51228128(
                         v4,
                         LastName,
                         (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
  if ( !textureList )
    goto LABEL_13;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_14;
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)textureList->m_Items, (int32_t)this, v10, v11);
  v14 = v2->fields.textureList;
  if ( v2->fields.isBackImage )
  {
    method = 0;
    if ( v14 )
      goto LABEL_10;
LABEL_13:
    sub_1C3E7C0(this, method);
  }
  v16 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_16641/*"a"*/, 0);
  this = (UIImageM_o *)AssetData__GetObject_object__51228128(
                         v4,
                         v16,
                         (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
  method = (const MethodInfo *)this;
  if ( !v14 )
    goto LABEL_13;
LABEL_10:
  if ( LODWORD(v14->max_length) <= 1 )
LABEL_14:
    sub_1C3E7C8(this, method);
  v14->m_Items[1] = (UnityEngine_Texture2D_o *)method;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->m_Items[1], (int32_t)method, v12, v13);
  UIImageM__SetTextureStatus(v2, v15);
}


void UIImageM__SetTextureStatus(UIImageM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  UIImageRender__SetCharacterRender((UIImageRender_o *)this, 0);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C3E7C0(bodyFilter, v3);
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


bool UIImageM__get_IsLoad(UIImageM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}