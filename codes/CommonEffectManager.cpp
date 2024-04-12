void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  struct CommonEffectManager_StaticFields *static_fields; // x0
  struct CommonEffectManager_StaticFields *v2; // x0
  struct CommonEffectManager_StaticFields *v3; // x0
  struct CommonEffectManager_StaticFields *v4; // x0
  struct CommonEffectManager_StaticFields *v5; // x0
  struct CommonEffectManager_StaticFields *v6; // x0

  if ( (byte_42AC4BC & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&StringLiteral_5854/*"Effect/"*/);
    sub_B52984(&StringLiteral_5891/*"Effect/Skin/{0:D2}"*/);
    byte_42AC4BC = 1;
  }
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5854/*"Effect/"*/;
  sub_B52920(static_fields);
  v2 = CommonEffectManager_TypeInfo->static_fields;
  v2->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5891/*"Effect/Skin/{0:D2}"*/;
  sub_B52920(&v2->skinEffectAssetStoragePath);
  v3 = CommonEffectManager_TypeInfo->static_fields;
  v3->testEffectPrefab = 0LL;
  sub_B52920(&v3->testEffectPrefab);
  v4 = CommonEffectManager_TypeInfo->static_fields;
  v4->testBackEffectPrefab = 0LL;
  sub_B52920(&v4->testBackEffectPrefab);
  v5 = CommonEffectManager_TypeInfo->static_fields;
  v5->testCharaEffectPrefab = 0LL;
  sub_B52920(&v5->testCharaEffectPrefab);
  v6 = CommonEffectManager_TypeInfo->static_fields;
  v6->testCharaBackEffectPrefab = 0LL;
  sub_B52920(&v6->testCharaBackEffectPrefab);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_42AC4BB & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
    byte_42AC4BB = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x5
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AC496 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC496 = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  return CommonEffectManager__Create_18103868(parent, effectName, prefab, v13, 0, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        Il2CppObject *param,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x25
  __int64 v14; // x0
  __int64 v15; // x1
  int v16; // s0
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_42AC4A2 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4A2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B52A5C(v14, v15);
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v16,
    param,
    0LL,
    isSkip,
    isPause,
    flip,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_18107960(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        Il2CppObject *param,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x26
  __int64 v16; // x0
  __int64 v17; // x1
  int v18; // s0
  const MethodInfo *v21; // [xsp+0h] [xbp-50h]

  if ( (byte_42AC4A3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4A3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B52A5C(v16, v17);
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v18,
    param,
    callback,
    isSkip,
    isPause,
    flip,
    v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_18108148(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_Vector3_o pos,
        Il2CppObject *param,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42AC4A4 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4A4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v18);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v20,
    param,
    0LL,
    isSkip,
    isPause,
    flip,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_18108356(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_Vector3_o pos,
        Il2CppObject *param,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42AC4A5 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4A5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v20);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v22,
    param,
    callback,
    isSkip,
    isPause,
    flip,
    v21);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18103868(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector3_o pos,
        bool isSkip,
        int32_t flip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  System_String_o *AssetName; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x24
  CommonEffectComponent_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *v19; // x24
  float v20; // s11
  float v21; // s12
  float v22; // s13
  const MethodInfo *v23; // x1
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s3
  float v28; // s14
  float v29; // s15
  float v30; // s8
  float v31; // s9
  const MethodInfo *v32; // x4
  float v34; // [xsp+8h] [xbp-78h]
  float v35; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42AC499 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC499 = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  AssetName = CommonEffectManager__GetAssetName(effectName, (const MethodInfo *)effectName);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_16;
  v17 = transform;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         transform,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v19 = (UnityEngine_Transform_o *)transform;
  v34 = y;
  v35 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v20 = localScale.fields.x;
  v21 = localScale.fields.y;
  v22 = localScale.fields.z;
  *(UnityEngine_Quaternion_o *)&v24 = CommonEffectManager__GetFlipQuaternion(flip, v23);
  if ( !parent )
    goto LABEL_16;
  v28 = v24;
  v29 = v25;
  v30 = v26;
  v31 = v27;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v19 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)transform, 0LL);
  v37.fields.y = v34;
  v37.fields.z = v35;
  v37.fields.x = x;
  UnityEngine_Transform__set_localPosition(v19, v37, 0LL);
  v39.fields.x = v28;
  v39.fields.y = v29;
  v39.fields.z = v30;
  v39.fields.w = v31;
  UnityEngine_Transform__set_localRotation(v19, v39, 0LL);
  v38.fields.x = v20;
  v38.fields.y = v21;
  v38.fields.z = v22;
  UnityEngine_Transform__set_localScale(v19, v38, 0LL);
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B52A5C(transform, v16);
  CommonEffectComponent__Init_18086236(Component_srcLineSprite, AssetName, 0, 0, v32);
  return Component_srcLineSprite;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18104396(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x5
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AC497 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC497 = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  return CommonEffectManager__Create_18103868(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18104572(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x5
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AC498 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC498 = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  return CommonEffectManager__Create_18103868(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18104748(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x5
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AC49A & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC49A = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  return CommonEffectManager__Create_18104924(parent, data, prefab, v13, 0, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18104924(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector3_o pos,
        bool isSkip,
        int32_t flip,
        const MethodInfo *method)
{
  float z; // s12
  float y; // s11
  float x; // s10
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x23
  CommonEffectComponent_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *v18; // x23
  const MethodInfo *v19; // x1
  float v20; // s13
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  float v25; // s14
  float v26; // s15
  float v27; // s8
  float v28; // s9
  const MethodInfo *v29; // x4
  float v31; // [xsp+8h] [xbp-78h]
  float v32; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42AC49D & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC49D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_16;
  v16 = transform;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         transform,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v18 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v31 = localScale.fields.y;
  v32 = localScale.fields.x;
  v20 = localScale.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  *(UnityEngine_Quaternion_o *)&v21 = CommonEffectManager__GetFlipQuaternion(flip, v19);
  if ( !parent )
    goto LABEL_16;
  v25 = v21;
  v26 = v22;
  v27 = v23;
  v28 = v24;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v18 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)transform, 0LL);
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  UnityEngine_Transform__set_localPosition(v18, v34, 0LL);
  v36.fields.x = v25;
  v36.fields.y = v26;
  v36.fields.z = v27;
  v36.fields.w = v28;
  UnityEngine_Transform__set_localRotation(v18, v36, 0LL);
  v35.fields.y = v31;
  v35.fields.x = v32;
  v35.fields.z = v20;
  UnityEngine_Transform__set_localScale(v18, v35, 0LL);
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B52A5C(transform, v15);
  CommonEffectComponent__Init_18086312(Component_srcLineSprite, data, 0, 0, v29);
  return Component_srcLineSprite;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18105428(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x5
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AC49B & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC49B = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  return CommonEffectManager__Create_18104924(parent, data, prefab, v14, 0, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18105604(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42AC49C & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC49C = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_18104924(parent, data, prefab, v13, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18105772(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // s0
  const MethodInfo *v17; // [xsp+0h] [xbp-40h]

  if ( (byte_42AC49E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC49E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B52A5C(v12, v13);
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v14,
    0LL,
    0LL,
    isSkip,
    isPause,
    flip,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18107188(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x25
  __int64 v14; // x0
  __int64 v15; // x1
  int v16; // s0
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_42AC49F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC49F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B52A5C(v14, v15);
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v16,
    0LL,
    callback,
    isSkip,
    isPause,
    flip,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18107372(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_Vector3_o pos,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42AC4A0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4A0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v16);
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v18,
    0LL,
    0LL,
    isSkip,
    isPause,
    flip,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18107568(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_Vector3_o pos,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42AC4A1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4A1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v18);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v20,
    0LL,
    callback,
    isSkip,
    isPause,
    flip,
    v19);
}


void __fastcall CommonEffectManager__Destroy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Component_o *v7; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_Object_o *v9; // x23
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42AC4AD & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC4AD = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v3,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_24;
    v6 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v6 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
        if ( transform )
        {
          v7 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
            goto LABEL_21;
          v9 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                         v7,
                                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
          {
LABEL_21:
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
            if ( !v3 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v3,
              (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
          ++v6;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
    if ( !v3 )
LABEL_24:
      sub_B52A5C(transform, v5);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v11.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_18111644(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *AssetName; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w22
  UnityEngine_Component_o *v12; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  WebViewObject_o *v14; // x24
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42AC4AE & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC4AE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( effectName )
    {
      if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      AssetName = CommonEffectManager__GetAssetName(effectName, v5);
      v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v8,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      if ( !parent )
        goto LABEL_34;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_34;
      v11 = 0;
      while ( 1 )
      {
        transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
        if ( v11 >= (int)transform )
          break;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
          goto LABEL_34;
        transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
        if ( !transform )
          goto LABEL_34;
        v12 = (UnityEngine_Component_o *)transform;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)transform,
                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_WebViewObject,
                                                 0LL,
                                                 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !Component_WebViewObject || !AssetName )
            goto LABEL_34;
          if ( System_String__Equals_44555656(AssetName, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
            goto LABEL_31;
        }
        v14 = UnityEngine_Component__GetComponent_WebViewObject_(
                v12,
                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v14 || !AssetName )
            goto LABEL_34;
          if ( System_String__Equals_44555656(AssetName, *(System_String_o **)&v14->fields.visibility, 0LL) )
          {
LABEL_31:
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
            if ( !v8 )
              goto LABEL_34;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        ++v11;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
          goto LABEL_34;
      }
      if ( !v8 )
LABEL_34:
        sub_B52A5C(transform, v10);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v16,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v16,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v16.fields.current;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v16,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    else
    {
      if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__Stop(parent, 0, 0, v6);
    }
  }
}


bool __fastcall CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_42AC4AA & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC4AA = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, v4);
}


bool __fastcall CommonEffectManager__ForceStop_18110740(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_42AC4AB & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC4AB = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(1, parent, effectName, isSkip, isLoadStop, v5);
}


CommonEffectComponent_array *__fastcall CommonEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_42AC491 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC491 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_23:
      sub_B52A5C(transform, v5);
    v6 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v6 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v3 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v3,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
          }
          ++v6;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v3 )
    goto LABEL_23;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_42AC490 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC490 = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_44568316(v3->static_fields->effectAssetStoragePath, effectName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Quaternion_o __fastcall CommonEffectManager__GetFlipQuaternion(int32_t flip, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  int v6; // s1
  int v7; // s0
  int v8; // s2
  int v9; // s3
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Quaternion_o identity; // [xsp+0h] [xbp-10h] BYREF
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( flip == 3 )
  {
    v8 = 1127481344;
    *(_QWORD *)&identity.fields.x = 0LL;
    *(_QWORD *)&identity.fields.z = 0LL;
    v7 = 0;
    v6 = 0;
  }
  else
  {
    if ( flip == 2 )
    {
      v7 = 1127481344;
      *(_QWORD *)&identity.fields.x = 0LL;
      *(_QWORD *)&identity.fields.z = 0LL;
      v6 = 0;
    }
    else
    {
      if ( flip != 1 )
      {
        identity = UnityEngine_Quaternion__get_identity(0LL);
        goto LABEL_10;
      }
      v6 = 1127481344;
      v7 = 0;
      *(_QWORD *)&identity.fields.x = 0LL;
      *(_QWORD *)&identity.fields.z = 0LL;
    }
    v8 = 0;
  }
  v9 = 0;
  UnityEngine_Quaternion___ctor(*(UnityEngine_Quaternion_o *)&v7, v2, v3, v4, v5, (const MethodInfo *)&identity);
LABEL_10:
  y = identity.fields.y;
  x = identity.fields.x;
  w = identity.fields.w;
  z = identity.fields.z;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool __fastcall CommonEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  UnityEngine_Component_o *v6; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Object_o *v8; // x21

  if ( (byte_42AC492 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC492 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_B52A5C(transform, v4);
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v5, 0LL);
      if ( !transform )
        goto LABEL_22;
      v6 = (UnityEngine_Component_o *)transform;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 1;
      v8 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     v6,
                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
        return 1;
      ++v5;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 0;
}


bool __fastcall CommonEffectManager__IsBusy_18102108(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *AssetName; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  int32_t v9; // w21
  UnityEngine_Component_o *v10; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v12; // x22

  if ( (byte_42AC493 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC493 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 0;
  if ( effectName )
  {
    if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    AssetName = CommonEffectManager__GetAssetName(effectName, v5);
    if ( !parent
      || (v8 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
    {
LABEL_32:
      sub_B52A5C(AssetName, v7);
    }
    v9 = 0;
    while ( v9 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
    {
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_32;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v9, 0LL);
      if ( !AssetName )
        goto LABEL_32;
      v10 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_WebViewObject,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !Component_WebViewObject || !v8 )
          goto LABEL_32;
        if ( System_String__Equals_44555656(v8, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 1;
      }
      v12 = UnityEngine_Component__GetComponent_WebViewObject_(
              v10,
              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v12 || !v8 )
          goto LABEL_32;
        if ( System_String__Equals_44555656(v8, *(System_String_o **)&v12->fields.visibility, 0LL) )
          return 1;
      }
      ++v9;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_32;
    }
    return 0;
  }
  if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsBusy(parent, v5);
}


bool __fastcall CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_42AC4BA & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4BA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  return Instance->fields.commonCamera != 0LL;
}


bool __fastcall CommonEffectManager__IsSkinEffectLoaded(CommonEffectManager_o *this, const MethodInfo *method)
{
  return this->fields.loadedSkinAssetName != 0LL;
}


bool __fastcall CommonEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  UnityEngine_Component_o *v6; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  WebViewObject_o *v8; // x21

  if ( (byte_42AC494 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC494 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_B52A5C(transform, v4);
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v5, 0LL);
      if ( !transform )
        goto LABEL_24;
      v6 = (UnityEngine_Component_o *)transform;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 0;
      v8 = UnityEngine_Component__GetComponent_WebViewObject_(
             v6,
             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_24;
        if ( !v8->fields.mVisibility )
          return 0;
      }
      ++v5;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__IsStart_18103108(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *AssetName; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  int32_t v9; // w21
  UnityEngine_Component_o *v10; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v12; // x22

  if ( (byte_42AC495 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC495 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 1;
  if ( effectName )
  {
    if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    AssetName = CommonEffectManager__GetAssetName(effectName, v5);
    if ( !parent
      || (v8 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
    {
LABEL_33:
      sub_B52A5C(AssetName, v7);
    }
    v9 = 0;
    while ( v9 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
    {
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_33;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v9, 0LL);
      if ( !AssetName )
        goto LABEL_33;
      v10 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_WebViewObject,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !Component_WebViewObject || !v8 )
          goto LABEL_33;
        if ( System_String__Equals_44555656(v8, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 0;
      }
      v12 = UnityEngine_Component__GetComponent_WebViewObject_(
              v10,
              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v12 || !v8 )
          goto LABEL_33;
        if ( System_String__Equals_44555656(v8, *(System_String_o **)&v12->fields.visibility, 0LL)
          && !v12->fields.mVisibility )
        {
          return 0;
        }
      }
      ++v9;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_33;
    }
    return 1;
  }
  if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__IsStart(parent, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__LoadCreateLocal(
        CommonEffectManager_o *this,
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_Vector3_o pos,
        Il2CppObject *param,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  CommonEffectManager_o *v20; // x25
  CommonEffectManager_c *v21; // x0
  UnityEngine_Object_o **p_testEffectPrefab; // x8
  const MethodInfo *v23; // x1
  System_String_o *AssetName; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *loadEffectPrefab; // x26
  System_String_o *v26; // x25
  UnityEngine_GameObject_o *v27; // x27
  CommonEffectLoadComponent_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v29; // x27
  const MethodInfo *v30; // x7
  CommonEffectManager_c *v31; // x0
  CommonEffectManager_c *v32; // x0
  CommonEffectManager_c *v33; // x0
  UnityEngine_Object_o *v34; // x23
  UnityEngine_Object_o *_18103868; // x24
  const MethodInfo *v36; // x5
  System_String_o *name; // x24
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_42AC4B0 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_13653/*"Talk/TestBackEffect"*/);
    sub_B52984(&StringLiteral_13660/*"Talk/communicationCharaEffect"*/);
    sub_B52984(&StringLiteral_13658/*"Talk/bit_talk_10"*/);
    sub_B52984(&StringLiteral_13656/*"Talk/TestEffect"*/);
    sub_B52984(&StringLiteral_13652/*"Talk/Test"*/);
    sub_B52984(&StringLiteral_13654/*"Talk/TestCharaBackEffect"*/);
    this = (CommonEffectManager_o *)sub_B52984(&StringLiteral_13655/*"Talk/TestCharaEffect"*/);
    byte_42AC4B0 = 1;
  }
  if ( !effectName )
    goto LABEL_57;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_13652/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13660/*"Talk/communicationCharaEffect"*/, 0LL) )
      effectName = (System_String_o *)StringLiteral_13658/*"Talk/bit_talk_10"*/;
    goto LABEL_12;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13656/*"Talk/TestEffect"*/, 0LL) )
  {
    v21 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v21 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v21->static_fields->testEffectPrefab;
    goto LABEL_38;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13653/*"Talk/TestBackEffect"*/, 0LL) )
  {
    v31 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v31 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v31->static_fields->testBackEffectPrefab;
    goto LABEL_38;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13655/*"Talk/TestCharaEffect"*/, 0LL) )
  {
    v32 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v32 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v32->static_fields->testCharaEffectPrefab;
    goto LABEL_38;
  }
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13654/*"Talk/TestCharaBackEffect"*/, 0LL) )
  {
LABEL_12:
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    AssetName = CommonEffectManager__GetAssetName(effectName, v23);
    loadEffectPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v20->fields.loadEffectPrefab;
    v26 = AssetName;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (CommonEffectManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      loadEffectPrefab,
                                      (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v27 = (UnityEngine_GameObject_o *)this;
      Component_srcLineSprite = (CommonEffectLoadComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
      if ( parent )
      {
        v29 = (UnityEngine_Transform_o *)this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v29 )
        {
          UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)this, 0LL);
          v38.fields.x = x;
          v38.fields.y = y;
          v38.fields.z = z;
          UnityEngine_Transform__set_localPosition(v29, v38, 0LL);
          identity = UnityEngine_Quaternion__get_identity(0LL);
          UnityEngine_Transform__set_localRotation(v29, identity, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v29, one, 0LL);
          if ( Component_srcLineSprite )
          {
            CommonEffectLoadComponent__Init_18097532(
              Component_srcLineSprite,
              v26,
              param,
              callback,
              isSkip,
              isPause,
              flip,
              v30);
            return;
          }
        }
      }
    }
    goto LABEL_57;
  }
  v33 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v33 = CommonEffectManager_TypeInfo;
  }
  p_testEffectPrefab = (UnityEngine_Object_o **)&v33->static_fields->testCharaBackEffectPrefab;
LABEL_38:
  v34 = *p_testEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
  _18103868 = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_57;
    name = UnityEngine_Object__get_name(v34, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v40.fields.x = x;
    v40.fields.y = y;
    v40.fields.z = z;
    _18103868 = (UnityEngine_Object_o *)CommonEffectManager__Create_18103868(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v34,
                                          v40,
                                          0,
                                          flip,
                                          v36);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_18103868, 0LL, 0LL);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_54;
  if ( !_18103868 )
LABEL_57:
    sub_B52A5C(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_18103868->klass[1]._1.gc_desc)(
    _18103868,
    param,
    _18103868->klass[1]._1.name);
LABEL_54:
  if ( callback )
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, (CommonEffectComponent_o *)_18103868, 0LL);
}


void __fastcall CommonEffectManager__LoadSkinEffects(
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42AC4B6 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4B6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v7);
}


void __fastcall CommonEffectManager__LoadSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  int32_t UiFlag; // w22
  CommonEffectManager_c *v8; // x8
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v10; // x0
  System_String_o *v11; // x22
  const MethodInfo *v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x21
  AssetManager_o *Instance; // x21
  AssetLoader_LoadEndDataHandler_o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AC4B2 & 1) == 0 )
  {
    sub_B52984(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__);
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_42AC4B2 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  v8 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v8 = CommonEffectManager_TypeInfo;
  }
  skinEffectAssetStoragePath = v8->static_fields->skinEffectAssetStoragePath;
  v18 = UiFlag + 1;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v11 = System_String__Format(skinEffectAssetStoragePath, v10, 0LL);
  if ( System_String__op_Equality(v11, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v12);
    this->fields.callbackAfterSkinLoad = callback;
    sub_B52920(&this->fields.callbackAfterSkinLoad);
    v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v13,
      (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v13;
    sub_B52920(&this->fields.skinedEffects);
    Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__,
      0LL);
    if ( !Instance )
      sub_B52A5C(v16, v17);
    AssetManager__LoadAssetStorage(Instance, v11, v15, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_42AC4B1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4B1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_42AC4B7 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4B7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void __fastcall CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  Il2CppObject *currentValue; // x21
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AC4B3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_42AC4B3 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)skinedEffects,
               (const MethodInfo_2F1B5A4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v10,
      Values,
      (const MethodInfo_241CFD4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v10,
              (const MethodInfo_274FCE4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v10.fields.currentValue;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v10,
      (const MethodInfo_274FCE0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Values,
      (const MethodInfo_2F1B9DC *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_B52920(&this->fields.skinedEffects);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_17:
    sub_B52A5C(Values, v6);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_B52920(p_loadedSkinAssetName);
}


void __fastcall CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  UnityEngine_Component_o *v8; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  UnityEngine_Object_o *v10; // x22
  const MethodInfo *v11; // x2

  if ( (byte_42AC4A6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC4A6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_26:
      sub_B52A5C(transform, v6);
    v7 = 0;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
        if ( transform )
        {
          v8 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_WebViewObject,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_WebViewObject )
              goto LABEL_26;
            LOBYTE(Component_WebViewObject->fields.onLoaded) = isSkip;
            BYTE1(Component_WebViewObject->fields.onLoaded) = 0;
          }
          else
          {
            v10 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v8,
                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_26;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v10, isSkip, v11);
            }
          }
          ++v7;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_26;
    }
  }
}


void __fastcall CommonEffectManager__Resume_18109016(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *AssetName; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  int32_t v12; // w22
  UnityEngine_Component_o *v13; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  WebViewObject_o *v15; // x23
  const MethodInfo *v16; // x2

  if ( (byte_42AC4A7 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC4A7 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( effectName )
    {
      if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      AssetName = CommonEffectManager__GetAssetName(effectName, v7);
      if ( !parent
        || (v11 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_34:
        sub_B52A5C(AssetName, v10);
      }
      v12 = 0;
      while ( v12 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_34;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0LL);
        if ( !AssetName )
          goto LABEL_34;
        v13 = (UnityEngine_Component_o *)AssetName;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)AssetName,
                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_WebViewObject,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)AssetName & 1) == 0 )
          goto LABEL_25;
        if ( !Component_WebViewObject || !v11 )
          goto LABEL_34;
        if ( System_String__Equals_44555656(v11, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
        {
          LOBYTE(Component_WebViewObject->fields.onLoaded) = isSkip;
          BYTE1(Component_WebViewObject->fields.onLoaded) = 0;
        }
        else
        {
LABEL_25:
          v15 = UnityEngine_Component__GetComponent_WebViewObject_(
                  v13,
                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
          if ( ((unsigned __int8)AssetName & 1) != 0 )
          {
            if ( !v15 || !v11 )
              goto LABEL_34;
            if ( System_String__Equals_44555656(v11, *(System_String_o **)&v15->fields.visibility, 0LL) )
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v15, isSkip, v16);
          }
        }
        ++v12;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_34;
      }
    }
    else
    {
      if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__Stop(parent, isSkip, 0, v8);
    }
  }
}


UnityEngine_GameObject_o *__fastcall CommonEffectManager__SetSkinEffect(
        System_String_o *effects,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42AC4B9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4B9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  return CommonEffectManager__SetSkinEffectLocal((CommonEffectManager_o *)Instance, effects, parent, v7);
}


UnityEngine_GameObject_o *__fastcall CommonEffectManager__SetSkinEffectLocal(
        CommonEffectManager_o *this,
        System_String_o *effect,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x20
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *transform; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AC4B5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC4B5 = 1;
  }
  v7 = 0LL;
  value = 0LL;
  if ( effect )
  {
    skinedEffects = this->fields.skinedEffects;
    if ( skinedEffects )
    {
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)skinedEffects,
             (System_Xml_XmlQualifiedName_o *)effect,
             &value,
             (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v9 = value;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v10 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v7 = (UnityEngine_GameObject_o *)v10,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v7, transform, 0LL),
              !v7) )
        {
          sub_B52A5C(v10, v11);
        }
        UnityEngine_GameObject__SetActive(v7, 1, 0LL);
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v7;
}


void __fastcall CommonEffectManager__SetSkinEffects(
        System_String_array *effects,
        UnityEngine_GameObject_o *parent,
        bool doSetDepthZero,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_42AC4B8 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_42AC4B8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v8);
  CommonEffectManager__SetSkinEffectsLocal((CommonEffectManager_o *)Instance, effects, parent, doSetDepthZero, v9);
}


void __fastcall CommonEffectManager__SetSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_String_array *effects,
        UnityEngine_GameObject_o *parent,
        bool doSetDepthZero,
        const MethodInfo *method)
{
  CommonEffectManager_o *v8; // x22
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *skinedEffects; // x0
  System_Xml_Schema_XmlSchemaObject_o *v12; // x23
  UnityEngine_GameObject_o *v13; // x23
  UnityEngine_Component_o *transform; // x0
  __int64 v15; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_42AC4B4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (CommonEffectManager_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC4B4 = 1;
  }
  value = 0LL;
  if ( effects )
  {
    if ( v8->fields.skinedEffects )
    {
      v9 = *(_QWORD *)&effects->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v9 )
          {
            v15 = sub_B52A88(this);
            sub_B52A28(v15, 0LL);
          }
          skinedEffects = (UnityEngine_UI_Dropdown_DropdownItem_o *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)skinedEffects,
                                            (System_Xml_XmlQualifiedName_o *)effects->m_Items[v10],
                                            &value,
                                            (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12 = value;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            skinedEffects = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v12,
                              (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !parent )
              break;
            v13 = (UnityEngine_GameObject_o *)skinedEffects;
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
            GameObjectExtensions__SafeSetParent(v13, transform, 0LL);
            if ( !v13 )
              break;
            UnityEngine_GameObject__SetActive(v13, 1, 0LL);
            if ( doSetDepthZero )
            {
              skinedEffects = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                v13,
                                (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0LL);
            }
          }
          LODWORD(v9) = effects->max_length;
          if ( (__int64)++v10 >= (int)v9 )
            return;
        }
        sub_B52A5C(skinedEffects, effects);
      }
    }
  }
}


void __fastcall CommonEffectManager__SetTestEffectPrefab(
        UnityEngine_GameObject_o *effectPrefab,
        UnityEngine_GameObject_o *backEffectPrefab,
        UnityEngine_GameObject_o *charaEffectPrefab,
        UnityEngine_GameObject_o *charaBackEffectPrefab,
        const MethodInfo *method)
{
  CommonEffectManager_c *v9; // x0
  struct CommonEffectManager_StaticFields *static_fields; // x0
  struct CommonEffectManager_StaticFields *v11; // x0
  struct CommonEffectManager_StaticFields *v12; // x0
  struct CommonEffectManager_StaticFields *v13; // x0

  if ( (byte_42AC4AF & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC4AF = 1;
  }
  v9 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v9 = CommonEffectManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_B52920(&static_fields->testEffectPrefab);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->testBackEffectPrefab = backEffectPrefab;
  sub_B52920(&v11->testBackEffectPrefab);
  v12 = CommonEffectManager_TypeInfo->static_fields;
  v12->testCharaEffectPrefab = charaEffectPrefab;
  sub_B52920(&v12->testCharaEffectPrefab);
  v13 = CommonEffectManager_TypeInfo->static_fields;
  v13->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_B52920(&v13->testCharaBackEffectPrefab);
}


bool __fastcall CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_42AC4A8 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC4A8 = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(0, parent, 0LL, isSkip, isLoadStop, v4);
}


bool __fastcall CommonEffectManager__StopInternal(
        bool force,
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x0
  const MethodInfo *v10; // x1
  bool v11; // w27
  int32_t v12; // w23
  bool v13; // w28
  UnityEngine_Component_o *v14; // x24
  WebViewObject_o *Component_WebViewObject; // x25
  WebViewObject_o *v16; // x24
  UnityEngine_Object_o *gameObject; // x24
  WebViewObject_c *klass; // x8

  if ( (byte_42AC4AC & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC4AC = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  AssetName = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)AssetName & 1) == 0 )
  {
    if ( effectName )
    {
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      AssetName = CommonEffectManager__GetAssetName(effectName, v10);
      effectName = AssetName;
    }
    if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_48:
      sub_B52A5C(AssetName, v10);
    v12 = 0;
    v13 = isSkip || isLoadStop;
    v11 = 1;
    while ( 1 )
    {
      if ( v12 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
        return v11;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_48;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0LL);
      if ( !AssetName )
        goto LABEL_48;
      v14 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_WebViewObject,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) == 0 )
        goto LABEL_29;
      if ( !effectName )
        goto LABEL_26;
      if ( !Component_WebViewObject )
        goto LABEL_48;
      AssetName = (System_String_o *)System_String__Equals_44555656(
                                       effectName,
                                       (System_String_o *)Component_WebViewObject->fields.onJS,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
LABEL_26:
        if ( v13 )
        {
          if ( !Component_WebViewObject )
            goto LABEL_48;
          CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_WebViewObject, v10);
        }
        else
        {
          v11 = 0;
        }
      }
      else
      {
LABEL_29:
        v16 = UnityEngine_Component__GetComponent_WebViewObject_(
                v14,
                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( effectName )
          {
            if ( !v16 )
              goto LABEL_48;
            if ( !System_String__Equals_44555656(effectName, *(System_String_o **)&v16->fields.visibility, 0LL) )
              goto LABEL_47;
          }
          else if ( !v16 )
          {
            goto LABEL_48;
          }
          if ( isSkip )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v16,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
          }
          else
          {
            klass = v16->klass;
            if ( force )
              ((void (__fastcall *)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))klass[1]._1.castClass)(
                v16,
                1LL,
                0LL,
                klass[1]._1.declaringType);
            else
              (*(void (__fastcall **)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))&klass[1]._1.this_arg.bits)(
                v16,
                1LL,
                0LL,
                klass[1]._1.element_class);
          }
        }
      }
LABEL_47:
      ++v12;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_48;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__Stop_18110472(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_42AC4A9 & 1) == 0 )
  {
    sub_B52984(&CommonEffectManager_TypeInfo);
    byte_42AC4A9 = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(0, parent, effectName, isSkip, isLoadStop, v5);
}


void __fastcall CommonEffectManager___LoadSkinEffectsLocal_b__49_0(
        CommonEffectManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *UiFlag; // x0
  __int64 v7; // x1
  struct System_String_array *EffectName; // x23
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  System_String_o *v11; // x21
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_GameObject_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_42AC4BD & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    byte_42AC4BD = 1;
  }
  skinEffectLoadLists = this->fields.skinEffectLoadLists;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  UiFlag = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantCommentManager__GetUiFlag(0LL);
  if ( !skinEffectLoadLists )
    goto LABEL_26;
  if ( (unsigned int)UiFlag >= skinEffectLoadLists->max_length )
    goto LABEL_27;
  EffectName = skinEffectLoadLists->m_Items[(int)UiFlag].fields.EffectName;
  if ( !EffectName )
    goto LABEL_26;
  v9 = *(_QWORD *)&EffectName->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( v10 < (unsigned int)v9 )
    {
      if ( !data )
        goto LABEL_26;
      v11 = EffectName->m_Items[v10];
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 data,
                                                                 v11,
                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UiFlag = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(
                                                           Object_WarBoardWaitTimeSetting,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)UiFlag & 1) == 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UiFlag = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                   (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                   (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_26;
        v13 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.skinedEffects,
          (System_Xml_XmlQualifiedName_o *)v11,
          (System_Xml_Schema_XmlSchemaObject_o *)UiFlag,
          (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v13, (UnityEngine_Component_o *)this, 0LL);
        if ( !v13 )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive(v13, 0, 0LL);
      }
      LODWORD(v9) = EffectName->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_24;
    }
LABEL_27:
    v14 = sub_B52A88(UiFlag);
    sub_B52A28(v14, 0LL);
  }
LABEL_24:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_B52920(&this->fields.callbackAfterSkinLoad);
  if ( !data )
LABEL_26:
    sub_B52A5C(UiFlag, v7);
  this->fields.loadedSkinAssetName = data->fields.name;
  sub_B52920(&this->fields.loadedSkinAssetName);
}