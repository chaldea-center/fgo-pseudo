void UIHorizontalImageM___ctor(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFE9D & 1) == 0 )
  {
    sub_1C7BAE8(&UIHorizontalImageRender_TypeInfo);
    byte_4CEFE9D = 1;
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

  if ( (byte_4CEFE99 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CEFE99 = 1;
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
        UIHorizontalImageM__SetTexture(this, v21);
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


UnityEngine_Transform_o *UIHorizontalImageM__GetBody(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyFilter; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CEFE9C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFE9C = 1;
  }
  bodyFilter = (UnityEngine_Object_o *)this->fields.bodyFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bodyFilter, 0, 0);
  if ( v4 )
  {
    this = (UIHorizontalImageM_o *)this->fields.bodyFilter;
    if ( !this )
      sub_1C7BD40(v4, v5);
  }
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Texture_o *UIHorizontalImageM__GetBodySubTexture(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  UnityEngine_Renderer_o *bodyRenderer; // x0

  if ( (byte_4CEFE9B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16419/*"_SubTex"*/);
    byte_4CEFE9B = 1;
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


void UIHorizontalImageM__ReleaseCharacter(UIHorizontalImageM_o *this, const MethodInfo *method)
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

  if ( (byte_4CEFE97 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CEFE97 = 1;
  }
  UIHorizontalImageRender__ReleaseCharacter((UIHorizontalImageRender_o *)this, method);
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


void UIHorizontalImageM__SetCharacter(
        UIHorizontalImageM_o *this,
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

  if ( (byte_4CEFE98 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_UIHorizontalImageM_EndLoadAsset__);
    sub_1C7BAE8(&UIHorizontalImageRender_TypeInfo);
    byte_4CEFE98 = 1;
  }
  if ( !UIHorizontalImageRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIHorizontalImageRender_TypeInfo);
  AssetNameList = UIHorizontalImageRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
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
          sub_1C7C0DC(v26);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C7BA8C(p_callbackFunc, (int32_t)v19, v20, v21, v22, v23, v24, v25);
      return;
    }
    v30 = this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_41105432(v30, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_41094216(assetDataList, v16, 0) )
      {
        UIHorizontalImageM__SetTextureStatus(this, v29);
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
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  }
  this->fields.loadNameList = v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadNameList, (int32_t)v16, v9, v10, v11, v12, v13, v14);
  v40 = this->fields.loadNameList;
  v41 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_UIHorizontalImageM_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41103084(v40, v41, 1, 0);
}


void UIHorizontalImageM__SetDispOffset(UIHorizontalImageM_o *this, const MethodInfo *method)
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


void UIHorizontalImageM__SetTexture(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  UIHorizontalImageM_o *v2; // x19
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
  struct UnityEngine_Texture2D_array *textureList; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UnityEngine_Texture2D_array *v20; // x22
  System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1

  v2 = this;
  if ( (byte_4CEFE9A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    sub_1C7BAE8(&UnityEngine_Texture2D___TypeInfo);
    this = (UIHorizontalImageM_o *)sub_1C7BAE8(&StringLiteral_16692/*"a"*/);
    byte_4CEFE9A = 1;
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
  v6 = sub_1C7BB90(UnityEngine_Texture2D___TypeInfo, 2);
  v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.textureList, v6, v7, v8, v9, v10, v11, v12);
  textureList = v2->fields.textureList;
  this = (UIHorizontalImageM_o *)AssetData__GetObject_object__51713432(
                                   v4,
                                   LastName,
                                   (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  if ( !textureList )
    goto LABEL_11;
  if ( !LODWORD(textureList->max_length) )
    goto LABEL_12;
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)textureList->m_Items, (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = v2->fields.textureList;
  v21 = System_String__Concat_64176912(LastName, (System_String_o *)StringLiteral_16692/*"a"*/, 0);
  this = (UIHorizontalImageM_o *)AssetData__GetObject_object__51713432(
                                   v4,
                                   v21,
                                   (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  if ( !v20 )
LABEL_11:
    sub_1C7BD40(this, method);
  if ( LODWORD(v20->max_length) <= 1 )
LABEL_12:
    sub_1C7BD48(this);
  v20->m_Items[1] = (UnityEngine_Texture2D_o *)this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v20->m_Items[1], (int32_t)this, v22, v23, v24, v25, v26, v27);
  UIHorizontalImageM__SetTextureStatus(v2, v28);
}


void UIHorizontalImageM__SetTextureStatus(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bodyFilter; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  UIHorizontalImageRender__SetCharacterRender((UIHorizontalImageRender_o *)this, method);
  bodyFilter = (UnityEngine_Component_o *)this->fields.bodyFilter;
  if ( !bodyFilter || (bodyFilter = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bodyFilter, 0)) == 0 )
    sub_1C7BD40(bodyFilter, v3);
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


bool UIHorizontalImageM__get_IsLoad(UIHorizontalImageM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}