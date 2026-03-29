void NGUISpriteMaterialControl___ctor(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4D2A752 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D2A752 = 1;
  }
  v3 = StringLiteral_16370/*"_MaskTex"*/;
  this->fields.maskPropertyName = (struct System_String_o *)StringLiteral_16370/*"_MaskTex"*/;
  sub_1C93A78(&this->fields.maskPropertyName, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NGUISpriteMaterialControl__ApplyCustomMaterial(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sprite; // x20
  UIAtlas_o *v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UnityEngine_Object_o **p_cloneAtlas; // x20
  UnityEngine_Object_o *cloneAtlas; // x21
  UnityEngine_Object_o *cloneMaterial; // x21
  struct UIAtlas_o **p_originalAtlas; // x21
  UnityEngine_Object_o *originalAtlas; // x22
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *v14; // x1
  UnityEngine_Material_o *baseMaterial; // x22
  UnityEngine_Material_o *v16; // x23
  struct UnityEngine_Material_o **p_cloneMaterial; // x22
  UnityEngine_Object_o *texture; // x23
  UnityEngine_Material_o *v19; // x23
  UnityEngine_Object_o *maskTexture; // x23
  Il2CppObject *gameObject; // x22
  UnityEngine_Object_o *v22; // x21
  System_String_o *name; // x0
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *Component_object; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4D2A74F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_131/*" (Clone)"*/);
    byte_4D2A74F = 1;
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UIAtlas_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    v6 = this->fields.sprite;
    if ( !v6 )
      goto LABEL_52;
    mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mAtlas, 0, 0) )
      return;
    p_cloneAtlas = (UnityEngine_Object_o **)&this->fields.cloneAtlas;
    cloneAtlas = (UnityEngine_Object_o *)this->fields.cloneAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(cloneAtlas, 0, 0) )
      goto LABEL_17;
    cloneMaterial = (UnityEngine_Object_o *)this->fields.cloneMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(cloneMaterial, 0, 0) )
    {
LABEL_17:
      p_originalAtlas = &this->fields.originalAtlas;
      originalAtlas = (UnityEngine_Object_o *)this->fields.originalAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (UIAtlas_o *)UnityEngine_Object__op_Equality(originalAtlas, 0, 0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v13 = this->fields.sprite;
        if ( !v13 )
          goto LABEL_52;
        v14 = v13->fields.mAtlas;
        *p_originalAtlas = v14;
        sub_1C93A78(&this->fields.originalAtlas, v14);
      }
      baseMaterial = this->fields.baseMaterial;
      v16 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71982472(v16, baseMaterial, 0);
      this->fields.cloneMaterial = v16;
      p_cloneMaterial = &this->fields.cloneMaterial;
      sub_1C93A78(&this->fields.cloneMaterial, v16);
      v4 = this->fields.originalAtlas;
      if ( !v4 )
        goto LABEL_52;
      texture = (UnityEngine_Object_o *)UIAtlas__get_texture(v4, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
      {
        v4 = *p_originalAtlas;
        if ( !*p_originalAtlas )
          goto LABEL_52;
        v19 = *p_cloneMaterial;
        v4 = (UIAtlas_o *)UIAtlas__get_texture(v4, 0);
        if ( !v19 )
          goto LABEL_52;
        UnityEngine_Material__set_mainTexture(v19, (UnityEngine_Texture_o *)v4, 0);
      }
      maskTexture = (UnityEngine_Object_o *)this->fields.maskTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(maskTexture, 0, 0) )
      {
        v4 = (UIAtlas_o *)this->fields.cloneMaterial;
        if ( !v4 )
          goto LABEL_52;
        if ( UnityEngine_Material__HasProperty((UnityEngine_Material_o *)v4, this->fields.maskPropertyId, 0) )
        {
          v4 = (UIAtlas_o *)*p_cloneMaterial;
          if ( !*p_cloneMaterial )
            goto LABEL_52;
          UnityEngine_Material__SetTexture_71984056(
            (UnityEngine_Material_o *)v4,
            this->fields.maskPropertyId,
            this->fields.maskTexture,
            0);
        }
      }
      v4 = *p_originalAtlas;
      if ( !*p_originalAtlas )
        goto LABEL_52;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = (UIAtlas_o *)UnityEngine_Object__Instantiate_object_(
                          gameObject,
                          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !gameObject )
        goto LABEL_52;
      v22 = (UnityEngine_Object_o *)v4;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      v4 = (UIAtlas_o *)System_String__Concat_64425724(name, (System_String_o *)StringLiteral_131/*" (Clone)"*/, 0);
      if ( !v22 )
        goto LABEL_52;
      UnityEngine_Object__set_name(v22, (System_String_o *)v4, 0);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v22, 0);
      v4 = (UIAtlas_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)v4, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v22,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      *p_cloneAtlas = (UnityEngine_Object_o *)Component_object;
      sub_1C93A78(&this->fields.cloneAtlas, Component_object);
      if ( !UnityEngine_Object__op_Inequality(*p_cloneAtlas, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(v22, 0);
        NGUISpriteMaterialControl__CleanupDynamicObjects(this, v26);
        return;
      }
      v4 = (UIAtlas_o *)*p_cloneAtlas;
      if ( !*p_cloneAtlas || (UIAtlas__set_replacement(v4, 0, 0), (v4 = (UIAtlas_o *)*p_cloneAtlas) == 0) )
LABEL_52:
        sub_1C93D2C(v4, v5);
      UIAtlas__set_spriteMaterial(v4, this->fields.cloneMaterial, 0);
    }
    v4 = (UIAtlas_o *)this->fields.sprite;
    if ( v4 )
    {
      UISprite__set_atlas((UISprite_o *)v4, this->fields.cloneAtlas, 0);
      v4 = (UIAtlas_o *)this->fields.sprite;
      if ( v4 )
      {
        (*(void (__fastcall **)(UIAtlas_o *, void *))&v4->klass[2]._1.byval_arg.bits)(v4, v4->klass[2]._1.this_arg.data);
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

  if ( (byte_4D2A74C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    byte_4D2A74C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  this->fields.sprite = (struct UISprite_o *)Component_object;
  p_sprite = &this->fields.sprite;
  sub_1C93A78(p_sprite, Component_object);
  *((_DWORD *)p_sprite + 8) = UnityEngine_Shader__PropertyToID((System_String_o *)*(p_sprite - 1), 0);
}


void NGUISpriteMaterialControl__CleanupDynamicObjects(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  struct UnityEngine_Material_o **p_cloneMaterial; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_Material_o *cloneMaterial; // t1
  bool isPlaying; // w0
  UnityEngine_Object_o *v7; // x20
  bool v8; // w21

  if ( (byte_4D2A751 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A751 = 1;
  }
  this->fields.cloneAtlas = 0;
  sub_1C93A78(&this->fields.cloneAtlas, 0);
  cloneMaterial = this->fields.cloneMaterial;
  p_cloneMaterial = &this->fields.cloneMaterial;
  v4 = (UnityEngine_Object_o *)cloneMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v7 = (UnityEngine_Object_o *)*p_cloneMaterial;
    v8 = isPlaying;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v8 )
      UnityEngine_Object__Destroy_72119908(v7, 0);
    else
      UnityEngine_Object__DestroyImmediate_72120096(v7, 0);
    *p_cloneMaterial = 0;
    sub_1C93A78(p_cloneMaterial, 0);
  }
}


void NGUISpriteMaterialControl__OnDestroy(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sprite; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *originalAtlas; // x20
  UISprite_o *v6; // x0

  if ( (byte_4D2A74E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A74E = 1;
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sprite, 0, 0) )
  {
    originalAtlas = (UnityEngine_Object_o *)this->fields.originalAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(originalAtlas, 0, 0) )
    {
      v6 = this->fields.sprite;
      if ( !v6 )
        sub_1C93D2C(0, v4);
      UISprite__set_atlas(v6, this->fields.originalAtlas, 0);
    }
  }
  NGUISpriteMaterialControl__CleanupDynamicObjects(this, v4);
}


void NGUISpriteMaterialControl__OnEnable(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseMaterial; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D2A74D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A74D = 1;
  }
  baseMaterial = (UnityEngine_Object_o *)this->fields.baseMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseMaterial, 0, 0) )
    NGUISpriteMaterialControl__ApplyCustomMaterial(this, v4);
}


void NGUISpriteMaterialControl__RevertToOriginal(NGUISpriteMaterialControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sprite; // x20
  UnityEngine_Object_o *originalAtlas; // x20
  __int64 v5; // x1
  UISprite_o *v6; // x0

  if ( (byte_4D2A750 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A750 = 1;
  }
  sprite = (UnityEngine_Object_o *)this->fields.sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sprite, 0, 0) )
  {
    originalAtlas = (UnityEngine_Object_o *)this->fields.originalAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(originalAtlas, 0, 0) )
    {
      v6 = this->fields.sprite;
      if ( !v6 || (UISprite__set_atlas(v6, this->fields.originalAtlas, 0), (v6 = this->fields.sprite) == 0) )
        sub_1C93D2C(v6, v5);
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v6->klass->vtable._30_MarkAsChanged.methodPtr)(
        v6,
        v6->klass->vtable._30_MarkAsChanged.method);
    }
  }
}