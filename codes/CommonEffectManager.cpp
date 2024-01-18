void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct CommonEffectManager_StaticFields *static_fields; // x0
  __int64 v5; // x1
  struct CommonEffectManager_StaticFields *v6; // x0
  __int64 v7; // x1
  struct CommonEffectManager_StaticFields *v8; // x0
  struct CommonEffectManager_StaticFields *v9; // x0
  struct CommonEffectManager_StaticFields *v10; // x0
  struct CommonEffectManager_StaticFields *v11; // x0

  if ( (byte_4183E71 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_5812/*"Effect/"*/, v2);
    sub_B2C35C(&StringLiteral_5848/*"Effect/Skin/{0:D2}"*/, v3);
    byte_4183E71 = 1;
  }
  static_fields = CommonEffectManager_TypeInfo->static_fields;
  v5 = StringLiteral_5812/*"Effect/"*/;
  static_fields->effectAssetStoragePath = (struct System_String_o *)StringLiteral_5812/*"Effect/"*/;
  sub_B2C2F8(static_fields, v5);
  v6 = CommonEffectManager_TypeInfo->static_fields;
  v7 = StringLiteral_5848/*"Effect/Skin/{0:D2}"*/;
  v6->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5848/*"Effect/Skin/{0:D2}"*/;
  sub_B2C2F8(&v6->skinEffectAssetStoragePath, v7);
  v8 = CommonEffectManager_TypeInfo->static_fields;
  v8->testEffectPrefab = 0LL;
  sub_B2C2F8(&v8->testEffectPrefab, 0LL);
  v9 = CommonEffectManager_TypeInfo->static_fields;
  v9->testBackEffectPrefab = 0LL;
  sub_B2C2F8(&v9->testBackEffectPrefab, 0LL);
  v10 = CommonEffectManager_TypeInfo->static_fields;
  v10->testCharaEffectPrefab = 0LL;
  sub_B2C2F8(&v10->testCharaEffectPrefab, 0LL);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->testCharaBackEffectPrefab = 0LL;
  sub_B2C2F8(&v11->testCharaBackEffectPrefab, 0LL);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4183E70 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__, method);
    byte_4183E70 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
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

  if ( (byte_4183E4B & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    byte_4183E4B = 1;
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
  return CommonEffectManager__Create_17917084(parent, effectName, prefab, v13, 0, 0, v7);
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

  if ( (byte_4183E57 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E57 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B2C434(v14, v15);
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
void __fastcall CommonEffectManager__CreateParam_17921176(
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

  if ( (byte_4183E58 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E58 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B2C434(v16, v17);
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
void __fastcall CommonEffectManager__CreateParam_17921364(
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
  if ( (byte_4183E59 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E59 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v18);
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
void __fastcall CommonEffectManager__CreateParam_17921572(
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
  if ( (byte_4183E5A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E5A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v20);
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
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_17917084(
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
  CommonEffectComponent_o *Component_srcLineSprite; // x22
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
  float v37; // [xsp+8h] [xbp-78h]
  float v38; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4183E4E & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    byte_4183E4E = 1;
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
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_16;
  v20 = transform;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         transform,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v22 = (UnityEngine_Transform_o *)transform;
  v37 = y;
  v38 = z;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v23 = localScale.fields.x;
  v24 = localScale.fields.y;
  v25 = localScale.fields.z;
  *(UnityEngine_Quaternion_o *)&v27 = CommonEffectManager__GetFlipQuaternion(flip, v26);
  if ( !parent )
    goto LABEL_16;
  v31 = v27;
  v32 = v28;
  v33 = v29;
  v34 = v30;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v22 )
    goto LABEL_16;
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
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B2C434(transform, v19);
  CommonEffectComponent__Init_17899744(Component_srcLineSprite, AssetName, 0, 0, v35);
  return Component_srcLineSprite;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_17917612(
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

  if ( (byte_4183E4C & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    byte_4183E4C = 1;
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
  return CommonEffectManager__Create_17917084(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_17917788(
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

  if ( (byte_4183E4D & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    byte_4183E4D = 1;
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
  return CommonEffectManager__Create_17917084(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_17917964(
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

  if ( (byte_4183E4F & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, data);
    byte_4183E4F = 1;
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
  return CommonEffectManager__Create_17918140(parent, data, prefab, v13, 0, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_17918140(
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
  CommonEffectComponent_o *Component_srcLineSprite; // x20
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
  float v34; // [xsp+8h] [xbp-78h]
  float v35; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4183E52 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, data);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    byte_4183E52 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_16;
  v19 = transform;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         transform,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v21 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !transform )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  v34 = localScale.fields.y;
  v35 = localScale.fields.x;
  v23 = localScale.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  *(UnityEngine_Quaternion_o *)&v24 = CommonEffectManager__GetFlipQuaternion(flip, v22);
  if ( !parent )
    goto LABEL_16;
  v28 = v24;
  v29 = v25;
  v30 = v26;
  v31 = v27;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v21 )
    goto LABEL_16;
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
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B2C434(transform, v18);
  CommonEffectComponent__Init_17899820(Component_srcLineSprite, data, 0, 0, v32);
  return Component_srcLineSprite;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_17918644(
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

  if ( (byte_4183E50 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, data);
    byte_4183E50 = 1;
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
  return CommonEffectManager__Create_17918140(parent, data, prefab, v14, 0, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_17918820(
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
  if ( (byte_4183E51 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, data);
    byte_4183E51 = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_17918140(parent, data, prefab, v13, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_17918988(
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

  if ( (byte_4183E53 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E53 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B2C434(v12, v13);
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
void __fastcall CommonEffectManager__Create_17920404(
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

  if ( (byte_4183E54 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E54 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B2C434(v14, v15);
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
void __fastcall CommonEffectManager__Create_17920588(
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
  if ( (byte_4183E55 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E55 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
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
void __fastcall CommonEffectManager__Create_17920784(
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
  if ( (byte_4183E56 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_4183E56 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v18);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  int32_t v15; // w21
  UnityEngine_Component_o *v16; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_Object_o *v18; // x23
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4183E62 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4183E62 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v12,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v15, 0LL);
        if ( transform )
        {
          v16 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
            goto LABEL_21;
          v18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v16,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
          {
LABEL_21:
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
            if ( !v12 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
          ++v15;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
    if ( !v12 )
LABEL_24:
      sub_B2C434(transform, v14);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v20.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_17924860(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  int32_t v21; // w22
  UnityEngine_Component_o *v22; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  WebViewObject_o *v24; // x24
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4183E63 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    byte_4183E63 = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v15);
      v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v18,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
      if ( !parent )
        goto LABEL_34;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_34;
      v21 = 0;
      while ( 1 )
      {
        transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
        if ( v21 >= (int)transform )
          break;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
          goto LABEL_34;
        transform = UnityEngine_Transform__GetChild(transform, v21, 0LL);
        if ( !transform )
          goto LABEL_34;
        v22 = (UnityEngine_Component_o *)transform;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)transform,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
          if ( System_String__Equals_44292872(AssetName, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
            goto LABEL_31;
        }
        v24 = UnityEngine_Component__GetComponent_WebViewObject_(
                v22,
                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v24 || !AssetName )
            goto LABEL_34;
          if ( System_String__Equals_44292872(AssetName, *(System_String_o **)&v24->fields.visibility, 0LL) )
          {
LABEL_31:
            transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
            if ( !v18 )
              goto LABEL_34;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        ++v21;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
          goto LABEL_34;
      }
      if ( !v18 )
LABEL_34:
        sub_B2C434(transform, v20);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v26,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v26,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v26.fields.current;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v26,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    else
    {
      if ( (WORD1(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      CommonEffectManager__Stop(parent, 0, 0, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__ForceStop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4183E5F & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isSkip);
    byte_4183E5F = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, v4);
}


bool __fastcall CommonEffectManager__ForceStop_17923956(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4183E60 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    byte_4183E60 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_4183E46 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4183E46 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommonEffectComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
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
      sub_B2C434(transform, v10);
    v11 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v11 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
          }
          ++v11;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v8 )
    goto LABEL_23;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_4183E45 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    byte_4183E45 = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_44305532(v3->static_fields->effectAssetStoragePath, effectName, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  UnityEngine_Component_o *v8; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4183E47 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4183E47 = 1;
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
      sub_B2C434(transform, v6);
    v7 = 0;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
      if ( !transform )
        goto LABEL_22;
      v8 = (UnityEngine_Component_o *)transform;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 1;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v8,
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
        return 1;
      ++v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 0;
}


bool __fastcall CommonEffectManager__IsBusy_17915324(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_String_o *AssetName; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  int32_t v12; // w21
  UnityEngine_Component_o *v13; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v15; // x22

  if ( (byte_4183E48 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4183E48 = 1;
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
    AssetName = CommonEffectManager__GetAssetName(effectName, v8);
    if ( !parent
      || (v11 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
    {
LABEL_32:
      sub_B2C434(AssetName, v10);
    }
    v12 = 0;
    while ( v12 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
    {
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_32;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0LL);
      if ( !AssetName )
        goto LABEL_32;
      v13 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
        if ( !Component_WebViewObject || !v11 )
          goto LABEL_32;
        if ( System_String__Equals_44292872(v11, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 1;
      }
      v15 = UnityEngine_Component__GetComponent_WebViewObject_(
              v13,
              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v15 || !v11 )
          goto LABEL_32;
        if ( System_String__Equals_44292872(v11, *(System_String_o **)&v15->fields.visibility, 0LL) )
          return 1;
      }
      ++v12;
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
  return CommonEffectManager__IsBusy(parent, v8);
}


bool __fastcall CommonEffectManager__IsLoadedSkinData(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4183E6F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_4183E6F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  return Instance->fields.commonCamera != 0LL;
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
  int32_t v7; // w20
  UnityEngine_Component_o *v8; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  WebViewObject_o *v10; // x21

  if ( (byte_4183E49 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4183E49 = 1;
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
      sub_B2C434(transform, v6);
    v7 = 0;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
      if ( !transform )
        goto LABEL_24;
      v8 = (UnityEngine_Component_o *)transform;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 0;
      v10 = UnityEngine_Component__GetComponent_WebViewObject_(
              v8,
              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_24;
        if ( !v10->fields.mVisibility )
          return 0;
      }
      ++v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__IsStart_17916324(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_String_o *AssetName; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  int32_t v12; // w21
  UnityEngine_Component_o *v13; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v15; // x22

  if ( (byte_4183E4A & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4183E4A = 1;
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
    AssetName = CommonEffectManager__GetAssetName(effectName, v8);
    if ( !parent
      || (v11 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
    {
LABEL_33:
      sub_B2C434(AssetName, v10);
    }
    v12 = 0;
    while ( v12 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
    {
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_33;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v12, 0LL);
      if ( !AssetName )
        goto LABEL_33;
      v13 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
        if ( !Component_WebViewObject || !v11 )
          goto LABEL_33;
        if ( System_String__Equals_44292872(v11, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 0;
      }
      v15 = UnityEngine_Component__GetComponent_WebViewObject_(
              v13,
              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
        if ( !v15 || !v11 )
          goto LABEL_33;
        if ( System_String__Equals_44292872(v11, *(System_String_o **)&v15->fields.visibility, 0LL)
          && !v15->fields.mVisibility )
        {
          return 0;
        }
      }
      ++v12;
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
  UnityEngine_Object_o **p_testEffectPrefab; // x8
  const MethodInfo *v33; // x1
  System_String_o *AssetName; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *loadEffectPrefab; // x26
  System_String_o *v36; // x25
  UnityEngine_GameObject_o *v37; // x27
  CommonEffectLoadComponent_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *v39; // x27
  const MethodInfo *v40; // x7
  CommonEffectManager_c *v41; // x0
  CommonEffectManager_c *v42; // x0
  CommonEffectManager_c *v43; // x0
  UnityEngine_Object_o *v44; // x23
  UnityEngine_Object_o *_17917084; // x24
  const MethodInfo *v46; // x5
  System_String_o *name; // x24
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v20 = this;
  if ( (byte_4183E65 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, parent);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___, v21);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_13556/*"Talk/TestBackEffect"*/, v24);
    sub_B2C35C(&StringLiteral_13563/*"Talk/communicationCharaEffect"*/, v25);
    sub_B2C35C(&StringLiteral_13561/*"Talk/bit_talk_10"*/, v26);
    sub_B2C35C(&StringLiteral_13559/*"Talk/TestEffect"*/, v27);
    sub_B2C35C(&StringLiteral_13555/*"Talk/Test"*/, v28);
    sub_B2C35C(&StringLiteral_13557/*"Talk/TestCharaBackEffect"*/, v29);
    this = (CommonEffectManager_o *)sub_B2C35C(&StringLiteral_13558/*"Talk/TestCharaEffect"*/, v30);
    byte_4183E65 = 1;
  }
  if ( !effectName )
    goto LABEL_57;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_13555/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13563/*"Talk/communicationCharaEffect"*/, 0LL) )
      effectName = (System_String_o *)StringLiteral_13561/*"Talk/bit_talk_10"*/;
    goto LABEL_12;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13559/*"Talk/TestEffect"*/, 0LL) )
  {
    v31 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v31 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v31->static_fields->testEffectPrefab;
    goto LABEL_38;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13556/*"Talk/TestBackEffect"*/, 0LL) )
  {
    v41 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v41 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v41->static_fields->testBackEffectPrefab;
    goto LABEL_38;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13558/*"Talk/TestCharaEffect"*/, 0LL) )
  {
    v42 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v42 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v42->static_fields->testCharaEffectPrefab;
    goto LABEL_38;
  }
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13557/*"Talk/TestCharaBackEffect"*/, 0LL) )
  {
LABEL_12:
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    AssetName = CommonEffectManager__GetAssetName(effectName, v33);
    loadEffectPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v20->fields.loadEffectPrefab;
    v36 = AssetName;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (CommonEffectManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      loadEffectPrefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v37 = (UnityEngine_GameObject_o *)this;
      Component_srcLineSprite = (CommonEffectLoadComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( parent )
      {
        v39 = (UnityEngine_Transform_o *)this;
        this = (CommonEffectManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v39 )
        {
          UnityEngine_Transform__set_parent(v39, (UnityEngine_Transform_o *)this, 0LL);
          v48.fields.x = x;
          v48.fields.y = y;
          v48.fields.z = z;
          UnityEngine_Transform__set_localPosition(v39, v48, 0LL);
          identity = UnityEngine_Quaternion__get_identity(0LL);
          UnityEngine_Transform__set_localRotation(v39, identity, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v39, one, 0LL);
          if ( Component_srcLineSprite )
          {
            CommonEffectLoadComponent__Init_17910748(
              Component_srcLineSprite,
              v36,
              param,
              callback,
              isSkip,
              isPause,
              flip,
              v40);
            return;
          }
        }
      }
    }
    goto LABEL_57;
  }
  v43 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v43 = CommonEffectManager_TypeInfo;
  }
  p_testEffectPrefab = (UnityEngine_Object_o **)&v43->static_fields->testCharaBackEffectPrefab;
LABEL_38:
  v44 = *p_testEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  _17917084 = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_57;
    name = UnityEngine_Object__get_name(v44, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v50.fields.x = x;
    v50.fields.y = y;
    v50.fields.z = z;
    _17917084 = (UnityEngine_Object_o *)CommonEffectManager__Create_17917084(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v44,
                                          v50,
                                          0,
                                          flip,
                                          v46);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CommonEffectManager_o *)UnityEngine_Object__op_Inequality(_17917084, 0LL, 0LL);
  if ( !param || ((unsigned __int8)this & 1) == 0 )
    goto LABEL_54;
  if ( !_17917084 )
LABEL_57:
    sub_B2C434(this, parent);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_17917084->klass[1]._1.gc_desc)(
    _17917084,
    param,
    _17917084->klass[1]._1.name);
LABEL_54:
  if ( callback )
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, (CommonEffectComponent_o *)_17917084, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__LoadSkinEffects(
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4183E6B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, *(_QWORD *)&loadParallelMax);
    byte_4183E6B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  int32_t UiFlag; // w22
  CommonEffectManager_c *v15; // x8
  System_String_o *skinEffectAssetStoragePath; // x23
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  const MethodInfo *v19; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v20; // x21
  AssetManager_o *Instance; // x21
  AssetLoader_LoadEndDataHandler_o *v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4183E67 & 1) == 0 )
  {
    sub_B2C35C(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__, callback);
    sub_B2C35C(&CommonEffectManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    byte_4183E67 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  v15 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v15 = CommonEffectManager_TypeInfo;
  }
  skinEffectAssetStoragePath = v15->static_fields->skinEffectAssetStoragePath;
  v25 = UiFlag + 1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v18 = System_String__Format(skinEffectAssetStoragePath, v17, 0LL);
  if ( System_String__op_Equality(v18, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v19);
    this->fields.callbackAfterSkinLoad = callback;
    sub_B2C2F8(&this->fields.callbackAfterSkinLoad, callback);
    v20 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v20,
      (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v20;
    sub_B2C2F8(&this->fields.skinedEffects, v20);
    Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__,
      0LL);
    if ( !Instance )
      sub_B2C434(v23, v24);
    AssetManager__LoadAssetStorage(Instance, v18, v22, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4183E66 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_4183E66 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v3);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4183E6C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_4183E6C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4183E68 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v9);
    byte_4183E68 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  p_skinedEffects = &this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)skinedEffects,
               (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v17,
      Values,
      (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v17,
              (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v17.fields.currentValue;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v17,
      (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*p_skinedEffects;
    if ( !*p_skinedEffects )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Values,
      (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_B2C2F8(&this->fields.skinedEffects, 0LL);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Values )
LABEL_17:
    sub_B2C434(Values, v13);
  AssetManager__ReleaseAssetStorage((AssetManager_o *)Values, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_B2C2F8(p_loadedSkinAssetName, 0LL);
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
  WebViewObject_o *Component_WebViewObject; // x23
  UnityEngine_Object_o *v12; // x22
  const MethodInfo *v13; // x2

  if ( (byte_4183E5B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, isSkip);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4183E5B = 1;
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
      sub_B2C434(transform, v8);
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
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
            v12 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v10,
                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_26;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v12, isSkip, v13);
            }
          }
          ++v9;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_26;
    }
  }
}


void __fastcall CommonEffectManager__Resume_17922232(
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
  WebViewObject_o *Component_WebViewObject; // x24
  WebViewObject_o *v18; // x23
  const MethodInfo *v19; // x2

  if ( (byte_4183E5C & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4183E5C = 1;
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v10);
      if ( !parent
        || (v14 = AssetName, (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
      {
LABEL_34:
        sub_B2C434(AssetName, v13);
      }
      v15 = 0;
      while ( v15 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
      {
        AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !AssetName )
          goto LABEL_34;
        AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v15, 0LL);
        if ( !AssetName )
          goto LABEL_34;
        v16 = (UnityEngine_Component_o *)AssetName;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)AssetName,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
        if ( !Component_WebViewObject || !v14 )
          goto LABEL_34;
        if ( System_String__Equals_44292872(v14, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
        {
          LOBYTE(Component_WebViewObject->fields.onLoaded) = isSkip;
          BYTE1(Component_WebViewObject->fields.onLoaded) = 0;
        }
        else
        {
LABEL_25:
          v18 = UnityEngine_Component__GetComponent_WebViewObject_(
                  v16,
                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
          if ( ((unsigned __int8)AssetName & 1) != 0 )
          {
            if ( !v18 || !v14 )
              goto LABEL_34;
            if ( System_String__Equals_44292872(v14, *(System_String_o **)&v18->fields.visibility, 0LL) )
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v18, isSkip, v19);
          }
        }
        ++v15;
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
      CommonEffectManager__Stop(parent, isSkip, 0, v11);
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

  if ( (byte_4183E6E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent);
    byte_4183E6E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  System_Xml_Schema_XmlSchemaObject_o *v11; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *transform; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4183E6A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effect);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4183E6A = 1;
  }
  v9 = 0LL;
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
             (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v11 = value;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v12 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v11,
                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v9 = (UnityEngine_GameObject_o *)v12,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v9, transform, 0LL),
              !v9) )
        {
          sub_B2C434(v12, v13);
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
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4183E6D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent);
    byte_4183E6D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *skinedEffects; // x0
  System_Xml_Schema_XmlSchemaObject_o *v15; // x23
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Component_o *transform; // x0
  __int64 v18; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4183E69 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effects);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    this = (CommonEffectManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4183E69 = 1;
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
          {
            v18 = sub_B2C460(this);
            sub_B2C400(v18, 0LL);
          }
          skinedEffects = (UnityEngine_UI_Dropdown_DropdownItem_o *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)skinedEffects,
                                            (System_Xml_XmlQualifiedName_o *)effects->m_Items[v13],
                                            &value,
                                            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v15 = value;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            skinedEffects = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v15,
                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
              skinedEffects = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                v16,
                                (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !skinedEffects )
                break;
              UIWidget__set_depth((UIWidget_o *)skinedEffects, 0, 0LL);
            }
          }
          LODWORD(v12) = effects->max_length;
          if ( (__int64)++v13 >= (int)v12 )
            return;
        }
        sub_B2C434(skinedEffects, effects);
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

  if ( (byte_4183E64 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, backEffectPrefab);
    byte_4183E64 = 1;
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
  sub_B2C2F8(&static_fields->testEffectPrefab, effectPrefab);
  v11 = CommonEffectManager_TypeInfo->static_fields;
  v11->testBackEffectPrefab = backEffectPrefab;
  sub_B2C2F8(&v11->testBackEffectPrefab, backEffectPrefab);
  v12 = CommonEffectManager_TypeInfo->static_fields;
  v12->testCharaEffectPrefab = charaEffectPrefab;
  sub_B2C2F8(&v12->testCharaEffectPrefab, charaEffectPrefab);
  v13 = CommonEffectManager_TypeInfo->static_fields;
  v13->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_B2C2F8(&v13->testCharaBackEffectPrefab, charaBackEffectPrefab);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonEffectManager__Stop(
        UnityEngine_GameObject_o *parent,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4183E5D & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, isSkip);
    byte_4183E5D = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *AssetName; // x0
  const MethodInfo *v13; // x1
  bool v14; // w27
  int32_t v15; // w23
  bool v16; // w28
  UnityEngine_Component_o *v17; // x24
  WebViewObject_o *Component_WebViewObject; // x25
  WebViewObject_o *v19; // x24
  UnityEngine_Object_o *gameObject; // x24
  WebViewObject_c *klass; // x8

  if ( (byte_4183E61 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, parent);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v9);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4183E61 = 1;
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
      AssetName = CommonEffectManager__GetAssetName(effectName, v13);
      effectName = AssetName;
    }
    if ( !parent || (AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_48:
      sub_B2C434(AssetName, v13);
    v15 = 0;
    v16 = isSkip || isLoadStop;
    v14 = 1;
    while ( 1 )
    {
      if ( v15 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AssetName, 0LL) )
        return v14;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_48;
      AssetName = (System_String_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AssetName, v15, 0LL);
      if ( !AssetName )
        goto LABEL_48;
      v17 = (UnityEngine_Component_o *)AssetName;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)AssetName,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
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
      AssetName = (System_String_o *)System_String__Equals_44292872(
                                       effectName,
                                       (System_String_o *)Component_WebViewObject->fields.onJS,
                                       0LL);
      if ( ((unsigned __int8)AssetName & 1) != 0 )
      {
LABEL_26:
        if ( v16 )
        {
          if ( !Component_WebViewObject )
            goto LABEL_48;
          CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_WebViewObject, v13);
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
LABEL_29:
        v19 = UnityEngine_Component__GetComponent_WebViewObject_(
                v17,
                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        AssetName = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
        if ( ((unsigned __int8)AssetName & 1) != 0 )
        {
          if ( effectName )
          {
            if ( !v19 )
              goto LABEL_48;
            if ( !System_String__Equals_44292872(effectName, *(System_String_o **)&v19->fields.visibility, 0LL) )
              goto LABEL_47;
          }
          else if ( !v19 )
          {
            goto LABEL_48;
          }
          if ( isSkip )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v19,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
          }
          else
          {
            klass = v19->klass;
            if ( force )
              ((void (__fastcall *)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))klass[1]._1.castClass)(
                v19,
                1LL,
                0LL,
                klass[1]._1.declaringType);
            else
              (*(void (__fastcall **)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))&klass[1]._1.this_arg.bits)(
                v19,
                1LL,
                0LL,
                klass[1]._1.element_class);
          }
        }
      }
LABEL_47:
      ++v15;
      AssetName = (System_String_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !AssetName )
        goto LABEL_48;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__Stop_17923688(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4183E5E & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, effectName);
    byte_4183E5E = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CommonEffectManager_skinLoadEffect_array *skinEffectLoadLists; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *UiFlag; // x0
  __int64 v11; // x1
  struct System_String_array *EffectName; // x23
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  System_String_o *v15; // x21
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_GameObject_o *v17; // x22
  struct System_String_o *name; // x1
  __int64 v19; // x0

  if ( (byte_4183E72 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v8);
    byte_4183E72 = 1;
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
  v13 = *(_QWORD *)&EffectName->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v13 )
    {
      if ( !data )
        goto LABEL_26;
      v15 = EffectName->m_Items[v14];
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 data,
                                                                 v15,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_26;
        v17 = (UnityEngine_GameObject_o *)UiFlag;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.skinedEffects,
          (System_Xml_XmlQualifiedName_o *)v15,
          (System_Xml_Schema_XmlSchemaObject_o *)UiFlag,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v17, (UnityEngine_Component_o *)this, 0LL);
        if ( !v17 )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive(v17, 0, 0LL);
      }
      LODWORD(v13) = EffectName->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_24;
    }
LABEL_27:
    v19 = sub_B2C460(UiFlag);
    sub_B2C400(v19, 0LL);
  }
LABEL_24:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_B2C2F8(&this->fields.callbackAfterSkinLoad, 0LL);
  if ( !data )
LABEL_26:
    sub_B2C434(UiFlag, v11);
  name = data->fields.name;
  this->fields.loadedSkinAssetName = name;
  sub_B2C2F8(&this->fields.loadedSkinAssetName, name);
}