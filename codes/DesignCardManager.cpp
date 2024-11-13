void __fastcall DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B1589F & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__, v4, v5);
    byte_4B1589F = 1;
  }
  v6 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  max_length = v6->max_length;
  if ( !max_length || (v6->m_Items[1] = 512, max_length == 1) )
    sub_1BCAA44(v6, v6);
  v6->m_Items[2] = 875;
  this->fields.cardTextureSize = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cardTextureSize, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DesignCardManager__GetCommanCodeCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *DesignCardPrefix; // x0
  __int64 v16; // x1
  System_String_o *v17; // x19
  System_String_o *v18; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = imageId;
  if ( (byte_4B1589C & 1) == 0 )
  {
    sub_1BCA7E0(&Rarity_TypeInfo, *(_QWORD *)&imageId, *(_QWORD *)&rarity);
    sub_1BCA7E0(&StringLiteral_18451/*"cord_b"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_18450/*"cord"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_18165/*"class"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_4685/*"CommandCord/"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_18452/*"cord_n"*/, v13, v14);
    byte_4B1589C = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, *(_QWORD *)&imageId);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_62420848(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_18165/*"class"*/,
                             (System_String_o *)StringLiteral_18450/*"cord"*/,
                             0LL)) == 0LL )
  {
    sub_1BCAA3C(DesignCardPrefix, v16);
  }
  v17 = System_String__Replace_62420848(
          DesignCardPrefix,
          (System_String_o *)StringLiteral_18452/*"cord_n"*/,
          (System_String_o *)StringLiteral_18451/*"cord_b"*/,
          0LL);
  v18 = System_Int32__ToString((int32_t)&v20, 0LL);
  return System_String__Concat_62412480((System_String_o *)StringLiteral_4685/*"CommandCord/"*/, v17, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DesignCardManager__GetDesignCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *DesignCardPrefix; // x21
  int v10; // w8
  System_String_o *v11; // x0
  int v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1589B & 1) == 0 )
  {
    sub_1BCA7E0(&Rarity_TypeInfo, *(_QWORD *)&imageId, *(_QWORD *)&rarity);
    sub_1BCA7E0(&StringLiteral_4581/*"ClassCard/"*/, v7, v8);
    byte_4B1589B = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, *(_QWORD *)&imageId);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v10 = 1;
  else
    v10 = imageId + (imageId & 1) - 1;
  v13 = v10;
  v11 = System_Int32__ToString((int32_t)&v13, 0LL);
  return System_String__Concat_62412480((System_String_o *)StringLiteral_4581/*"ClassCard/"*/, DesignCardPrefix, v11, 0LL);
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

  if ( (byte_4B1589D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4581/*"ClassCard/"*/, *(_QWORD *)&imageId, prefix);
    byte_4B1589D = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_62412480((System_String_o *)StringLiteral_4581/*"ClassCard/"*/, prefix, v8, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x3
  System_String_o *DesignCardPath; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  AssetLoader_LoadEndDataHandler_o *v29; // x20
  __int64 v30; // x1

  if ( (byte_4B15898 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageId, *(_QWORD *)&rarity);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__, v11, v12);
    sub_1BCA7E0(&DesignCardManager___c__DisplayClass2_0_TypeInfo, v13, v14);
    byte_4B15898 = 1;
  }
  v15 = sub_1BCAA2C(DesignCardManager___c__DisplayClass2_0_TypeInfo, *(_QWORD *)&imageId, *(_QWORD *)&rarity, callback);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, v24);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v15,
    Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
  AssetManager__loadAssetStorage(DesignCardPath, v29, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *DesignCardPath; // x19

  if ( (byte_4B15899 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageId, *(_QWORD *)&rarity);
    byte_4B15899 = 1;
  }
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
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
  __int64 v10; // x2
  DesignCardManager_o *v11; // x22
  Il2CppObject *Component_object; // x2
  const MethodInfo *v13; // x4

  v8 = this;
  if ( (byte_4B1589E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, d, cardNode);
    this = (DesignCardManager_o *)sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, v9, v10);
    byte_4B1589E = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_1BCAA3C(this, d);
  }
  v11 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(
    v8,
    imageId,
    (UITexture_o *)Component_object,
    (UnityEngine_Texture2D_o *)v11,
    v13);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_object__o *v40; // x22
  const MethodInfo *v41; // x4

  if ( (byte_4B1589A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Texture2D__TypeInfo, *(_QWORD *)&imageId, *(_QWORD *)&rarity);
    sub_1BCA7E0(&Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__, v11, v12);
    sub_1BCA7E0(&DesignCardManager___c__DisplayClass4_0_TypeInfo, v13, v14);
    byte_4B1589A = 1;
  }
  v15 = sub_1BCAA2C(DesignCardManager___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&imageId, *(_QWORD *)&rarity, target);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = imageId;
  *(_QWORD *)(v15 + 32) = target;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)target, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 40), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  v36 = *(_DWORD *)(v15 + 24);
  v40 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Texture2D__TypeInfo, v37, v38, v39);
  System_Action_object____ctor(
    v40,
    (Il2CppObject *)v15,
    Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__,
    0LL);
  DesignCardManager__LoadDesignCardTexture(this, v36, rarity, (System_Action_Texture2D__o *)v40, v41);
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
    sub_1BCAA3C(this, *(_QWORD *)&imageId);
  }
  if ( cardTextureSize->max_length <= 1 )
    sub_1BCAA44(this, *(_QWORD *)&imageId);
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
  if ( (byte_4B158A0 & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass2_0_o *)sub_1BCA7E0(
                                                         &Method_AssetData_GetObject_Texture2D___,
                                                         data,
                                                         method);
    byte_4B158A0 = 1;
  }
  if ( !data )
    sub_1BCAA3C(this, data);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
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
    sub_1BCAA3C(0LL, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}