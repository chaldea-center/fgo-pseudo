void __fastcall DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4BDBBDA & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
    byte_4BDBBDA = 1;
  }
  v3 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 512, max_length == 1) )
    sub_1C2209C(v3, v3);
  v3->m_Items[2] = 875;
  this->fields.cardTextureSize = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.cardTextureSize, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
}


System_String_o *__fastcall DesignCardManager__GetCommanCodeCardPath(
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
  if ( (byte_4BDBBD7 & 1) == 0 )
  {
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&StringLiteral_18576/*"cord_b"*/);
    sub_1C21E38(&StringLiteral_18575/*"cord"*/);
    sub_1C21E38(&StringLiteral_18287/*"class"*/);
    sub_1C21E38(&StringLiteral_4711/*"CommandCord/"*/);
    sub_1C21E38(&StringLiteral_18577/*"cord_n"*/);
    byte_4BDBBD7 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_63135104(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_18287/*"class"*/,
                             (System_String_o *)StringLiteral_18575/*"cord"*/,
                             0LL)) == 0LL )
  {
    sub_1C22094(DesignCardPrefix, v6);
  }
  v7 = System_String__Replace_63135104(
         DesignCardPrefix,
         (System_String_o *)StringLiteral_18577/*"cord_n"*/,
         (System_String_o *)StringLiteral_18576/*"cord_b"*/,
         0LL);
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_63126736((System_String_o *)StringLiteral_4711/*"CommandCord/"*/, v7, v8, 0LL);
}


System_String_o *__fastcall DesignCardManager__GetDesignCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPrefix; // x21
  int v8; // w8
  System_String_o *v9; // x0
  int v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDBBD6 & 1) == 0 )
  {
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&StringLiteral_4607/*"ClassCard/"*/);
    byte_4BDBBD6 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0LL);
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v8 = 1;
  else
    v8 = imageId + (imageId & 1) - 1;
  v11 = v8;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  return System_String__Concat_63126736((System_String_o *)StringLiteral_4607/*"ClassCard/"*/, DesignCardPrefix, v9, 0LL);
}


System_String_o *__fastcall DesignCardManager__GetExceedFrameCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w8
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDBBD8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4607/*"ClassCard/"*/);
    byte_4BDBBD8 = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_63126736((System_String_o *)StringLiteral_4607/*"ClassCard/"*/, prefix, v8, 0LL);
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
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x3
  System_String_o *DesignCardPath; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x20

  if ( (byte_4BDBBD3 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__);
    sub_1C21E38(&DesignCardManager___c__DisplayClass2_0_TypeInfo);
    byte_4BDBBD3 = 1;
  }
  v9 = sub_1C22084(DesignCardManager___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 16) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)callback, v12, v13, v14, v15, v16, v17);
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, v18);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_DesignCardManager___c__DisplayClass2_0__LoadDesignCardTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(DesignCardPath, v20, 1, 0LL);
}


void __fastcall DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_4BDBBD4 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDBBD4 = 1;
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
  DesignCardManager_o *v9; // x22
  Il2CppObject *Component_object; // x2
  const MethodInfo *v11; // x4

  v8 = this;
  if ( (byte_4BDBBD9 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D___);
    this = (DesignCardManager_o *)sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4BDBBD9 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_2F91DC0 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_1C22094(this, d);
  }
  v9 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(
    v8,
    imageId,
    (UITexture_o *)Component_object,
    (UnityEngine_Texture2D_o *)v9,
    v11);
}


void __fastcall DesignCardManager__SetupDesignCard(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t v32; // w21
  System_Action_object__o *v33; // x22
  const MethodInfo *v34; // x4

  if ( (byte_4BDBBD5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Texture2D__TypeInfo);
    sub_1C21E38(&Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__);
    sub_1C21E38(&DesignCardManager___c__DisplayClass4_0_TypeInfo);
    byte_4BDBBD5 = 1;
  }
  v11 = sub_1C22084(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C22094(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)target, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 40), (int64_t)callback, v26, v27, v28, v29, v30, v31);
  v32 = *(_DWORD *)(v11 + 24);
  v33 = (System_Action_object__o *)sub_1C22084(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass4_0__SetupDesignCard_b__0__,
    0LL);
  DesignCardManager__LoadDesignCardTexture(this, v32, rarity, (System_Action_Texture2D__o *)v33, v34);
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
    sub_1C22094(this, *(_QWORD *)&imageId);
  }
  if ( cardTextureSize->max_length <= 1 )
    sub_1C2209C(this, *(_QWORD *)&imageId);
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
  if ( (byte_4BDBBDB & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass2_0_o *)sub_1C21E38(&Method_AssetData_GetObject_Texture2D___);
    byte_4BDBBDB = 1;
  }
  if ( !data )
    sub_1C22094(this, data);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2F91DC0 *)Method_AssetData_GetObject_Texture2D___);
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
    sub_1C22094(0LL, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}