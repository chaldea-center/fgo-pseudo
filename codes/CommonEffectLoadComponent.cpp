void CommonEffectLoadComponent___ctor(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CommonEffectLoadComponent__EndLoad(CommonEffectLoadComponent_o *this, AssetData_o *data, const MethodInfo *method)
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
  int32_t flip; // w25
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Transform_o *v26; // x0
  __int64 v27; // x1
  float v28; // s11
  UnityEngine_Transform_o *v29; // x0
  __int64 v30; // x1
  float y; // s12
  UnityEngine_Transform_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  const MethodInfo *v35; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  UnityEngine_Transform_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v46; // x1
  UnityEngine_GameObject_o *v47; // x24
  _BOOL8 HasComponent_object; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v53; // x0
  __int64 v54; // x1
  _BOOL8 v55; // x0
  __int64 v56; // x1
  _BOOL8 v57; // x0
  __int64 v58; // x1
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *v60; // x20
  float z; // s2
  CommonEffectComponent_o *Component_object; // [xsp+0h] [xbp-B0h]
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Quaternion_o FlipQuaternion; // 0:kr10_16.16
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D32026 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject___);
    sub_1C93AD4(&CommonEffectManager_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
    sub_1C93AD4(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
    sub_1C93AD4(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
    sub_1C93AD4(&Method_GameObjectExtensions_HasComponent_Renderer___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16697/*"_threeValue2"*/);
    sub_1C93AD4(&StringLiteral_16701/*"_twoValue0"*/);
    sub_1C93AD4(&StringLiteral_16702/*"_twoValue1"*/);
    sub_1C93AD4(&StringLiteral_16692/*"_threeValue0"*/);
    sub_1C93AD4(&StringLiteral_16693/*"_threeValue1"*/);
    sub_1C93AD4(&StringLiteral_16673/*"_oneValue"*/);
    byte_4D32026 = 1;
  }
  if ( this->fields.isEnable )
  {
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(transform, 0, 0) )
    {
      v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v5 )
        sub_1C93D2C(0, v6);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v5, 0);
    }
    else
    {
      parent = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( v8 )
    {
      if ( !data )
        sub_1C93D2C(v8, v9);
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_3185994 *)Method_AssetData_GetObject_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__Instantiate_object_(
              Object_object,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v13 = (UnityEngine_GameObject_o *)v11;
      if ( !v11 )
        sub_1C93D2C(0, v12);
      Component_object = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v11,
                                                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v14 = UnityEngine_GameObject__get_transform(v13, 0);
      if ( !Object_object )
        sub_1C93D2C(v14, v15);
      v16 = v14;
      v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_object, 0);
      if ( !v17 )
        sub_1C93D2C(0, v18);
      localScale = UnityEngine_Transform__get_localScale(v17, 0);
      flip = this->fields.flip;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      FlipQuaternion = CommonEffectManager__GetFlipQuaternion(flip, v19);
      if ( !parent )
        sub_1C93D2C(v21, v22);
      v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
      if ( !v16 )
        sub_1C93D2C(v23, v23);
      UnityEngine_Transform__set_parent(v16, v23, 0);
      v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v24 )
        sub_1C93D2C(0, v25);
      localPosition = UnityEngine_Transform__get_localPosition(v24, 0);
      UnityEngine_Transform__set_localPosition(v16, localPosition, 0);
      UnityEngine_Transform__set_localRotation(v16, FlipQuaternion, 0);
      v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v26 )
        sub_1C93D2C(0, v27);
      LODWORD(v28) = (unsigned int)UnityEngine_Transform__get_localScale(v26, 0);
      v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v29 )
        sub_1C93D2C(0, v30);
      y = UnityEngine_Transform__get_localScale(v29, 0).fields.y;
      v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v32 )
        sub_1C93D2C(0, v33);
      z = UnityEngine_Transform__get_localScale(v32, 0).fields.z;
      v66.fields.x = localScale.fields.x * v28;
      v66.fields.y = localScale.fields.y * y;
      v66.fields.z = localScale.fields.z * z;
      UnityEngine_Transform__set_localScale(v16, v66, 0);
      if ( !Component_object )
        sub_1C93D2C(0, v34);
      CommonEffectComponent__Init_44413892(Component_object, data, this->fields.isSkip, this->fields.isPause, v35);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_object->klass->vtable._4_SetParam.methodPtr)(Component_object);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v13, 0);
        if ( !gameObject )
          sub_1C93D2C(0, v38);
        v39 = UnityEngine_GameObject__get_transform(gameObject, 0);
        if ( !v39 )
          sub_1C93D2C(0, v40);
        if ( i >= UnityEngine_Transform__get_childCount(v39, 0) )
          break;
        v41 = UnityEngine_GameObject__get_gameObject(v13, 0);
        if ( !v41 )
          sub_1C93D2C(0, v42);
        v43 = UnityEngine_GameObject__get_transform(v41, 0);
        if ( !v43 )
          sub_1C93D2C(0, v44);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v43, i, 0);
        if ( !Child )
          sub_1C93D2C(0, v46);
        v47 = UnityEngine_Component__get_gameObject(Child, 0);
        HasComponent_object = GameObjectExtensions__HasComponent_object_(
                                v47,
                                (const MethodInfo_31FD9A4 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_object )
        {
          if ( !v47 )
            sub_1C93D2C(HasComponent_object, v49);
          v50 = UnityEngine_GameObject__GetComponent_object_(
                  v47,
                  (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v50 )
            sub_1C93D2C(0, v51);
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v50, 0);
          v53 = GameObjectExtensions__HasComponent_object_(
                  v47,
                  (const MethodInfo_31FD9A4 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v53 )
          {
            if ( !material )
              sub_1C93D2C(v53, v54);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16673/*"_oneValue"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16673/*"_oneValue"*/, 0.0, 0);
          }
          v55 = GameObjectExtensions__HasComponent_object_(
                  v47,
                  (const MethodInfo_31FD9A4 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v55 )
          {
            if ( !material )
              sub_1C93D2C(v55, v56);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16701/*"_twoValue0"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16702/*"_twoValue1"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16701/*"_twoValue0"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16702/*"_twoValue1"*/, 0.0, 0);
          }
          v57 = GameObjectExtensions__HasComponent_object_(
                  v47,
                  (const MethodInfo_31FD9A4 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v57 )
          {
            if ( !material )
              sub_1C93D2C(v57, v58);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16692/*"_threeValue0"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16693/*"_threeValue1"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16697/*"_threeValue2"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16692/*"_threeValue0"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16693/*"_threeValue1"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16697/*"_threeValue2"*/, 0.0, 0);
          }
        }
      }
      loadCallback = this->fields.loadCallback;
      this->fields.isEnable = 0;
      if ( loadCallback )
        ((void (__fastcall *)(intptr_t, CommonEffectComponent_o *, intptr_t))loadCallback->fields.invoke_impl)(
          loadCallback->fields.method_code,
          Component_object,
          loadCallback->fields.method);
    }
    v60 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v60, 0);
  }
}


void CommonEffectLoadComponent__Init(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        CommonEffectLoadComponent_LoadEndHandler_o *callback,
        bool isSkip,
        bool isPause,
        int32_t flip,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  CommonEffectLoadComponent__Init_44426344(this, filename, 0, callback, isSkip, isPause, flip, v7);
}


// local variable allocation has failed, the output may be wrong!
void CommonEffectLoadComponent__Init_44426344(
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.param,
    (int32_t)param,
    (int32_t)param,
    (int32_t)callback,
    (System_String_o *)isSkip,
    isPause,
    *(int64_t *)&flip,
    (System_String_o *)method);
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
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
    return;
  }
  if ( this->fields.isEnable )
  {
    if ( !callback )
      return;
    goto LABEL_12;
  }
  CommonEffectLoadComponent__Init_44426548(this, filename, v15);
  if ( callback && !this->fields.isInit )
    goto LABEL_12;
}


void CommonEffectLoadComponent__Init_44426548(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  UnityEngine_Object_o *v14; // x19

  if ( (byte_4D32025 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_CommonEffectLoadComponent_EndLoad__);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_5947/*"EffectLoad("*/);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D32025 = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.effectName,
      (int32_t)filename,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v11 = System_String__Concat_64463988(
            (System_String_o *)StringLiteral_5947/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_757/*")"*/,
            0);
    if ( !gameObject )
      sub_1C93D2C(v11, v12);
    UnityEngine_Object__set_name(gameObject, v11, 0);
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(filename, v13, 1, 0) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v14, 0);
    }
  }
}


void CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_4D32028 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D32028 = 1;
  }
  if ( this->fields.isEnable )
  {
    this->fields.isEnable = 0;
    effectName = this->fields.effectName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(effectName, 0);
  }
}


void CommonEffectLoadComponent__Resume(CommonEffectLoadComponent_o *this, bool isSkip, const MethodInfo *method)
{
  this->fields.isSkip = isSkip;
  this->fields.isPause = 0;
}


void CommonEffectLoadComponent__Start(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( !System_String__IsNullOrEmpty(this->fields.effectName, 0) )
    CommonEffectLoadComponent__Init_44426548(this, this->fields.effectName, v3);
}


bool CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isEnable; // w21
  System_String_o *effectName; // x20
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D32027 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32027 = 1;
  }
  isEnable = this->fields.isEnable;
  if ( this->fields.isEnable )
  {
    this->fields.isEnable = 0;
    effectName = this->fields.effectName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(effectName, 0);
    loadCallback = this->fields.loadCallback;
    if ( loadCallback )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))loadCallback->fields.invoke_impl)(
        loadCallback->fields.method_code,
        0,
        loadCallback->fields.method);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
  }
  return isEnable;
}


void CommonEffectLoadComponent__add_loadCallback(
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

  if ( (byte_4D32023 & 1) == 0 )
  {
    sub_1C93AD4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_4D32023 = 1;
  }
  loadCallback = this->fields.loadCallback;
  p_loadCallback = &this->fields.loadCallback;
  v6 = (System_Delegate_o *)loadCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CommonEffectLoadComponent_LoadEndHandler_c *)v8->klass != CommonEffectLoadComponent_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  CommonEffectLoadComponent__remove_loadCallback(v11, v12, v13);
}


System_String_o *CommonEffectLoadComponent__get_EffectName(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  return this->fields.effectName;
}


void CommonEffectLoadComponent__remove_loadCallback(
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

  if ( (byte_4D32024 & 1) == 0 )
  {
    sub_1C93AD4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_4D32024 = 1;
  }
  loadCallback = this->fields.loadCallback;
  p_loadCallback = &this->fields.loadCallback;
  v6 = (System_Delegate_o *)loadCallback;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CommonEffectLoadComponent_LoadEndHandler_c *)v8->klass != CommonEffectLoadComponent_LoadEndHandler_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  CommonEffectLoadComponent__get_EffectName(v11, v12);
}


void CommonEffectLoadComponent_LoadEndHandler___ctor(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC9A8C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_1C93B8C(method);
        v16 = sub_1C94120(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AC9B88;
          else
            v13 = sub_1AC9B4C;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AC9AC8;
        }
        else
        {
          v13 = sub_1AC9A9C;
        }
      }
      else
      {
        v13 = sub_1AC9A6C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AC9A24;
}


System_IAsyncResult_o *CommonEffectLoadComponent_LoadEndHandler__BeginInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        CommonEffectComponent_o *effect,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  CommonEffectComponent_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = effect;
  return sub_1C93A88(this, &v6, callback, object);
}


void CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void CommonEffectLoadComponent_LoadEndHandler__Invoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, CommonEffectComponent_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    effect,
    this->fields.method);
}