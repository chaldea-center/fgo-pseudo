void CommonEffectManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct CommonEffectManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct CommonEffectManager_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct CommonEffectManager_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct CommonEffectManager_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct CommonEffectManager_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C58431 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5850/*"Effect/"*/);
    sub_1C3E564(&StringLiteral_5891/*"Effect/Skin/{0:D2}"*/);
    byte_4C58431 = 1;
  }
  CommonEffectManager_TypeInfo->static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5850/*"Effect/"*/;
  sub_1C3E508((CGThumbnailListItem_o *)CommonEffectManager_TypeInfo->static_fields, StringLiteral_5850/*"Effect/"*/, v1, v2);
  v3 = StringLiteral_5891/*"Effect/Skin/{0:D2}"*/;
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5891/*"Effect/Skin/{0:D2}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->skinEffectAssetStoragePath, v3, v5, v6);
  v7 = CommonEffectManager_TypeInfo->static_fields;
  v7->testEffectPrefab = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v7->testEffectPrefab, 0, v8, v9);
  v10 = CommonEffectManager_TypeInfo->static_fields;
  v10->testBackEffectPrefab = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->testBackEffectPrefab, 0, v11, v12);
  v13 = CommonEffectManager_TypeInfo->static_fields;
  v13->testCharaEffectPrefab = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v13->testCharaEffectPrefab, 0, v14, v15);
  v16 = CommonEffectManager_TypeInfo->static_fields;
  v16->testCharaBackEffectPrefab = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->testCharaBackEffectPrefab, 0, v17, v18);
}


void CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C58430 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
    byte_4C58430 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
}


CommonEffectComponent_o *CommonEffectManager__Create(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5840A & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5840A = 1;
  }
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_43805464(parent, effectName, prefab, v13, 0, 0, v4);
}


void CommonEffectManager__CreateParam(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        Il2CppObject *param,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v14; // x1
  CommonEffectManager_o *v15; // x25
  const MethodInfo *v16; // [xsp+0h] [xbp-60h]

  if ( (byte_4C58416 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58416 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_4C506A1 )
  {
    Instance = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v15 )
    sub_1C3E7C0(Instance, v14);
  CommonEffectManager__LoadCreateLocal(
    v15,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    param,
    0,
    isSkip,
    isPause,
    flip,
    v16);
}


void CommonEffectManager__CreateParam_43809684(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        Il2CppObject *param,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v16; // x1
  CommonEffectManager_o *v17; // x26
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4C58417 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58417 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v17 = (CommonEffectManager_o *)Instance;
  if ( !byte_4C506A1 )
  {
    Instance = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v17 )
    sub_1C3E7C0(Instance, v16);
  CommonEffectManager__LoadCreateLocal(
    v17,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    param,
    callback,
    isSkip,
    isPause,
    flip,
    v18);
}


void CommonEffectManager__CreateParam_43809916(
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C58418 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58418 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v18);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v20,
    param,
    0,
    isSkip,
    isPause,
    flip,
    v19);
}


void CommonEffectManager__CreateParam_43810120(
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
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // [xsp+0h] [xbp-80h]
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C58419 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58419 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v20);
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


CommonEffectComponent_o *CommonEffectManager__Create_43805464(
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
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *v19; // x24
  float v20; // s11
  float v21; // s12
  float v22; // s13
  const MethodInfo *v23; // x1
  float v24; // s14
  float v25; // s15
  float v26; // s8
  float w; // s9
  float v29; // [xsp+48h] [xbp-38h]
  float v30; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o FlipQuaternion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C5840D & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5840D = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  AssetName = CommonEffectManager__GetAssetName(effectName, (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v17 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0);
  if ( !prefab )
    goto LABEL_14;
  v19 = (UnityEngine_Transform_o *)transform;
  v29 = y;
  v30 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v20 = localScale.fields.x;
  v21 = localScale.fields.y;
  v22 = localScale.fields.z;
  FlipQuaternion = CommonEffectManager__GetFlipQuaternion(flip, v23);
  if ( !parent )
    goto LABEL_14;
  v24 = FlipQuaternion.fields.x;
  v25 = FlipQuaternion.fields.y;
  v26 = FlipQuaternion.fields.z;
  w = FlipQuaternion.fields.w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v19 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)transform, 0);
  v32.fields.y = v29;
  v32.fields.z = v30;
  v32.fields.x = x;
  UnityEngine_Transform__set_localPosition(v19, v32, 0);
  v35.fields.x = v24;
  v35.fields.y = v25;
  v35.fields.z = v26;
  v35.fields.w = w;
  UnityEngine_Transform__set_localRotation(v19, v35, 0);
  v33.fields.x = v20;
  v33.fields.y = v21;
  v33.fields.z = v22;
  UnityEngine_Transform__set_localScale(v19, v33, 0);
  if ( !Component_object )
LABEL_14:
    sub_1C3E7C0(transform, v16);
  CommonEffectComponent__Init_43786516((CommonEffectComponent_o *)Component_object, AssetName, 0, 0, 0);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *CommonEffectManager__Create_43805968(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5840B & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5840B = 1;
  }
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = x;
  return CommonEffectManager__Create_43805464(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *CommonEffectManager__Create_43806168(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5840C & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5840C = 1;
  }
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = x;
  return CommonEffectManager__Create_43805464(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *CommonEffectManager__Create_43806368(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5840E & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5840E = 1;
  }
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_43806568(parent, data, prefab, v13, 0, 0, v4);
}


CommonEffectComponent_o *CommonEffectManager__Create_43806568(
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
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v18; // x23
  const MethodInfo *v19; // x1
  float v20; // s13
  float v21; // s14
  float v22; // s15
  float v23; // s8
  float w; // s9
  float v26; // [xsp+48h] [xbp-38h]
  float v27; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o FlipQuaternion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C58411 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58411 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v16 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
  if ( !prefab )
    goto LABEL_14;
  v18 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v20 = localScale.fields.z;
  v26 = localScale.fields.y;
  v27 = localScale.fields.x;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  FlipQuaternion = CommonEffectManager__GetFlipQuaternion(flip, v19);
  if ( !parent )
    goto LABEL_14;
  v21 = FlipQuaternion.fields.x;
  v22 = FlipQuaternion.fields.y;
  v23 = FlipQuaternion.fields.z;
  w = FlipQuaternion.fields.w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v18 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)transform, 0);
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  UnityEngine_Transform__set_localPosition(v18, v29, 0);
  v32.fields.x = v21;
  v32.fields.y = v22;
  v32.fields.z = v23;
  v32.fields.w = w;
  UnityEngine_Transform__set_localRotation(v18, v32, 0);
  v30.fields.y = v26;
  v30.fields.x = v27;
  v30.fields.z = v20;
  UnityEngine_Transform__set_localScale(v18, v30, 0);
  if ( !Component_object )
LABEL_14:
    sub_1C3E7C0(transform, v15);
  CommonEffectComponent__Init_43786588((CommonEffectComponent_o *)Component_object, data, 0, 0, 0);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *CommonEffectManager__Create_43807048(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5840F & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5840F = 1;
  }
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = x;
  return CommonEffectManager__Create_43806568(parent, data, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *CommonEffectManager__Create_43807248(
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
  if ( (byte_4C58410 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C58410 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_43806568(parent, data, prefab, v13, 0, 0, v5);
}


void CommonEffectManager__Create_43807404(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v12; // x1
  CommonEffectManager_o *v13; // x24
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]

  if ( (byte_4C58412 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58412 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v13 = (CommonEffectManager_o *)Instance;
  if ( !byte_4C506A1 )
  {
    Instance = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v13 )
    sub_1C3E7C0(Instance, v12);
  CommonEffectManager__LoadCreateLocal(
    v13,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    0,
    isSkip,
    isPause,
    flip,
    v14);
}


void CommonEffectManager__Create_43808832(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v14; // x1
  CommonEffectManager_o *v15; // x25
  const MethodInfo *v16; // [xsp+0h] [xbp-60h]

  if ( (byte_4C58413 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58413 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_4C506A1 )
  {
    Instance = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v15 )
    sub_1C3E7C0(Instance, v14);
  CommonEffectManager__LoadCreateLocal(
    v15,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    callback,
    isSkip,
    isPause,
    flip,
    v16);
}


void CommonEffectManager__Create_43809060(
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C58414 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58414 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v16);
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v18,
    0,
    0,
    isSkip,
    isPause,
    flip,
    v17);
}


void CommonEffectManager__Create_43809252(
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C58415 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58415 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v18);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v20,
    0,
    callback,
    isSkip,
    isPause,
    flip,
    v19);
}


void CommonEffectManager__Destroy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Component_o *v7; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v15; // x1
  Il2CppClass **v16; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C58421 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58421 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
  {
    v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v3,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_24;
    v6 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
      if ( v6 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0);
      if ( !transform )
        goto LABEL_24;
      v7 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        goto LABEL_18;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
      {
LABEL_18:
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v7, 0);
        if ( !v3 )
          goto LABEL_24;
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        v15 = transform;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)transform,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v15;
          sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
        }
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_24;
    }
    if ( !v3 )
LABEL_24:
      sub_1C3E7C0(transform, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      v3,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v18.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void CommonEffectManager__DestroyByMark(
        UnityEngine_GameObject_o *parent,
        System_String_o *markKey,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x20
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x23
  _BOOL8 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  Il2CppObject *gameObject; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x8
  __int64 v36; // x20
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C58423 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_MarkComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C58423 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( (v5 & 1) == 0 )
  {
    if ( !parent )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !transform )
      goto LABEL_56;
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
    if ( !Enumerator )
      sub_1C3E7C0(0, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_13;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_13:
        v14 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
              Enumerator,
              *(_QWORD *)(v14 + 8))
          & 1) == 0 )
        break;
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 2;
          if ( !v16 )
            goto LABEL_20;
        }
        v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
      }
      else
      {
LABEL_20:
        v18 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                         Enumerator,
                                         *(_QWORD *)(v18 + 8));
      v21 = v19;
      if ( !v19 )
        goto LABEL_52;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v19->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C3EA80(v19);
LABEL_52:
        sub_1C3E7C0(v19, v20);
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v19,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_MarkComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v24 )
      {
        if ( !Component_object )
          sub_1C3E7C0(v24, v25);
        if ( MarkComponent__Contains((MarkComponent_o *)Component_object, markKey, v26) )
        {
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(v21, 0);
          v30 = gameObject;
          if ( !v8 )
            sub_1C3E7C0(gameObject, gameObject);
          items = v8->fields._items;
          v32 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1C3E7C0(gameObject, gameObject);
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              gameObject,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v30;
            sub_1C3E508((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v30, v28, v29);
          }
        }
      }
    }
    v5 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
    if ( v5 )
    {
      v35 = *(_QWORD *)v5;
      v36 = v5;
      v37 = *(unsigned __int16 *)(*(_QWORD *)v5 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v5 + 302LL) )
      {
        v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_40;
        }
        v39 = v35 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_40:
        v39 = sub_1C8ED7C(v5, System_IDisposable_TypeInfo, 0);
      }
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
    }
    if ( !v8 )
LABEL_56:
      sub_1C3E7C0(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      v8,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v41,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v41.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v41,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void CommonEffectManager__Destroy_43813516(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x4
  System_String_o *AssetName; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w22
  UnityEngine_Component_o *v12; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v14; // x24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v20; // x1
  Il2CppClass **v21; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C58422 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58422 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( effectName )
      goto LABEL_8;
LABEL_41:
    CommonEffectManager__Stop(parent, 0, 0, 0, v6);
    return;
  }
  if ( !effectName )
    goto LABEL_41;
LABEL_8:
  AssetName = CommonEffectManager__GetAssetName(effectName, v5);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_32;
  transform = UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_32;
  v11 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
    if ( v11 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_32;
    transform = UnityEngine_Transform__GetChild(transform, v11, 0);
    if ( !transform )
      goto LABEL_32;
    v12 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_63671772(AssetName, (System_String_o *)Component_object[2].klass, 0) )
        goto LABEL_26;
    }
    v14 = UnityEngine_Component__GetComponent_object_(
            v12,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v14 || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_63671772(AssetName, (System_String_o *)v14[5].klass, 0) )
      {
LABEL_26:
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v12, 0);
        if ( !v8 )
          goto LABEL_32;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v8->fields._size;
        v20 = transform;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)transform,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
    }
    ++v11;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_32;
  }
  if ( !v8 )
LABEL_32:
    sub_1C3E7C0(transform, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v8,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  if ( (byte_4C5841E & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5841E = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, 0, isSkip, isLoadStop, markKey, v5);
}


bool CommonEffectManager__ForceStop_43812444(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_4C5841F & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5841F = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, effectName, isSkip, isLoadStop, markKey, v6);
}


CommonEffectComponent_array *CommonEffectManager__Get(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  Il2CppObject *Component_object; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4C58405 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58405 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_24:
      sub_1C3E7C0(transform, v5);
    v6 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
      if ( v6 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0);
      if ( !transform )
        goto LABEL_24;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_24;
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_CommonEffectComponent__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v13[4] = (Il2CppClass *)Component_object;
          sub_1C3E508((CGThumbnailListItem_o *)(v13 + 4), (int32_t)Component_object, v8, v9);
        }
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_24;
    }
  }
  if ( !v3 )
    goto LABEL_24;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v3,
                                          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_4C58404 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C58404 = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_63636468(v3->static_fields->effectAssetStoragePath, effectName, 0);
}


UnityEngine_Quaternion_o CommonEffectManager__GetFlipQuaternion(int32_t flip, const MethodInfo *method)
{
  int v2; // w10
  struct UnityEngine_Quaternion_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  float w; // s3
  float v7; // s2
  float v8; // s1
  float x; // s0
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = flip - 1;
  if ( (unsigned int)(flip - 1) >= 3 )
  {
    if ( !byte_4C506A7 )
    {
      sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
      byte_4C506A7 = 1;
    }
    static_fields = UnityEngine_Quaternion_TypeInfo->static_fields;
    w = static_fields->identityQuaternion.fields.w;
    p_y = &static_fields->identityQuaternion.fields.y;
    p_z = &static_fields->identityQuaternion.fields.z;
  }
  else
  {
    static_fields = (struct UnityEngine_Quaternion_StaticFields *)((char *)&unk_C4C52C + 4 * v2);
    p_y = (float *)((char *)&unk_C4C538 + 4 * v2);
    p_z = (float *)((char *)&unk_C4C544 + 4 * v2);
    w = 0.0;
  }
  v7 = *p_z;
  v8 = *p_y;
  x = static_fields->identityQuaternion.fields.x;
  result.fields.w = w;
  result.fields.z = v7;
  result.fields.y = v8;
  result.fields.x = x;
  return result;
}


bool CommonEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v9; // x21

  if ( (byte_4C58406 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58406 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_20:
      sub_1C3E7C0(transform, v4);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_20;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0);
      if ( !transform )
        goto LABEL_20;
      v7 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        return 1;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
        return 1;
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_20;
    }
  }
  return 0;
}


bool CommonEffectManager__IsBusy_43803812(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *AssetName; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  int32_t v10; // w21
  UnityEngine_Component_o *v11; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v13; // x22

  if ( (byte_4C58407 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58407 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return 0;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
    {
LABEL_9:
      AssetName = CommonEffectManager__GetAssetName(effectName, v5);
      if ( !parent
        || (v9 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0) )
      {
LABEL_28:
        sub_1C3E7C0(AssetName, v8);
      }
      v10 = 0;
      while ( v10 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( !AssetName )
          goto LABEL_28;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v10, 0);
        if ( !AssetName )
          goto LABEL_28;
        v11 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v9 )
            goto LABEL_28;
          if ( System_String__Equals_63671772(v9, (System_String_o *)Component_object[2].klass, 0) )
            return 1;
        }
        v13 = UnityEngine_Component__GetComponent_object_(
                v11,
                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v13 || !v9 )
            goto LABEL_28;
          if ( System_String__Equals_63671772(v9, (System_String_o *)v13[5].klass, 0) )
            return 1;
        }
        ++v10;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( !AssetName )
          goto LABEL_28;
      }
      return 0;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( effectName )
      goto LABEL_9;
  }
  return CommonEffectManager__IsBusy(parent, v5);
}


bool CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C5842F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C5842F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return Instance[4].klass != 0;
}


bool CommonEffectManager__IsSkinEffectLoaded(CommonEffectManager_o *this, const MethodInfo *method)
{
  return this->fields.loadedSkinAssetName != 0;
}


bool CommonEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v9; // x21

  if ( (byte_4C58408 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58408 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_22:
      sub_1C3E7C0(transform, v4);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0);
      if ( !transform )
        goto LABEL_22;
      v7 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        return 0;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_22;
        if ( !LOBYTE(v9[7].klass) )
          return 0;
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 1;
}


bool CommonEffectManager__IsStart_43804728(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *AssetName; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  int32_t v10; // w21
  UnityEngine_Component_o *v11; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v13; // x22

  if ( (byte_4C58409 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58409 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return 1;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
    {
LABEL_9:
      AssetName = CommonEffectManager__GetAssetName(effectName, v5);
      if ( !parent
        || (v9 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0) )
      {
LABEL_29:
        sub_1C3E7C0(AssetName, v8);
      }
      v10 = 0;
      while ( v10 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( !AssetName )
          goto LABEL_29;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v10, 0);
        if ( !AssetName )
          goto LABEL_29;
        v11 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v9 )
            goto LABEL_29;
          if ( System_String__Equals_63671772(v9, (System_String_o *)Component_object[2].klass, 0) )
            return 0;
        }
        v13 = UnityEngine_Component__GetComponent_object_(
                v11,
                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v13 || !v9 )
            goto LABEL_29;
          if ( System_String__Equals_63671772(v9, (System_String_o *)v13[5].klass, 0) && !LOBYTE(v13[7].klass) )
            return 0;
        }
        ++v10;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( !AssetName )
          goto LABEL_29;
      }
      return 1;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( effectName )
      goto LABEL_9;
  }
  return CommonEffectManager__IsStart(parent, v5);
}


void CommonEffectManager__LoadCreateLocal(
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
  __int64 v22; // x9
  const MethodInfo *v23; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *loadEffectPrefab; // x26
  System_String_o *v26; // x25
  CommonEffectManager_o *v27; // x27
  Il2CppObject *Component_object; // x26
  CommonEffectManager_o *v29; // x27
  const MethodInfo *v30; // x7
  UnityEngine_Object_o *v31; // x24
  UnityEngine_Object_o *_43805464; // x23
  const MethodInfo *v33; // x5
  System_String_o *name; // x23
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_4C58425 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_13641/*"Talk/TestBackEffect"*/);
    sub_1C3E564(&StringLiteral_13648/*"Talk/communicationCharaEffect"*/);
    sub_1C3E564(&StringLiteral_13646/*"Talk/bit_talk_10"*/);
    sub_1C3E564(&StringLiteral_13644/*"Talk/TestEffect"*/);
    sub_1C3E564(&StringLiteral_13640/*"Talk/Test"*/);
    sub_1C3E564(&StringLiteral_13642/*"Talk/TestCharaBackEffect"*/);
    this = (CommonEffectManager_o *)sub_1C3E564(&StringLiteral_13643/*"Talk/TestCharaEffect"*/);
    byte_4C58425 = 1;
  }
  if ( !effectName )
    goto LABEL_52;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_13640/*"Talk/Test"*/, 0) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13648/*"Talk/communicationCharaEffect"*/, 0) )
      effectName = (System_String_o *)StringLiteral_13646/*"Talk/bit_talk_10"*/;
    goto LABEL_11;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13644/*"Talk/TestEffect"*/, 0) )
  {
    v21 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v21 = CommonEffectManager_TypeInfo;
    }
    v22 = 16;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13641/*"Talk/TestBackEffect"*/, 0) )
  {
    v21 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v21 = CommonEffectManager_TypeInfo;
    }
    v22 = 24;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13643/*"Talk/TestCharaEffect"*/, 0) )
  {
    v21 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v21 = CommonEffectManager_TypeInfo;
    }
    v22 = 32;
    goto LABEL_36;
  }
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13642/*"Talk/TestCharaBackEffect"*/, 0) )
  {
LABEL_11:
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    AssetName = CommonEffectManager__GetAssetName(effectName, v23);
    loadEffectPrefab = (Il2CppObject *)v20->fields.loadEffectPrefab;
    v26 = AssetName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CommonEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                      loadEffectPrefab,
                                      (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v27 = this;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0);
      if ( parent )
      {
        v29 = this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( v29 )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v29, (UnityEngine_Transform_o *)this, 0);
          v35.fields.x = x;
          v35.fields.y = y;
          v35.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v29, v35, 0);
          if ( !byte_4C506A7 )
          {
            sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
            byte_4C506A7 = 1;
          }
          UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)v29,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          if ( !byte_4C506A6 )
          {
            sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A6 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v29,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0);
          if ( Component_object )
          {
            CommonEffectLoadComponent__Init_43799048(
              (CommonEffectLoadComponent_o *)Component_object,
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
    goto LABEL_52;
  }
  v21 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v21 = CommonEffectManager_TypeInfo;
  }
  v22 = 40;
LABEL_36:
  v31 = *(UnityEngine_Object_o **)((char *)&v21->static_fields->effectAssetStoragePath + v22);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v31, 0, 0);
  _43805464 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_52;
    name = UnityEngine_Object__get_name(v31, 0);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v36.fields.x = x;
    v36.fields.y = y;
    v36.fields.z = z;
    _43805464 = (UnityEngine_Object_o *)CommonEffectManager__Create_43805464(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v31,
                                          v36,
                                          0,
                                          flip,
                                          v33);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_43805464, 0, 0);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  if ( !_43805464 )
LABEL_52:
    sub_1C3E7C0(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, void *))_43805464->klass[1]._1.image)(
    _43805464,
    param,
    _43805464->klass[1]._1.gc_desc);
LABEL_49:
  if ( callback )
    ((void (__fastcall *)(intptr_t, UnityEngine_Object_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      _43805464,
      callback->fields.method);
}


void CommonEffectManager__LoadSkinEffects(System_Action_o *callback, int32_t loadParallelMax, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4C5842B & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C5842B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v6);
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v7);
}


void CommonEffectManager__LoadSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  int32_t UiFlag; // w0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  CommonEffectManager_c *v14; // x8
  int32_t v15; // w22
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_Dictionary_object__object__o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *Instance; // x21
  AssetLoader_LoadEndDataHandler_o *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  int v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C58427 & 1) == 0 )
  {
    sub_1C3E564(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__50_0__);
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&ServantCommentManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C58427 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0);
  v14 = CommonEffectManager_TypeInfo;
  v15 = UiFlag;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v14 = CommonEffectManager_TypeInfo;
  }
  skinEffectAssetStoragePath = v14->static_fields->skinEffectAssetStoragePath;
  v29 = v15 + 1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v8, v9, v10, v11, v12, v13);
  v18 = System_String__Format(skinEffectAssetStoragePath, v17, 0);
  if ( System_String__op_Equality(v18, this->fields.loadedSkinAssetName, 0) )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v19);
    this->fields.callbackAfterSkinLoad = callback;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackAfterSkinLoad, (int32_t)callback, v20, v21);
    v22 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v22,
      (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v22;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.skinedEffects, (int32_t)v22, v23, v24);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v26,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__50_0__,
      0);
    if ( !Instance )
      sub_1C3E7C0(v27, v28);
    AssetManager__LoadAssetStorage((AssetManager_o *)Instance, v18, v26, loadParallelMax, 0);
  }
}


void CommonEffectManager__Reboot(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4C58426 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C58426 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4C5842C & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C5842C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  Il2CppObject *currentValue; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C58428 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4C58428 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
               (const MethodInfo_3475610 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v14,
      Values,
      (const MethodInfo_3AF64E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v14,
              (const MethodInfo_3573240 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v14.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71341752((UnityEngine_Object_o *)currentValue, 0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v14,
      (const MethodInfo_357323C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Values,
      (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.skinedEffects, 0, v8, v9);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_16:
    sub_1C3E7C0(Values, v6);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0);
  *p_loadedSkinAssetName = 0;
  sub_1C3E508((CGThumbnailListItem_o *)p_loadedSkinAssetName, 0, v12, v13);
}


void CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  UnityEngine_Component_o *v8; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v10; // x22

  if ( (byte_4C5841A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5841A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_24:
      sub_1C3E7C0(transform, v6);
    v7 = 0;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v7, 0);
        if ( transform )
        {
          v8 = (UnityEngine_Component_o *)transform;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_24;
            LOBYTE(Component_object[4].klass) = isSkip;
            BYTE1(Component_object[4].klass) = 0;
          }
          else
          {
            v10 = UnityEngine_Component__GetComponent_object_(
                    v8,
                    (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_24;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v10, isSkip, 0);
            }
          }
          ++v7;
          transform = UnityEngine_GameObject__get_transform(parent, 0);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
  }
}


void CommonEffectManager__Resume_43810744(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x4
  System_String_o *AssetName; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  int32_t v12; // w22
  UnityEngine_Component_o *v13; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v15; // x23

  if ( (byte_4C5841B & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5841B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
      goto LABEL_9;
LABEL_32:
    CommonEffectManager__Stop(parent, isSkip, 0, 0, v8);
    return;
  }
  j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  if ( !effectName )
    goto LABEL_32;
LABEL_9:
  AssetName = CommonEffectManager__GetAssetName(effectName, v7);
  if ( !parent
    || (v11 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0) )
  {
LABEL_30:
    sub_1C3E7C0(AssetName, v10);
  }
  v12 = 0;
  while ( v12 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0) )
  {
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
    if ( !AssetName )
      goto LABEL_30;
    AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0);
    if ( !AssetName )
      goto LABEL_30;
    v13 = (UnityEngine_Component_o *)AssetName;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)AssetName,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)AssetName & 1) == 0 )
      goto LABEL_22;
    if ( !Component_object || !v11 )
      goto LABEL_30;
    if ( System_String__Equals_63671772(v11, (System_String_o *)Component_object[2].klass, 0) )
    {
      LOBYTE(Component_object[4].klass) = isSkip;
      BYTE1(Component_object[4].klass) = 0;
    }
    else
    {
LABEL_22:
      v15 = UnityEngine_Component__GetComponent_object_(
              v13,
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v15 || !v11 )
          goto LABEL_30;
        if ( System_String__Equals_63671772(v11, (System_String_o *)v15[5].klass, 0) )
          CommonEffectComponent__Resume((CommonEffectComponent_o *)v15, isSkip, 0);
      }
    }
    ++v12;
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
    if ( !AssetName )
      goto LABEL_30;
  }
}


UnityEngine_GameObject_o *CommonEffectManager__SetSkinEffect(
        System_String_o *effects,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4C5842E & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C5842E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v6);
  return CommonEffectManager__SetSkinEffectLocal((CommonEffectManager_o *)Instance, effects, parent, v7);
}


UnityEngine_GameObject_o *CommonEffectManager__SetSkinEffectLocal(
        CommonEffectManager_o *this,
        System_String_o *effect,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v7; // x20
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5842A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5842A = 1;
  }
  v7 = 0;
  value = 0;
  if ( effect )
  {
    skinedEffects = this->fields.skinedEffects;
    if ( skinedEffects )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
             (Il2CppObject *)effect,
             &value,
             (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v9 = value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__Instantiate_object_(
                v9,
                (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v7 = (UnityEngine_GameObject_o *)v10,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0),
              GameObjectExtensions__SafeSetParent(v7, transform, 0),
              !v7) )
        {
          sub_1C3E7C0(v10, v11);
        }
        UnityEngine_GameObject__SetActive(v7, 1, 0);
      }
      else
      {
        return 0;
      }
    }
  }
  return v7;
}


System_Collections_Generic_List_GameObject__o *CommonEffectManager__SetSkinEffects(
        System_String_array *effectNameArray,
        UnityEngine_GameObject_o *parent,
        bool doSetDepthZero,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4C5842D & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4C5842D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v8);
  return CommonEffectManager__SetSkinEffectsLocal(
           (CommonEffectManager_o *)Instance,
           effectNameArray,
           parent,
           doSetDepthZero,
           v9);
}


System_Collections_Generic_List_GameObject__o *CommonEffectManager__SetSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_String_array *effectNameArray,
        UnityEngine_GameObject_o *parent,
        bool doSetDepthZero,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x25
  System_Collections_Generic_Dictionary_object__object__o *skinedEffects; // x0
  Il2CppObject *v15; // x24
  UnityEngine_GameObject_o *v16; // x24
  UnityEngine_Component_o *transform; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C58429 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58429 = 1;
  }
  v9 = 0;
  value = 0;
  if ( effectNameArray )
  {
    if ( this->fields.skinedEffects )
    {
      v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v9,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
      max_length = effectNameArray->max_length;
      if ( (int)max_length >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)max_length )
            sub_1C3E7C8(v10, v11);
          skinedEffects = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                  skinedEffects,
                  (Il2CppObject *)effectNameArray->m_Items[v13],
                  &value,
                  (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( v10 )
          {
            v15 = value;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            skinedEffects = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__Instantiate_object_(
                                                                                         v15,
                                                                                         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !parent )
              break;
            v16 = (UnityEngine_GameObject_o *)skinedEffects;
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0);
            GameObjectExtensions__SafeSetParent(v16, transform, 0);
            if ( !v16 )
              break;
            UnityEngine_GameObject__SetActive(v16, 1, 0);
            if ( doSetDepthZero )
            {
              skinedEffects = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                                           v16,
                                                                                           (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0);
            }
            if ( !v9 )
              break;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)v16,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v16;
              sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
            }
          }
          LODWORD(max_length) = effectNameArray->max_length;
          if ( (__int64)++v13 >= (int)max_length )
            return (System_Collections_Generic_List_GameObject__o *)v9;
        }
        sub_1C3E7C0(skinedEffects, v11);
      }
    }
  }
  return (System_Collections_Generic_List_GameObject__o *)v9;
}


void CommonEffectManager__SetTestEffectPrefab(
        UnityEngine_GameObject_o *effectPrefab,
        UnityEngine_GameObject_o *backEffectPrefab,
        UnityEngine_GameObject_o *charaEffectPrefab,
        UnityEngine_GameObject_o *charaBackEffectPrefab,
        const MethodInfo *method)
{
  CommonEffectManager_c *v9; // x0
  struct CommonEffectManager_StaticFields *static_fields; // x0
  struct CommonEffectManager_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct CommonEffectManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct CommonEffectManager_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C58424 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C58424 = 1;
  }
  v9 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v9 = CommonEffectManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&static_fields->testEffectPrefab,
    (int32_t)effectPrefab,
    (int32_t)charaEffectPrefab,
    (const MethodInfo *)charaBackEffectPrefab);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->testBackEffectPrefab = backEffectPrefab;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->testBackEffectPrefab, (int32_t)backEffectPrefab, v12, v13);
  v14 = CommonEffectManager_TypeInfo->static_fields;
  v14->testCharaEffectPrefab = charaEffectPrefab;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->testCharaEffectPrefab, (int32_t)charaEffectPrefab, v15, v16);
  v17 = CommonEffectManager_TypeInfo->static_fields;
  v17->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_1C3E508((CGThumbnailListItem_o *)&v17->testCharaBackEffectPrefab, (int32_t)charaBackEffectPrefab, v18, v19);
}


bool CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  if ( (byte_4C5841C & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5841C = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(0, parent, 0, isSkip, isLoadStop, markKey, v5);
}


bool CommonEffectManager__StopInternal(
        bool force,
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x0
  const MethodInfo *v12; // x1
  bool v13; // w28
  int32_t v15; // w24
  bool v16; // w29
  UnityEngine_Component_o *v17; // x25
  Il2CppObject *Component_object; // x26
  Il2CppObject *v19; // x26
  UnityEngine_Object_o *gameObject; // x25
  const MethodInfo *v21; // x2
  Il2CppClass *klass; // x8

  if ( (byte_4C58420 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetOrAddComponent_MarkComponent___);
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58420 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetName = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)AssetName & 1) != 0 )
    return 1;
  if ( effectName )
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    AssetName = CommonEffectManager__GetAssetName(effectName, v12);
    effectName = AssetName;
  }
  if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_47:
    sub_1C3E7C0(AssetName, v12);
  v15 = 0;
  v16 = isSkip || isLoadStop;
  v13 = 1;
  while ( v15 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0) )
  {
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
    if ( !AssetName )
      goto LABEL_47;
    AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v15, 0);
    if ( !AssetName )
      goto LABEL_47;
    v17 = (UnityEngine_Component_o *)AssetName;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)AssetName,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)AssetName & 1) == 0 )
      goto LABEL_27;
    if ( !effectName )
      goto LABEL_24;
    if ( !Component_object )
      goto LABEL_47;
    AssetName = (System_String_o *)System_String__Equals_63671772(
                                     effectName,
                                     (System_String_o *)Component_object[2].klass,
                                     0);
    if ( ((unsigned __int8)AssetName & 1) != 0 )
    {
LABEL_24:
      if ( v16 )
      {
        if ( !Component_object )
          goto LABEL_47;
        CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_object, v12);
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
LABEL_27:
      v19 = UnityEngine_Component__GetComponent_object_(
              v17,
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !effectName )
          goto LABEL_33;
        if ( !v19 )
          goto LABEL_47;
        AssetName = (System_String_o *)System_String__Equals_63671772(effectName, (System_String_o *)v19[5].klass, 0);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
LABEL_33:
          if ( isSkip )
          {
            if ( !v19 )
              goto LABEL_47;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v19,
                                                   0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71341564(gameObject, 0);
          }
          else
          {
            AssetName = (System_String_o *)System_String__IsNullOrEmpty(markKey, 0);
            if ( ((unsigned __int8)AssetName & 1) == 0 )
            {
              AssetName = (System_String_o *)BasicHelper__GetOrAddComponent_object_(
                                               v17,
                                               (const MethodInfo_30E7174 *)Method_BasicHelper_GetOrAddComponent_MarkComponent___);
              if ( !AssetName )
                goto LABEL_47;
              MarkComponent__Add((MarkComponent_o *)AssetName, markKey, v21);
            }
            if ( !v19 )
              goto LABEL_47;
            klass = v19->klass;
            if ( force )
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))klass->vtable[9].methodPtr)(
                v19,
                1,
                0,
                klass->vtable[9].method);
            else
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))klass->vtable[8].methodPtr)(
                v19,
                1,
                0,
                klass->vtable[8].method);
          }
        }
      }
    }
    ++v15;
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
    if ( !AssetName )
      goto LABEL_47;
  }
  return v13;
}


bool CommonEffectManager__Stop_43812176(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_4C5841D & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectManager_TypeInfo);
    byte_4C5841D = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(0, parent, effectName, isSkip, isLoadStop, markKey, v6);
}


void CommonEffectManager___LoadSkinEffectsLocal_b__50_0(
        CommonEffectManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  Il2CppObject *UiFlag; // x0
  __int64 v7; // x1
  struct System_String_array *EffectName; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x24
  System_String_o *v11; // x21
  Il2CppObject *Object_object__51228128; // x22
  UnityEngine_GameObject_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *name; // x1

  if ( (byte_4C58432 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantCommentManager_TypeInfo);
    byte_4C58432 = 1;
  }
  skinEffectLoadLists = this->fields.skinEffectLoadLists;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = (Il2CppObject *)ServantCommentManager__GetUiFlag(0);
  if ( !skinEffectLoadLists )
    goto LABEL_23;
  if ( (unsigned int)UiFlag >= LODWORD(skinEffectLoadLists->max_length) )
    goto LABEL_24;
  EffectName = skinEffectLoadLists->m_Items[(int)UiFlag].fields.EffectName;
  if ( !EffectName )
    goto LABEL_23;
  max_length = EffectName->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( v10 < (unsigned int)max_length )
    {
      if ( !data )
        goto LABEL_23;
      v11 = EffectName->m_Items[v10];
      Object_object__51228128 = AssetData__GetObject_object__51228128(
                                  data,
                                  v11,
                                  (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UiFlag = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51228128, 0, 0);
      if ( ((unsigned __int8)UiFlag & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UiFlag = UnityEngine_Object__Instantiate_object_(
                   Object_object__51228128,
                   (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_23;
        v13 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.skinedEffects,
          (Il2CppObject *)v11,
          UiFlag,
          (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v13, (UnityEngine_Component_o *)this, 0);
        if ( !v13 )
          goto LABEL_23;
        UnityEngine_GameObject__SetActive(v13, 0, 0);
      }
      LODWORD(max_length) = EffectName->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_21;
    }
LABEL_24:
    sub_1C3E7C8(UiFlag, v7);
  }
LABEL_21:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0);
  this->fields.callbackAfterSkinLoad = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackAfterSkinLoad, 0, v14, v15);
  if ( !data )
LABEL_23:
    sub_1C3E7C0(UiFlag, v7);
  name = data->fields.name;
  this->fields.loadedSkinAssetName = name;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.loadedSkinAssetName, (int32_t)name, v16, v17);
}