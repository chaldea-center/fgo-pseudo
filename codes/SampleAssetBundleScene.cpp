void SampleAssetBundleScene___ctor(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleAssetBundleScene__Init(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  System_Action_o *v14; // x21
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x20

  if ( (byte_4C4072F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SampleAssetBundleScene_LoadDependEnd__);
    sub_1C37058(&Method_SampleAssetBundleScene_LoadMatEnd__);
    sub_1C37058(&Method_SampleAssetBundleScene_LoadPackEnd4__);
    sub_1C37058(&Method_SampleAssetBundleScene_LoadPackEnd__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_13733/*"Test/card003"*/);
    sub_1C37058(&StringLiteral_13725/*"Test/Card001d"*/);
    sub_1C37058(&StringLiteral_8146/*"Items/ItemAtlas"*/);
    sub_1C37058(&StringLiteral_13726/*"Test/DependCommon"*/);
    sub_1C37058(&StringLiteral_13730/*"Test/TestCube"*/);
    sub_1C37058(&StringLiteral_13731/*"Test/card002d.png"*/);
    byte_4C4072F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    v3 = sub_1C37100(string___TypeInfo, 3);
    if ( !v3 )
      sub_1C372B4(0);
    v6 = v3;
    if ( !*(_DWORD *)(v3 + 24)
      || (v7 = StringLiteral_13725/*"Test/Card001d"*/,
          *(_QWORD *)(v3 + 32) = StringLiteral_13725/*"Test/Card001d"*/,
          sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v7, v4, v5),
          *(_DWORD *)(v6 + 24) <= 1u)
      || (v10 = StringLiteral_13731/*"Test/card002d.png"*/,
          *(_QWORD *)(v6 + 40) = StringLiteral_13731/*"Test/card002d.png"*/,
          sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), v10, v8, v9),
          *(_DWORD *)(v6 + 24) <= 2u) )
    {
      sub_1C372BC(v3);
    }
    v13 = StringLiteral_13730/*"Test/TestCube"*/;
    *(_QWORD *)(v6 + 48) = StringLiteral_13730/*"Test/TestCube"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 48), v13, v11, v12);
    v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadPackEnd__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_40541524((System_String_array *)v6, v14, 1, 0);
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadMatEnd__, 0);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_8146/*"Items/ItemAtlas"*/, v15, 1, 0);
    this->fields.downloadSize = AssetManager__getDownloadSize(0);
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadPackEnd4__, 0);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13733/*"Test/card003"*/, v16, 1, 0);
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadDependEnd__, 0);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_13726/*"Test/DependCommon"*/, v17, 1, 0);
  }
}


void SampleAssetBundleScene__LoadDependEnd(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  System_Action_o *v15; // x21

  if ( (byte_4C40736 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_SampleAssetBundleScene_LoadDependEnd2__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_13727/*"Test/DependPrefab1"*/);
    sub_1C37058(&StringLiteral_13729/*"Test/DependPrefab3"*/);
    sub_1C37058(&StringLiteral_13728/*"Test/DependPrefab2"*/);
    byte_4C40736 = 1;
  }
  v4 = sub_1C37100(string___TypeInfo, 3);
  if ( !v4 )
    sub_1C372B4(0);
  v7 = v4;
  if ( !*(_DWORD *)(v4 + 24)
    || (v8 = StringLiteral_13727/*"Test/DependPrefab1"*/,
        *(_QWORD *)(v4 + 32) = StringLiteral_13727/*"Test/DependPrefab1"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), v8, v5, v6),
        *(_DWORD *)(v7 + 24) <= 1u)
    || (v11 = StringLiteral_13728/*"Test/DependPrefab2"*/,
        *(_QWORD *)(v7 + 40) = StringLiteral_13728/*"Test/DependPrefab2"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), v11, v9, v10),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
    sub_1C372BC(v4);
  }
  v14 = StringLiteral_13729/*"Test/DependPrefab3"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_13729/*"Test/DependPrefab3"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), v14, v12, v13);
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SampleAssetBundleScene_LoadDependEnd2__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40541524((System_String_array *)v7, v15, 1, 0);
}


void SampleAssetBundleScene__LoadDependEnd2(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( (byte_4C40737 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13727/*"Test/DependPrefab1"*/);
    sub_1C37058(&StringLiteral_13729/*"Test/DependPrefab3"*/);
    sub_1C37058(&StringLiteral_13728/*"Test/DependPrefab2"*/);
    byte_4C40737 = 1;
  }
  SampleAssetBundleScene__SetAssetPrefab(this, (System_String_o *)StringLiteral_13727/*"Test/DependPrefab1"*/, 100.0, 0.0, v2);
  SampleAssetBundleScene__SetAssetPrefab(this, (System_String_o *)StringLiteral_13728/*"Test/DependPrefab2"*/, 200.0, 0.0, v4);
  SampleAssetBundleScene__SetAssetPrefab(this, (System_String_o *)StringLiteral_13729/*"Test/DependPrefab3"*/, 300.0, 0.0, v5);
}


void SampleAssetBundleScene__LoadMatEnd(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  SampleAssetBundleScene_o *v4; // x19

  v4 = this;
  if ( (byte_4C40735 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (SampleAssetBundleScene_o *)sub_1C37058(&StringLiteral_1295/*"100"*/);
    byte_4C40735 = 1;
  }
  if ( !data
    || (this = (SampleAssetBundleScene_o *)AssetData__GetObject_object_(
                                             data,
                                             (const MethodInfo_30C8EC0 *)Method_AssetData_GetObject_GameObject___)) == 0
    || (this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !v4->fields.testAtlasSprite)
    || (UISprite__set_atlas(v4->fields.testAtlasSprite, (UIAtlas_o *)this, 0),
        (this = (SampleAssetBundleScene_o *)v4->fields.testAtlasSprite) == 0) )
  {
    sub_1C372B4(this);
  }
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_1295/*"100"*/, 0);
}


void SampleAssetBundleScene__LoadPackEnd(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  const MethodInfo *v4; // x2
  AssetData_o *v5; // x0
  const MethodInfo *v6; // x2
  AssetData_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C40730 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&StringLiteral_13732/*"Test/card002p.png"*/);
    sub_1C37058(&StringLiteral_13724/*"Test/Card001"*/);
    sub_1C37058(&StringLiteral_13730/*"Test/TestCube"*/);
    byte_4C40730 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_13724/*"Test/Card001"*/, 0);
  SampleAssetBundleScene__LoadPackEnd1(this, AssetStorage, v4);
  v5 = AssetManager__getAssetStorage((System_String_o *)StringLiteral_13732/*"Test/card002p.png"*/, 0);
  SampleAssetBundleScene__LoadPackEnd2(this, v5, v6);
  v7 = AssetManager__getAssetStorage((System_String_o *)StringLiteral_13730/*"Test/TestCube"*/, 0);
  SampleAssetBundleScene__LoadPackEnd3(this, v7, v8);
}


void SampleAssetBundleScene__LoadPackEnd1(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  UnityEngine_GameObject_o *testParentObject; // x20
  UnityEngine_Object_o *transform; // x0
  UnityEngine_GameObject_o *v7; // x20
  UIWidget_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40731 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UITexture___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&StringLiteral_13735/*"Test1"*/);
    sub_1C37058(&StringLiteral_17758/*"card001"*/);
    byte_4C40731 = 1;
  }
  testParentObject = this->fields.testParentObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (UnityEngine_Object_o *)NGUITools__AddChild(testParentObject, 0);
  if ( !transform )
    goto LABEL_10;
  v7 = (UnityEngine_GameObject_o *)transform;
  UnityEngine_Object__set_name(transform, (System_String_o *)StringLiteral_13735/*"Test1"*/, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v7, 0);
  if ( !transform
    || (v9.fields.z = 0.0,
        v9.fields.x = 100.0,
        v9.fields.y = -100.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v9, 0),
        transform = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                              v7,
                                              (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UITexture___),
        !data)
    || (v8 = (UIWidget_o *)transform,
        transform = (UnityEngine_Object_o *)AssetData__GetObject_object__51154888(
                                              data,
                                              (System_String_o *)StringLiteral_17758/*"card001"*/,
                                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200),
        !v8) )
  {
LABEL_10:
    sub_1C372B4(transform);
  }
  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Object_o *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
    v8,
    transform,
    v8->klass->vtable._27_set_mainTexture.method);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v8->klass->vtable._30_MarkAsChanged.methodPtr)(
    v8,
    v8->klass->vtable._30_MarkAsChanged.method);
  UIWidget__set_depth(v8, 10, 0);
}


void SampleAssetBundleScene__LoadPackEnd2(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  UnityEngine_GameObject_o *testParentObject; // x20
  UnityEngine_Object_o *transform; // x0
  UnityEngine_GameObject_o *v7; // x20
  UIWidget_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40732 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UITexture___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&StringLiteral_13736/*"Test2"*/);
    byte_4C40732 = 1;
  }
  testParentObject = this->fields.testParentObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (UnityEngine_Object_o *)NGUITools__AddChild(testParentObject, 0);
  if ( !transform )
    goto LABEL_10;
  v7 = (UnityEngine_GameObject_o *)transform;
  UnityEngine_Object__set_name(transform, (System_String_o *)StringLiteral_13736/*"Test2"*/, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v7, 0);
  if ( !transform
    || (v9.fields.z = 0.0,
        v9.fields.x = 200.0,
        v9.fields.y = -100.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v9, 0),
        transform = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                              v7,
                                              (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UITexture___),
        !data)
    || (v8 = (UIWidget_o *)transform,
        transform = (UnityEngine_Object_o *)AssetData__GetObject_object_(
                                              data,
                                              (const MethodInfo_30C8EC0 *)Method_AssetData_GetObject_Texture2D___),
        !v8) )
  {
LABEL_10:
    sub_1C372B4(transform);
  }
  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Object_o *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
    v8,
    transform,
    v8->klass->vtable._27_set_mainTexture.method);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v8->klass->vtable._30_MarkAsChanged.methodPtr)(
    v8,
    v8->klass->vtable._30_MarkAsChanged.method);
  UIWidget__set_depth(v8, 10, 0);
}


void SampleAssetBundleScene__LoadPackEnd3(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  SampleAssetBundleScene_o *v4; // x19
  UnityEngine_Object_o *Object; // x20
  SampleAssetBundleScene_o *v6; // x20
  SampleAssetBundleScene_o *v7; // x21
  int32_t layer; // w1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C40733 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    this = (SampleAssetBundleScene_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40733 = 1;
  }
  if ( !data )
    goto LABEL_13;
  Object = AssetData__GetObject(data, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SampleAssetBundleScene_o *)UnityEngine_Object__Instantiate_71265964(Object, 0);
  if ( !this )
    goto LABEL_13;
  v6 = this;
  if ( (UnityEngine_GameObject_c *)this->klass != UnityEngine_GameObject_TypeInfo )
    goto LABEL_13;
  this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !v4->fields.testParentObject )
    goto LABEL_13;
  v7 = this;
  this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__get_transform(v4->fields.testParentObject, 0);
  if ( !v7
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v7, (UnityEngine_Transform_o *)this, 0),
        (this = (SampleAssetBundleScene_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0)) == 0)
    || (v9.fields.x = 10.0,
        v9.fields.y = 10.0,
        v9.fields.z = 10.0,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v9, 0),
        (this = (SampleAssetBundleScene_o *)v4->fields.testParentObject) == 0) )
  {
LABEL_13:
    sub_1C372B4(this);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v6, layer, 0);
}


void SampleAssetBundleScene__LoadPackEnd4(SampleAssetBundleScene_o *this, AssetData_o *data, const MethodInfo *method)
{
  UnityEngine_GameObject_o *testParentObject; // x20
  UnityEngine_Object_o *transform; // x0
  UnityEngine_GameObject_o *v7; // x20
  UIWidget_o *v8; // x20
  UnityEngine_Object_o *v9; // x1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40734 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UITexture___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Texture2D_TypeInfo);
    sub_1C37058(&StringLiteral_13737/*"Test4"*/);
    byte_4C40734 = 1;
  }
  testParentObject = this->fields.testParentObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (UnityEngine_Object_o *)NGUITools__AddChild(testParentObject, 0);
  if ( !transform )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)transform;
  UnityEngine_Object__set_name(transform, (System_String_o *)StringLiteral_13737/*"Test4"*/, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(v7, 0);
  if ( !transform )
    goto LABEL_15;
  v10.fields.z = 0.0;
  v10.fields.x = 300.0;
  v10.fields.y = -100.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0);
  transform = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                        v7,
                                        (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UITexture___);
  if ( !data )
    goto LABEL_15;
  v8 = (UIWidget_o *)transform;
  transform = AssetData__GetObject(data, 0);
  if ( !transform )
  {
    v9 = 0;
    if ( v8 )
      goto LABEL_13;
LABEL_15:
    sub_1C372B4(transform);
  }
  if ( (UnityEngine_Texture2D_c *)transform->klass == UnityEngine_Texture2D_TypeInfo )
    v9 = transform;
  else
    v9 = 0;
  if ( !v8 )
    goto LABEL_15;
LABEL_13:
  ((void (__fastcall *)(UIWidget_o *, UnityEngine_Object_o *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
    v8,
    v9,
    v8->klass->vtable._27_set_mainTexture.method);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v8->klass->vtable._30_MarkAsChanged.methodPtr)(
    v8,
    v8->klass->vtable._30_MarkAsChanged.method);
  UIWidget__set_depth(v8, 10, 0);
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
  UnityEngine_Object_o *Object; // x20
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  int32_t layer; // w1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40738 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40738 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, 0);
  if ( !AssetStorage )
    goto LABEL_18;
  Object = AssetData__GetObject(AssetStorage, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_71265964(Object, 0);
  if ( !AssetStorage )
    goto LABEL_18;
  v11 = (UnityEngine_GameObject_o *)AssetStorage;
  if ( (UnityEngine_GameObject_c *)AssetStorage->klass != UnityEngine_GameObject_TypeInfo )
    goto LABEL_18;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AssetStorage, 0);
  if ( !this->fields.testParentObject )
    goto LABEL_18;
  v12 = (UnityEngine_Transform_o *)AssetStorage;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(this->fields.testParentObject, 0);
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)AssetStorage, 0);
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(v11, 0);
  if ( !AssetStorage )
    goto LABEL_18;
  v15.fields.z = 0.0;
  v15.fields.x = x;
  v15.fields.y = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AssetStorage, v15, 0);
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__get_transform(v11, 0);
  v13 = (UnityEngine_Transform_o *)AssetStorage;
  if ( !byte_4C3C926 )
  {
    AssetStorage = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v13
    || (UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (AssetStorage = (AssetData_o *)this->fields.testParentObject) == 0) )
  {
LABEL_18:
    sub_1C372B4(AssetStorage);
  }
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)AssetStorage, 0);
  UnityEngine_GameObject__set_layer(v11, layer, 0);
}


void SampleAssetBundleScene__Start(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  ;
}


void SampleAssetBundleScene__Update(SampleAssetBundleScene_o *this, const MethodInfo *method)
{
  if ( (byte_4C40739 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C40739 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__getDownloadSize(0) <= 0 )
      this->fields.state = 2;
  }
}