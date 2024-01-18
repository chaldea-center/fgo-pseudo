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
  __int64 v22; // x1
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v24; // x0
  __int64 v25; // x1
  UnityEngine_Texture2D_o *Object_Texture2D; // x25
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x20
  CommonEffectComponent_o *Component_srcLineSprite; // x19
  UnityEngine_Transform_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x23
  UnityEngine_Transform_o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x1
  int32_t flip; // w25
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v41; // x0
  __int64 v42; // x1
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s3
  float v47; // s11
  float v48; // s12
  float v49; // s13
  float v50; // s14
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_Transform_o *v52; // x0
  __int64 v53; // x1
  UnityEngine_Transform_o *v54; // x0
  __int64 v55; // x1
  float v56; // s11
  UnityEngine_Transform_o *v57; // x0
  __int64 v58; // x1
  float v59; // s12
  UnityEngine_Transform_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *v66; // x0
  __int64 v67; // x1
  UnityEngine_Transform_o *v68; // x0
  __int64 v69; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v71; // x1
  UnityEngine_GameObject_o *v72; // x24
  _BOOL8 HasComponent_StoneCountRefreshComponent; // x0
  __int64 v74; // x1
  UnityEngine_Renderer_o *v75; // x0
  __int64 v76; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v78; // x0
  __int64 v79; // x1
  _BOOL8 v80; // x0
  __int64 v81; // x1
  _BOOL8 v82; // x0
  __int64 v83; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v85; // x1
  UnityEngine_Transform_o *v86; // x0
  __int64 v87; // x1
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *v89; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4183E42 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject___, data);
    sub_B2C35C(&CommonEffectManager_TypeInfo, v5);
    sub_B2C35C(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___, v6);
    sub_B2C35C(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___, v7);
    sub_B2C35C(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___, v8);
    sub_B2C35C(&Method_GameObjectExtensions_HasComponent_Renderer___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_16188/*"_threeValue2"*/, v14);
    sub_B2C35C(&StringLiteral_16192/*"_twoValue0"*/, v15);
    sub_B2C35C(&StringLiteral_16193/*"_twoValue1"*/, v16);
    sub_B2C35C(&StringLiteral_16183/*"_threeValue0"*/, v17);
    sub_B2C35C(&StringLiteral_16184/*"_threeValue1"*/, v18);
    sub_B2C35C(&StringLiteral_16163/*"_oneValue"*/, v19);
    byte_4183E42 = 1;
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
        sub_B2C434(0LL, v22);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v21, 0LL);
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
    v24 = UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( v24 )
    {
      if ( !data )
        sub_B2C434(v24, v25);
      Object_Texture2D = AssetData__GetObject_Texture2D_(
                           data,
                           (const MethodInfo_1720240 *)Method_AssetData_GetObject_GameObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_Texture2D,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v29 = v27;
      if ( !v27 )
        sub_B2C434(0LL, v28);
      Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v27,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v31 = UnityEngine_GameObject__get_transform(v29, 0LL);
      if ( !Object_Texture2D )
        sub_B2C434(v31, v32);
      v33 = v31;
      v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_Texture2D, 0LL);
      if ( !v34 )
        sub_B2C434(0LL, v35);
      localScale = UnityEngine_Transform__get_localScale(v34, 0LL);
      flip = this->fields.flip;
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      *(UnityEngine_Quaternion_o *)&v43 = CommonEffectManager__GetFlipQuaternion(flip, v36);
      if ( !parent )
        sub_B2C434(v41, v42);
      v47 = v43;
      v48 = v44;
      v49 = v45;
      v50 = v46;
      v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
      if ( !v33 )
        sub_B2C434(v51, v51);
      UnityEngine_Transform__set_parent(v33, v51, 0LL);
      v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v52 )
        sub_B2C434(0LL, v53);
      localPosition = UnityEngine_Transform__get_localPosition(v52, 0LL);
      UnityEngine_Transform__set_localPosition(v33, localPosition, 0LL);
      v94.fields.x = v47;
      v94.fields.y = v48;
      v94.fields.z = v49;
      v94.fields.w = v50;
      UnityEngine_Transform__set_localRotation(v33, v94, 0LL);
      v54 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v54 )
        sub_B2C434(0LL, v55);
      LODWORD(v56) = (unsigned int)UnityEngine_Transform__get_localScale(v54, 0LL);
      v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v57 )
        sub_B2C434(0LL, v58);
      v92 = UnityEngine_Transform__get_localScale(v57, 0LL);
      v59 = v92.fields.y;
      v60 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v60 )
        sub_B2C434(0LL, v61);
      v93 = UnityEngine_Transform__get_localScale(v60, 0LL);
      v93.fields.x = x * v56;
      v93.fields.y = y * v59;
      v93.fields.z = z * v93.fields.z;
      UnityEngine_Transform__set_localScale(v33, v93, 0LL);
      if ( !Component_srcLineSprite )
        sub_B2C434(v62, v63);
      CommonEffectComponent__Init_17899820(
        Component_srcLineSprite,
        data,
        this->fields.isSkip,
        this->fields.isPause,
        v64);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_srcLineSprite->klass->vtable._4_SetParam.method)(Component_srcLineSprite);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v29, 0LL);
        if ( !gameObject )
          sub_B2C434(0LL, v85);
        v86 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v86 )
          sub_B2C434(0LL, v87);
        if ( i >= UnityEngine_Transform__get_childCount(v86, 0LL) )
          break;
        v66 = UnityEngine_GameObject__get_gameObject(v29, 0LL);
        if ( !v66 )
          sub_B2C434(0LL, v67);
        v68 = UnityEngine_GameObject__get_transform(v66, 0LL);
        if ( !v68 )
          sub_B2C434(0LL, v69);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v68, i, 0LL);
        if ( !Child )
          sub_B2C434(0LL, v71);
        v72 = UnityEngine_Component__get_gameObject(Child, 0LL);
        HasComponent_StoneCountRefreshComponent = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                                                    v72,
                                                    (const MethodInfo_1AA8454 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_StoneCountRefreshComponent )
        {
          if ( !v72 )
            sub_B2C434(HasComponent_StoneCountRefreshComponent, v74);
          v75 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v72,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v75 )
            sub_B2C434(0LL, v76);
          material = UnityEngine_Renderer__get_material(v75, 0LL);
          v78 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                  v72,
                  (const MethodInfo_1AA8454 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v78 )
          {
            if ( !material )
              sub_B2C434(v78, v79);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16163/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16163/*"_oneValue"*/, 0.0, 0LL);
          }
          v80 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                  v72,
                  (const MethodInfo_1AA8454 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v80 )
          {
            if ( !material )
              sub_B2C434(v80, v81);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16192/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16193/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16192/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16193/*"_twoValue1"*/, 0.0, 0LL);
          }
          v82 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                  v72,
                  (const MethodInfo_1AA8454 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v82 )
          {
            if ( !material )
              sub_B2C434(v82, v83);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16183/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16184/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16188/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16183/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16184/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16188/*"_threeValue2"*/, 0.0, 0LL);
          }
        }
      }
      this->fields.isEnable = 0;
      loadCallback = this->fields.loadCallback;
      if ( loadCallback )
        CommonEffectLoadComponent_LoadEndHandler__Invoke(loadCallback, Component_srcLineSprite, 0LL);
    }
    v89 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v89, 0LL);
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

  CommonEffectLoadComponent__Init_17910748(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


void __fastcall CommonEffectLoadComponent__Init_17910748(
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
  sub_B2C2F8(&this->fields.param, param);
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
  CommonEffectLoadComponent__Init_17910968(this, filename, v15);
  if ( !this->fields.isInit )
  {
LABEL_5:
    if ( !callback )
      return;
LABEL_9:
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, 0LL, 0LL);
  }
}


void __fastcall CommonEffectLoadComponent__Init_17910968(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  UnityEngine_Object_o *v14; // x19

  if ( (byte_4183E41 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, filename);
    sub_B2C35C(&Method_CommonEffectLoadComponent_EndLoad__, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5870/*"EffectLoad("*/, v8);
    sub_B2C35C(&StringLiteral_652/*")"*/, v9);
    byte_4183E41 = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_B2C2F8(&this->fields.effectName, filename);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11 = System_String__Concat_44307816(
            (System_String_o *)StringLiteral_5870/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_652/*")"*/,
            0LL);
    if ( !gameObject )
      sub_B2C434(v11, v12);
    UnityEngine_Object__set_name(gameObject, v11, 0LL);
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(filename, v13, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v14, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_4183E44 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4183E44 = 1;
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
    CommonEffectLoadComponent__Init_17910968(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *effectName; // x20
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4183E43 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4183E43 = 1;
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
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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

  if ( (byte_4183E3F & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_4183E3F = 1;
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
    v9 = sub_B20D74(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CommonEffectLoadComponent_o *)sub_B2C728(v8);
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

  if ( (byte_4183E40 & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, value);
    byte_4183E40 = 1;
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
    v9 = sub_B20D74(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CommonEffectLoadComponent_o *)sub_B2C728(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__Invoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CommonEffectLoadComponent_LoadEndHandler_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  CommonEffectComponent_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(CommonEffectComponent_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, CommonEffectComponent_o *, _QWORD); // x0
  CommonEffectLoadComponent_LoadEndHandler_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(CommonEffectComponent_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  CommonEffectLoadComponent_LoadEndHandler_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CommonEffectLoadComponent_LoadEndHandler_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(CommonEffectComponent_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, effect, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = effect->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&effect->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&effect->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(effect, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&effect->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(CommonEffectComponent_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(effect, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = effect->klass;
                if ( *(_WORD *)&effect->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&effect->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(effect, class_0, v10, v12);
                }
                (*(void (__fastcall **)(CommonEffectComponent_o *, _QWORD))v16)(effect, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(CommonEffectComponent_o *, _QWORD))&effect->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  effect,
                  *((_QWORD *)&effect->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(effect, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, effect, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))v24)(
                v32,
                effect,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))(*v32
                                                                                   + 16LL
                                                                                   * *(unsigned __int16 *)(v31 + 72)
                                                                                   + 312))(
                v32,
                effect,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, CommonEffectComponent_o *, __int64))v33)(v32, effect, v31);
    }
  }
}