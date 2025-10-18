void Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct Rarity_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x19
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  struct Rarity_StaticFields *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  if ( (byte_4C41EC9 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301);
    sub_1C37058(&StringLiteral_17991/*"class_b_"*/);
    sub_1C37058(&StringLiteral_10965/*"RARITY_TYPE_SSRARE"*/);
    sub_1C37058(&StringLiteral_10964/*"RARITY_TYPE_SRARE"*/);
    sub_1C37058(&StringLiteral_10962/*"RARITY_TYPE_NONE"*/);
    sub_1C37058(&StringLiteral_10963/*"RARITY_TYPE_RARE"*/);
    sub_1C37058(&StringLiteral_10961/*"RARITY_TYPE_COMMON"*/);
    sub_1C37058(&StringLiteral_10966/*"RARITY_TYPE_UNCOMMON"*/);
    sub_1C37058(&StringLiteral_17995/*"class_g_"*/);
    sub_1C37058(&StringLiteral_17996/*"class_n_"*/);
    sub_1C37058(&StringLiteral_17997/*"class_s_"*/);
    byte_4C41EC9 = 1;
  }
  v1 = (System_Array_o *)sub_1C37100(int___TypeInfo, 6);
  v2.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v1, v2, 0);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v3, v4, v5);
  v6 = sub_1C37100(string___TypeInfo, 6);
  if ( !v6 )
    goto LABEL_19;
  v9 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_18;
  v10 = StringLiteral_17996/*"class_n_"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_17996/*"class_n_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), v10, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_18;
  v13 = StringLiteral_17991/*"class_b_"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_17991/*"class_b_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), v13, v11, v12);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_18;
  v16 = StringLiteral_17991/*"class_b_"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_17991/*"class_b_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), v16, v14, v15);
  if ( *(_DWORD *)(v9 + 24) <= 3u
    || (v19 = StringLiteral_17997/*"class_s_"*/,
        *(_QWORD *)(v9 + 56) = StringLiteral_17997/*"class_s_"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 56), v19, v17, v18),
        *(_DWORD *)(v9 + 24) <= 4u)
    || (v22 = StringLiteral_17995/*"class_g_"*/,
        *(_QWORD *)(v9 + 64) = StringLiteral_17995/*"class_g_"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 64), v22, v20, v21),
        *(_DWORD *)(v9 + 24) <= 5u) )
  {
LABEL_18:
    sub_1C372BC(v6);
  }
  v25 = StringLiteral_17995/*"class_g_"*/;
  *(_QWORD *)(v9 + 72) = StringLiteral_17995/*"class_g_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 72), v25, v23, v24);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->designCardFileList, v9, v27, v28);
  v6 = sub_1C37100(string___TypeInfo, 6);
  if ( !v6 )
LABEL_19:
    sub_1C372B4(v6);
  v31 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_18;
  v32 = StringLiteral_10962/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_10962/*"RARITY_TYPE_NONE"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), v32, v29, v30);
  if ( *(_DWORD *)(v31 + 24) <= 1u )
    goto LABEL_18;
  v35 = StringLiteral_10961/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_10961/*"RARITY_TYPE_COMMON"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 40), v35, v33, v34);
  if ( *(_DWORD *)(v31 + 24) <= 2u )
    goto LABEL_18;
  v38 = StringLiteral_10966/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v31 + 48) = StringLiteral_10966/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 48), v38, v36, v37);
  if ( *(_DWORD *)(v31 + 24) <= 3u )
    goto LABEL_18;
  v41 = StringLiteral_10963/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v31 + 56) = StringLiteral_10963/*"RARITY_TYPE_RARE"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 56), v41, v39, v40);
  if ( *(_DWORD *)(v31 + 24) <= 4u )
    goto LABEL_18;
  v44 = StringLiteral_10964/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v31 + 64) = StringLiteral_10964/*"RARITY_TYPE_SRARE"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 64), v44, v42, v43);
  if ( *(_DWORD *)(v31 + 24) <= 5u )
    goto LABEL_18;
  v47 = StringLiteral_10965/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v31 + 72) = StringLiteral_10965/*"RARITY_TYPE_SSRARE"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 72), v47, v45, v46);
  v48 = Rarity_TypeInfo->static_fields;
  v48->rarityType = (struct System_String_array *)v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&v48->rarityType, v31, v49, v50);
}


void Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v3; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_4C41EC7 & 1) == 0 )
  {
    sub_1C37058(&Rarity_TypeInfo);
    byte_4C41EC7 = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1C372B4(v3);
  if ( LODWORD(designCardFileList->max_length) <= rarityId )
    sub_1C372BC(v3);
  return designCardFileList->m_Items[rarityId];
}


int32_t Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  int32_t result; // w0
  Rarity_c *v6; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4C41EC3 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    byte_4C41EC3 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0);
  if ( result <= 0 )
  {
    v6 = Rarity_TypeInfo;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v6 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v6->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_1C372B4(v6);
    if ( LODWORD(frameTypeImageTable->max_length) <= rarityId )
      sub_1C372BC(v6);
    return frameTypeImageTable->m_Items[rarityId];
  }
  return result;
}


System_String_o *Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = rarity;
  if ( (byte_4C41EC4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22962/*"rarity"*/);
    sub_1C37058(&StringLiteral_16110/*"_0"*/);
    byte_4C41EC4 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63599904(
           (System_String_o *)StringLiteral_22962/*"rarity"*/,
           v2,
           (System_String_o *)StringLiteral_16110/*"_0"*/,
           0);
}


System_String_o *Rarity__getIcon_40443180(
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        int32_t actualRarity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  Il2CppObject *RarityIcon; // x0
  ServantLvDetailMaster_o *v10; // x22
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = rarity;
  if ( (byte_4C41EC5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&StringLiteral_22962/*"rarity"*/);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_16110/*"_0"*/);
    byte_4C41EC5 = 1;
  }
  v15 = 0;
  if ( exceedCount < 1 )
  {
    v14 = System_Int32__ToString((int32_t)&v16, 0);
    return System_String__Concat_63599904(
             (System_String_o *)StringLiteral_22962/*"rarity"*/,
             v14,
             (System_String_o *)StringLiteral_16110/*"_0"*/,
             0);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_object
      || (v10 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (Il2CppObject *)ServantExceedMaster__GetRarityIcon(
                                         (ServantExceedMaster_o *)Master_object,
                                         actualRarity,
                                         exceedCount,
                                         1,
                                         0,
                                         0),
          !v10) )
    {
      sub_1C372B4(RarityIcon);
    }
    v15 = ServantLvDetailMaster__GetRarityIcon(v10, actualRarity, lv, (int32_t)RarityIcon, 0, 0);
    v11 = System_Int32__ToString((int32_t)&v16, 0);
    v12 = System_Int32__ToString((int32_t)&v15, 0);
    return System_String__Concat_63601908(
             (System_String_o *)StringLiteral_22962/*"rarity"*/,
             v11,
             (System_String_o *)StringLiteral_16109/*"_"*/,
             v12,
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

  if ( (byte_4C41EC8 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41EC8 = 1;
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
    sub_1C372B4(v4);
  if ( LODWORD(rarityType->max_length) <= rarityId )
    sub_1C372BC(v4);
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
    return dword_C487FC[rarityId - 1];
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
  System_String_o *Icon_40443180; // x22
  Il2CppObject *Master_object; // x0
  int32_t RarityIcon; // w23
  int32_t v14; // w20

  if ( (byte_4C41EC6 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    byte_4C41EC6 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_40443180 = Rarity__getIcon_40443180(rarity, exceedCount, lv, actualRarity, *(const MethodInfo **)&actualRarity);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
    {
LABEL_19:
      sub_1C372B4(Master_object);
    }
    v14 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Master_object,
            actualRarity,
            lv,
            RarityIcon,
            0,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v14 >= 3 )
    {
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_40443180, 0);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_40443180, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}