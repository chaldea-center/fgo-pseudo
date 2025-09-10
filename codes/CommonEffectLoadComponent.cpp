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
  float x; // s8
  float y; // s9
  int32_t flip; // w25
  float z; // s10
  __int64 v23; // x0
  __int64 v24; // x1
  float v25; // s11
  float v26; // s12
  float v27; // s13
  float w; // s14
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Transform_o *v30; // x0
  __int64 v31; // x1
  UnityEngine_Transform_o *v32; // x0
  __int64 v33; // x1
  float v34; // s11
  UnityEngine_Transform_o *v35; // x0
  __int64 v36; // x1
  float v37; // s12
  UnityEngine_Transform_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  const MethodInfo *v41; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x0
  __int64 v46; // x1
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_Transform_o *v49; // x0
  __int64 v50; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v52; // x1
  UnityEngine_GameObject_o *v53; // x24
  _BOOL8 HasComponent_object; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v59; // x0
  __int64 v60; // x1
  _BOOL8 v61; // x0
  __int64 v62; // x1
  _BOOL8 v63; // x0
  __int64 v64; // x1
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *v66; // x20
  CommonEffectComponent_o *Component_object; // [xsp+0h] [xbp-B0h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o FlipQuaternion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C28934 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject___);
    sub_1C2D490(&CommonEffectManager_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
    sub_1C2D490(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
    sub_1C2D490(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
    sub_1C2D490(&Method_GameObjectExtensions_HasComponent_Renderer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16590/*"_threeValue2"*/);
    sub_1C2D490(&StringLiteral_16594/*"_twoValue0"*/);
    sub_1C2D490(&StringLiteral_16595/*"_twoValue1"*/);
    sub_1C2D490(&StringLiteral_16585/*"_threeValue0"*/);
    sub_1C2D490(&StringLiteral_16586/*"_threeValue1"*/);
    sub_1C2D490(&StringLiteral_16566/*"_oneValue"*/);
    byte_4C28934 = 1;
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
        sub_1C2D6EC(0, v6);
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
        sub_1C2D6EC(v8, v9);
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_30AFBB8 *)Method_AssetData_GetObject_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__Instantiate_object_(
              Object_object,
              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v13 = (UnityEngine_GameObject_o *)v11;
      if ( !v11 )
        sub_1C2D6EC(0, v12);
      Component_object = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v11,
                                                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v14 = UnityEngine_GameObject__get_transform(v13, 0);
      if ( !Object_object )
        sub_1C2D6EC(v14, v15);
      v16 = v14;
      v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_object, 0);
      if ( !v17 )
        sub_1C2D6EC(0, v18);
      localScale = UnityEngine_Transform__get_localScale(v17, 0);
      x = localScale.fields.x;
      y = localScale.fields.y;
      flip = this->fields.flip;
      z = localScale.fields.z;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      FlipQuaternion = CommonEffectManager__GetFlipQuaternion(flip, 0);
      if ( !parent )
        sub_1C2D6EC(v23, v24);
      v25 = FlipQuaternion.fields.x;
      v26 = FlipQuaternion.fields.y;
      v27 = FlipQuaternion.fields.z;
      w = FlipQuaternion.fields.w;
      v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
      if ( !v16 )
        sub_1C2D6EC(v29, v29);
      UnityEngine_Transform__set_parent(v16, v29, 0);
      v30 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v30 )
        sub_1C2D6EC(0, v31);
      localPosition = UnityEngine_Transform__get_localPosition(v30, 0);
      UnityEngine_Transform__set_localPosition(v16, localPosition, 0);
      v74.fields.x = v25;
      v74.fields.y = v26;
      v74.fields.z = v27;
      v74.fields.w = w;
      UnityEngine_Transform__set_localRotation(v16, v74, 0);
      v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v32 )
        sub_1C2D6EC(0, v33);
      LODWORD(v34) = (unsigned int)UnityEngine_Transform__get_localScale(v32, 0);
      v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v35 )
        sub_1C2D6EC(0, v36);
      v71 = UnityEngine_Transform__get_localScale(v35, 0);
      v37 = v71.fields.y;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v38 )
        sub_1C2D6EC(0, v39);
      v72 = UnityEngine_Transform__get_localScale(v38, 0);
      v72.fields.x = x * v34;
      v72.fields.y = y * v37;
      v72.fields.z = z * v72.fields.z;
      UnityEngine_Transform__set_localScale(v16, v72, 0);
      if ( !Component_object )
        sub_1C2D6EC(0, v40);
      CommonEffectComponent__Init_43493284(Component_object, data, this->fields.isSkip, this->fields.isPause, v41);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_object->klass->vtable._4_SetParam.methodPtr)(Component_object);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v13, 0);
        if ( !gameObject )
          sub_1C2D6EC(0, v44);
        v45 = UnityEngine_GameObject__get_transform(gameObject, 0);
        if ( !v45 )
          sub_1C2D6EC(0, v46);
        if ( i >= UnityEngine_Transform__get_childCount(v45, 0) )
          break;
        v47 = UnityEngine_GameObject__get_gameObject(v13, 0);
        if ( !v47 )
          sub_1C2D6EC(0, v48);
        v49 = UnityEngine_GameObject__get_transform(v47, 0);
        if ( !v49 )
          sub_1C2D6EC(0, v50);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v49, i, 0);
        if ( !Child )
          sub_1C2D6EC(0, v52);
        v53 = UnityEngine_Component__get_gameObject(Child, 0);
        HasComponent_object = GameObjectExtensions__HasComponent_object_(
                                v53,
                                (const MethodInfo_31277F0 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_object )
        {
          if ( !v53 )
            sub_1C2D6EC(HasComponent_object, v55);
          v56 = UnityEngine_GameObject__GetComponent_object_(
                  v53,
                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v56 )
            sub_1C2D6EC(0, v57);
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v56, 0);
          v59 = GameObjectExtensions__HasComponent_object_(
                  v53,
                  (const MethodInfo_31277F0 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v59 )
          {
            if ( !material )
              sub_1C2D6EC(v59, v60);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16566/*"_oneValue"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16566/*"_oneValue"*/, 0.0, 0);
          }
          v61 = GameObjectExtensions__HasComponent_object_(
                  v53,
                  (const MethodInfo_31277F0 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v61 )
          {
            if ( !material )
              sub_1C2D6EC(v61, v62);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16594/*"_twoValue0"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16595/*"_twoValue1"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16594/*"_twoValue0"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16595/*"_twoValue1"*/, 0.0, 0);
          }
          v63 = GameObjectExtensions__HasComponent_object_(
                  v53,
                  (const MethodInfo_31277F0 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v63 )
          {
            if ( !material )
              sub_1C2D6EC(v63, v64);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16585/*"_threeValue0"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16586/*"_threeValue1"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16590/*"_threeValue2"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16585/*"_threeValue0"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16586/*"_threeValue1"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16590/*"_threeValue2"*/, 0.0, 0);
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
    v66 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v66, 0);
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

  CommonEffectLoadComponent__Init_43505736(this, filename, 0, callback, isSkip, isPause, flip, v7);
}


void CommonEffectLoadComponent__Init_43505736(
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.param,
    (int32_t)param,
    (int32_t)param,
    (const MethodInfo *)callback);
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
  CommonEffectLoadComponent__Init_43505940(this, filename, v15);
  if ( callback && !this->fields.isInit )
    goto LABEL_12;
}


void CommonEffectLoadComponent__Init_43505940(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  UnityEngine_Object_o *v10; // x19

  if ( (byte_4C28933 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_CommonEffectLoadComponent_EndLoad__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5911/*"EffectLoad("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C28933 = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectName, (int32_t)filename, (int32_t)method, v3);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v7 = System_String__Concat_63496112(
           (System_String_o *)StringLiteral_5911/*"EffectLoad("*/,
           filename,
           (System_String_o *)StringLiteral_759/*")"*/,
           0);
    if ( !gameObject )
      sub_1C2D6EC(v7, v8);
    UnityEngine_Object__set_name(gameObject, v7, 0);
    v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(filename, v9, 1, 0) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v10, 0);
    }
  }
}


void CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_4C28936 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C28936 = 1;
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
    CommonEffectLoadComponent__Init_43505940(this, this->fields.effectName, v3);
}


bool CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isEnable; // w21
  System_String_o *effectName; // x20
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C28935 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28935 = 1;
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
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
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

  if ( (byte_4C28931 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_4C28931 = 1;
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
    v9 = sub_1C676E8(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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

  if ( (byte_4C28932 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_4C28932 = 1;
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
    v9 = sub_1C676E8(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  CommonEffectLoadComponent__get_EffectName(v11, v12);
}


void CommonEffectLoadComponent_LoadEndHandler___ctor(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A72BD0;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C2D548(method);
        v12 = sub_1C2DA04(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A72CCC;
          else
            v9 = sub_1A72C90;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A72C0C;
        }
        else
        {
          v9 = sub_1A72BE0;
        }
      }
      else
      {
        v9 = sub_1A72BB0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A72B68;
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
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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