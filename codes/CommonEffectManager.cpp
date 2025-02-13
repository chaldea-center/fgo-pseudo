void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct CommonEffectManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct CommonEffectManager_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct CommonEffectManager_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct CommonEffectManager_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct CommonEffectManager_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BDD98B & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5968/*"Effect/"*/);
    sub_1C21E38(&StringLiteral_6007/*"Effect/Skin/{0:D2}"*/);
    byte_4BDD98B = 1;
  }
  CommonEffectManager_TypeInfo->static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5968/*"Effect/"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)CommonEffectManager_TypeInfo->static_fields,
    StringLiteral_5968/*"Effect/"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_6007/*"Effect/Skin/{0:D2}"*/;
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_6007/*"Effect/Skin/{0:D2}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->skinEffectAssetStoragePath, v7, v9, v10, v11, v12, v13, v14);
  v15 = CommonEffectManager_TypeInfo->static_fields;
  v15->testEffectPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->testEffectPrefab, 0LL, v16, v17, v18, v19, v20, v21);
  v22 = CommonEffectManager_TypeInfo->static_fields;
  v22->testBackEffectPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v22->testBackEffectPrefab, 0LL, v23, v24, v25, v26, v27, v28);
  v29 = CommonEffectManager_TypeInfo->static_fields;
  v29->testCharaEffectPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->testCharaEffectPrefab, 0LL, v30, v31, v32, v33, v34, v35);
  v36 = CommonEffectManager_TypeInfo->static_fields;
  v36->testCharaBackEffectPrefab = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->testCharaBackEffectPrefab, 0LL, v37, v38, v39, v40, v41, v42);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD98A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
    byte_4BDD98A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
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

  if ( (byte_4BDD964 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD964 = 1;
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  return CommonEffectManager__Create_41945104(parent, effectName, prefab, v13, 0, 0, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  CommonEffectManager_o *v15; // x25
  const MethodInfo *v16; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDD970 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD970 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_4BD6BB1 )
  {
    Instance = (Il2CppObject *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v15 )
    sub_1C22094(Instance, v14);
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


void __fastcall CommonEffectManager__CreateParam_41949088(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        Il2CppObject *param,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  CommonEffectManager_o *v17; // x26
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDD971 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD971 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v17 = (CommonEffectManager_o *)Instance;
  if ( !byte_4BD6BB1 )
  {
    Instance = (Il2CppObject *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v17 )
    sub_1C22094(Instance, v16);
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
void __fastcall CommonEffectManager__CreateParam_41949320(
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
  if ( (byte_4BDD972 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD972 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v18);
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
void __fastcall CommonEffectManager__CreateParam_41949524(
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
  if ( (byte_4BDD973 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD973 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v20);
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


void __fastcall CommonEffectManager__Create_41906916(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  CommonEffectManager_o *v15; // x25
  const MethodInfo *v16; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDD96D & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD96D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_4BD6BB1 )
  {
    Instance = (Il2CppObject *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v15 )
    sub_1C22094(Instance, v14);
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
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41945104(
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
  if ( (byte_4BDD967 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD967 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  AssetName = CommonEffectManager__GetAssetName(effectName, (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v17 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !prefab )
    goto LABEL_14;
  v19 = (UnityEngine_Transform_o *)transform;
  v34 = y;
  v35 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v20 = localScale.fields.x;
  v21 = localScale.fields.y;
  v22 = localScale.fields.z;
  *(UnityEngine_Quaternion_o *)&v24 = CommonEffectManager__GetFlipQuaternion(flip, v23);
  if ( !parent )
    goto LABEL_14;
  v28 = v24;
  v29 = v25;
  v30 = v26;
  v31 = v27;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v19 )
    goto LABEL_14;
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
  if ( !Component_object )
LABEL_14:
    sub_1C22094(transform, v16);
  CommonEffectComponent__Init_41927076((CommonEffectComponent_o *)Component_object, AssetName, 0, 0, v32);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41945604(
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

  if ( (byte_4BDD965 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD965 = 1;
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  return CommonEffectManager__Create_41945104(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41945804(
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

  if ( (byte_4BDD966 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD966 = 1;
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  return CommonEffectManager__Create_41945104(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41946004(
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

  if ( (byte_4BDD968 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD968 = 1;
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  return CommonEffectManager__Create_41946204(parent, data, prefab, v13, 0, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41946204(
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
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  float v25; // s14
  float v26; // s15
  float v27; // s8
  float v28; // s9
  const MethodInfo *v29; // x4
  float v31; // [xsp+48h] [xbp-38h]
  float v32; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4BDD96B & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD96B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v16 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  if ( !prefab )
    goto LABEL_14;
  v18 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v20 = localScale.fields.z;
  v31 = localScale.fields.y;
  v32 = localScale.fields.x;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  *(UnityEngine_Quaternion_o *)&v21 = CommonEffectManager__GetFlipQuaternion(flip, v19);
  if ( !parent )
    goto LABEL_14;
  v25 = v21;
  v26 = v22;
  v27 = v23;
  v28 = v24;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v18 )
    goto LABEL_14;
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
  if ( !Component_object )
LABEL_14:
    sub_1C22094(transform, v15);
  CommonEffectComponent__Init_41927148((CommonEffectComponent_o *)Component_object, data, 0, 0, v29);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41946680(
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

  if ( (byte_4BDD969 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD969 = 1;
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  return CommonEffectManager__Create_41946204(parent, data, prefab, v14, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41946880(
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
  if ( (byte_4BDD96A & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD96A = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_41946204(parent, data, prefab, v13, 0, 0, v5);
}


void __fastcall CommonEffectManager__Create_41947036(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  CommonEffectManager_o *v13; // x24
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]

  if ( (byte_4BDD96C & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD96C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v13 = (CommonEffectManager_o *)Instance;
  if ( !byte_4BD6BB1 )
  {
    Instance = (Il2CppObject *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v13 )
    sub_1C22094(Instance, v12);
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
void __fastcall CommonEffectManager__Create_41948464(
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
  if ( (byte_4BDD96E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD96E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v16);
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
void __fastcall CommonEffectManager__Create_41948656(
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
  if ( (byte_4BDD96F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD96F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v18);
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
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Component_o *v7; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v9; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int64_t v19; // x1
  Il2CppClass **v20; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDD97B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD97B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v3,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_24;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_24;
    v6 = 0;
    while ( 1 )
    {
      transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL);
      if ( v6 >= (int)transform )
        break;
      transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v6, 0LL);
      if ( !transform )
        goto LABEL_24;
      v7 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
      {
LABEL_18:
        transform = (int64_t)UnityEngine_Component__get_gameObject(v7, 0LL);
        if ( !v3 )
          goto LABEL_24;
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        v19 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)transform,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v19, v10, v11, v12, v13, v14, v15);
        }
      }
      ++v6;
      transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
    if ( !v3 )
LABEL_24:
      sub_1C22094(transform, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      v3,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v22.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__DestroyByMark(
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
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x23
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *gameObject; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  __int64 v38; // x8
  __int64 v39; // x20
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BDD97D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_MarkComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BDD97D = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( (v5 & 1) == 0 )
  {
    if ( !parent )
      goto LABEL_56;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !transform )
      goto LABEL_56;
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
    if ( !Enumerator )
      sub_1C22094(0LL, v9);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 2;
          if ( !v16 )
            goto LABEL_20;
        }
        v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
      }
      else
      {
LABEL_20:
        v18 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                         Enumerator,
                                         *(_QWORD *)(v18 + 8));
      v21 = v19;
      if ( !v19 )
        goto LABEL_52;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C22354(v19);
LABEL_52:
        sub_1C22094(v19, v20);
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v19,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_MarkComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v24 )
      {
        if ( !Component_object )
          sub_1C22094(v24, v25);
        if ( MarkComponent__Contains((MarkComponent_o *)Component_object, markKey, 0LL) )
        {
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(v21, 0LL);
          v33 = (int64_t)gameObject;
          if ( !v8 )
            sub_1C22094(gameObject, gameObject);
          items = v8->fields._items;
          v35 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1C22094(gameObject, gameObject);
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              gameObject,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v33;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
          }
        }
      }
    }
    v5 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
    if ( v5 )
    {
      v38 = *(_QWORD *)v5;
      v39 = v5;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v5 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v5 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_40;
        }
        v42 = v38 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_40:
        v42 = sub_1C73E18(v5, System_IDisposable_TypeInfo, 0LL);
      }
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
    }
    if ( !v8 )
LABEL_56:
      sub_1C22094(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      v8,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v44.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_41952696(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x4
  System_String_o *AssetName; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t transform; // x0
  __int64 v10; // x1
  int32_t v11; // w22
  UnityEngine_Component_o *v12; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v14; // x24
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int64_t v24; // x1
  Il2CppClass **v25; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BDD97C & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD97C = 1;
  }
  memset(&v27, 0, sizeof(v27));
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
    CommonEffectManager__Stop(parent, 0, 0, 0LL, v6);
    return;
  }
  if ( !effectName )
    goto LABEL_41;
LABEL_8:
  AssetName = CommonEffectManager__GetAssetName(effectName, v5);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_32;
  transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_32;
  v11 = 0;
  while ( 1 )
  {
    transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL);
    if ( v11 >= (int)transform )
      break;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
    transform = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v11, 0LL);
    if ( !transform )
      goto LABEL_32;
    v12 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !Component_object || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_63123792(AssetName, (System_String_o *)Component_object[2].klass, 0LL) )
        goto LABEL_26;
    }
    v14 = UnityEngine_Component__GetComponent_object_(
            v12,
            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !v14 || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_63123792(AssetName, (System_String_o *)v14[5].klass, 0LL) )
      {
LABEL_26:
        transform = (int64_t)UnityEngine_Component__get_gameObject(v12, 0LL);
        if ( !v8 )
          goto LABEL_32;
        items = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v8->fields._size;
        v24 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)transform,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), v24, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    ++v11;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
  }
  if ( !v8 )
LABEL_32:
    sub_1C22094(transform, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    v8,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  if ( (byte_4BDD978 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD978 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, markKey, v5);
}


bool __fastcall CommonEffectManager__ForceStop_41951712(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_4BDD979 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD979 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, effectName, isSkip, isLoadStop, markKey, v6);
}


CommonEffectComponent_array *__fastcall CommonEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  Il2CppObject *Component_object; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4BDD95F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD95F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1C22094(transform, v5);
    v6 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v6 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
      if ( !transform )
        goto LABEL_24;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_24;
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_CommonEffectComponent__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v17[4] = (Il2CppClass *)Component_object;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)Component_object, v8, v9, v10, v11, v12, v13);
        }
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  if ( !v3 )
    goto LABEL_24;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v3,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_4BDD95E & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD95E = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_63115476(v3->static_fields->effectAssetStoragePath, effectName, 0LL);
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
    if ( !byte_4BD6BB7 )
    {
      sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
      byte_4BD6BB7 = 1;
    }
    static_fields = UnityEngine_Quaternion_TypeInfo->static_fields;
    w = static_fields->identityQuaternion.fields.w;
    p_y = &static_fields->identityQuaternion.fields.y;
    p_z = &static_fields->identityQuaternion.fields.z;
  }
  else
  {
    static_fields = (struct UnityEngine_Quaternion_StaticFields *)((char *)&unk_C398A4 + 4 * v2);
    p_y = (float *)((char *)&unk_C398B0 + 4 * v2);
    p_z = (float *)((char *)&unk_C398BC + 4 * v2);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v9; // x21

  if ( (byte_4BDD960 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD960 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_1C22094(transform, v4);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
      if ( !transform )
        goto LABEL_20;
      v7 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 1;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
        return 1;
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
    }
  }
  return 0;
}


bool __fastcall CommonEffectManager__IsBusy_41943452(
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

  if ( (byte_4BDD961 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD961 = 1;
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v5);
      if ( !parent
        || (v9 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_28:
        sub_1C22094(AssetName, v8);
      }
      v10 = 0;
      while ( v10 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_28;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v10, 0LL);
        if ( !AssetName )
          goto LABEL_28;
        v11 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v9 )
            goto LABEL_28;
          if ( System_String__Equals_63123792(v9, (System_String_o *)Component_object[2].klass, 0LL) )
            return 1;
        }
        v13 = UnityEngine_Component__GetComponent_object_(
                v11,
                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v13 || !v9 )
            goto LABEL_28;
          if ( System_String__Equals_63123792(v9, (System_String_o *)v13[5].klass, 0LL) )
            return 1;
        }
        ++v10;
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
  return CommonEffectManager__IsBusy(parent, v5);
}


bool __fastcall CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4BDD989 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD989 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  return Instance[4].klass != 0LL;
}


bool __fastcall CommonEffectManager__IsSkinEffectLoaded(CommonEffectManager_o *this, const MethodInfo *method)
{
  return this->fields.loadedSkinAssetName != 0LL;
}


bool __fastcall CommonEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v9; // x21

  if ( (byte_4BDD962 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD962 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_1C22094(transform, v4);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
      if ( !transform )
        goto LABEL_22;
      v7 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 0;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_22;
        if ( !LOBYTE(v9[7].klass) )
          return 0;
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__IsStart_41944368(
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

  if ( (byte_4BDD963 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD963 = 1;
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v5);
      if ( !parent
        || (v9 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_29:
        sub_1C22094(AssetName, v8);
      }
      v10 = 0;
      while ( v10 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_29;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v10, 0LL);
        if ( !AssetName )
          goto LABEL_29;
        v11 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v9 )
            goto LABEL_29;
          if ( System_String__Equals_63123792(v9, (System_String_o *)Component_object[2].klass, 0LL) )
            return 0;
        }
        v13 = UnityEngine_Component__GetComponent_object_(
                v11,
                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v13 || !v9 )
            goto LABEL_29;
          if ( System_String__Equals_63123792(v9, (System_String_o *)v13[5].klass, 0LL) && !LOBYTE(v13[7].klass) )
            return 0;
        }
        ++v10;
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
  UnityEngine_Object_o *_41945104; // x23
  const MethodInfo *v33; // x5
  System_String_o *name; // x23
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_4BDD97F & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13794/*"Talk/TestBackEffect"*/);
    sub_1C21E38(&StringLiteral_13801/*"Talk/communicationCharaEffect"*/);
    sub_1C21E38(&StringLiteral_13799/*"Talk/bit_talk_10"*/);
    sub_1C21E38(&StringLiteral_13797/*"Talk/TestEffect"*/);
    sub_1C21E38(&StringLiteral_13793/*"Talk/Test"*/);
    sub_1C21E38(&StringLiteral_13795/*"Talk/TestCharaBackEffect"*/);
    this = (CommonEffectManager_o *)sub_1C21E38(&StringLiteral_13796/*"Talk/TestCharaEffect"*/);
    byte_4BDD97F = 1;
  }
  if ( !effectName )
    goto LABEL_52;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_13793/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13801/*"Talk/communicationCharaEffect"*/, 0LL) )
      effectName = (System_String_o *)StringLiteral_13799/*"Talk/bit_talk_10"*/;
    goto LABEL_11;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13797/*"Talk/TestEffect"*/, 0LL) )
  {
    v21 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v21 = CommonEffectManager_TypeInfo;
    }
    v22 = 16LL;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13794/*"Talk/TestBackEffect"*/, 0LL) )
  {
    v21 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v21 = CommonEffectManager_TypeInfo;
    }
    v22 = 24LL;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13796/*"Talk/TestCharaEffect"*/, 0LL) )
  {
    v21 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v21 = CommonEffectManager_TypeInfo;
    }
    v22 = 32LL;
    goto LABEL_36;
  }
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13795/*"Talk/TestCharaBackEffect"*/, 0LL) )
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
                                      (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v27 = this;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0LL);
      if ( parent )
      {
        v29 = this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v29 )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v29, (UnityEngine_Transform_o *)this, 0LL);
          v35.fields.x = x;
          v35.fields.y = y;
          v35.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v29, v35, 0LL);
          if ( !byte_4BD6BB7 )
          {
            sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
            byte_4BD6BB7 = 1;
          }
          UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)v29,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          if ( !byte_4BD6BB6 )
          {
            sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB6 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v29,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          if ( Component_object )
          {
            CommonEffectLoadComponent__Init_41939332(
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
  v22 = 40LL;
LABEL_36:
  v31 = *(UnityEngine_Object_o **)((char *)&v21->static_fields->effectAssetStoragePath + v22);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  _41945104 = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_52;
    name = UnityEngine_Object__get_name(v31, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v36.fields.x = x;
    v36.fields.y = y;
    v36.fields.z = z;
    _41945104 = (UnityEngine_Object_o *)CommonEffectManager__Create_41945104(
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
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_41945104, 0LL, 0LL);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  if ( !_41945104 )
LABEL_52:
    sub_1C22094(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_41945104->klass[1]._1.gc_desc)(
    _41945104,
    param,
    _41945104->klass[1]._1.name);
LABEL_49:
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_Object_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      _41945104,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall CommonEffectManager__LoadSkinEffects(
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4BDD985 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD985 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v7);
}


void __fastcall CommonEffectManager__LoadSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  int32_t UiFlag; // w0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonEffectManager_c *v11; // x8
  int32_t v12; // w22
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_Dictionary_object__object__o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *Instance; // x21
  AssetLoader_LoadEndDataHandler_o *v31; // x23
  __int64 v32; // x0
  __int64 v33; // x1
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDD981 & 1) == 0 )
  {
    sub_1C21E38(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__50_0__);
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDD981 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  v11 = CommonEffectManager_TypeInfo;
  v12 = UiFlag;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v11 = CommonEffectManager_TypeInfo;
  }
  skinEffectAssetStoragePath = v11->static_fields->skinEffectAssetStoragePath;
  v34 = v12 + 1;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v8, v9, v10);
  v15 = System_String__Format(skinEffectAssetStoragePath, v14, 0LL);
  if ( System_String__op_Equality(v15, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v16);
    this->fields.callbackAfterSkinLoad = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.callbackAfterSkinLoad,
      (int64_t)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v23 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v23,
      (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skinedEffects, (int64_t)v23, v24, v25, v26, v27, v28, v29);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v31,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__50_0__,
      0LL);
    if ( !Instance )
      sub_1C22094(v32, v33);
    AssetManager__LoadAssetStorage((AssetManager_o *)Instance, v15, v31, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BDD980 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD980 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BDD986 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD986 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void __fastcall CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  Il2CppObject *currentValue; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDD982 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4BDD982 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
               (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v22,
      Values,
      (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v22,
              (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v22.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v22,
      (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Values,
      (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skinedEffects, 0LL, v8, v9, v10, v11, v12, v13);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_16:
    sub_1C22094(Values, v6);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_loadedSkinAssetName, 0LL, v16, v17, v18, v19, v20, v21);
}


void __fastcall CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  UnityEngine_Component_o *v8; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v10; // x22
  const MethodInfo *v11; // x2

  if ( (byte_4BDD974 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD974 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1C22094(transform, v6);
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
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
            v10 = UnityEngine_Component__GetComponent_object_(
                    v8,
                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v10,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_24;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v10, isSkip, v11);
            }
          }
          ++v7;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
  }
}


void __fastcall CommonEffectManager__Resume_41950144(
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
  const MethodInfo *v16; // x2

  if ( (byte_4BDD975 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD975 = 1;
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
    CommonEffectManager__Stop(parent, isSkip, 0, 0LL, v8);
    return;
  }
  j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  if ( !effectName )
    goto LABEL_32;
LABEL_9:
  AssetName = CommonEffectManager__GetAssetName(effectName, v7);
  if ( !parent
    || (v11 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
  {
LABEL_30:
    sub_1C22094(AssetName, v10);
  }
  v12 = 0;
  while ( v12 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
  {
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !AssetName )
      goto LABEL_30;
    AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0LL);
    if ( !AssetName )
      goto LABEL_30;
    v13 = (UnityEngine_Component_o *)AssetName;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)AssetName,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetName & 1) == 0 )
      goto LABEL_22;
    if ( !Component_object || !v11 )
      goto LABEL_30;
    if ( System_String__Equals_63123792(v11, (System_String_o *)Component_object[2].klass, 0LL) )
    {
      LOBYTE(Component_object[4].klass) = isSkip;
      BYTE1(Component_object[4].klass) = 0;
    }
    else
    {
LABEL_22:
      v15 = UnityEngine_Component__GetComponent_object_(
              v13,
              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v15 || !v11 )
          goto LABEL_30;
        if ( System_String__Equals_63123792(v11, (System_String_o *)v15[5].klass, 0LL) )
          CommonEffectComponent__Resume((CommonEffectComponent_o *)v15, isSkip, v16);
      }
    }
    ++v12;
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

  if ( (byte_4BDD988 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD988 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDD984 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD984 = 1;
  }
  v7 = 0LL;
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
             (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v9 = value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__Instantiate_object_(
                v9,
                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v7 = (UnityEngine_GameObject_o *)v10,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v7, transform, 0LL),
              !v7) )
        {
          sub_1C22094(v10, v11);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDD987 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4BDD987 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
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
  Il2CppObject *skinedEffects; // x0
  Il2CppObject *v12; // x23
  UnityEngine_GameObject_o *v13; // x23
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4BDD983 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (CommonEffectManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD983 = 1;
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
            sub_1C2209C(this, effects);
          skinedEffects = (Il2CppObject *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
                                            (Il2CppObject *)effects->m_Items[v10],
                                            &value,
                                            (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12 = value;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            skinedEffects = UnityEngine_Object__Instantiate_object_(
                              v12,
                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              skinedEffects = UnityEngine_GameObject__GetComponentInChildren_object_(
                                v13,
                                (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0LL);
            }
          }
          LODWORD(v9) = effects->max_length;
          if ( (__int64)++v10 >= (int)v9 )
            return;
        }
        sub_1C22094(skinedEffects, effects);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CommonEffectManager_c *v12; // x0
  struct CommonEffectManager_StaticFields *static_fields; // x0
  struct CommonEffectManager_StaticFields *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct CommonEffectManager_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct CommonEffectManager_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4BDD97E & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD97E = 1;
  }
  v12 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v12 = CommonEffectManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->testEffectPrefab,
    (int64_t)effectPrefab,
    (int64_t)charaEffectPrefab,
    (int32_t)charaBackEffectPrefab,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v14 = CommonEffectManager_TypeInfo->static_fields;
  v14->testBackEffectPrefab = backEffectPrefab;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v14->testBackEffectPrefab,
    (int64_t)backEffectPrefab,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = CommonEffectManager_TypeInfo->static_fields;
  v21->testCharaEffectPrefab = charaEffectPrefab;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v21->testCharaEffectPrefab,
    (int64_t)charaEffectPrefab,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = CommonEffectManager_TypeInfo->static_fields;
  v28->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v28->testCharaBackEffectPrefab,
    (int64_t)charaBackEffectPrefab,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


bool __fastcall CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  if ( (byte_4BDD976 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD976 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(0, parent, 0LL, isSkip, isLoadStop, markKey, v5);
}


bool __fastcall CommonEffectManager__StopInternal(
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
  Il2CppClass *klass; // x8

  if ( (byte_4BDD97A & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetOrAddComponent_MarkComponent___);
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD97A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetName = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)AssetName & 1) != 0 )
    return 1;
  if ( effectName )
  {
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    AssetName = CommonEffectManager__GetAssetName(effectName, v12);
    effectName = AssetName;
  }
  if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_47:
    sub_1C22094(AssetName, v12);
  v15 = 0;
  v16 = isSkip || isLoadStop;
  v13 = 1;
  while ( v15 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
  {
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !AssetName )
      goto LABEL_47;
    AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v15, 0LL);
    if ( !AssetName )
      goto LABEL_47;
    v17 = (UnityEngine_Component_o *)AssetName;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)AssetName,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetName & 1) == 0 )
      goto LABEL_27;
    if ( !effectName )
      goto LABEL_24;
    if ( !Component_object )
      goto LABEL_47;
    AssetName = (System_String_o *)System_String__Equals_63123792(
                                     effectName,
                                     (System_String_o *)Component_object[2].klass,
                                     0LL);
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
              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !effectName )
          goto LABEL_33;
        if ( !v19 )
          goto LABEL_47;
        AssetName = (System_String_o *)System_String__Equals_63123792(effectName, (System_String_o *)v19[5].klass, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
LABEL_33:
          if ( isSkip )
          {
            if ( !v19 )
              goto LABEL_47;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v19,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
          }
          else
          {
            AssetName = (System_String_o *)System_String__IsNullOrEmpty(markKey, 0LL);
            if ( ((unsigned __int8)AssetName & 1) == 0 )
            {
              AssetName = (System_String_o *)BasicHelper__GetOrAddComponent_object_(
                                               v17,
                                               (const MethodInfo_2F9DB30 *)Method_BasicHelper_GetOrAddComponent_MarkComponent___);
              if ( !AssetName )
                goto LABEL_47;
              MarkComponent__Add((MarkComponent_o *)AssetName, markKey, 0LL);
            }
            if ( !v19 )
              goto LABEL_47;
            klass = v19->klass;
            if ( force )
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[9].method)(
                v19,
                1LL,
                0LL,
                klass->vtable[10].methodPtr);
            else
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[8].method)(
                v19,
                1LL,
                0LL,
                klass->vtable[9].methodPtr);
          }
        }
      }
    }
    ++v15;
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !AssetName )
      goto LABEL_47;
  }
  return v13;
}


bool __fastcall CommonEffectManager__Stop_41951444(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_4BDD977 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    byte_4BDD977 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(0, parent, effectName, isSkip, isLoadStop, markKey, v6);
}


void __fastcall CommonEffectManager___LoadSkinEffectsLocal_b__50_0(
        CommonEffectManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  Il2CppObject *UiFlag; // x0
  __int64 v7; // x1
  struct System_String_array *EffectName; // x23
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  System_String_o *v11; // x21
  Il2CppObject *Object_object__49880776; // x22
  UnityEngine_GameObject_o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_String_o *name; // x1

  if ( (byte_4BDD98C & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    byte_4BDD98C = 1;
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
  v9 = *(_QWORD *)&EffectName->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( v10 < (unsigned int)v9 )
    {
      if ( !data )
        goto LABEL_23;
      v11 = EffectName->m_Items[v10];
      Object_object__49880776 = AssetData__GetObject_object__49880776(
                                  data,
                                  v11,
                                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UiFlag = (Il2CppObject *)UnityEngine_Object__op_Equality(
                                 (UnityEngine_Object_o *)Object_object__49880776,
                                 0LL,
                                 0LL);
      if ( ((unsigned __int8)UiFlag & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UiFlag = UnityEngine_Object__Instantiate_object_(
                   Object_object__49880776,
                   (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_23;
        v13 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.skinedEffects,
          (Il2CppObject *)v11,
          UiFlag,
          (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v13, (UnityEngine_Component_o *)this, 0LL);
        if ( !v13 )
          goto LABEL_23;
        UnityEngine_GameObject__SetActive(v13, 0, 0LL);
      }
      LODWORD(v9) = EffectName->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1C2209C(UiFlag, v7);
  }
LABEL_21:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackAfterSkinLoad, 0LL, v14, v15, v16, v17, v18, v19);
  if ( !data )
LABEL_23:
    sub_1C22094(UiFlag, v7);
  name = data->fields.name;
  this->fields.loadedSkinAssetName = name;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.loadedSkinAssetName,
    (int64_t)name,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}