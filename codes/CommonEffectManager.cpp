void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct CommonEffectManager_StaticFields *static_fields; // x0
  struct CommonEffectManager_StaticFields *v11; // x0
  struct CommonEffectManager_StaticFields *v12; // x0
  struct CommonEffectManager_StaticFields *v13; // x0
  struct CommonEffectManager_StaticFields *v14; // x0
  struct CommonEffectManager_StaticFields *v15; // x0

  if ( (byte_42E4D3E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_5890/*"Effect/"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_5927/*"Effect/Skin/{0:D2}"*/, v7, v8, v9);
    byte_42E4D3E = 1;
  }
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5890/*"Effect/"*/;
  sub_B5D560(static_fields);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5927/*"Effect/Skin/{0:D2}"*/;
  sub_B5D560(&v11->skinEffectAssetStoragePath);
  v12 = CommonEffectManager_TypeInfo->static_fields;
  v12->testEffectPrefab = 0LL;
  sub_B5D560(&v12->testEffectPrefab);
  v13 = CommonEffectManager_TypeInfo->static_fields;
  v13->testBackEffectPrefab = 0LL;
  sub_B5D560(&v13->testBackEffectPrefab);
  v14 = CommonEffectManager_TypeInfo->static_fields;
  v14->testCharaEffectPrefab = 0LL;
  sub_B5D560(&v14->testCharaEffectPrefab);
  v15 = CommonEffectManager_TypeInfo->static_fields;
  v15->testCharaBackEffectPrefab = 0LL;
  sub_B5D560(&v15->testCharaBackEffectPrefab);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4D3D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E4D3D = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
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

  if ( (byte_42E4D18 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)prefab, method);
    byte_42E4D18 = 1;
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
  return CommonEffectManager__Create_18147808(parent, effectName, prefab, v13, 0, 0, v7);
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

  if ( (byte_42E4D24 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__,
      (_DWORD)effectName,
      (_DWORD)param,
      isSkip);
    byte_42E4D24 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
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
void __fastcall CommonEffectManager__CreateParam_18151900(
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

  if ( (byte_42E4D25 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__,
      (_DWORD)effectName,
      (_DWORD)param,
      callback);
    byte_42E4D25 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B5D69C(v16, v17);
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
void __fastcall CommonEffectManager__CreateParam_18152088(
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
  if ( (byte_42E4D26 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__,
      (_DWORD)effectName,
      (_DWORD)param,
      isSkip);
    byte_42E4D26 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v18);
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
void __fastcall CommonEffectManager__CreateParam_18152296(
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
  if ( (byte_42E4D27 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__,
      (_DWORD)effectName,
      (_DWORD)param,
      callback);
    byte_42E4D27 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v20);
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
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18147808(
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o *AssetName; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x24
  CommonEffectComponent_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *v28; // x24
  float v29; // s11
  float v30; // s12
  float v31; // s13
  const MethodInfo *v32; // x1
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  float v37; // s14
  float v38; // s15
  float v39; // s8
  float v40; // s9
  const MethodInfo *v41; // x4
  float v43; // [xsp+8h] [xbp-78h]
  float v44; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42E4D1B & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)prefab, isSkip);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E4D1B = 1;
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
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_16;
  v26 = transform;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         transform,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v26, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v28 = (UnityEngine_Transform_o *)transform;
  v43 = y;
  v44 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v29 = localScale.fields.x;
  v30 = localScale.fields.y;
  v31 = localScale.fields.z;
  *(UnityEngine_Quaternion_o *)&v33 = CommonEffectManager__GetFlipQuaternion(flip, v32);
  if ( !parent )
    goto LABEL_16;
  v37 = v33;
  v38 = v34;
  v39 = v35;
  v40 = v36;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v28 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)transform, 0LL);
  v46.fields.y = v43;
  v46.fields.z = v44;
  v46.fields.x = x;
  UnityEngine_Transform__set_localPosition(v28, v46, 0LL);
  v48.fields.x = v37;
  v48.fields.y = v38;
  v48.fields.z = v39;
  v48.fields.w = v40;
  UnityEngine_Transform__set_localRotation(v28, v48, 0LL);
  v47.fields.x = v29;
  v47.fields.y = v30;
  v47.fields.z = v31;
  UnityEngine_Transform__set_localScale(v28, v47, 0LL);
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B5D69C(transform, v25);
  CommonEffectComponent__Init_18130176(Component_srcLineSprite, AssetName, 0, 0, v41);
  return Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18148336(
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

  if ( (byte_42E4D19 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)prefab, isSkip);
    byte_42E4D19 = 1;
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
  return CommonEffectManager__Create_18147808(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18148512(
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

  if ( (byte_42E4D1A & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)prefab, method);
    byte_42E4D1A = 1;
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
  return CommonEffectManager__Create_18147808(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18148688(
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

  if ( (byte_42E4D1C & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)data, (_DWORD)prefab, method);
    byte_42E4D1C = 1;
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
  return CommonEffectManager__Create_18148864(parent, data, prefab, v13, 0, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18148864(
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *transform; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x23
  CommonEffectComponent_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *v27; // x23
  const MethodInfo *v28; // x1
  float v29; // s13
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s3
  float v34; // s14
  float v35; // s15
  float v36; // s8
  float v37; // s9
  const MethodInfo *v38; // x4
  float v40; // [xsp+8h] [xbp-78h]
  float v41; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42E4D1F & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)data, (_DWORD)prefab, isSkip);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E4D1F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_16;
  v25 = transform;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         transform,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v27 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v40 = localScale.fields.y;
  v41 = localScale.fields.x;
  v29 = localScale.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  *(UnityEngine_Quaternion_o *)&v30 = CommonEffectManager__GetFlipQuaternion(flip, v28);
  if ( !parent )
    goto LABEL_16;
  v34 = v30;
  v35 = v31;
  v36 = v32;
  v37 = v33;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v27 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)transform, 0LL);
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition(v27, v43, 0LL);
  v45.fields.x = v34;
  v45.fields.y = v35;
  v45.fields.z = v36;
  v45.fields.w = v37;
  UnityEngine_Transform__set_localRotation(v27, v45, 0LL);
  v44.fields.y = v40;
  v44.fields.x = v41;
  v44.fields.z = v29;
  UnityEngine_Transform__set_localScale(v27, v44, 0LL);
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B5D69C(transform, v24);
  CommonEffectComponent__Init_18130252(Component_srcLineSprite, data, 0, 0, v38);
  return Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18149368(
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

  if ( (byte_42E4D1D & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)data, (_DWORD)prefab, isSkip);
    byte_42E4D1D = 1;
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
  return CommonEffectManager__Create_18148864(parent, data, prefab, v14, 0, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18149544(
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
  if ( (byte_42E4D1E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)data, (_DWORD)prefab, method);
    byte_42E4D1E = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_18148864(parent, data, prefab, v13, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18149712(
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

  if ( (byte_42E4D20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, (_DWORD)effectName, isSkip, isPause);
    byte_42E4D20 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B5D69C(v12, v13);
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
void __fastcall CommonEffectManager__Create_18151128(
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

  if ( (byte_42E4D21 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__,
      (_DWORD)effectName,
      (_DWORD)callback,
      isSkip);
    byte_42E4D21 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
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
void __fastcall CommonEffectManager__Create_18151312(
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
  if ( (byte_42E4D22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, (_DWORD)effectName, isSkip, isPause);
    byte_42E4D22 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v16);
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
void __fastcall CommonEffectManager__Create_18151508(
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
  if ( (byte_42E4D23 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__,
      (_DWORD)effectName,
      (_DWORD)callback,
      isSkip);
    byte_42E4D23 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v18);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  int32_t v35; // w21
  UnityEngine_Component_o *v36; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_Object_o *v38; // x23
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42E4D2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    byte_42E4D2F = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_24;
    v35 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v35 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v35, 0LL);
        if ( transform )
        {
          v36 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
            goto LABEL_21;
          v38 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v36,
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
          {
LABEL_21:
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v36, 0LL);
            if ( !v32 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
          ++v35;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
    if ( !v32 )
LABEL_24:
      sub_B5D69C(transform, v34);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v40.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_18155584(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  System_String_o *AssetName; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v41; // x1
  int32_t v42; // w22
  UnityEngine_Component_o *v43; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  WebViewObject_o *v45; // x24
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42E4D30 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    byte_42E4D30 = 1;
  }
  memset(&v47, 0, sizeof(v47));
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v36);
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v39,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
      if ( !parent )
        goto LABEL_34;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_34;
      v42 = 0;
      while ( 1 )
      {
        transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
        if ( v42 >= (int)transform )
          break;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
          goto LABEL_34;
        transform = UnityEngine_Transform__GetChild(transform, v42, 0LL);
        if ( !transform )
          goto LABEL_34;
        v43 = (UnityEngine_Component_o *)transform;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)transform,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
          if ( System_String__Equals_44565128(AssetName, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
            goto LABEL_31;
        }
        v45 = UnityEngine_Component__GetComponent_WebViewObject_(
                v43,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v45 || !AssetName )
            goto LABEL_34;
          if ( System_String__Equals_44565128(AssetName, *(System_String_o **)&v45->fields.visibility, 0LL) )
          {
LABEL_31:
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v43, 0LL);
            if ( !v39 )
              goto LABEL_34;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v39,
              (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        ++v42;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
          goto LABEL_34;
      }
      if ( !v39 )
LABEL_34:
        sub_B5D69C(transform, v41);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v47,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v39,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v47,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v47.fields.current;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v47,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    else
    {
      if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__Stop(parent, 0, 0, v37);
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

  if ( (byte_42E4D2C & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isSkip, isLoadStop, method);
    byte_42E4D2C = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__ForceStop_18154680(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_42E4D2D & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, isSkip, isLoadStop);
    byte_42E4D2D = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  int32_t v23; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_42E4D13 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E4D13 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
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
      sub_B5D69C(transform, v22);
    v23 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v23 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v23, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
          }
          ++v23;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v20 )
    goto LABEL_23;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonEffectManager_c *v5; // x0

  if ( (byte_42E4D12 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4D12 = 1;
  }
  v5 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v5 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_44577788(v5->static_fields->effectAssetStoragePath, effectName, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w20
  UnityEngine_Component_o *v14; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Object_o *v16; // x21

  if ( (byte_42E4D14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E4D14 = 1;
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
      sub_B5D69C(transform, v12);
    v13 = 0;
    while ( v13 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v13, 0LL);
      if ( !transform )
        goto LABEL_22;
      v14 = (UnityEngine_Component_o *)transform;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 1;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v14,
                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
        return 1;
      ++v13;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 0;
}


bool __fastcall CommonEffectManager__IsBusy_18146048(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x1
  System_String_o *AssetName; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  int32_t v19; // w21
  UnityEngine_Component_o *v20; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v22; // x22

  if ( (byte_42E4D15 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E4D15 = 1;
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
    AssetName = CommonEffectManager__GetAssetName(effectName, v15);
    if ( !parent
      || (v18 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
    {
LABEL_32:
      sub_B5D69C(AssetName, v17);
    }
    v19 = 0;
    while ( v19 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
    {
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_32;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v19, 0LL);
      if ( !AssetName )
        goto LABEL_32;
      v20 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
        if ( !Component_WebViewObject || !v18 )
          goto LABEL_32;
        if ( System_String__Equals_44565128(v18, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 1;
      }
      v22 = UnityEngine_Component__GetComponent_WebViewObject_(
              v20,
              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v22 || !v18 )
          goto LABEL_32;
        if ( System_String__Equals_44565128(v18, *(System_String_o **)&v22->fields.visibility, 0LL) )
          return 1;
      }
      ++v19;
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
  return CommonEffectManager__IsBusy(parent, v15);
}


bool __fastcall CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E4D3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1, v2, v3);
    byte_42E4D3C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  return Instance->fields.commonCamera != 0LL;
}


bool __fastcall CommonEffectManager__IsSkinEffectLoaded(CommonEffectManager_o *this, const MethodInfo *method)
{
  return this->fields.loadedSkinAssetName != 0LL;
}


bool __fastcall CommonEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w20
  UnityEngine_Component_o *v14; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  WebViewObject_o *v16; // x21

  if ( (byte_42E4D16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E4D16 = 1;
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
      sub_B5D69C(transform, v12);
    v13 = 0;
    while ( v13 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v13, 0LL);
      if ( !transform )
        goto LABEL_24;
      v14 = (UnityEngine_Component_o *)transform;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 0;
      v16 = UnityEngine_Component__GetComponent_WebViewObject_(
              v14,
              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_24;
        if ( !v16->fields.mVisibility )
          return 0;
      }
      ++v13;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__IsStart_18147048(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x1
  System_String_o *AssetName; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  int32_t v19; // w21
  UnityEngine_Component_o *v20; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v22; // x22

  if ( (byte_42E4D17 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E4D17 = 1;
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
    AssetName = CommonEffectManager__GetAssetName(effectName, v15);
    if ( !parent
      || (v18 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
    {
LABEL_33:
      sub_B5D69C(AssetName, v17);
    }
    v19 = 0;
    while ( v19 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
    {
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_33;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v19, 0LL);
      if ( !AssetName )
        goto LABEL_33;
      v20 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
        if ( !Component_WebViewObject || !v18 )
          goto LABEL_33;
        if ( System_String__Equals_44565128(v18, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 0;
      }
      v22 = UnityEngine_Component__GetComponent_WebViewObject_(
              v20,
              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v22 || !v18 )
          goto LABEL_33;
        if ( System_String__Equals_44565128(v18, *(System_String_o **)&v22->fields.visibility, 0LL)
          && !v22->fields.mVisibility )
        {
          return 0;
        }
      }
      ++v19;
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
  return CommonEffectManager__IsStart(parent, v15);
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
  System_String_o *v18; // x26
  CommonEffectManager_o *v20; // x25
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  CommonEffectManager_c *v51; // x0
  UnityEngine_Object_o **p_testEffectPrefab; // x8
  const MethodInfo *v53; // x1
  System_String_o *AssetName; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *loadEffectPrefab; // x26
  System_String_o *v56; // x25
  UnityEngine_GameObject_o *v57; // x27
  CommonEffectLoadComponent_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v59; // x27
  const MethodInfo *v60; // x7
  CommonEffectManager_c *v61; // x0
  CommonEffectManager_c *v62; // x0
  CommonEffectManager_c *v63; // x0
  UnityEngine_Object_o *v64; // x23
  UnityEngine_Object_o *_18147808; // x24
  const MethodInfo *v66; // x5
  System_String_o *name; // x24
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v18 = effectName;
  v20 = this;
  if ( (byte_42E4D32 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)parent, (_DWORD)effectName, param);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_13712/*"Talk/TestBackEffect"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_13719/*"Talk/communicationCharaEffect"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_13717/*"Talk/bit_talk_10"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_13715/*"Talk/TestEffect"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_13711/*"Talk/Test"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_13713/*"Talk/TestCharaBackEffect"*/, v45, v46, v47);
    this = (CommonEffectManager_o *)sub_B5D5C4(&StringLiteral_13714/*"Talk/TestCharaEffect"*/, v48, v49, v50);
    byte_42E4D32 = 1;
  }
  if ( !v18 )
    goto LABEL_57;
  if ( !System_String__StartsWith(v18, (System_String_o *)StringLiteral_13711/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13719/*"Talk/communicationCharaEffect"*/, 0LL) )
      v18 = (System_String_o *)StringLiteral_13717/*"Talk/bit_talk_10"*/;
    goto LABEL_12;
  }
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13715/*"Talk/TestEffect"*/, 0LL) )
  {
    v51 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v51 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v51->static_fields->testEffectPrefab;
    goto LABEL_38;
  }
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13712/*"Talk/TestBackEffect"*/, 0LL) )
  {
    v61 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v61 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v61->static_fields->testBackEffectPrefab;
    goto LABEL_38;
  }
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13714/*"Talk/TestCharaEffect"*/, 0LL) )
  {
    v62 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v62 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v62->static_fields->testCharaEffectPrefab;
    goto LABEL_38;
  }
  if ( !System_String__op_Equality(v18, (System_String_o *)StringLiteral_13713/*"Talk/TestCharaBackEffect"*/, 0LL) )
  {
LABEL_12:
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    AssetName = CommonEffectManager__GetAssetName(v18, v53);
    loadEffectPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v20->fields.loadEffectPrefab;
    v56 = AssetName;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (CommonEffectManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      loadEffectPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v57 = (UnityEngine_GameObject_o *)this;
      Component_srcLineSprite = (CommonEffectLoadComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(v57, 0LL);
      if ( parent )
      {
        v59 = (UnityEngine_Transform_o *)this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v59 )
        {
          UnityEngine_Transform__set_parent(v59, (UnityEngine_Transform_o *)this, 0LL);
          v68.fields.x = x;
          v68.fields.y = y;
          v68.fields.z = z;
          UnityEngine_Transform__set_localPosition(v59, v68, 0LL);
          identity = UnityEngine_Quaternion__get_identity(0LL);
          UnityEngine_Transform__set_localRotation(v59, identity, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v59, one, 0LL);
          if ( Component_srcLineSprite )
          {
            CommonEffectLoadComponent__Init_18141472(
              Component_srcLineSprite,
              v56,
              param,
              callback,
              isSkip,
              isPause,
              flip,
              v60);
            return;
          }
        }
      }
    }
    goto LABEL_57;
  }
  v63 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v63 = CommonEffectManager_TypeInfo;
  }
  p_testEffectPrefab = (UnityEngine_Object_o **)&v63->static_fields->testCharaBackEffectPrefab;
LABEL_38:
  v64 = *p_testEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
  _18147808 = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v64 )
      goto LABEL_57;
    name = UnityEngine_Object__get_name(v64, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v70.fields.x = x;
    v70.fields.y = y;
    v70.fields.z = z;
    _18147808 = (UnityEngine_Object_o *)CommonEffectManager__Create_18147808(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v64,
                                          v70,
                                          0,
                                          flip,
                                          v66);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_18147808, 0LL, 0LL);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_54;
  if ( !_18147808 )
LABEL_57:
    sub_B5D69C(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_18147808->klass[1]._1.gc_desc)(
    _18147808,
    param,
    _18147808->klass[1]._1.name);
LABEL_54:
  if ( callback )
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, (CommonEffectComponent_o *)_18147808, 0LL);
}


void __fastcall CommonEffectManager__LoadSkinEffects(
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E4D38 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, loadParallelMax, (_DWORD)method, v3);
    byte_42E4D38 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v8);
}


void __fastcall CommonEffectManager__LoadSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int32_t UiFlag; // w22
  CommonEffectManager_c *v29; // x8
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x22
  const MethodInfo *v33; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v34; // x21
  AssetManager_o *Instance; // x21
  AssetLoader_LoadEndDataHandler_o *v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  int v39; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E4D34 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__, (_DWORD)callback, loadParallelMax, method);
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v25, v26, v27);
    byte_42E4D34 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  v29 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v29 = CommonEffectManager_TypeInfo;
  }
  skinEffectAssetStoragePath = v29->static_fields->skinEffectAssetStoragePath;
  v39 = UiFlag + 1;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v32 = System_String__Format(skinEffectAssetStoragePath, v31, 0LL);
  if ( System_String__op_Equality(v32, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v33);
    this->fields.callbackAfterSkinLoad = callback;
    sub_B5D560(&this->fields.callbackAfterSkinLoad);
    v34 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v34,
      (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v34;
    sub_B5D560(&this->fields.skinedEffects);
    Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v36,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__,
      0LL);
    if ( !Instance )
      sub_B5D69C(v37, v38);
    AssetManager__LoadAssetStorage(Instance, v32, v36, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E4D33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1, v2, v3);
    byte_42E4D33 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v5);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E4D39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1, v2, v3);
    byte_42E4D39 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v5);
}


void __fastcall CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v29; // x1
  Il2CppObject *currentValue; // x21
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E4D35 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v23,
      v24,
      v25);
    byte_42E4D35 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)skinedEffects,
               (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v33,
      Values,
      (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v33,
              (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v33.fields.currentValue;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v33,
      (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Values,
      (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_B5D560(&this->fields.skinedEffects);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_17:
    sub_B5D69C(Values, v29);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_B5D560(p_loadedSkinAssetName);
}


void __fastcall CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  UnityEngine_Component_o *v15; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  UnityEngine_Object_o *v17; // x22
  const MethodInfo *v18; // x2

  if ( (byte_42E4D28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, isSkip, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E4D28 = 1;
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
      sub_B5D69C(transform, v13);
    v14 = 0;
    while ( v14 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v14, 0LL);
        if ( transform )
        {
          v15 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
            v17 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v15,
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v17 )
                goto LABEL_26;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v17, isSkip, v18);
            }
          }
          ++v14;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_26;
    }
  }
}


void __fastcall CommonEffectManager__Resume_18152956(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  System_String_o *AssetName; // x0
  __int64 v19; // x1
  System_String_o *v20; // x21
  int32_t v21; // w22
  UnityEngine_Component_o *v22; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  WebViewObject_o *v24; // x23
  const MethodInfo *v25; // x2

  if ( (byte_42E4D29 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, isSkip, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E4D29 = 1;
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v16);
      if ( !parent
        || (v20 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_34:
        sub_B5D69C(AssetName, v19);
      }
      v21 = 0;
      while ( v21 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_34;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v21, 0LL);
        if ( !AssetName )
          goto LABEL_34;
        v22 = (UnityEngine_Component_o *)AssetName;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)AssetName,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
        if ( !Component_WebViewObject || !v20 )
          goto LABEL_34;
        if ( System_String__Equals_44565128(v20, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
        {
          LOBYTE(Component_WebViewObject->fields.onLoaded) = isSkip;
          BYTE1(Component_WebViewObject->fields.onLoaded) = 0;
        }
        else
        {
LABEL_25:
          v24 = UnityEngine_Component__GetComponent_WebViewObject_(
                  v22,
                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
          if ( ((unsigned __int8)AssetName & 1) != 0 )
          {
            if ( !v24 || !v20 )
              goto LABEL_34;
            if ( System_String__Equals_44565128(v20, *(System_String_o **)&v24->fields.visibility, 0LL) )
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v24, isSkip, v25);
          }
        }
        ++v21;
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
      CommonEffectManager__Stop(parent, isSkip, 0, v17);
    }
  }
}


UnityEngine_GameObject_o *__fastcall CommonEffectManager__SetSkinEffect(
        System_String_o *effects,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42E4D3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, (_DWORD)parent, (_DWORD)method, v3);
    byte_42E4D3B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  return CommonEffectManager__SetSkinEffectLocal((CommonEffectManager_o *)Instance, effects, parent, v8);
}


UnityEngine_GameObject_o *__fastcall CommonEffectManager__SetSkinEffectLocal(
        CommonEffectManager_o *this,
        System_String_o *effect,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *v13; // x20
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  System_Xml_Schema_XmlSchemaObject_o *v15; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x0
  __int64 v17; // x1
  UnityEngine_Component_o *transform; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E4D37 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__,
      (_DWORD)effect,
      (_DWORD)parent,
      method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42E4D37 = 1;
  }
  v13 = 0LL;
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
             (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v15 = value;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v16 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v15,
                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v13 = (UnityEngine_GameObject_o *)v16,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v13, transform, 0LL),
              !v13) )
        {
          sub_B5D69C(v16, v17);
        }
        UnityEngine_GameObject__SetActive(v13, 1, 0LL);
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v13;
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

  if ( (byte_42E4D3A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__,
      (_DWORD)parent,
      doSetDepthZero,
      method);
    byte_42E4D3A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonEffectManager__SetSkinEffectsLocal((CommonEffectManager_o *)Instance, effects, parent, doSetDepthZero, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__SetSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_String_array *effects,
        UnityEngine_GameObject_o *parent,
        bool doSetDepthZero,
        const MethodInfo *method)
{
  CommonEffectManager_o *v8; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x8
  unsigned __int64 v19; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *skinedEffects; // x0
  System_Xml_Schema_XmlSchemaObject_o *v21; // x23
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_Component_o *transform; // x0
  __int64 v24; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_42E4D36 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__,
      (_DWORD)effects,
      (_DWORD)parent,
      doSetDepthZero);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    this = (CommonEffectManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E4D36 = 1;
  }
  value = 0LL;
  if ( effects )
  {
    if ( v8->fields.skinedEffects )
    {
      v18 = *(_QWORD *)&effects->max_length;
      if ( (int)v18 >= 1 )
      {
        v19 = 0LL;
        while ( 1 )
        {
          if ( v19 >= (unsigned int)v18 )
          {
            v24 = sub_B5D6C8(this);
            sub_B5D668(v24, 0LL);
          }
          skinedEffects = (UnityEngine_UI_Dropdown_DropdownItem_o *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)skinedEffects,
                                            (System_Xml_XmlQualifiedName_o *)effects->m_Items[v19],
                                            &value,
                                            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v21 = value;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            skinedEffects = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v21,
                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !parent )
              break;
            v22 = (UnityEngine_GameObject_o *)skinedEffects;
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
            GameObjectExtensions__SafeSetParent(v22, transform, 0LL);
            if ( !v22 )
              break;
            UnityEngine_GameObject__SetActive(v22, 1, 0LL);
            if ( doSetDepthZero )
            {
              skinedEffects = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                v22,
                                (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0LL);
            }
          }
          LODWORD(v18) = effects->max_length;
          if ( (__int64)++v19 >= (int)v18 )
            return;
        }
        sub_B5D69C(skinedEffects, effects);
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

  if ( (byte_42E4D31 & 1) == 0 )
  {
    sub_B5D5C4(
      &CommonEffectManager_TypeInfo,
      (_DWORD)backEffectPrefab,
      (_DWORD)charaEffectPrefab,
      charaBackEffectPrefab);
    byte_42E4D31 = 1;
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
  sub_B5D560(&static_fields->testEffectPrefab);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->testBackEffectPrefab = backEffectPrefab;
  sub_B5D560(&v11->testBackEffectPrefab);
  v12 = CommonEffectManager_TypeInfo->static_fields;
  v12->testCharaEffectPrefab = charaEffectPrefab;
  sub_B5D560(&v12->testCharaEffectPrefab);
  v13 = CommonEffectManager_TypeInfo->static_fields;
  v13->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_B5D560(&v13->testCharaBackEffectPrefab);
}


bool __fastcall CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_42E4D2A & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, isSkip, isLoadStop, method);
    byte_42E4D2A = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(0, parent, 0LL, isSkip, isLoadStop, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__StopInternal(
        bool force,
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_o *AssetName; // x0
  const MethodInfo *v19; // x1
  bool v20; // w27
  int32_t v21; // w23
  bool v22; // w28
  UnityEngine_Component_o *v23; // x24
  WebViewObject_o *Component_WebViewObject; // x25
  WebViewObject_o *v25; // x24
  UnityEngine_Object_o *gameObject; // x24
  WebViewObject_c *klass; // x8

  v7 = effectName;
  if ( (byte_42E4D2E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)parent, (_DWORD)effectName, isSkip);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E4D2E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  AssetName = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)AssetName & 1) == 0 )
  {
    if ( v7 )
    {
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      AssetName = CommonEffectManager__GetAssetName(v7, v19);
      v7 = AssetName;
    }
    if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_48:
      sub_B5D69C(AssetName, v19);
    v21 = 0;
    v22 = isSkip || isLoadStop;
    v20 = 1;
    while ( 1 )
    {
      if ( v21 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
        return v20;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_48;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v21, 0LL);
      if ( !AssetName )
        goto LABEL_48;
      v23 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
      if ( !v7 )
        goto LABEL_26;
      if ( !Component_WebViewObject )
        goto LABEL_48;
      AssetName = (System_String_o *)System_String__Equals_44565128(
                                       v7,
                                       (System_String_o *)Component_WebViewObject->fields.onJS,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
LABEL_26:
        if ( v22 )
        {
          if ( !Component_WebViewObject )
            goto LABEL_48;
          CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_WebViewObject, v19);
        }
        else
        {
          v20 = 0;
        }
      }
      else
      {
LABEL_29:
        v25 = UnityEngine_Component__GetComponent_WebViewObject_(
                v23,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( v7 )
          {
            if ( !v25 )
              goto LABEL_48;
            if ( !System_String__Equals_44565128(v7, *(System_String_o **)&v25->fields.visibility, 0LL) )
              goto LABEL_47;
          }
          else if ( !v25 )
          {
            goto LABEL_48;
          }
          if ( isSkip )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v25,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
          }
          else
          {
            klass = v25->klass;
            if ( force )
              ((void (__fastcall *)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))klass[1]._1.castClass)(
                v25,
                1LL,
                0LL,
                klass[1]._1.declaringType);
            else
              (*(void (__fastcall **)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))&klass[1]._1.this_arg.bits)(
                v25,
                1LL,
                0LL,
                klass[1]._1.element_class);
          }
        }
      }
LABEL_47:
      ++v21;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_48;
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__Stop_18154412(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_42E4D2B & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)effectName, isSkip, isLoadStop);
    byte_42E4D2B = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *UiFlag; // x0
  __int64 v20; // x1
  struct System_String_array *EffectName; // x23
  __int64 v22; // x8
  unsigned __int64 v23; // x24
  System_String_o *v24; // x21
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_GameObject_o *v26; // x22
  __int64 v27; // x0

  if ( (byte_42E4D3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v15, v16, v17);
    byte_42E4D3F = 1;
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
  v22 = *(_QWORD *)&EffectName->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    while ( v23 < (unsigned int)v22 )
    {
      if ( !data )
        goto LABEL_26;
      v24 = EffectName->m_Items[v23];
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 data,
                                                                 v24,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_26;
        v26 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.skinedEffects,
          (System_Xml_XmlQualifiedName_o *)v24,
          (System_Xml_Schema_XmlSchemaObject_o *)UiFlag,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v26, (UnityEngine_Component_o *)this, 0LL);
        if ( !v26 )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive(v26, 0, 0LL);
      }
      LODWORD(v22) = EffectName->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_24;
    }
LABEL_27:
    v27 = sub_B5D6C8(UiFlag);
    sub_B5D668(v27, 0LL);
  }
LABEL_24:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_B5D560(&this->fields.callbackAfterSkinLoad);
  if ( !data )
LABEL_26:
    sub_B5D69C(UiFlag, v20);
  this->fields.loadedSkinAssetName = data->fields.name;
  sub_B5D560(&this->fields.loadedSkinAssetName);
}