void UIMasterFullFigureTexture___ctor(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E197 & 1) == 0 )
  {
    sub_1C94098(&UIMasterFullFigureRender_TypeInfo);
    byte_4D2E197 = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


// attributes: thunk
void UIMasterFullFigureTexture__Destroy(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  UIMasterFullFigureTexture__ReleaseCharacter(this, method);
}


void UIMasterFullFigureTexture__EndLoadAsset(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_41293480; // x0
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

  if ( (byte_4D2E195 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2E195 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage_41293480 = AssetManager__getAssetStorage_41293480(loadNameList, 0);
    if ( AssetStorage_41293480 )
    {
      max_length = AssetStorage_41293480->max_length;
      v12 = AssetStorage_41293480;
      if ( max_length < 1 )
      {
LABEL_12:
        assetDataList = this->fields.assetDataList;
        this->fields.loadNameList = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadNameList, 0, v5, v6, v7, v8, v9, v10);
        this->fields.assetDataList = v12;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.assetDataList,
          (int32_t)v12,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        UIMasterFullFigureTexture__SetTexture(this, v21);
        if ( assetDataList )
        {
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_41285516(assetDataList, 0);
        }
        callbackFunc = this->fields.callbackFunc;
        if ( callbackFunc )
        {
          this->fields.callbackFunc = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v22, v23, v24, v25, v26, v27);
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
            sub_1C942F8(AssetStorage_41293480);
          if ( !AssetStorage_41293480->m_Items[v13] )
            break;
          if ( (int)++v13 >= max_length )
            goto LABEL_12;
        }
      }
    }
  }
}


void UIMasterFullFigureTexture__ReleaseCharacter(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20
  AssetData_array *assetDataList; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_array *loadNameList; // x20
  GrandQuestFolderBoardItem_o *p_loadNameList; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2E193 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E193 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_33;
      v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !v5 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_33;
    v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                   v5,
                                   v5->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_33;
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                     v5,
                                     v5->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v8, 0);
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_33;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppMethodPointer))v5->klass[1].vtable._1_Finalize.method)(
        v5,
        0,
        v5->klass[1].vtable._2_GetHashCode.methodPtr);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v5 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v5->klass[1].vtable._3_ToString.method)(
        v5,
        0,
        v5->klass[2]._1.image);
      goto LABEL_24;
    }
LABEL_33:
    sub_1C942F0(v5, v4);
  }
LABEL_24:
  assetDataList = this->fields.assetDataList;
  if ( assetDataList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41285516(assetDataList, 0);
    this->fields.assetDataList = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetDataList, 0, v10, v11, v12, v13, v14, v15);
  }
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    p_loadNameList = (GrandQuestFolderBoardItem_o *)&this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_41294468(loadNameList, 0);
    p_loadNameList->klass = 0;
    sub_1C9403C(p_loadNameList, 0, v18, v19, v20, v21, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFullFigureTexture__SetActive(UIMasterFullFigureTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C942F0(bodyTexture, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFullFigureTexture__SetCharacter(
        UIMasterFullFigureTexture_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_array *AssetNameList; // x21
  const MethodInfo *v12; // x4
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_String_array *loadNameList; // x23
  System_Delegate_o *v20; // x0
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Delegate_o *v29; // x8
  System_Action_c *v30; // x1
  AssetData_array *assetDataList; // x23
  const MethodInfo *v32; // x1
  System_String_array *v33; // x23
  struct System_Action_o **v34; // x23
  System_Delegate_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Action_c *v42; // x1
  System_String_array *v43; // x20
  System_Action_o *v44; // x21

  if ( (byte_4D2E194 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UIMasterFullFigureRender_TypeInfo);
    sub_1C94098(&Method_UIMasterFullFigureTexture_EndLoadAsset__);
    byte_4D2E194 = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  AssetNameList = UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, *(const MethodInfo **)&genderType);
  UIMasterFullFigureRender__SetCharacter((UIMasterFullFigureRender_o *)this, dispType, genderType, equipId, v12);
  loadNameList = this->fields.loadNameList;
  if ( loadNameList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__compAssetStorageList(loadNameList, AssetNameList, 0) )
    {
      if ( !callbackFunc )
        return;
      v20 = (System_Delegate_o *)this->fields.callbackFunc;
      p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
      v22 = System_Delegate__Combine(v20, (System_Delegate_o *)callbackFunc, 0);
      v29 = v22;
      if ( v22 )
      {
        v30 = System_Action_TypeInfo;
        if ( (System_Action_c *)v22->klass != System_Action_TypeInfo
          || (p_callbackFunc->klass = (GrandQuestFolderBoardItem_c *)v22, (System_Action_c *)v22->klass != v30) )
        {
LABEL_27:
          sub_1C9468C(v29);
          return;
        }
      }
      else
      {
        p_callbackFunc->klass = 0;
      }
      sub_1C9403C(p_callbackFunc, (int32_t)v22, v23, v24, v25, v26, v27, v28);
      return;
    }
    v33 = this->fields.loadNameList;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_41294468(v33, 0);
  }
  else
  {
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__compAssetStorageList_41283252(assetDataList, AssetNameList, 0) )
      {
        UIMasterFullFigureTexture__SetTextureStatus(this, v32);
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
    v34 = &this->fields.callbackFunc;
    v35 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
    v29 = v35;
    if ( v35 )
    {
      v42 = System_Action_TypeInfo;
      if ( (System_Action_c *)v35->klass != System_Action_TypeInfo )
        goto LABEL_27;
      *v34 = (struct System_Action_o *)v35;
      if ( (System_Action_c *)v35->klass != v42 )
        goto LABEL_27;
    }
    else
    {
      *v34 = 0;
    }
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)v35, v36, v37, v38, v39, v40, v41);
  }
  this->fields.loadNameList = AssetNameList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadNameList,
    (int32_t)AssetNameList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v43 = this->fields.loadNameList;
  v44 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_UIMasterFullFigureTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41292120(v43, v44, 1, 0);
}


void UIMasterFullFigureTexture__SetDepth(UIMasterFullFigureTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C942F0(0, d);
  UIWidget__set_depth(bodyTexture, d, 0);
}


void UIMasterFullFigureTexture__SetTexture(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Shader_o *v4; // x22
  UnityEngine_Material_o *v5; // x21
  UnityEngine_Texture_o *BodyAlphaTexture; // x0
  __int64 v7; // x1
  UIMasterFullFigureRender_o *v8; // x0
  struct UITexture_o *v9; // x20
  const MethodInfo *v10; // x2
  UIMasterFullFigureRender_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1

  if ( (byte_4D2E196 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&StringLiteral_4943/*"Custom/SpriteWithMask"*/);
    sub_1C94098(&StringLiteral_16326/*"_MaskTex"*/);
    byte_4D2E196 = 1;
  }
  bodyTexture = this->fields.bodyTexture;
  v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4943/*"Custom/SpriteWithMask"*/, 0);
  v5 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v5, v4, 0);
  if ( !bodyTexture
    || (v8 = (UIMasterFullFigureRender_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
                                             bodyTexture,
                                             v5,
                                             bodyTexture->klass->vtable._25_set_material.method),
        v9 = this->fields.bodyTexture,
        BodyAlphaTexture = (UnityEngine_Texture_o *)UIMasterFullFigureRender__GetBodyTexture(
                                                      v8,
                                                      this->fields.assetDataList,
                                                      v10),
        !v9)
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v9->klass->vtable._27_set_mainTexture.methodPtr)(
          v9,
          BodyAlphaTexture,
          v9->klass->vtable._27_set_mainTexture.method),
        (BodyAlphaTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture) == 0)
    || (v11 = (UIMasterFullFigureRender_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&BodyAlphaTexture->klass[1]._2.cctor_finished)(
                                              BodyAlphaTexture,
                                              BodyAlphaTexture->klass[1]._2.cctor_thread),
        BodyAlphaTexture = (UnityEngine_Texture_o *)UIMasterFullFigureRender__GetBodyAlphaTexture(
                                                      v11,
                                                      this->fields.assetDataList,
                                                      v12),
        !v11) )
  {
    sub_1C942F0(BodyAlphaTexture, v7);
  }
  UnityEngine_Material__SetTexture(
    (UnityEngine_Material_o *)v11,
    (System_String_o *)StringLiteral_16326/*"_MaskTex"*/,
    BodyAlphaTexture,
    0);
  UIMasterFullFigureTexture__SetTextureStatus(this, v13);
}


void UIMasterFullFigureTexture__SetTextureStatus(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  UITexture_o *bodyTexture; // x20
  UIWidget_o *transform; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v8; // w1
  int32_t v9; // w1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  bodyTexture = this->fields.bodyTexture;
  BodyUvRect = UIMasterFullFigureRender__GetBodyUvRect((UIMasterFullFigureRender_o *)this, method);
  if ( !bodyTexture )
    goto LABEL_18;
  UITexture__set_uvRect(bodyTexture, BodyUvRect, 0);
  BodySize = UIMasterFullFigureRender__GetBodySize((UIMasterFullFigureRender_o *)this, v6);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  v8 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
  UIWidget__set_width(transform, v8, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  v9 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
  UIWidget__set_height(transform, v9, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  transform = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_18;
  v10.fields.y = this->fields.dispOffset.fields.y;
  v10.fields.x = this->fields.dispOffset.fields.x;
  v10.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0);
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform )
    goto LABEL_18;
  transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
    return;
  transform = (UIWidget_o *)this->fields.bodyTexture;
  if ( !transform
    || (transform = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
  {
LABEL_18:
    sub_1C942F0(transform, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
}


void UIMasterFullFigureTexture__SetTweenColor(
        UIMasterFullFigureTexture_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C942F0(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0);
}


bool UIMasterFullFigureTexture__get_IsLoad(UIMasterFullFigureTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}