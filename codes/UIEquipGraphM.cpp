void UIEquipGraphM___ctor(UIEquipGraphM_o *this, const MethodInfo *method)
{
  if ( (byte_4C447E7 & 1) == 0 )
  {
    sub_1C37058(&UIEquipGraphRender_TypeInfo);
    byte_4C447E7 = 1;
  }
  if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
  UIEquipGraphRender___ctor((UIEquipGraphRender_o *)this, method);
}


// attributes: thunk
void UIEquipGraphM__Destroy(UIEquipGraphM_o *this, const MethodInfo *method)
{
  UIEquipGraphM__ReleaseCharacter(this, method);
}


void UIEquipGraphM__EndLoadAsset(UIEquipGraphM_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_40542884; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int max_length; // w8
  struct AssetData_array *v8; // x20
  __int64 v9; // x9
  AssetData_array *assetDataList; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Action_o *callbackFunc; // x20

  if ( (byte_4C447E5 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C447E5 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_40542884 = AssetManager__getAssetStorage_40542884(loadNameList, 0);
    if ( AssetStorage_40542884 )
    {
      max_length = AssetStorage_40542884->max_length;
      v8 = AssetStorage_40542884;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v5, v6);
        this->fields.assetDataList = v8;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v8, v11, v12);
        UIEquipGraphM__SetTexture(this, v13);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40534920(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v14, v15);
          ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            callbackFunc->fields.method);
        }
      }
      else
      {
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1C372BC(AssetStorage_40542884);
          if ( !AssetStorage_40542884->m_Items[v9] )
            break;
          if ( (int)++v9 >= max_length )
            goto LABEL_12;
        }
      }
    }
  }
}


void UIEquipGraphM__ReleaseCharacter(UIEquipGraphM_o *this, const MethodInfo *method)
{
  AssetData_array *assetDataList; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_String_array *loadNameList; // x20
  CGThumbnailListItem_o *p_loadNameList; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C447E3 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C447E3 = 1;
  }
  UIEquipGraphRender__ReleaseCharacter((UIEquipGraphRender_o *)this, method);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534920(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v4, v5);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40543872(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C36FFC(p_loadNameList, 0, v8, v9);
  }
}


void UIEquipGraphM__SetCharacter(
        UIEquipGraphM_o *this,
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

  if ( (byte_4C447E4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_UIEquipGraphM_EndLoadAsset__);
    sub_1C37058(&UIEquipGraphRender_TypeInfo);
    byte_4C447E4 = 1;
  }
  if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
  AssetNameList = UIEquipGraphRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
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
          sub_1C37574(v18);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C36FFC(p_callbackFunc, (int32_t)v15, v16, v17);
      return;
    }
    v22 = this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40543872(v22, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_40532656(assetDataList, v12, 0) )
      {
        UIEquipGraphM__SetTextureStatus(this, v21);
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v24, v25, v26);
  }
  this->fields.loadNameList = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadNameList, (int32_t)v12, v9, v10);
  v28 = this->fields.loadNameList;
  v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_UIEquipGraphM_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40541524(v28, v29, 1, 0);
}


void UIEquipGraphM__SetDispOffset(UIEquipGraphM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C372B4(bodyFilter);
  v4.fields.y = this->fields.dispOffset.fields.y;
  v4.fields.x = this->fields.dispOffset.fields.x;
  v4.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0);
}


void UIEquipGraphM__SetTexture(UIEquipGraphM_o *this, const MethodInfo *method)
{
  UIEquipGraphM_o *v2; // x19
  struct AssetData_array *assetDataList; // x8
  AssetData_o *v4; // x20
  System_String_o *LastName; // x22
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Texture2D_array *textureList; // x21
  System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  v2 = this;
  if ( (byte_4C447E6 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&UnityEngine_Texture2D___TypeInfo);
    this = (UIEquipGraphM_o *)sub_1C37058(&StringLiteral_16631/*"a"*/);
    byte_4C447E6 = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_9;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_10;
  v4 = assetDataList->m_Items[0];
  if ( !v4
    || (LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0),
        v6 = sub_1C37100(UnityEngine_Texture2D___TypeInfo, 1),
        v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6,
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.textureList, v6, v7, v8),
        textureList = v2->fields.textureList,
        v10 = System_String__Concat_63561656(LastName, (System_String_o *)StringLiteral_16631/*"a"*/, 0),
        this = (UIEquipGraphM_o *)AssetData__GetObject_object__51154888(
                                    v4,
                                    v10,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200),
        !textureList) )
  {
LABEL_9:
    sub_1C372B4(this);
  }
  if ( !LODWORD(textureList->max_length) )
LABEL_10:
    sub_1C372BC(this);
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C36FFC((CGThumbnailListItem_o *)textureList->m_Items, (int32_t)this, v11, v12);
  UIEquipGraphM__SetTextureStatus(v2, v13);
}


void UIEquipGraphM__SetTextureStatus(UIEquipGraphM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  UIEquipGraphRender__SetCharacterRender((UIEquipGraphRender_o *)this, method);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C372B4(bodyFilter);
  v4.fields.y = this->fields.dispTop.fields.y;
  v4.fields.x = this->fields.dispTop.fields.x;
  v4.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v4, 0);
}


bool UIEquipGraphM__get_IsLoad(UIEquipGraphM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}