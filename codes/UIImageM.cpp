void UIImageM___ctor(UIImageM_o *this, const MethodInfo *method)
{
  if ( (byte_5972151 & 1) == 0 )
  {
    sub_2213A60(&UIImageRender_TypeInfo);
    byte_5972151 = 1;
  }
  if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, method);
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
  AssetData_array *AssetStorage_47505140; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int max_length; // w8
  struct AssetData_array *v12; // x20
  AssetData_o **m_Items; // x9
  AssetData_array *assetDataList; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_597214C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_597214C = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetStorage_47505140 = AssetManager__getAssetStorage_47505140(loadNameList, 0);
    if ( AssetStorage_47505140 )
    {
      max_length = AssetStorage_47505140->max_length;
      v12 = AssetStorage_47505140;
      if ( max_length < 1 )
      {
LABEL_11:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList, 0, v5, v6, v7, v8, v9, v10);
        this->fields.assetDataList = v12;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList,
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
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
          AssetManager__releaseAsset_47497180(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v23, v24, v25, v26, v27, v28);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        m_Items = AssetStorage_47505140->m_Items;
        while ( *m_Items )
        {
          --max_length;
          ++m_Items;
          if ( !max_length )
            goto LABEL_11;
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

  if ( (byte_5972150 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972150 = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIImageM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_2213CDC(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIImageM__GetBodySubTexture(UIImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_597214F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17011/*"_SubTex"*/);
    byte_597214F = 1;
  }
  bodyRenderer = (UnityEngine_Renderer_o *)this->fields.bodyRenderer;
  if ( !bodyRenderer
    || (bodyRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(bodyRenderer, 0)) == 0 )
  {
    sub_2213CDC(bodyRenderer, method);
  }
  return UnityEngine_Material__GetTexture(
           (UnityEngine_Material_o *)bodyRenderer,
           (System_String_o *)StringLiteral_17011/*"_SubTex"*/,
           0);
}


void UIImageM__ReleaseCharacter(UIImageM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_array *assetDataList; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_array *loadNameList; // x20
  MissionNaviTransitionBoardItem_o *p_loadNameList; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_597214A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_597214A = 1;
  }
  UIImageRender__ReleaseCharacter((UIImageRender_o *)this, method);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAsset_47497180(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList, 0, v5, v6, v7, v8, v9, v10);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    AssetManager__releaseAssetStorage_47506132(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_2213A04(p_loadNameList, 0, v13, v14, v15, v16, v17, v18);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_array *AssetNameList; // x21
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_array *loadNameList; // x23
  __int64 v25; // x1
  System_Delegate_o *v26; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Delegate_o *v35; // x8
  System_Action_c *v36; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v38; // x1
  System_String_array *v39; // x23
  _QWORD *v40; // x23
  System_Delegate_o *v41; // x0
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_array *v47; // x20
  System_Action_o *v48; // x21
  __int64 v49; // x1

  v7 = this;
  if ( (byte_597214B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_UIImageM_EndLoadAsset__);
    sub_2213A60(&UIImageRender_TypeInfo);
    this = (UIImageM_o *)sub_2213A60(&StringLiteral_3151/*"Back/"*/);
    byte_597214B = 1;
  }
  if ( !imageName )
    goto LABEL_42;
  v8 = System_String__StartsWith(imageName, (System_String_o *)StringLiteral_3151/*"Back/"*/, 0);
  v7->fields.isBackImage = v8;
  if ( v8 )
  {
    this = (UIImageM_o *)sub_2213B20(string___TypeInfo, 1);
    if ( this )
    {
      AssetNameList = (System_String_array *)this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_2213CE4(this);
      this->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)imageName;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.leftAnchor,
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
    sub_2213CDC(this, imageName);
  }
  if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, v9);
  AssetNameList = UIImageRender__GetAssetNameList(imageName, v9);
LABEL_11:
  loadNameList = v7->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    if ( AssetManager__compAssetStorageList(loadNameList, AssetNameList, 0) )
    {
      if ( !callbackFunc )
        return;
      v26 = (System_Delegate_o *)v7->fields.callbackFunc;
      p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&v7->fields.callbackFunc;
      v28 = System_Delegate__Combine(v26, (System_Delegate_o *)callbackFunc, 0);
      v35 = v28;
      if ( v28 )
      {
        v36 = System_Action_TypeInfo;
        if ( (System_Action_c *)v28->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (MissionNaviTransitionBoardItem_c *)v28, (System_Action_c *)v28->klass != v36) )
        {
LABEL_33:
          sub_221405C(v35, v36, v29);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_2213A04(p_callbackFunc, (int32_t)v28, v29, v30, v31, v32, v33, v34);
      return;
    }
    v39 = v7->fields.loadNameList;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
    AssetManager__releaseAssetStorage_47506132(v39, 0);
  }
  else
  {
    assetDataList = v7->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
      if ( AssetManager__compAssetStorageList_47494836(assetDataList, AssetNameList, 0) )
      {
        UIImageM__SetTextureStatus(v7, v38);
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
    v40 = &v7->fields.callbackFunc;
    v41 = System_Delegate__Combine((System_Delegate_o *)v7->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v35 = v41;
    if ( v41 )
    {
      v36 = System_Action_TypeInfo;
      if ( (System_Action_c *)v41->klass != System_Action_TypeInfo )
        goto LABEL_33;
      *v40 = v41;
      if ( (System_Action_c *)v41->klass != v36 )
        goto LABEL_33;
    }
    else
    {
      *v40 = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v7->fields.callbackFunc,
      (int32_t)v41,
      v29,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v7->fields.loadNameList = AssetNameList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v7->fields.loadNameList,
    (int32_t)AssetNameList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v47 = v7->fields.loadNameList;
  v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v7, Method_UIImageM_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v49);
  AssetManager__loadAssetStorage_47503780(v47, v48, 1, 0);
}


void UIImageM__SetDispOffset(UIImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_2213CDC(bodyFilter, method);
  v4.fields.y = this->fields.dispOffset.fields.y;
  v4.fields.x = this->fields.dispOffset.fields.x;
  v4.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int MAIN_SIZE_X; // s10
  int MAIN_SIZE_Y; // s11
  unsigned int v27; // w8
  UnityEngine_Vector2_array *v28; // x22
  float v29; // s0
  float v30; // s1
  float v31; // s3
  float v32; // s2

  if ( (byte_597214E & 1) == 0 )
  {
    sub_2213A60(&UIImageRender_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_597214E = 1;
  }
  v11 = UIImageRender_TypeInfo;
  if ( !*(&UIImageRender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIImageRender_TypeInfo, *(_QWORD *)&offsetX);
    v11 = UIImageRender_TypeInfo;
  }
  static_fields = v11->static_fields;
  LEFT_X = static_fields->LEFT_X;
  TOP_Y = static_fields->TOP_Y;
  bodyFilter = (UnityEngine_Vector3_array *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  if ( !bodyFilter )
    goto LABEL_23;
  max_length = bodyFilter->max_length;
  v18 = bodyFilter;
  if ( !max_length )
    goto LABEL_22;
  v19 = (float)(LEFT_X + offsetX);
  v20 = (float)(TOP_Y - offsetY);
  bodyFilter->m_Items[0].fields.z = 0.0;
  bodyFilter->m_Items[0].fields.x = v19;
  bodyFilter->m_Items[0].fields.y = v20;
  if ( max_length == 1 )
    goto LABEL_22;
  bodyFilter->m_Items[1].fields.z = 0.0;
  v21 = (float)width + v19;
  bodyFilter->m_Items[1].fields.x = v21;
  bodyFilter->m_Items[1].fields.y = v20;
  if ( max_length <= 2
    || (v22 = (float)height,
        bodyFilter->m_Items[2].fields.z = 0.0,
        v23 = v20 - (float)height,
        bodyFilter->m_Items[2].fields.x = v19,
        bodyFilter->m_Items[2].fields.y = v23,
        max_length == 3) )
  {
LABEL_22:
    sub_2213CE4(bodyFilter);
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
        (bodyFilter = (UnityEngine_Vector3_array *)sub_2213B20(UnityEngine_Vector2___TypeInfo, 4)) == 0) )
  {
LABEL_23:
    sub_2213CDC(bodyFilter, v16);
  }
  v27 = bodyFilter->max_length;
  v28 = (UnityEngine_Vector2_array *)bodyFilter;
  if ( !v27 )
    goto LABEL_22;
  v29 = (float)offsetY / (float)MAIN_SIZE_Y;
  v30 = (float)offsetX / (float)MAIN_SIZE_X;
  v31 = (float)(v22 / (float)MAIN_SIZE_X) + v29;
  bodyFilter->m_Items[0].fields.x = v30;
  bodyFilter->m_Items[0].fields.y = v31;
  if ( v27 == 1 )
    goto LABEL_22;
  v32 = (float)((float)width / (float)MAIN_SIZE_X) + v30;
  bodyFilter->m_Items[0].fields.z = v32;
  bodyFilter->m_Items[1].fields.x = v31;
  if ( v27 <= 2 )
    goto LABEL_22;
  bodyFilter->m_Items[1].fields.y = v30;
  bodyFilter->m_Items[1].fields.z = v29;
  if ( v27 == 3 )
    goto LABEL_22;
  bodyFilter->m_Items[2].fields.x = v32;
  bodyFilter->m_Items[2].fields.y = v29;
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UnityEngine_Texture2D_array *textureList; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UnityEngine_Texture2D_array *v26; // x22
  const MethodInfo *v27; // x1
  System_String_o *v28; // x0

  v2 = this;
  if ( (byte_597214D & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Texture2D___TypeInfo);
    this = (UIImageM_o *)sub_2213A60(&StringLiteral_17306/*"a"*/);
    byte_597214D = 1;
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
  v6 = sub_2213B20(UnityEngine_Texture2D___TypeInfo, 2);
  v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.textureList, v6, v7, v8, v9, v10, v11, v12);
  textureList = v2->fields.textureList;
  this = (UIImageM_o *)AssetData__GetObject_object__58532980(
                         v4,
                         LastName,
                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !textureList )
    goto LABEL_13;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_14;
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)textureList->m_Items, (int32_t)this, v14, v15, v16, v17, v18, v19);
  v26 = v2->fields.textureList;
  if ( v2->fields.isBackImage )
  {
    method = 0;
    if ( v26 )
      goto LABEL_10;
LABEL_13:
    sub_2213CDC(this, method);
  }
  v28 = System_String__Concat_75651716(LastName, (System_String_o *)StringLiteral_17306/*"a"*/, 0);
  this = (UIImageM_o *)AssetData__GetObject_object__58532980(
                         v4,
                         v28,
                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  method = (const MethodInfo *)this;
  if ( !v26 )
    goto LABEL_13;
LABEL_10:
  if ( (v26->max_length & 0xFFFFFFFE) == 0 )
LABEL_14:
    sub_2213CE4(this);
  v26->m_Items[1] = (UnityEngine_Texture2D_o *)method;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->m_Items[1], (int32_t)method, v20, v21, v22, v23, v24, v25);
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
    sub_2213CDC(bodyFilter, v3);
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


bool UIImageM__get_IsLoad(UIImageM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}