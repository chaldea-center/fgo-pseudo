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
  UnityEngine_Transform_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Texture2D_o *Object_Texture2D; // x25
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  CommonEffectComponent_o *Component_srcLineSprite; // x19
  UnityEngine_Transform_o *v16; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x23
  UnityEngine_Transform_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  int32_t flip; // w25
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v26; // x0
  __int64 v27; // x1
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s3
  float v32; // s11
  float v33; // s12
  float v34; // s13
  float v35; // s14
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x1
  UnityEngine_Transform_o *v39; // x0
  __int64 v40; // x1
  float v41; // s11
  UnityEngine_Transform_o *v42; // x0
  __int64 v43; // x1
  float v44; // s12
  UnityEngine_Transform_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x1
  UnityEngine_Transform_o *v53; // x0
  __int64 v54; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v56; // x1
  UnityEngine_GameObject_o *v57; // x24
  _BOOL8 HasComponent_StoneCountRefreshComponent; // x0
  __int64 v59; // x1
  UnityEngine_Renderer_o *v60; // x0
  __int64 v61; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v63; // x0
  __int64 v64; // x1
  _BOOL8 v65; // x0
  __int64 v66; // x1
  _BOOL8 v67; // x0
  __int64 v68; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v70; // x1
  UnityEngine_Transform_o *v71; // x0
  __int64 v72; // x1
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *v74; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434DF70 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject___);
    sub_B70694(&CommonEffectManager_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
    sub_B70694(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
    sub_B70694(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
    sub_B70694(&Method_GameObjectExtensions_HasComponent_Renderer___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16425/*"_threeValue2"*/);
    sub_B70694(&StringLiteral_16429/*"_twoValue0"*/);
    sub_B70694(&StringLiteral_16430/*"_twoValue1"*/);
    sub_B70694(&StringLiteral_16420/*"_threeValue0"*/);
    sub_B70694(&StringLiteral_16421/*"_threeValue1"*/);
    sub_B70694(&StringLiteral_16400/*"_oneValue"*/);
    byte_434DF70 = 1;
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
      v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v6 )
        sub_B7076C(0LL, v7);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v6, 0LL);
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
    v9 = UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( v9 )
    {
      if ( !data )
        sub_B7076C(v9, v10);
      Object_Texture2D = AssetData__GetObject_Texture2D_(
                           data,
                           (const MethodInfo_1BD661C *)Method_AssetData_GetObject_GameObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_Texture2D,
                                          (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v14 = v12;
      if ( !v12 )
        sub_B7076C(0LL, v13);
      Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v12,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v16 = UnityEngine_GameObject__get_transform(v14, 0LL);
      if ( !Object_Texture2D )
        sub_B7076C(v16, v17);
      v18 = v16;
      v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_Texture2D, 0LL);
      if ( !v19 )
        sub_B7076C(0LL, v20);
      localScale = UnityEngine_Transform__get_localScale(v19, 0LL);
      flip = this->fields.flip;
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      *(UnityEngine_Quaternion_o *)&v28 = CommonEffectManager__GetFlipQuaternion(flip, v21);
      if ( !parent )
        sub_B7076C(v26, v27);
      v32 = v28;
      v33 = v29;
      v34 = v30;
      v35 = v31;
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
      if ( !v18 )
        sub_B7076C(v36, v36);
      UnityEngine_Transform__set_parent(v18, v36, 0LL);
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v37 )
        sub_B7076C(0LL, v38);
      localPosition = UnityEngine_Transform__get_localPosition(v37, 0LL);
      UnityEngine_Transform__set_localPosition(v18, localPosition, 0LL);
      v79.fields.x = v32;
      v79.fields.y = v33;
      v79.fields.z = v34;
      v79.fields.w = v35;
      UnityEngine_Transform__set_localRotation(v18, v79, 0LL);
      v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v39 )
        sub_B7076C(0LL, v40);
      LODWORD(v41) = (unsigned int)UnityEngine_Transform__get_localScale(v39, 0LL);
      v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v42 )
        sub_B7076C(0LL, v43);
      v77 = UnityEngine_Transform__get_localScale(v42, 0LL);
      v44 = v77.fields.y;
      v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v45 )
        sub_B7076C(0LL, v46);
      v78 = UnityEngine_Transform__get_localScale(v45, 0LL);
      v78.fields.x = x * v41;
      v78.fields.y = y * v44;
      v78.fields.z = z * v78.fields.z;
      UnityEngine_Transform__set_localScale(v18, v78, 0LL);
      if ( !Component_srcLineSprite )
        sub_B7076C(v47, v48);
      CommonEffectComponent__Init_17832428(
        Component_srcLineSprite,
        data,
        this->fields.isSkip,
        this->fields.isPause,
        v49);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_srcLineSprite->klass->vtable._4_SetParam.method)(Component_srcLineSprite);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v14, 0LL);
        if ( !gameObject )
          sub_B7076C(0LL, v70);
        v71 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v71 )
          sub_B7076C(0LL, v72);
        if ( i >= UnityEngine_Transform__get_childCount(v71, 0LL) )
          break;
        v51 = UnityEngine_GameObject__get_gameObject(v14, 0LL);
        if ( !v51 )
          sub_B7076C(0LL, v52);
        v53 = UnityEngine_GameObject__get_transform(v51, 0LL);
        if ( !v53 )
          sub_B7076C(0LL, v54);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v53, i, 0LL);
        if ( !Child )
          sub_B7076C(0LL, v56);
        v57 = UnityEngine_Component__get_gameObject(Child, 0LL);
        HasComponent_StoneCountRefreshComponent = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                                                    v57,
                                                    (const MethodInfo_1D4B9A0 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_StoneCountRefreshComponent )
        {
          if ( !v57 )
            sub_B7076C(HasComponent_StoneCountRefreshComponent, v59);
          v60 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v57,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v60 )
            sub_B7076C(0LL, v61);
          material = UnityEngine_Renderer__get_material(v60, 0LL);
          v63 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                  v57,
                  (const MethodInfo_1D4B9A0 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v63 )
          {
            if ( !material )
              sub_B7076C(v63, v64);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16400/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16400/*"_oneValue"*/, 0.0, 0LL);
          }
          v65 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                  v57,
                  (const MethodInfo_1D4B9A0 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v65 )
          {
            if ( !material )
              sub_B7076C(v65, v66);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16429/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16430/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16429/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16430/*"_twoValue1"*/, 0.0, 0LL);
          }
          v67 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                  v57,
                  (const MethodInfo_1D4B9A0 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v67 )
          {
            if ( !material )
              sub_B7076C(v67, v68);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16420/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16421/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16425/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16420/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16421/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16425/*"_threeValue2"*/, 0.0, 0LL);
          }
        }
      }
      this->fields.isEnable = 0;
      loadCallback = this->fields.loadCallback;
      if ( loadCallback )
        CommonEffectLoadComponent_LoadEndHandler__Invoke(loadCallback, Component_srcLineSprite, 0LL);
    }
    v74 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v74, 0LL);
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

  CommonEffectLoadComponent__Init_17843648(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


void __fastcall CommonEffectLoadComponent__Init_17843648(
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
  sub_B70630(&this->fields.param);
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
  CommonEffectLoadComponent__Init_17843868(this, filename, v15);
  if ( !this->fields.isInit )
  {
LABEL_5:
    if ( !callback )
      return;
LABEL_9:
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, 0LL, 0LL);
  }
}


void __fastcall CommonEffectLoadComponent__Init_17843868(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  AssetLoader_LoadEndDataHandler_o *v8; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_434DF6F & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_CommonEffectLoadComponent_EndLoad__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5962/*"EffectLoad("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    byte_434DF6F = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_B70630(&this->fields.effectName);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v6 = System_String__Concat_44760452(
           (System_String_o *)StringLiteral_5962/*"EffectLoad("*/,
           filename,
           (System_String_o *)StringLiteral_663/*")"*/,
           0LL);
    if ( !gameObject )
      sub_B7076C(v6, v7);
    UnityEngine_Object__set_name(gameObject, v6, 0LL);
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v8, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(filename, v8, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v9, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x19

  if ( (byte_434DF72 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_434DF72 = 1;
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
    CommonEffectLoadComponent__Init_17843868(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  System_String_o *effectName; // x20
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_434DF71 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434DF71 = 1;
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
  UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
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

  if ( (byte_434DF6D & 1) == 0 )
  {
    sub_B70694(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_434DF6D = 1;
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
    v9 = sub_B650AC(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CommonEffectLoadComponent_o *)sub_B70A60(v8);
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

  if ( (byte_434DF6E & 1) == 0 )
  {
    sub_B70694(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    byte_434DF6E = 1;
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
    v9 = sub_B650AC(p_loadCallback, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CommonEffectLoadComponent_o *)sub_B70A60(v8);
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
  sub_B70630(
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
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, effect);
      v31 = sub_B706C4(v28);
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
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
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
                  v23 = sub_B08590(effect, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&effect->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(CommonEffectComponent_o *, _QWORD))sub_B70744(v15, v28);
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
                  v14 = sub_B08590(effect, class_0, v9);
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
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
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
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))sub_B70744(v22, v28);
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
                v21 = sub_B08590(v29, v17, v16);
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