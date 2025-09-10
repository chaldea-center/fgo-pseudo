void DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int v7; // w8

  if ( (byte_4C269B2 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
    byte_4C269B2 = 1;
  }
  v3 = sub_1C2D538(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 || (*(_DWORD *)(v3 + 32) = 512, v7 == 1) )
    sub_1C2D6F4(v3, v3, v5);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardTextureSize, v3, v5, v6);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
}


System_String_o *DesignCardManager__GetCommanCodeCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPrefix; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = imageId;
  if ( (byte_4C269AE & 1) == 0 )
  {
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&StringLiteral_18266/*"cord_b"*/);
    sub_1C2D490(&StringLiteral_18265/*"cord"*/);
    sub_1C2D490(&StringLiteral_17973/*"class"*/);
    sub_1C2D490(&StringLiteral_4580/*"CommandCord/"*/);
    sub_1C2D490(&StringLiteral_18267/*"cord_n"*/);
    byte_4C269AE = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_63504412(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_17973/*"class"*/,
                             (System_String_o *)StringLiteral_18265/*"cord"*/,
                             0)) == 0 )
  {
    sub_1C2D6EC(DesignCardPrefix, v6);
  }
  v7 = System_String__Replace_63504412(
         DesignCardPrefix,
         (System_String_o *)StringLiteral_18267/*"cord_n"*/,
         (System_String_o *)StringLiteral_18266/*"cord_b"*/,
         0);
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_63496112((System_String_o *)StringLiteral_4580/*"CommandCord/"*/, v7, v8, 0);
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

  if ( (byte_4C269AD & 1) == 0 )
  {
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&StringLiteral_4474/*"ClassCard/"*/);
    byte_4C269AD = 1;
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
  return System_String__Concat_63496112((System_String_o *)StringLiteral_4474/*"ClassCard/"*/, DesignCardPrefix, v9, 0);
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

  if ( (byte_4C269AF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4474/*"ClassCard/"*/);
    byte_4C269AF = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_63496112((System_String_o *)StringLiteral_4474/*"ClassCard/"*/, prefix, v8, 0);
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
  int v7; // w8
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C269B0 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_4475/*"ClassCard/class_g_{0}"*/);
    byte_4C269B0 = 1;
  }
  v7 = classId + (classId & 1) - 1;
  if ( this->fields.SVT_EQ_IMAGE_ID == classId )
    v7 = 1;
  v10 = v7;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_4475/*"ClassCard/class_g_{0}"*/, v8, 0);
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
  DesignCardManager__LoadDesignCardTexture_41029268(DesignCardPath, (System_String_o *)DesignCardPath, callback, v7);
}


void DesignCardManager__LoadDesignCardTexture_41029268(
        DesignCardManager_o *this,
        System_String_o *filePath,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetLoader_LoadEndDataHandler_o *v11; // x20

  if ( (byte_4C269A9 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__);
    sub_1C2D490(&DesignCardManager___c__DisplayClass4_0_TypeInfo);
    byte_4C269A9 = 1;
  }
  v6 = sub_1C2D6DC(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C2D6EC(v7, v8);
  *(_QWORD *)(v6 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)callback, v9, v10);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v6,
    Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(filePath, v11, 1, 0);
}


void DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_4C269AA & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C269AA = 1;
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
  if ( (byte_4C269B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D___);
    this = (DesignCardManager_o *)sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C269B1 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_30AFBB8 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_1C2D6EC(this, d);
  }
  v9 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w21
  System_Action_object__o *v21; // x22
  const MethodInfo *v22; // x3
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v24; // x3

  if ( (byte_4C269AB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Texture2D__TypeInfo);
    sub_1C2D490(&Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__);
    sub_1C2D490(&DesignCardManager___c__DisplayClass6_0_TypeInfo);
    byte_4C269AB = 1;
  }
  v11 = sub_1C2D6DC(DesignCardManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C2D6EC(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)target, v16, v17);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), (int32_t)callback, v18, v19);
  v20 = *(_DWORD *)(v11 + 24);
  v21 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__,
    0);
  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(this, v20, rarity, v22);
  DesignCardManager__LoadDesignCardTexture_41029268(
    DesignCardPath,
    (System_String_o *)DesignCardPath,
    (System_Action_Texture2D__o *)v21,
    v24);
}


// local variable allocation has failed, the output may be wrong!
void DesignCardManager__SetupDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        UITexture_o *target,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  char v6; // w20
  DesignCardManager_o *v7; // x21
  __int64 v8; // x2
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !target
    || (v6 = imageId,
        v7 = this,
        this = (DesignCardManager_o *)((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, const MethodInfo *))target->klass->vtable._27_set_mainTexture.methodPtr)(
                                        target,
                                        tex,
                                        target->klass->vtable._27_set_mainTexture.method),
        (cardTextureSize = v7->fields.cardTextureSize) == 0) )
  {
    sub_1C2D6EC(this, *(_QWORD *)&imageId);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
    sub_1C2D6F4(this, *(_QWORD *)&imageId, v8);
  v10.fields.m_XMin = (float)((v6 & 1) == 0) * 0.5;
  v10.fields.m_Height = (float)cardTextureSize->m_Items[1] * 0.00097656;
  v10.fields.m_YMin = 1.0 - v10.fields.m_Height;
  v10.fields.m_Width = 0.5;
  UITexture__set_uvRect(target, v10, 0);
}


void DesignCardManager__SetupDesignCard_41029940(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *filePath,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_object__o *v20; // x20
  DesignCardManager_o *v21; // x0
  const MethodInfo *v22; // x3

  if ( (byte_4C269AC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Texture2D__TypeInfo);
    sub_1C2D490(&Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__);
    sub_1C2D490(&DesignCardManager___c__DisplayClass7_0_TypeInfo);
    byte_4C269AC = 1;
  }
  v11 = sub_1C2D6DC(DesignCardManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C2D6EC(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)target, v16, v17);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), (int32_t)callback, v18, v19);
  v20 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__,
    0);
  DesignCardManager__LoadDesignCardTexture_41029268(v21, filePath, (System_Action_Texture2D__o *)v20, v22);
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
  if ( (byte_4C269B3 & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass4_0_o *)sub_1C2D490(&Method_AssetData_GetObject_Texture2D___);
    byte_4C269B3 = 1;
  }
  if ( !data )
    sub_1C2D6EC(this, data);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_30AFBB8 *)Method_AssetData_GetObject_Texture2D___);
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
    sub_1C2D6EC(0, tex);
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
    sub_1C2D6EC(0, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}