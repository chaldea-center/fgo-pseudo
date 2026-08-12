void UIEquipGraphM___ctor(UIEquipGraphM_o *this, const MethodInfo *method)
{
  if ( (byte_59720F4 & 1) == 0 )
  {
    sub_2213A60(&UIEquipGraphRender_TypeInfo);
    byte_59720F4 = 1;
  }
  if ( !*(&UIEquipGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo, method);
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

  if ( (byte_59720F2 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_59720F2 = 1;
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
        UIEquipGraphM__SetTexture(this, v21);
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


void UIEquipGraphM__ReleaseCharacter(UIEquipGraphM_o *this, const MethodInfo *method)
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

  if ( (byte_59720F0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_59720F0 = 1;
  }
  UIEquipGraphRender__ReleaseCharacter((UIEquipGraphRender_o *)this, method);
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


void UIEquipGraphM__SetCharacter(
        UIEquipGraphM_o *this,
        System_String_o *imageName,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_array *AssetNameList; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_array *loadNameList; // x23
  System_String_array *v17; // x21
  __int64 v18; // x1
  System_Delegate_o *v19; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Delegate_o *v28; // x8
  System_Action_c *v29; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v31; // x1
  System_String_array *v32; // x23
  struct System_Action_o **v33; // x23
  System_Delegate_o *v34; // x0
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_array *v40; // x20
  System_Action_o *v41; // x21
  __int64 v42; // x1

  if ( (byte_59720F1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UIEquipGraphM_EndLoadAsset__);
    sub_2213A60(&UIEquipGraphRender_TypeInfo);
    byte_59720F1 = 1;
  }
  if ( !*(&UIEquipGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIEquipGraphRender_TypeInfo, imageName);
  AssetNameList = UIEquipGraphRender__GetAssetNameList(imageName, (const MethodInfo *)imageName);
  loadNameList = this->fields.loadNameList;
  v17 = AssetNameList;
  if ( loadNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
    if ( AssetManager__compAssetStorageList(loadNameList, v17, 0) )
    {
      if ( !callbackFunc )
        return;
      v19 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
      v21 = System_Delegate__Combine(v19, (System_Delegate_o *)callbackFunc, 0);
      v28 = v21;
      if ( v21 )
      {
        v29 = System_Action_TypeInfo;
        if ( (System_Action_c *)v21->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (MissionNaviTransitionBoardItem_c *)v21, (System_Action_c *)v21->klass != v29) )
        {
LABEL_27:
          sub_221405C(v28, v29, v22);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_2213A04(p_callbackFunc, (int32_t)v21, v22, v23, v24, v25, v26, v27);
      return;
    }
    v32 = this->fields.loadNameList;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v18);
    AssetManager__releaseAssetStorage_47506132(v32, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
      if ( AssetManager__compAssetStorageList_47494836(assetDataList, v17, 0) )
      {
        UIEquipGraphM__SetTextureStatus(this, v31);
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
    v33 = &this->fields.callbackFunc;
    v34 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v28 = v34;
    if ( v34 )
    {
      v29 = System_Action_TypeInfo;
      if ( (System_Action_c *)v34->klass != System_Action_TypeInfo )
        goto LABEL_27;
      *v33 = (struct System_Action_o *)v34;
      if ( (System_Action_c *)v34->klass != v29 )
        goto LABEL_27;
    }
    else
    {
      *v33 = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)v34,
      v22,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  this->fields.loadNameList = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList,
    (int32_t)v17,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v40 = this->fields.loadNameList;
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_UIEquipGraphM_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v42);
  AssetManager__loadAssetStorage_47503780(v40, v41, 1, 0);
}


void UIEquipGraphM__SetDispOffset(UIEquipGraphM_o *this, const MethodInfo *method)
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


void UIEquipGraphM__SetTexture(UIEquipGraphM_o *this, const MethodInfo *method)
{
  UIEquipGraphM_o *v2; // x19
  struct AssetData_array *assetDataList; // x8
  AssetData_o *v4; // x20
  System_String_o *LastName; // x22
  __int64 v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UnityEngine_Texture2D_array *textureList; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1

  v2 = this;
  if ( (byte_59720F3 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Texture2D___TypeInfo);
    this = (UIEquipGraphM_o *)sub_2213A60(&StringLiteral_17306/*"a"*/);
    byte_59720F3 = 1;
  }
  assetDataList = v2->fields.assetDataList;
  if ( !assetDataList )
    goto LABEL_9;
  if ( !LODWORD(assetDataList->max_length) )
    goto LABEL_10;
  v4 = assetDataList->m_Items[0];
  if ( !v4
    || (LastName = AssetData__get_LastName(assetDataList->m_Items[0], 0),
        v6 = sub_2213B20(UnityEngine_Texture2D___TypeInfo, 1),
        v2->fields.textureList = (struct UnityEngine_Texture2D_array *)v6,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.textureList, v6, v7, v8, v9, v10, v11, v12),
        textureList = v2->fields.textureList,
        v14 = System_String__Concat_75651716(LastName, (System_String_o *)StringLiteral_17306/*"a"*/, 0),
        this = (UIEquipGraphM_o *)AssetData__GetObject_object__58532980(
                                    v4,
                                    v14,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360),
        !textureList) )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  if ( !LODWORD(textureList->max_length) )
LABEL_10:
    sub_2213CE4(this);
  textureList->m_Items[0] = (UnityEngine_Texture2D_o *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)textureList->m_Items, (int32_t)this, v15, v16, v17, v18, v19, v20);
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
    sub_2213CDC(bodyFilter, v3);
  v5.fields.y = this->fields.dispTop.fields.y;
  v5.fields.x = this->fields.dispTop.fields.x;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bodyFilter, v5, 0);
}


bool UIEquipGraphM__get_IsLoad(UIEquipGraphM_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}