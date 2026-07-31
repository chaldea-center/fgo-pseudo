void CommonEffectManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct CommonEffectManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct CommonEffectManager_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct CommonEffectManager_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct CommonEffectManager_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct CommonEffectManager_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_5939D8B & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6088/*"Effect/"*/);
    sub_21FFC50(&StringLiteral_6129/*"Effect/Skin/{0:D2}"*/);
    byte_5939D8B = 1;
  }
  v7 = StringLiteral_6088/*"Effect/"*/;
  CommonEffectManager_TypeInfo->static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_6088/*"Effect/"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CommonEffectManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_6129/*"Effect/Skin/{0:D2}"*/;
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  static_fields->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_6129/*"Effect/Skin/{0:D2}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->skinEffectAssetStoragePath,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = CommonEffectManager_TypeInfo->static_fields;
  v16->testEffectPrefab = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->testEffectPrefab, 0, v17, v18, v19, v20, v21, v22);
  v23 = CommonEffectManager_TypeInfo->static_fields;
  v23->testBackEffectPrefab = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->testBackEffectPrefab, 0, v24, v25, v26, v27, v28, v29);
  v30 = CommonEffectManager_TypeInfo->static_fields;
  v30->testCharaEffectPrefab = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30->testCharaEffectPrefab, 0, v31, v32, v33, v34, v35, v36);
  v37 = CommonEffectManager_TypeInfo->static_fields;
  v37->testCharaBackEffectPrefab = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v37->testCharaBackEffectPrefab, 0, v38, v39, v40, v41, v42, v43);
}


void CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_5939D8A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
    byte_5939D8A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
}


CommonEffectComponent_o *CommonEffectManager__Create(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939D64 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D64 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  return CommonEffectManager__Create_50691928(parent, effectName, prefab, v13, 0, 0, v4);
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

  if ( (byte_5939D70 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D70 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_5931940 )
  {
    Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v15 )
    sub_21FFECC(Instance, v14);
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


void CommonEffectManager__CreateParam_50695920(
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

  if ( (byte_5939D71 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D71 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v17 = (CommonEffectManager_o *)Instance;
  if ( !byte_5931940 )
  {
    Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v17 )
    sub_21FFECC(Instance, v16);
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


void CommonEffectManager__CreateParam_50696152(
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
  if ( (byte_5939D72 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v18);
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


void CommonEffectManager__CreateParam_50696356(
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
  if ( (byte_5939D73 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v20);
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


void CommonEffectManager__Create_50652356(
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

  if ( (byte_5939D6D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D6D = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v15 = (CommonEffectManager_o *)Instance;
  if ( !byte_5931940 )
  {
    Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v15 )
    sub_21FFECC(Instance, v14);
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


CommonEffectComponent_o *CommonEffectManager__Create_50691928(
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
  System_String_o *AssetName; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x24
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *v20; // x24
  float v21; // s11
  float v22; // s12
  float v23; // s13
  const MethodInfo *v24; // x1
  float v25; // s14
  float v26; // s15
  float v27; // s8
  float w; // s9
  const MethodInfo *v29; // x4
  float v31; // [xsp+48h] [xbp-38h]
  float v32; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o FlipQuaternion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_5939D67 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D67 = 1;
  }
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  AssetName = CommonEffectManager__GetAssetName(effectName, (const MethodInfo *)effectName);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v18 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0);
  if ( !prefab )
    goto LABEL_14;
  v20 = (UnityEngine_Transform_o *)transform;
  v31 = y;
  v32 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v21 = localScale.fields.x;
  v22 = localScale.fields.y;
  v23 = localScale.fields.z;
  FlipQuaternion = CommonEffectManager__GetFlipQuaternion(flip, v24);
  if ( !parent )
    goto LABEL_14;
  v25 = FlipQuaternion.fields.x;
  v26 = FlipQuaternion.fields.y;
  v27 = FlipQuaternion.fields.z;
  w = FlipQuaternion.fields.w;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v20 )
    goto LABEL_14;
  UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)transform, 0);
  v34.fields.x = x;
  v34.fields.y = v31;
  v34.fields.z = v32;
  UnityEngine_Transform__set_localPosition(v20, v34, 0);
  v37.fields.x = v25;
  v37.fields.y = v26;
  v37.fields.z = v27;
  v37.fields.w = w;
  UnityEngine_Transform__set_localRotation(v20, v37, 0);
  v35.fields.x = v21;
  v35.fields.y = v22;
  v35.fields.z = v23;
  UnityEngine_Transform__set_localScale(v20, v35, 0);
  if ( !Component_object )
LABEL_14:
    sub_21FFECC(transform, v17);
  CommonEffectComponent__Init_50672300((CommonEffectComponent_o *)Component_object, AssetName, 0, 0, v29);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *CommonEffectManager__Create_50692428(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939D65 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D65 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  return CommonEffectManager__Create_50691928(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *CommonEffectManager__Create_50692628(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939D66 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D66 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  return CommonEffectManager__Create_50691928(parent, effectName, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *CommonEffectManager__Create_50692828(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939D68 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D68 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, data);
  v13.fields.x = x;
  v13.fields.y = y;
  v13.fields.z = z;
  return CommonEffectManager__Create_50693028(parent, data, prefab, v13, 0, 0, v4);
}


CommonEffectComponent_o *CommonEffectManager__Create_50693028(
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
  const MethodInfo *v25; // x4
  float v27; // [xsp+48h] [xbp-38h]
  float v28; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o FlipQuaternion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_5939D6B & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D6B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            (Il2CppObject *)prefab,
                                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v16 = transform;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       transform,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
  if ( !prefab )
    goto LABEL_14;
  v18 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0);
  if ( !transform )
    goto LABEL_14;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v20 = localScale.fields.z;
  v27 = localScale.fields.y;
  v28 = localScale.fields.x;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v19);
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
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localPosition(v18, v30, 0);
  v33.fields.x = v21;
  v33.fields.y = v22;
  v33.fields.z = v23;
  v33.fields.w = w;
  UnityEngine_Transform__set_localRotation(v18, v33, 0);
  v31.fields.z = v20;
  v31.fields.y = v27;
  v31.fields.x = v28;
  UnityEngine_Transform__set_localScale(v18, v31, 0);
  if ( !Component_object )
LABEL_14:
    sub_21FFECC(transform, v15);
  CommonEffectComponent__Init_50672364((CommonEffectComponent_o *)Component_object, data, 0, 0, v25);
  return (CommonEffectComponent_o *)Component_object;
}


CommonEffectComponent_o *CommonEffectManager__Create_50693504(
        UnityEngine_GameObject_o *parent,
        AssetData_o *data,
        UnityEngine_GameObject_o *prefab,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939D69 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D69 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, data);
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  return CommonEffectManager__Create_50693028(parent, data, prefab, v14, 0, 0, v5);
}


CommonEffectComponent_o *CommonEffectManager__Create_50693704(
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
  if ( (byte_5939D6A & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D6A = 1;
  }
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, data);
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_50693028(parent, data, prefab, v13, 0, 0, v5);
}


void CommonEffectManager__Create_50693860(
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

  if ( (byte_5939D6C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D6C = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  v13 = (CommonEffectManager_o *)Instance;
  if ( !byte_5931940 )
  {
    Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v13 )
    sub_21FFECC(Instance, v12);
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


void CommonEffectManager__Create_50695296(
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
  if ( (byte_5939D6E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v16);
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


void CommonEffectManager__Create_50695488(
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
  if ( (byte_5939D6F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D6F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v18);
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
  __int64 v8; // x1
  Il2CppObject *Component_object; // x23
  __int64 v10; // x1
  Il2CppObject *v11; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v21; // x1
  Il2CppClass **v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5939D7B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D7B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
  {
    v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v3,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        goto LABEL_18;
      v11 = UnityEngine_Component__GetComponent_object_(
              v7,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
      {
LABEL_18:
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v7, 0);
        if ( !v3 )
          goto LABEL_24;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        v21 = transform;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)transform,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_24;
    }
    if ( !v3 )
LABEL_24:
      sub_21FFECC(transform, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      v3,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v25.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void CommonEffectManager__DestroyByMark(
        UnityEngine_GameObject_o *parent,
        System_String_o *markKey,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_object__o *v8; // x19
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_IEnumerator_o *v11; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Component_o *v25; // x21
  __int64 naturalAligment; // x9
  __int64 v27; // x1
  Il2CppObject *Component_object; // x22
  Il2CppObject *gameObject; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x8
  __int64 v42; // x21
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+18h] [xbp-78h] BYREF
  __int64 v49; // [xsp+30h] [xbp-60h]
  System_Collections_IEnumerator_o *v50; // [xsp+38h] [xbp-58h]

  if ( (byte_5939D7D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_MarkComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_5939D7D = 1;
  }
  v49 = 0;
  v50 = 0;
  memset(&v48, 0, sizeof(v48));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, markKey);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( (v5 & 1) == 0 )
  {
    if ( !parent )
      goto LABEL_60;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !transform )
      goto LABEL_60;
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
    v50 = Enumerator;
    if ( !Enumerator )
LABEL_38:
      sub_21FFECC(Enumerator, v10);
    v11 = Enumerator;
    while ( 1 )
    {
      klass = v11->klass;
      v13 = *(unsigned __int16 *)&v11->klass->_2.rank;
      if ( *(_WORD *)&v11->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v13;
          p_offset += 4;
          if ( !v13 )
            goto LABEL_14;
        }
        v15 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_14:
        v15 = sub_2237E2C(v11, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v16 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8));
      if ( (v16 & 1) == 0 )
        break;
      if ( !v50 )
        sub_21FFECC(v16, v17);
      v18 = v50->klass;
      v19 = *(unsigned __int16 *)&v50->klass->_2.rank;
      if ( *(_WORD *)&v50->klass->_2.rank )
      {
        v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_22;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1];
      }
      else
      {
LABEL_22:
        v21 = sub_2237E2C(v50, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                         v50,
                                         *(_QWORD *)(v21 + 8));
      v25 = v22;
      if ( !v22 )
        goto LABEL_56;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v22->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_220024C(v22, UnityEngine_Transform_TypeInfo, v24);
LABEL_56:
        sub_21FFECC(v22, v23);
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v22,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_MarkComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0,
                                                         0);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !Component_object )
          sub_21FFECC(Enumerator, v10);
        Enumerator = (System_Collections_IEnumerator_o *)MarkComponent__Contains(
                                                           (MarkComponent_o *)Component_object,
                                                           markKey,
                                                           0);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(v25, 0);
          v36 = gameObject;
          if ( !v8
            || (items = v8->fields._items,
                v38 = Method_System_Collections_Generic_List_GameObject__Add__,
                ++v8->fields._version,
                !items) )
          {
            sub_21FFECC(gameObject, gameObject);
          }
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              gameObject,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v36;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v36, v30, v31, v32, v33, v34, v35);
          }
        }
      }
      v11 = v50;
      if ( !v50 )
        goto LABEL_38;
    }
    v5 = sub_21FFDA4(v50, System_IDisposable_TypeInfo);
    v49 = v5;
    if ( v5 )
    {
      v41 = *(_QWORD *)v5;
      v42 = v5;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v5 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v5 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_44;
        }
        v45 = v41 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_44:
        v45 = sub_2237E2C(v5, System_IDisposable_TypeInfo, 0);
      }
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
    }
    if ( !v8 )
LABEL_60:
      sub_21FFECC(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      v8,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v48.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void CommonEffectManager__Destroy_50699520(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x4
  int v7; // w8
  System_String_o *AssetName; // x21
  System_Collections_Generic_List_object__o *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  int32_t v12; // w22
  UnityEngine_Component_o *v13; // x23
  __int64 v14; // x1
  Il2CppObject *Component_object; // x24
  __int64 v16; // x1
  Il2CppObject *v17; // x24
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v27; // x1
  Il2CppClass **v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5939D7C & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D7C = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
  {
    v7 = *(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1);
    if ( effectName )
    {
      if ( !v7 )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v5);
      AssetName = CommonEffectManager__GetAssetName(effectName, v5);
      v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v9,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      if ( !parent )
        goto LABEL_33;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_33;
      v12 = 0;
      while ( 1 )
      {
        transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
        if ( v12 >= (int)transform )
          break;
        transform = UnityEngine_GameObject__get_transform(parent, 0);
        if ( !transform )
          goto LABEL_33;
        transform = UnityEngine_Transform__GetChild(transform, v12, 0);
        if ( !transform )
          goto LABEL_33;
        v13 = (UnityEngine_Component_o *)transform;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !Component_object || !AssetName )
            goto LABEL_33;
          if ( System_String__Equals_75473208(AssetName, (System_String_o *)Component_object[2].klass, 0) )
            goto LABEL_27;
        }
        v17 = UnityEngine_Component__GetComponent_object_(
                v13,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v17 || !AssetName )
            goto LABEL_33;
          if ( System_String__Equals_75473208(AssetName, (System_String_o *)v17[5].klass, 0) )
          {
LABEL_27:
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v13, 0);
            if ( !v9 )
              goto LABEL_33;
            items = v9->fields._items;
            v25 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_33;
            size = v9->fields._size;
            v27 = transform;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)transform,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v27;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v27, v18, v19, v20, v21, v22, v23);
            }
          }
        }
        ++v12;
        transform = UnityEngine_GameObject__get_transform(parent, 0);
        if ( !transform )
          goto LABEL_33;
      }
      if ( !v9 )
LABEL_33:
        sub_21FFECC(transform, v11);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        v9,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v31.fields._current;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
        UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    else
    {
      if ( !v7 )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v5);
      CommonEffectManager__Stop(parent, 0, 0, 0, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  if ( (byte_5939D78 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D78 = 1;
  }
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
  return CommonEffectManager__StopInternal(1, parent, 0, isSkip, isLoadStop, markKey, v5);
}


bool CommonEffectManager__ForceStop_50698556(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_5939D79 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D79 = 1;
  }
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  return CommonEffectManager__StopInternal(1, parent, effectName, isSkip, isLoadStop, markKey, v6);
}


CommonEffectComponent_array *CommonEffectManager__Get(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  __int64 v8; // x1
  Il2CppObject *Component_object; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5939D5F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D5F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
      sub_21FFECC(transform, v6);
    v7 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
      if ( v7 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v7, 0);
      if ( !transform )
        goto LABEL_21;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_21;
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_CommonEffectComponent__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)Component_object;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v19 + 4),
            (int32_t)Component_object,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
        }
      }
      ++v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
    }
  }
  if ( !v3 )
    goto LABEL_21;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                          v3,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_5939D5E & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D5E = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_75438412(v3->static_fields->effectAssetStoragePath, effectName, 0);
}


UnityEngine_Quaternion_o CommonEffectManager__GetFlipQuaternion(int32_t flip, const MethodInfo *method)
{
  unsigned int v2; // w10
  float w; // s3
  struct UnityEngine_Quaternion_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  float x; // s0
  float v8; // s2
  float v9; // s1
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = flip - 1;
  if ( (unsigned int)(flip - 1) >= 3 )
  {
    if ( !byte_5931946 )
    {
      sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
      byte_5931946 = 1;
    }
    static_fields = UnityEngine_Quaternion_TypeInfo->static_fields;
    w = static_fields->identityQuaternion.fields.w;
    p_y = &static_fields->identityQuaternion.fields.y;
    p_z = &static_fields->identityQuaternion.fields.z;
  }
  else
  {
    w = 0.0;
    static_fields = (struct UnityEngine_Quaternion_StaticFields *)((char *)&unk_ED1404 + 4 * v2);
    p_y = (float *)((char *)&unk_ED1410 + 4 * v2);
    p_z = (float *)((char *)&unk_ED141C + 4 * v2);
  }
  x = static_fields->identityQuaternion.fields.x;
  v8 = *p_z;
  v9 = *p_y;
  result.fields.w = w;
  result.fields.z = v8;
  result.fields.y = v9;
  result.fields.x = x;
  return result;
}


bool CommonEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  bool v5; // w21
  int32_t v7; // w20
  int32_t childCount; // w0
  UnityEngine_Component_o *v9; // x22
  __int64 v10; // x1
  Il2CppObject *Component_object; // x23
  __int64 v12; // x1
  Il2CppObject *v13; // x22

  if ( (byte_5939D60 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D60 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
    sub_21FFECC(transform, v4);
  v7 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0);
    v5 = v7 < childCount;
    if ( v7 >= childCount )
      return v5;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_21;
    transform = UnityEngine_Transform__GetChild(transform, v7, 0);
    if ( !transform )
      goto LABEL_21;
    v9 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      return v5;
    v13 = UnityEngine_Component__GetComponent_object_(
            v9,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0) )
      return v5;
    ++v7;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_21;
  }
}


bool CommonEffectManager__IsBusy_50690260(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w22
  int v8; // w8
  System_String_o *AssetName; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  int32_t v12; // w21
  int32_t childCount; // w0
  UnityEngine_Component_o *v14; // x23
  __int64 v15; // x1
  Il2CppObject *Component_object; // x24
  __int64 v17; // x1
  Il2CppObject *v18; // x23

  if ( (byte_5939D61 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D61 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return 0;
  v8 = *(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1);
  if ( effectName )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v5);
    AssetName = CommonEffectManager__GetAssetName(effectName, v5);
    if ( !parent
      || (v11 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0) )
    {
LABEL_30:
      sub_21FFECC(AssetName, v10);
    }
    v12 = 0;
    while ( 1 )
    {
      childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0);
      v6 = v12 < childCount;
      if ( v12 >= childCount )
        return v6;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
      if ( !AssetName )
        goto LABEL_30;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0);
      if ( !AssetName )
        goto LABEL_30;
      v14 = (UnityEngine_Component_o *)AssetName;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)AssetName,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !Component_object || !v11 )
          goto LABEL_30;
        if ( System_String__Equals_75473208(v11, (System_String_o *)Component_object[2].klass, 0) )
          return v6;
      }
      v18 = UnityEngine_Component__GetComponent_object_(
              v14,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v18 || !v11 )
          goto LABEL_30;
        if ( System_String__Equals_75473208(v11, (System_String_o *)v18[5].klass, 0) )
          return v6;
      }
      ++v12;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
      if ( !AssetName )
        goto LABEL_30;
    }
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v5);
  return CommonEffectManager__IsBusy(parent, v5);
}


bool CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5939D89 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D89 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
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
  bool v5; // w21
  int32_t v7; // w20
  int32_t childCount; // w0
  UnityEngine_Component_o *v9; // x22
  __int64 v10; // x1
  Il2CppObject *Component_object; // x23
  __int64 v12; // x1
  Il2CppObject *v13; // x22

  if ( (byte_5939D62 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D62 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_23:
    sub_21FFECC(transform, v4);
  v7 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0);
    v5 = v7 >= childCount;
    if ( v7 >= childCount )
      return v5;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_23;
    transform = UnityEngine_Transform__GetChild(transform, v7, 0);
    if ( !transform )
      goto LABEL_23;
    v9 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      return v5;
    v13 = UnityEngine_Component__GetComponent_object_(
            v9,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_23;
      if ( !LOBYTE(v13[7].klass) )
        return v5;
    }
    ++v7;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_23;
  }
}


bool CommonEffectManager__IsStart_50691188(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w22
  int v8; // w8
  System_String_o *AssetName; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  int32_t v12; // w21
  int32_t childCount; // w0
  UnityEngine_Component_o *v14; // x23
  __int64 v15; // x1
  Il2CppObject *Component_object; // x24
  __int64 v17; // x1
  Il2CppObject *v18; // x23

  if ( (byte_5939D63 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D63 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
    return 1;
  v8 = *(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1);
  if ( effectName )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v5);
    AssetName = CommonEffectManager__GetAssetName(effectName, v5);
    if ( !parent
      || (v11 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0) )
    {
LABEL_31:
      sub_21FFECC(AssetName, v10);
    }
    v12 = 0;
    while ( 1 )
    {
      childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0);
      v6 = v12 >= childCount;
      if ( v12 >= childCount )
        return v6;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
      if ( !AssetName )
        goto LABEL_31;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0);
      if ( !AssetName )
        goto LABEL_31;
      v14 = (UnityEngine_Component_o *)AssetName;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)AssetName,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !Component_object || !v11 )
          goto LABEL_31;
        if ( System_String__Equals_75473208(v11, (System_String_o *)Component_object[2].klass, 0) )
          return v6;
      }
      v18 = UnityEngine_Component__GetComponent_object_(
              v14,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v18 || !v11 )
          goto LABEL_31;
        if ( System_String__Equals_75473208(v11, (System_String_o *)v18[5].klass, 0) && !LOBYTE(v18[7].klass) )
          return v6;
      }
      ++v12;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
      if ( !AssetName )
        goto LABEL_31;
    }
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v5);
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
  const MethodInfo *v21; // x1
  CommonEffectManager_c *v22; // x0
  UnityEngine_Object_o **p_testEffectPrefab; // x8
  System_String_o *AssetName; // x0
  __int64 v25; // x1
  Il2CppObject *loadEffectPrefab; // x26
  System_String_o *v27; // x25
  CommonEffectManager_o *v28; // x27
  Il2CppObject *Component_object; // x26
  CommonEffectManager_o *v30; // x27
  const MethodInfo *v31; // x7
  CommonEffectManager_c *v32; // x0
  CommonEffectManager_c *v33; // x0
  CommonEffectManager_c *v34; // x0
  UnityEngine_Object_o *v35; // x24
  UnityEngine_Object_o *_50691928; // x23
  __int64 v37; // x1
  const MethodInfo *v38; // x5
  System_String_o *name; // x23
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_5939D7F & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_14164/*"Talk/TestBackEffect"*/);
    sub_21FFC50(&StringLiteral_14171/*"Talk/communicationCharaEffect"*/);
    sub_21FFC50(&StringLiteral_14169/*"Talk/bit_talk_10"*/);
    sub_21FFC50(&StringLiteral_14167/*"Talk/TestEffect"*/);
    sub_21FFC50(&StringLiteral_14163/*"Talk/Test"*/);
    sub_21FFC50(&StringLiteral_14165/*"Talk/TestCharaBackEffect"*/);
    this = (CommonEffectManager_o *)sub_21FFC50(&StringLiteral_14166/*"Talk/TestCharaEffect"*/);
    byte_5939D7F = 1;
  }
  if ( !effectName )
    goto LABEL_52;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_14163/*"Talk/Test"*/, 0) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_14171/*"Talk/communicationCharaEffect"*/, 0) )
      effectName = (System_String_o *)StringLiteral_14169/*"Talk/bit_talk_10"*/;
    goto LABEL_11;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_14167/*"Talk/TestEffect"*/, 0) )
  {
    v22 = CommonEffectManager_TypeInfo;
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v21);
      v22 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v22->static_fields->testEffectPrefab;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_14164/*"Talk/TestBackEffect"*/, 0) )
  {
    v32 = CommonEffectManager_TypeInfo;
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v21);
      v32 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v32->static_fields->testBackEffectPrefab;
    goto LABEL_36;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_14166/*"Talk/TestCharaEffect"*/, 0) )
  {
    v33 = CommonEffectManager_TypeInfo;
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v21);
      v33 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v33->static_fields->testCharaEffectPrefab;
    goto LABEL_36;
  }
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_14165/*"Talk/TestCharaBackEffect"*/, 0) )
  {
LABEL_11:
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v21);
    AssetName = CommonEffectManager__GetAssetName(effectName, v21);
    loadEffectPrefab = (Il2CppObject *)v20->fields.loadEffectPrefab;
    v27 = AssetName;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    this = (CommonEffectManager_o *)UnityEngine_Object__Instantiate_object_(
                                      loadEffectPrefab,
                                      (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v28 = this;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v28, 0);
      if ( parent )
      {
        v30 = this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( v30 )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v30, (UnityEngine_Transform_o *)this, 0);
          v40.fields.x = x;
          v40.fields.y = y;
          v40.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v30, v40, 0);
          if ( !byte_5931946 )
          {
            sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
            byte_5931946 = 1;
          }
          UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)v30,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          if ( !byte_5931945 )
          {
            sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931945 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v30,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0);
          if ( Component_object )
          {
            CommonEffectLoadComponent__Init_50686188(
              (CommonEffectLoadComponent_o *)Component_object,
              v27,
              param,
              callback,
              isSkip,
              isPause,
              flip,
              v31);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
  v34 = CommonEffectManager_TypeInfo;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v21);
    v34 = CommonEffectManager_TypeInfo;
  }
  p_testEffectPrefab = (UnityEngine_Object_o **)&v34->static_fields->testCharaBackEffectPrefab;
LABEL_36:
  v35 = *p_testEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v35, 0, 0);
  _50691928 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_52;
    name = UnityEngine_Object__get_name(v35, 0);
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v37);
    v41.fields.x = x;
    v41.fields.y = y;
    v41.fields.z = z;
    _50691928 = (UnityEngine_Object_o *)CommonEffectManager__Create_50691928(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v35,
                                          v41,
                                          0,
                                          flip,
                                          v38);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_50691928, 0, 0);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  if ( !_50691928 )
LABEL_52:
    sub_21FFECC(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, void *))_50691928->klass[1]._1.image)(
    _50691928,
    param,
    _50691928->klass[1]._1.gc_desc);
LABEL_49:
  if ( callback )
    ((void (__fastcall *)(intptr_t, UnityEngine_Object_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      _50691928,
      callback->fields.method);
}


void CommonEffectManager__LoadSkinEffects(System_Action_o *callback, int32_t loadParallelMax, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5939D85 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v7);
}


void CommonEffectManager__LoadSkinEffectsLocal(
        CommonEffectManager_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  int32_t UiFlag; // w0
  __int64 v18; // x1
  CommonEffectManager_c *v19; // x8
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x23
  __int64 v24; // x1
  CommonEffectManager_c *v25; // x0
  System_String_o *v26; // x23
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_Dictionary_object__object__o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *Instance; // x20
  AssetLoader_LoadEndDataHandler_o *v43; // x21
  int v44; // [xsp+8h] [xbp-48h] BYREF
  int v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5939D81 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_CommonEffectManager___c__DisplayClass54_0__LoadSkinEffectsLocal_b__0__);
    sub_21FFC50(&CommonEffectManager___c__DisplayClass54_0_TypeInfo);
    byte_5939D81 = 1;
  }
  v7 = sub_21FFEBC(CommonEffectManager___c__DisplayClass54_0_TypeInfo);
  CommonEffectManager___c__DisplayClass54_0___ctor((CommonEffectManager___c__DisplayClass54_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v16);
  UiFlag = ServantCommentManager__GetUiFlag(0);
  v19 = CommonEffectManager_TypeInfo;
  *(_DWORD *)(v7 + 16) = UiFlag;
  if ( !*(&v19->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v19, v18);
    v19 = CommonEffectManager_TypeInfo;
    UiFlag = *(_DWORD *)(v7 + 16);
  }
  skinEffectAssetStoragePath = v19->static_fields->skinEffectAssetStoragePath;
  v45 = UiFlag + 1;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v45);
  v23 = System_String__Format(skinEffectAssetStoragePath, v21, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
  if ( !AssetManager__isExistAssetStorage(v23, 0) )
  {
    v25 = CommonEffectManager_TypeInfo;
    *(_DWORD *)(v7 + 16) = 0;
    if ( !*(&v25->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v25, v24);
      v25 = CommonEffectManager_TypeInfo;
    }
    v26 = v25->static_fields->skinEffectAssetStoragePath;
    v44 = 1;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v44);
    v23 = System_String__Format(v26, v27, 0);
  }
  if ( System_String__op_Equality(v23, this->fields.loadedSkinAssetName, 0) )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  CommonEffectManager__ReleaseSkinEffectsLocal(this, v28);
  this->fields.callbackAfterSkinLoad = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackAfterSkinLoad,
    (int32_t)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v35,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skinedEffects,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v43,
    (Il2CppObject *)v7,
    Method_CommonEffectManager___c__DisplayClass54_0__LoadSkinEffectsLocal_b__0__,
    0);
  if ( !Instance )
LABEL_18:
    sub_21FFECC(v8, v9);
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, v23, v43, loadParallelMax, 0, 0);
}


void CommonEffectManager__Reboot(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_5939D80 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D80 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_5939D86 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D86 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v2);
}


void CommonEffectManager__ReleaseSkinEffectsLocal(CommonEffectManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *currentValue; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o **p_loadedSkinAssetName; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5939D82 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_5939D82 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_object__object___get_Values(
               (System_Collections_Generic_Dictionary_object__object__o *)skinedEffects,
               (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v22,
      Values,
      (const MethodInfo_3C9BB94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v22,
              (const MethodInfo_413634C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v22.fields._currentValue;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__DestroyImmediate_83246828((UnityEngine_Object_o *)currentValue, 0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v22,
      (const MethodInfo_4136348 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_16;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Values,
      (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skinedEffects, 0, v9, v10, v11, v12, v13, v14);
  }
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( this->fields.loadedSkinAssetName )
  {
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Values )
    {
      AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0);
      *p_loadedSkinAssetName = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.loadedSkinAssetName,
        0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      goto LABEL_15;
    }
LABEL_16:
    sub_21FFECC(Values, v6);
  }
LABEL_15:
  this->fields._LoadedSkinAssetIndex_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  UnityEngine_Component_o *v8; // x22
  __int64 v9; // x1
  Il2CppObject *Component_object; // x23
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  const MethodInfo *v13; // x2

  if ( (byte_5939D74 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D74 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSkip);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_24:
      sub_21FFECC(transform, v6);
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
                               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
            v12 = UnityEngine_Component__GetComponent_object_(
                    v8,
                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_24;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v12, isSkip, v13);
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


void CommonEffectManager__Resume_50696976(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x4
  int v9; // w8
  System_String_o *AssetName; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  int32_t v13; // w22
  UnityEngine_Component_o *v14; // x23
  __int64 v15; // x1
  Il2CppObject *Component_object; // x24
  __int64 v17; // x1
  Il2CppObject *v18; // x23
  const MethodInfo *v19; // x2

  if ( (byte_5939D75 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D75 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0) )
  {
    v9 = *(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1);
    if ( effectName )
    {
      if ( !v9 )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v7);
      AssetName = CommonEffectManager__GetAssetName(effectName, v7);
      if ( !parent
        || (v12 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0) )
      {
LABEL_31:
        sub_21FFECC(AssetName, v11);
      }
      v13 = 0;
      while ( v13 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( !AssetName )
          goto LABEL_31;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v13, 0);
        if ( !AssetName )
          goto LABEL_31;
        v14 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)AssetName & 1) == 0 )
          goto LABEL_23;
        if ( !Component_object || !v12 )
          goto LABEL_31;
        if ( System_String__Equals_75473208(v12, (System_String_o *)Component_object[2].klass, 0) )
        {
          LOBYTE(Component_object[4].klass) = isSkip;
          BYTE1(Component_object[4].klass) = 0;
        }
        else
        {
LABEL_23:
          v18 = UnityEngine_Component__GetComponent_object_(
                  v14,
                  (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
          AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
          if ( ((unsigned __int8)AssetName & 1) != 0 )
          {
            if ( !v18 || !v12 )
              goto LABEL_31;
            if ( System_String__Equals_75473208(v12, (System_String_o *)v18[5].klass, 0) )
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v18, isSkip, v19);
          }
        }
        ++v13;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( !AssetName )
          goto LABEL_31;
      }
    }
    else
    {
      if ( !v9 )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v7);
      CommonEffectManager__Stop(parent, isSkip, 0, 0, v8);
    }
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

  if ( (byte_5939D88 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D88 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939D84 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D84 = 1;
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
             (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v10 = value;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        v11 = UnityEngine_Object__Instantiate_object_(
                v10,
                (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v7 = (UnityEngine_GameObject_o *)v11,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0),
              GameObjectExtensions__SafeSetParent(v7, transform, 0),
              !v7) )
        {
          sub_21FFECC(v11, v12);
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

  if ( (byte_5939D87 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
    byte_5939D87 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
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
  struct System_Collections_Generic_Dictionary_string__GameObject__o *skinedEffects; // x8
  System_Collections_Generic_List_object__o *v10; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x26
  System_Collections_Generic_Dictionary_object__object__o *v15; // x0
  Il2CppObject *v16; // x24
  UnityEngine_GameObject_o *v17; // x24
  UnityEngine_Component_o *transform; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  Il2CppObject *Component_object; // x25
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5939D83 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D83 = 1;
  }
  skinedEffects = this->fields.skinedEffects;
  v10 = 0;
  value = 0;
  if ( skinedEffects )
  {
    if ( effectNameArray )
    {
      v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      max_length = effectNameArray->max_length;
      if ( (int)max_length >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)max_length )
            sub_21FFED4(v11);
          v15 = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.skinedEffects;
          if ( !v15 )
            break;
          v11 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                  v15,
                  (Il2CppObject *)effectNameArray->m_Items[v14],
                  &value,
                  (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( v11 )
          {
            v16 = value;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
            v15 = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__Instantiate_object_(
                                                                               v16,
                                                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !parent )
              break;
            v17 = (UnityEngine_GameObject_o *)v15;
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0);
            GameObjectExtensions__SafeSetParent(v17, transform, 0);
            if ( !v17 )
              break;
            UnityEngine_GameObject__SetActive(v17, 1, 0);
            if ( doSetDepthZero )
            {
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v17,
                                   (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UIWidget___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
              v15 = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__op_Inequality(
                                                                                 (UnityEngine_Object_o *)Component_object,
                                                                                 0,
                                                                                 0);
              if ( ((unsigned __int8)v15 & 1) != 0 )
              {
                if ( !Component_object )
                  break;
                UIWidget__set_depth((UIWidget_o *)Component_object, 0, 0);
              }
            }
            if ( !v10 )
              break;
            items = v10->fields._items;
            v28 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v17,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v17;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v17, v19, v20, v21, v22, v23, v24);
            }
          }
          LODWORD(max_length) = effectNameArray->max_length;
          if ( (__int64)++v14 >= (int)max_length )
            return (System_Collections_Generic_List_GameObject__o *)v10;
        }
        sub_21FFECC(v15, v12);
      }
    }
  }
  return (System_Collections_Generic_List_GameObject__o *)v10;
}


void CommonEffectManager__SetTestEffectPrefab(
        UnityEngine_GameObject_o *effectPrefab,
        UnityEngine_GameObject_o *backEffectPrefab,
        UnityEngine_GameObject_o *charaEffectPrefab,
        UnityEngine_GameObject_o *charaBackEffectPrefab,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CommonEffectManager_c *v12; // x0
  struct CommonEffectManager_StaticFields *static_fields; // x0
  struct CommonEffectManager_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct CommonEffectManager_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct CommonEffectManager_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_5939D7E & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D7E = 1;
  }
  v12 = CommonEffectManager_TypeInfo;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, backEffectPrefab);
    v12 = CommonEffectManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->testEffectPrefab,
    (int32_t)effectPrefab,
    (System_String_o *)charaEffectPrefab,
    (System_String_o *)charaBackEffectPrefab,
    (int32_t)method,
    v5,
    v6,
    v7);
  v14 = CommonEffectManager_TypeInfo->static_fields;
  v14->testBackEffectPrefab = backEffectPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v14->testBackEffectPrefab,
    (int32_t)backEffectPrefab,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = CommonEffectManager_TypeInfo->static_fields;
  v21->testCharaEffectPrefab = charaEffectPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v21->testCharaEffectPrefab,
    (int32_t)charaEffectPrefab,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = CommonEffectManager_TypeInfo->static_fields;
  v28->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v28->testCharaBackEffectPrefab,
    (int32_t)charaBackEffectPrefab,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


// local variable allocation has failed, the output may be wrong!
bool CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  if ( (byte_5939D76 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D76 = 1;
  }
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, isSkip);
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
  bool v16; // w19
  UnityEngine_Component_o *v17; // x25
  __int64 v18; // x1
  Il2CppObject *Component_object; // x26
  __int64 v20; // x1
  Il2CppObject *v21; // x26
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x25

  if ( (byte_5939D7A & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetOrAddComponent_MarkComponent___);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D7A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  AssetName = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)AssetName & 1) != 0 )
    return 1;
  if ( effectName )
  {
    if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v12);
    AssetName = CommonEffectManager__GetAssetName(effectName, v12);
    effectName = AssetName;
  }
  if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_48:
    sub_21FFECC(AssetName, v12);
  v15 = 0;
  v16 = isSkip || isLoadStop;
  v13 = 1;
  while ( v15 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0) )
  {
    AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
    if ( AssetName )
    {
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v15, 0);
      if ( AssetName )
      {
        v17 = (UnityEngine_Component_o *)AssetName;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)AssetName,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)AssetName & 1) == 0 )
          goto LABEL_27;
        if ( !effectName )
          goto LABEL_24;
        if ( !Component_object )
          goto LABEL_48;
        AssetName = (System_String_o *)System_String__Equals_75473208(
                                         effectName,
                                         (System_String_o *)Component_object[2].klass,
                                         0);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
LABEL_24:
          if ( v16 )
          {
            if ( !Component_object )
              goto LABEL_48;
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
          v21 = UnityEngine_Component__GetComponent_object_(
                  v17,
                  (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
          AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
          if ( ((unsigned __int8)AssetName & 1) != 0 )
          {
            if ( !effectName )
              goto LABEL_33;
            if ( !v21 )
              goto LABEL_48;
            AssetName = (System_String_o *)System_String__Equals_75473208(
                                             effectName,
                                             (System_String_o *)v21[5].klass,
                                             0);
            if ( ((unsigned __int8)AssetName & 1) != 0 )
            {
LABEL_33:
              if ( isSkip )
              {
                if ( !v21 )
                  goto LABEL_48;
                gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)v21,
                                                       0);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
                UnityEngine_Object__Destroy_83246496(gameObject, 0);
              }
              else
              {
                AssetName = (System_String_o *)System_String__IsNullOrEmpty(markKey, 0);
                if ( ((unsigned __int8)AssetName & 1) == 0 )
                {
                  AssetName = (System_String_o *)BasicHelper__GetOrAddComponent_object_(
                                                   v17,
                                                   (const MethodInfo_37E0A68 *)Method_BasicHelper_GetOrAddComponent_MarkComponent___);
                  if ( !AssetName )
                    goto LABEL_48;
                  MarkComponent__Add((MarkComponent_o *)AssetName, markKey, 0);
                }
                if ( force )
                {
                  if ( !v21 )
                    goto LABEL_48;
                  ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))v21->klass->vtable[9].methodPtr)(
                    v21,
                    1,
                    0,
                    v21->klass->vtable[9].method);
                }
                else
                {
                  if ( !v21 )
                    goto LABEL_48;
                  ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))v21->klass->vtable[8].methodPtr)(
                    v21,
                    1,
                    0,
                    v21->klass->vtable[8].method);
                }
              }
            }
          }
        }
        ++v15;
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0);
        if ( AssetName )
          continue;
      }
    }
    goto LABEL_48;
  }
  return v13;
}


bool CommonEffectManager__Stop_50698288(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        System_String_o *markKey,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_5939D77 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    byte_5939D77 = 1;
  }
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, effectName);
  return CommonEffectManager__StopInternal(0, parent, effectName, isSkip, isLoadStop, markKey, v6);
}


int32_t CommonEffectManager__get_LoadedSkinAssetIndex(CommonEffectManager_o *this, const MethodInfo *method)
{
  return this->fields._LoadedSkinAssetIndex_k__BackingField;
}


void CommonEffectManager__set_LoadedSkinAssetIndex(
        CommonEffectManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LoadedSkinAssetIndex_k__BackingField = value;
}


void CommonEffectManager___c__DisplayClass54_0___ctor(
        CommonEffectManager___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CommonEffectManager___c__DisplayClass54_0___LoadSkinEffectsLocal_b__0(
        CommonEffectManager___c__DisplayClass54_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v8; // x0
  char *ValueStringArray; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectName; // x1
  struct CommonEffectManager_o *_4__this; // x8
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x8
  __int64 uiFlag; // x9
  int max_length; // w10
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  __int64 v19; // x1
  Il2CppObject *Object_object__58323140; // x22
  __int64 v21; // x1
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  struct CommonEffectManager_o *v24; // x8
  Il2CppObject *v25; // x22
  System_Collections_Generic_Dictionary_object__object__o *skinedEffects; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  struct CommonEffectManager_o *v29; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_String_o *name; // x1
  struct CommonEffectManager_o *v43; // x8
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5939D8E & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_8629/*"LOAD_SKIN_EFFECT_NAMES{0}"*/);
    byte_5939D8E = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  LODWORD(v44.fields._list) = this->fields.uiFlag;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v44);
  ValueStringArray = (char *)System_String__Format((System_String_o *)StringLiteral_8629/*"LOAD_SKIN_EFFECT_NAMES{0}"*/, v8, 0);
  if ( !Master_object )
    goto LABEL_35;
  ValueStringArray = (char *)ConstantStrMaster__GetValueStringArray(
                               (ConstantStrMaster_o *)Master_object,
                               (System_String_o *)ValueStringArray,
                               0,
                               0);
  if ( ValueStringArray )
  {
    if ( !v5 )
      goto LABEL_35;
    EffectName = (System_Collections_Generic_IEnumerable_T__o *)ValueStringArray;
    goto LABEL_15;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  skinEffectLoadLists = _4__this->fields.skinEffectLoadLists;
  if ( !skinEffectLoadLists )
    goto LABEL_35;
  uiFlag = this->fields.uiFlag;
  max_length = skinEffectLoadLists->max_length;
  if ( (int)uiFlag < max_length )
  {
    if ( (unsigned int)uiFlag >= max_length )
      sub_21FFED4(0);
    if ( v5 )
    {
      EffectName = (System_Collections_Generic_IEnumerable_T__o *)skinEffectLoadLists->m_Items[uiFlag].fields.EffectName;
LABEL_15:
      System_Collections_Generic_List_object___AddRange(
        v5,
        EffectName,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
      goto LABEL_16;
    }
LABEL_35:
    sub_21FFECC(ValueStringArray, v10);
  }
  if ( !v5 )
    goto LABEL_35;
LABEL_16:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v45 = v44;
  v44.fields._list = 0;
  *(_QWORD *)&v44.fields._index = &v45;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v16 )
      break;
    if ( !data )
      sub_21FFECC(v16, v17);
    current = v45.fields._current;
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                data,
                                (System_String_o *)v45.fields._current,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      v22 = UnityEngine_Object__Instantiate_object_(
              Object_object__58323140,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v24 = this->fields.__4__this;
      if ( !v24 )
        sub_21FFECC(v22, v23);
      v25 = v22;
      skinedEffects = (System_Collections_Generic_Dictionary_object__object__o *)v24->fields.skinedEffects;
      if ( !skinedEffects )
        sub_21FFECC(0, v23);
      System_Collections_Generic_Dictionary_object__object___Add(
        skinedEffects,
        current,
        v25,
        (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
      GameObjectExtensions__SafeSetParent(
        (UnityEngine_GameObject_o *)v25,
        (UnityEngine_Component_o *)this->fields.__4__this,
        0);
      if ( !v25 )
        sub_21FFECC(v27, v28);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_35;
  ActionExtensions__Call(v29->fields.callbackAfterSkinLoad, 0);
  ValueStringArray = (char *)this->fields.__4__this;
  if ( !ValueStringArray )
    goto LABEL_35;
  *((_QWORD *)ValueStringArray + 9) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(ValueStringArray + 72), 0, v30, v31, v32, v33, v34, v35);
  if ( !data )
    goto LABEL_35;
  ValueStringArray = (char *)this->fields.__4__this;
  if ( !ValueStringArray )
    goto LABEL_35;
  name = data->fields.name;
  *((_QWORD *)ValueStringArray + 8) = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(ValueStringArray + 64), (int32_t)name, v36, v37, v38, v39, v40, v41);
  v43 = this->fields.__4__this;
  if ( !v43 )
    goto LABEL_35;
  v43->fields._LoadedSkinAssetIndex_k__BackingField = this->fields.uiFlag;
}