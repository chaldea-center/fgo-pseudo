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
  __int64 v19; // x1
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Component_o *parent; // x24
  UnityEngine_Texture2D_o *Object_Texture2D; // x25
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x20
  CommonEffectComponent_o *Component_srcLineSprite; // x19
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *v28; // x23
  UnityEngine_Transform_o *v29; // x0
  const MethodInfo *v30; // x1
  int32_t flip; // w25
  float x; // s8
  float y; // s9
  float z; // s10
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s3
  float v39; // s11
  float v40; // s12
  float v41; // s13
  float v42; // s14
  UnityEngine_Transform_o *v43; // x1
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  float v46; // s11
  UnityEngine_Transform_o *v47; // x0
  float v48; // s12
  UnityEngine_Transform_o *v49; // x0
  const MethodInfo *v50; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *v55; // x24
  UnityEngine_Renderer_o *v56; // x0
  UnityEngine_Material_o *material; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v59; // x0
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *v61; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F6579 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject___, data);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v5);
    sub_B16FFC(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___, v6);
    sub_B16FFC(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___, v7);
    sub_B16FFC(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___, v8);
    sub_B16FFC(&Method_GameObjectExtensions_HasComponent_Renderer___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_16123/*"_threeValue2"*/, v14);
    sub_B16FFC(&StringLiteral_16127/*"_twoValue0"*/, v15);
    sub_B16FFC(&StringLiteral_16128/*"_twoValue1"*/, v16);
    sub_B16FFC(&StringLiteral_16118/*"_threeValue0"*/, v17);
    sub_B16FFC(&StringLiteral_16119/*"_threeValue1"*/, v18);
    sub_B16FFC(&StringLiteral_16099/*"_oneValue"*/, v19);
    byte_40F6579 = 1;
  }
  if ( this->fields.isEnable )
  {
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(transform, 0LL, 0LL) )
    {
      v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v21 )
        sub_B170D4();
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v21, 0LL);
    }
    else
    {
      parent = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    {
      if ( !data )
        sub_B170D4();
      Object_Texture2D = AssetData__GetObject_Texture2D_(
                           data,
                           (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_GameObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_Texture2D,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v25 = v24;
      if ( !v24 )
        sub_B170D4();
      Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v24,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v27 = UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !Object_Texture2D )
        sub_B170D4();
      v28 = v27;
      v29 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_Texture2D, 0LL);
      if ( !v29 )
        sub_B170D4();
      localScale = UnityEngine_Transform__get_localScale(v29, 0LL);
      flip = this->fields.flip;
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      *(UnityEngine_Quaternion_o *)&v35 = CommonEffectManager__GetFlipQuaternion(flip, v30);
      if ( !parent )
        sub_B170D4();
      v39 = v35;
      v40 = v36;
      v41 = v37;
      v42 = v38;
      v43 = UnityEngine_Component__get_transform(parent, 0LL);
      if ( !v28 )
        sub_B170D4();
      UnityEngine_Transform__set_parent(v28, v43, 0LL);
      v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v44 )
        sub_B170D4();
      localPosition = UnityEngine_Transform__get_localPosition(v44, 0LL);
      UnityEngine_Transform__set_localPosition(v28, localPosition, 0LL);
      v66.fields.x = v39;
      v66.fields.y = v40;
      v66.fields.z = v41;
      v66.fields.w = v42;
      UnityEngine_Transform__set_localRotation(v28, v66, 0LL);
      v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v45 )
        sub_B170D4();
      LODWORD(v46) = (unsigned int)UnityEngine_Transform__get_localScale(v45, 0LL);
      v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v47 )
        sub_B170D4();
      v64 = UnityEngine_Transform__get_localScale(v47, 0LL);
      v48 = v64.fields.y;
      v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v49 )
        sub_B170D4();
      v65 = UnityEngine_Transform__get_localScale(v49, 0LL);
      v65.fields.x = x * v46;
      v65.fields.y = y * v48;
      v65.fields.z = z * v65.fields.z;
      UnityEngine_Transform__set_localScale(v28, v65, 0LL);
      if ( !Component_srcLineSprite )
        sub_B170D4();
      CommonEffectComponent__Init_18168244(
        Component_srcLineSprite,
        data,
        this->fields.isSkip,
        this->fields.isPause,
        v50);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_srcLineSprite->klass->vtable._4_SetParam.method)(Component_srcLineSprite);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v25, 0LL);
        if ( !gameObject )
          sub_B170D4();
        v59 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v59 )
          sub_B170D4();
        if ( i >= UnityEngine_Transform__get_childCount(v59, 0LL) )
          break;
        v52 = UnityEngine_GameObject__get_gameObject(v25, 0LL);
        if ( !v52 )
          sub_B170D4();
        v53 = UnityEngine_GameObject__get_transform(v52, 0LL);
        if ( !v53 )
          sub_B170D4();
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v53, i, 0LL);
        if ( !Child )
          sub_B170D4();
        v55 = UnityEngine_Component__get_gameObject(Child, 0LL);
        if ( GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
               v55,
               (const MethodInfo_19D2058 *)Method_GameObjectExtensions_HasComponent_Renderer___) )
        {
          if ( !v55 )
            sub_B170D4();
          v56 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v55,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v56 )
            sub_B170D4();
          material = UnityEngine_Renderer__get_material(v56, 0LL);
          if ( GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                 v55,
                 (const MethodInfo_19D2058 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___) )
          {
            if ( !material )
              sub_B170D4();
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16099/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16099/*"_oneValue"*/, 0.0, 0LL);
          }
          if ( GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                 v55,
                 (const MethodInfo_19D2058 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___) )
          {
            if ( !material )
              sub_B170D4();
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16127/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16128/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16127/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16128/*"_twoValue1"*/, 0.0, 0LL);
          }
          if ( GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                 v55,
                 (const MethodInfo_19D2058 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___) )
          {
            if ( !material )
              sub_B170D4();
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16118/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16119/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16123/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16118/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16119/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16123/*"_threeValue2"*/, 0.0, 0LL);
          }
        }
      }
      this->fields.isEnable = 0;
      loadCallback = this->fields.loadCallback;
      if ( loadCallback )
        CommonEffectLoadComponent_LoadEndHandler__Invoke(loadCallback, Component_srcLineSprite, 0LL);
    }
    v61 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v61, 0LL);
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

  CommonEffectLoadComponent__Init_18177092(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent__Init_18177092(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        Il2CppObject *param,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  Il2CppObject **p_param; // x25
  const MethodInfo *v15; // x2

  this->fields.param = param;
  p_param = &this->fields.param;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.param,
    (System_Int32_array **)param,
    (System_String_array **)param,
    (System_String_array **)callback,
    (System_Boolean_array **)isSkip,
    (System_Int32_array **)isPause,
    *(System_Int32_array **)&flip,
    (System_Int32_array *)method);
  *((_BYTE *)p_param + 8) = isSkip;
  *((_BYTE *)p_param + 9) = isPause;
  *((_DWORD *)p_param + 3) = flip;
  if ( callback )
    CommonEffectLoadComponent__add_loadCallback(this, callback, v15);
  if ( this->fields.isInit )
  {
    if ( this->fields.isEnable )
      return;
    goto LABEL_5;
  }
  if ( this->fields.isEnable )
  {
    if ( !callback )
      return;
    goto LABEL_9;
  }
  CommonEffectLoadComponent__Init_18177312(this, filename, v15);
  if ( !this->fields.isInit )
  {
LABEL_5:
    if ( !callback )
      return;
LABEL_9:
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, 0LL, 0LL);
  }
}


void __fastcall CommonEffectLoadComponent__Init_18177312(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  UnityEngine_Object_o *v22; // x19

  if ( (byte_40F6578 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, filename);
    sub_B16FFC(&Method_CommonEffectLoadComponent_EndLoad__, v10);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_5853/*"EffectLoad("*/, v13);
    sub_B16FFC(&StringLiteral_651/*")"*/, v14);
    byte_40F6578 = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.effectName,
      (System_Int32_array **)filename,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16 = System_String__Concat_43746016(
            (System_String_o *)StringLiteral_5853/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_651/*")"*/,
            0LL);
    if ( !gameObject )
      sub_B170D4();
    UnityEngine_Object__set_name(gameObject, v16, 0LL);
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19, v20);
    AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(filename, v21, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v22, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_40F657B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40F657B = 1;
  }
  if ( this->fields.isEnable )
  {
    this->fields.isEnable = 0;
    effectName = this->fields.effectName;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
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
    CommonEffectLoadComponent__Init_18177312(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *effectName; // x20
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F657A & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F657A = 1;
  }
  if ( !this->fields.isEnable )
    return 0;
  this->fields.isEnable = 0;
  effectName = this->fields.effectName;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(effectName, 0LL);
  loadCallback = this->fields.loadCallback;
  if ( loadCallback )
    CommonEffectLoadComponent_LoadEndHandler__Invoke(loadCallback, 0LL, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  return 1;
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

  if ( (byte_40F6576 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_40F6576 = 1;
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
    v9 = sub_B0BA14(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CommonEffectLoadComponent_o *)sub_B173C8(v8);
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

  if ( (byte_40F6577 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_40F6577 = 1;
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
    v9 = sub_B0BA14(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CommonEffectLoadComponent_o *)sub_B173C8(v8);
  CommonEffectLoadComponent__get_EffectName(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent_LoadEndHandler___ctor(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CommonEffectLoadComponent_LoadEndHandler__BeginInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        CommonEffectComponent_o *effect,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)effect;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__Invoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CommonEffectLoadComponent_LoadEndHandler_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  CommonEffectComponent_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(CommonEffectComponent_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, CommonEffectComponent_o *, _QWORD); // x0
  CommonEffectLoadComponent_LoadEndHandler_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(CommonEffectComponent_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  CommonEffectComponent_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  CommonEffectLoadComponent_LoadEndHandler_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CommonEffectLoadComponent_LoadEndHandler_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(CommonEffectComponent_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, effect, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = effect->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&effect->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&effect->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(effect, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&effect->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(CommonEffectComponent_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(effect, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = effect->klass;
                if ( *(_WORD *)&effect->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&effect->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(effect, class_0, v9);
                }
                (*(void (__fastcall **)(CommonEffectComponent_o *, _QWORD))v14)(effect, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(CommonEffectComponent_o *, _QWORD))&effect->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  effect,
                  *((_QWORD *)&effect->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(effect, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, effect, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))v21)(
                v29,
                effect,
                *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))(*v29
                                                                                   + 16LL
                                                                                   * *(unsigned __int16 *)(v28 + 72)
                                                                                   + 312))(
                v29,
                effect,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, CommonEffectComponent_o *, __int64))v30)(v29, effect, v28);
    }
  }
}