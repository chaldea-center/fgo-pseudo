void __fastcall CommonEffectLoadComponent___ctor(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent__EndLoad(
        CommonEffectLoadComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Transform_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *Object_object; // x25
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x20
  UnityEngine_Transform_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_Transform_o *v31; // x23
  UnityEngine_Transform_o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x1
  float x; // s8
  float y; // s9
  int32_t flip; // w25
  float z; // s10
  __int64 v39; // x0
  __int64 v40; // x1
  float v41; // s0
  float v42; // s1
  float v43; // s2
  float v44; // s3
  float v45; // s11
  float v46; // s12
  float v47; // s13
  float v48; // s14
  UnityEngine_Transform_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x1
  UnityEngine_Transform_o *v52; // x0
  __int64 v53; // x1
  float v54; // s11
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  float v57; // s12
  UnityEngine_Transform_o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x1
  const MethodInfo *v61; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v64; // x1
  UnityEngine_Transform_o *v65; // x0
  __int64 v66; // x1
  UnityEngine_GameObject_o *v67; // x0
  __int64 v68; // x1
  UnityEngine_Transform_o *v69; // x0
  __int64 v70; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v72; // x1
  UnityEngine_GameObject_o *v73; // x24
  _BOOL8 HasComponent_object; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x0
  __int64 v77; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v79; // x0
  __int64 v80; // x1
  _BOOL8 v81; // x0
  __int64 v82; // x1
  _BOOL8 v83; // x0
  __int64 v84; // x1
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *v86; // x20
  CommonEffectComponent_o *Component_object; // [xsp+0h] [xbp-B0h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B67FA5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject___, data);
    sub_1BE4ACC(&CommonEffectManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___, v5);
    sub_1BE4ACC(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___, v6);
    sub_1BE4ACC(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___, v7);
    sub_1BE4ACC(&Method_GameObjectExtensions_HasComponent_Renderer___, v8);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v10);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_16794/*"_threeValue2"*/, v13);
    sub_1BE4ACC(&StringLiteral_16798/*"_twoValue0"*/, v14);
    sub_1BE4ACC(&StringLiteral_16799/*"_twoValue1"*/, v15);
    sub_1BE4ACC(&StringLiteral_16789/*"_threeValue0"*/, v16);
    sub_1BE4ACC(&StringLiteral_16790/*"_threeValue1"*/, v17);
    sub_1BE4ACC(&StringLiteral_16771/*"_oneValue"*/, v18);
    byte_4B67FA5 = 1;
  }
  if ( this->fields.isEnable )
  {
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(transform, 0LL, 0LL) )
    {
      v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v20 )
        sub_1BE4D28(0LL, v21);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v20, 0LL);
    }
    else
    {
      parent = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v23 = UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( v23 )
    {
      if ( !data )
        sub_1BE4D28(v23, v24);
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_2F3B0CC *)Method_AssetData_GetObject_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__Instantiate_object_(
              Object_object,
              (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v28 = (UnityEngine_GameObject_o *)v26;
      if ( !v26 )
        sub_1BE4D28(0LL, v27);
      Component_object = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v26,
                                                      (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v29 = UnityEngine_GameObject__get_transform(v28, 0LL);
      if ( !Object_object )
        sub_1BE4D28(v29, v30);
      v31 = v29;
      v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_object, 0LL);
      if ( !v32 )
        sub_1BE4D28(0LL, v33);
      localScale = UnityEngine_Transform__get_localScale(v32, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      flip = this->fields.flip;
      z = localScale.fields.z;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      *(UnityEngine_Quaternion_o *)&v41 = CommonEffectManager__GetFlipQuaternion(flip, v34);
      if ( !parent )
        sub_1BE4D28(v39, v40);
      v45 = v41;
      v46 = v42;
      v47 = v43;
      v48 = v44;
      v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
      if ( !v31 )
        sub_1BE4D28(v49, v49);
      UnityEngine_Transform__set_parent(v31, v49, 0LL);
      v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v50 )
        sub_1BE4D28(0LL, v51);
      localPosition = UnityEngine_Transform__get_localPosition(v50, 0LL);
      UnityEngine_Transform__set_localPosition(v31, localPosition, 0LL);
      v93.fields.x = v45;
      v93.fields.y = v46;
      v93.fields.z = v47;
      v93.fields.w = v48;
      UnityEngine_Transform__set_localRotation(v31, v93, 0LL);
      v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v52 )
        sub_1BE4D28(0LL, v53);
      LODWORD(v54) = (unsigned int)UnityEngine_Transform__get_localScale(v52, 0LL);
      v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v55 )
        sub_1BE4D28(0LL, v56);
      v91 = UnityEngine_Transform__get_localScale(v55, 0LL);
      v57 = v91.fields.y;
      v58 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v58 )
        sub_1BE4D28(0LL, v59);
      v92 = UnityEngine_Transform__get_localScale(v58, 0LL);
      v92.fields.x = x * v54;
      v92.fields.y = y * v57;
      v92.fields.z = z * v92.fields.z;
      UnityEngine_Transform__set_localScale(v31, v92, 0LL);
      if ( !Component_object )
        sub_1BE4D28(0LL, v60);
      CommonEffectComponent__Init_41621100(Component_object, data, this->fields.isSkip, this->fields.isPause, v61);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_object->klass->vtable._4_SetParam.method)(Component_object);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v28, 0LL);
        if ( !gameObject )
          sub_1BE4D28(0LL, v64);
        v65 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v65 )
          sub_1BE4D28(0LL, v66);
        if ( i >= UnityEngine_Transform__get_childCount(v65, 0LL) )
          break;
        v67 = UnityEngine_GameObject__get_gameObject(v28, 0LL);
        if ( !v67 )
          sub_1BE4D28(0LL, v68);
        v69 = UnityEngine_GameObject__get_transform(v67, 0LL);
        if ( !v69 )
          sub_1BE4D28(0LL, v70);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v69, i, 0LL);
        if ( !Child )
          sub_1BE4D28(0LL, v72);
        v73 = UnityEngine_Component__get_gameObject(Child, 0LL);
        HasComponent_object = GameObjectExtensions__HasComponent_object_(
                                v73,
                                (const MethodInfo_2FAB0BC *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_object )
        {
          if ( !v73 )
            sub_1BE4D28(HasComponent_object, v75);
          v76 = UnityEngine_GameObject__GetComponent_object_(
                  v73,
                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v76 )
            sub_1BE4D28(0LL, v77);
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v76, 0LL);
          v79 = GameObjectExtensions__HasComponent_object_(
                  v73,
                  (const MethodInfo_2FAB0BC *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v79 )
          {
            if ( !material )
              sub_1BE4D28(v79, v80);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16771/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16771/*"_oneValue"*/, 0.0, 0LL);
          }
          v81 = GameObjectExtensions__HasComponent_object_(
                  v73,
                  (const MethodInfo_2FAB0BC *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v81 )
          {
            if ( !material )
              sub_1BE4D28(v81, v82);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16798/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16799/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16798/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16799/*"_twoValue1"*/, 0.0, 0LL);
          }
          v83 = GameObjectExtensions__HasComponent_object_(
                  v73,
                  (const MethodInfo_2FAB0BC *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v83 )
          {
            if ( !material )
              sub_1BE4D28(v83, v84);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16789/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16790/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16794/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16789/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16790/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16794/*"_threeValue2"*/, 0.0, 0LL);
          }
        }
      }
      loadCallback = this->fields.loadCallback;
      this->fields.isEnable = 0;
      if ( loadCallback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, CommonEffectComponent_o *, _QWORD))loadCallback->fields.m_target)(
          loadCallback->fields.original_method_info,
          Component_object,
          *(_QWORD *)&loadCallback->fields.extra_arg);
    }
    v86 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(v86, 0LL);
  }
}


void __fastcall CommonEffectLoadComponent__Init(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  CommonEffectLoadComponent__Init_41632116(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent__Init_41632116(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        Il2CppObject *param,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  Il2CppObject **p_param; // x23
  bool v13; // w24
  bool v14; // w25
  const MethodInfo *v15; // x2

  this->fields.param = param;
  p_param = &this->fields.param;
  v13 = isSkip;
  v14 = isPause;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.param,
    (int64_t)param,
    (int64_t)param,
    (int32_t)callback,
    (System_String_o *)isSkip,
    (BattleSetupInfo_o *)isPause,
    *(FollowerInfo_o **)&flip,
    (PartyListViewItem_o *)method);
  *((_BYTE *)p_param + 8) = v13;
  *((_BYTE *)p_param + 9) = v14;
  *((_DWORD *)p_param + 3) = flip;
  if ( callback )
    CommonEffectLoadComponent__add_loadCallback(this, callback, v15);
  if ( this->fields.isInit )
  {
    if ( !callback || this->fields.isEnable )
      return;
LABEL_12:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
    return;
  }
  if ( this->fields.isEnable )
  {
    if ( !callback )
      return;
    goto LABEL_12;
  }
  CommonEffectLoadComponent__Init_41632320(this, filename, v15);
  if ( callback && !this->fields.isInit )
    goto LABEL_12;
}


void __fastcall CommonEffectLoadComponent__Init_41632320(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  UnityEngine_Object_o *v19; // x19

  if ( (byte_4B67FA4 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, filename);
    sub_1BE4ACC(&Method_CommonEffectLoadComponent_EndLoad__, v10);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_6001/*"EffectLoad("*/, v13);
    sub_1BE4ACC(&StringLiteral_809/*")"*/, v14);
    byte_4B67FA4 = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.effectName,
      (int64_t)filename,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16 = System_String__Concat_62710068(
            (System_String_o *)StringLiteral_6001/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_809/*")"*/,
            0LL);
    if ( !gameObject )
      sub_1BE4D28(v16, v17);
    UnityEngine_Object__set_name(gameObject, v16, 0LL);
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(filename, v18, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(v19, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_4B67FA7 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    byte_4B67FA7 = 1;
  }
  if ( this->fields.isEnable )
  {
    this->fields.isEnable = 0;
    effectName = this->fields.effectName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(effectName, 0LL);
  }
}


void __fastcall CommonEffectLoadComponent__Resume(
        CommonEffectLoadComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  *(_WORD *)&this->fields.isSkip = isSkip;
}


void __fastcall CommonEffectLoadComponent__Start(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( !System_String__IsNullOrEmpty(this->fields.effectName, 0LL) )
    CommonEffectLoadComponent__Init_41632320(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL4 isEnable; // w21
  System_String_o *effectName; // x20
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B67FA6 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B67FA6 = 1;
  }
  isEnable = this->fields.isEnable;
  if ( this->fields.isEnable )
  {
    this->fields.isEnable = 0;
    effectName = this->fields.effectName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(effectName, 0LL);
    loadCallback = this->fields.loadCallback;
    if ( loadCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))loadCallback->fields.m_target)(
        loadCallback->fields.original_method_info,
        0LL,
        *(_QWORD *)&loadCallback->fields.extra_arg);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
  }
  return isEnable;
}


void __fastcall CommonEffectLoadComponent__add_loadCallback(
        CommonEffectLoadComponent_o *this,
        CommonEffectLoadComponent_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  struct CommonEffectLoadComponent_LoadEndHandler_o **p_loadCallback; // x20
  System_Delegate_o *v6; // x21
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CommonEffectLoadComponent_o *v11; // x0
  CommonEffectLoadComponent_LoadEndHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B67FA2 & 1) == 0 )
  {
    sub_1BE4ACC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_4B67FA2 = 1;
  }
  loadCallback = this->fields.loadCallback;
  p_loadCallback = &this->fields.loadCallback;
  v6 = (System_Delegate_o *)loadCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CommonEffectLoadComponent_LoadEndHandler_c *)v8->klass != CommonEffectLoadComponent_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  CommonEffectLoadComponent__remove_loadCallback(v11, v12, v13);
}


System_String_o *__fastcall CommonEffectLoadComponent__get_EffectName(
        CommonEffectLoadComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.effectName;
}


void __fastcall CommonEffectLoadComponent__remove_loadCallback(
        CommonEffectLoadComponent_o *this,
        CommonEffectLoadComponent_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  struct CommonEffectLoadComponent_LoadEndHandler_o **p_loadCallback; // x20
  System_Delegate_o *v6; // x21
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CommonEffectLoadComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B67FA3 & 1) == 0 )
  {
    sub_1BE4ACC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_4B67FA3 = 1;
  }
  loadCallback = this->fields.loadCallback;
  p_loadCallback = &this->fields.loadCallback;
  v6 = (System_Delegate_o *)loadCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CommonEffectLoadComponent_LoadEndHandler_c *)v8->klass != CommonEffectLoadComponent_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  CommonEffectLoadComponent__get_EffectName(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent_LoadEndHandler___ctor(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A278E0;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BE4B84(v10);
        v16 = sub_1BE5040(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A279DC;
          else
            v13 = (Il2CppObject *)sub_1A279A0;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A2791C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A278F0;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A278C0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A27878;
}


System_IAsyncResult_o *__fastcall CommonEffectLoadComponent_LoadEndHandler__BeginInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        CommonEffectComponent_o *effect,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = effect;
  return (System_IAsyncResult_o *)sub_1BE4A80(this, &v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__Invoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, CommonEffectComponent_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    effect,
    *(_QWORD *)&this->fields.extra_arg);
}