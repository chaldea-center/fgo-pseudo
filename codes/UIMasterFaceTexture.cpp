void UIMasterFaceTexture___ctor(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4C39275 & 1) == 0 )
  {
    sub_1C32C20(&UIMasterFaceRender_TypeInfo);
    byte_4C39275 = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIMasterFaceTexture__EndLoadAsset(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_40443500; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int max_length; // w8
  struct AssetData_array *v8; // x20
  __int64 v9; // x9
  AssetData_array *assetDataList; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Shader_o *v14; // x22
  UnityEngine_Material_o *v15; // x21
  UnityEngine_Texture_o *MaskTexture; // x0
  UIMasterFaceRender_o *v17; // x0
  struct UITexture_o *v18; // x20
  const MethodInfo *v19; // x2
  UnityEngine_Material_o *v20; // x20
  const MethodInfo *v21; // x2
  UITexture_o *v22; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v26; // w1
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Action_o *callbackFunc; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C39274 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C39274 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( !loadNameList )
    return;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_40443500 = AssetManager__getAssetStorage_40443500(loadNameList, 0);
  if ( !AssetStorage_40443500 )
    return;
  max_length = AssetStorage_40443500->max_length;
  v8 = AssetStorage_40443500;
  if ( max_length < 1 )
  {
LABEL_12:
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40435536(assetDataList, 0);
    }
    this->fields.assetDataList = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v8, v5, v6);
    this->fields.loadNameList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v11, v12);
    bodyTexture = this->fields.bodyTexture;
    v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
    v15 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v15, v14, 0);
    if ( bodyTexture )
    {
      v17 = (UIMasterFaceRender_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
                                      bodyTexture,
                                      v15,
                                      bodyTexture->klass->vtable._25_set_material.method);
      v18 = this->fields.bodyTexture;
      MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetBodyTexture(v17, this->fields.assetDataList, v19);
      if ( v18 )
      {
        ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v18->klass->vtable._27_set_mainTexture.methodPtr)(
          v18,
          MaskTexture,
          v18->klass->vtable._27_set_mainTexture.method);
        MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
        if ( MaskTexture )
        {
          v20 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&MaskTexture->klass[1]._2.cctor_finished)(
                                            MaskTexture,
                                            MaskTexture->klass[1]._2.cctor_thread);
          MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetMaskTexture(
                                                   (UIMasterFaceRender_o *)this,
                                                   this->fields.assetDataList,
                                                   v21);
          if ( v20 )
          {
            UnityEngine_Material__SetTexture(v20, (System_String_o *)StringLiteral_16267/*"_MaskTex"*/, MaskTexture, 0);
            v22 = this->fields.bodyTexture;
            BodyUvRect = UIMasterFaceRender__GetBodyUvRect((UIMasterFaceRender_o *)this, v23);
            if ( v22 )
            {
              UITexture__set_uvRect(v22, BodyUvRect, 0);
              BodySize = UIMasterFaceRender__GetBodySize((UIMasterFaceRender_o *)this, v24);
              MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
              if ( MaskTexture )
              {
                v26 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
                UIWidget__set_width((UIWidget_o *)MaskTexture, v26, 0);
                MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                if ( MaskTexture )
                {
                  v27 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
                  UIWidget__set_height((UIWidget_o *)MaskTexture, v27, 0);
                  MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                  if ( MaskTexture )
                  {
                    MaskTexture = (UnityEngine_Texture_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)MaskTexture,
                                                             0);
                    if ( MaskTexture )
                    {
                      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MaskTexture, 0) )
                        goto LABEL_35;
                      MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                      if ( MaskTexture )
                      {
                        MaskTexture = (UnityEngine_Texture_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)MaskTexture,
                                                                 0);
                        if ( MaskTexture )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MaskTexture, 1, 0);
LABEL_35:
                          callbackFunc = this->fields.callbackFunc;
                          if ( callbackFunc )
                          {
                            this->fields.callbackFunc = 0;
                            sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v28, v29);
                            ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
                              callbackFunc->fields.method_code,
                              callbackFunc->fields.method);
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C32E7C(MaskTexture);
  }
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1C32E84(AssetStorage_40443500);
    if ( !AssetStorage_40443500->m_Items[v9] )
      break;
    if ( (int)++v9 >= max_length )
      goto LABEL_12;
  }
}


// attributes: thunk
void UIMasterFaceTexture__OnDestroy(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  UIMasterFaceTexture__ReleaseCharacter(this, method);
}


void UIMasterFaceTexture__ReleaseCharacter(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bodyTexture; // x20
  long double v4; // q0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x21
  struct AssetData_array **p_assetDataList; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetData_array *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_Object_o *v18; // x20
  CGThumbnailListItem_o *p_loadNameList; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_array *klass; // x20

  if ( (byte_4C39272 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    byte_4C39272 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_49;
      v5 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( !v5 )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
    }
    v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v5 )
      goto LABEL_49;
    v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                   v5,
                                   v5->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_49;
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v5->klass[1].vtable._0_Equals.method)(
                                     v5,
                                     v5->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(v8, 0);
      v5 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v5 )
        goto LABEL_49;
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
LABEL_49:
    sub_1C32E7C(v5);
  }
LABEL_24:
  if ( this->fields.assetDataList )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C83334(v4);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334(v4);
    v11 = **(UnityEngine_Object_o ***)(v10 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_assetDataList = &this->fields.assetDataList;
    if ( UnityEngine_Object__op_Implicit(v11, 0) )
    {
      v15 = *p_assetDataList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40435536(v15, 0);
    }
    *p_assetDataList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v13, v14);
  }
  if ( this->fields.loadNameList )
  {
    v16 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C83334(v4);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C83334(v4);
    v18 = **(UnityEngine_Object_o ***)(v17 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( UnityEngine_Object__op_Implicit(v18, 0) )
    {
      klass = (System_String_array *)p_loadNameList->klass;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_40444488(klass, 0);
    }
    p_loadNameList->klass = 0;
    sub_1C32BC4(p_loadNameList, 0, v20, v21);
  }
}


void UIMasterFaceTexture__SetActive(UIMasterFaceTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C32E7C(bodyTexture);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


void UIMasterFaceTexture__SetCharacter(
        UIMasterFaceTexture_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callbackFunc,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  struct System_String_array *AssetNameList; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Delegate_o *v16; // x0
  struct System_Action_o **p_callbackFunc; // x21
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Delegate_o *v21; // x8
  System_Action_c *v22; // x1
  System_String_array *loadNameList; // x20
  System_Action_o *v24; // x21

  if ( (byte_4C39273 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UIMasterFaceRender_TypeInfo);
    sub_1C32C20(&Method_UIMasterFaceTexture_EndLoadAsset__);
    byte_4C39273 = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  AssetNameList = UIMasterFaceRender__GetAssetNameList(
                    dispType,
                    genderType,
                    equipId,
                    overWriteImageId,
                    (const MethodInfo *)callbackFunc);
  this->fields.loadNameList = AssetNameList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadNameList, (int32_t)AssetNameList, v14, v15);
  v16 = (System_Delegate_o *)this->fields.callbackFunc;
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
  p_callbackFunc = &this->fields.callbackFunc;
  v18 = System_Delegate__Combine(v16, (System_Delegate_o *)callbackFunc, 0);
  v21 = v18;
  if ( !v18 )
    goto LABEL_9;
  v22 = System_Action_TypeInfo;
  if ( (System_Action_c *)v18->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v18, (System_Action_c *)v18->klass != v22) )
  {
    sub_1C3313C(v18);
LABEL_9:
    *p_callbackFunc = (struct System_Action_o *)v21;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v21, v19, v20);
  loadNameList = this->fields.loadNameList;
  v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_UIMasterFaceTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40442140(loadNameList, v24, 1, 0);
}


void UIMasterFaceTexture__SetDepth(UIMasterFaceTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C32E7C(0);
  UIWidget__set_depth(bodyTexture, d, 0);
}


void UIMasterFaceTexture__SetTweenColor(UIMasterFaceTexture_o *this, UnityEngine_Color_o c, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIWidget_o *bodyTexture; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = c.fields.a;
  b = c.fields.b;
  g = c.fields.g;
  r = c.fields.r;
  UIWidget__set_color((UIWidget_o *)this, c, 0);
  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C32E7C(0);
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UIWidget__set_color(bodyTexture, v9, 0);
}


bool UIMasterFaceTexture__get_IsLoad(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}