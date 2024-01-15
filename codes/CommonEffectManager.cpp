void __fastcall CommonEffectManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct CommonEffectManager_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CommonEffectManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct CommonEffectManager_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct CommonEffectManager_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct CommonEffectManager_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_40F65A8 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_5795/*"Effect/"*/, v8);
    sub_B16FFC(&StringLiteral_5831/*"Effect/Skin/{0:D2}"*/, v9);
    byte_40F65A8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CommonEffectManager_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5795/*"Effect/"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5795/*"Effect/"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = CommonEffectManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_5831/*"Effect/Skin/{0:D2}"*/;
  v12->skinEffectAssetStoragePath = (struct System_String_o *)StringLiteral_5831/*"Effect/Skin/{0:D2}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->skinEffectAssetStoragePath, v13, v14, v15, v16, v17, v18, v19);
  v20 = CommonEffectManager_TypeInfo->static_fields;
  v20->testEffectPrefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v20->testEffectPrefab, 0LL, v21, v22, v23, v24, v25, v26);
  v27 = CommonEffectManager_TypeInfo->static_fields;
  v27->testBackEffectPrefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v27->testBackEffectPrefab, 0LL, v28, v29, v30, v31, v32, v33);
  v34 = CommonEffectManager_TypeInfo->static_fields;
  v34->testCharaEffectPrefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v34->testCharaEffectPrefab, 0LL, v35, v36, v37, v38, v39, v40);
  v41 = CommonEffectManager_TypeInfo->static_fields;
  v41->testCharaBackEffectPrefab = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v41->testCharaBackEffectPrefab, 0LL, v42, v43, v44, v45, v46, v47);
}


void __fastcall CommonEffectManager___ctor(CommonEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F65A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager___ctor__, method);
    byte_40F65A7 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_CommonEffectManager___ctor__);
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

  if ( (byte_40F6582 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    byte_40F6582 = 1;
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
  return CommonEffectManager__Create_18183428(parent, effectName, prefab, v13, 0, 0, v7);
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
  int v14; // s0
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_40F658E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F658E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B170D4();
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v14,
    param,
    0LL,
    isSkip,
    isPause,
    flip,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_18187520(
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
  int v16; // s0
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_40F658F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F658F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B170D4();
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v16,
    param,
    callback,
    isSkip,
    isPause,
    flip,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_18187708(
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
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F6590 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F6590 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v19,
    param,
    0LL,
    isSkip,
    isPause,
    flip,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__CreateParam_18187916(
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
  const MethodInfo *v20; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F6591 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F6591 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v21,
    param,
    callback,
    isSkip,
    isPause,
    flip,
    v20);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18183428(
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
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x24
  CommonEffectComponent_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v22; // x24
  UnityEngine_Transform_o *v23; // x0
  float v24; // s11
  float v25; // s12
  float v26; // s13
  const MethodInfo *v27; // x1
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s3
  float v32; // s14
  float v33; // s15
  float v34; // s8
  float v35; // s9
  UnityEngine_Transform_o *v36; // x0
  const MethodInfo *v37; // x4
  float v39; // [xsp+8h] [xbp-78h]
  float v40; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F6585 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    byte_40F6585 = 1;
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
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v18 )
    goto LABEL_16;
  v19 = v18;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v18,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v19, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v22 = transform;
  v39 = y;
  v40 = z;
  v23 = UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !v23 )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale(v23, 0LL);
  v24 = localScale.fields.x;
  v25 = localScale.fields.y;
  v26 = localScale.fields.z;
  *(UnityEngine_Quaternion_o *)&v28 = CommonEffectManager__GetFlipQuaternion(flip, v27);
  if ( !parent )
    goto LABEL_16;
  v32 = v28;
  v33 = v29;
  v34 = v30;
  v35 = v31;
  v36 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v22 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v22, v36, 0LL);
  v42.fields.y = v39;
  v42.fields.z = v40;
  v42.fields.x = x;
  UnityEngine_Transform__set_localPosition(v22, v42, 0LL);
  v44.fields.x = v32;
  v44.fields.y = v33;
  v44.fields.z = v34;
  v44.fields.w = v35;
  UnityEngine_Transform__set_localRotation(v22, v44, 0LL);
  v43.fields.x = v24;
  v43.fields.y = v25;
  v43.fields.z = v26;
  UnityEngine_Transform__set_localScale(v22, v43, 0LL);
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B170D4();
  CommonEffectComponent__Init_18168168(Component_srcLineSprite, AssetName, 0, 0, v37);
  return Component_srcLineSprite;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18183956(
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

  if ( (byte_40F6583 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    byte_40F6583 = 1;
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
  return CommonEffectManager__Create_18183428(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18184132(
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

  if ( (byte_40F6584 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    byte_40F6584 = 1;
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
  return CommonEffectManager__Create_18183428(parent, effectName, prefab, v14, 0, 0, v8);
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18184308(
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

  if ( (byte_40F6586 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, data);
    byte_40F6586 = 1;
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
  return CommonEffectManager__Create_18184484(parent, data, prefab, v13, 0, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18184484(
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
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x23
  CommonEffectComponent_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v21; // x23
  UnityEngine_Transform_o *v22; // x0
  const MethodInfo *v23; // x1
  float v24; // s13
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  float v29; // s14
  float v30; // s15
  float v31; // s8
  float v32; // s9
  UnityEngine_Transform_o *v33; // x0
  const MethodInfo *v34; // x4
  float v36; // [xsp+8h] [xbp-78h]
  float v37; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F6589 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, data);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    byte_40F6589 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v17 )
    goto LABEL_16;
  v18 = v17;
  Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v17,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !prefab )
    goto LABEL_16;
  v21 = transform;
  v22 = UnityEngine_GameObject__get_transform(prefab, 0LL);
  if ( !v22 )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale(v22, 0LL);
  v36 = localScale.fields.y;
  v37 = localScale.fields.x;
  v24 = localScale.fields.z;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  *(UnityEngine_Quaternion_o *)&v25 = CommonEffectManager__GetFlipQuaternion(flip, v23);
  if ( !parent )
    goto LABEL_16;
  v29 = v25;
  v30 = v26;
  v31 = v27;
  v32 = v28;
  v33 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v21 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v21, v33, 0LL);
  v39.fields.x = x;
  v39.fields.y = y;
  v39.fields.z = z;
  UnityEngine_Transform__set_localPosition(v21, v39, 0LL);
  v41.fields.x = v29;
  v41.fields.y = v30;
  v41.fields.z = v31;
  v41.fields.w = v32;
  UnityEngine_Transform__set_localRotation(v21, v41, 0LL);
  v40.fields.y = v36;
  v40.fields.x = v37;
  v40.fields.z = v24;
  UnityEngine_Transform__set_localScale(v21, v40, 0LL);
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B170D4();
  CommonEffectComponent__Init_18168244(Component_srcLineSprite, data, 0, 0, v34);
  return Component_srcLineSprite;
}


CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18184988(
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

  if ( (byte_40F6587 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, data);
    byte_40F6587 = 1;
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
  return CommonEffectManager__Create_18184484(parent, data, prefab, v14, 0, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
CommonEffectComponent_o *__fastcall CommonEffectManager__Create_18185164(
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
  if ( (byte_40F6588 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, data);
    byte_40F6588 = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  v13.fields.y = y;
  v13.fields.z = z;
  v13.fields.x = x;
  return CommonEffectManager__Create_18184484(parent, data, prefab, v13, 0, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18185332(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x24
  int v12; // s0
  const MethodInfo *v15; // [xsp+0h] [xbp-40h]

  if ( (byte_40F658A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F658A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B170D4();
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v12,
    0LL,
    0LL,
    isSkip,
    isPause,
    flip,
    v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18186748(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x25
  int v14; // s0
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_40F658B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F658B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  if ( !Instance )
    sub_B170D4();
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    *(UnityEngine_Vector3_o *)&v14,
    0LL,
    callback,
    isSkip,
    isPause,
    flip,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18186932(
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
  const MethodInfo *v16; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F658C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F658C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v17,
    0LL,
    0LL,
    isSkip,
    isPause,
    flip,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Create_18187128(
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
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F658D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, effectName);
    byte_40F658D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  CommonEffectManager__LoadCreateLocal(
    (CommonEffectManager_o *)Instance,
    parent,
    effectName,
    v19,
    0LL,
    callback,
    isSkip,
    isPause,
    flip,
    v18);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v18; // w21
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v21; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_Object_o *v23; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F6599 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F6599 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    v12,
                                                                                                    v13,
                                                                                                    v14,
                                                                                                    v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_24;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_24;
    v18 = 0;
    while ( v18 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v19 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( v19 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v19, v18, 0LL);
        if ( Child )
        {
          v21 = Child;
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              Child,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
            goto LABEL_21;
          v23 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v21,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
          {
LABEL_21:
            gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
            if ( !v16 )
              goto LABEL_24;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
          ++v18;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_24;
    }
    if ( !v16 )
LABEL_24:
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v26.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall CommonEffectManager__Destroy_18191204(
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v24; // w22
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v27; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  WebViewObject_o *v29; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F659A & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40F659A = 1;
  }
  memset(&v32, 0, sizeof(v32));
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
      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v18, v19, v20, v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v22,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      if ( !parent )
        goto LABEL_34;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_34;
      v24 = 0;
      while ( v24 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        v25 = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !v25 )
          goto LABEL_34;
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v25, v24, 0LL);
        if ( !Child )
          goto LABEL_34;
        v27 = Child;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    Child,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
        {
          if ( !Component_WebViewObject || !AssetName )
            goto LABEL_34;
          if ( System_String__Equals_43731072(AssetName, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
            goto LABEL_31;
        }
        v29 = UnityEngine_Component__GetComponent_WebViewObject_(
                v27,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
        {
          if ( !v29 || !AssetName )
            goto LABEL_34;
          if ( System_String__Equals_43731072(AssetName, *(System_String_o **)&v29->fields.visibility, 0LL) )
          {
LABEL_31:
            gameObject = UnityEngine_Component__get_gameObject(v27, 0LL);
            if ( !v22 )
              goto LABEL_34;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v22,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        ++v24;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
          goto LABEL_34;
      }
      if ( !v22 )
LABEL_34:
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v32,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v32.fields.current;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_40F6596 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, isSkip);
    byte_40F6596 = 1;
  }
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  return CommonEffectManager__StopInternal(1, parent, 0LL, isSkip, isLoadStop, v4);
}


bool __fastcall CommonEffectManager__ForceStop_18190300(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_40F6597 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    byte_40F6597 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v13; // w21
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_40F657D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonEffectComponent__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonEffectComponent___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_CommonEffectComponent__TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40F657D = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CommonEffectComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CommonEffectComponent___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_23:
      sub_B170D4();
    v13 = 0;
    while ( v13 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v14 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( v14 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v14, v13, 0LL);
        if ( Child )
        {
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      Child,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
          {
            if ( !v11 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CommonEffectComponent__Add__);
          }
          ++v13;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v11 )
    goto LABEL_23;
  return (CommonEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_CommonEffectComponent__ToArray__);
}


System_String_o *__fastcall CommonEffectManager__GetAssetName(System_String_o *effectName, const MethodInfo *method)
{
  CommonEffectManager_c *v3; // x0

  if ( (byte_40F657C & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    byte_40F657C = 1;
  }
  v3 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v3 = CommonEffectManager_TypeInfo;
  }
  return System_String__Concat_43743732(v3->static_fields->effectAssetStoragePath, effectName, 0LL);
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
  int32_t v6; // w20
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v9; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Object_o *v11; // x21

  if ( (byte_40F657E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F657E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_B170D4();
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v7 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v7 )
        goto LABEL_22;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v7, v6, 0LL);
      if ( !Child )
        goto LABEL_22;
      v9 = Child;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          Child,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 1;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v9,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
        return 1;
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return 0;
}


bool __fastcall CommonEffectManager__IsBusy_18181668(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_String_o *AssetName; // x0
  System_String_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v12; // w21
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v15; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v17; // x22

  if ( (byte_40F657F & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F657F = 1;
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
    if ( !parent || (v10 = AssetName, (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
LABEL_32:
      sub_B170D4();
    v12 = 0;
    while ( v12 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v13 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v13 )
        goto LABEL_32;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v13, v12, 0LL);
      if ( !Child )
        goto LABEL_32;
      v15 = Child;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  Child,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
      {
        if ( !Component_WebViewObject || !v10 )
          goto LABEL_32;
        if ( System_String__Equals_43731072(v10, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 1;
      }
      v17 = UnityEngine_Component__GetComponent_WebViewObject_(
              v15,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
      {
        if ( !v17 || !v10 )
          goto LABEL_32;
        if ( System_String__Equals_43731072(v10, *(System_String_o **)&v17->fields.visibility, 0LL) )
          return 1;
      }
      ++v12;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
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

  if ( (byte_40F65A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_40F65A6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  int32_t v6; // w20
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v9; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  WebViewObject_o *v11; // x21

  if ( (byte_40F6580 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F6580 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_B170D4();
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v7 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v7 )
        goto LABEL_24;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v7, v6, 0LL);
      if ( !Child )
        goto LABEL_24;
      v9 = Child;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          Child,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 0;
      v11 = UnityEngine_Component__GetComponent_WebViewObject_(
              v9,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
      {
        if ( !v11 )
          goto LABEL_24;
        if ( !v11->fields.mVisibility )
          return 0;
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__IsStart_18182668(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_String_o *AssetName; // x0
  System_String_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v12; // w21
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v15; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v17; // x22

  if ( (byte_40F6581 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F6581 = 1;
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
    if ( !parent || (v10 = AssetName, (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
LABEL_33:
      sub_B170D4();
    v12 = 0;
    while ( v12 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v13 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v13 )
        goto LABEL_33;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v13, v12, 0LL);
      if ( !Child )
        goto LABEL_33;
      v15 = Child;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  Child,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
      {
        if ( !Component_WebViewObject || !v10 )
          goto LABEL_33;
        if ( System_String__Equals_43731072(v10, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
          return 0;
      }
      v17 = UnityEngine_Component__GetComponent_WebViewObject_(
              v15,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
      {
        if ( !v17 || !v10 )
          goto LABEL_33;
        if ( System_String__Equals_43731072(v10, *(System_String_o **)&v17->fields.visibility, 0LL)
          && !v17->fields.mVisibility )
        {
          return 0;
        }
      }
      ++v12;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
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
  struct UnityEngine_GameObject_o *loadEffectPrefab; // x26
  System_String_o *v36; // x25
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x27
  CommonEffectLoadComponent_o *Component_srcLineSprite; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v41; // x27
  UnityEngine_Transform_o *v42; // x0
  const MethodInfo *v43; // x7
  CommonEffectManager_c *v44; // x0
  CommonEffectManager_c *v45; // x0
  UnityEngine_Object_o *v46; // x23
  UnityEngine_Object_o *_18183428; // x24
  const MethodInfo *v48; // x5
  System_String_o *name; // x24
  bool v50; // w0
  CommonEffectManager_c *v51; // x0
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F659C & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, parent);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___, v21);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_13500/*"Talk/TestBackEffect"*/, v24);
    sub_B16FFC(&StringLiteral_13507/*"Talk/communicationCharaEffect"*/, v25);
    sub_B16FFC(&StringLiteral_13505/*"Talk/bit_talk_10"*/, v26);
    sub_B16FFC(&StringLiteral_13503/*"Talk/TestEffect"*/, v27);
    sub_B16FFC(&StringLiteral_13499/*"Talk/Test"*/, v28);
    sub_B16FFC(&StringLiteral_13501/*"Talk/TestCharaBackEffect"*/, v29);
    sub_B16FFC(&StringLiteral_13502/*"Talk/TestCharaEffect"*/, v30);
    byte_40F659C = 1;
  }
  if ( !effectName )
    goto LABEL_57;
  if ( !System_String__StartsWith(effectName, (System_String_o *)StringLiteral_13499/*"Talk/Test"*/, 0LL) )
  {
    if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13507/*"Talk/communicationCharaEffect"*/, 0LL) )
      effectName = (System_String_o *)StringLiteral_13505/*"Talk/bit_talk_10"*/;
    goto LABEL_12;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13503/*"Talk/TestEffect"*/, 0LL) )
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
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13500/*"Talk/TestBackEffect"*/, 0LL) )
  {
    v51 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v51 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v51->static_fields->testBackEffectPrefab;
    goto LABEL_38;
  }
  if ( System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13502/*"Talk/TestCharaEffect"*/, 0LL) )
  {
    v44 = CommonEffectManager_TypeInfo;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      v44 = CommonEffectManager_TypeInfo;
    }
    p_testEffectPrefab = (UnityEngine_Object_o **)&v44->static_fields->testCharaEffectPrefab;
    goto LABEL_38;
  }
  if ( !System_String__op_Equality(effectName, (System_String_o *)StringLiteral_13501/*"Talk/TestCharaBackEffect"*/, 0LL) )
  {
LABEL_12:
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    AssetName = CommonEffectManager__GetAssetName(effectName, v33);
    loadEffectPrefab = this->fields.loadEffectPrefab;
    v36 = AssetName;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v37 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)loadEffectPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( v37 )
    {
      v38 = v37;
      Component_srcLineSprite = (CommonEffectLoadComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v37,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectLoadComponent___);
      transform = UnityEngine_GameObject__get_transform(v38, 0LL);
      if ( parent )
      {
        v41 = transform;
        v42 = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v41 )
        {
          UnityEngine_Transform__set_parent(v41, v42, 0LL);
          v52.fields.x = x;
          v52.fields.y = y;
          v52.fields.z = z;
          UnityEngine_Transform__set_localPosition(v41, v52, 0LL);
          identity = UnityEngine_Quaternion__get_identity(0LL);
          UnityEngine_Transform__set_localRotation(v41, identity, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v41, one, 0LL);
          if ( Component_srcLineSprite )
          {
            CommonEffectLoadComponent__Init_18177092(
              Component_srcLineSprite,
              v36,
              param,
              callback,
              isSkip,
              isPause,
              flip,
              v43);
            return;
          }
        }
      }
    }
    goto LABEL_57;
  }
  v45 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v45 = CommonEffectManager_TypeInfo;
  }
  p_testEffectPrefab = (UnityEngine_Object_o **)&v45->static_fields->testCharaBackEffectPrefab;
LABEL_38:
  v46 = *p_testEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _18183428 = 0LL;
  if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
  {
    if ( !v46 )
      goto LABEL_57;
    name = UnityEngine_Object__get_name(v46, 0LL);
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    v54.fields.x = x;
    v54.fields.y = y;
    v54.fields.z = z;
    _18183428 = (UnityEngine_Object_o *)CommonEffectManager__Create_18183428(
                                          parent,
                                          name,
                                          (UnityEngine_GameObject_o *)v46,
                                          v54,
                                          0,
                                          flip,
                                          v48);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v50 = UnityEngine_Object__op_Inequality(_18183428, 0LL, 0LL);
  if ( !param || !v50 )
    goto LABEL_54;
  if ( !_18183428 )
LABEL_57:
    sub_B170D4();
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppObject *, const char *))_18183428->klass[1]._1.gc_desc)(
    _18183428,
    param,
    _18183428->klass[1]._1.name);
LABEL_54:
  if ( callback )
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, (CommonEffectComponent_o *)_18183428, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__LoadSkinEffects(
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40F65A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, *(_QWORD *)&loadParallelMax);
    byte_40F65A2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonEffectManager__LoadSkinEffectsLocal((CommonEffectManager_o *)Instance, callback, loadParallelMax, v6);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  AssetManager_o *Instance; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  AssetLoader_LoadEndDataHandler_o *v42; // x23
  int v43; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F659E & 1) == 0 )
  {
    sub_B16FFC(&Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__, callback);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    byte_40F659E = 1;
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
  v43 = UiFlag + 1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v18 = System_String__Format(skinEffectAssetStoragePath, v17, 0LL);
  if ( System_String__op_Equality(v18, this->fields.loadedSkinAssetName, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    CommonEffectManager__ReleaseSkinEffectsLocal(this, v19);
    this->fields.callbackAfterSkinLoad = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackAfterSkinLoad,
      (System_Int32_array **)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v30 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                          System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                                          v26,
                                                                                          v27,
                                                                                          v28,
                                                                                          v29);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v30,
      (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    this->fields.skinedEffects = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v30;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.skinedEffects,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v42 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v38, v39, v40, v41);
    AssetLoader_LoadEndDataHandler___ctor(
      v42,
      (Il2CppObject *)this,
      Method_CommonEffectManager__LoadSkinEffectsLocal_b__49_0__,
      0LL);
    if ( !Instance )
      sub_B170D4();
    AssetManager__LoadAssetStorage(Instance, v18, v42, loadParallelMax, 0LL);
  }
}


void __fastcall CommonEffectManager__Reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40F659D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_40F659D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonEffectManager__ReleaseSkinEffectsLocal((CommonEffectManager_o *)Instance, v3);
}


void __fastcall CommonEffectManager__ReleaseSkinEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40F65A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, v1);
    byte_40F65A3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **p_skinedEffects; // x20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o **p_loadedSkinAssetName; // x19
  struct System_String_o *loadedSkinAssetName; // t1
  AssetManager_o *Instance; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F659F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v9);
    byte_40F659F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  p_skinedEffects = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&this->fields.skinedEffects;
  skinedEffects = this->fields.skinedEffects;
  if ( skinedEffects )
  {
    Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)skinedEffects,
               (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    if ( !Values )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v29,
      Values,
      (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v29,
              (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
    {
      currentValue = v29.fields.currentValue;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)currentValue, 0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v29,
      (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    if ( !*p_skinedEffects )
      goto LABEL_17;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      *p_skinedEffects,
      (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    *p_skinedEffects = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.skinedEffects, 0LL, v14, v15, v16, v17, v18, v19);
  }
  loadedSkinAssetName = this->fields.loadedSkinAssetName;
  p_loadedSkinAssetName = &this->fields.loadedSkinAssetName;
  if ( !loadedSkinAssetName )
    return;
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_B170D4();
  AssetManager__ReleaseAssetStorage(Instance, *p_loadedSkinAssetName, 0LL);
  *p_loadedSkinAssetName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_loadedSkinAssetName, 0LL, v23, v24, v25, v26, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v8; // w21
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v11; // x22
  WebViewObject_o *Component_WebViewObject; // x23
  WebViewObject_o *v13; // x22
  const MethodInfo *v14; // x2

  if ( (byte_40F6592 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, isSkip);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F6592 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_26:
      sub_B170D4();
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v9 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( v9 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v8, 0LL);
        if ( Child )
        {
          v11 = Child;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      Child,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
          {
            if ( !Component_WebViewObject )
              goto LABEL_26;
            LOBYTE(Component_WebViewObject->fields.onLoaded) = isSkip;
            BYTE1(Component_WebViewObject->fields.onLoaded) = 0;
          }
          else
          {
            v13 = UnityEngine_Component__GetComponent_WebViewObject_(
                    v11,
                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
            {
              if ( !v13 )
                goto LABEL_26;
              CommonEffectComponent__Resume((CommonEffectComponent_o *)v13, isSkip, v14);
            }
          }
          ++v8;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_26;
    }
  }
}


void __fastcall CommonEffectManager__Resume_18188576(
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
  System_String_o *v13; // x21
  UnityEngine_Transform_o *transform; // x0
  int32_t v15; // w22
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v18; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  CommonEffectComponent_o *v20; // x23
  const MethodInfo *v21; // x2

  if ( (byte_40F6593 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F6593 = 1;
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
      if ( !parent || (v13 = AssetName, (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL) )
LABEL_34:
        sub_B170D4();
      v15 = 0;
      while ( v15 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        v16 = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !v16 )
          goto LABEL_34;
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v16, v15, 0LL);
        if ( !Child )
          goto LABEL_34;
        v18 = Child;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    Child,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
          goto LABEL_25;
        if ( !Component_WebViewObject || !v13 )
          goto LABEL_34;
        if ( System_String__Equals_43731072(v13, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
        {
          LOBYTE(Component_WebViewObject->fields.onLoaded) = isSkip;
          BYTE1(Component_WebViewObject->fields.onLoaded) = 0;
        }
        else
        {
LABEL_25:
          v20 = (CommonEffectComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             v18,
                                             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
          {
            if ( !v20 || !v13 )
              goto LABEL_34;
            if ( System_String__Equals_43731072(v13, v20->fields.baseName, 0LL) )
              CommonEffectComponent__Resume(v20, isSkip, v21);
          }
        }
        ++v15;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( !transform )
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
  const MethodInfo *v6; // x3

  if ( (byte_40F65A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent);
    byte_40F65A5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CommonEffectManager__SetSkinEffectLocal((CommonEffectManager_o *)Instance, effects, parent, v6);
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
  UnityEngine_Component_o *transform; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F65A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effect);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F65A1 = 1;
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
             (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__) )
      {
        v11 = value;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v12 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)v11,
                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !parent
          || (v9 = (UnityEngine_GameObject_o *)v12,
              transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL),
              GameObjectExtensions__SafeSetParent(v9, transform, 0LL),
              !v9) )
        {
          sub_B170D4();
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
  const MethodInfo *v8; // x4

  if ( (byte_40F65A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__, parent);
    byte_40F65A4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonEffectManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonEffectManager__SetSkinEffectsLocal((CommonEffectManager_o *)Instance, effects, parent, doSetDepthZero, v8);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *skinedEffects; // x0
  System_Xml_Schema_XmlSchemaObject_o *v15; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x23
  UnityEngine_Component_o *transform; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_40F65A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, effects);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    this = (CommonEffectManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F65A0 = 1;
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
            sub_B17100(this, effects, parent);
            sub_B170A0();
          }
          skinedEffects = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.skinedEffects;
          if ( !skinedEffects )
            break;
          this = (CommonEffectManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            skinedEffects,
                                            (System_Xml_XmlQualifiedName_o *)effects->m_Items[v13],
                                            &value,
                                            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v15 = value;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v16 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                    (UnityEngine_UI_Dropdown_DropdownItem_o *)v15,
                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !parent )
              break;
            v17 = (UnityEngine_GameObject_o *)v16;
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
            GameObjectExtensions__SafeSetParent(v17, transform, 0LL);
            if ( !v17 )
              break;
            UnityEngine_GameObject__SetActive(v17, 1, 0LL);
            if ( doSetDepthZero )
            {
              ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            v17,
                                                            (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
              if ( !ComponentInChildren_Dropdown_DropdownItem )
                break;
              UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            }
          }
          LODWORD(v12) = effects->max_length;
          if ( (__int64)++v13 >= (int)v12 )
            return;
        }
        sub_B170D4();
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CommonEffectManager_c *v12; // x0
  struct CommonEffectManager_StaticFields *static_fields; // x0
  struct CommonEffectManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CommonEffectManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct CommonEffectManager_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40F659B & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, backEffectPrefab);
    byte_40F659B = 1;
  }
  v12 = CommonEffectManager_TypeInfo;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    v12 = CommonEffectManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->testEffectPrefab = effectPrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->testEffectPrefab,
    (System_Int32_array **)effectPrefab,
    (System_String_array **)charaEffectPrefab,
    (System_String_array **)charaBackEffectPrefab,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v14 = CommonEffectManager_TypeInfo->static_fields;
  v14->testBackEffectPrefab = backEffectPrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v14->testBackEffectPrefab,
    (System_Int32_array **)backEffectPrefab,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = CommonEffectManager_TypeInfo->static_fields;
  v21->testCharaEffectPrefab = charaEffectPrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v21->testCharaEffectPrefab,
    (System_Int32_array **)charaEffectPrefab,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = CommonEffectManager_TypeInfo->static_fields;
  v28->testCharaBackEffectPrefab = charaBackEffectPrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v28->testCharaBackEffectPrefab,
    (System_Int32_array **)charaBackEffectPrefab,
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

  if ( (byte_40F6594 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, isSkip);
    byte_40F6594 = 1;
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
  const MethodInfo *v12; // x1
  bool v13; // w27
  UnityEngine_Transform_o *transform; // x0
  int32_t v15; // w23
  bool v16; // w28
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v19; // x24
  WebViewObject_o *Component_WebViewObject; // x25
  const MethodInfo *v21; // x1
  WebViewObject_o *v22; // x24
  UnityEngine_Object_o *gameObject; // x24
  WebViewObject_c *klass; // x8

  if ( (byte_40F6598 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, parent);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F6598 = 1;
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
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      effectName = CommonEffectManager__GetAssetName(effectName, v12);
    }
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_48:
      sub_B170D4();
    v15 = 0;
    v16 = isSkip || isLoadStop;
    v13 = 1;
    while ( 1 )
    {
      if ( v15 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
        return v13;
      v17 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v17 )
        goto LABEL_48;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v17, v15, 0LL);
      if ( !Child )
        goto LABEL_48;
      v19 = Child;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  Child,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectLoadComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
        goto LABEL_29;
      if ( !effectName )
        goto LABEL_26;
      if ( !Component_WebViewObject )
        goto LABEL_48;
      if ( System_String__Equals_43731072(effectName, (System_String_o *)Component_WebViewObject->fields.onJS, 0LL) )
      {
LABEL_26:
        if ( v16 )
        {
          if ( !Component_WebViewObject )
            goto LABEL_48;
          CommonEffectLoadComponent__Stop((CommonEffectLoadComponent_o *)Component_WebViewObject, v21);
        }
        else
        {
          v13 = 0;
        }
      }
      else
      {
LABEL_29:
        v22 = UnityEngine_Component__GetComponent_WebViewObject_(
                v19,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
        {
          if ( effectName )
          {
            if ( !v22 )
              goto LABEL_48;
            if ( !System_String__Equals_43731072(effectName, *(System_String_o **)&v22->fields.visibility, 0LL) )
              goto LABEL_47;
          }
          else if ( !v22 )
          {
            goto LABEL_48;
          }
          if ( isSkip )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v22,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
          }
          else
          {
            klass = v22->klass;
            if ( force )
              ((void (__fastcall *)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))klass[1]._1.castClass)(
                v22,
                1LL,
                0LL,
                klass[1]._1.declaringType);
            else
              (*(void (__fastcall **)(WebViewObject_o *, __int64, _QWORD, Il2CppClass *))&klass[1]._1.this_arg.bits)(
                v22,
                1LL,
                0LL,
                klass[1]._1.element_class);
          }
        }
      }
LABEL_47:
      ++v15;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_48;
    }
  }
  return 1;
}


bool __fastcall CommonEffectManager__Stop_18190032(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        bool isLoadStop,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_40F6595 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, effectName);
    byte_40F6595 = 1;
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
  __int64 UiFlag; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_String_array *EffectName; // x23
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  System_String_o *v16; // x21
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  System_Xml_Schema_XmlSchemaObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_o *name; // x1

  if ( (byte_40F65A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v8);
    byte_40F65A9 = 1;
  }
  skinEffectLoadLists = this->fields.skinEffectLoadLists;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  UiFlag = ServantCommentManager__GetUiFlag(0LL);
  if ( !skinEffectLoadLists )
    goto LABEL_26;
  if ( (unsigned int)UiFlag >= skinEffectLoadLists->max_length )
    goto LABEL_27;
  EffectName = skinEffectLoadLists->m_Items[(int)UiFlag].fields.EffectName;
  if ( !EffectName )
    goto LABEL_26;
  v14 = *(_QWORD *)&EffectName->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    while ( v15 < (unsigned int)v14 )
    {
      if ( !data )
        goto LABEL_26;
      v16 = EffectName->m_Items[v15];
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 data,
                                                                 v16,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UiFlag = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( (UiFlag & 1) == 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v18 = (System_Xml_Schema_XmlSchemaObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this->fields.skinedEffects )
          goto LABEL_26;
        v19 = (UnityEngine_GameObject_o *)v18;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.skinedEffects,
          (System_Xml_XmlQualifiedName_o *)v16,
          v18,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
        GameObjectExtensions__SafeSetParent(v19, (UnityEngine_Component_o *)this, 0LL);
        if ( !v19 )
          goto LABEL_26;
        UnityEngine_GameObject__SetActive(v19, 0, 0LL);
      }
      LODWORD(v14) = EffectName->max_length;
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_24;
    }
LABEL_27:
    sub_B17100(UiFlag, v11, v12);
    sub_B170A0();
  }
LABEL_24:
  ActionExtensions__Call(this->fields.callbackAfterSkinLoad, 0LL);
  this->fields.callbackAfterSkinLoad = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackAfterSkinLoad, 0LL, v20, v21, v22, v23, v24, v25);
  if ( !data )
LABEL_26:
    sub_B170D4();
  name = data->fields.name;
  this->fields.loadedSkinAssetName = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadedSkinAssetName,
    (System_Int32_array **)name,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}