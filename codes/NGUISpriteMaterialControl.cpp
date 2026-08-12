void NGUISpriteMaterialControl___ctor(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596A144 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596A144 = 1;
  }
  v9 = StringLiteral_16919/*"_MaskTex"*/;
  this->fields.maskPropertyName = (struct System_String_o *)StringLiteral_16919/*"_MaskTex"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.maskPropertyName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NGUISpriteMaterialControl__ApplyCustomMaterial(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sprite; // x20
  UIAtlas_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISprite_o *v8; // x8
  UnityEngine_Object_o *mAtlas; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o **p_cloneAtlas; // x20
  UnityEngine_Object_o *cloneAtlas; // x21
  __int64 v14; // x2
  UnityEngine_Object_o *cloneMaterial; // x21
  struct UIAtlas_o **p_originalAtlas; // x21
  UnityEngine_Object_o *originalAtlas; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UISprite_o *v24; // x8
  struct UIAtlas_o *v25; // x1
  UnityEngine_Material_o *baseMaterial; // x22
  UnityEngine_Material_o *v27; // x23
  struct UnityEngine_Material_o **p_cloneMaterial; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *texture; // x23
  __int64 v38; // x2
  UnityEngine_Material_o *v39; // x23
  UnityEngine_Object_o *maskTexture; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *gameObject; // x22
  UnityEngine_Object_o *v44; // x21
  System_String_o *name; // x0
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x2
  const MethodInfo *v55; // x1

  if ( (byte_596A141 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_131/*" (Clone)"*/);
    byte_596A141 = 1;
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (UIAtlas_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    v8 = this->fields.sprite;
    if ( !v8 )
      goto LABEL_52;
    mAtlas = (UnityEngine_Object_o *)v8->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Equality(mAtlas, 0, 0) )
      return;
    p_cloneAtlas = (UnityEngine_Object_o **)&this->fields.cloneAtlas;
    cloneAtlas = (UnityEngine_Object_o *)this->fields.cloneAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( !UnityEngine_Object__op_Inequality(cloneAtlas, 0, 0) )
      goto LABEL_17;
    cloneMaterial = (UnityEngine_Object_o *)this->fields.cloneMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v14);
    if ( !UnityEngine_Object__op_Inequality(cloneMaterial, 0, 0) )
    {
LABEL_17:
      p_originalAtlas = &this->fields.originalAtlas;
      originalAtlas = (UnityEngine_Object_o *)this->fields.originalAtlas;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v14);
      v5 = (UIAtlas_o *)UnityEngine_Object__op_Equality(originalAtlas, 0, 0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        v24 = this->fields.sprite;
        if ( !v24 )
          goto LABEL_52;
        v25 = v24->fields.mAtlas;
        *p_originalAtlas = v25;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.originalAtlas,
          (int32_t)v25,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      baseMaterial = this->fields.baseMaterial;
      v27 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83274924(v27, baseMaterial, 0);
      this->fields.cloneMaterial = v27;
      p_cloneMaterial = &this->fields.cloneMaterial;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cloneMaterial,
        (int32_t)v27,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v5 = this->fields.originalAtlas;
      if ( !v5 )
        goto LABEL_52;
      texture = (UnityEngine_Object_o *)UIAtlas__get_texture(v5, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
      if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
      {
        v5 = *p_originalAtlas;
        if ( !*p_originalAtlas )
          goto LABEL_52;
        v39 = *p_cloneMaterial;
        v5 = (UIAtlas_o *)UIAtlas__get_texture(v5, 0);
        if ( !v39 )
          goto LABEL_52;
        UnityEngine_Material__set_mainTexture(v39, (UnityEngine_Texture_o *)v5, 0);
      }
      maskTexture = (UnityEngine_Object_o *)this->fields.maskTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v38);
      if ( UnityEngine_Object__op_Inequality(maskTexture, 0, 0) )
      {
        v5 = (UIAtlas_o *)this->fields.cloneMaterial;
        if ( !v5 )
          goto LABEL_52;
        if ( UnityEngine_Material__HasProperty((UnityEngine_Material_o *)v5, this->fields.maskPropertyId, 0) )
        {
          v5 = (UIAtlas_o *)*p_cloneMaterial;
          if ( !*p_cloneMaterial )
            goto LABEL_52;
          UnityEngine_Material__SetTexture_83276468(
            (UnityEngine_Material_o *)v5,
            this->fields.maskPropertyId,
            this->fields.maskTexture,
            0);
        }
      }
      v5 = *p_originalAtlas;
      if ( !*p_originalAtlas )
        goto LABEL_52;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
      v5 = (UIAtlas_o *)UnityEngine_Object__Instantiate_object_(
                          gameObject,
                          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !gameObject )
        goto LABEL_52;
      v44 = (UnityEngine_Object_o *)v5;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      v5 = (UIAtlas_o *)System_String__Concat_75651716(name, (System_String_o *)StringLiteral_131/*" (Clone)"*/, 0);
      if ( !v44 )
        goto LABEL_52;
      UnityEngine_Object__set_name(v44, (System_String_o *)v5, 0);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v44, 0);
      v5 = (UIAtlas_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)v5, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v44,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      *p_cloneAtlas = (UnityEngine_Object_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cloneAtlas,
        (int32_t)Component_object,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      if ( !UnityEngine_Object__op_Inequality(*p_cloneAtlas, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v54);
        UnityEngine_Object__Destroy_83459800(v44, 0);
        NGUISpriteMaterialControl__CleanupDynamicObjects(this, v55);
        return;
      }
      v5 = (UIAtlas_o *)*p_cloneAtlas;
      if ( !*p_cloneAtlas || (UIAtlas__set_replacement(v5, 0, 0), (v5 = (UIAtlas_o *)*p_cloneAtlas) == 0) )
LABEL_52:
        sub_2213CDC(v5, v6);
      UIAtlas__set_spriteMaterial(v5, this->fields.cloneMaterial, 0);
    }
    v5 = (UIAtlas_o *)this->fields.sprite;
    if ( v5 )
    {
      UISprite__set_atlas((UISprite_o *)v5, this->fields.cloneAtlas, 0);
      v5 = (UIAtlas_o *)this->fields.sprite;
      if ( v5 )
      {
        (*(void (__fastcall **)(UIAtlas_o *, void *))&v5->klass[2]._1.byval_arg.bits)(v5, v5->klass[2]._1.this_arg.data);
        return;
      }
    }
    goto LABEL_52;
  }
}


void NGUISpriteMaterialControl__Awake(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_sprite; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596A13E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    byte_596A13E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  this->fields.sprite = (struct UISprite_o *)Component_object;
  p_sprite = &this->fields.sprite;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_sprite, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  *((_DWORD *)p_sprite + 8) = UnityEngine_Shader__PropertyToID((System_String_o *)*(p_sprite - 1), 0);
}


void NGUISpriteMaterialControl__CleanupDynamicObjects(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  MissionNaviTransitionBoardItem_o *p_cloneMaterial; // x19
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_Material_o *cloneMaterial; // t1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  bool isPlaying; // w8
  UnityEngine_Object_o *klass; // x20
  int v20; // w9
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596A143 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A143 = 1;
  }
  this->fields.cloneAtlas = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cloneAtlas, 0, v2, v3, v4, v5, v6, v7);
  cloneMaterial = this->fields.cloneMaterial;
  p_cloneMaterial = (MissionNaviTransitionBoardItem_o *)&this->fields.cloneMaterial;
  v12 = (UnityEngine_Object_o *)cloneMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v14, v15);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    klass = (UnityEngine_Object_o *)p_cloneMaterial->klass;
    v20 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( isPlaying )
    {
      if ( !v20 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      UnityEngine_Object__Destroy_83459800(klass, 0);
    }
    else
    {
      if ( !v20 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      UnityEngine_Object__DestroyImmediate_83460132(klass, 0);
    }
    p_cloneMaterial->klass = 0;
    sub_2213A04(p_cloneMaterial, 0, v21, v22, v23, v24, v25, v26);
  }
}


void NGUISpriteMaterialControl__OnDestroy(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sprite; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *originalAtlas; // x20
  UISprite_o *v8; // x0

  if ( (byte_596A140 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A140 = 1;
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sprite, 0, 0) )
  {
    originalAtlas = (UnityEngine_Object_o *)this->fields.originalAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(originalAtlas, 0, 0) )
    {
      v8 = this->fields.sprite;
      if ( !v8 )
        sub_2213CDC(0, v5);
      UISprite__set_atlas(v8, this->fields.originalAtlas, 0);
    }
  }
  NGUISpriteMaterialControl__CleanupDynamicObjects(this, v5);
}


void NGUISpriteMaterialControl__OnEnable(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseMaterial; // x20
  const MethodInfo *v5; // x1

  if ( (byte_596A13F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A13F = 1;
  }
  baseMaterial = (UnityEngine_Object_o *)this->fields.baseMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(baseMaterial, 0, 0) )
    NGUISpriteMaterialControl__ApplyCustomMaterial(this, v5);
}


void NGUISpriteMaterialControl__RevertToOriginal(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *originalAtlas; // x20
  __int64 v8; // x1
  UISprite_o *v9; // x0

  if ( (byte_596A142 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A142 = 1;
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sprite, 0, 0) )
  {
    originalAtlas = (UnityEngine_Object_o *)this->fields.originalAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(originalAtlas, 0, 0) )
    {
      v9 = this->fields.sprite;
      if ( !v9 || (UISprite__set_atlas(v9, this->fields.originalAtlas, 0), (v9 = this->fields.sprite) == 0) )
        sub_2213CDC(v9, v8);
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v9->klass->vtable._30_MarkAsChanged.methodPtr)(
        v9,
        v9->klass->vtable._30_MarkAsChanged.method);
    }
  }
}