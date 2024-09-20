void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct CommonEffectManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct CommonEffectManager_StaticFields *v7; // x0
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

  if ( (byte_4A5C4F5 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5812/*"Effect/"*/);
    sub_1B885B0(&StringLiteral_5850/*"Effect/Skin/{0:D2}"*/);
    byte_4A5C4F5 = 1;
  }
  CommonEffectManager_TypeInfo->static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5812/*"Effect/"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CommonEffectManager_TypeInfo->static_fields,
    StringLiteral_5812/*"Effect/"*/,
    v1,
    v2);
  v3 = StringLiteral_5850/*"Effect/Skin/{0:D2}"*/;
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5850/*"Effect/Skin/{0:D2}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->skinEffectAssetStoragePath, v3, v5, v6);
  v7 = CommonEffectManager_TypeInfo->static_fields;
  v7->testEffectPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->testEffectPrefab, 0, v8, v9);
  v10 = CommonEffectManager_TypeInfo->static_fields;
  v10->testBackEffectPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->testBackEffectPrefab, 0, v11, v12);
  v13 = CommonEffectManager_TypeInfo->static_fields;
  v13->testCharaEffectPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->testCharaEffectPrefab, 0, v14, v15);
  v16 = CommonEffectManager_TypeInfo->static_fields;
  v16->testCharaBackEffectPrefab = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->testCharaBackEffectPrefab, 0, v17, v18);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C4F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
    byte_4A5C4F4 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
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

  if ( (byte_4A5C4CF & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4CF = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  return CommonEffectManager__Create_40657664(parent, effectName, prefab, v13, 0, 0, v4);
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

  if ( (byte_4A5C4DB & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_4A55CE1 )
  {
    Instance = (Il2CppObject *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v15 )
    sub_1B8880C(Instance, v14);
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


void __fastcall CommonEffectManager__CreateParam_40661648(
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

  if ( (byte_4A5C4DC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v17 = (CommonEffectManager_o *)Instance;
  if ( !byte_4A55CE1 )
  {
    Instance = (Il2CppObject *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v17 )
    sub_1B8880C(Instance, v16);
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
void __fastcall CommonEffectManager__CreateParam_40661880(
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
  if ( (byte_4A5C4DD & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v18);
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
void __fastcall CommonEffectManager__CreateParam_40662084(
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
  if ( (byte_4A5C4DE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v20);
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


void __fastcall CommonEffectManager__Create_40620464(
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

  if ( (byte_4A5C4D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_4A55CE1 )
  {
    Instance = (Il2CppObject *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v15 )
    sub_1B8880C(Instance, v14);
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
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_40657664(
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
  if ( (byte_4A5C4D2 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4D2 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  AssetName = CommonEffectManager__GetAssetName(effectName, (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v17 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
    sub_1B8880C(transform, v16);
  CommonEffectComponent__Init_40640996((CommonEffectComponent_o *)Component_object, AssetName, 0, 0, v32);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_40658164(
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

  if ( (byte_4A5C4D0 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4D0 = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  return CommonEffectManager__Create_40657664(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_40658364(
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

  if ( (byte_4A5C4D1 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4D1 = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  return CommonEffectManager__Create_40657664(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_40658564(
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

  if ( (byte_4A5C4D3 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4D3 = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  return CommonEffectManager__Create_40658764(parent, data, prefab, v13, 0, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_40658764(
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
  if ( (byte_4A5C4D6 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4D6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v16 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
    sub_1B8880C(transform, v15);
  CommonEffectComponent__Init_40641068((CommonEffectComponent_o *)Component_object, data, 0, 0, v29);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_40659240(
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

  if ( (byte_4A5C4D4 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4D4 = 1;
  }
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  return CommonEffectManager__Create_40658764(parent, data, prefab, v14, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_40659440(
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
  if ( (byte_4A5C4D5 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4D5 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_40658764(parent, data, prefab, v13, 0, 0, v5);
}


void __fastcall CommonEffectManager__Create_40659596(
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

  if ( (byte_4A5C4D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v13 = (CommonEffectManager_o *)Instance;
  if ( !byte_4A55CE1 )
  {
    Instance = (Il2CppObject *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v13 )
    sub_1B8880C(Instance, v12);
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
void __fastcall CommonEffectManager__Create_40661024(
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
  if ( (byte_4A5C4D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v16);
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
void __fastcall CommonEffectManager__Create_40661216(
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
  if ( (byte_4A5C4DA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v18);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Component_o *v7; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v15; // x1
  Il2CppClass **v16; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5C4E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4E6 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v3,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
      if ( !transform )
        goto LABEL_24;
      v7 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
      {
LABEL_18:
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
        if ( !v3 )
          goto LABEL_24;
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        v15 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)transform,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
        }
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
    if ( !v3 )
LABEL_24:
      sub_1B8880C(transform, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      v3,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v18.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_40665152(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *AssetName; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w22
  UnityEngine_Component_o *v12; // x23
  Il2CppObject *Component_object; // x24
  Il2CppObject *v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v20; // x1
  Il2CppClass **v21; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A5C4E7 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4E7 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
    CommonEffectManager__Stop(parent, 0, 0, v6);
    return;
  }
  if ( !effectName )
    goto LABEL_41;
LABEL_8:
  AssetName = CommonEffectManager__GetAssetName(effectName, v5);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_32;
  transform = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_32;
  v11 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v11 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
    transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
    if ( !transform )
      goto LABEL_32;
    v12 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
      if ( System_String__Equals_61715348(AssetName, (System_String_o *)Component_object[2].klass, 0LL) )
        goto LABEL_26;
    }
    v14 = UnityEngine_Component__GetComponent_object_(
            v12,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v14 || !AssetName )
        goto LABEL_32;
      if ( System_String__Equals_61715348(AssetName, (System_String_o *)v14[5].klass, 0LL) )
      {
LABEL_26:
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
        if ( !v8 )
          goto LABEL_32;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v8->fields._size;
        v20 = transform;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)transform,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
    }
    ++v11;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_32;
  }
  if ( !v8 )
LABEL_32:
    sub_1B8880C(transform, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v8,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4A5C4E3 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4E3 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, v4);
}


bool __fastcall CommonEffectManager__ForceStop_40664176(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4A5C4E4 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4E4 = 1;
  }
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  return CommonEffectManager__StopInternal(1, parent, effectName, isSkip, isLoadStop, v5);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4A5C4CA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4CA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1B8880C(transform, v5);
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
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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
        v11 = Method_System_Collections_Generic_List_CommonEffectComponent__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v13[4] = (Il2CppClass *)Component_object;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)Component_object, v8, v9);
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
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_4A5C4C9 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4C9 = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_61707032(v3->static_fields->effectAssetStoragePath, effectName, 0LL);
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
    if ( !byte_4A55CE7 )
    {
      sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
      byte_4A55CE7 = 1;
    }
    static_fields = UnityEngine_Quaternion_TypeInfo->static_fields;
    w = static_fields->identityQuaternion.fields.w;
    p_y = &static_fields->identityQuaternion.fields.y;
    p_z = &static_fields->identityQuaternion.fields.z;
  }
  else
  {
    static_fields = (struct UnityEngine_Quaternion_StaticFields *)((char *)&unk_BEF178 + 4 * v2);
    p_y = (float *)((char *)&unk_BEF184 + 4 * v2);
    p_z = (float *)((char *)&unk_BEF190 + 4 * v2);
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

  if ( (byte_4A5C4CB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4CB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_1B8880C(transform, v4);
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
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 1;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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


bool __fastcall CommonEffectManager__IsBusy_40656012(
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

  if ( (byte_4A5C4CC & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4CC = 1;
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
        sub_1B8880C(AssetName, v8);
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
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
          if ( System_String__Equals_61715348(v9, (System_String_o *)Component_object[2].klass, 0LL) )
            return 1;
        }
        v13 = UnityEngine_Component__GetComponent_object_(
                v11,
                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v13 || !v9 )
            goto LABEL_28;
          if ( System_String__Equals_61715348(v9, (System_String_o *)v13[5].klass, 0LL) )
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

  if ( (byte_4A5C4F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
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

  if ( (byte_4A5C4CD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4CD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_1B8880C(transform, v4);
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
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return 0;
      v9 = UnityEngine_Component__GetComponent_object_(
             v7,
             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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


bool __fastcall CommonEffectManager__IsStart_40656928(
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

  if ( (byte_4A5C4CE & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4CE = 1;
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
        sub_1B8880C(AssetName, v8);
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
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
          if ( System_String__Equals_61715348(v9, (System_String_o *)Component_object[2].klass, 0LL) )
            return 0;
        }
        v13 = UnityEngine_Component__GetComponent_object_(
                v11,
                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( !v13 || !v9 )
            goto LABEL_29;
          if ( System_String__Equals_61715348(v9, (System_String_o *)v13[5].klass, 0LL) && !LOBYTE(v13[7].klass) )
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
  UnityEngine_Object_o *_40657664; // x23
  const MethodInfo *v33; // x5
  System_String_o *name; // x23
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_4A5C4E9 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_13538/*"Talk/TestBackEffect"*/);
    sub_1B885B0(&StringLiteral_13545/*"Talk/communicationCharaEffect"*/);
    sub_1B885B0(&StringLiteral_13543/*"Talk/bit_talk_10"*/);
    sub_1B885B0(&StringLiteral_13541/*"Talk/TestEffect"*/);
    sub_1B885B0(&StringLiteral_13537/*"Talk/Test"*/);
    sub_1B885B0(&StringLiteral_13539/*"Talk/TestCharaBackEffect"*/);
    this = (CommonEffectManager_o *)sub_1B885B0(&StringLiteral_13540/*"Talk/TestCharaEffect"*/);
    byte_4A5C4E9 = 1;
  }
  if ( !effectName )
    goto LABEL_52;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_13537/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13545/*"Talk/communicationCharaEffect"*/, 0LL) )
      effectName = (System_String_o *)StringLiteral_13543/*"Talk/bit_talk_10"*/;
    goto LABEL_11;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13541/*"Talk/TestEffect"*/, 0LL) )
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
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13538/*"Talk/TestBackEffect"*/, 0LL) )
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
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13540/*"Talk/TestCharaEffect"*/, 0LL) )
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
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13539/*"Talk/TestCharaBackEffect"*/, 0LL) )
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
                                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v27 = this;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
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
          if ( !byte_4A55CE7 )
          {
            sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
            byte_4A55CE7 = 1;
          }
          UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)v29,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          if ( !byte_4A55CE6 )
          {
            sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v29,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          if ( Component_object )
          {
            CommonEffectLoadComponent__Init_40651892(
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
  _40657664 = 0LL;
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
    _40657664 = (UnityEngine_Object_o *)CommonEffectManager__Create_40657664(
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
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_40657664, 0LL, 0LL);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  if ( !_40657664 )
LABEL_52:
    sub_1B8880C(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_40657664->klass[1]._1.gc_desc)(
    _40657664,
    param,
    _40657664->klass[1]._1.name);
LABEL_49:
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_Object_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      _40657664,
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

  if ( (byte_4A5C4EF & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_Dictionary_object__object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Instance; // x21
  AssetLoader_LoadEndDataHandler_o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5C4EB & 1) == 0 )
  {
    sub_1B885B0(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__);
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4A5C4EB = 1;
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
  v26 = v12 + 1;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v8, v9, v10);
  v15 = System_String__Format(skinEffectAssetStoragePath, v14, 0LL);
  if ( System_String__op_Equality(v15, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v16);
    this->fields.callbackAfterSkinLoad = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterSkinLoad, (int32_t)callback, v17, v18);
    v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v19,
      (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skinedEffects, (int32_t)v19, v20, v21);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__,
      0LL);
    if ( !Instance )
      sub_1B8880C(v24, v25);
    AssetManager__LoadAssetStorage((AssetManager_o *)Instance, v15, v23, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4A5C4EA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4A5C4F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void __fastcall CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  Il2CppObject *currentValue; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5C4EC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4A5C4EC = 1;
  }
  memset(&v14, 0, sizeof(v14));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
               (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v14,
      Values,
      (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v14,
              (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v14.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v14,
      (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Values,
      (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skinedEffects, 0, v8, v9);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_16:
    sub_1B8880C(Values, v6);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_loadedSkinAssetName, 0, v12, v13);
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

  if ( (byte_4A5C4DF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4DF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1B8880C(transform, v6);
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
                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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


void __fastcall CommonEffectManager__Resume_40662704(
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
  Il2CppObject *Component_object; // x24
  Il2CppObject *v15; // x23
  const MethodInfo *v16; // x2

  if ( (byte_4A5C4E0 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4E0 = 1;
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
    CommonEffectManager__Stop(parent, isSkip, 0, v8);
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
    sub_1B8880C(AssetName, v10);
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
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetName & 1) == 0 )
      goto LABEL_22;
    if ( !Component_object || !v11 )
      goto LABEL_30;
    if ( System_String__Equals_61715348(v11, (System_String_o *)Component_object[2].klass, 0LL) )
    {
      LOBYTE(Component_object[4].klass) = isSkip;
      BYTE1(Component_object[4].klass) = 0;
    }
    else
    {
LABEL_22:
      v15 = UnityEngine_Component__GetComponent_object_(
              v13,
              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v15 || !v11 )
          goto LABEL_30;
        if ( System_String__Equals_61715348(v11, (System_String_o *)v15[5].klass, 0LL) )
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

  if ( (byte_4A5C4F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5C4EE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4EE = 1;
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
             (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v9 = value;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__Instantiate_object_(
                v9,
                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v7 = (UnityEngine_GameObject_o *)v10,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v7, transform, 0LL),
              !v7) )
        {
          sub_1B8880C(v10, v11);
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

  if ( (byte_4A5C4F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_4A5C4F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v8);
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
  if ( (byte_4A5C4ED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (CommonEffectManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4ED = 1;
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
            sub_1B88814(this, effects);
          skinedEffects = (Il2CppObject *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
                                            (Il2CppObject *)effects->m_Items[v10],
                                            &value,
                                            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12 = value;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            skinedEffects = UnityEngine_Object__Instantiate_object_(
                              v12,
                              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0LL);
            }
          }
          LODWORD(v9) = effects->max_length;
          if ( (__int64)++v10 >= (int)v9 )
            return;
        }
        sub_1B8880C(skinedEffects, effects);
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

  if ( (byte_4A5C4E8 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4E8 = 1;
  }
  v9 = CommonEffectManager_TypeInfo;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v9 = CommonEffectManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->testEffectPrefab,
    (int32_t)effectPrefab,
    (int32_t)charaEffectPrefab,
    (int32_t)charaBackEffectPrefab);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->testBackEffectPrefab = backEffectPrefab;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->testBackEffectPrefab, (int32_t)backEffectPrefab, v12, v13);
  v14 = CommonEffectManager_TypeInfo->static_fields;
  v14->testCharaEffectPrefab = charaEffectPrefab;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->testCharaEffectPrefab, (int32_t)charaEffectPrefab, v15, v16);
  v17 = CommonEffectManager_TypeInfo->static_fields;
  v17->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v17->testCharaBackEffectPrefab,
    (int32_t)charaBackEffectPrefab,
    v18,
    v19);
}


bool __fastcall CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4A5C4E1 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4E1 = 1;
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
  System_String_o *AssetName; // x0
  const MethodInfo *v11; // x1
  bool v12; // w27
  int32_t v14; // w23
  bool v15; // w28
  UnityEngine_Component_o *v16; // x24
  Il2CppObject *Component_object; // x25
  Il2CppObject *v18; // x24
  UnityEngine_Object_o *gameObject; // x24
  Il2CppClass *klass; // x8

  if ( (byte_4A5C4E5 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C4E5 = 1;
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v11);
      effectName = AssetName;
    }
    if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_44:
      sub_1B8880C(AssetName, v11);
    v14 = 0;
    v15 = isSkip || isLoadStop;
    v12 = 1;
    while ( 1 )
    {
      if ( v14 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
        return v12;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_44;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v14, 0LL);
      if ( !AssetName )
        goto LABEL_44;
      v16 = (UnityEngine_Component_o *)AssetName;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)AssetName,
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
      AssetName = (System_String_o *)System_String__Equals_61715348(
                                       effectName,
                                       (System_String_o *)Component_object[2].klass,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
LABEL_24:
        if ( v15 )
        {
          if ( !Component_object )
            goto LABEL_44;
          CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_object, v11);
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
LABEL_27:
        v18 = UnityEngine_Component__GetComponent_object_(
                v16,
                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( effectName )
          {
            if ( !v18 )
              goto LABEL_44;
            if ( !System_String__Equals_61715348(effectName, (System_String_o *)v18[5].klass, 0LL) )
              goto LABEL_43;
          }
          else if ( !v18 )
          {
            goto LABEL_44;
          }
          if ( isSkip )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v18,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
          }
          else
          {
            klass = v18->klass;
            if ( force )
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[9].method)(
                v18,
                1LL,
                0LL,
                klass->vtable[10].methodPtr);
            else
              ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))klass->vtable[8].method)(
                v18,
                1LL,
                0LL,
                klass->vtable[9].methodPtr);
          }
        }
      }
LABEL_43:
      ++v14;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_44;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__Stop_40663932(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4A5C4E2 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C4E2 = 1;
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
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  Il2CppObject *UiFlag; // x0
  __int64 v7; // x1
  struct System_String_array *EffectName; // x23
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  System_String_o *v11; // x21
  Il2CppObject *Object_object__48635516; // x22
  UnityEngine_GameObject_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_o *name; // x1

  if ( (byte_4A5C4F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5C4F6 = 1;
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
      Object_object__48635516 = AssetData__GetObject_object__48635516(
                                  data,
                                  v11,
                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UiFlag = (Il2CppObject *)UnityEngine_Object__op_Equality(
                                 (UnityEngine_Object_o *)Object_object__48635516,
                                 0LL,
                                 0LL);
      if ( ((unsigned __int8)UiFlag & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UiFlag = UnityEngine_Object__Instantiate_object_(
                   Object_object__48635516,
                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_23;
        v13 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.skinedEffects,
          (Il2CppObject *)v11,
          UiFlag,
          (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
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
    sub_1B88814(UiFlag, v7);
  }
LABEL_21:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterSkinLoad, 0, v14, v15);
  if ( !data )
LABEL_23:
    sub_1B8880C(UiFlag, v7);
  name = data->fields.name;
  this->fields.loadedSkinAssetName = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadedSkinAssetName, (int32_t)name, v16, v17);
}