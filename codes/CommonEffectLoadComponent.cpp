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
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Transform_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Object_object; // x25
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x23
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  float x; // s8
  float y; // s9
  int32_t flip; // w25
  float z; // s10
  __int64 v24; // x0
  __int64 v25; // x1
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s3
  float v30; // s11
  float v31; // s12
  float v32; // s13
  float v33; // s14
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_Transform_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x1
  float v39; // s11
  UnityEngine_Transform_o *v40; // x0
  __int64 v41; // x1
  float v42; // s12
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  const MethodInfo *v46; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v49; // x1
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x1
  UnityEngine_GameObject_o *v52; // x0
  __int64 v53; // x1
  UnityEngine_Transform_o *v54; // x0
  __int64 v55; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v57; // x1
  UnityEngine_GameObject_o *v58; // x24
  _BOOL8 HasComponent_object; // x0
  __int64 v60; // x1
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v64; // x0
  __int64 v65; // x1
  _BOOL8 v66; // x0
  __int64 v67; // x1
  _BOOL8 v68; // x0
  __int64 v69; // x1
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *v71; // x20
  CommonEffectComponent_o *Component_object; // [xsp+0h] [xbp-B0h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDD95B & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject___);
    sub_1C21E38(&CommonEffectManager_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
    sub_1C21E38(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
    sub_1C21E38(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
    sub_1C21E38(&Method_GameObjectExtensions_HasComponent_Renderer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16864/*"_threeValue2"*/);
    sub_1C21E38(&StringLiteral_16868/*"_twoValue0"*/);
    sub_1C21E38(&StringLiteral_16869/*"_twoValue1"*/);
    sub_1C21E38(&StringLiteral_16859/*"_threeValue0"*/);
    sub_1C21E38(&StringLiteral_16860/*"_threeValue1"*/);
    sub_1C21E38(&StringLiteral_16841/*"_oneValue"*/);
    byte_4BDD95B = 1;
  }
  if ( this->fields.isEnable )
  {
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(transform, 0LL, 0LL) )
    {
      v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v5 )
        sub_1C22094(0LL, v6);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v5, 0LL);
    }
    else
    {
      parent = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( v8 )
    {
      if ( !data )
        sub_1C22094(v8, v9);
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_2F91DC0 *)Method_AssetData_GetObject_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__Instantiate_object_(
              Object_object,
              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v13 = (UnityEngine_GameObject_o *)v11;
      if ( !v11 )
        sub_1C22094(0LL, v12);
      Component_object = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v11,
                                                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v14 = UnityEngine_GameObject__get_transform(v13, 0LL);
      if ( !Object_object )
        sub_1C22094(v14, v15);
      v16 = v14;
      v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_object, 0LL);
      if ( !v17 )
        sub_1C22094(0LL, v18);
      localScale = UnityEngine_Transform__get_localScale(v17, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      flip = this->fields.flip;
      z = localScale.fields.z;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      *(UnityEngine_Quaternion_o *)&v26 = CommonEffectManager__GetFlipQuaternion(flip, v19);
      if ( !parent )
        sub_1C22094(v24, v25);
      v30 = v26;
      v31 = v27;
      v32 = v28;
      v33 = v29;
      v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
      if ( !v16 )
        sub_1C22094(v34, v34);
      UnityEngine_Transform__set_parent(v16, v34, 0LL);
      v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v35 )
        sub_1C22094(0LL, v36);
      localPosition = UnityEngine_Transform__get_localPosition(v35, 0LL);
      UnityEngine_Transform__set_localPosition(v16, localPosition, 0LL);
      v78.fields.x = v30;
      v78.fields.y = v31;
      v78.fields.z = v32;
      v78.fields.w = v33;
      UnityEngine_Transform__set_localRotation(v16, v78, 0LL);
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v37 )
        sub_1C22094(0LL, v38);
      LODWORD(v39) = (unsigned int)UnityEngine_Transform__get_localScale(v37, 0LL);
      v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v40 )
        sub_1C22094(0LL, v41);
      v76 = UnityEngine_Transform__get_localScale(v40, 0LL);
      v42 = v76.fields.y;
      v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v43 )
        sub_1C22094(0LL, v44);
      v77 = UnityEngine_Transform__get_localScale(v43, 0LL);
      v77.fields.x = x * v39;
      v77.fields.y = y * v42;
      v77.fields.z = z * v77.fields.z;
      UnityEngine_Transform__set_localScale(v16, v77, 0LL);
      if ( !Component_object )
        sub_1C22094(0LL, v45);
      CommonEffectComponent__Init_41927148(Component_object, data, this->fields.isSkip, this->fields.isPause, v46);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_object->klass->vtable._4_SetParam.method)(Component_object);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v13, 0LL);
        if ( !gameObject )
          sub_1C22094(0LL, v49);
        v50 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v50 )
          sub_1C22094(0LL, v51);
        if ( i >= UnityEngine_Transform__get_childCount(v50, 0LL) )
          break;
        v52 = UnityEngine_GameObject__get_gameObject(v13, 0LL);
        if ( !v52 )
          sub_1C22094(0LL, v53);
        v54 = UnityEngine_GameObject__get_transform(v52, 0LL);
        if ( !v54 )
          sub_1C22094(0LL, v55);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v54, i, 0LL);
        if ( !Child )
          sub_1C22094(0LL, v57);
        v58 = UnityEngine_Component__get_gameObject(Child, 0LL);
        HasComponent_object = GameObjectExtensions__HasComponent_object_(
                                v58,
                                (const MethodInfo_3001E54 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_object )
        {
          if ( !v58 )
            sub_1C22094(HasComponent_object, v60);
          v61 = UnityEngine_GameObject__GetComponent_object_(
                  v58,
                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v61 )
            sub_1C22094(0LL, v62);
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v61, 0LL);
          v64 = GameObjectExtensions__HasComponent_object_(
                  v58,
                  (const MethodInfo_3001E54 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v64 )
          {
            if ( !material )
              sub_1C22094(v64, v65);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16841/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16841/*"_oneValue"*/, 0.0, 0LL);
          }
          v66 = GameObjectExtensions__HasComponent_object_(
                  v58,
                  (const MethodInfo_3001E54 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v66 )
          {
            if ( !material )
              sub_1C22094(v66, v67);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16868/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16869/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16868/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16869/*"_twoValue1"*/, 0.0, 0LL);
          }
          v68 = GameObjectExtensions__HasComponent_object_(
                  v58,
                  (const MethodInfo_3001E54 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v68 )
          {
            if ( !material )
              sub_1C22094(v68, v69);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16859/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16860/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16864/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16859/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16860/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16864/*"_threeValue2"*/, 0.0, 0LL);
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
    v71 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v71, 0LL);
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

  CommonEffectLoadComponent__Init_41939332(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent__Init_41939332(
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
  sub_1C21DDC(
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
  CommonEffectLoadComponent__Init_41939536(this, filename, v15);
  if ( callback && !this->fields.isInit )
    goto LABEL_12;
}


void __fastcall CommonEffectLoadComponent__Init_41939536(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  UnityEngine_Object_o *v14; // x19

  if ( (byte_4BDD95A & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_CommonEffectLoadComponent_EndLoad__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6032/*"EffectLoad("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    byte_4BDD95A = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.effectName,
      (int64_t)filename,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11 = System_String__Concat_63126736(
            (System_String_o *)StringLiteral_6032/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_812/*")"*/,
            0LL);
    if ( !gameObject )
      sub_1C22094(v11, v12);
    UnityEngine_Object__set_name(gameObject, v11, 0LL);
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(filename, v13, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v14, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_4BDD95D & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDD95D = 1;
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
    CommonEffectLoadComponent__Init_41939536(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isEnable; // w21
  System_String_o *effectName; // x20
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BDD95C & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDD95C = 1;
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
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
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

  if ( (byte_4BDD958 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_4BDD958 = 1;
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
    v9 = sub_1C5D328(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
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

  if ( (byte_4BDD959 & 1) == 0 )
  {
    sub_1C21E38(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_4BDD959 = 1;
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
    v9 = sub_1C5D328(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A63EE4;
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
        v15 = sub_1C21EF0(v10);
        v16 = sub_1C223AC(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A63FE0;
          else
            v13 = (Il2CppObject *)sub_1A63FA4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A63F20;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A63EF4;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A63EC4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A63E7C;
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
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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