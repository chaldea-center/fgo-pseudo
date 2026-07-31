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
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w21
  UnityEngine_Object_o **p_cloneAtlas; // x20
  UnityEngine_Object_o *cloneAtlas; // x24
  __int64 v16; // x2
  UnityEngine_Object_o *cloneMaterial; // x24
  struct GardenItem_o *item; // x8
  UnityEngine_Object_o *atlas; // x24
  struct GardenItem_o *v20; // x8
  UnityEngine_Material_o *spriteMaterial; // x24
  UnityEngine_Material_o *v22; // x25
  struct UnityEngine_Material_o **p_cloneMaterial; // x24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct GardenItem_o *v30; // x8
  struct GardenItem_o *v31; // x8
  Il2CppObject *gameObject; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Transform_o *transform; // x22
  struct GardenItem_o *v36; // x8
  UnityEngine_Object_o *v37; // x21
  System_String_o *name; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x2
  const MethodInfo *v47; // x1
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v49; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v51; // 0:s0.4,4:s1.4

  if ( (byte_593280C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16879/*"_MainTex"*/);
    sub_21FFC50(&StringLiteral_131/*" (Clone)"*/);
    sub_21FFC50(&StringLiteral_16884/*"_MaskTex"*/);
    byte_593280C = 1;
  }
  gardenSprite = (UIWidget_o *)this->fields.gardenSprite;
  if ( !gardenSprite )
    goto LABEL_48;
  UIWidget__set_depth(gardenSprite, splitNum, 0);
  v10 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16884/*"_MaskTex"*/, 0);
  v13 = UnityEngine_Shader__PropertyToID((System_String_o *)StringLiteral_16879/*"_MainTex"*/, 0);
  p_cloneAtlas = (UnityEngine_Object_o **)&this->fields.cloneAtlas;
  cloneAtlas = (UnityEngine_Object_o *)this->fields.cloneAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(cloneAtlas, 0, 0) )
  {
    cloneMaterial = (UnityEngine_Object_o *)this->fields.cloneMaterial;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&splitNum, v16);
    if ( UnityEngine_Object__op_Inequality(cloneMaterial, 0, 0) )
    {
      gardenSprite = (UIWidget_o *)this->fields.cloneMaterial;
      if ( splitNum >= 2 )
      {
        if ( !gardenSprite )
          goto LABEL_48;
        v50.fields.y = 0.0;
        v50.fields.x = maskOffset;
        UnityEngine_Material__SetTextureOffset_83063460((UnityEngine_Material_o *)gardenSprite, v10, v50, 0);
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
        v51.fields.y = 0.0;
        v51.fields.x = mainOffset;
        UnityEngine_Material__SetTextureOffset_83063460((UnityEngine_Material_o *)gardenSprite, v13, v51, 0);
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
      sub_21FFECC(gardenSprite, *(_QWORD *)&splitNum);
    }
  }
  item = this->fields.item;
  if ( item )
  {
    atlas = (UnityEngine_Object_o *)item->fields.atlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&splitNum, v16);
    gardenSprite = (UIWidget_o *)UnityEngine_Object__op_Equality(atlas, 0, 0);
    if ( ((unsigned __int8)gardenSprite & 1) == 0 )
    {
      v20 = this->fields.item;
      if ( !v20 )
        goto LABEL_48;
      gardenSprite = (UIWidget_o *)v20->fields.atlas;
      if ( !gardenSprite )
        goto LABEL_48;
      spriteMaterial = UIAtlas__get_spriteMaterial((UIAtlas_o *)gardenSprite, 0);
      v22 = (UnityEngine_Material_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83061620(v22, spriteMaterial, 0);
      this->fields.cloneMaterial = v22;
      p_cloneMaterial = &this->fields.cloneMaterial;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cloneMaterial,
        (int32_t)v22,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      if ( splitNum >= 2 )
      {
        v30 = this->fields.item;
        if ( !v30 )
          goto LABEL_48;
        gardenSprite = (UIWidget_o *)this->fields.cloneMaterial;
        if ( !gardenSprite )
          goto LABEL_48;
        UnityEngine_Material__SetTexture_83063164(
          (UnityEngine_Material_o *)gardenSprite,
          v10,
          v30->fields.maskTexture,
          0);
        gardenSprite = (UIWidget_o *)*p_cloneMaterial;
        if ( !*p_cloneMaterial )
          goto LABEL_48;
        v48.fields.y = 0.0;
        v48.fields.x = maskOffset;
        UnityEngine_Material__SetTextureOffset_83063460((UnityEngine_Material_o *)gardenSprite, v10, v48, 0);
      }
      gardenSprite = (UIWidget_o *)*p_cloneMaterial;
      if ( !*p_cloneMaterial )
        goto LABEL_48;
      v49.fields.y = 0.0;
      v49.fields.x = mainOffset;
      UnityEngine_Material__SetTextureOffset_83063460((UnityEngine_Material_o *)gardenSprite, v13, v49, 0);
      v31 = this->fields.item;
      if ( !v31 )
        goto LABEL_48;
      gardenSprite = (UIWidget_o *)v31->fields.atlas;
      if ( !gardenSprite )
        goto LABEL_48;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gardenSprite, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
      gardenSprite = (UIWidget_o *)UnityEngine_Object__Instantiate_object__59506996(
                                     gameObject,
                                     transform,
                                     (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
      v36 = this->fields.item;
      if ( !v36 )
        goto LABEL_48;
      v37 = (UnityEngine_Object_o *)gardenSprite;
      gardenSprite = (UIWidget_o *)v36->fields.atlas;
      if ( !gardenSprite )
        goto LABEL_48;
      gardenSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gardenSprite, 0);
      if ( !gardenSprite )
        goto LABEL_48;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gardenSprite, 0);
      gardenSprite = (UIWidget_o *)System_String__Concat_75438412(name, (System_String_o *)StringLiteral_131/*" (Clone)"*/, 0);
      if ( !v37 )
        goto LABEL_48;
      UnityEngine_Object__set_name(v37, (System_String_o *)gardenSprite, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v37,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      *p_cloneAtlas = (UnityEngine_Object_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cloneAtlas,
        (int32_t)Component_object,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&splitNum, v46);
      UnityEngine_Object__Destroy_83246496(v37, 0);
      GardenObject__CleanupDynamicObjects(this, v47);
    }
  }
}


void GardenObject__CleanupDynamicObjects(GardenObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cloneAtlas; // x21
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  bool isPlaying; // w8
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  MissionNaviTransitionBoardItem_o *p_cloneMaterial; // x19
  UnityEngine_Object_o *v24; // x20
  struct UnityEngine_Material_o *cloneMaterial; // t1
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  bool v30; // w8
  UnityEngine_Object_o *klass; // x20
  int v32; // w9
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_593280D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593280D = 1;
  }
  cloneAtlas = (UnityEngine_Object_o *)this->fields.cloneAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(cloneAtlas, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5, v6);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v14 = (UnityEngine_Component_o *)this->fields.cloneAtlas;
    if ( isPlaying )
    {
      if ( v14 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
        UnityEngine_Object__Destroy_83246496(gameObject, 0);
        goto LABEL_17;
      }
LABEL_30:
      sub_21FFECC(v14, v12);
    }
    if ( !v14 )
      goto LABEL_30;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    UnityEngine_Object__DestroyImmediate_83246828(v20, 0);
  }
LABEL_17:
  this->fields.cloneAtlas = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cloneAtlas, 0, v6, v7, v8, v9, v10, v11);
  cloneMaterial = this->fields.cloneMaterial;
  p_cloneMaterial = (MissionNaviTransitionBoardItem_o *)&this->fields.cloneMaterial;
  v24 = (UnityEngine_Object_o *)cloneMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( !UnityEngine_Object__op_Equality(v24, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v26, v27);
    v30 = UnityEngine_Application__get_isPlaying(0);
    klass = (UnityEngine_Object_o *)p_cloneMaterial->klass;
    v32 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( v30 )
    {
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
      UnityEngine_Object__Destroy_83246496(klass, 0);
    }
    else
    {
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
      UnityEngine_Object__DestroyImmediate_83246828(klass, 0);
    }
    p_cloneMaterial->klass = 0;
    sub_21FFBF4(p_cloneMaterial, 0, v33, v34, v35, v36, v37, v38);
  }
}


void GardenObject__SetItem(GardenObject_o *this, GardenItem_o *item, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *gardenSprite; // x21
  UISprite_o *atlas; // x0
  __int64 v15; // x1
  struct UnityEngine_Material_o *spriteMaterial; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_593280B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593280B = 1;
  }
  GardenObject__CleanupDynamicObjects(this, (const MethodInfo *)item);
  this->fields.item = item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.item, (int32_t)item, v5, v6, v7, v8, v9, v10);
  gardenSprite = (UnityEngine_Object_o *)this->fields.gardenSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  atlas = (UISprite_o *)UnityEngine_Object__op_Inequality(gardenSprite, 0, 0);
  if ( item && ((unsigned __int8)atlas & 1) != 0 )
  {
    atlas = this->fields.gardenSprite;
    if ( !atlas || (UISprite__set_atlas(atlas, item->fields.atlas, 0), (atlas = this->fields.gardenSprite) == 0) )
LABEL_13:
      sub_21FFECC(atlas, v15);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaterial,
    (int32_t)spriteMaterial,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}