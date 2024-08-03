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
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v22; // x0
  Il2CppObject *Object_object; // x25
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Transform_o *v27; // x23
  UnityEngine_Transform_o *v28; // x0
  const MethodInfo *v29; // x1
  float x; // s8
  float y; // s9
  int32_t flip; // w25
  float z; // s10
  __int64 v34; // x0
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s3
  float v39; // s11
  float v40; // s12
  float v41; // s13
  float v42; // s14
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  float v46; // s11
  UnityEngine_Transform_o *v47; // x0
  float v48; // s12
  UnityEngine_Transform_o *v49; // x0
  const MethodInfo *v50; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *v57; // x24
  _BOOL8 HasComponent_object; // x0
  Il2CppObject *v59; // x0
  UnityEngine_Material_o *material; // x23
  _BOOL8 v61; // x0
  _BOOL8 v62; // x0
  _BOOL8 v63; // x0
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *v65; // x20
  CommonEffectComponent_o *Component_object; // [xsp+0h] [xbp-B0h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FD73F & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject___, data);
    sub_1B640C8(&CommonEffectManager_TypeInfo, v4);
    sub_1B640C8(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___, v5);
    sub_1B640C8(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___, v6);
    sub_1B640C8(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___, v7);
    sub_1B640C8(&Method_GameObjectExtensions_HasComponent_Renderer___, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v10);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_16515/*"_threeValue2"*/, v13);
    sub_1B640C8(&StringLiteral_16519/*"_twoValue0"*/, v14);
    sub_1B640C8(&StringLiteral_16520/*"_twoValue1"*/, v15);
    sub_1B640C8(&StringLiteral_16510/*"_threeValue0"*/, v16);
    sub_1B640C8(&StringLiteral_16511/*"_threeValue1"*/, v17);
    sub_1B640C8(&StringLiteral_16492/*"_oneValue"*/, v18);
    byte_49FD73F = 1;
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
        sub_1B64324(0LL);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v20, 0LL);
    }
    else
    {
      parent = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( v22 )
    {
      if ( !data )
        sub_1B64324(v22);
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_2E1B914 *)Method_AssetData_GetObject_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__Instantiate_object_(
              Object_object,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v25 = (UnityEngine_GameObject_o *)v24;
      if ( !v24 )
        sub_1B64324(0LL);
      Component_object = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v24,
                                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v26 = UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !Object_object )
        sub_1B64324(v26);
      v27 = v26;
      v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_object, 0LL);
      if ( !v28 )
        sub_1B64324(0LL);
      localScale = UnityEngine_Transform__get_localScale(v28, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      flip = this->fields.flip;
      z = localScale.fields.z;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      *(UnityEngine_Quaternion_o *)&v35 = CommonEffectManager__GetFlipQuaternion(flip, v29);
      if ( !parent )
        sub_1B64324(v34);
      v39 = v35;
      v40 = v36;
      v41 = v37;
      v42 = v38;
      v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
      if ( !v27 )
        sub_1B64324(v43);
      UnityEngine_Transform__set_parent(v27, v43, 0LL);
      v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v44 )
        sub_1B64324(0LL);
      localPosition = UnityEngine_Transform__get_localPosition(v44, 0LL);
      UnityEngine_Transform__set_localPosition(v27, localPosition, 0LL);
      v72.fields.x = v39;
      v72.fields.y = v40;
      v72.fields.z = v41;
      v72.fields.w = v42;
      UnityEngine_Transform__set_localRotation(v27, v72, 0LL);
      v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v45 )
        sub_1B64324(0LL);
      LODWORD(v46) = (unsigned int)UnityEngine_Transform__get_localScale(v45, 0LL);
      v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v47 )
        sub_1B64324(0LL);
      v70 = UnityEngine_Transform__get_localScale(v47, 0LL);
      v48 = v70.fields.y;
      v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v49 )
        sub_1B64324(0LL);
      v71 = UnityEngine_Transform__get_localScale(v49, 0LL);
      v71.fields.x = x * v46;
      v71.fields.y = y * v48;
      v71.fields.z = z * v71.fields.z;
      UnityEngine_Transform__set_localScale(v27, v71, 0LL);
      if ( !Component_object )
        sub_1B64324(0LL);
      CommonEffectComponent__Init_40305604(Component_object, data, this->fields.isSkip, this->fields.isPause, v50);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_object->klass->vtable._4_SetParam.method)(Component_object);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v25, 0LL);
        if ( !gameObject )
          sub_1B64324(0LL);
        v53 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v53 )
          sub_1B64324(0LL);
        if ( i >= UnityEngine_Transform__get_childCount(v53, 0LL) )
          break;
        v54 = UnityEngine_GameObject__get_gameObject(v25, 0LL);
        if ( !v54 )
          sub_1B64324(0LL);
        v55 = UnityEngine_GameObject__get_transform(v54, 0LL);
        if ( !v55 )
          sub_1B64324(0LL);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v55, i, 0LL);
        if ( !Child )
          sub_1B64324(0LL);
        v57 = UnityEngine_Component__get_gameObject(Child, 0LL);
        HasComponent_object = GameObjectExtensions__HasComponent_object_(
                                v57,
                                (const MethodInfo_2E897F8 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_object )
        {
          if ( !v57 )
            sub_1B64324(HasComponent_object);
          v59 = UnityEngine_GameObject__GetComponent_object_(
                  v57,
                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v59 )
            sub_1B64324(0LL);
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v59, 0LL);
          v61 = GameObjectExtensions__HasComponent_object_(
                  v57,
                  (const MethodInfo_2E897F8 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v61 )
          {
            if ( !material )
              sub_1B64324(v61);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16492/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16492/*"_oneValue"*/, 0.0, 0LL);
          }
          v62 = GameObjectExtensions__HasComponent_object_(
                  v57,
                  (const MethodInfo_2E897F8 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v62 )
          {
            if ( !material )
              sub_1B64324(v62);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16519/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16520/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16519/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16520/*"_twoValue1"*/, 0.0, 0LL);
          }
          v63 = GameObjectExtensions__HasComponent_object_(
                  v57,
                  (const MethodInfo_2E897F8 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v63 )
          {
            if ( !material )
              sub_1B64324(v63);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16510/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16511/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16515/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16510/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16511/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16515/*"_threeValue2"*/, 0.0, 0LL);
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
    v65 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v65, 0LL);
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

  CommonEffectLoadComponent__Init_40316332(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


void __fastcall CommonEffectLoadComponent__Init_40316332(
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.param,
    (int32_t)param,
    (int32_t)param,
    (int32_t)callback);
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
  CommonEffectLoadComponent__Init_40316536(this, filename, v15);
  if ( callback && !this->fields.isInit )
    goto LABEL_12;
}


void __fastcall CommonEffectLoadComponent__Init_40316536(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  UnityEngine_Object_o *v16; // x19

  if ( (byte_49FD73E & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, filename);
    sub_1B640C8(&Method_CommonEffectLoadComponent_EndLoad__, v6);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5849/*"EffectLoad("*/, v9);
    sub_1B640C8(&StringLiteral_815/*")"*/, v10);
    byte_49FD73E = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectName, (int32_t)filename, (int32_t)method, v3);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12 = System_String__Concat_61386656(
            (System_String_o *)StringLiteral_5849/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_815/*")"*/,
            0LL);
    if ( !gameObject )
      sub_1B64324(v12);
    UnityEngine_Object__set_name(gameObject, v12, 0LL);
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14);
    AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(filename, v15, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v16, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_49FD741 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FD741 = 1;
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
    CommonEffectLoadComponent__Init_40316536(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL4 isEnable; // w21
  System_String_o *effectName; // x20
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FD740 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FD740 = 1;
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
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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

  if ( (byte_49FD73C & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_49FD73C = 1;
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
    v9 = sub_1B9F5B8(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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

  if ( (byte_49FD73D & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_49FD73D = 1;
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
    v9 = sub_1B9F5B8(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  CommonEffectLoadComponent__get_EffectName(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent_LoadEndHandler___ctor(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19ACDAC;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B64180(v6);
        v12 = sub_1B6463C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19ACEA8;
          else
            v9 = (Il2CppObject *)sub_19ACE6C;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19ACDE8;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19ACDBC;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19ACD8C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19ACD44;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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