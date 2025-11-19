void UIMasterFaceTexture___ctor(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7BB1 & 1) == 0 )
  {
    sub_1C6BA08(&UIMasterFaceRender_TypeInfo);
    byte_4CB7BB1 = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIMasterFaceTexture__EndLoadAsset(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_40773704; // x0
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
  __int64 v17; // x1
  UIMasterFaceRender_o *v18; // x0
  struct UITexture_o *v19; // x20
  const MethodInfo *v20; // x2
  UnityEngine_Material_o *v21; // x20
  const MethodInfo *v22; // x2
  UITexture_o *v23; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v27; // w1
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Action_o *callbackFunc; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB7BB0 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&StringLiteral_4930/*"Custom/SpriteWithMask"*/);
    sub_1C6BA08(&StringLiteral_16263/*"_MaskTex"*/);
    byte_4CB7BB0 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( !loadNameList )
    return;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_40773704 = AssetManager__getAssetStorage_40773704(loadNameList, 0);
  if ( !AssetStorage_40773704 )
    return;
  max_length = AssetStorage_40773704->max_length;
  v8 = AssetStorage_40773704;
  if ( max_length < 1 )
  {
LABEL_12:
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40765740(assetDataList, 0);
    }
    this->fields.assetDataList = v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v8, v5, v6);
    this->fields.loadNameList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v11, v12);
    bodyTexture = this->fields.bodyTexture;
    v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4930/*"Custom/SpriteWithMask"*/, 0);
    v15 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v15, v14, 0);
    if ( bodyTexture )
    {
      v18 = (UIMasterFaceRender_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
                                      bodyTexture,
                                      v15,
                                      bodyTexture->klass->vtable._25_set_material.method);
      v19 = this->fields.bodyTexture;
      MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetBodyTexture(v18, this->fields.assetDataList, v20);
      if ( v19 )
      {
        ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v19->klass->vtable._27_set_mainTexture.methodPtr)(
          v19,
          MaskTexture,
          v19->klass->vtable._27_set_mainTexture.method);
        MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
        if ( MaskTexture )
        {
          v21 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&MaskTexture->klass[1]._2.cctor_finished)(
                                            MaskTexture,
                                            MaskTexture->klass[1]._2.cctor_thread);
          MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetMaskTexture(
                                                   (UIMasterFaceRender_o *)this,
                                                   this->fields.assetDataList,
                                                   v22);
          if ( v21 )
          {
            UnityEngine_Material__SetTexture(v21, (System_String_o *)StringLiteral_16263/*"_MaskTex"*/, MaskTexture, 0);
            v23 = this->fields.bodyTexture;
            BodyUvRect = UIMasterFaceRender__GetBodyUvRect((UIMasterFaceRender_o *)this, v24);
            if ( v23 )
            {
              UITexture__set_uvRect(v23, BodyUvRect, 0);
              BodySize = UIMasterFaceRender__GetBodySize((UIMasterFaceRender_o *)this, v25);
              MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
              if ( MaskTexture )
              {
                v27 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
                UIWidget__set_width((UIWidget_o *)MaskTexture, v27, 0);
                MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                if ( MaskTexture )
                {
                  v28 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
                  UIWidget__set_height((UIWidget_o *)MaskTexture, v28, 0);
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
                            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v29, v30);
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
    sub_1C6BC60(MaskTexture, v17);
  }
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1C6BC68(AssetStorage_40773704);
    if ( !AssetStorage_40773704->m_Items[v9] )
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
  __int64 v4; // x1
  long double v5; // q0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x0
  UnityEngine_Object_o *v12; // x21
  struct AssetData_array **p_assetDataList; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  AssetData_array *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x20
  CGThumbnailListItem_o *p_loadNameList; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_array *klass; // x20

  if ( (byte_4CB7BAE & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    byte_4CB7BAE = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v6 )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v6 )
        goto LABEL_49;
      v6 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v6, 0);
      if ( !v6 )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0);
    }
    v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v6 )
      goto LABEL_49;
    v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v6->klass[1].vtable._0_Equals.method)(
                                   v6,
                                   v6->klass[1].vtable._1_Finalize.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v6 )
        goto LABEL_49;
      v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v6->klass[1].vtable._0_Equals.method)(
                                     v6,
                                     v6->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v9, 0);
      v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v6 )
        goto LABEL_49;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppMethodPointer))v6->klass[1].vtable._1_Finalize.method)(
        v6,
        0,
        v6->klass[1].vtable._2_GetHashCode.methodPtr);
    }
    v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( v6 )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v6->klass[1].vtable._3_ToString.method)(
        v6,
        0,
        v6->klass[2]._1.image);
      goto LABEL_24;
    }
LABEL_49:
    sub_1C6BC60(v6, v4);
  }
LABEL_24:
  if ( this->fields.assetDataList )
  {
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C41A9C(v5);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C41A9C(v5);
    v12 = **(UnityEngine_Object_o ***)(v11 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_assetDataList = &this->fields.assetDataList;
    if ( UnityEngine_Object__op_Implicit(v12, 0) )
    {
      v16 = *p_assetDataList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40765740(v16, 0);
    }
    *p_assetDataList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v14, v15);
  }
  if ( this->fields.loadNameList )
  {
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C41A9C(v5);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C41A9C(v5);
    v19 = **(UnityEngine_Object_o ***)(v18 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( UnityEngine_Object__op_Implicit(v19, 0) )
    {
      klass = (System_String_array *)p_loadNameList->klass;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_40774692(klass, 0);
    }
    p_loadNameList->klass = 0;
    sub_1C6B9AC(p_loadNameList, 0, v21, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFaceTexture__SetActive(UIMasterFaceTexture_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *bodyTexture; // x0

  bodyTexture = (UnityEngine_Component_o *)this->fields.bodyTexture;
  if ( !bodyTexture
    || (bodyTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bodyTexture, 0)) == 0 )
  {
    sub_1C6BC60(bodyTexture, isActive);
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

  if ( (byte_4CB7BAF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UIMasterFaceRender_TypeInfo);
    sub_1C6BA08(&Method_UIMasterFaceTexture_EndLoadAsset__);
    byte_4CB7BAF = 1;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadNameList, (int32_t)AssetNameList, v14, v15);
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
    sub_1C6BFFC(v18);
LABEL_9:
    *p_callbackFunc = (struct System_Action_o *)v21;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v21, v19, v20);
  loadNameList = this->fields.loadNameList;
  v24 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_UIMasterFaceTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40772344(loadNameList, v24, 1, 0);
}


void UIMasterFaceTexture__SetDepth(UIMasterFaceTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C6BC60(0, d);
  UIWidget__set_depth(bodyTexture, d, 0);
}


void UIMasterFaceTexture__SetTweenColor(UIMasterFaceTexture_o *this, UnityEngine_Color_o c, const MethodInfo *method)
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
    sub_1C6BC60(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(bodyTexture, v10, 0);
}


bool UIMasterFaceTexture__get_IsLoad(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  return this->fields.loadNameList != 0;
}