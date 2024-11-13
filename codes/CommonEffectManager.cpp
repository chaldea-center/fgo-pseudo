void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct CommonEffectManager_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct CommonEffectManager_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct CommonEffectManager_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct CommonEffectManager_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct CommonEffectManager_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B175C1 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_5924/*"Effect/"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5963/*"Effect/Skin/{0:D2}"*/, v10, v11);
    byte_4B175C1 = 1;
  }
  CommonEffectManager_TypeInfo->static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5924/*"Effect/"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CommonEffectManager_TypeInfo->static_fields,
    StringLiteral_5924/*"Effect/"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_5963/*"Effect/Skin/{0:D2}"*/;
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5963/*"Effect/Skin/{0:D2}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->skinEffectAssetStoragePath,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = CommonEffectManager_TypeInfo->static_fields;
  v20->testEffectPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->testEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  v27 = CommonEffectManager_TypeInfo->static_fields;
  v27->testBackEffectPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->testBackEffectPrefab, 0LL, v28, v29, v30, v31, v32, v33);
  v34 = CommonEffectManager_TypeInfo->static_fields;
  v34->testCharaEffectPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34->testCharaEffectPrefab, 0LL, v35, v36, v37, v38, v39, v40);
  v41 = CommonEffectManager_TypeInfo->static_fields;
  v41->testCharaBackEffectPrefab = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->testCharaBackEffectPrefab, 0LL, v42, v43, v44, v45, v46, v47);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B175C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__, method, v2);
    byte_4B175C0 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
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

  if ( (byte_4B1759B & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, prefab);
    byte_4B1759B = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectName, prefab);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_41398356(parent, effectName, prefab, v13, 0, 0, v4);
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
  __int64 v15; // x2
  CommonEffectManager_o *v16; // x25
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4B175A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, param);
    byte_4B175A7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v16 = (CommonEffectManager_o *)Instance;
  if ( !byte_4B109C1 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    sub_1BCAA3C(Instance, v14);
  CommonEffectManager__LoadCreateLocal(
    v16,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    param,
    0LL,
    isSkip,
    isPause,
    flip,
    v17);
}


void __fastcall CommonEffectManager__CreateParam_41402340(
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
  __int64 v17; // x2
  CommonEffectManager_o *v18; // x26
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B175A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, param);
    byte_4B175A8 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v18 = (CommonEffectManager_o *)Instance;
  if ( !byte_4B109C1 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18 )
    sub_1BCAA3C(Instance, v16);
  CommonEffectManager__LoadCreateLocal(
    v18,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    param,
    callback,
    isSkip,
    isPause,
    flip,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_41402572(
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
  if ( (byte_4B175A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, param);
    byte_4B175A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v18);
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
void __fastcall CommonEffectManager__CreateParam_41402776(
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
  if ( (byte_4B175AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, param);
    byte_4B175AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v20);
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


void __fastcall CommonEffectManager__Create_41360948(
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
  __int64 v15; // x2
  CommonEffectManager_o *v16; // x25
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4B175A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, callback);
    byte_4B175A4 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v16 = (CommonEffectManager_o *)Instance;
  if ( !byte_4B109C1 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    sub_1BCAA3C(Instance, v14);
  CommonEffectManager__LoadCreateLocal(
    v16,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL,
    callback,
    isSkip,
    isPause,
    flip,
    v17);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41398356(
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  System_String_o *AssetName; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x24
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *v26; // x24
  float v27; // s11
  float v28; // s12
  float v29; // s13
  const MethodInfo *v30; // x1
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s3
  float v35; // s14
  float v36; // s15
  float v37; // s8
  float v38; // s9
  const MethodInfo *v39; // x4
  float v41; // [xsp+48h] [xbp-38h]
  float v42; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B1759E & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, prefab);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B1759E = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  AssetName = CommonEffectManager__GetAssetName(effectName, (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v24 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
  if ( !prefab )
    goto LABEL_14;
  v26 = (UnityEngine_Transform_o *)transform;
  v41 = y;
  v42 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v27 = localScale.fields.x;
  v28 = localScale.fields.y;
  v29 = localScale.fields.z;
  *(UnityEngine_Quaternion_o *)&v31 = CommonEffectManager__GetFlipQuaternion(flip, v30);
  if ( !parent )
    goto LABEL_14;
  v35 = v31;
  v36 = v32;
  v37 = v33;
  v38 = v34;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v26 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)transform, 0LL);
  v44.fields.y = v41;
  v44.fields.z = v42;
  v44.fields.x = x;
  UnityEngine_Transform__set_localPosition(v26, v44, 0LL);
  v46.fields.x = v35;
  v46.fields.y = v36;
  v46.fields.z = v37;
  v46.fields.w = v38;
  UnityEngine_Transform__set_localRotation(v26, v46, 0LL);
  v45.fields.x = v27;
  v45.fields.y = v28;
  v45.fields.z = v29;
  UnityEngine_Transform__set_localScale(v26, v45, 0LL);
  if ( !Component_object )
LABEL_14:
    sub_1BCAA3C(transform, v23);
  CommonEffectComponent__Init_41381496((CommonEffectComponent_o *)Component_object, AssetName, 0, 0, v39);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41398856(
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

  if ( (byte_4B1759C & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, prefab);
    byte_4B1759C = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectName, prefab);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = x;
  return CommonEffectManager__Create_41398356(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41399056(
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

  if ( (byte_4B1759D & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, prefab);
    byte_4B1759D = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectName, prefab);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = x;
  return CommonEffectManager__Create_41398356(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41399256(
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

  if ( (byte_4B1759F & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, data, prefab);
    byte_4B1759F = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, prefab);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, data);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_41399456(parent, data, prefab, v13, 0, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41399456(
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *transform; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x23
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v24; // x23
  const MethodInfo *v25; // x1
  float v26; // s13
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
  if ( (byte_4B175A2 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, data, prefab);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B175A2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v22 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !prefab )
    goto LABEL_14;
  v24 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v26 = localScale.fields.z;
  v37 = localScale.fields.y;
  v38 = localScale.fields.x;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v25);
  *(UnityEngine_Quaternion_o *)&v27 = CommonEffectManager__GetFlipQuaternion(flip, v25);
  if ( !parent )
    goto LABEL_14;
  v31 = v27;
  v32 = v28;
  v33 = v29;
  v34 = v30;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v24 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)transform, 0LL);
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  UnityEngine_Transform__set_localPosition(v24, v40, 0LL);
  v42.fields.x = v31;
  v42.fields.y = v32;
  v42.fields.z = v33;
  v42.fields.w = v34;
  UnityEngine_Transform__set_localRotation(v24, v42, 0LL);
  v41.fields.y = v37;
  v41.fields.x = v38;
  v41.fields.z = v26;
  UnityEngine_Transform__set_localScale(v24, v41, 0LL);
  if ( !Component_object )
LABEL_14:
    sub_1BCAA3C(transform, v21);
  CommonEffectComponent__Init_41381568((CommonEffectComponent_o *)Component_object, data, 0, 0, v35);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41399932(
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

  if ( (byte_4B175A0 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, data, prefab);
    byte_4B175A0 = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, prefab);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, data);
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = x;
  return CommonEffectManager__Create_41399456(parent, data, prefab, v14, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_41400132(
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
  if ( (byte_4B175A1 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, data, prefab);
    byte_4B175A1 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, data);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_41399456(parent, data, prefab, v13, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_41400288(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  CommonEffectManager_o *v14; // x24
  const MethodInfo *v15; // [xsp+0h] [xbp-50h]

  if ( (byte_4B175A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, isSkip);
    byte_4B175A3 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v14 = (CommonEffectManager_o *)Instance;
  if ( !byte_4B109C1 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v13);
    byte_4B109C1 = 1;
  }
  if ( !v14 )
    sub_1BCAA3C(Instance, v12);
  CommonEffectManager__LoadCreateLocal(
    v14,
    parent,
    effectName,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL,
    0LL,
    isSkip,
    isPause,
    flip,
    v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_41401716(
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
  if ( (byte_4B175A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, isSkip);
    byte_4B175A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v16);
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
void __fastcall CommonEffectManager__Create_41401908(
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
  if ( (byte_4B175A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName, callback);
    byte_4B175A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v18);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t transform; // x0
  __int64 v27; // x1
  int32_t v28; // w21
  UnityEngine_Component_o *v29; // x22
  __int64 v30; // x1
  Il2CppObject *Component_object; // x23
  __int64 v32; // x1
  Il2CppObject *v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int64_t v43; // x1
  Il2CppClass **v44; // x0
  __int64 v45; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B175B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B175B2 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         v22,
                                                         v23,
                                                         v24);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_24;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_24;
    v28 = 0;
    while ( 1 )
    {
      transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL);
      if ( v28 >= (int)transform )
        break;
      transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v28, 0LL);
      if ( !transform )
        goto LABEL_24;
      v29 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      v33 = UnityEngine_Component__GetComponent_object_(
              v29,
              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
      {
LABEL_18:
        transform = (int64_t)UnityEngine_Component__get_gameObject(v29, 0LL);
        if ( !v25 )
          goto LABEL_24;
        items = v25->fields._items;
        v41 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v25->fields._size;
        v43 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)transform,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v43;
          sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), v43, v34, v35, v36, v37, v38, v39);
        }
      }
      ++v28;
      transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
    if ( !v25 )
LABEL_24:
      sub_1BCAA3C(transform, v27);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      v25,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v47.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_41405844(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  System_String_o *AssetName; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t transform; // x0
  __int64 v33; // x1
  int32_t v34; // w22
  UnityEngine_Component_o *v35; // x23
  __int64 v36; // x1
  Il2CppObject *Component_object; // x24
  __int64 v38; // x1
  Il2CppObject *v39; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  int64_t v49; // x1
  Il2CppClass **v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B175B3 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    byte_4B175B3 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v25);
    if ( effectName )
      goto LABEL_8;
LABEL_41:
    CommonEffectManager__Stop(parent, 0, 0, v26);
    return;
  }
  if ( !effectName )
    goto LABEL_41;
LABEL_8:
  AssetName = CommonEffectManager__GetAssetName(effectName, v25);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_32;
  transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_32;
  v34 = 0;
  while ( 1 )
  {
    transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL);
    if ( v34 >= (int)transform )
      break;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
    transform = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v34, 0LL);
    if ( !transform )
      goto LABEL_32;
    v35 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !Component_object || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_62409536(AssetName, (System_String_o *)Component_object[2].klass, 0LL) )
        goto LABEL_26;
    }
    v39 = UnityEngine_Component__GetComponent_object_(
            v35,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      if ( !v39 || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_62409536(AssetName, (System_String_o *)v39[5].klass, 0LL) )
      {
LABEL_26:
        transform = (int64_t)UnityEngine_Component__get_gameObject(v35, 0LL);
        if ( !v31 )
          goto LABEL_32;
        items = v31->fields._items;
        v47 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v31->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v31->fields._size;
        v49 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)transform,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v49;
          sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), v49, v40, v41, v42, v43, v44, v45);
        }
      }
    }
    ++v34;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
  }
  if ( !v31 )
LABEL_32:
    sub_1BCAA3C(transform, v33);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v31,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v53.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4B175AF & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isSkip, isLoadStop);
    byte_4B175AF = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__ForceStop_41404868(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4B175B0 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, isSkip);
    byte_4B175B0 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  return CommonEffectManager__StopInternal(1, parent, effectName, isSkip, isLoadStop, v5);
}


CommonEffectComponent_array *__fastcall CommonEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  int32_t v19; // w21
  __int64 v20; // x1
  Il2CppObject *Component_object; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B17596 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B17596 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CommonEffectComponent__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1BCAA3C(transform, v18);
    v19 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v19 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v19, 0LL);
      if ( !transform )
        goto LABEL_24;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_24;
        items = v15->fields._items;
        v29 = Method_System_Collections_Generic_List_CommonEffectComponent__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            Component_object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v31[4] = (Il2CppClass *)Component_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)Component_object, v22, v23, v24, v25, v26, v27);
        }
      }
      ++v19;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  if ( !v15 )
    goto LABEL_24;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v15,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonEffectManager_c *v4; // x0

  if ( (byte_4B17595 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, method, v2);
    byte_4B17595 = 1;
  }
  v4 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
    v4 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_62401220(v4->static_fields->effectAssetStoragePath, effectName, 0LL);
}


UnityEngine_Quaternion_o __fastcall CommonEffectManager__GetFlipQuaternion(int32_t flip, const MethodInfo *method)
{
  __int64 v2; // x2
  int v3; // w10
  struct UnityEngine_Quaternion_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  float w; // s3
  float v8; // s2
  float v9; // s1
  float x; // s0
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = flip - 1;
  if ( (unsigned int)(flip - 1) >= 3 )
  {
    if ( !byte_4B109C7 )
    {
      sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, method, v2);
      byte_4B109C7 = 1;
    }
    static_fields = UnityEngine_Quaternion_TypeInfo->static_fields;
    w = static_fields->identityQuaternion.fields.w;
    p_y = &static_fields->identityQuaternion.fields.y;
    p_z = &static_fields->identityQuaternion.fields.z;
  }
  else
  {
    static_fields = (struct UnityEngine_Quaternion_StaticFields *)((char *)&unk_C0D9B4 + 4 * v3);
    p_y = (float *)((char *)&unk_C0D9C0 + 4 * v3);
    p_z = (float *)((char *)&unk_C0D9CC + 4 * v3);
    w = 0.0;
  }
  v8 = *p_z;
  v9 = *p_y;
  x = static_fields->identityQuaternion.fields.x;
  result.fields.w = w;
  result.fields.z = v8;
  result.fields.y = v9;
  result.fields.x = x;
  return result;
}


bool __fastcall CommonEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  int32_t v11; // w20
  UnityEngine_Component_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Component_object; // x22
  __int64 v15; // x1
  Il2CppObject *v16; // x21

  if ( (byte_4B17597 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B17597 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_1BCAA3C(transform, v9);
    v11 = 0;
    while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
      if ( !transform )
        goto LABEL_20;
      v12 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 1;
      v16 = UnityEngine_Component__GetComponent_object_(
              v12,
              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
        return 1;
      ++v11;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
    }
  }
  return 0;
}


bool __fastcall CommonEffectManager__IsBusy_41396704(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x1
  System_String_o *AssetName; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  int32_t v16; // w21
  UnityEngine_Component_o *v17; // x22
  __int64 v18; // x1
  Il2CppObject *Component_object; // x23
  __int64 v20; // x1
  Il2CppObject *v21; // x22

  if ( (byte_4B17598 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B17598 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 0;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
    {
LABEL_9:
      AssetName = CommonEffectManager__GetAssetName(effectName, v11);
      if ( !parent
        || (v15 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_28:
        sub_1BCAA3C(AssetName, v14);
      }
      v16 = 0;
      while ( v16 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_28;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v16, 0LL);
        if ( !AssetName )
          goto LABEL_28;
        v17 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v15 )
            goto LABEL_28;
          if ( System_String__Equals_62409536(v15, (System_String_o *)Component_object[2].klass, 0LL) )
            return 1;
        }
        v21 = UnityEngine_Component__GetComponent_object_(
                v17,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v21 || !v15 )
            goto LABEL_28;
          if ( System_String__Equals_62409536(v15, (System_String_o *)v21[5].klass, 0LL) )
            return 1;
        }
        ++v16;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_28;
      }
      return 0;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v11);
    if ( effectName )
      goto LABEL_9;
  }
  return CommonEffectManager__IsBusy(parent, v11);
}


bool __fastcall CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B175BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1, v2);
    byte_4B175BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return Instance[4].klass != 0LL;
}


bool __fastcall CommonEffectManager__IsSkinEffectLoaded(CommonEffectManager_o *this, const MethodInfo *method)
{
  return this->fields.loadedSkinAssetName != 0LL;
}


bool __fastcall CommonEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  int32_t v11; // w20
  UnityEngine_Component_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Component_object; // x22
  __int64 v15; // x1
  Il2CppObject *v16; // x21

  if ( (byte_4B17599 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B17599 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_1BCAA3C(transform, v9);
    v11 = 0;
    while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
      if ( !transform )
        goto LABEL_22;
      v12 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 0;
      v16 = UnityEngine_Component__GetComponent_object_(
              v12,
              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_22;
        if ( !LOBYTE(v16[7].klass) )
          return 0;
      }
      ++v11;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__IsStart_41397620(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x1
  System_String_o *AssetName; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  int32_t v16; // w21
  UnityEngine_Component_o *v17; // x22
  __int64 v18; // x1
  Il2CppObject *Component_object; // x23
  __int64 v20; // x1
  Il2CppObject *v21; // x22

  if ( (byte_4B1759A & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1759A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 1;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
    {
LABEL_9:
      AssetName = CommonEffectManager__GetAssetName(effectName, v11);
      if ( !parent
        || (v15 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_29:
        sub_1BCAA3C(AssetName, v14);
      }
      v16 = 0;
      while ( v16 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_29;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v16, 0LL);
        if ( !AssetName )
          goto LABEL_29;
        v17 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !Component_object || !v15 )
            goto LABEL_29;
          if ( System_String__Equals_62409536(v15, (System_String_o *)Component_object[2].klass, 0LL) )
            return 0;
        }
        v21 = UnityEngine_Component__GetComponent_object_(
                v17,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v21 || !v15 )
            goto LABEL_29;
          if ( System_String__Equals_62409536(v15, (System_String_o *)v21[5].klass, 0LL) && !LOBYTE(v21[7].klass) )
            return 0;
        }
        ++v16;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_29;
      }
      return 1;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v11);
    if ( effectName )
      goto LABEL_9;
  }
  return CommonEffectManager__IsStart(parent, v11);
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo *v41; // x1
  CommonEffectManager_c *v42; // x0
  __int64 v43; // x9
  System_String_o *AssetName; // x0
  __int64 v45; // x1
  Il2CppObject *loadEffectPrefab; // x26
  System_String_o *v47; // x25
  CommonEffectManager_o *v48; // x27
  Il2CppObject *Component_object; // x26
  CommonEffectManager_o *v50; // x27
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  const MethodInfo *v55; // x7
  UnityEngine_Object_o *v56; // x24
  UnityEngine_Object_o *_41398356; // x23
  __int64 v58; // x1
  const MethodInfo *v59; // x5
  System_String_o *name; // x23
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v18 = effectName;
  v20 = this;
  if ( (byte_4B175B5 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, parent, effectName);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_13701/*"Talk/TestBackEffect"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_13708/*"Talk/communicationCharaEffect"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13706/*"Talk/bit_talk_10"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13704/*"Talk/TestEffect"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13700/*"Talk/Test"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_13702/*"Talk/TestCharaBackEffect"*/, v37, v38);
    this = (CommonEffectManager_o *)sub_1BCA7E0(&StringLiteral_13703/*"Talk/TestCharaEffect"*/, v39, v40);
    byte_4B175B5 = 1;
  }
  if ( !v18 )
    goto LABEL_52;
  if ( !System_String__StartsWith(v18, (System_String_o *)StringLiteral_13700/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13708/*"Talk/communicationCharaEffect"*/, 0LL) )
      v18 = (System_String_o *)StringLiteral_13706/*"Talk/bit_talk_10"*/;
    goto LABEL_11;
  }
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13704/*"Talk/TestEffect"*/, 0LL) )
  {
    v42 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v41);
      v42 = CommonEffectManager_TypeInfo;
    }
    v43 = 16LL;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13701/*"Talk/TestBackEffect"*/, 0LL) )
  {
    v42 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v41);
      v42 = CommonEffectManager_TypeInfo;
    }
    v43 = 24LL;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13703/*"Talk/TestCharaEffect"*/, 0LL) )
  {
    v42 = CommonEffectManager_TypeInfo;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v41);
      v42 = CommonEffectManager_TypeInfo;
    }
    v43 = 32LL;
    goto LABEL_36;
  }
  if ( !System_String__op_Equality(v18, (System_String_o *)StringLiteral_13702/*"Talk/TestCharaBackEffect"*/, 0LL) )
  {
LABEL_11:
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v41);
    AssetName = CommonEffectManager__GetAssetName(v18, v41);
    loadEffectPrefab = (Il2CppObject *)v20->fields.loadEffectPrefab;
    v47 = AssetName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
    this = (CommonEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                      loadEffectPrefab,
                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v48 = this;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
      if ( parent )
      {
        v50 = this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v50 )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v50, (UnityEngine_Transform_o *)this, 0LL);
          v61.fields.x = x;
          v61.fields.y = y;
          v61.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v50, v61, 0LL);
          if ( !byte_4B109C7 )
          {
            sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v51, v52);
            byte_4B109C7 = 1;
          }
          UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)v50,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          if ( !byte_4B109C6 )
          {
            sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v53, v54);
            byte_4B109C6 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v50,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          if ( Component_object )
          {
            CommonEffectLoadComponent__Init_41392584(
              (CommonEffectLoadComponent_o *)Component_object,
              v47,
              param,
              callback,
              isSkip,
              isPause,
              flip,
              v55);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v42 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v41);
    v42 = CommonEffectManager_TypeInfo;
  }
  v43 = 40LL;
LABEL_36:
  v56 = *(UnityEngine_Object_o **)((char *)&v42->static_fields->effectAssetStoragePath + v43);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
  _41398356 = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_52;
    name = UnityEngine_Object__get_name(v56, 0LL);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v58);
    v62.fields.x = x;
    v62.fields.y = y;
    v62.fields.z = z;
    _41398356 = (UnityEngine_Object_o *)CommonEffectManager__Create_41398356(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v56,
                                          v62,
                                          0,
                                          flip,
                                          v59);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_41398356, 0LL, 0LL);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  if ( !_41398356 )
LABEL_52:
    sub_1BCAA3C(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_41398356->klass[1]._1.gc_desc)(
    _41398356,
    param,
    _41398356->klass[1]._1.name);
LABEL_49:
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_Object_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      _41398356,
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

  if ( (byte_4B175BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, *(_QWORD *)&loadParallelMax, method);
    byte_4B175BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__LoadSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t UiFlag; // w0
  __int64 v22; // x1
  CommonEffectManager_c *v23; // x8
  int32_t v24; // w22
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x22
  const MethodInfo *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_Dictionary_object__object__o *v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *Instance; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  AssetLoader_LoadEndDataHandler_o *v49; // x23
  __int64 v50; // x0
  __int64 v51; // x1
  int v52; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B175B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__, callback, *(_QWORD *)&loadParallelMax);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v19, v20);
    byte_4B175B7 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, callback);
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  v23 = CommonEffectManager_TypeInfo;
  v24 = UiFlag;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v22);
    v23 = CommonEffectManager_TypeInfo;
  }
  skinEffectAssetStoragePath = v23->static_fields->skinEffectAssetStoragePath;
  v52 = v24 + 1;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v27 = System_String__Format(skinEffectAssetStoragePath, v26, 0LL);
  if ( System_String__op_Equality(v27, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v28);
    this->fields.callbackAfterSkinLoad = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackAfterSkinLoad,
      (int64_t)callback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                       System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                       v35,
                                                                       v36,
                                                                       v37);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v38,
      (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v38;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skinedEffects, (int64_t)v38, v39, v40, v41, v42, v43, v44);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v49 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v46, v47, v48);
    AssetLoader_LoadEndDataHandler___ctor(
      v49,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v50, v51);
    AssetManager__LoadAssetStorage((AssetManager_o *)Instance, v27, v49, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B175B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1, v2);
    byte_4B175B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v4);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B175BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1, v2);
    byte_4B175BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v4);
}


void __fastcall CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *currentValue; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B175B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v14, v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v16,
      v17);
    byte_4B175B8 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
               (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v38,
      Values,
      (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v38,
              (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v38.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      UnityEngine_Object__DestroyImmediate_70154432((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v38,
      (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Values,
      (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skinedEffects, 0LL, v24, v25, v26, v27, v28, v29);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_16:
    sub_1BCAA3C(Values, v21);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_loadedSkinAssetName, 0LL, v32, v33, v34, v35, v36, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  UnityEngine_Component_o *v12; // x22
  __int64 v13; // x1
  Il2CppObject *Component_object; // x23
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  const MethodInfo *v17; // x2

  if ( (byte_4B175AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, isSkip, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B175AB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSkip);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1BCAA3C(transform, v10);
    v11 = 0;
    while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
        if ( transform )
        {
          v12 = (UnityEngine_Component_o *)transform;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
            v16 = UnityEngine_Component__GetComponent_object_(
                    v12,
                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v16,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_24;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v16, isSkip, v17);
            }
          }
          ++v11;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Resume_41403396(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_String_o *AssetName; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  int32_t v18; // w22
  UnityEngine_Component_o *v19; // x23
  __int64 v20; // x1
  Il2CppObject *Component_object; // x24
  __int64 v22; // x1
  Il2CppObject *v23; // x23
  const MethodInfo *v24; // x2

  if ( (byte_4B175AC & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, isSkip);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B175AC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return;
  if ( CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    if ( effectName )
      goto LABEL_9;
LABEL_32:
    CommonEffectManager__Stop(parent, isSkip, 0, v14);
    return;
  }
  j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v13);
  if ( !effectName )
    goto LABEL_32;
LABEL_9:
  AssetName = CommonEffectManager__GetAssetName(effectName, v13);
  if ( !parent
    || (v17 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(AssetName, v16);
  }
  v18 = 0;
  while ( v18 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
  {
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !AssetName )
      goto LABEL_30;
    AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v18, 0LL);
    if ( !AssetName )
      goto LABEL_30;
    v19 = (UnityEngine_Component_o *)AssetName;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)AssetName,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetName & 1) == 0 )
      goto LABEL_22;
    if ( !Component_object || !v17 )
      goto LABEL_30;
    if ( System_String__Equals_62409536(v17, (System_String_o *)Component_object[2].klass, 0LL) )
    {
      LOBYTE(Component_object[4].klass) = isSkip;
      BYTE1(Component_object[4].klass) = 0;
    }
    else
    {
LABEL_22:
      v23 = UnityEngine_Component__GetComponent_object_(
              v19,
              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v23 || !v17 )
          goto LABEL_30;
        if ( System_String__Equals_62409536(v17, (System_String_o *)v23[5].klass, 0LL) )
          CommonEffectComponent__Resume((CommonEffectComponent_o *)v23, isSkip, v24);
      }
    }
    ++v18;
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

  if ( (byte_4B175BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent, method);
    byte_4B175BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return CommonEffectManager__SetSkinEffectLocal((CommonEffectManager_o *)Instance, effects, parent, v7);
}


UnityEngine_GameObject_o *__fastcall CommonEffectManager__SetSkinEffectLocal(
        CommonEffectManager_o *this,
        System_String_o *effect,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *v11; // x20
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B175BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effect, parent);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B175BA = 1;
  }
  v11 = 0LL;
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
             (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v14 = value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        v15 = UnityEngine_Object__Instantiate_object_(
                v14,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v11 = (UnityEngine_GameObject_o *)v15,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v11, transform, 0LL),
              !v11) )
        {
          sub_1BCAA3C(v15, v16);
        }
        UnityEngine_GameObject__SetActive(v11, 1, 0LL);
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__SetSkinEffects(
        System_String_array *effects,
        UnityEngine_GameObject_o *parent,
        bool doSetDepthZero,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4B175BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent, doSetDepthZero);
    byte_4B175BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  Il2CppObject *skinedEffects; // x0
  Il2CppObject *v18; // x23
  UnityEngine_GameObject_o *v19; // x23
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4B175B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effects, parent);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    this = (CommonEffectManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B175B9 = 1;
  }
  value = 0LL;
  if ( effects )
  {
    if ( v8->fields.skinedEffects )
    {
      v15 = *(_QWORD *)&effects->max_length;
      if ( (int)v15 >= 1 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          if ( v16 >= (unsigned int)v15 )
            sub_1BCAA44(this, effects);
          skinedEffects = (Il2CppObject *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
                                            (Il2CppObject *)effects->m_Items[v16],
                                            &value,
                                            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v18 = value;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effects);
            skinedEffects = UnityEngine_Object__Instantiate_object_(
                              v18,
                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !parent )
              break;
            v19 = (UnityEngine_GameObject_o *)skinedEffects;
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
            GameObjectExtensions__SafeSetParent(v19, transform, 0LL);
            if ( !v19 )
              break;
            UnityEngine_GameObject__SetActive(v19, 1, 0LL);
            if ( doSetDepthZero )
            {
              skinedEffects = UnityEngine_GameObject__GetComponentInChildren_object_(
                                v19,
                                (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0LL);
            }
          }
          LODWORD(v15) = effects->max_length;
          if ( (__int64)++v16 >= (int)v15 )
            return;
        }
        sub_1BCAA3C(skinedEffects, effects);
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

  if ( (byte_4B175B4 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, backEffectPrefab, charaEffectPrefab);
    byte_4B175B4 = 1;
  }
  v12 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, backEffectPrefab);
    v12 = CommonEffectManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v28->testCharaBackEffectPrefab,
    (int64_t)charaBackEffectPrefab,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4B175AD & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, isSkip, isLoadStop);
    byte_4B175AD = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
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
  System_String_o *v8; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *AssetName; // x0
  const MethodInfo *v17; // x1
  bool v18; // w27
  int32_t v20; // w23
  bool v21; // w28
  UnityEngine_Component_o *v22; // x24
  __int64 v23; // x1
  Il2CppObject *Component_object; // x25
  __int64 v25; // x1
  Il2CppObject *v26; // x24
  __int64 v27; // x1
  UnityEngine_Object_o *gameObject; // x24
  Il2CppClass *klass; // x8

  v8 = effectName;
  if ( (byte_4B175B1 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, parent, effectName);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B175B1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  AssetName = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)AssetName & 1) == 0 )
  {
    if ( v8 )
    {
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v17);
      AssetName = CommonEffectManager__GetAssetName(v8, v17);
      v8 = AssetName;
    }
    if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_44:
      sub_1BCAA3C(AssetName, v17);
    v20 = 0;
    v21 = isSkip || isLoadStop;
    v18 = 1;
    while ( 1 )
    {
      if ( v20 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
        return v18;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_44;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v20, 0LL);
      if ( !AssetName )
        goto LABEL_44;
      v22 = (UnityEngine_Component_o *)AssetName;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)AssetName,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) == 0 )
        goto LABEL_27;
      if ( !v8 )
        goto LABEL_24;
      if ( !Component_object )
        goto LABEL_44;
      AssetName = (System_String_o *)System_String__Equals_62409536(
                                       v8,
                                       (System_String_o *)Component_object[2].klass,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
LABEL_24:
        if ( v21 )
        {
          if ( !Component_object )
            goto LABEL_44;
          CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_object, v17);
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
LABEL_27:
        v26 = UnityEngine_Component__GetComponent_object_(
                v22,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( v8 )
          {
            if ( !v26 )
              goto LABEL_44;
            if ( !System_String__Equals_62409536(v8, (System_String_o *)v26[5].klass, 0LL) )
              goto LABEL_43;
          }
          else if ( !v26 )
          {
            goto LABEL_44;
          }
          if ( isSkip )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v26,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
            UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
          }
          else
          {
            klass = v26->klass;
            if ( force )
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[9].method)(
                v26,
                1LL,
                0LL,
                klass->vtable[10].methodPtr);
            else
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[8].method)(
                v26,
                1LL,
                0LL,
                klass->vtable[9].methodPtr);
          }
        }
      }
LABEL_43:
      ++v20;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_44;
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__Stop_41404624(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4B175AE & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, effectName, isSkip);
    byte_4B175AE = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  return CommonEffectManager__StopInternal(0, parent, effectName, isSkip, isLoadStop, v5);
}


void __fastcall CommonEffectManager___LoadSkinEffectsLocal_b__49_0(
        CommonEffectManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  Il2CppObject *UiFlag; // x0
  __int64 v15; // x1
  struct System_String_array *EffectName; // x23
  __int64 v17; // x8
  unsigned __int64 v18; // x24
  System_String_o *v19; // x21
  __int64 v20; // x1
  Il2CppObject *Object_object__49237568; // x22
  UnityEngine_GameObject_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_o *name; // x1

  if ( (byte_4B175C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v11, v12);
    byte_4B175C2 = 1;
  }
  skinEffectLoadLists = this->fields.skinEffectLoadLists;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, data);
  UiFlag = (Il2CppObject *)ServantCommentManager__GetUiFlag(0LL);
  if ( !skinEffectLoadLists )
    goto LABEL_23;
  if ( (unsigned int)UiFlag >= skinEffectLoadLists->max_length )
    goto LABEL_24;
  EffectName = skinEffectLoadLists->m_Items[(int)UiFlag].fields.EffectName;
  if ( !EffectName )
    goto LABEL_23;
  v17 = *(_QWORD *)&EffectName->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)v17 )
    {
      if ( !data )
        goto LABEL_23;
      v19 = EffectName->m_Items[v18];
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  data,
                                  v19,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      UiFlag = (Il2CppObject *)UnityEngine_Object__op_Equality(
                                 (UnityEngine_Object_o *)Object_object__49237568,
                                 0LL,
                                 0LL);
      if ( ((unsigned __int8)UiFlag & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        UiFlag = UnityEngine_Object__Instantiate_object_(
                   Object_object__49237568,
                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_23;
        v22 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.skinedEffects,
          (Il2CppObject *)v19,
          UiFlag,
          (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v22, (UnityEngine_Component_o *)this, 0LL);
        if ( !v22 )
          goto LABEL_23;
        UnityEngine_GameObject__SetActive(v22, 0, 0LL);
      }
      LODWORD(v17) = EffectName->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1BCAA44(UiFlag, v15);
  }
LABEL_21:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackAfterSkinLoad, 0LL, v23, v24, v25, v26, v27, v28);
  if ( !data )
LABEL_23:
    sub_1BCAA3C(UiFlag, v15);
  name = data->fields.name;
  this->fields.loadedSkinAssetName = name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadedSkinAssetName,
    (int64_t)name,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}