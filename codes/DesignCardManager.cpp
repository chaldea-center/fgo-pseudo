void __fastcall DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40FBC5D & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__, v4);
    byte_40FBC5D = 1;
  }
  v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v2);
  if ( !v5 )
    sub_B170D4();
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 512, max_length == 1) )
  {
    sub_B17100(v5, v5, v6);
    sub_B170A0();
  }
  v5->m_Items[2] = 875;
  this->fields.cardTextureSize = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
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
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  v15 = imageId;
  if ( (byte_40FBC5A & 1) == 0 )
  {
    sub_B16FFC(&Rarity_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&StringLiteral_17636/*"cord_b"*/, v5);
    sub_B16FFC(&StringLiteral_17635/*"cord"*/, v6);
    sub_B16FFC(&StringLiteral_17376/*"class"*/, v7);
    sub_B16FFC(&StringLiteral_4148/*"CommandCord/"*/, v8);
    sub_B16FFC(&StringLiteral_17637/*"cord_n"*/, v9);
    byte_40FBC5A = 1;
  }
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( !DesignCardPrefix
    || (v11 = System_String__Replace_43750968(
                DesignCardPrefix,
                (System_String_o *)StringLiteral_17376/*"class"*/,
                (System_String_o *)StringLiteral_17635/*"cord"*/,
                0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v12 = System_String__Replace_43750968(
          v11,
          (System_String_o *)StringLiteral_17637/*"cord_n"*/,
          (System_String_o *)StringLiteral_17636/*"cord_b"*/,
          0LL);
  v13 = System_Int32__ToString((int32_t)&v15, 0LL);
  return System_String__Concat_43746016((System_String_o *)StringLiteral_4148/*"CommandCord/"*/, v12, v13, 0LL);
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
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBC59 & 1) == 0 )
  {
    sub_B16FFC(&Rarity_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&StringLiteral_3997/*"ClassCard/"*/, v7);
    byte_40FBC59 = 1;
  }
  v12 = 0;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v9 = 1;
  else
    v9 = imageId + (imageId & 1) - 1;
  v12 = v9;
  v10 = System_Int32__ToString((int32_t)&v12, 0LL);
  return System_String__Concat_43746016((System_String_o *)StringLiteral_3997/*"ClassCard/"*/, DesignCardPrefix, v10, 0LL);
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
  int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBC5B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3997/*"ClassCard/"*/, *(_QWORD *)&imageId);
    byte_40FBC5B = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_43746016((System_String_o *)StringLiteral_3997/*"ClassCard/"*/, prefix, v8, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x3
  System_String_o *DesignCardPath; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  AssetLoader_LoadEndDataHandler_o *v25; // x20

  if ( (byte_40FBC56 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__, v10);
    sub_B16FFC(&DesignCardManager___c__DisplayClass2_0_TypeInfo, v11);
    byte_40FBC56 = 1;
  }
  v12 = sub_B170CC(
          DesignCardManager___c__DisplayClass2_0_TypeInfo,
          *(_QWORD *)&imageId,
          *(_QWORD *)&rarity,
          callback,
          method);
  DesignCardManager___c__DisplayClass2_0___ctor((DesignCardManager___c__DisplayClass2_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, v19);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22, v23, v24);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v12,
    Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(DesignCardPath, v25, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_40FBC57 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageId);
    byte_40FBC57 = 1;
  }
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  __int64 v9; // x1
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  UnityEngine_Texture2D_o *v11; // x22
  WebViewObject_o *Component_WebViewObject; // x2
  const MethodInfo *v13; // x4

  if ( (byte_40FBC5C & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D___, d);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, v9);
    byte_40FBC5C = 1;
  }
  if ( !d
    || (Object_Texture2D = AssetData__GetObject_Texture2D_(
                             d,
                             (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_B170D4();
  }
  v11 = Object_Texture2D;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)cardNode,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(this, imageId, (UITexture_o *)Component_WebViewObject, v11, v13);
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
  __int64 v13; // x1
  __int64 v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x22
  const MethodInfo *v39; // x4

  if ( (byte_40FBC58 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Texture2D___ctor__, *(_QWORD *)&imageId);
    sub_B16FFC(&System_Action_Texture2D__TypeInfo, v11);
    sub_B16FFC(&Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__, v12);
    sub_B16FFC(&DesignCardManager___c__DisplayClass4_0_TypeInfo, v13);
    byte_40FBC58 = 1;
  }
  v14 = sub_B170CC(
          DesignCardManager___c__DisplayClass4_0_TypeInfo,
          *(_QWORD *)&imageId,
          *(_QWORD *)&rarity,
          target,
          callback);
  DesignCardManager___c__DisplayClass4_0___ctor((DesignCardManager___c__DisplayClass4_0_o *)v14, 0LL);
  if ( !v14 )
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v14 + 24) = imageId;
  *(_QWORD *)(v14 + 32) = target;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)target, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v14 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 40), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  v33 = *(_DWORD *)(v14 + 24);
  v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Texture2D__TypeInfo,
                                                                               v34,
                                                                               v35,
                                                                               v36,
                                                                               v37);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v38,
    (Il2CppObject *)v14,
    Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_Texture2D___ctor__);
  DesignCardManager__LoadDesignCardTexture(this, v33, rarity, (System_Action_Texture2D__o *)v38, v39);
}


void __fastcall DesignCardManager__SetupDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        UITexture_o *target,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  char v6; // w20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !target
    || (v6 = imageId,
        v8 = ((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))target->klass->vtable._27_set_mainTexture.method)(
               target,
               tex,
               target->klass->vtable._28_get_shader.methodPtr),
        (cardTextureSize = this->fields.cardTextureSize) == 0LL) )
  {
    sub_B170D4();
  }
  if ( cardTextureSize->max_length <= 1 )
  {
    sub_B17100(v8, v9, v10);
    sub_B170A0();
  }
  v17.fields.m_Width = 0.5;
  v17.fields.m_Height = (float)cardTextureSize->m_Items[2] * 0.00097656;
  v17.fields.m_XMin = (float)((v6 & 1) == 0) * 0.5;
  v17.fields.m_YMin = 1.0 - v17.fields.m_Height;
  *(_QWORD *)&v16.fields.m_XMin = 0LL;
  *(_QWORD *)&v16.fields.m_Width = 0LL;
  UnityEngine_Rect___ctor(v17, v11, v12, v13, v14, (const MethodInfo *)&v16);
  UITexture__set_uvRect(target, v16, 0LL);
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
  __int64 v5; // x1
  System_Uri_o *Object_Texture2D; // x0
  struct System_Action_Texture2D__o *callback; // x8

  if ( (byte_40F8B57 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Texture2D__Invoke__, data);
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D___, v5);
    byte_40F8B57 = 1;
  }
  if ( !data )
    sub_B170D4();
  Object_Texture2D = (System_Uri_o *)AssetData__GetObject_Texture2D_(
                                       data,
                                       (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_Texture2D___);
  callback = this->fields.callback;
  if ( callback )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)callback,
      Object_Texture2D,
      (const MethodInfo_24B7324 *)Method_System_Action_Texture2D__Invoke__);
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
    sub_B170D4();
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, 0LL);
  callback = this->fields.callback;
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}