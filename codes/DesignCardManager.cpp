void __fastcall DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B01726 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__, v3);
    byte_4B01726 = 1;
  }
  v4 = (struct System_Int32_array *)sub_1BC30B0(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_1BC3264(0LL, v5);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 512, max_length == 1) )
    sub_1BC326C(v4, v4, v6);
  v4->m_Items[2] = 875;
  this->fields.cardTextureSize = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.cardTextureSize, (int32_t)v4, v6, v7);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DesignCardManager__GetCommanCodeCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *DesignCardPrefix; // x0
  __int64 v11; // x1
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = imageId;
  if ( (byte_4B01722 & 1) == 0 )
  {
    sub_1BC3008(&Rarity_TypeInfo, *(_QWORD *)&imageId);
    sub_1BC3008(&StringLiteral_18106/*"cord_b"*/, v5);
    sub_1BC3008(&StringLiteral_18105/*"cord"*/, v6);
    sub_1BC3008(&StringLiteral_17816/*"class"*/, v7);
    sub_1BC3008(&StringLiteral_4548/*"CommandCord/"*/, v8);
    sub_1BC3008(&StringLiteral_18107/*"cord_n"*/, v9);
    byte_4B01722 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_62395196(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_17816/*"class"*/,
                             (System_String_o *)StringLiteral_18105/*"cord"*/,
                             0LL)) == 0LL )
  {
    sub_1BC3264(DesignCardPrefix, v11);
  }
  v12 = System_String__Replace_62395196(
          DesignCardPrefix,
          (System_String_o *)StringLiteral_18107/*"cord_n"*/,
          (System_String_o *)StringLiteral_18106/*"cord_b"*/,
          0LL);
  v13 = System_Int32__ToString((int32_t)&v15, 0LL);
  return System_String__Concat_62386896((System_String_o *)StringLiteral_4548/*"CommandCord/"*/, v12, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DesignCardManager__GetDesignCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *DesignCardPrefix; // x21
  int v9; // w8
  System_String_o *v10; // x0
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B01721 & 1) == 0 )
  {
    sub_1BC3008(&Rarity_TypeInfo, *(_QWORD *)&imageId);
    sub_1BC3008(&StringLiteral_4443/*"ClassCard/"*/, v7);
    byte_4B01721 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v9 = 1;
  else
    v9 = imageId + (imageId & 1) - 1;
  v12 = v9;
  v10 = System_Int32__ToString((int32_t)&v12, 0LL);
  return System_String__Concat_62386896((System_String_o *)StringLiteral_4443/*"ClassCard/"*/, DesignCardPrefix, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DesignCardManager__GetExceedFrameCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w8
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B01723 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4443/*"ClassCard/"*/, *(_QWORD *)&imageId);
    byte_4B01723 = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_62386896((System_String_o *)StringLiteral_4443/*"ClassCard/"*/, prefix, v8, 0LL);
}


int32_t __fastcall DesignCardManager__GetFileIndex(
        DesignCardManager_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    return 1;
  else
    return imageId + (imageId & 1) - 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DesignCardManager__GetGrandDesignCardPath(
        DesignCardManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  int v8; // w8
  Il2CppObject *v9; // x0
  int v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B01724 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&classId);
    sub_1BC3008(&StringLiteral_4444/*"ClassCard/class_g_{0}"*/, v7);
    byte_4B01724 = 1;
  }
  v8 = classId + (classId & 1) - 1;
  if ( this->fields.SVT_EQ_IMAGE_ID == classId )
    v8 = 1;
  v11 = v8;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_4444/*"ClassCard/class_g_{0}"*/, v9, 0LL);
}


void __fastcall DesignCardManager__LoadDesignCardTexture(
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
  DesignCardManager__LoadDesignCardTexture_40275636(DesignCardPath, (System_String_o *)DesignCardPath, callback, v7);
}


void __fastcall DesignCardManager__LoadDesignCardTexture_40275636(
        DesignCardManager_o *this,
        System_String_o *filePath,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_4B0171D & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, filePath);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BC3008(&Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__, v7);
    sub_1BC3008(&DesignCardManager___c__DisplayClass4_0_TypeInfo, v8);
    byte_4B0171D = 1;
  }
  v9 = sub_1BC3254(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  *(_QWORD *)(v9 + 16) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)callback, v12, v13);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v9,
    Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(filePath, v14, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_4B0171E & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, *(_QWORD *)&imageId);
    byte_4B0171E = 1;
  }
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(DesignCardPath, 0LL);
}


void __fastcall DesignCardManager__SetupCardImage(
        DesignCardManager_o *this,
        AssetData_o *d,
        UnityEngine_Transform_o *cardNode,
        int32_t imageId,
        const MethodInfo *method)
{
  DesignCardManager_o *v8; // x20
  __int64 v9; // x1
  DesignCardManager_o *v10; // x22
  Il2CppObject *Component_object; // x2
  const MethodInfo *v12; // x4

  v8 = this;
  if ( (byte_4B01725 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D___, d);
    this = (DesignCardManager_o *)sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UITexture___, v9);
    byte_4B01725 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_2FE3288 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_1BC3264(this, d);
  }
  v10 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(
    v8,
    imageId,
    (UITexture_o *)Component_object,
    (UnityEngine_Texture2D_o *)v10,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__SetupDesignCard(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w21
  System_Action_object__o *v23; // x22
  const MethodInfo *v24; // x3
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v26; // x3

  if ( (byte_4B0171F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_Texture2D__TypeInfo, *(_QWORD *)&imageId);
    sub_1BC3008(&Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__, v11);
    sub_1BC3008(&DesignCardManager___c__DisplayClass6_0_TypeInfo, v12);
    byte_4B0171F = 1;
  }
  v13 = sub_1BC3254(DesignCardManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BC3264(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_DWORD *)(v13 + 24) = imageId;
  *(_QWORD *)(v13 + 32) = target;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)target, v18, v19);
  *(_QWORD *)(v13 + 40) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 40), (int32_t)callback, v20, v21);
  v22 = *(_DWORD *)(v13 + 24);
  v23 = (System_Action_object__o *)sub_1BC3254(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)v13,
    Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__,
    0LL);
  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(this, v22, rarity, v24);
  DesignCardManager__LoadDesignCardTexture_40275636(
    DesignCardPath,
    (System_String_o *)DesignCardPath,
    (System_Action_Texture2D__o *)v23,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__SetupDesignCardTexture(
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
        this = (DesignCardManager_o *)((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))target->klass->vtable._27_set_mainTexture.method)(
                                        target,
                                        tex,
                                        target->klass->vtable._28_get_shader.methodPtr),
        (cardTextureSize = v7->fields.cardTextureSize) == 0LL) )
  {
    sub_1BC3264(this, *(_QWORD *)&imageId);
  }
  if ( cardTextureSize->max_length <= 1 )
    sub_1BC326C(this, *(_QWORD *)&imageId, v8);
  v10.fields.m_XMin = (float)((v6 & 1) == 0) * 0.5;
  v10.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v10.fields.m_YMin = 1.0 - v10.fields.m_Height;
  v10.fields.m_Width = 0.5;
  UITexture__set_uvRect(target, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__SetupDesignCard_40276308(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *filePath,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_object__o *v22; // x20
  DesignCardManager_o *v23; // x0
  const MethodInfo *v24; // x3

  if ( (byte_4B01720 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_Texture2D__TypeInfo, *(_QWORD *)&imageId);
    sub_1BC3008(&Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__, v11);
    sub_1BC3008(&DesignCardManager___c__DisplayClass7_0_TypeInfo, v12);
    byte_4B01720 = 1;
  }
  v13 = sub_1BC3254(DesignCardManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BC3264(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_DWORD *)(v13 + 24) = imageId;
  *(_QWORD *)(v13 + 32) = target;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)target, v18, v19);
  *(_QWORD *)(v13 + 40) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 40), (int32_t)callback, v20, v21);
  v22 = (System_Action_object__o *)sub_1BC3254(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v13,
    Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__,
    0LL);
  DesignCardManager__LoadDesignCardTexture_40275636(v23, filePath, (System_Action_Texture2D__o *)v22, v24);
}


void __fastcall DesignCardManager___c__DisplayClass4_0___ctor(
        DesignCardManager___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DesignCardManager___c__DisplayClass4_0___LoadDesignCardTexture_b__0(
        DesignCardManager___c__DisplayClass4_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DesignCardManager___c__DisplayClass4_0_o *v4; // x19
  Il2CppObject *Object_object; // x0
  struct System_Action_Texture2D__o *callback; // x8

  v4 = this;
  if ( (byte_4B01727 & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass4_0_o *)sub_1BC3008(&Method_AssetData_GetObject_Texture2D___, data);
    byte_4B01727 = 1;
  }
  if ( !data )
    sub_1BC3264(this, data);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2FE3288 *)Method_AssetData_GetObject_Texture2D___);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      Object_object,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall DesignCardManager___c__DisplayClass6_0___ctor(
        DesignCardManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DesignCardManager___c__DisplayClass6_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass6_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall DesignCardManager___c__DisplayClass7_0___ctor(
        DesignCardManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DesignCardManager___c__DisplayClass7_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass7_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}