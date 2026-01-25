void UIMasterFaceTexture___ctor(UIMasterFaceTexture_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFEE3 & 1) == 0 )
  {
    sub_1C7BAE8(&UIMasterFaceRender_TypeInfo);
    byte_4CEFEE3 = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void UIMasterFaceTexture__EndLoadAsset(UIMasterFaceTexture_o *this, const MethodInfo *method)
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
  AssetData_array *assetDataList; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UITexture_o *bodyTexture; // x20
  UnityEngine_Shader_o *v22; // x22
  UnityEngine_Material_o *v23; // x21
  UnityEngine_Texture_o *MaskTexture; // x0
  __int64 v25; // x1
  UIMasterFaceRender_o *v26; // x0
  struct UITexture_o *v27; // x20
  const MethodInfo *v28; // x2
  UnityEngine_Material_o *v29; // x20
  const MethodInfo *v30; // x2
  UITexture_o *v31; // x20
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UnityEngine_Vector2_o BodySize; // kr00_8
  int32_t v35; // w1
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Action_o *callbackFunc; // x20
  UnityEngine_Rect_o BodyUvRect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEFEE2 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Material_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4944/*"Custom/SpriteWithMask"*/);
    sub_1C7BAE8(&StringLiteral_16328/*"_MaskTex"*/);
    byte_4CEFEE2 = 1;
  }
  loadNameList = this->fields.loadNameList;
  if ( !loadNameList )
    return;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_41104444 = AssetManager__getAssetStorage_41104444(loadNameList, 0);
  if ( !AssetStorage_41104444 )
    return;
  max_length = AssetStorage_41104444->max_length;
  v12 = AssetStorage_41104444;
  if ( max_length < 1 )
  {
LABEL_12:
    assetDataList = this->fields.assetDataList;
    if ( assetDataList )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41096480(assetDataList, 0);
    }
    this->fields.assetDataList = v12;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetDataList, (int32_t)v12, v5, v6, v7, v8, v9, v10);
    this->fields.loadNameList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadNameList, 0, v15, v16, v17, v18, v19, v20);
    bodyTexture = this->fields.bodyTexture;
    v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4944/*"Custom/SpriteWithMask"*/, 0);
    v23 = (UnityEngine_Material_o *)sub_1C7BD34(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v23, v22, 0);
    if ( bodyTexture )
    {
      v26 = (UIMasterFaceRender_o *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))bodyTexture->klass->vtable._25_set_material.methodPtr)(
                                      bodyTexture,
                                      v23,
                                      bodyTexture->klass->vtable._25_set_material.method);
      v27 = this->fields.bodyTexture;
      MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetBodyTexture(v26, this->fields.assetDataList, v28);
      if ( v27 )
      {
        ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))v27->klass->vtable._27_set_mainTexture.methodPtr)(
          v27,
          MaskTexture,
          v27->klass->vtable._27_set_mainTexture.method);
        MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
        if ( MaskTexture )
        {
          v29 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, size_t))&MaskTexture->klass[1]._2.cctor_finished)(
                                            MaskTexture,
                                            MaskTexture->klass[1]._2.cctor_thread);
          MaskTexture = (UnityEngine_Texture_o *)UIMasterFaceRender__GetMaskTexture(
                                                   (UIMasterFaceRender_o *)this,
                                                   this->fields.assetDataList,
                                                   v30);
          if ( v29 )
          {
            UnityEngine_Material__SetTexture(v29, (System_String_o *)StringLiteral_16328/*"_MaskTex"*/, MaskTexture, 0);
            v31 = this->fields.bodyTexture;
            BodyUvRect = UIMasterFaceRender__GetBodyUvRect((UIMasterFaceRender_o *)this, v32);
            if ( v31 )
            {
              UITexture__set_uvRect(v31, BodyUvRect, 0);
              BodySize = UIMasterFaceRender__GetBodySize((UIMasterFaceRender_o *)this, v33);
              MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
              if ( MaskTexture )
              {
                v35 = BodySize.fields.x == INFINITY ? 0x80000000 : (int)BodySize.fields.x;
                UIWidget__set_width((UIWidget_o *)MaskTexture, v35, 0);
                MaskTexture = (UnityEngine_Texture_o *)this->fields.bodyTexture;
                if ( MaskTexture )
                {
                  v36 = BodySize.fields.y == INFINITY ? 0x80000000 : (int)BodySize.fields.y;
                  UIWidget__set_height((UIWidget_o *)MaskTexture, v36, 0);
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
                            sub_1C7BA8C(
                              (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
                              0,
                              v37,
                              v38,
                              v39,
                              v40,
                              v41,
                              v42);
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
    sub_1C7BD40(MaskTexture, v25);
  }
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetData_array *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x20
  GrandQuestFolderBoardItem_o *p_loadNameList; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_String_array *klass; // x20

  if ( (byte_4CEFEE0 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    byte_4CEFEE0 = 1;
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
      UnityEngine_Object__Destroy_71870148(v9, 0);
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
    sub_1C7BD40(v6, v4);
  }
LABEL_24:
  if ( this->fields.assetDataList )
  {
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C51B7C(v5);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C51B7C(v5);
    v12 = **(UnityEngine_Object_o ***)(v11 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_assetDataList = &this->fields.assetDataList;
    if ( UnityEngine_Object__op_Implicit(v12, 0) )
    {
      v20 = *p_assetDataList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41096480(v20, 0);
    }
    *p_assetDataList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetDataList, 0, v14, v15, v16, v17, v18, v19);
  }
  if ( this->fields.loadNameList )
  {
    v21 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C51B7C(v5);
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C51B7C(v5);
    v23 = **(UnityEngine_Object_o ***)(v22 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_loadNameList = (GrandQuestFolderBoardItem_o *)&this->fields.loadNameList;
    if ( UnityEngine_Object__op_Implicit(v23, 0) )
    {
      klass = (System_String_array *)p_loadNameList->klass;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_41105432(klass, 0);
    }
    p_loadNameList->klass = 0;
    sub_1C7BA8C(p_loadNameList, 0, v25, v26, v27, v28, v29, v30);
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
    sub_1C7BD40(bodyTexture, isActive);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Delegate_o *v20; // x0
  struct System_Action_o **p_callbackFunc; // x21
  System_Delegate_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Delegate_o *v29; // x8
  System_Action_c *v30; // x1
  System_String_array *loadNameList; // x20
  System_Action_o *v32; // x21

  if ( (byte_4CEFEE1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&UIMasterFaceRender_TypeInfo);
    sub_1C7BAE8(&Method_UIMasterFaceTexture_EndLoadAsset__);
    byte_4CEFEE1 = 1;
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadNameList,
    (int32_t)AssetNameList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Delegate_o *)this->fields.callbackFunc;
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
  p_callbackFunc = &this->fields.callbackFunc;
  v22 = System_Delegate__Combine(v20, (System_Delegate_o *)callbackFunc, 0);
  v29 = v22;
  if ( !v22 )
    goto LABEL_9;
  v30 = System_Action_TypeInfo;
  if ( (System_Action_c *)v22->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v22, (System_Action_c *)v22->klass != v30) )
  {
    sub_1C7C0DC(v22);
LABEL_9:
    *p_callbackFunc = (struct System_Action_o *)v29;
  }
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)v29, v23, v24, v25, v26, v27, v28);
  loadNameList = this->fields.loadNameList;
  v32 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_UIMasterFaceTexture_EndLoadAsset__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41103084(loadNameList, v32, 1, 0);
}


void UIMasterFaceTexture__SetDepth(UIMasterFaceTexture_o *this, int32_t d, const MethodInfo *method)
{
  UIWidget_o *bodyTexture; // x0

  bodyTexture = (UIWidget_o *)this->fields.bodyTexture;
  if ( !bodyTexture )
    sub_1C7BD40(0, d);
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
    sub_1C7BD40(0, v8);
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