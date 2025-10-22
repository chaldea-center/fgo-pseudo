void UIHorizontalImageM___ctor(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  if ( (byte_4C585F3 & 1) == 0 )
  {
    sub_1C3E564(&UIHorizontalImageRender_TypeInfo);
    byte_4C585F3 = 1;
  }
  if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
  UIHorizontalImageRender___ctor((UIHorizontalImageRender_o *)this, method);
}


// attributes: thunk
void UIHorizontalImageM__Destroy(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  UIHorizontalImageM__ReleaseCharacter(this, method);
}


void UIHorizontalImageM__EndLoadAsset(UIHorizontalImageM_o *this, const MethodInfo *method)
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

  if ( (byte_4C585EF & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C585EF = 1;
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
        UIHorizontalImageM__SetTexture(this, v14);
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


UnityEngine_Transform_o *UIHorizontalImageM__GetBody(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyFilter; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4C585F2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C585F2 = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIHorizontalImageM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_1C3E7C0(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIHorizontalImageM__GetBodySubTexture(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4C585F1 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16369/*"_SubTex"*/);
    byte_4C585F1 = 1;
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


void UIHorizontalImageM__ReleaseCharacter(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  AssetData_array *assetDataList; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_String_array *loadNameList; // x20
  CGThumbnailListItem_o *p_loadNameList; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C585ED & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C585ED = 1;
  }
  UIHorizontalImageRender__ReleaseCharacter((UIHorizontalImageRender_o *)this, method);
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


void UIHorizontalImageM__SetCharacter(
        UIHorizontalImageM_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_array *AssetNameList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_array *loadNameList; // x23
  System_String_array *v12; // x21
  System_Delegate_o *v13; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Delegate_o *v18; // x8
  System_Action_c *v19; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v21; // x1
  System_String_array *v22; // x23
  struct System_Action_o **v23; // x23
  System_Delegate_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_c *v27; // x1
  System_String_array *v28; // x20
  System_Action_o *v29; // x21

  if ( (byte_4C585EE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_UIHorizontalImageM_EndLoadAsset__);
    sub_1C3E564(&UIHorizontalImageRender_TypeInfo);
    byte_4C585EE = 1;
  }
  if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
  AssetNameList = UIHorizontalImageRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
  loadNameList = this->fields.loadNameList;
  v12 = AssetNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorageList(loadNameList, v12, 0) )
    {
      if ( !callbackFunc )
        return;
      v13 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      v15 = System_Delegate__Combine(v13, (System_Delegate_o *)callbackFunc, 0);
      v18 = v15;
      if ( v15 )
      {
        v19 = System_Action_TypeInfo;
        if ( (System_Action_c *)v15->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (CGThumbnailListItem_c *)v15, (System_Action_c *)v15->klass != v19) )
        {
LABEL_27:
          sub_1C3EA80(v18);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C3E508(p_callbackFunc, (int32_t)v15, v16, v17);
      return;
    }
    v22 = this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40590132(v22, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_40578916(assetDataList, v12, 0) )
      {
        UIHorizontalImageM__SetTextureStatus(this, v21);
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
    v23 = &this->fields.callbackFunc;
    v24 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v18 = v24;
    if ( v24 )
    {
      v27 = System_Action_TypeInfo;
      if ( (System_Action_c *)v24->klass != System_Action_TypeInfo )
        goto LABEL_27;
      *v23 = (struct System_Action_o *)v24;
      if ( (System_Action_c *)v24->klass != v27 )
        goto LABEL_27;
    }
    else
    {
      *v23 = 0;
    }
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v24, v25, v26);
  }
  this->fields.loadNameList = v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadNameList, (int32_t)v12, v9, v10);
  v28 = this->fields.loadNameList;
  v29 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_UIHorizontalImageM_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40587784(v28, v29, 1, 0);
}


void UIHorizontalImageM__SetDispOffset(UIHorizontalImageM_o *this, const MethodInfo *method)
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


void UIHorizontalImageM__SetTexture(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  UIHorizontalImageM_o *v2; // x19
  struct AssetData_array *assetDataList; // x8
  AssetData_o *v4; // x20
  System_String_o *LastName; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Texture2D_array *textureList; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Texture2D_array *v12; // x22
  System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  v2 = this;
  if ( (byte_4C585F0 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    sub_1C3E564(&UnityEngine_Texture2D___TypeInfo);
    this = (UIHorizontalImageM_o *)sub_1C3E564(&StringLiteral_16641/*"a"*/);
    byte_4C585F0 = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_11;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_12;
  v4 = assetDataList->m_Items[0];
  if ( !v4 )
    goto LABEL_11;
  LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0);
  v6 = sub_1C3E60C(UnityEngine_Texture2D___TypeInfo, 2);
  v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.textureList, v6, v7, v8);
  textureList = v2->fields.textureList;
  this = (UIHorizontalImageM_o *)AssetData__GetObject_object__51228128(
                                   v4,
                                   LastName,
                                   (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
  if ( !textureList )
    goto LABEL_11;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_12;
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)textureList->m_Items, (int32_t)this, v10, v11);
  v12 = v2->fields.textureList;
  v13 = System_String__Concat_63636468(LastName, (System_String_o *)StringLiteral_16641/*"a"*/, 0);
  this = (UIHorizontalImageM_o *)AssetData__GetObject_object__51228128(
                                   v4,
                                   v13,
                                   (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184);
  if ( !v12 )
LABEL_11:
    sub_1C3E7C0(this, method);
  if ( LODWORD(v12->max_length) <= 1 )
LABEL_12:
    sub_1C3E7C8(this, method);
  v12->m_Items[1] = (UnityEngine_Texture2D_o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->m_Items[1], (int32_t)this, v14, v15);
  UIHorizontalImageM__SetTextureStatus(v2, v16);
}


void UIHorizontalImageM__SetTextureStatus(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  UIHorizontalImageRender__SetCharacterRender((UIHorizontalImageRender_o *)this, method);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C3E7C0(bodyFilter, v3);
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


bool UIHorizontalImageM__get_IsLoad(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}