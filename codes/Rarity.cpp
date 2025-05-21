void __fastcall Rarity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Array_o *v15; // x0
  struct System_Int32_array *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  __int64 v23; // x19
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  struct Rarity_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  __int64 v39; // x19
  int32_t v40; // w1
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  struct Rarity_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_RuntimeFieldHandle_o v54; // 0:w1.4

  if ( (byte_4B439ED & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, v1);
    sub_1BDB878(&Rarity_TypeInfo, v2);
    sub_1BDB878(&string___TypeInfo, v3);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
      v4);
    sub_1BDB878(&StringLiteral_17997/*"class_b_"*/, v5);
    sub_1BDB878(&StringLiteral_10961/*"RARITY_TYPE_SSRARE"*/, v6);
    sub_1BDB878(&StringLiteral_10960/*"RARITY_TYPE_SRARE"*/, v7);
    sub_1BDB878(&StringLiteral_10958/*"RARITY_TYPE_NONE"*/, v8);
    sub_1BDB878(&StringLiteral_10959/*"RARITY_TYPE_RARE"*/, v9);
    sub_1BDB878(&StringLiteral_10957/*"RARITY_TYPE_COMMON"*/, v10);
    sub_1BDB878(&StringLiteral_10962/*"RARITY_TYPE_UNCOMMON"*/, v11);
    sub_1BDB878(&StringLiteral_18001/*"class_g_"*/, v12);
    sub_1BDB878(&StringLiteral_18002/*"class_n_"*/, v13);
    sub_1BDB878(&StringLiteral_18003/*"class_s_"*/, v14);
    byte_4B439ED = 1;
  }
  v15 = (System_Array_o *)sub_1BDB920(int___TypeInfo, 6LL);
  v54.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v16 = (struct System_Int32_array *)v15;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v15, v54, 0LL);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v16;
  sub_1BDB81C((CGThumbnailListItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v16, v17, v18);
  v19 = sub_1BDB920(string___TypeInfo, 6LL);
  if ( !v19 )
    goto LABEL_19;
  v23 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_18;
  v24 = StringLiteral_18002/*"class_n_"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_18002/*"class_n_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 32), v24, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_18;
  v26 = StringLiteral_17997/*"class_b_"*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_17997/*"class_b_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 40), v26, v21, v25);
  if ( *(_DWORD *)(v23 + 24) <= 2u )
    goto LABEL_18;
  v28 = StringLiteral_17997/*"class_b_"*/;
  *(_QWORD *)(v23 + 48) = StringLiteral_17997/*"class_b_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 48), v28, v21, v27);
  if ( *(_DWORD *)(v23 + 24) <= 3u
    || (v30 = StringLiteral_18003/*"class_s_"*/,
        *(_QWORD *)(v23 + 56) = StringLiteral_18003/*"class_s_"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 56), v30, v21, v29),
        *(_DWORD *)(v23 + 24) <= 4u)
    || (v32 = StringLiteral_18001/*"class_g_"*/,
        *(_QWORD *)(v23 + 64) = StringLiteral_18001/*"class_g_"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 64), v32, v21, v31),
        *(_DWORD *)(v23 + 24) <= 5u) )
  {
LABEL_18:
    sub_1BDBADC(v19, v20, v21);
  }
  v34 = StringLiteral_18001/*"class_g_"*/;
  *(_QWORD *)(v23 + 72) = StringLiteral_18001/*"class_g_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 72), v34, v21, v33);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->designCardFileList, v23, v36, v37);
  v19 = sub_1BDB920(string___TypeInfo, 6LL);
  if ( !v19 )
LABEL_19:
    sub_1BDBAD4(v19, v20);
  v39 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_18;
  v40 = StringLiteral_10958/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_10958/*"RARITY_TYPE_NONE"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 32), v40, v21, v38);
  if ( *(_DWORD *)(v39 + 24) <= 1u )
    goto LABEL_18;
  v42 = StringLiteral_10957/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v39 + 40) = StringLiteral_10957/*"RARITY_TYPE_COMMON"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 40), v42, v21, v41);
  if ( *(_DWORD *)(v39 + 24) <= 2u )
    goto LABEL_18;
  v44 = StringLiteral_10962/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v39 + 48) = StringLiteral_10962/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 48), v44, v21, v43);
  if ( *(_DWORD *)(v39 + 24) <= 3u )
    goto LABEL_18;
  v46 = StringLiteral_10959/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v39 + 56) = StringLiteral_10959/*"RARITY_TYPE_RARE"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 56), v46, v21, v45);
  if ( *(_DWORD *)(v39 + 24) <= 4u )
    goto LABEL_18;
  v48 = StringLiteral_10960/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v39 + 64) = StringLiteral_10960/*"RARITY_TYPE_SRARE"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 64), v48, v21, v47);
  if ( *(_DWORD *)(v39 + 24) <= 5u )
    goto LABEL_18;
  v50 = StringLiteral_10961/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v39 + 72) = StringLiteral_10961/*"RARITY_TYPE_SSRARE"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 72), v50, v21, v49);
  v51 = Rarity_TypeInfo->static_fields;
  v51->rarityType = (struct System_String_array *)v39;
  sub_1BDB81C((CGThumbnailListItem_o *)&v51->rarityType, v39, v52, v53);
}


void __fastcall Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  __int64 v2; // x2
  Rarity_c *v4; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_4B439EB & 1) == 0 )
  {
    sub_1BDB878(&Rarity_TypeInfo, method);
    byte_4B439EB = 1;
  }
  v4 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v4 = Rarity_TypeInfo;
  }
  designCardFileList = v4->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1BDBAD4(v4, method);
  if ( designCardFileList->max_length <= rarityId )
    sub_1BDBADC(v4, method, v2);
  return designCardFileList->m_Items[rarityId];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t result; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  Rarity_c *v9; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4B439E7 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&classId);
    sub_1BDB878(&Rarity_TypeInfo, v5);
    byte_4B439E7 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0LL);
  if ( result <= 0 )
  {
    v9 = Rarity_TypeInfo;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v9 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v9->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_1BDBAD4(v9, v7);
    if ( frameTypeImageTable->max_length <= rarityId )
      sub_1BDBADC(v9, v7, v8);
    return frameTypeImageTable->m_Items[rarityId + 1];
  }
  return result;
}


System_String_o *__fastcall Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = rarity;
  if ( (byte_4B439E8 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22983/*"rarity"*/, method);
    sub_1BDB878(&StringLiteral_16089/*"_0"*/, v2);
    byte_4B439E8 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_62610508(
           (System_String_o *)StringLiteral_22983/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_16089/*"_0"*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Rarity__getIcon_39464760(
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x23
  Il2CppObject *RarityIcon; // x0
  __int64 v15; // x1
  ServantLvDetailMaster_o *v16; // x22
  System_String_o *v17; // x19
  System_String_o *v18; // x0
  System_String_o *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v22 = rarity;
  if ( (byte_4B439E9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&exceedCount);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_22983/*"rarity"*/, v10);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v11);
    sub_1BDB878(&StringLiteral_16089/*"_0"*/, v12);
    byte_4B439E9 = 1;
  }
  v21 = 0;
  if ( exceedCount < 1 )
  {
    v20 = System_Int32__ToString((int32_t)&v22, 0LL);
    return System_String__Concat_62610508(
             (System_String_o *)StringLiteral_22983/*"rarity"*/,
             v20,
             (System_String_o *)StringLiteral_16089/*"_0"*/,
             0LL);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_object
      || (v16 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (Il2CppObject *)ServantExceedMaster__GetRarityIcon(
                                         (ServantExceedMaster_o *)Master_object,
                                         actualRarity,
                                         exceedCount,
                                         1,
                                         0,
                                         0LL),
          !v16) )
    {
      sub_1BDBAD4(RarityIcon, v15);
    }
    v21 = ServantLvDetailMaster__GetRarityIcon(v16, actualRarity, lv, (int32_t)RarityIcon, 0, 0LL);
    v17 = System_Int32__ToString((int32_t)&v22, 0LL);
    v18 = System_Int32__ToString((int32_t)&v21, 0LL);
    return System_String__Concat_62612512(
             (System_String_o *)StringLiteral_22983/*"rarity"*/,
             v17,
             (System_String_o *)StringLiteral_16088/*"_"*/,
             v18,
             0LL);
  }
}


int32_t __fastcall Rarity__getLowerColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (rarityId & 0xFFFFFFFE) == 4 )
    return 3;
  else
    return 1;
}


System_String_o *__fastcall Rarity__getRarityType(int32_t rarityId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Rarity_c *v7; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v9; // x19

  if ( (byte_4B439EC & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&Rarity_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B439EC = 1;
  }
  if ( (unsigned int)(rarityId - 1) > 4 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v7 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v7 = Rarity_TypeInfo;
  }
  rarityType = v7->static_fields->rarityType;
  if ( !rarityType )
    sub_1BDBAD4(v7, method);
  if ( rarityType->max_length <= rarityId )
    sub_1BDBADC(v7, method, v2);
  v9 = rarityType->m_Items[rarityId];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v9, 0LL);
}


int32_t __fastcall Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_C24E04[rarityId - 1];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Rarity__setRarityIcon(
        UISprite_o *sprite,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *Icon_39464760; // x22
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  int32_t RarityIcon; // w23
  int32_t v19; // w20

  if ( (byte_4B439EA & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&rarity);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantExceedMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1BDB878(&DataManager_TypeInfo, v13);
    sub_1BDB878(&Rarity_TypeInfo, v14);
    byte_4B439EA = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_39464760 = Rarity__getIcon_39464760(rarity, exceedCount, lv, actualRarity, *(const MethodInfo **)&actualRarity);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0LL),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0LL) )
    {
LABEL_19:
      sub_1BDBAD4(Master_object, v17);
    }
    v19 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Master_object,
            actualRarity,
            lv,
            RarityIcon,
            0,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v19 >= 3 )
    {
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_39464760, 0LL);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0LL);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_39464760, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}