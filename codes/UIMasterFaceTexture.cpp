void UIMasterFaceTexture___ctor(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4C5863A & 1) == 0 )
  {
    sub_1C3E564(&UIMasterFaceRender_TypeInfo);
    byte_4C5863A = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIMasterFaceTexture__EndLoadAsset(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_40589144; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int max_length; // w8
  struct AssetData_array *v9; // x20
  __int64 v10; // x9
  AssetData_array *assetDataList; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x21
  UnityEngine_Texture_o *MaskTexture; // x0
  __int64 v18; // x1
  UIMasterFaceRender_o *v19; // x0
  struct UITexture_o *v20; // x20
  const MethodInfo *v21; // x2
  UnityEngine_Material_o *v22; // x20
  const MethodInfo *v23; // x2
  UITexture_o *v24; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v28; // w1
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Action_o *callbackFunc; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C58639 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C3E564(&StringLiteral_16279/*"_MaskTex"*/);
    byte_4C58639 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( !loadNameList )
    return;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_40589144 = AssetManager__getAssetStorage_40589144(loadNameList, 0);
  if ( !AssetStorage_40589144 )
    return;
  max_length = AssetStorage_40589144->max_length;
  v9 = AssetStorage_40589144;
  if ( max_length < 1 )
  {
LABEL_12:
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40581180(assetDataList, 0);
    }
    this->fields.assetDataList = v9;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetDataList, (int32_t)v9, v6, v7);
    this->fields.loadNameList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadNameList, 0, v12, v13);
    bodyTexture = this->fields.bodyTexture;
    v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
    v16 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0);
    if ( bodyTexture )
    {
      v19 = (UIMasterFaceRender_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
                                      bodyTexture,
                                      v16,
                                      bodyTexture->klass->vtable._25_set_material.method);
      v20 = this->fields.bodyTexture;
      MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetBodyTexture(v19, this->fields.assetDataList, v21);
      if ( v20 )
      {
        ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v20->klass->vtable._27_set_mainTexture.methodPtr)(
          v20,
          MaskTexture,
          v20->klass->vtable._27_set_mainTexture.method);
        MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
        if ( MaskTexture )
        {
          v22 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&MaskTexture->klass[1]._2.cctor_finished)(
                                            MaskTexture,
                                            MaskTexture->klass[1]._2.cctor_thread);
          MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetMaskTexture(
                                                   (UIMasterFaceRender_o *)this,
                                                   this->fields.assetDataList,
                                                   v23);
          if ( v22 )
          {
            UnityEngine_Material__SetTexture(v22, (System_String_o *)StringLiteral_16279/*"_MaskTex"*/, MaskTexture, 0);
            v24 = this->fields.bodyTexture;
            BodyUvRect = UIMasterFaceRender__GetBodyUvRect((UIMasterFaceRender_o *)this, v25);
            if ( v24 )
            {
              UITexture__set_uvRect(v24, BodyUvRect, 0);
              BodySize = UIMasterFaceRender__GetBodySize((UIMasterFaceRender_o *)this, v26);
              MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
              if ( MaskTexture )
              {
                v28 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
                UIWidget__set_width((UIWidget_o *)MaskTexture, v28, 0);
                MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                if ( MaskTexture )
                {
                  v29 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
                  UIWidget__set_height((UIWidget_o *)MaskTexture, v29, 0);
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
                            sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v30, v31);
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
    sub_1C3E7C0(MaskTexture, v18);
  }
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

  if ( (byte_4C58637 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    byte_4C58637 = 1;
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
      UnityEngine_Object__Destroy_71341564(v9, 0);
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
    sub_1C3E7C0(v6, v4);
  }
LABEL_24:
  if ( this->fields.assetDataList )
  {
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8EC78(v5);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8EC78(v5);
    v12 = **(UnityEngine_Object_o ***)(v11 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_assetDataList = &this->fields.assetDataList;
    if ( UnityEngine_Object__op_Implicit(v12, 0) )
    {
      v16 = *p_assetDataList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40581180(v16, 0);
    }
    *p_assetDataList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetDataList, 0, v14, v15);
  }
  if ( this->fields.loadNameList )
  {
    v17 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C8EC78(v5);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C8EC78(v5);
    v19 = **(UnityEngine_Object_o ***)(v18 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_loadNameList = (CGThumbnailListItem_o *)&this->fields.loadNameList;
    if ( UnityEngine_Object__op_Implicit(v19, 0) )
    {
      klass = (System_String_array *)p_loadNameList->klass;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_40590132(klass, 0);
    }
    p_loadNameList->klass = 0;
    sub_1C3E508(p_loadNameList, 0, v21, v22);
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
    sub_1C3E7C0(bodyTexture, isActive);
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

  if ( (byte_4C58638 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&UIMasterFaceRender_TypeInfo);
    sub_1C3E564(&Method_UIMasterFaceTexture_EndLoadAsset__);
    byte_4C58638 = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadNameList, (int32_t)AssetNameList, v14, v15);
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
    sub_1C3EA80(v18);
LABEL_9:
    *p_callbackFunc = (struct System_Action_o *)v21;
  }
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v21, v19, v20);
  loadNameList = this->fields.loadNameList;
  v24 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_UIMasterFaceTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40587784(loadNameList, v24, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFaceTexture__SetDepth(UIMasterFaceTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C3E7C0(0, *(_QWORD *)&d);
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
    sub_1C3E7C0(0, v8);
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