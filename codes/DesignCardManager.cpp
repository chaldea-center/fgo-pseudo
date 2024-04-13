void __fastcall DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Int32_array *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v17; // x0

  if ( (byte_42EA93A & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__, v5, v6, v7);
    byte_42EA93A = 1;
  }
  v8 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  max_length = v8->max_length;
  if ( !max_length || (v8->m_Items[1] = 512, max_length == 1) )
  {
    v17 = sub_B5D6C8(v8);
    sub_B5D668(v17, 0LL);
  }
  v8->m_Items[2] = 875;
  this->fields.cardTextureSize = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
}


System_String_o *__fastcall DesignCardManager__GetCommanCodeCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_String_o *DesignCardPrefix; // x0
  __int64 v21; // x1
  System_String_o *v22; // x19
  System_String_o *v23; // x0
  int32_t v25; // [xsp+Ch] [xbp-14h] BYREF

  v25 = imageId;
  if ( (byte_42EA937 & 1) == 0 )
  {
    sub_B5D5C4(&Rarity_TypeInfo, imageId, rarity, method);
    sub_B5D5C4(&StringLiteral_17923/*"cord_b"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17922/*"cord"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17661/*"class"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_4237/*"CommandCord/"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17924/*"cord_n"*/, v17, v18, v19);
    byte_42EA937 = 1;
  }
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_44585024(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_17661/*"class"*/,
                             (System_String_o *)StringLiteral_17922/*"cord"*/,
                             0LL)) == 0LL )
  {
    sub_B5D69C(DesignCardPrefix, v21);
  }
  v22 = System_String__Replace_44585024(
          DesignCardPrefix,
          (System_String_o *)StringLiteral_17924/*"cord_n"*/,
          (System_String_o *)StringLiteral_17923/*"cord_b"*/,
          0LL);
  v23 = System_Int32__ToString((int32_t)&v25, 0LL);
  return System_String__Concat_44580072((System_String_o *)StringLiteral_4237/*"CommandCord/"*/, v22, v23, 0LL);
}


System_String_o *__fastcall DesignCardManager__GetDesignCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DesignCardPrefix; // x21
  int v11; // w8
  System_String_o *v12; // x0
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA936 & 1) == 0 )
  {
    sub_B5D5C4(&Rarity_TypeInfo, imageId, rarity, method);
    sub_B5D5C4(&StringLiteral_4081/*"ClassCard/"*/, v7, v8, v9);
    byte_42EA936 = 1;
  }
  v14 = 0;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v11 = 1;
  else
    v11 = imageId + (imageId & 1) - 1;
  v14 = v11;
  v12 = System_Int32__ToString((int32_t)&v14, 0LL);
  return System_String__Concat_44580072((System_String_o *)StringLiteral_4081/*"ClassCard/"*/, DesignCardPrefix, v12, 0LL);
}


System_String_o *__fastcall DesignCardManager__GetExceedFrameCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w8
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA938 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4081/*"ClassCard/"*/, imageId, (_DWORD)prefix, method);
    byte_42EA938 = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_44580072((System_String_o *)StringLiteral_4081/*"ClassCard/"*/, prefix, v8, 0LL);
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


void __fastcall DesignCardManager__LoadDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x3
  System_String_o *DesignCardPath; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x20

  if ( (byte_42EA933 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageId, rarity, callback);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__, v12, v13, v14);
    sub_B5D5C4(&DesignCardManager___c__DisplayClass2_0_TypeInfo, v15, v16, v17);
    byte_42EA933 = 1;
  }
  v18 = sub_B5D694(DesignCardManager___c__DisplayClass2_0_TypeInfo);
  DesignCardManager___c__DisplayClass2_0___ctor((DesignCardManager___c__DisplayClass2_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, v27);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v18,
    Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(DesignCardPath, v29, 1, 0LL);
}


void __fastcall DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_42EA934 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageId, rarity, method);
    byte_42EA934 = 1;
  }
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(DesignCardPath, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__SetupCardImage(
        DesignCardManager_o *this,
        AssetData_o *d,
        UnityEngine_Transform_o *cardNode,
        int32_t imageId,
        const MethodInfo *method)
{
  DesignCardManager_o *v8; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Texture2D_o *v12; // x22
  WebViewObject_o *Component_WebViewObject; // x2
  const MethodInfo *v14; // x4

  v8 = this;
  if ( (byte_42EA939 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D___, (_DWORD)d, (_DWORD)cardNode, *(_QWORD *)&imageId);
    this = (DesignCardManager_o *)sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITexture___, v9, v10, v11);
    byte_42EA939 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_Texture2D_(
                                        d,
                                        (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_B5D69C(this, d);
  }
  v12 = (UnityEngine_Texture2D_o *)this;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)cardNode,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(v8, imageId, (UITexture_o *)Component_WebViewObject, v12, v14);
}


void __fastcall DesignCardManager__SetupDesignCard(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t v41; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x22
  const MethodInfo *v43; // x4

  if ( (byte_42EA935 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Texture2D___ctor__, imageId, rarity, target);
    sub_B5D5C4(&System_Action_Texture2D__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__, v14, v15, v16);
    sub_B5D5C4(&DesignCardManager___c__DisplayClass4_0_TypeInfo, v17, v18, v19);
    byte_42EA935 = 1;
  }
  v20 = sub_B5D694(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  DesignCardManager___c__DisplayClass4_0___ctor((DesignCardManager___c__DisplayClass4_0_o *)v20, 0LL);
  if ( !v20 )
    sub_B5D69C(v21, v22);
  *(_QWORD *)(v20 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_DWORD *)(v20 + 24) = imageId;
  *(_QWORD *)(v20 + 32) = target;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)target, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v20 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 40), (System_Int32_array **)callback, v35, v36, v37, v38, v39, v40);
  v41 = *(_DWORD *)(v20 + 24);
  v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Texture2D__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v42,
    (Il2CppObject *)v20,
    Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_Texture2D___ctor__);
  DesignCardManager__LoadDesignCardTexture(this, v41, rarity, (System_Action_Texture2D__o *)v42, v43);
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
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s7
  struct System_Int32_array *cardTextureSize; // x8
  __int64 v13; // x0
  UnityEngine_Rect_o v14; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !target
    || (v6 = imageId,
        v7 = this,
        this = (DesignCardManager_o *)((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))target->klass->vtable._27_set_mainTexture.method)(
                                        target,
                                        tex,
                                        target->klass->vtable._28_get_shader.methodPtr),
        (cardTextureSize = v7->fields.cardTextureSize) == 0LL) )
  {
    sub_B5D69C(this, *(_QWORD *)&imageId);
  }
  if ( cardTextureSize->max_length <= 1 )
  {
    v13 = sub_B5D6C8(this);
    sub_B5D668(v13, 0LL);
  }
  v15.fields.m_Width = 0.5;
  v15.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v15.fields.m_XMin = (float)((v6 & 1) == 0) * 0.5;
  v15.fields.m_YMin = 1.0 - v15.fields.m_Height;
  *(_QWORD *)&v14.fields.m_XMin = 0LL;
  *(_QWORD *)&v14.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v15, v8, v9, v10, v11, (const MethodInfo *)&v14);
  UITexture__set_uvRect(target, v14, 0LL);
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
  __int64 v3; // x3
  DesignCardManager___c__DisplayClass2_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Uri_o *Object_Texture2D; // x0
  System_Action_Uri__o *callback; // x8

  v5 = this;
  if ( (byte_42E6D8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Texture2D__Invoke__, (_DWORD)data, (_DWORD)method, v3);
    this = (DesignCardManager___c__DisplayClass2_0_o *)sub_B5D5C4(&Method_AssetData_GetObject_Texture2D___, v6, v7, v8);
    byte_42E6D8D = 1;
  }
  if ( !data )
    sub_B5D69C(this, data);
  Object_Texture2D = (System_Uri_o *)AssetData__GetObject_Texture2D_(
                                       data,
                                       (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___);
  callback = (System_Action_Uri__o *)v5->fields.callback;
  if ( callback )
    System_Action_Uri___Invoke(
      callback,
      Object_Texture2D,
      (const MethodInfo_258B334 *)Method_System_Action_Texture2D__Invoke__);
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
  DesignCardManager_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}