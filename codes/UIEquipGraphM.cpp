void UIEquipGraphM___ctor(UIEquipGraphM_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8C52 & 1) == 0 )
  {
    sub_1C713B0(&UIEquipGraphRender_TypeInfo);
    byte_4CC8C52 = 1;
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
  AssetData_array *AssetStorage_40816244; // x0
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

  if ( (byte_4CC8C50 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC8C50 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_40816244 = AssetManager__getAssetStorage_40816244(loadNameList, 0);
    if ( AssetStorage_40816244 )
    {
      max_length = AssetStorage_40816244->max_length;
      v12 = AssetStorage_40816244;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.loadNameList, 0, v5, v6, v7, v8, v9, v10);
        this->fields.assetDataList = v12;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.assetDataList,
          (int32_t)v12,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        UIEquipGraphM__SetTexture(this, v21);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_40808280(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v22, v23, v24, v25, v26, v27);
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
            sub_1C71610(AssetStorage_40816244);
          if ( !AssetStorage_40816244->m_Items[v13] )
            break;
          if ( (int)++v13 >= max_length )
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

  if ( (byte_4CC8C4E & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC8C4E = 1;
  }
  UIEquipGraphRender__ReleaseCharacter((UIEquipGraphRender_o *)this, method);
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40808280(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.assetDataList, 0, v4, v5, v6, v7, v8, v9);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (GrandQuestFolderBoardItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40817232(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C71354(p_loadNameList, 0, v12, v13, v14, v15, v16, v17);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_array *loadNameList; // x23
  System_String_array *v16; // x21
  System_Delegate_o *v17; // x0
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Delegate_o *v26; // x8
  System_Action_c *v27; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v29; // x1
  System_String_array *v30; // x23
  struct System_Action_o **v31; // x23
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Action_c *v39; // x1
  System_String_array *v40; // x20
  System_Action_o *v41; // x21

  if ( (byte_4CC8C4F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_UIEquipGraphM_EndLoadAsset__);
    sub_1C713B0(&UIEquipGraphRender_TypeInfo);
    byte_4CC8C4F = 1;
  }
  if ( !UIEquipGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo);
  AssetNameList = UIEquipGraphRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
  loadNameList = this->fields.loadNameList;
  v16 = AssetNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorageList(loadNameList, v16, 0) )
    {
      if ( !callbackFunc )
        return;
      v17 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
      v19 = System_Delegate__Combine(v17, (System_Delegate_o *)callbackFunc, 0);
      v26 = v19;
      if ( v19 )
      {
        v27 = System_Action_TypeInfo;
        if ( (System_Action_c *)v19->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (GrandQuestFolderBoardItem_c *)v19, (System_Action_c *)v19->klass != v27) )
        {
LABEL_27:
          sub_1C719A4(v26);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C71354(p_callbackFunc, (int32_t)v19, v20, v21, v22, v23, v24, v25);
      return;
    }
    v30 = this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40817232(v30, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_40806016(assetDataList, v16, 0) )
      {
        UIEquipGraphM__SetTextureStatus(this, v29);
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
    v31 = &this->fields.callbackFunc;
    v32 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v26 = v32;
    if ( v32 )
    {
      v39 = System_Action_TypeInfo;
      if ( (System_Action_c *)v32->klass != System_Action_TypeInfo )
        goto LABEL_27;
      *v31 = (struct System_Action_o *)v32;
      if ( (System_Action_c *)v32->klass != v39 )
        goto LABEL_27;
    }
    else
    {
      *v31 = 0;
    }
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  }
  this->fields.loadNameList = v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.loadNameList, (int32_t)v16, v9, v10, v11, v12, v13, v14);
  v40 = this->fields.loadNameList;
  v41 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_UIEquipGraphM_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40814884(v40, v41, 1, 0);
}


void UIEquipGraphM__SetDispOffset(UIEquipGraphM_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C71608(bodyFilter, method);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UnityEngine_Texture2D_array *textureList; // x21
  System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x1

  v2 = this;
  if ( (byte_4CC8C51 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    sub_1C713B0(&UnityEngine_Texture2D___TypeInfo);
    this = (UIEquipGraphM_o *)sub_1C713B0(&StringLiteral_16632/*"a"*/);
    byte_4CC8C51 = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_9;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_10;
  v4 = assetDataList->m_Items[0];
  if ( !v4
    || (LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0),
        v6 = sub_1C71458(UnityEngine_Texture2D___TypeInfo, 1),
        v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.textureList, v6, v7, v8, v9, v10, v11, v12),
        textureList = v2->fields.textureList,
        v14 = System_String__Concat_64031724(LastName, (System_String_o *)StringLiteral_16632/*"a"*/, 0),
        this = (UIEquipGraphM_o *)AssetData__GetObject_object__51560868(
                                    v4,
                                    v14,
                                    (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000),
        !textureList) )
  {
LABEL_9:
    sub_1C71608(this, method);
  }
  if ( !LODWORD(textureList->max_length) )
LABEL_10:
    sub_1C71610(this);
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)textureList->m_Items, (int32_t)this, v15, v16, v17, v18, v19, v20);
  UIEquipGraphM__SetTextureStatus(v2, v21);
}


void UIEquipGraphM__SetTextureStatus(UIEquipGraphM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  UIEquipGraphRender__SetCharacterRender((UIEquipGraphRender_o *)this, method);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C71608(bodyFilter, v3);
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


bool UIEquipGraphM__get_IsLoad(UIEquipGraphM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}