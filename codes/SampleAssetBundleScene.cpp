void SampleAssetBundleScene___ctor(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleAssetBundleScene__Init(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_Action_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  int64_t DownloadSize; // x0
  AssetLoader_LoadEndDataHandler_c *v32; // x8
  AssetLoader_LoadEndDataHandler_o *v33; // x20
  AssetLoader_LoadEndDataHandler_o *v34; // x20

  if ( (byte_596DDFC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SampleAssetBundleScene_LoadDependEnd__);
    sub_2213A60(&Method_SampleAssetBundleScene_LoadMatEnd__);
    sub_2213A60(&Method_SampleAssetBundleScene_LoadPackEnd4__);
    sub_2213A60(&Method_SampleAssetBundleScene_LoadPackEnd__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_14303/*"Test/card003"*/);
    sub_2213A60(&StringLiteral_14295/*"Test/Card001d"*/);
    sub_2213A60(&StringLiteral_8493/*"Items/ItemAtlas"*/);
    sub_2213A60(&StringLiteral_14296/*"Test/DependCommon"*/);
    sub_2213A60(&StringLiteral_14300/*"Test/TestCube"*/);
    sub_2213A60(&StringLiteral_14301/*"Test/card002d.png"*/);
    byte_596DDFC = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    v3 = sub_2213B20(string___TypeInfo, 3);
    if ( !v3 )
      sub_2213CDC(0, v4);
    v11 = v3;
    if ( !*(_DWORD *)(v3 + 24)
      || (v12 = StringLiteral_14295/*"Test/Card001d"*/,
          *(_QWORD *)(v3 + 32) = StringLiteral_14295/*"Test/Card001d"*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10),
          (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0)
      || (v19 = StringLiteral_14301/*"Test/card002d.png"*/,
          *(_QWORD *)(v11 + 40) = StringLiteral_14301/*"Test/card002d.png"*/,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18),
          *(_DWORD *)(v11 + 24) <= 2u) )
    {
      sub_2213CE4(v3);
    }
    v26 = StringLiteral_14300/*"Test/TestCube"*/;
    *(_QWORD *)(v11 + 48) = StringLiteral_14300/*"Test/TestCube"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
    v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadPackEnd__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28, v29);
    AssetManager__loadAssetStorage_47503780((System_String_array *)v11, v27, 1, 0);
    v30 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v30, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadMatEnd__, 0);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_8493/*"Items/ItemAtlas"*/, v30, 1, 0, 0);
    DownloadSize = AssetManager__getDownloadSize(0);
    v32 = AssetLoader_LoadEndDataHandler_TypeInfo;
    this->fields.downloadSize = DownloadSize;
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(v32);
    AssetLoader_LoadEndDataHandler___ctor(v33, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadPackEnd4__, 0);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_14303/*"Test/card003"*/, v33, 1, 0, 0);
    v34 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v34, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadDependEnd__, 0);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_14296/*"Test/DependCommon"*/, v34, 1, 0, 0);
  }
}


void SampleAssetBundleScene__LoadDependEnd(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x20
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  System_Action_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2

  if ( (byte_596DE03 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_SampleAssetBundleScene_LoadDependEnd2__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_14297/*"Test/DependPrefab1"*/);
    sub_2213A60(&StringLiteral_14299/*"Test/DependPrefab3"*/);
    sub_2213A60(&StringLiteral_14298/*"Test/DependPrefab2"*/);
    byte_596DE03 = 1;
  }
  v4 = sub_2213B20(string___TypeInfo, 3);
  if ( !v4 )
    sub_2213CDC(0, v5);
  v12 = v4;
  if ( !*(_DWORD *)(v4 + 24)
    || (v13 = StringLiteral_14297/*"Test/DependPrefab1"*/,
        *(_QWORD *)(v4 + 32) = StringLiteral_14297/*"Test/DependPrefab1"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), v13, v6, v7, v8, v9, v10, v11),
        (*(_DWORD *)(v12 + 24) & 0xFFFFFFFE) == 0)
    || (v20 = StringLiteral_14298/*"Test/DependPrefab2"*/,
        *(_QWORD *)(v12 + 40) = StringLiteral_14298/*"Test/DependPrefab2"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 40), v20, v14, v15, v16, v17, v18, v19),
        *(_DWORD *)(v12 + 24) <= 2u) )
  {
    sub_2213CE4(v4);
  }
  v27 = StringLiteral_14299/*"Test/DependPrefab3"*/;
  *(_QWORD *)(v12 + 48) = StringLiteral_14299/*"Test/DependPrefab3"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 48), v27, v21, v22, v23, v24, v25, v26);
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadDependEnd2__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29, v30);
  AssetManager__loadAssetStorage_47503780((System_String_array *)v12, v28, 1, 0);
}


void SampleAssetBundleScene__LoadDependEnd2(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( (byte_596DE04 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_14297/*"Test/DependPrefab1"*/);
    sub_2213A60(&StringLiteral_14299/*"Test/DependPrefab3"*/);
    sub_2213A60(&StringLiteral_14298/*"Test/DependPrefab2"*/);
    byte_596DE04 = 1;
  }
  SampleAssetBundleScene__SetAssetPrefab(this, (System_String_o *)StringLiteral_14297/*"Test/DependPrefab1"*/, 100.0, 0.0, v2);
  SampleAssetBundleScene__SetAssetPrefab(this, (System_String_o *)StringLiteral_14298/*"Test/DependPrefab2"*/, 200.0, 0.0, v4);
  SampleAssetBundleScene__SetAssetPrefab(this, (System_String_o *)StringLiteral_14299/*"Test/DependPrefab3"*/, 300.0, 0.0, v5);
}


void SampleAssetBundleScene__LoadMatEnd(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  SampleAssetBundleScene_o *v4; // x19

  v4 = this;
  if ( (byte_596DE02 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (SampleAssetBundleScene_o *)sub_2213A60(&StringLiteral_1371/*"100"*/);
    byte_596DE02 = 1;
  }
  if ( !data
    || (this = (SampleAssetBundleScene_o *)AssetData__GetObject_object_(
                                             data,
                                             (const MethodInfo_37D239C *)Method_AssetData_GetObject_GameObject___)) == 0
    || (this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !v4->fields.testAtlasSprite)
    || (UISprite__set_atlas(v4->fields.testAtlasSprite, (UIAtlas_o *)this, 0),
        (this = (SampleAssetBundleScene_o *)v4->fields.testAtlasSprite) == 0) )
  {
    sub_2213CDC(this, data);
  }
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1371/*"100"*/, 0);
}


void SampleAssetBundleScene__LoadPackEnd(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *AssetStorage; // x0
  const MethodInfo *v5; // x2
  AssetData_o *v6; // x0
  const MethodInfo *v7; // x2
  AssetData_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596DDFD & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_14302/*"Test/card002p.png"*/);
    sub_2213A60(&StringLiteral_14294/*"Test/Card001"*/);
    sub_2213A60(&StringLiteral_14300/*"Test/TestCube"*/);
    byte_596DDFD = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_14294/*"Test/Card001"*/, 0);
  SampleAssetBundleScene__LoadPackEnd1(this, AssetStorage, v5);
  v6 = AssetManager__getAssetStorage((System_String_o *)StringLiteral_14302/*"Test/card002p.png"*/, 0);
  SampleAssetBundleScene__LoadPackEnd2(this, v6, v7);
  v8 = AssetManager__getAssetStorage((System_String_o *)StringLiteral_14300/*"Test/TestCube"*/, 0);
  SampleAssetBundleScene__LoadPackEnd3(this, v8, v9);
}


void SampleAssetBundleScene__LoadPackEnd1(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  UnityEngine_GameObject_o *testParentObject; // x20
  UnityEngine_Object_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UIWidget_o *v9; // x20
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DDFE & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UITexture___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&StringLiteral_14305/*"Test1"*/);
    sub_2213A60(&StringLiteral_18546/*"card001"*/);
    byte_596DDFE = 1;
  }
  testParentObject = this->fields.testParentObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, data, method);
  transform = (UnityEngine_Object_o *)NGUITools__AddChild(testParentObject, 0);
  if ( !transform )
    goto LABEL_10;
  v8 = (UnityEngine_GameObject_o *)transform;
  UnityEngine_Object__set_name(transform, (System_String_o *)StringLiteral_14305/*"Test1"*/, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !transform
    || (v10.fields.z = 0.0,
        v10.fields.x = 100.0,
        v10.fields.y = -100.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0),
        transform = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                              v8,
                                              (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UITexture___),
        !data)
    || (v9 = (UIWidget_o *)transform,
        transform = (UnityEngine_Object_o *)AssetData__GetObject_object__58532980(
                                              data,
                                              (System_String_o *)StringLiteral_18546/*"card001"*/,
                                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360),
        !v9) )
  {
LABEL_10:
    sub_2213CDC(transform, v7);
  }
  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Object_o *, const MethodInfo *))v9->klass->vtable._27_set_mainTexture.methodPtr)(
    v9,
    transform,
    v9->klass->vtable._27_set_mainTexture.method);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v9->klass->vtable._30_MarkAsChanged.methodPtr)(
    v9,
    v9->klass->vtable._30_MarkAsChanged.method);
  UIWidget__set_depth(v9, 10, 0);
}


void SampleAssetBundleScene__LoadPackEnd2(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  UnityEngine_GameObject_o *testParentObject; // x20
  UnityEngine_Object_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UIWidget_o *v9; // x20
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DDFF & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UITexture___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&StringLiteral_14306/*"Test2"*/);
    byte_596DDFF = 1;
  }
  testParentObject = this->fields.testParentObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, data, method);
  transform = (UnityEngine_Object_o *)NGUITools__AddChild(testParentObject, 0);
  if ( !transform )
    goto LABEL_10;
  v8 = (UnityEngine_GameObject_o *)transform;
  UnityEngine_Object__set_name(transform, (System_String_o *)StringLiteral_14306/*"Test2"*/, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !transform
    || (v10.fields.z = 0.0,
        v10.fields.x = 200.0,
        v10.fields.y = -100.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0),
        transform = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                              v8,
                                              (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UITexture___),
        !data)
    || (v9 = (UIWidget_o *)transform,
        transform = (UnityEngine_Object_o *)AssetData__GetObject_object_(
                                              data,
                                              (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___),
        !v9) )
  {
LABEL_10:
    sub_2213CDC(transform, v7);
  }
  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Object_o *, const MethodInfo *))v9->klass->vtable._27_set_mainTexture.methodPtr)(
    v9,
    transform,
    v9->klass->vtable._27_set_mainTexture.method);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v9->klass->vtable._30_MarkAsChanged.methodPtr)(
    v9,
    v9->klass->vtable._30_MarkAsChanged.method);
  UIWidget__set_depth(v9, 10, 0);
}


void SampleAssetBundleScene__LoadPackEnd3(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  SampleAssetBundleScene_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *Object; // x20
  SampleAssetBundleScene_o *v8; // x20
  SampleAssetBundleScene_o *v9; // x21
  int32_t layer; // w1
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596DE00 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    this = (SampleAssetBundleScene_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE00 = 1;
  }
  if ( !data )
    goto LABEL_13;
  Object = AssetData__GetObject(data, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  this = (SampleAssetBundleScene_o *)UnityEngine_Object__Instantiate_83458448(Object, 0);
  if ( !this )
    goto LABEL_13;
  v8 = this;
  if ( (UnityEngine_GameObject_c *)this->klass != UnityEngine_GameObject_TypeInfo )
    goto LABEL_13;
  this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !v4->fields.testParentObject )
    goto LABEL_13;
  v9 = this;
  this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__get_transform(v4->fields.testParentObject, 0);
  if ( !v9
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0),
        (this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8, 0)) == 0)
    || (v11.fields.x = 10.0,
        v11.fields.y = 10.0,
        v11.fields.z = 10.0,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v11, 0),
        (this = (SampleAssetBundleScene_o *)v4->fields.testParentObject) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, data);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v8, layer, 0);
}


void SampleAssetBundleScene__LoadPackEnd4(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  UnityEngine_GameObject_o *testParentObject; // x20
  UnityEngine_Object_o *transform; // x0
  UnityEngine_Object_o *v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UIWidget_o *v9; // x20
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DE01 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UITexture___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    sub_2213A60(&StringLiteral_14307/*"Test4"*/);
    byte_596DE01 = 1;
  }
  testParentObject = this->fields.testParentObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, data, method);
  transform = (UnityEngine_Object_o *)NGUITools__AddChild(testParentObject, 0);
  if ( !transform )
    goto LABEL_15;
  v8 = (UnityEngine_GameObject_o *)transform;
  UnityEngine_Object__set_name(transform, (System_String_o *)StringLiteral_14307/*"Test4"*/, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !transform )
    goto LABEL_15;
  v10.fields.z = 0.0;
  v10.fields.x = 300.0;
  v10.fields.y = -100.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                        v8,
                                        (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UITexture___);
  if ( !data )
    goto LABEL_15;
  v9 = (UIWidget_o *)transform;
  transform = AssetData__GetObject(data, 0);
  if ( !transform )
  {
    v7 = 0;
    if ( v9 )
      goto LABEL_13;
LABEL_15:
    sub_2213CDC(transform, v7);
  }
  if ( (UnityEngine_Texture2D_c *)transform->klass == UnityEngine_Texture2D_TypeInfo )
    v7 = transform;
  else
    v7 = 0;
  if ( !v9 )
    goto LABEL_15;
LABEL_13:
  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Object_o *, const MethodInfo *))v9->klass->vtable._27_set_mainTexture.methodPtr)(
    v9,
    v7,
    v9->klass->vtable._27_set_mainTexture.method);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v9->klass->vtable._30_MarkAsChanged.methodPtr)(
    v9,
    v9->klass->vtable._30_MarkAsChanged.method);
  UIWidget__set_depth(v9, 10, 0);
}


void SampleAssetBundleScene__OnMoveEnd(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  int32_t v3; // w8

  state = this->fields.state;
  if ( state == 1 )
  {
    v3 = 2;
  }
  else
  {
    if ( state != 2 )
      return;
    v3 = 3;
  }
  this->fields.state = v3;
}


void SampleAssetBundleScene__SetAssetPrefab(
        SampleAssetBundleScene_o *this,
        System_String_o *name,
        float x,
        float y,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *Object; // x20
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21
  int32_t layer; // w1
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DE05 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DE05 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, name, method);
  AssetStorage = AssetManager__getAssetStorage(name, 0);
  if ( !AssetStorage )
    goto LABEL_18;
  Object = AssetData__GetObject(AssetStorage, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_83458448(Object, 0);
  if ( !AssetStorage )
    goto LABEL_18;
  v14 = (UnityEngine_GameObject_o *)AssetStorage;
  if ( (UnityEngine_GameObject_c *)AssetStorage->klass != UnityEngine_GameObject_TypeInfo )
    goto LABEL_18;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AssetStorage, 0);
  if ( !this->fields.testParentObject )
    goto LABEL_18;
  v15 = (UnityEngine_Transform_o *)AssetStorage;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(this->fields.testParentObject, 0);
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)AssetStorage, 0);
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0);
  if ( !AssetStorage )
    goto LABEL_18;
  v18.fields.z = 0.0;
  v18.fields.x = x;
  v18.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AssetStorage, v18, 0);
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0);
  v16 = (UnityEngine_Transform_o *)AssetStorage;
  if ( !byte_5969AE5 )
  {
    AssetStorage = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (AssetStorage = (AssetData_o *)this->fields.testParentObject) == 0) )
  {
LABEL_18:
    sub_2213CDC(AssetStorage, v10);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)AssetStorage, 0);
  UnityEngine_GameObject__set_layer(v14, layer, 0);
}


void SampleAssetBundleScene__Start(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  ;
}


void SampleAssetBundleScene__Update(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596DE06 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596DE06 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    if ( AssetManager__getDownloadSize(0) <= 0 )
      this->fields.state = 2;
  }
}