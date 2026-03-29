void GardenObject___ctor(GardenObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GardenObject__ApplyCustomMaterial(
        GardenObject_o *this,
        float maskOffset,
        float mainOffset,
        int32_t splitNum,
        const MethodInfo *method)
{
  UIWidget_o *gardenSprite; // x0
  int32_t v10; // w23
  int32_t v11; // w0
  UnityEngine_Object_o **p_cloneAtlas; // x20
  UnityEngine_Object_o *cloneAtlas; // x24
  int32_t v14; // w21
  UnityEngine_Object_o *cloneMaterial; // x24
  struct GardenItem_o *item; // x8
  UnityEngine_Object_o *atlas; // x24
  struct GardenItem_o *v18; // x8
  UnityEngine_Material_o *spriteMaterial; // x24
  UnityEngine_Material_o *v20; // x25
  struct UnityEngine_Material_o **p_cloneMaterial; // x24
  struct GardenItem_o *v22; // x8
  struct GardenItem_o *v23; // x8
  Il2CppObject *gameObject; // x21
  UnityEngine_Transform_o *transform; // x22
  struct GardenItem_o *v26; // x8
  UnityEngine_Object_o *v27; // x21
  System_String_o *name; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v30; // x1
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4

  if ( (byte_4D2AD80 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16365/*"_MainTex"*/);
    sub_1C93AD4(&StringLiteral_131/*" (Clone)"*/);
    sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D2AD80 = 1;
  }
  gardenSprite = (UIWidget_o *)this->fields.gardenSprite;
  if ( !gardenSprite )
    goto LABEL_48;
  UIWidget__set_depth(gardenSprite, splitNum, 0);
  v10 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16370/*"_MaskTex"*/, 0);
  v11 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16365/*"_MainTex"*/, 0);
  p_cloneAtlas = (UnityEngine_Object_o **)&this->fields.cloneAtlas;
  cloneAtlas = (UnityEngine_Object_o *)this->fields.cloneAtlas;
  v14 = v11;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cloneAtlas, 0, 0) )
  {
    cloneMaterial = (UnityEngine_Object_o *)this->fields.cloneMaterial;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cloneMaterial, 0, 0) )
    {
      gardenSprite = (UIWidget_o *)this->fields.cloneMaterial;
      if ( splitNum >= 2 )
      {
        if ( !gardenSprite )
          goto LABEL_48;
        v33.fields.y = 0.0;
        v33.fields.x = maskOffset;
        UnityEngine_Material__SetTextureOffset_71984708((UnityEngine_Material_o *)gardenSprite, v10, v33, 0);
      }
      else
      {
        if ( !gardenSprite )
          goto LABEL_48;
        UnityEngine_Material__CopyPropertiesFromMaterial(
          (UnityEngine_Material_o *)gardenSprite,
          this->fields.defaultMaterial,
          0);
      }
      gardenSprite = (UIWidget_o *)this->fields.cloneMaterial;
      if ( gardenSprite )
      {
        v34.fields.y = 0.0;
        v34.fields.x = mainOffset;
        UnityEngine_Material__SetTextureOffset_71984708((UnityEngine_Material_o *)gardenSprite, v14, v34, 0);
LABEL_42:
        gardenSprite = (UIWidget_o *)this->fields.gardenSprite;
        if ( gardenSprite )
        {
          UISprite__set_atlas((UISprite_o *)gardenSprite, this->fields.cloneAtlas, 0);
          gardenSprite = (UIWidget_o *)this->fields.gardenSprite;
          if ( gardenSprite )
          {
            ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))gardenSprite->klass->vtable._30_MarkAsChanged.methodPtr)(
              gardenSprite,
              gardenSprite->klass->vtable._30_MarkAsChanged.method);
            return;
          }
        }
      }
LABEL_48:
      sub_1C93D2C(gardenSprite, *(_QWORD *)&splitNum);
    }
  }
  item = this->fields.item;
  if ( item )
  {
    atlas = (UnityEngine_Object_o *)item->fields.atlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gardenSprite = (UIWidget_o *)UnityEngine_Object__op_Equality(atlas, 0, 0);
    if ( ((unsigned __int8)gardenSprite & 1) == 0 )
    {
      v18 = this->fields.item;
      if ( !v18 )
        goto LABEL_48;
      gardenSprite = (UIWidget_o *)v18->fields.atlas;
      if ( !gardenSprite )
        goto LABEL_48;
      spriteMaterial = UIAtlas__get_spriteMaterial((UIAtlas_o *)gardenSprite, 0);
      v20 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71982472(v20, spriteMaterial, 0);
      this->fields.cloneMaterial = v20;
      p_cloneMaterial = &this->fields.cloneMaterial;
      gardenSprite = (UIWidget_o *)sub_1C93A78(&this->fields.cloneMaterial, v20);
      if ( splitNum >= 2 )
      {
        v22 = this->fields.item;
        if ( !v22 )
          goto LABEL_48;
        gardenSprite = (UIWidget_o *)this->fields.cloneMaterial;
        if ( !gardenSprite )
          goto LABEL_48;
        UnityEngine_Material__SetTexture_71984056(
          (UnityEngine_Material_o *)gardenSprite,
          v10,
          v22->fields.maskTexture,
          0);
        gardenSprite = (UIWidget_o *)*p_cloneMaterial;
        if ( !*p_cloneMaterial )
          goto LABEL_48;
        v31.fields.y = 0.0;
        v31.fields.x = maskOffset;
        UnityEngine_Material__SetTextureOffset_71984708((UnityEngine_Material_o *)gardenSprite, v10, v31, 0);
      }
      gardenSprite = (UIWidget_o *)*p_cloneMaterial;
      if ( !*p_cloneMaterial )
        goto LABEL_48;
      v32.fields.y = 0.0;
      v32.fields.x = mainOffset;
      UnityEngine_Material__SetTextureOffset_71984708((UnityEngine_Material_o *)gardenSprite, v14, v32, 0);
      v23 = this->fields.item;
      if ( !v23 )
        goto LABEL_48;
      gardenSprite = (UIWidget_o *)v23->fields.atlas;
      if ( !gardenSprite )
        goto LABEL_48;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gardenSprite, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gardenSprite = (UIWidget_o *)UnityEngine_Object__Instantiate_object__52629400(
                                     gameObject,
                                     transform,
                                     (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
      v26 = this->fields.item;
      if ( !v26 )
        goto LABEL_48;
      v27 = (UnityEngine_Object_o *)gardenSprite;
      gardenSprite = (UIWidget_o *)v26->fields.atlas;
      if ( !gardenSprite )
        goto LABEL_48;
      gardenSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gardenSprite, 0);
      if ( !gardenSprite )
        goto LABEL_48;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gardenSprite, 0);
      gardenSprite = (UIWidget_o *)System_String__Concat_64425724(name, (System_String_o *)StringLiteral_131/*" (Clone)"*/, 0);
      if ( !v27 )
        goto LABEL_48;
      UnityEngine_Object__set_name(v27, (System_String_o *)gardenSprite, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v27,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      *p_cloneAtlas = (UnityEngine_Object_o *)Component_object;
      sub_1C93A78(&this->fields.cloneAtlas, Component_object);
      if ( UnityEngine_Object__op_Inequality(*p_cloneAtlas, 0, 0) )
      {
        gardenSprite = (UIWidget_o *)*p_cloneAtlas;
        if ( !*p_cloneAtlas )
          goto LABEL_48;
        UIAtlas__set_replacement((UIAtlas_o *)gardenSprite, 0, 0);
        gardenSprite = (UIWidget_o *)*p_cloneAtlas;
        if ( !*p_cloneAtlas )
          goto LABEL_48;
        UIAtlas__set_spriteMaterial((UIAtlas_o *)gardenSprite, this->fields.cloneMaterial, 0);
        goto LABEL_42;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v27, 0);
      GardenObject__CleanupDynamicObjects(this, v30);
    }
  }
}


void GardenObject__CleanupDynamicObjects(GardenObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_cloneAtlas; // x20
  UnityEngine_Object_o *cloneAtlas; // x21
  _BOOL8 isPlaying; // x0
  __int64 v6; // x1
  bool v7; // w21
  UnityEngine_Object_o *gameObject; // x22
  struct UnityEngine_Material_o **p_cloneMaterial; // x19
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_Material_o *cloneMaterial; // t1
  bool v12; // w0
  UnityEngine_Object_o *v13; // x20
  bool v14; // w21

  if ( (byte_4D2AD81 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AD81 = 1;
  }
  p_cloneAtlas = (UnityEngine_Component_o **)&this->fields.cloneAtlas;
  cloneAtlas = (UnityEngine_Object_o *)this->fields.cloneAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cloneAtlas, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    if ( !*p_cloneAtlas )
      sub_1C93D2C(isPlaying, v6);
    v7 = isPlaying;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_cloneAtlas, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v7 )
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
    else
      UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
  }
  this->fields.cloneAtlas = 0;
  sub_1C93A78(&this->fields.cloneAtlas, 0);
  cloneMaterial = this->fields.cloneMaterial;
  p_cloneMaterial = &this->fields.cloneMaterial;
  v10 = (UnityEngine_Object_o *)cloneMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    v12 = UnityEngine_Application__get_isPlaying(0);
    v13 = (UnityEngine_Object_o *)*p_cloneMaterial;
    v14 = v12;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( v14 )
      UnityEngine_Object__Destroy_72119908(v13, 0);
    else
      UnityEngine_Object__DestroyImmediate_72120096(v13, 0);
    *p_cloneMaterial = 0;
    sub_1C93A78(p_cloneMaterial, 0);
  }
}


void GardenObject__SetItem(GardenObject_o *this, GardenItem_o *item, const MethodInfo *method)
{
  UnityEngine_Object_o *gardenSprite; // x21
  UISprite_o *atlas; // x0
  __int64 v7; // x1
  struct UnityEngine_Material_o *spriteMaterial; // x0

  if ( (byte_4D2AD7F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AD7F = 1;
  }
  GardenObject__CleanupDynamicObjects(this, (const MethodInfo *)item);
  this->fields.item = item;
  sub_1C93A78(&this->fields.item, item);
  gardenSprite = (UnityEngine_Object_o *)this->fields.gardenSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  atlas = (UISprite_o *)UnityEngine_Object__op_Inequality(gardenSprite, 0, 0);
  if ( item && ((unsigned __int8)atlas & 1) != 0 )
  {
    atlas = this->fields.gardenSprite;
    if ( !atlas || (UISprite__set_atlas(atlas, item->fields.atlas, 0), (atlas = this->fields.gardenSprite) == 0) )
LABEL_13:
      sub_1C93D2C(atlas, v7);
    UISprite__set_spriteName(atlas, item->fields.imageName, 0);
  }
  else if ( !item )
  {
    goto LABEL_13;
  }
  atlas = (UISprite_o *)item->fields.atlas;
  if ( !atlas )
    goto LABEL_13;
  spriteMaterial = UIAtlas__get_spriteMaterial((UIAtlas_o *)atlas, 0);
  this->fields.defaultMaterial = spriteMaterial;
  sub_1C93A78(&this->fields.defaultMaterial, spriteMaterial);
}