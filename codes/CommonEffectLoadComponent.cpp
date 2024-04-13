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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  UnityEngine_Object_o *transform; // x20
  UnityEngine_Transform_o *v52; // x0
  __int64 v53; // x1
  UnityEngine_Object_o *parent; // x24
  _BOOL8 v55; // x0
  __int64 v56; // x1
  UnityEngine_Texture2D_o *Object_Texture2D; // x25
  UnityEngine_GameObject_o *v58; // x0
  __int64 v59; // x1
  UnityEngine_GameObject_o *v60; // x20
  CommonEffectComponent_o *Component_srcLineSprite; // x19
  UnityEngine_Transform_o *v62; // x0
  __int64 v63; // x1
  UnityEngine_Transform_o *v64; // x23
  UnityEngine_Transform_o *v65; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x1
  int32_t flip; // w25
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v72; // x0
  __int64 v73; // x1
  float v74; // s0
  float v75; // s1
  float v76; // s2
  float v77; // s3
  float v78; // s11
  float v79; // s12
  float v80; // s13
  float v81; // s14
  UnityEngine_Transform_o *v82; // x0
  UnityEngine_Transform_o *v83; // x0
  __int64 v84; // x1
  UnityEngine_Transform_o *v85; // x0
  __int64 v86; // x1
  float v87; // s11
  UnityEngine_Transform_o *v88; // x0
  __int64 v89; // x1
  float v90; // s12
  UnityEngine_Transform_o *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x0
  __int64 v94; // x1
  const MethodInfo *v95; // x4
  int32_t i; // w22
  UnityEngine_GameObject_o *v97; // x0
  __int64 v98; // x1
  UnityEngine_Transform_o *v99; // x0
  __int64 v100; // x1
  UnityEngine_Component_o *Child; // x0
  __int64 v102; // x1
  UnityEngine_GameObject_o *v103; // x24
  _BOOL8 HasComponent_StoneCountRefreshComponent; // x0
  __int64 v105; // x1
  UnityEngine_Renderer_o *v106; // x0
  __int64 v107; // x1
  UnityEngine_Material_o *material; // x23
  _BOOL8 v109; // x0
  __int64 v110; // x1
  _BOOL8 v111; // x0
  __int64 v112; // x1
  _BOOL8 v113; // x0
  __int64 v114; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v116; // x1
  UnityEngine_Transform_o *v117; // x0
  __int64 v118; // x1
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *v120; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E4D0F & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_GameObjectExtensions_HasComponent_FGO_param1anim___, v9, v10, v11);
    sub_B5D5C4(&Method_GameObjectExtensions_HasComponent_FGO_param2anim___, v12, v13, v14);
    sub_B5D5C4(&Method_GameObjectExtensions_HasComponent_FGO_param3anim___, v15, v16, v17);
    sub_B5D5C4(&Method_GameObjectExtensions_HasComponent_Renderer___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16381/*"_threeValue2"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_16385/*"_twoValue0"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16386/*"_twoValue1"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_16376/*"_threeValue0"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16377/*"_threeValue1"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_16356/*"_oneValue"*/, v48, v49, v50);
    byte_42E4D0F = 1;
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
      v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v52 )
        sub_B5D69C(0LL, v53);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(v52, 0LL);
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
    v55 = UnityEngine_Object__op_Inequality(parent, 0LL, 0LL);
    if ( v55 )
    {
      if ( !data )
        sub_B5D69C(v55, v56);
      Object_Texture2D = AssetData__GetObject_Texture2D_(
                           data,
                           (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_GameObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v58 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_Texture2D,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v60 = v58;
      if ( !v58 )
        sub_B5D69C(0LL, v59);
      Component_srcLineSprite = (CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v58,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      v62 = UnityEngine_GameObject__get_transform(v60, 0LL);
      if ( !Object_Texture2D )
        sub_B5D69C(v62, v63);
      v64 = v62;
      v65 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object_Texture2D, 0LL);
      if ( !v65 )
        sub_B5D69C(0LL, v66);
      localScale = UnityEngine_Transform__get_localScale(v65, 0LL);
      flip = this->fields.flip;
      x = localScale.fields.x;
      y = localScale.fields.y;
      z = localScale.fields.z;
      if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
      }
      *(UnityEngine_Quaternion_o *)&v74 = CommonEffectManager__GetFlipQuaternion(flip, v67);
      if ( !parent )
        sub_B5D69C(v72, v73);
      v78 = v74;
      v79 = v75;
      v80 = v76;
      v81 = v77;
      v82 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
      if ( !v64 )
        sub_B5D69C(v82, v82);
      UnityEngine_Transform__set_parent(v64, v82, 0LL);
      v83 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v83 )
        sub_B5D69C(0LL, v84);
      localPosition = UnityEngine_Transform__get_localPosition(v83, 0LL);
      UnityEngine_Transform__set_localPosition(v64, localPosition, 0LL);
      v125.fields.x = v78;
      v125.fields.y = v79;
      v125.fields.z = v80;
      v125.fields.w = v81;
      UnityEngine_Transform__set_localRotation(v64, v125, 0LL);
      v85 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v85 )
        sub_B5D69C(0LL, v86);
      LODWORD(v87) = (unsigned int)UnityEngine_Transform__get_localScale(v85, 0LL);
      v88 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v88 )
        sub_B5D69C(0LL, v89);
      v123 = UnityEngine_Transform__get_localScale(v88, 0LL);
      v90 = v123.fields.y;
      v91 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v91 )
        sub_B5D69C(0LL, v92);
      v124 = UnityEngine_Transform__get_localScale(v91, 0LL);
      v124.fields.x = x * v87;
      v124.fields.y = y * v90;
      v124.fields.z = z * v124.fields.z;
      UnityEngine_Transform__set_localScale(v64, v124, 0LL);
      if ( !Component_srcLineSprite )
        sub_B5D69C(v93, v94);
      CommonEffectComponent__Init_18130252(
        Component_srcLineSprite,
        data,
        this->fields.isSkip,
        this->fields.isPause,
        v95);
      if ( this->fields.param )
        ((void (__fastcall *)(CommonEffectComponent_o *))Component_srcLineSprite->klass->vtable._4_SetParam.method)(Component_srcLineSprite);
      for ( i = 0; ; ++i )
      {
        gameObject = UnityEngine_GameObject__get_gameObject(v60, 0LL);
        if ( !gameObject )
          sub_B5D69C(0LL, v116);
        v117 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !v117 )
          sub_B5D69C(0LL, v118);
        if ( i >= UnityEngine_Transform__get_childCount(v117, 0LL) )
          break;
        v97 = UnityEngine_GameObject__get_gameObject(v60, 0LL);
        if ( !v97 )
          sub_B5D69C(0LL, v98);
        v99 = UnityEngine_GameObject__get_transform(v97, 0LL);
        if ( !v99 )
          sub_B5D69C(0LL, v100);
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v99, i, 0LL);
        if ( !Child )
          sub_B5D69C(0LL, v102);
        v103 = UnityEngine_Component__get_gameObject(Child, 0LL);
        HasComponent_StoneCountRefreshComponent = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                                                    v103,
                                                    (const MethodInfo_1CC4F14 *)Method_GameObjectExtensions_HasComponent_Renderer___);
        if ( HasComponent_StoneCountRefreshComponent )
        {
          if ( !v103 )
            sub_B5D69C(HasComponent_StoneCountRefreshComponent, v105);
          v106 = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v103,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !v106 )
            sub_B5D69C(0LL, v107);
          material = UnityEngine_Renderer__get_material(v106, 0LL);
          v109 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                   v103,
                   (const MethodInfo_1CC4F14 *)Method_GameObjectExtensions_HasComponent_FGO_param1anim___);
          if ( v109 )
          {
            if ( !material )
              sub_B5D69C(v109, v110);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16356/*"_oneValue"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16356/*"_oneValue"*/, 0.0, 0LL);
          }
          v111 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                   v103,
                   (const MethodInfo_1CC4F14 *)Method_GameObjectExtensions_HasComponent_FGO_param2anim___);
          if ( v111 )
          {
            if ( !material )
              sub_B5D69C(v111, v112);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16385/*"_twoValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16386/*"_twoValue1"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16385/*"_twoValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16386/*"_twoValue1"*/, 0.0, 0LL);
          }
          v113 = GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
                   v103,
                   (const MethodInfo_1CC4F14 *)Method_GameObjectExtensions_HasComponent_FGO_param3anim___);
          if ( v113 )
          {
            if ( !material )
              sub_B5D69C(v113, v114);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16376/*"_threeValue0"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16377/*"_threeValue1"*/, 0LL);
            UnityEngine_Material__EnableKeyword(material, (System_String_o *)StringLiteral_16381/*"_threeValue2"*/, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16376/*"_threeValue0"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16377/*"_threeValue1"*/, 0.0, 0LL);
            UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16381/*"_threeValue2"*/, 0.0, 0LL);
          }
        }
      }
      this->fields.isEnable = 0;
      loadCallback = this->fields.loadCallback;
      if ( loadCallback )
        CommonEffectLoadComponent_LoadEndHandler__Invoke(loadCallback, Component_srcLineSprite, 0LL);
    }
    v120 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v120, 0LL);
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

  CommonEffectLoadComponent__Init_18141472(this, filename, 0LL, callback, isSkip, isPause, flip, v7);
}


void __fastcall CommonEffectLoadComponent__Init_18141472(
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
  sub_B5D560(&this->fields.param);
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
  CommonEffectLoadComponent__Init_18141692(this, filename, v15);
  if ( !this->fields.isInit )
  {
LABEL_5:
    if ( !callback )
      return;
LABEL_9:
    CommonEffectLoadComponent_LoadEndHandler__Invoke(callback, 0LL, 0LL);
  }
}


void __fastcall CommonEffectLoadComponent__Init_18141692(
        CommonEffectLoadComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v22; // x0
  __int64 v23; // x1
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  UnityEngine_Object_o *v25; // x19

  if ( (byte_42E4D0E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)filename, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CommonEffectLoadComponent_EndLoad__, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5949/*"EffectLoad("*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v18, v19, v20);
    byte_42E4D0E = 1;
  }
  if ( !this->fields.isInit )
  {
    *(_WORD *)&this->fields.isInit = 257;
    this->fields.effectName = filename;
    sub_B5D560(&this->fields.effectName);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v22 = System_String__Concat_44580072(
            (System_String_o *)StringLiteral_5949/*"EffectLoad("*/,
            filename,
            (System_String_o *)StringLiteral_659/*")"*/,
            0LL);
    if ( !gameObject )
      sub_B5D69C(v22, v23);
    UnityEngine_Object__set_name(gameObject, v22, 0LL);
    v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_CommonEffectLoadComponent_EndLoad__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(filename, v24, 1, 0LL) )
    {
      *(_WORD *)&this->fields.isInit = 0;
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v25, 0LL);
    }
  }
}


void __fastcall CommonEffectLoadComponent__OnDestroy(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *effectName; // x19

  if ( (byte_42E4D11 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4D11 = 1;
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
    CommonEffectLoadComponent__Init_18141692(this, this->fields.effectName, v3);
}


bool __fastcall CommonEffectLoadComponent__Stop(CommonEffectLoadComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *effectName; // x20
  CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E4D10 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E4D10 = 1;
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
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  return 1;
}


void __fastcall CommonEffectLoadComponent__add_loadCallback(
        CommonEffectLoadComponent_o *this,
        CommonEffectLoadComponent_LoadEndHandler_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CommonEffectLoadComponent_LoadEndHandler_o **p_loadCallback; // x20
  System_Delegate_o *v7; // x21
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CommonEffectLoadComponent_o *v12; // x0
  CommonEffectLoadComponent_LoadEndHandler_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E4D0C & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E4D0C = 1;
  }
  loadCallback = this->fields.loadCallback;
  p_loadCallback = &this->fields.loadCallback;
  v7 = (System_Delegate_o *)loadCallback;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (CommonEffectLoadComponent_LoadEndHandler_c *)v9->klass != CommonEffectLoadComponent_LoadEndHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_loadCallback, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (CommonEffectLoadComponent_o *)sub_B5D990(v9);
  CommonEffectLoadComponent__remove_loadCallback(v12, v13, v14);
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
  __int64 v3; // x3
  struct CommonEffectLoadComponent_LoadEndHandler_o **p_loadCallback; // x20
  System_Delegate_o *v7; // x21
  struct CommonEffectLoadComponent_LoadEndHandler_o *loadCallback; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CommonEffectLoadComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E4D0D & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E4D0D = 1;
  }
  loadCallback = this->fields.loadCallback;
  p_loadCallback = &this->fields.loadCallback;
  v7 = (System_Delegate_o *)loadCallback;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (CommonEffectLoadComponent_LoadEndHandler_c *)v9->klass != CommonEffectLoadComponent_LoadEndHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_loadCallback, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (CommonEffectLoadComponent_o *)sub_B5D990(v9);
  CommonEffectLoadComponent__get_EffectName(v12, v13);
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall CommonEffectLoadComponent_LoadEndHandler__EndInvoke(
        CommonEffectLoadComponent_LoadEndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  CommonEffectComponent_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(CommonEffectComponent_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, CommonEffectComponent_o *, _QWORD); // x0
  CommonEffectLoadComponent_LoadEndHandler_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(CommonEffectComponent_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  CommonEffectComponent_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  CommonEffectLoadComponent_LoadEndHandler_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(CommonEffectComponent_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, effect, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = effect->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&effect->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&effect->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(effect, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&effect->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(CommonEffectComponent_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(effect, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = effect->klass;
                if ( *(_WORD *)&effect->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&effect->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(effect, class_0, v9, v11);
                }
                (*(void (__fastcall **)(CommonEffectComponent_o *, _QWORD))v15)(effect, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(CommonEffectComponent_o *, _QWORD))&effect->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  effect,
                  *((_QWORD *)&effect->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(effect, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, effect, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))v23)(
                v31,
                effect,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, CommonEffectComponent_o *, _QWORD))(*v31
                                                                                   + 16LL
                                                                                   * *(unsigned __int16 *)(v30 + 72)
                                                                                   + 312))(
                v31,
                effect,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, CommonEffectComponent_o *, __int64))v32)(v31, effect, v30);
    }
  }
}