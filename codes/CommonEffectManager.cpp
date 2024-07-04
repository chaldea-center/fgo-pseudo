void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct CommonEffectManager_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct CommonEffectManager_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct CommonEffectManager_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct CommonEffectManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct CommonEffectManager_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_48E3AC1 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_5752/*"Effect/"*/, v4);
    sub_1B00CCC(&StringLiteral_5789/*"Effect/Skin/{0:D2}"*/, v5);
    byte_48E3AC1 = 1;
  }
  CommonEffectManager_TypeInfo->static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5752/*"Effect/"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)CommonEffectManager_TypeInfo->static_fields,
    StringLiteral_5752/*"Effect/"*/,
    v2,
    v3);
  v6 = StringLiteral_5789/*"Effect/Skin/{0:D2}"*/;
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5789/*"Effect/Skin/{0:D2}"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->skinEffectAssetStoragePath, v6, v8, v9);
  v10 = CommonEffectManager_TypeInfo->static_fields;
  v10->testEffectPrefab = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v10->testEffectPrefab, 0, v11, v12);
  v13 = CommonEffectManager_TypeInfo->static_fields;
  v13->testBackEffectPrefab = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v13->testBackEffectPrefab, 0, v14, v15);
  v16 = CommonEffectManager_TypeInfo->static_fields;
  v16->testCharaEffectPrefab = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v16->testCharaEffectPrefab, 0, v17, v18);
  v19 = CommonEffectManager_TypeInfo->static_fields;
  v19->testCharaBackEffectPrefab = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19->testCharaBackEffectPrefab, 0, v20, v21);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_48E3AC0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__, method);
    byte_48E3AC0 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_35FC008 *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create(
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

  if ( (byte_48E3A9B & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    byte_48E3A9B = 1;
  }
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, effectName);
    byte_48DD9F1 = 1;
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
  return CommonEffectManager__Create_39366436(parent, effectName, prefab, v13, 0, 0, v4);
}


void __fastcall CommonEffectManager__CreateParam(
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

  if ( (byte_48E3AA7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AA7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_48DD9F1 )
  {
    Instance = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v14);
    byte_48DD9F1 = 1;
  }
  if ( !v15 )
    sub_1B00F28(Instance, v14);
  CommonEffectManager__LoadCreateLocal(
    v15,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    param,
    0LL,
    isSkip,
    isPause,
    flip,
    v16);
}


void __fastcall CommonEffectManager__CreateParam_39370420(
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

  if ( (byte_48E3AA8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AA8 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v17 = (CommonEffectManager_o *)Instance;
  if ( !byte_48DD9F1 )
  {
    Instance = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v16);
    byte_48DD9F1 = 1;
  }
  if ( !v17 )
    sub_1B00F28(Instance, v16);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_39370652(
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
  if ( (byte_48E3AA9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AA9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v18);
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
void __fastcall CommonEffectManager__CreateParam_39370856(
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
  if ( (byte_48E3AAA & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AAA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v20);
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


void __fastcall CommonEffectManager__Create_39329332(
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

  if ( (byte_48E3AA4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AA4 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_48DD9F1 )
  {
    Instance = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v14);
    byte_48DD9F1 = 1;
  }
  if ( !v15 )
    sub_1B00F28(Instance, v14);
  CommonEffectManager__LoadCreateLocal(
    v15,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL,
    callback,
    isSkip,
    isPause,
    flip,
    v16);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_39366436(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *AssetName; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x24
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *v22; // x24
  float v23; // s11
  float v24; // s12
  float v25; // s13
  const MethodInfo *v26; // x1
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s3
  float v31; // s14
  float v32; // s15
  float v33; // s8
  float v34; // s9
  const MethodInfo *v35; // x4
  float v37; // [xsp+48h] [xbp-38h]
  float v38; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_48E3A9E & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v16);
    byte_48E3A9E = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  AssetName = CommonEffectManager__GetAssetName(effectName, (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v20 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
  if ( !prefab )
    goto LABEL_14;
  v22 = (UnityEngine_Transform_o *)transform;
  v37 = y;
  v38 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v23 = localScale.fields.x;
  v24 = localScale.fields.y;
  v25 = localScale.fields.z;
  *(UnityEngine_Quaternion_o *)&v27 = CommonEffectManager__GetFlipQuaternion(flip, v26);
  if ( !parent )
    goto LABEL_14;
  v31 = v27;
  v32 = v28;
  v33 = v29;
  v34 = v30;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v22 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0LL);
  v40.fields.y = v37;
  v40.fields.z = v38;
  v40.fields.x = x;
  UnityEngine_Transform__set_localPosition(v22, v40, 0LL);
  v42.fields.x = v31;
  v42.fields.y = v32;
  v42.fields.z = v33;
  v42.fields.w = v34;
  UnityEngine_Transform__set_localRotation(v22, v42, 0LL);
  v41.fields.x = v23;
  v41.fields.y = v24;
  v41.fields.z = v25;
  UnityEngine_Transform__set_localScale(v22, v41, 0LL);
  if ( !Component_object )
LABEL_14:
    sub_1B00F28(transform, v19);
  CommonEffectComponent__Init_39349864((CommonEffectComponent_o *)Component_object, AssetName, 0, 0, v35);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_39366936(
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

  if ( (byte_48E3A9C & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    byte_48E3A9C = 1;
  }
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, effectName);
    byte_48DD9F1 = 1;
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
  return CommonEffectManager__Create_39366436(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_39367136(
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

  if ( (byte_48E3A9D & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    byte_48E3A9D = 1;
  }
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, effectName);
    byte_48DD9F1 = 1;
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
  return CommonEffectManager__Create_39366436(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_39367336(
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

  if ( (byte_48E3A9F & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, data);
    byte_48E3A9F = 1;
  }
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, data);
    byte_48DD9F1 = 1;
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
  return CommonEffectManager__Create_39367536(parent, data, prefab, v13, 0, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_39367536(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x23
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v21; // x23
  const MethodInfo *v22; // x1
  float v23; // s13
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s3
  float v28; // s14
  float v29; // s15
  float v30; // s8
  float v31; // s9
  const MethodInfo *v32; // x4
  float v34; // [xsp+48h] [xbp-38h]
  float v35; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_48E3AA2 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, data);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v16);
    byte_48E3AA2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v19 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !prefab )
    goto LABEL_14;
  v21 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v23 = localScale.fields.z;
  v34 = localScale.fields.y;
  v35 = localScale.fields.x;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  *(UnityEngine_Quaternion_o *)&v24 = CommonEffectManager__GetFlipQuaternion(flip, v22);
  if ( !parent )
    goto LABEL_14;
  v28 = v24;
  v29 = v25;
  v30 = v26;
  v31 = v27;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v21 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)transform, 0LL);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localPosition(v21, v37, 0LL);
  v39.fields.x = v28;
  v39.fields.y = v29;
  v39.fields.z = v30;
  v39.fields.w = v31;
  UnityEngine_Transform__set_localRotation(v21, v39, 0LL);
  v38.fields.y = v34;
  v38.fields.x = v35;
  v38.fields.z = v23;
  UnityEngine_Transform__set_localScale(v21, v38, 0LL);
  if ( !Component_object )
LABEL_14:
    sub_1B00F28(transform, v18);
  CommonEffectComponent__Init_39349936((CommonEffectComponent_o *)Component_object, data, 0, 0, v32);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_39368012(
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

  if ( (byte_48E3AA0 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, data);
    byte_48E3AA0 = 1;
  }
  if ( !byte_48DD9F1 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, data);
    byte_48DD9F1 = 1;
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
  return CommonEffectManager__Create_39367536(parent, data, prefab, v14, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_39368212(
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
  if ( (byte_48E3AA1 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, data);
    byte_48E3AA1 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_39367536(parent, data, prefab, v13, 0, 0, v5);
}


void __fastcall CommonEffectManager__Create_39368368(
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

  if ( (byte_48E3AA3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AA3 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v13 = (CommonEffectManager_o *)Instance;
  if ( !byte_48DD9F1 )
  {
    Instance = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v12);
    byte_48DD9F1 = 1;
  }
  if ( !v13 )
    sub_1B00F28(Instance, v12);
  CommonEffectManager__LoadCreateLocal(
    v13,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL,
    0LL,
    isSkip,
    isPause,
    flip,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_39369796(
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
  if ( (byte_48E3AA5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AA5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v16);
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
void __fastcall CommonEffectManager__Create_39369988(
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
  if ( (byte_48E3AA6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_48E3AA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v18);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  int32_t v15; // w21
  UnityEngine_Component_o *v16; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v24; // x1
  Il2CppClass **v25; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E3AB2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v11);
    byte_48E3AB2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_24;
    v15 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v15 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v15, 0LL);
      if ( !transform )
        goto LABEL_24;
      v16 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      v18 = UnityEngine_Component__GetComponent_object_(
              v16,
              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
      {
LABEL_18:
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
        if ( !v12 )
          goto LABEL_24;
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v12->fields._size;
        v24 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)transform,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
      }
      ++v15;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
    if ( !v12 )
LABEL_24:
      sub_1B00F28(transform, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      v12,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v27.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_39373924(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  System_String_o *AssetName; // x21
  System_Collections_Generic_List_object__o *v18; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  int32_t v21; // w22
  UnityEngine_Component_o *v22; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v30; // x1
  Il2CppClass **v31; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_48E3AB3 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v14);
    byte_48E3AB3 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( effectName )
      goto LABEL_8;
LABEL_41:
    CommonEffectManager__Stop(parent, 0, 0, v16);
    return;
  }
  if ( !effectName )
    goto LABEL_41;
LABEL_8:
  AssetName = CommonEffectManager__GetAssetName(effectName, v15);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_32;
  transform = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_32;
  v21 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v21 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
    transform = UnityEngine_Transform__GetChild(transform, v21, 0LL);
    if ( !transform )
      goto LABEL_32;
    v22 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_60334064(AssetName, (System_String_o *)Component_object[2].klass, 0LL) )
        goto LABEL_26;
    }
    v24 = UnityEngine_Component__GetComponent_object_(
            v22,
            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v24 || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_60334064(AssetName, (System_String_o *)v24[5].klass, 0LL) )
      {
LABEL_26:
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
        if ( !v18 )
          goto LABEL_32;
        items = v18->fields._items;
        v28 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v18->fields._size;
        v30 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)transform,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v30;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v30, v25, v26);
        }
      }
    }
    ++v21;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
  }
  if ( !v18 )
LABEL_32:
    sub_1B00F28(transform, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v18,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v33.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_48E3AAF & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, isSkip);
    byte_48E3AAF = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, v4);
}


bool __fastcall CommonEffectManager__ForceStop_39372948(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_48E3AB0 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    byte_48E3AB0 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, effectName, isSkip, isLoadStop, v5);
}


CommonEffectComponent_array *__fastcall CommonEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  Il2CppObject *Component_object; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_48E3A96 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E3A96 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1B00F28(transform, v10);
    v11 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v11 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
      if ( !transform )
        goto LABEL_24;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_24;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_CommonEffectComponent__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            Component_object,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v18[4] = (Il2CppClass *)Component_object;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)Component_object, v13, v14);
        }
      }
      ++v11;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  if ( !v8 )
    goto LABEL_24;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v8,
                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_48E3A95 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, method);
    byte_48E3A95 = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_60325748(v3->static_fields->effectAssetStoragePath, effectName, 0LL);
}


UnityEngine_Quaternion_o __fastcall CommonEffectManager__GetFlipQuaternion(int32_t flip, const MethodInfo *method)
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
    if ( !byte_48DD9F7 )
    {
      sub_1B00CCC(&UnityEngine_Quaternion_TypeInfo, method);
      byte_48DD9F7 = 1;
    }
    static_fields = UnityEngine_Quaternion_TypeInfo->static_fields;
    w = static_fields->identityQuaternion.fields.w;
    p_y = &static_fields->identityQuaternion.fields.y;
    p_z = &static_fields->identityQuaternion.fields.z;
  }
  else
  {
    static_fields = (struct UnityEngine_Quaternion_StaticFields *)((char *)&unk_BAB0F8 + 4 * v2);
    p_y = (float *)((char *)&unk_BAB104 + 4 * v2);
    p_z = (float *)((char *)&unk_BAB110 + 4 * v2);
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


bool __fastcall CommonEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v8; // w20
  UnityEngine_Component_o *v9; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v11; // x21

  if ( (byte_48E3A97 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    byte_48E3A97 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_1B00F28(transform, v6);
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
      if ( !transform )
        goto LABEL_20;
      v9 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 1;
      v11 = UnityEngine_Component__GetComponent_object_(
              v9,
              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
        return 1;
      ++v8;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
    }
  }
  return 0;
}


bool __fastcall CommonEffectManager__IsBusy_39364784(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_String_o *AssetName; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  int32_t v13; // w21
  UnityEngine_Component_o *v14; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v16; // x22

  if ( (byte_48E3A98 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E3A98 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 0;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
    {
LABEL_9:
      AssetName = CommonEffectManager__GetAssetName(effectName, v8);
      if ( !parent
        || (v12 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_28:
        sub_1B00F28(AssetName, v11);
      }
      v13 = 0;
      while ( v13 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_28;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v13, 0LL);
        if ( !AssetName )
          goto LABEL_28;
        v14 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v12 )
            goto LABEL_28;
          if ( System_String__Equals_60334064(v12, (System_String_o *)Component_object[2].klass, 0LL) )
            return 1;
        }
        v16 = UnityEngine_Component__GetComponent_object_(
                v14,
                (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v16 || !v12 )
            goto LABEL_28;
          if ( System_String__Equals_60334064(v12, (System_String_o *)v16[5].klass, 0LL) )
            return 1;
        }
        ++v13;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
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
  return CommonEffectManager__IsBusy(parent, v8);
}


bool __fastcall CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48E3ABF & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_48E3ABF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  return Instance[4].klass != 0LL;
}


bool __fastcall CommonEffectManager__IsSkinEffectLoaded(CommonEffectManager_o *this, const MethodInfo *method)
{
  return this->fields.loadedSkinAssetName != 0LL;
}


bool __fastcall CommonEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v8; // w20
  UnityEngine_Component_o *v9; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v11; // x21

  if ( (byte_48E3A99 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    byte_48E3A99 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_1B00F28(transform, v6);
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
      if ( !transform )
        goto LABEL_22;
      v9 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 0;
      v11 = UnityEngine_Component__GetComponent_object_(
              v9,
              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_22;
        if ( !LOBYTE(v11[7].klass) )
          return 0;
      }
      ++v8;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__IsStart_39365700(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_String_o *AssetName; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  int32_t v13; // w21
  UnityEngine_Component_o *v14; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v16; // x22

  if ( (byte_48E3A9A & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E3A9A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 1;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
    {
LABEL_9:
      AssetName = CommonEffectManager__GetAssetName(effectName, v8);
      if ( !parent
        || (v12 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_29:
        sub_1B00F28(AssetName, v11);
      }
      v13 = 0;
      while ( v13 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_29;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v13, 0LL);
        if ( !AssetName )
          goto LABEL_29;
        v14 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v12 )
            goto LABEL_29;
          if ( System_String__Equals_60334064(v12, (System_String_o *)Component_object[2].klass, 0LL) )
            return 0;
        }
        v16 = UnityEngine_Component__GetComponent_object_(
                v14,
                (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v16 || !v12 )
            goto LABEL_29;
          if ( System_String__Equals_60334064(v12, (System_String_o *)v16[5].klass, 0LL) && !LOBYTE(v16[7].klass) )
            return 0;
        }
        ++v13;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
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
  return CommonEffectManager__IsStart(parent, v8);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  CommonEffectManager_c *v31; // x0
  __int64 v32; // x9
  const MethodInfo *v33; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *loadEffectPrefab; // x26
  System_String_o *v36; // x25
  CommonEffectManager_o *v37; // x27
  Il2CppObject *Component_object; // x26
  CommonEffectManager_o *v39; // x27
  __int64 v40; // x1
  __int64 v41; // x1
  const MethodInfo *v42; // x7
  UnityEngine_Object_o *v43; // x24
  UnityEngine_Object_o *_39366436; // x23
  const MethodInfo *v45; // x5
  System_String_o *name; // x23
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_48E3AB5 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, parent);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___, v21);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v23);
    sub_1B00CCC(&StringLiteral_13316/*"Talk/TestBackEffect"*/, v24);
    sub_1B00CCC(&StringLiteral_13323/*"Talk/communicationCharaEffect"*/, v25);
    sub_1B00CCC(&StringLiteral_13321/*"Talk/bit_talk_10"*/, v26);
    sub_1B00CCC(&StringLiteral_13319/*"Talk/TestEffect"*/, v27);
    sub_1B00CCC(&StringLiteral_13315/*"Talk/Test"*/, v28);
    sub_1B00CCC(&StringLiteral_13317/*"Talk/TestCharaBackEffect"*/, v29);
    this = (CommonEffectManager_o *)sub_1B00CCC(&StringLiteral_13318/*"Talk/TestCharaEffect"*/, v30);
    byte_48E3AB5 = 1;
  }
  if ( !effectName )
    goto LABEL_52;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_13315/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13323/*"Talk/communicationCharaEffect"*/, 0LL) )
      effectName = (System_String_o *)StringLiteral_13321/*"Talk/bit_talk_10"*/;
    goto LABEL_11;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13319/*"Talk/TestEffect"*/, 0LL) )
  {
    v31 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v31 = CommonEffectManager_TypeInfo;
    }
    v32 = 16LL;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13316/*"Talk/TestBackEffect"*/, 0LL) )
  {
    v31 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v31 = CommonEffectManager_TypeInfo;
    }
    v32 = 24LL;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13318/*"Talk/TestCharaEffect"*/, 0LL) )
  {
    v31 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v31 = CommonEffectManager_TypeInfo;
    }
    v32 = 32LL;
    goto LABEL_36;
  }
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13317/*"Talk/TestCharaBackEffect"*/, 0LL) )
  {
LABEL_11:
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    AssetName = CommonEffectManager__GetAssetName(effectName, v33);
    loadEffectPrefab = (Il2CppObject *)v20->fields.loadEffectPrefab;
    v36 = AssetName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CommonEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                      loadEffectPrefab,
                                      (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v37 = this;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
      if ( parent )
      {
        v39 = this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v39 )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v39, (UnityEngine_Transform_o *)this, 0LL);
          v47.fields.x = x;
          v47.fields.y = y;
          v47.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v39, v47, 0LL);
          if ( !byte_48DD9F7 )
          {
            sub_1B00CCC(&UnityEngine_Quaternion_TypeInfo, v40);
            byte_48DD9F7 = 1;
          }
          UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)v39,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          if ( !byte_48DD9F6 )
          {
            sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v41);
            byte_48DD9F6 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v39,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          if ( Component_object )
          {
            CommonEffectLoadComponent__Init_39360664(
              (CommonEffectLoadComponent_o *)Component_object,
              v36,
              param,
              callback,
              isSkip,
              isPause,
              flip,
              v42);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v31 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v31 = CommonEffectManager_TypeInfo;
  }
  v32 = 40LL;
LABEL_36:
  v43 = *(UnityEngine_Object_o **)((char *)&v31->static_fields->effectAssetStoragePath + v32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
  _39366436 = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_52;
    name = UnityEngine_Object__get_name(v43, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    _39366436 = (UnityEngine_Object_o *)CommonEffectManager__Create_39366436(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v43,
                                          v48,
                                          0,
                                          flip,
                                          v45);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_39366436, 0LL, 0LL);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  if ( !_39366436 )
LABEL_52:
    sub_1B00F28(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_39366436->klass[1]._1.gc_desc)(
    _39366436,
    param,
    _39366436->klass[1]._1.name);
LABEL_49:
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_Object_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      _39366436,
      *(_QWORD *)&callback->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__LoadSkinEffects(
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_48E3ABB & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, *(_QWORD *)&loadParallelMax);
    byte_48E3ABB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v6);
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v7);
}


void __fastcall CommonEffectManager__LoadSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t UiFlag; // w0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  CommonEffectManager_c *v18; // x8
  int32_t v19; // w22
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x22
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Instance; // x21
  AssetLoader_LoadEndDataHandler_o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48E3AB7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__, callback);
    sub_1B00CCC(&CommonEffectManager_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v9);
    sub_1B00CCC(&int_TypeInfo, v10);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B00CCC(&ServantCommentManager_TypeInfo, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    byte_48E3AB7 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  v18 = CommonEffectManager_TypeInfo;
  v19 = UiFlag;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v18 = CommonEffectManager_TypeInfo;
  }
  skinEffectAssetStoragePath = v18->static_fields->skinEffectAssetStoragePath;
  v33 = v19 + 1;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v15, v16, v17);
  v22 = System_String__Format(skinEffectAssetStoragePath, v21, 0LL);
  if ( System_String__op_Equality(v22, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v23);
    this->fields.callbackAfterSkinLoad = callback;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterSkinLoad, (int32_t)callback, v24, v25);
    v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v26,
      (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v26;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skinedEffects, (int32_t)v26, v27, v28);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v30,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__,
      0LL);
    if ( !Instance )
      sub_1B00F28(v31, v32);
    AssetManager__LoadAssetStorage((AssetManager_o *)Instance, v22, v30, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_48E3AB6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_48E3AB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v3);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_48E3ABC & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_48E3ABC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v3);
}


void __fastcall CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v13; // x1
  Il2CppObject *currentValue; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48E3AB8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v3);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v5);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v9);
    byte_48E3AB8 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
               (const MethodInfo_308D878 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v21,
      Values,
      (const MethodInfo_36CDF94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v21,
              (const MethodInfo_318F37C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v21.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_68077844((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v21,
      (const MethodInfo_318F378 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Values,
      (const MethodInfo_308DBD0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skinedEffects, 0, v15, v16);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_16:
    sub_1B00F28(Values, v13);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_loadedSkinAssetName, 0, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  UnityEngine_Component_o *v10; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v12; // x22
  const MethodInfo *v13; // x2

  if ( (byte_48E3AAB & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, isSkip);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    byte_48E3AAB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1B00F28(transform, v8);
    v9 = 0;
    while ( v9 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v9, 0LL);
        if ( transform )
        {
          v10 = (UnityEngine_Component_o *)transform;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_24;
            LOBYTE(Component_object[4].klass) = isSkip;
            BYTE1(Component_object[4].klass) = 0;
          }
          else
          {
            v12 = UnityEngine_Component__GetComponent_object_(
                    v10,
                    (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v12,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_24;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v12, isSkip, v13);
            }
          }
          ++v9;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
  }
}


void __fastcall CommonEffectManager__Resume_39371476(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  System_String_o *AssetName; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  int32_t v15; // w22
  UnityEngine_Component_o *v16; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v18; // x23
  const MethodInfo *v19; // x2

  if ( (byte_48E3AAC & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v7);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v8);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v9);
    byte_48E3AAC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
      goto LABEL_9;
LABEL_32:
    CommonEffectManager__Stop(parent, isSkip, 0, v11);
    return;
  }
  j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  if ( !effectName )
    goto LABEL_32;
LABEL_9:
  AssetName = CommonEffectManager__GetAssetName(effectName, v10);
  if ( !parent
    || (v14 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
  {
LABEL_30:
    sub_1B00F28(AssetName, v13);
  }
  v15 = 0;
  while ( v15 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
  {
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !AssetName )
      goto LABEL_30;
    AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v15, 0LL);
    if ( !AssetName )
      goto LABEL_30;
    v16 = (UnityEngine_Component_o *)AssetName;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)AssetName,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetName & 1) == 0 )
      goto LABEL_22;
    if ( !Component_object || !v14 )
      goto LABEL_30;
    if ( System_String__Equals_60334064(v14, (System_String_o *)Component_object[2].klass, 0LL) )
    {
      LOBYTE(Component_object[4].klass) = isSkip;
      BYTE1(Component_object[4].klass) = 0;
    }
    else
    {
LABEL_22:
      v18 = UnityEngine_Component__GetComponent_object_(
              v16,
              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v18 || !v14 )
          goto LABEL_30;
        if ( System_String__Equals_60334064(v14, (System_String_o *)v18[5].klass, 0LL) )
          CommonEffectComponent__Resume((CommonEffectComponent_o *)v18, isSkip, v19);
      }
    }
    ++v15;
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !AssetName )
      goto LABEL_30;
  }
}


UnityEngine_GameObject_o *__fastcall CommonEffectManager__SetSkinEffect(
        System_String_o *effects,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_48E3ABE & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent);
    byte_48E3ABE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v6);
  return CommonEffectManager__SetSkinEffectLocal((CommonEffectManager_o *)Instance, effects, parent, v7);
}


UnityEngine_GameObject_o *__fastcall CommonEffectManager__SetSkinEffectLocal(
        CommonEffectManager_o *this,
        System_String_o *effect,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E3ABA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effect);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    byte_48E3ABA = 1;
  }
  v9 = 0LL;
  value = 0LL;
  if ( effect )
  {
    skinedEffects = this->fields.skinedEffects;
    if ( skinedEffects )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
             (Il2CppObject *)effect,
             &value,
             (const MethodInfo_308F254 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v11 = value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__Instantiate_object_(
                v11,
                (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v9 = (UnityEngine_GameObject_o *)v12,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v9, transform, 0LL),
              !v9) )
        {
          sub_1B00F28(v12, v13);
        }
        UnityEngine_GameObject__SetActive(v9, 1, 0LL);
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v9;
}


void __fastcall CommonEffectManager__SetSkinEffects(
        System_String_array *effects,
        UnityEngine_GameObject_o *parent,
        bool doSetDepthZero,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_48E3ABD & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent);
    byte_48E3ABD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v8);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  Il2CppObject *skinedEffects; // x0
  Il2CppObject *v15; // x23
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_48E3AB9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effects);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    this = (CommonEffectManager_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v11);
    byte_48E3AB9 = 1;
  }
  value = 0LL;
  if ( effects )
  {
    if ( v8->fields.skinedEffects )
    {
      v12 = *(_QWORD *)&effects->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)v12 )
            sub_1B00F30(this, effects);
          skinedEffects = (Il2CppObject *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
                                            (Il2CppObject *)effects->m_Items[v13],
                                            &value,
                                            (const MethodInfo_308F254 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v15 = value;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            skinedEffects = UnityEngine_Object__Instantiate_object_(
                              v15,
                              (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !parent )
              break;
            v16 = (UnityEngine_GameObject_o *)skinedEffects;
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
            GameObjectExtensions__SafeSetParent(v16, transform, 0LL);
            if ( !v16 )
              break;
            UnityEngine_GameObject__SetActive(v16, 1, 0LL);
            if ( doSetDepthZero )
            {
              skinedEffects = UnityEngine_GameObject__GetComponentInChildren_object_(
                                v16,
                                (const MethodInfo_2DAE06C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0LL);
            }
          }
          LODWORD(v12) = effects->max_length;
          if ( (__int64)++v13 >= (int)v12 )
            return;
        }
        sub_1B00F28(skinedEffects, effects);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct CommonEffectManager_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct CommonEffectManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48E3AB4 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, backEffectPrefab);
    byte_48E3AB4 = 1;
  }
  v9 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v9 = CommonEffectManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&static_fields->testEffectPrefab,
    (int32_t)effectPrefab,
    (int32_t)charaEffectPrefab,
    (int32_t)charaBackEffectPrefab);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->testBackEffectPrefab = backEffectPrefab;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v11->testBackEffectPrefab, (int32_t)backEffectPrefab, v12, v13);
  v14 = CommonEffectManager_TypeInfo->static_fields;
  v14->testCharaEffectPrefab = charaEffectPrefab;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->testCharaEffectPrefab, (int32_t)charaEffectPrefab, v15, v16);
  v17 = CommonEffectManager_TypeInfo->static_fields;
  v17->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v17->testCharaBackEffectPrefab,
    (int32_t)charaBackEffectPrefab,
    v18,
    v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_48E3AAD & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, isSkip);
    byte_48E3AAD = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *AssetName; // x0
  const MethodInfo *v14; // x1
  bool v15; // w27
  int32_t v17; // w23
  bool v18; // w28
  UnityEngine_Component_o *v19; // x24
  Il2CppObject *Component_object; // x25
  Il2CppObject *v21; // x24
  UnityEngine_Object_o *gameObject; // x24
  Il2CppClass *klass; // x8

  if ( (byte_48E3AB1 & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, parent);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v10);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v11);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v12);
    byte_48E3AB1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetName = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)AssetName & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      AssetName = CommonEffectManager__GetAssetName(effectName, v14);
      effectName = AssetName;
    }
    if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_44:
      sub_1B00F28(AssetName, v14);
    v17 = 0;
    v18 = isSkip || isLoadStop;
    v15 = 1;
    while ( 1 )
    {
      if ( v17 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
        return v15;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_44;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v17, 0LL);
      if ( !AssetName )
        goto LABEL_44;
      v19 = (UnityEngine_Component_o *)AssetName;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)AssetName,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) == 0 )
        goto LABEL_27;
      if ( !effectName )
        goto LABEL_24;
      if ( !Component_object )
        goto LABEL_44;
      AssetName = (System_String_o *)System_String__Equals_60334064(
                                       effectName,
                                       (System_String_o *)Component_object[2].klass,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
LABEL_24:
        if ( v18 )
        {
          if ( !Component_object )
            goto LABEL_44;
          CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_object, v14);
        }
        else
        {
          v15 = 0;
        }
      }
      else
      {
LABEL_27:
        v21 = UnityEngine_Component__GetComponent_object_(
                v19,
                (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( effectName )
          {
            if ( !v21 )
              goto LABEL_44;
            if ( !System_String__Equals_60334064(effectName, (System_String_o *)v21[5].klass, 0LL) )
              goto LABEL_43;
          }
          else if ( !v21 )
          {
            goto LABEL_44;
          }
          if ( isSkip )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v21,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
          }
          else
          {
            klass = v21->klass;
            if ( force )
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[9].method)(
                v21,
                1LL,
                0LL,
                klass->vtable[10].methodPtr);
            else
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[8].method)(
                v21,
                1LL,
                0LL,
                klass->vtable[9].methodPtr);
          }
        }
      }
LABEL_43:
      ++v17;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_44;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__Stop_39372704(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_48E3AAE & 1) == 0 )
  {
    sub_1B00CCC(&CommonEffectManager_TypeInfo, effectName);
    byte_48E3AAE = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(0, parent, effectName, isSkip, isLoadStop, v5);
}


void __fastcall CommonEffectManager___LoadSkinEffectsLocal_b__49_0(
        CommonEffectManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  Il2CppObject *UiFlag; // x0
  __int64 v11; // x1
  struct System_String_array *EffectName; // x23
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  System_String_o *v15; // x21
  Il2CppObject *Object_object__47470892; // x22
  UnityEngine_GameObject_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_String_o *name; // x1

  if ( (byte_48E3AC2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, data);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&ServantCommentManager_TypeInfo, v8);
    byte_48E3AC2 = 1;
  }
  skinEffectLoadLists = this->fields.skinEffectLoadLists;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = (Il2CppObject *)ServantCommentManager__GetUiFlag(0LL);
  if ( !skinEffectLoadLists )
    goto LABEL_23;
  if ( (unsigned int)UiFlag >= skinEffectLoadLists->max_length )
    goto LABEL_24;
  EffectName = skinEffectLoadLists->m_Items[(int)UiFlag].fields.EffectName;
  if ( !EffectName )
    goto LABEL_23;
  v13 = *(_QWORD *)&EffectName->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v13 )
    {
      if ( !data )
        goto LABEL_23;
      v15 = EffectName->m_Items[v14];
      Object_object__47470892 = AssetData__GetObject_object__47470892(
                                  data,
                                  v15,
                                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UiFlag = (Il2CppObject *)UnityEngine_Object__op_Equality(
                                 (UnityEngine_Object_o *)Object_object__47470892,
                                 0LL,
                                 0LL);
      if ( ((unsigned __int8)UiFlag & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UiFlag = UnityEngine_Object__Instantiate_object_(
                   Object_object__47470892,
                   (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_23;
        v17 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.skinedEffects,
          (Il2CppObject *)v15,
          UiFlag,
          (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v17, (UnityEngine_Component_o *)this, 0LL);
        if ( !v17 )
          goto LABEL_23;
        UnityEngine_GameObject__SetActive(v17, 0, 0LL);
      }
      LODWORD(v13) = EffectName->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1B00F30(UiFlag, v11);
  }
LABEL_21:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterSkinLoad, 0, v18, v19);
  if ( !data )
LABEL_23:
    sub_1B00F28(UiFlag, v11);
  name = data->fields.name;
  this->fields.loadedSkinAssetName = name;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.loadedSkinAssetName, (int32_t)name, v20, v21);
}