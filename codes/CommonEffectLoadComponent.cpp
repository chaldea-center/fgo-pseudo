void CommonEffectLoadComponent___ctor(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CommonEffectLoadComponent__EndLoad(CommonEffectLoadComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *transform; // x20
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Object_object; // x25
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x23
  UnityEngine_Transform_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t flip; // w25
  __int64 v27; // x0
  __int64 v28; // x1
  float v29; // s11
  float v30; // s12
  float v31; // s13
  float w; // s14
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Transform_o *v34; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *v36; // x0
  __int64 v37; // x1
  float v38; // s11
  UnityEngine_Transform_o *v39; // x0
  __int64 v40; // x1
  float v41; // s12
  UnityEngine_Transform_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x1
  const MethodInfo *v45; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v48; // x1
  UnityEngine_Transform_o *v49; // x0
  __int64 v50; // x1
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x1
  UnityEngine_Transform_o *v53; // x0
  __int64 v54; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v56; // x1
  UnityEngine_GameObject_o *v57; // x24
  _BOOL8 HasComponent_object; // x0
  __int64 v59; // x1
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v63; // x0
  __int64 v64; // x1
  _BOOL8 v65; // x0
  __int64 v66; // x1
  _BOOL8 v67; // x0
  __int64 v68; // x1
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  __int64 v70; // x1
  UnityEngine_Object_o *v71; // x20
  CommonEffectComponent_o *Component_object; // [xsp+8h] [xbp-A8h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o FlipQuaternion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5939D5B & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject___);
    sub_21FFC50(&CommonEffectManager_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
    sub_21FFC50(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
    sub_21FFC50(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
    sub_21FFC50(&Method_GameObjectExtensions_HasComponent_Renderer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_17231/*"_threeValue2"*/);
    sub_21FFC50(&StringLiteral_17236/*"_twoValue0"*/);
    sub_21FFC50(&StringLiteral_17237/*"_twoValue1"*/);
    sub_21FFC50(&StringLiteral_17226/*"_threeValue0"*/);
    sub_21FFC50(&StringLiteral_17227/*"_threeValue1"*/);
    sub_21FFC50(&StringLiteral_17207/*"_oneValue"*/);
    byte_5939D5B = 1;
  }
  if ( this->fields.isEnable )
  {
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(transform, 0, 0) )
    {
      v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v7 )
        sub_21FFECC(0, v8);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v7, 0);
    }
    else
    {
      parent = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v10 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( v10 )
    {
      if ( !data )
        sub_21FFECC(v10, v11);
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_379EFEC *)Method_AssetData_GetObject_GameObject___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      v14 = UnityEngine_Object__Instantiate_object_(
              Object_object,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v16 = (UnityEngine_GameObject_o *)v14;
      if ( !v14 )
        sub_21FFECC(0, v15);
      Component_object = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v14,
                                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v17 = UnityEngine_GameObject__get_transform(v16, 0);
      if ( !Object_object )
        sub_21FFECC(v17, v18);
      v19 = v17;
      v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_object, 0);
      if ( !v20 )
        sub_21FFECC(0, v21);
      localScale = UnityEngine_Transform__get_localScale(v20, 0);
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      flip = this->fields.flip;
      if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v22);
      FlipQuaternion = CommonEffectManager__GetFlipQuaternion(flip, v22);
      if ( !parent )
        sub_21FFECC(v27, v28);
      v29 = FlipQuaternion.fields.x;
      v30 = FlipQuaternion.fields.y;
      v31 = FlipQuaternion.fields.z;
      w = FlipQuaternion.fields.w;
      v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
      if ( !v19 )
        sub_21FFECC(v33, v33);
      UnityEngine_Transform__set_parent(v19, v33, 0);
      v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v34 )
        sub_21FFECC(0, v35);
      localPosition = UnityEngine_Transform__get_localPosition(v34, 0);
      UnityEngine_Transform__set_localPosition(v19, localPosition, 0);
      v79.fields.x = v29;
      v79.fields.y = v30;
      v79.fields.z = v31;
      v79.fields.w = w;
      UnityEngine_Transform__set_localRotation(v19, v79, 0);
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v36 )
        sub_21FFECC(0, v37);
      LODWORD(v38) = (unsigned int)UnityEngine_Transform__get_localScale(v36, 0);
      v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v39 )
        sub_21FFECC(0, v40);
      v76 = UnityEngine_Transform__get_localScale(v39, 0);
      v41 = v76.fields.y;
      v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v42 )
        sub_21FFECC(0, v43);
      v77 = UnityEngine_Transform__get_localScale(v42, 0);
      v77.fields.x = x * v38;
      v77.fields.y = y * v41;
      v77.fields.z = z * v77.fields.z;
      UnityEngine_Transform__set_localScale(v19, v77, 0);
      if ( !Component_object )
        sub_21FFECC(0, v44);
      CommonEffectComponent__Init_50672364(Component_object, data, this->fields.isSkip, this->fields.isPause, v45);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_object->klass->vtable._4_SetParam.methodPtr)(Component_object);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v16, 0);
        if ( !gameObject )
          sub_21FFECC(0, v48);
        v49 = UnityEngine_GameObject__get_transform(gameObject, 0);
        if ( !v49 )
          sub_21FFECC(0, v50);
        if ( i >= UnityEngine_Transform__get_childCount(v49, 0) )
          break;
        v51 = UnityEngine_GameObject__get_gameObject(v16, 0);
        if ( !v51 )
          sub_21FFECC(0, v52);
        v53 = UnityEngine_GameObject__get_transform(v51, 0);
        if ( !v53 )
          sub_21FFECC(0, v54);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v53, i, 0);
        if ( !Child )
          sub_21FFECC(0, v56);
        v57 = UnityEngine_Component__get_gameObject(Child, 0);
        HasComponent_object = GameObjectExtensions__HasComponent_object_(
                                v57,
                                (const MethodInfo_38850E0 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_object )
        {
          if ( !v57 )
            sub_21FFECC(HasComponent_object, v59);
          v60 = UnityEngine_GameObject__GetComponent_object_(
                  v57,
                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v60 )
            sub_21FFECC(0, v61);
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v60, 0);
          v63 = GameObjectExtensions__HasComponent_object_(
                  v57,
                  (const MethodInfo_38850E0 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v63 )
          {
            if ( !material )
              sub_21FFECC(v63, v64);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_17207/*"_oneValue"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17207/*"_oneValue"*/, 0.0, 0);
          }
          v65 = GameObjectExtensions__HasComponent_object_(
                  v57,
                  (const MethodInfo_38850E0 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v65 )
          {
            if ( !material )
              sub_21FFECC(v65, v66);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_17236/*"_twoValue0"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_17237/*"_twoValue1"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17236/*"_twoValue0"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17237/*"_twoValue1"*/, 0.0, 0);
          }
          v67 = GameObjectExtensions__HasComponent_object_(
                  v57,
                  (const MethodInfo_38850E0 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v67 )
          {
            if ( !material )
              sub_21FFECC(v67, v68);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_17226/*"_threeValue0"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_17227/*"_threeValue1"*/, 0);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_17231/*"_threeValue2"*/, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17226/*"_threeValue0"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17227/*"_threeValue1"*/, 0.0, 0);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17231/*"_threeValue2"*/, 0.0, 0);
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
    v71 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    UnityEngine_Object__Destroy_83246496(v71, 0);
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

  CommonEffectLoadComponent__Init_50686188(this, filename, 0, callback, isSkip, isPause, flip, v7);
}


void CommonEffectLoadComponent__Init_50686188(
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.param,
    (int32_t)param,
    (System_String_o *)param,
    (System_String_o *)callback,
    isSkip,
    isPause,
    flip,
    (bool)method);
  *((_BYTE *)p_param + 8) = isSkip;
  *((_BYTE *)p_param + 9) = isPause;
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
  CommonEffectLoadComponent__Init_50686392(this, filename, v15);
  if ( callback && !this->fields.isInit )
    goto LABEL_12;
}


void CommonEffectLoadComponent__Init_50686392(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x19

  if ( (byte_5939D5A & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CommonEffectLoadComponent_EndLoad__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6158/*"EffectLoad("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    byte_5939D5A = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectName,
      (int32_t)filename,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v11 = System_String__Concat_75481624(
            (System_String_o *)StringLiteral_6158/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_789/*")"*/,
            0);
    if ( !gameObject )
      sub_21FFECC(v11, v12);
    UnityEngine_Object__set_name(gameObject, v11, 0);
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
    if ( !AssetManager__loadAssetStorage(filename, v13, 1, 0, 0) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      UnityEngine_Object__Destroy_83246496(v16, 0);
    }
  }
}


void CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x20

  if ( (byte_5939D5D & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5939D5D = 1;
  }
  if ( this->fields.isEnable )
  {
    effectName = this->fields.effectName;
    this->fields.isEnable = 0;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
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
    CommonEffectLoadComponent__Init_50686392(this, this->fields.effectName, v3);
}


bool CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isEnable; // w21
  System_String_o *effectName; // x20
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5939D5C & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D5C = 1;
  }
  isEnable = this->fields.isEnable;
  if ( this->fields.isEnable )
  {
    effectName = this->fields.effectName;
    this->fields.isEnable = 0;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(effectName, 0);
    loadCallback = this->fields.loadCallback;
    if ( loadCallback )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))loadCallback->fields.invoke_impl)(
        loadCallback->fields.method_code,
        0,
        loadCallback->fields.method);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CommonEffectLoadComponent_o *v12; // x0
  CommonEffectLoadComponent_LoadEndHandler_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5939D58 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_5939D58 = 1;
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
    v10 = sub_223767C(p_loadCallback, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v9);
  CommonEffectLoadComponent__remove_loadCallback(v12, v13, v14);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  CommonEffectLoadComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5939D59 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_5939D59 = 1;
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
    v10 = sub_223767C(p_loadCallback, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v9);
  CommonEffectLoadComponent__get_EffectName(v12, v13);
}


void CommonEffectLoadComponent_LoadEndHandler___ctor(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FFBD20;
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
        v15 = sub_21FFD20(method);
        v16 = sub_22002A4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1FFBE18;
          else
            v13 = sub_1FFBDDC;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1FFBD58;
        }
        else
        {
          v13 = sub_1FFBD30;
        }
      }
      else
      {
        v13 = sub_1FFBD04;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1FFBCBC;
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
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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