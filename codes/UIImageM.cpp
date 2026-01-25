void UIImageM___ctor(UIImageM_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFEB8 & 1) == 0 )
  {
    sub_1C7BAE8(&UIImageRender_TypeInfo);
    byte_4CEFEB8 = 1;
  }
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
  UIImageRender___ctor((UIImageRender_o *)this, method);
}


// attributes: thunk
void UIImageM__Destroy(UIImageM_o *this, const MethodInfo *method)
{
  UIImageM__ReleaseCharacter(this, method);
}


void UIImageM__EndLoadAsset(UIImageM_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_41104444; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int max_length; // w8
  struct AssetData_array *v12; // x20
  __int64 v13; // x9
  AssetData_array *assetDataList; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4CEFEB3 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CEFEB3 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_41104444 = AssetManager__getAssetStorage_41104444(loadNameList, 0);
    if ( AssetStorage_41104444 )
    {
      max_length = AssetStorage_41104444->max_length;
      v12 = AssetStorage_41104444;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadNameList, 0, v5, v6, v7, v8, v9, v10);
        this->fields.assetDataList = v12;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.assetDataList,
          (int32_t)v12,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        UIImageM__SetTexture(this, v21);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_41096480(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v22, v23, v24, v25, v26, v27);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        v13 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v13 >= max_length )
            sub_1C7BD48(AssetStorage_41104444);
          if ( !AssetStorage_41104444->m_Items[v13] )
            break;
          if ( (int)++v13 >= max_length )
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

  if ( (byte_4CEFEB7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFEB7 = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIImageM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_1C7BD40(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIImageM__GetBodySubTexture(UIImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4CEFEB6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16419/*"_SubTex"*/);
    byte_4CEFEB6 = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_1C7BD40(bodyRenderer, method);
  }
  return UnityEngine_Material__GetTexture(
           (UnityEngine_Material_o *)bodyRenderer,
           (System_String_o *)StringLiteral_16419/*"_SubTex"*/,
           0);
}


void UIImageM__ReleaseCharacter(UIImageM_o *this, const MethodInfo *method)
{
  AssetData_array *assetDataList; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_String_array *loadNameList; // x20
  GrandQuestFolderBoardItem_o *p_loadNameList; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEFEB1 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CEFEB1 = 1;
  }
  UIImageRender__ReleaseCharacter((UIImageRender_o *)this, method);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41096480(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetDataList, 0, v4, v5, v6, v7, v8, v9);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (GrandQuestFolderBoardItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_41105432(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C7BA8C(p_loadNameList, 0, v12, v13, v14, v15, v16, v17);
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
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_array *AssetNameList; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_String_array *loadNameList; // x23
  System_Delegate_o *v24; // x0
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Delegate_o *v33; // x8
  System_Action_c *v34; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v36; // x1
  System_String_array *v37; // x23
  _QWORD *v38; // x23
  System_Delegate_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Action_c *v46; // x1
  System_String_array *v47; // x20
  System_Action_o *v48; // x21

  v7 = this;
  if ( (byte_4CEFEB2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&Method_UIImageM_EndLoadAsset__);
    sub_1C7BAE8(&UIImageRender_TypeInfo);
    this = (UIImageM_o *)sub_1C7BAE8(&StringLiteral_3030/*"Back/"*/);
    byte_4CEFEB2 = 1;
  }
  if ( !imageName )
    goto LABEL_42;
  v8 = System_String__StartsWith(imageName, (System_String_o *)StringLiteral_3030/*"Back/"*/, 0);
  v7->fields.isBackImage = v8;
  if ( v8 )
  {
    this = (UIImageM_o *)sub_1C7BB90(string___TypeInfo, 1);
    if ( this )
    {
      AssetNameList = (System_String_array *)this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1C7BD48(this);
      this->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)imageName;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.leftAnchor,
        (int32_t)imageName,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      goto LABEL_11;
    }
LABEL_42:
    sub_1C7BD40(this, imageName);
  }
  if ( !UIImageRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo);
  AssetNameList = UIImageRender__GetAssetNameList(imageName, v9);
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
      v24 = (System_Delegate_o *)v7->fields.callbackFunc;
      p_callbackFunc = (GrandQuestFolderBoardItem_o *)&v7->fields.callbackFunc;
      v26 = System_Delegate__Combine(v24, (System_Delegate_o *)callbackFunc, 0);
      v33 = v26;
      if ( v26 )
      {
        v34 = System_Action_TypeInfo;
        if ( (System_Action_c *)v26->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (GrandQuestFolderBoardItem_c *)v26, (System_Action_c *)v26->klass != v34) )
        {
LABEL_33:
          sub_1C7C0DC(v33);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C7BA8C(p_callbackFunc, (int32_t)v26, v27, v28, v29, v30, v31, v32);
      return;
    }
    v37 = v7->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_41105432(v37, 0);
  }
  else
  {
    assetDataList = v7->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_41094216(assetDataList, AssetNameList, 0) )
      {
        UIImageM__SetTextureStatus(v7, v36);
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
    v38 = &v7->fields.callbackFunc;
    v39 = System_Delegate__Combine((System_Delegate_o *)v7->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v33 = v39;
    if ( v39 )
    {
      v46 = System_Action_TypeInfo;
      if ( (System_Action_c *)v39->klass != System_Action_TypeInfo )
        goto LABEL_33;
      *v38 = v39;
      if ( (System_Action_c *)v39->klass != v46 )
        goto LABEL_33;
    }
    else
    {
      *v38 = 0;
    }
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7->fields.callbackFunc, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  }
  v7->fields.loadNameList = AssetNameList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v7->fields.loadNameList,
    (int32_t)AssetNameList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v47 = v7->fields.loadNameList;
  v48 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v7, Method_UIImageM_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41103084(v47, v48, 1, 0);
}


void UIImageM__SetDispOffset(UIImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C7BD40(bodyFilter, method);
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

  if ( (byte_4CEFEB5 & 1) == 0 )
  {
    sub_1C7BAE8(&UIImageRender_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector2___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3___TypeInfo);
    byte_4CEFEB5 = 1;
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
  bodyFilter = (UnityEngine_Vector3_array *)sub_1C7BB90(UnityEngine_Vector3___TypeInfo, 4);
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
    sub_1C7BD48(bodyFilter);
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
        (bodyFilter = (UnityEngine_Vector3_array *)sub_1C7BB90(UnityEngine_Vector2___TypeInfo, 4)) == 0) )
  {
LABEL_23:
    sub_1C7BD40(bodyFilter, v16);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UnityEngine_Texture2D_array *textureList; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UnityEngine_Texture2D_array *v26; // x22
  const MethodInfo *v27; // x1
  System_String_o *v28; // x0

  v2 = this;
  if ( (byte_4CEFEB4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    sub_1C7BAE8(&UnityEngine_Texture2D___TypeInfo);
    this = (UIImageM_o *)sub_1C7BAE8(&StringLiteral_16692/*"a"*/);
    byte_4CEFEB4 = 1;
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
  v6 = sub_1C7BB90(UnityEngine_Texture2D___TypeInfo, 2);
  v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.textureList, v6, v7, v8, v9, v10, v11, v12);
  textureList = v2->fields.textureList;
  this = (UIImageM_o *)AssetData__GetObject_object__51713432(
                         v4,
                         LastName,
                         (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  if ( !textureList )
    goto LABEL_13;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_14;
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)textureList->m_Items, (int32_t)this, v14, v15, v16, v17, v18, v19);
  v26 = v2->fields.textureList;
  if ( v2->fields.isBackImage )
  {
    method = 0;
    if ( v26 )
      goto LABEL_10;
LABEL_13:
    sub_1C7BD40(this, method);
  }
  v28 = System_String__Concat_64176912(LastName, (System_String_o *)StringLiteral_16692/*"a"*/, 0);
  this = (UIImageM_o *)AssetData__GetObject_object__51713432(
                         v4,
                         v28,
                         (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  method = (const MethodInfo *)this;
  if ( !v26 )
    goto LABEL_13;
LABEL_10:
  if ( LODWORD(v26->max_length) <= 1 )
LABEL_14:
    sub_1C7BD48(this);
  v26->m_Items[1] = (UnityEngine_Texture2D_o *)method;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26->m_Items[1], (int32_t)method, v20, v21, v22, v23, v24, v25);
  UIImageM__SetTextureStatus(v2, v27);
}


void UIImageM__SetTextureStatus(UIImageM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  UIImageRender__SetCharacterRender((UIImageRender_o *)this, method);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C7BD40(bodyFilter, v3);
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


bool UIImageM__get_IsLoad(UIImageM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}