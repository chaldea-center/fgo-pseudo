void __fastcall DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49FE215 & 1) == 0 )
  {
    sub_1B64A00(&int___TypeInfo, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__, v3);
    byte_49FE215 = 1;
  }
  v4 = (struct System_Int32_array *)sub_1B64AA8(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_1B64C5C(0LL, v5);
  max_length = v4->max_length;
  if ( !max_length || (v4->m_Items[1] = 512, max_length == 1) )
    sub_1B64C64(v4, v4);
  v4->m_Items[2] = 875;
  this->fields.cardTextureSize = v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.cardTextureSize, (int32_t)v4, v6, v7);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EED48 *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
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
  if ( (byte_49FE212 & 1) == 0 )
  {
    sub_1B64A00(&Rarity_TypeInfo, *(_QWORD *)&imageId);
    sub_1B64A00(&StringLiteral_18199/*"cord_b"*/, v5);
    sub_1B64A00(&StringLiteral_18198/*"cord"*/, v6);
    sub_1B64A00(&StringLiteral_17917/*"class"*/, v7);
    sub_1B64A00(&StringLiteral_4596/*"CommandCord/"*/, v8);
    sub_1B64A00(&StringLiteral_18200/*"cord_n"*/, v9);
    byte_49FE212 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_61404756(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_17917/*"class"*/,
                             (System_String_o *)StringLiteral_18198/*"cord"*/,
                             0LL)) == 0LL )
  {
    sub_1B64C5C(DesignCardPrefix, v11);
  }
  v12 = System_String__Replace_61404756(
          DesignCardPrefix,
          (System_String_o *)StringLiteral_18200/*"cord_n"*/,
          (System_String_o *)StringLiteral_18199/*"cord_b"*/,
          0LL);
  v13 = System_Int32__ToString((int32_t)&v15, 0LL);
  return System_String__Concat_61396396((System_String_o *)StringLiteral_4596/*"CommandCord/"*/, v12, v13, 0LL);
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

  if ( (byte_49FE211 & 1) == 0 )
  {
    sub_1B64A00(&Rarity_TypeInfo, *(_QWORD *)&imageId);
    sub_1B64A00(&StringLiteral_4491/*"ClassCard/"*/, v7);
    byte_49FE211 = 1;
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
  return System_String__Concat_61396396((System_String_o *)StringLiteral_4491/*"ClassCard/"*/, DesignCardPrefix, v10, 0LL);
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

  if ( (byte_49FE213 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_4491/*"ClassCard/"*/, *(_QWORD *)&imageId);
    byte_49FE213 = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_61396396((System_String_o *)StringLiteral_4491/*"ClassCard/"*/, prefix, v8, 0LL);
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
void __fastcall DesignCardManager__LoadDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x3
  System_String_o *DesignCardPath; // x19
  AssetLoader_LoadEndDataHandler_o *v19; // x20

  if ( (byte_49FE20E & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&imageId);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B64A00(&Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__, v10);
    sub_1B64A00(&DesignCardManager___c__DisplayClass2_0_TypeInfo, v11);
    byte_49FE20E = 1;
  }
  v12 = sub_1B64C4C(DesignCardManager___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64C5C(v13, v14);
  *(_QWORD *)(v12 + 16) = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)callback, v15, v16);
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, v17);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v12,
    Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(DesignCardPath, v19, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_49FE20F & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&imageId);
    byte_49FE20F = 1;
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
  if ( (byte_49FE214 & 1) == 0 )
  {
    sub_1B64A00(&Method_AssetData_GetObject_Texture2D___, d);
    this = (DesignCardManager_o *)sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UITexture___, v9);
    byte_49FE214 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_2E1E208 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_1B64C5C(this, d);
  }
  v10 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UITexture___);
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
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w21
  System_Action_object__o *v23; // x22
  const MethodInfo *v24; // x4

  if ( (byte_49FE210 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_Texture2D__TypeInfo, *(_QWORD *)&imageId);
    sub_1B64A00(&Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__, v11);
    sub_1B64A00(&DesignCardManager___c__DisplayClass4_0_TypeInfo, v12);
    byte_49FE210 = 1;
  }
  v13 = sub_1B64C4C(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64C5C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_DWORD *)(v13 + 24) = imageId;
  *(_QWORD *)(v13 + 32) = target;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)target, v18, v19);
  *(_QWORD *)(v13 + 40) = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)callback, v20, v21);
  v22 = *(_DWORD *)(v13 + 24);
  v23 = (System_Action_object__o *)sub_1B64C4C(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)v13,
    Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__,
    0LL);
  DesignCardManager__LoadDesignCardTexture(this, v22, rarity, (System_Action_Texture2D__o *)v23, v24);
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
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !target
    || (v6 = imageId,
        v7 = this,
        this = (DesignCardManager_o *)((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))target->klass->vtable._27_set_mainTexture.method)(
                                        target,
                                        tex,
                                        target->klass->vtable._28_get_shader.methodPtr),
        (cardTextureSize = v7->fields.cardTextureSize) == 0LL) )
  {
    sub_1B64C5C(this, *(_QWORD *)&imageId);
  }
  if ( cardTextureSize->max_length <= 1 )
    sub_1B64C64(this, *(_QWORD *)&imageId);
  v9.fields.m_XMin = (float)((v6 & 1) == 0) * 0.5;
  v9.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v9.fields.m_YMin = 1.0 - v9.fields.m_Height;
  v9.fields.m_Width = 0.5;
  UITexture__set_uvRect(target, v9, 0LL);
}


void __fastcall DesignCardManager___c__DisplayClass2_0___ctor(
        DesignCardManager___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DesignCardManager___c__DisplayClass2_0___LoadDesignCardTexture_b__0(
        DesignCardManager___c__DisplayClass2_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DesignCardManager___c__DisplayClass2_0_o *v4; // x19
  Il2CppObject *Object_object; // x0
  struct System_Action_Texture2D__o *callback; // x8

  v4 = this;
  if ( (byte_49FE216 & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass2_0_o *)sub_1B64A00(&Method_AssetData_GetObject_Texture2D___, data);
    byte_49FE216 = 1;
  }
  if ( !data )
    sub_1B64C5C(this, data);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2E1E208 *)Method_AssetData_GetObject_Texture2D___);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      Object_object,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall DesignCardManager___c__DisplayClass4_0___ctor(
        DesignCardManager___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DesignCardManager___c__DisplayClass4_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass4_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64C5C(0LL, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}