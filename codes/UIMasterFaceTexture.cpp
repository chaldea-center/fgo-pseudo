void UIMasterFaceTexture___ctor(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  if ( (byte_5939FA8 & 1) == 0 )
  {
    sub_21FFC50(&UIMasterFaceRender_TypeInfo);
    byte_5939FA8 = 1;
  }
  if ( !*(&UIMasterFaceRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo, method);
  UIMasterFaceRender___ctor((UIMasterFaceRender_o *)this, 0);
}


void UIMasterFaceTexture__EndLoadAsset(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  System_String_array *loadNameList; // x20
  AssetData_array *AssetStorage_47473732; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int max_length; // w8
  struct AssetData_array *v13; // x20
  AssetData_o **m_Items; // x9
  AssetData_array *assetDataList; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Shader_o *v23; // x22
  UnityEngine_Material_o *v24; // x21
  UnityEngine_Texture_o *MaskTexture; // x0
  __int64 v26; // x1
  struct UITexture_o *v27; // x20
  UnityEngine_Material_o *v28; // x20
  UITexture_o *v29; // x20
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v31; // w1
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Action_o *callbackFunc; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5939FA7 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&StringLiteral_5116/*"Custom/SpriteWithMask"*/);
    sub_21FFC50(&StringLiteral_16884/*"_MaskTex"*/);
    byte_5939FA7 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( !loadNameList )
    return;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage_47473732 = AssetManager__getAssetStorage_47473732(loadNameList, 0);
  if ( !AssetStorage_47473732 )
    return;
  max_length = AssetStorage_47473732->max_length;
  v13 = AssetStorage_47473732;
  if ( max_length < 1 )
  {
LABEL_11:
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
      AssetManager__releaseAsset_47465764(assetDataList, 0);
    }
    this->fields.assetDataList = v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList, (int32_t)v13, v6, v7, v8, v9, v10, v11);
    this->fields.loadNameList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList, 0, v16, v17, v18, v19, v20, v21);
    bodyTexture = this->fields.bodyTexture;
    v23 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5116/*"Custom/SpriteWithMask"*/, 0);
    v24 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v24, v23, 0);
    if ( bodyTexture )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
        bodyTexture,
        v24,
        bodyTexture->klass->vtable._25_set_material.method);
      v27 = this->fields.bodyTexture;
      MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetBodyTexture(
                                               (UIMasterFaceRender_o *)this,
                                               this->fields.assetDataList,
                                               0);
      if ( v27 )
      {
        ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v27->klass->vtable._27_set_mainTexture.methodPtr)(
          v27,
          MaskTexture,
          v27->klass->vtable._27_set_mainTexture.method);
        MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
        if ( MaskTexture )
        {
          v28 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&MaskTexture->klass[1]._2.cctor_finished)(
                                            MaskTexture,
                                            MaskTexture->klass[1]._2.cctor_thread);
          MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetMaskTexture(
                                                   (UIMasterFaceRender_o *)this,
                                                   this->fields.assetDataList,
                                                   0);
          if ( v28 )
          {
            UnityEngine_Material__SetTexture(v28, (System_String_o *)StringLiteral_16884/*"_MaskTex"*/, MaskTexture, 0);
            v29 = this->fields.bodyTexture;
            BodyUvRect = UIMasterFaceRender__GetBodyUvRect((UIMasterFaceRender_o *)this, 0);
            if ( v29 )
            {
              UITexture__set_uvRect(v29, BodyUvRect, 0);
              BodySize = UIMasterFaceRender__GetBodySize((UIMasterFaceRender_o *)this, 0);
              MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
              if ( MaskTexture )
              {
                v31 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
                UIWidget__set_width((UIWidget_o *)MaskTexture, v31, 0);
                MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                if ( MaskTexture )
                {
                  v32 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
                  UIWidget__set_height((UIWidget_o *)MaskTexture, v32, 0);
                  MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                  if ( MaskTexture )
                  {
                    MaskTexture = (UnityEngine_Texture_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)MaskTexture,
                                                             0);
                    if ( MaskTexture )
                    {
                      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MaskTexture, 0) )
                        goto LABEL_34;
                      MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                      if ( MaskTexture )
                      {
                        MaskTexture = (UnityEngine_Texture_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)MaskTexture,
                                                                 0);
                        if ( MaskTexture )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MaskTexture, 1, 0);
LABEL_34:
                          callbackFunc = this->fields.callbackFunc;
                          if ( callbackFunc )
                          {
                            this->fields.callbackFunc = 0;
                            sub_21FFBF4(
                              (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
                              0,
                              v33,
                              v34,
                              v35,
                              v36,
                              v37,
                              v38);
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
    sub_21FFECC(MaskTexture, v26);
  }
  m_Items = AssetStorage_47473732->m_Items;
  while ( *m_Items )
  {
    --max_length;
    ++m_Items;
    if ( !max_length )
      goto LABEL_11;
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
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x0
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  AssetData_array *assetDataList; // x20
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_Object_o *v26; // x20
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_array *loadNameList; // x20

  if ( (byte_5939FA5 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    byte_5939FA5 = 1;
  }
  bodyTexture = (UnityEngine_Object_o *)this->fields.bodyTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bodyTexture, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
    if ( !v6 )
      goto LABEL_49;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v6->klass[1].vtable._0_Equals.method)(
                                    v6,
                                    v6->klass[1].vtable._1_Finalize.methodPtr);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.bodyTexture;
      if ( !v6 )
        goto LABEL_49;
      v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppMethodPointer))v6->klass[1].vtable._0_Equals.method)(
                                      v6,
                                      v6->klass[1].vtable._1_Finalize.methodPtr);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_83246496(v12, 0);
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
    sub_21FFECC(v6, v4);
  }
LABEL_24:
  if ( this->fields.assetDataList )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_2237AF8(v5);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_2237AF8(v5);
    v15 = **(UnityEngine_Object_o ***)(v14 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Implicit(v15, 0) )
    {
      assetDataList = this->fields.assetDataList;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
      AssetManager__releaseAsset_47465764(assetDataList, 0);
    }
    this->fields.assetDataList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetDataList, 0, v17, v18, v19, v20, v21, v22);
  }
  if ( this->fields.loadNameList )
  {
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
      v24 = sub_2237AF8(v5);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
      v25 = sub_2237AF8(v5);
    v26 = **(UnityEngine_Object_o ***)(v25 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Implicit(v26, 0) )
    {
      loadNameList = this->fields.loadNameList;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27);
      AssetManager__releaseAssetStorage_47474708(loadNameList, 0);
    }
    this->fields.loadNameList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList, 0, v28, v29, v30, v31, v32, v33);
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
    sub_21FFECC(bodyTexture, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bodyTexture, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Action_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w8
  System_Action_c *v28; // x1
  System_String_array *loadNameList; // x20
  System_Action_o *v30; // x21
  __int64 v31; // x1

  if ( (byte_5939FA6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UIMasterFaceRender_TypeInfo);
    sub_21FFC50(&Method_UIMasterFaceTexture_EndLoadAsset__);
    byte_5939FA6 = 1;
  }
  if ( !*(&UIMasterFaceRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo, *(_QWORD *)&dispType);
  AssetNameList = UIMasterFaceRender__GetAssetNameList(dispType, genderType, equipId, overWriteImageId, 0);
  this->fields.loadNameList = AssetNameList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadNameList,
    (int32_t)AssetNameList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  UIMasterFaceRender__SetCharacter((UIMasterFaceRender_o *)this, dispType, genderType, equipId, 0);
  v20 = (struct System_Action_o *)System_Delegate__Combine(
                                    (System_Delegate_o *)this->fields.callbackFunc,
                                    (System_Delegate_o *)callbackFunc,
                                    0);
  v27 = (int)v20;
  if ( !v20 )
    goto LABEL_9;
  v28 = System_Action_TypeInfo;
  if ( v20->klass != System_Action_TypeInfo || (this->fields.callbackFunc = v20, v20->klass != v28) )
  {
    sub_220024C(v20, v28, v21);
LABEL_9:
    this->fields.callbackFunc = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, v27, v21, v22, v23, v24, v25, v26);
  loadNameList = this->fields.loadNameList;
  v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_UIMasterFaceTexture_EndLoadAsset__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v31);
  AssetManager__loadAssetStorage_47472372(loadNameList, v30, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFaceTexture__SetDepth(UIMasterFaceTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_21FFECC(0, *(_QWORD *)&d);
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
    sub_21FFECC(0, v8);
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