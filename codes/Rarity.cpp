void Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  struct Rarity_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x19
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  struct Rarity_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3

  if ( (byte_4C55C6B & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Rarity_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301);
    sub_1C3E564(&StringLiteral_18008/*"class_b_"*/);
    sub_1C3E564(&StringLiteral_10967/*"RARITY_TYPE_SSRARE"*/);
    sub_1C3E564(&StringLiteral_10966/*"RARITY_TYPE_SRARE"*/);
    sub_1C3E564(&StringLiteral_10964/*"RARITY_TYPE_NONE"*/);
    sub_1C3E564(&StringLiteral_10965/*"RARITY_TYPE_RARE"*/);
    sub_1C3E564(&StringLiteral_10963/*"RARITY_TYPE_COMMON"*/);
    sub_1C3E564(&StringLiteral_10968/*"RARITY_TYPE_UNCOMMON"*/);
    sub_1C3E564(&StringLiteral_18012/*"class_g_"*/);
    sub_1C3E564(&StringLiteral_18013/*"class_n_"*/);
    sub_1C3E564(&StringLiteral_18014/*"class_s_"*/);
    byte_4C55C6B = 1;
  }
  v1 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 6);
  v2.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v1, v2, 0);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v3;
  sub_1C3E508((CGThumbnailListItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v3, v4, v5);
  v6 = sub_1C3E60C(string___TypeInfo, 6);
  if ( !v6 )
    goto LABEL_19;
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_18;
  v11 = StringLiteral_18013/*"class_n_"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_18013/*"class_n_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_18;
  v14 = StringLiteral_18008/*"class_b_"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_18008/*"class_b_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 40), v14, v12, v13);
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_18;
  v17 = StringLiteral_18008/*"class_b_"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_18008/*"class_b_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 48), v17, v15, v16);
  if ( *(_DWORD *)(v10 + 24) <= 3u
    || (v20 = StringLiteral_18014/*"class_s_"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_18014/*"class_s_"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v10 + 56), v20, v18, v19),
        *(_DWORD *)(v10 + 24) <= 4u)
    || (v23 = StringLiteral_18012/*"class_g_"*/,
        *(_QWORD *)(v10 + 64) = StringLiteral_18012/*"class_g_"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v10 + 64), v23, v21, v22),
        *(_DWORD *)(v10 + 24) <= 5u) )
  {
LABEL_18:
    sub_1C3E7C8(v6, v7);
  }
  v26 = StringLiteral_18012/*"class_g_"*/;
  *(_QWORD *)(v10 + 72) = StringLiteral_18012/*"class_g_"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 72), v26, v24, v25);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->designCardFileList, v10, v28, v29);
  v6 = sub_1C3E60C(string___TypeInfo, 6);
  if ( !v6 )
LABEL_19:
    sub_1C3E7C0(v6, v7);
  v32 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_18;
  v33 = StringLiteral_10964/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_10964/*"RARITY_TYPE_NONE"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), v33, v30, v31);
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_18;
  v36 = StringLiteral_10963/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v32 + 40) = StringLiteral_10963/*"RARITY_TYPE_COMMON"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v32 + 40), v36, v34, v35);
  if ( *(_DWORD *)(v32 + 24) <= 2u )
    goto LABEL_18;
  v39 = StringLiteral_10968/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v32 + 48) = StringLiteral_10968/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v32 + 48), v39, v37, v38);
  if ( *(_DWORD *)(v32 + 24) <= 3u )
    goto LABEL_18;
  v42 = StringLiteral_10965/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v32 + 56) = StringLiteral_10965/*"RARITY_TYPE_RARE"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v32 + 56), v42, v40, v41);
  if ( *(_DWORD *)(v32 + 24) <= 4u )
    goto LABEL_18;
  v45 = StringLiteral_10966/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v32 + 64) = StringLiteral_10966/*"RARITY_TYPE_SRARE"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v32 + 64), v45, v43, v44);
  if ( *(_DWORD *)(v32 + 24) <= 5u )
    goto LABEL_18;
  v48 = StringLiteral_10967/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v32 + 72) = StringLiteral_10967/*"RARITY_TYPE_SSRARE"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v32 + 72), v48, v46, v47);
  v49 = Rarity_TypeInfo->static_fields;
  v49->rarityType = (struct System_String_array *)v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v49->rarityType, v32, v50, v51);
}


void Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v3; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_4C55C69 & 1) == 0 )
  {
    sub_1C3E564(&Rarity_TypeInfo);
    byte_4C55C69 = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(designCardFileList->max_length) <= rarityId )
    sub_1C3E7C8(v3, method);
  return designCardFileList->m_Items[rarityId];
}


int32_t Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v6; // x1
  Rarity_c *v7; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4C55C65 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Rarity_TypeInfo);
    byte_4C55C65 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0);
  if ( result <= 0 )
  {
    v7 = Rarity_TypeInfo;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v7 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v7->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_1C3E7C0(v7, v6);
    if ( LODWORD(frameTypeImageTable->max_length) <= rarityId )
      sub_1C3E7C8(v7, v6);
    return frameTypeImageTable->m_Items[rarityId];
  }
  return result;
}


System_String_o *Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = rarity;
  if ( (byte_4C55C66 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22981/*"rarity"*/);
    sub_1C3E564(&StringLiteral_16120/*"_0"*/);
    byte_4C55C66 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63674716(
           (System_String_o *)StringLiteral_22981/*"rarity"*/,
           v2,
           (System_String_o *)StringLiteral_16120/*"_0"*/,
           0);
}


System_String_o *Rarity__getIcon_40489440(
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  Il2CppObject *RarityIcon; // x0
  __int64 v10; // x1
  ServantLvDetailMaster_o *v11; // x22
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v15; // x0
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  v17 = rarity;
  if ( (byte_4C55C67 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&StringLiteral_22981/*"rarity"*/);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_16120/*"_0"*/);
    byte_4C55C67 = 1;
  }
  v16 = 0;
  if ( exceedCount < 1 )
  {
    v15 = System_Int32__ToString((int32_t)&v17, 0);
    return System_String__Concat_63674716(
             (System_String_o *)StringLiteral_22981/*"rarity"*/,
             v15,
             (System_String_o *)StringLiteral_16120/*"_0"*/,
             0);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_object
      || (v11 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (Il2CppObject *)ServantExceedMaster__GetRarityIcon(
                                         (ServantExceedMaster_o *)Master_object,
                                         actualRarity,
                                         exceedCount,
                                         1,
                                         0,
                                         0),
          !v11) )
    {
      sub_1C3E7C0(RarityIcon, v10);
    }
    v16 = ServantLvDetailMaster__GetRarityIcon(v11, actualRarity, lv, (int32_t)RarityIcon, 0, 0);
    v12 = System_Int32__ToString((int32_t)&v17, 0);
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    return System_String__Concat_63676720(
             (System_String_o *)StringLiteral_22981/*"rarity"*/,
             v12,
             (System_String_o *)StringLiteral_16119/*"_"*/,
             v13,
             0);
  }
}


int32_t Rarity__getLowerColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (rarityId & 0xFFFFFFFE) == 4 )
    return 3;
  else
    return 1;
}


System_String_o *Rarity__getRarityType(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v4; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v6; // x19

  if ( (byte_4C55C6A & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Rarity_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C55C6A = 1;
  }
  if ( (unsigned int)(rarityId - 1) > 4 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v4 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v4 = Rarity_TypeInfo;
  }
  rarityType = v4->static_fields->rarityType;
  if ( !rarityType )
    sub_1C3E7C0(v4, method);
  if ( LODWORD(rarityType->max_length) <= rarityId )
    sub_1C3E7C8(v4, method);
  v6 = rarityType->m_Items[rarityId];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0);
}


int32_t Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_C4BE6C[rarityId - 1];
}


// local variable allocation has failed, the output may be wrong!
void Rarity__setRarityIcon(
        UISprite_o *sprite,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  System_String_o *Icon_40489440; // x22
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t RarityIcon; // w23
  int32_t v15; // w20

  if ( (byte_4C55C68 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Rarity_TypeInfo);
    byte_4C55C68 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_40489440 = Rarity__getIcon_40489440(rarity, exceedCount, lv, actualRarity, *(const MethodInfo **)&actualRarity);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
    {
LABEL_19:
      sub_1C3E7C0(Master_object, v13);
    }
    v15 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Master_object,
            actualRarity,
            lv,
            RarityIcon,
            0,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v15 >= 3 )
    {
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_40489440, 0);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_40489440, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}