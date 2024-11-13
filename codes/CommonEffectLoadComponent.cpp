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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  UnityEngine_Object_o *transform; // x20
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x1
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  Il2CppObject *Object_object; // x25
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  UnityEngine_GameObject_o *v46; // x20
  UnityEngine_Transform_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_Transform_o *v49; // x23
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x1
  float x; // s8
  float y; // s9
  int32_t flip; // w25
  float z; // s10
  __int64 v57; // x0
  __int64 v58; // x1
  float v59; // s0
  float v60; // s1
  float v61; // s2
  float v62; // s3
  float v63; // s11
  float v64; // s12
  float v65; // s13
  float v66; // s14
  UnityEngine_Transform_o *v67; // x0
  UnityEngine_Transform_o *v68; // x0
  __int64 v69; // x1
  UnityEngine_Transform_o *v70; // x0
  __int64 v71; // x1
  float v72; // s11
  UnityEngine_Transform_o *v73; // x0
  __int64 v74; // x1
  float v75; // s12
  UnityEngine_Transform_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x1
  const MethodInfo *v79; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v82; // x1
  UnityEngine_Transform_o *v83; // x0
  __int64 v84; // x1
  UnityEngine_GameObject_o *v85; // x0
  __int64 v86; // x1
  UnityEngine_Transform_o *v87; // x0
  __int64 v88; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v90; // x1
  UnityEngine_GameObject_o *v91; // x24
  _BOOL8 HasComponent_object; // x0
  __int64 v93; // x1
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v97; // x0
  __int64 v98; // x1
  _BOOL8 v99; // x0
  __int64 v100; // x1
  _BOOL8 v101; // x0
  __int64 v102; // x1
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  __int64 v104; // x1
  UnityEngine_Object_o *v105; // x20
  CommonEffectComponent_o *Component_object; // [xsp+0h] [xbp-B0h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17592 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject___, data, method);
    sub_1BCA7E0(&CommonEffectManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___, v8, v9);
    sub_1BCA7E0(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___, v10, v11);
    sub_1BCA7E0(&Method_GameObjectExtensions_HasComponent_Renderer___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_16753/*"_threeValue2"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_16757/*"_twoValue0"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_16758/*"_twoValue1"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_16748/*"_threeValue0"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_16749/*"_threeValue1"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_16730/*"_oneValue"*/, v32, v33);
    byte_4B17592 = 1;
  }
  if ( this->fields.isEnable )
  {
    transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Inequality(transform, 0LL, 0LL) )
    {
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v37 )
        sub_1BCAA3C(0LL, v38);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v37, 0LL);
    }
    else
    {
      parent = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    v40 = UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( v40 )
    {
      if ( !data )
        sub_1BCAA3C(v40, v41);
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_GameObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
      v44 = UnityEngine_Object__Instantiate_object_(
              Object_object,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v46 = (UnityEngine_GameObject_o *)v44;
      if ( !v44 )
        sub_1BCAA3C(0LL, v45);
      Component_object = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v44,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v47 = UnityEngine_GameObject__get_transform(v46, 0LL);
      if ( !Object_object )
        sub_1BCAA3C(v47, v48);
      v49 = v47;
      v50 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_object, 0LL);
      if ( !v50 )
        sub_1BCAA3C(0LL, v51);
      localScale = UnityEngine_Transform__get_localScale(v50, 0LL);
      x = localScale.fields.x;
      y = localScale.fields.y;
      flip = this->fields.flip;
      z = localScale.fields.z;
      if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, v52);
      *(UnityEngine_Quaternion_o *)&v59 = CommonEffectManager__GetFlipQuaternion(flip, v52);
      if ( !parent )
        sub_1BCAA3C(v57, v58);
      v63 = v59;
      v64 = v60;
      v65 = v61;
      v66 = v62;
      v67 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
      if ( !v49 )
        sub_1BCAA3C(v67, v67);
      UnityEngine_Transform__set_parent(v49, v67, 0LL);
      v68 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v68 )
        sub_1BCAA3C(0LL, v69);
      localPosition = UnityEngine_Transform__get_localPosition(v68, 0LL);
      UnityEngine_Transform__set_localPosition(v49, localPosition, 0LL);
      v112.fields.x = v63;
      v112.fields.y = v64;
      v112.fields.z = v65;
      v112.fields.w = v66;
      UnityEngine_Transform__set_localRotation(v49, v112, 0LL);
      v70 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v70 )
        sub_1BCAA3C(0LL, v71);
      LODWORD(v72) = (unsigned int)UnityEngine_Transform__get_localScale(v70, 0LL);
      v73 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v73 )
        sub_1BCAA3C(0LL, v74);
      v110 = UnityEngine_Transform__get_localScale(v73, 0LL);
      v75 = v110.fields.y;
      v76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v76 )
        sub_1BCAA3C(0LL, v77);
      v111 = UnityEngine_Transform__get_localScale(v76, 0LL);
      v111.fields.x = x * v72;
      v111.fields.y = y * v75;
      v111.fields.z = z * v111.fields.z;
      UnityEngine_Transform__set_localScale(v49, v111, 0LL);
      if ( !Component_object )
        sub_1BCAA3C(0LL, v78);
      CommonEffectComponent__Init_41381568(Component_object, data, this->fields.isSkip, this->fields.isPause, v79);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_object->klass->vtable._4_SetParam.method)(Component_object);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v46, 0LL);
        if ( !gameObject )
          sub_1BCAA3C(0LL, v82);
        v83 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v83 )
          sub_1BCAA3C(0LL, v84);
        if ( i >= UnityEngine_Transform__get_childCount(v83, 0LL) )
          break;
        v85 = UnityEngine_GameObject__get_gameObject(v46, 0LL);
        if ( !v85 )
          sub_1BCAA3C(0LL, v86);
        v87 = UnityEngine_GameObject__get_transform(v85, 0LL);
        if ( !v87 )
          sub_1BCAA3C(0LL, v88);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v87, i, 0LL);
        if ( !Child )
          sub_1BCAA3C(0LL, v90);
        v91 = UnityEngine_Component__get_gameObject(Child, 0LL);
        HasComponent_object = GameObjectExtensions__HasComponent_object_(
                                v91,
                                (const MethodInfo_2F63FF0 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_object )
        {
          if ( !v91 )
            sub_1BCAA3C(HasComponent_object, v93);
          v94 = UnityEngine_GameObject__GetComponent_object_(
                  v91,
                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v94 )
            sub_1BCAA3C(0LL, v95);
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v94, 0LL);
          v97 = GameObjectExtensions__HasComponent_object_(
                  v91,
                  (const MethodInfo_2F63FF0 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v97 )
          {
            if ( !material )
              sub_1BCAA3C(v97, v98);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16730/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16730/*"_oneValue"*/, 0.0, 0LL);
          }
          v99 = GameObjectExtensions__HasComponent_object_(
                  v91,
                  (const MethodInfo_2F63FF0 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v99 )
          {
            if ( !material )
              sub_1BCAA3C(v99, v100);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16757/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16758/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16757/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16758/*"_twoValue1"*/, 0.0, 0LL);
          }
          v101 = GameObjectExtensions__HasComponent_object_(
                   v91,
                   (const MethodInfo_2F63FF0 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v101 )
          {
            if ( !material )
              sub_1BCAA3C(v101, v102);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16748/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16749/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16753/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16748/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16749/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16753/*"_threeValue2"*/, 0.0, 0LL);
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
    v105 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104);
    UnityEngine_Object__Destroy_70154244(v105, 0LL);
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

  CommonEffectLoadComponent__Init_41392584(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectLoadComponent__Init_41392584(
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
  sub_1BCA784(
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
  CommonEffectLoadComponent__Init_41392788(this, filename, v15);
  if ( callback && !this->fields.isInit )
    goto LABEL_12;
}


void __fastcall CommonEffectLoadComponent__Init_41392788(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x19

  if ( (byte_4B17591 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, filename, method);
    sub_1BCA7E0(&Method_CommonEffectLoadComponent_EndLoad__, v10, v11);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_5988/*"EffectLoad("*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v18, v19);
    byte_4B17591 = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.effectName,
      (int64_t)filename,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21 = System_String__Concat_62412480(
            (System_String_o *)StringLiteral_5988/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_809/*")"*/,
            0LL);
    if ( !gameObject )
      sub_1BCAA3C(v21, v22);
    UnityEngine_Object__set_name(gameObject, v21, 0LL);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25);
    AssetLoader_LoadEndDataHandler___ctor(v26, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27);
    if ( !AssetManager__loadAssetStorage(filename, v26, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      UnityEngine_Object__Destroy_70154244(v29, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *effectName; // x19

  if ( (byte_4B17594 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B17594 = 1;
  }
  if ( this->fields.isEnable )
  {
    this->fields.isEnable = 0;
    effectName = this->fields.effectName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
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
    CommonEffectLoadComponent__Init_41392788(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL4 isEnable; // w21
  System_String_o *effectName; // x20
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x8
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B17593 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17593 = 1;
  }
  isEnable = this->fields.isEnable;
  if ( this->fields.isEnable )
  {
    this->fields.isEnable = 0;
    effectName = this->fields.effectName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(effectName, 0LL);
    loadCallback = this->fields.loadCallback;
    if ( loadCallback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))loadCallback->fields.m_target)(
        loadCallback->fields.original_method_info,
        0LL,
        *(_QWORD *)&loadCallback->fields.extra_arg);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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

  if ( (byte_4B1758F & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value, method);
    byte_4B1758F = 1;
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
    v9 = sub_1C05CD0(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B17590 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value, method);
    byte_4B17590 = 1;
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
    v9 = sub_1C05CD0(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0DB08;
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
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0DC04;
          else
            v13 = (Il2CppObject *)sub_1A0DBC8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0DB44;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0DB18;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0DAE8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0DAA0;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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