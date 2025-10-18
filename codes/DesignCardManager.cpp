void DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // w8

  if ( (byte_4C42679 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
    byte_4C42679 = 1;
  }
  v3 = sub_1C37100(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C372B4(0);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 || (*(_DWORD *)(v3 + 32) = 512, v6 == 1) )
    sub_1C372BC(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cardTextureSize, v3, v4, v5);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
}


System_String_o *DesignCardManager__GetCommanCodeCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPrefix; // x0
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = imageId;
  if ( (byte_4C42675 & 1) == 0 )
  {
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&StringLiteral_18273/*"cord_b"*/);
    sub_1C37058(&StringLiteral_18272/*"cord"*/);
    sub_1C37058(&StringLiteral_17979/*"class"*/);
    sub_1C37058(&StringLiteral_4588/*"CommandCord/"*/);
    sub_1C37058(&StringLiteral_18274/*"cord_n"*/);
    byte_4C42675 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_63608204(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_17979/*"class"*/,
                             (System_String_o *)StringLiteral_18272/*"cord"*/,
                             0)) == 0 )
  {
    sub_1C372B4(DesignCardPrefix);
  }
  v6 = System_String__Replace_63608204(
         DesignCardPrefix,
         (System_String_o *)StringLiteral_18274/*"cord_n"*/,
         (System_String_o *)StringLiteral_18273/*"cord_b"*/,
         0);
  v7 = System_Int32__ToString((int32_t)&v9, 0);
  return System_String__Concat_63599904((System_String_o *)StringLiteral_4588/*"CommandCord/"*/, v6, v7, 0);
}


System_String_o *DesignCardManager__GetDesignCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPrefix; // x21
  int v8; // w8
  System_String_o *v9; // x0
  int v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42674 & 1) == 0 )
  {
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&StringLiteral_4482/*"ClassCard/"*/);
    byte_4C42674 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0);
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v8 = 1;
  else
    v8 = imageId + (imageId & 1) - 1;
  v11 = v8;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  return System_String__Concat_63599904((System_String_o *)StringLiteral_4482/*"ClassCard/"*/, DesignCardPrefix, v9, 0);
}


System_String_o *DesignCardManager__GetExceedFrameCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w8
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42676 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4482/*"ClassCard/"*/);
    byte_4C42676 = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_63599904((System_String_o *)StringLiteral_4482/*"ClassCard/"*/, prefix, v8, 0);
}


int32_t DesignCardManager__GetFileIndex(DesignCardManager_o *this, int32_t imageId, const MethodInfo *method)
{
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    return 1;
  else
    return imageId + (imageId & 1) - 1;
}


System_String_o *DesignCardManager__GetGrandDesignCardPath(
        DesignCardManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int v10; // w8
  Il2CppObject *v11; // x0
  int v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42677 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_4483/*"ClassCard/class_g_{0}"*/);
    byte_4C42677 = 1;
  }
  v10 = classId + (classId & 1) - 1;
  if ( this->fields.SVT_EQ_IMAGE_ID == classId )
    v10 = 1;
  v13 = v10;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, method, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_4483/*"ClassCard/class_g_{0}"*/, v11, 0);
}


void DesignCardManager__LoadDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v7; // x3

  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(
                                            this,
                                            imageId,
                                            rarity,
                                            (const MethodInfo *)callback);
  DesignCardManager__LoadDesignCardTexture_41250640(DesignCardPath, (System_String_o *)DesignCardPath, callback, v7);
}


void DesignCardManager__LoadDesignCardTexture_41250640(
        DesignCardManager_o *this,
        System_String_o *filePath,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  AssetLoader_LoadEndDataHandler_o *v10; // x20

  if ( (byte_4C42670 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__);
    sub_1C37058(&DesignCardManager___c__DisplayClass4_0_TypeInfo);
    byte_4C42670 = 1;
  }
  v6 = sub_1C372A4(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C372B4(v7);
  *(_QWORD *)(v6 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)callback, v8, v9);
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v10,
    (Il2CppObject *)v6,
    Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(filePath, v10, 1, 0);
}


void DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_4C42671 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C42671 = 1;
  }
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(DesignCardPath, 0);
}


void DesignCardManager__SetupCardImage(
        DesignCardManager_o *this,
        AssetData_o *d,
        UnityEngine_Transform_o *cardNode,
        int32_t imageId,
        const MethodInfo *method)
{
  DesignCardManager_o *v8; // x20
  DesignCardManager_o *v9; // x22
  Il2CppObject *Component_object; // x2
  const MethodInfo *v11; // x4

  v8 = this;
  if ( (byte_4C42678 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D___);
    this = (DesignCardManager_o *)sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C42678 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_30C8EC0 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_1C372B4(this);
  }
  v9 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(
    v8,
    imageId,
    (UITexture_o *)Component_object,
    (UnityEngine_Texture2D_o *)v9,
    v11);
}


void DesignCardManager__SetupDesignCard(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w21
  System_Action_object__o *v20; // x22
  const MethodInfo *v21; // x3
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v23; // x3

  if ( (byte_4C42672 & 1) == 0 )
  {
    sub_1C37058(&System_Action_Texture2D__TypeInfo);
    sub_1C37058(&Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__);
    sub_1C37058(&DesignCardManager___c__DisplayClass6_0_TypeInfo);
    byte_4C42672 = 1;
  }
  v11 = sub_1C372A4(DesignCardManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C372B4(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)target, v15, v16);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 40), (int32_t)callback, v17, v18);
  v19 = *(_DWORD *)(v11 + 24);
  v20 = (System_Action_object__o *)sub_1C372A4(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__,
    0);
  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(this, v19, rarity, v21);
  DesignCardManager__LoadDesignCardTexture_41250640(
    DesignCardPath,
    (System_String_o *)DesignCardPath,
    (System_Action_Texture2D__o *)v20,
    v23);
}


void DesignCardManager__SetupDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        UITexture_o *target,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  char v6; // w20
  DesignCardManager_o *v7; // x21
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !target
    || (v6 = imageId,
        v7 = this,
        this = (DesignCardManager_o *)((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, const MethodInfo *))target->klass->vtable._27_set_mainTexture.methodPtr)(
                                        target,
                                        tex,
                                        target->klass->vtable._27_set_mainTexture.method),
        (cardTextureSize = v7->fields.cardTextureSize) == 0) )
  {
    sub_1C372B4(this);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
    sub_1C372BC(this);
  v9.fields.m_XMin = (float)((v6 & 1) == 0) * 0.5;
  v9.fields.m_Height = (float)cardTextureSize->m_Items[1] * 0.00097656;
  v9.fields.m_YMin = 1.0 - v9.fields.m_Height;
  v9.fields.m_Width = 0.5;
  UITexture__set_uvRect(target, v9, 0);
}


void DesignCardManager__SetupDesignCard_41251312(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *filePath,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_object__o *v19; // x20
  DesignCardManager_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4C42673 & 1) == 0 )
  {
    sub_1C37058(&System_Action_Texture2D__TypeInfo);
    sub_1C37058(&Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__);
    sub_1C37058(&DesignCardManager___c__DisplayClass7_0_TypeInfo);
    byte_4C42673 = 1;
  }
  v11 = sub_1C372A4(DesignCardManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C372B4(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)target, v15, v16);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 40), (int32_t)callback, v17, v18);
  v19 = (System_Action_object__o *)sub_1C372A4(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__,
    0);
  DesignCardManager__LoadDesignCardTexture_41250640(v20, filePath, (System_Action_Texture2D__o *)v19, v21);
}


void DesignCardManager___c__DisplayClass4_0___ctor(
        DesignCardManager___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass4_0___LoadDesignCardTexture_b__0(
        DesignCardManager___c__DisplayClass4_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DesignCardManager___c__DisplayClass4_0_o *v4; // x19
  Il2CppObject *Object_object; // x0
  struct System_Action_Texture2D__o *callback; // x8

  v4 = this;
  if ( (byte_4C4267A & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass4_0_o *)sub_1C37058(&Method_AssetData_GetObject_Texture2D___);
    byte_4C4267A = 1;
  }
  if ( !data )
    sub_1C372B4(this);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_30C8EC0 *)Method_AssetData_GetObject_Texture2D___);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      Object_object,
      callback->fields.method);
}


void DesignCardManager___c__DisplayClass6_0___ctor(
        DesignCardManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass6_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass6_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void DesignCardManager___c__DisplayClass7_0___ctor(
        DesignCardManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass7_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass7_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}