void Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct Rarity_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  __int64 v26; // x19
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  struct Rarity_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4C26201 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301);
    sub_1C2D490(&StringLiteral_17985/*"class_b_"*/);
    sub_1C2D490(&StringLiteral_10958/*"RARITY_TYPE_SSRARE"*/);
    sub_1C2D490(&StringLiteral_10957/*"RARITY_TYPE_SRARE"*/);
    sub_1C2D490(&StringLiteral_10955/*"RARITY_TYPE_NONE"*/);
    sub_1C2D490(&StringLiteral_10956/*"RARITY_TYPE_RARE"*/);
    sub_1C2D490(&StringLiteral_10954/*"RARITY_TYPE_COMMON"*/);
    sub_1C2D490(&StringLiteral_10959/*"RARITY_TYPE_UNCOMMON"*/);
    sub_1C2D490(&StringLiteral_17989/*"class_g_"*/);
    sub_1C2D490(&StringLiteral_17990/*"class_n_"*/);
    sub_1C2D490(&StringLiteral_17991/*"class_s_"*/);
    byte_4C26201 = 1;
  }
  v1 = (System_Array_o *)sub_1C2D538(int___TypeInfo, 6);
  v2.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v1, v2, 0);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v3;
  sub_1C2D434((CGThumbnailListItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v3, v4, v5);
  v6 = sub_1C2D538(string___TypeInfo, 6);
  if ( !v6 )
    goto LABEL_19;
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_18;
  v11 = StringLiteral_17990/*"class_n_"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_17990/*"class_n_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_18;
  v13 = StringLiteral_17985/*"class_b_"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_17985/*"class_b_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 40), v13, v8, v12);
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_18;
  v15 = StringLiteral_17985/*"class_b_"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_17985/*"class_b_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 48), v15, v8, v14);
  if ( *(_DWORD *)(v10 + 24) <= 3u
    || (v17 = StringLiteral_17991/*"class_s_"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_17991/*"class_s_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v10 + 56), v17, v8, v16),
        *(_DWORD *)(v10 + 24) <= 4u)
    || (v19 = StringLiteral_17989/*"class_g_"*/,
        *(_QWORD *)(v10 + 64) = StringLiteral_17989/*"class_g_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v10 + 64), v19, v8, v18),
        *(_DWORD *)(v10 + 24) <= 5u) )
  {
LABEL_18:
    sub_1C2D6F4(v6, v7, v8);
  }
  v21 = StringLiteral_17989/*"class_g_"*/;
  *(_QWORD *)(v10 + 72) = StringLiteral_17989/*"class_g_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 72), v21, v8, v20);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->designCardFileList, v10, v23, v24);
  v6 = sub_1C2D538(string___TypeInfo, 6);
  if ( !v6 )
LABEL_19:
    sub_1C2D6EC(v6, v7);
  v26 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_18;
  v27 = StringLiteral_10955/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_10955/*"RARITY_TYPE_NONE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), v27, v8, v25);
  if ( *(_DWORD *)(v26 + 24) <= 1u )
    goto LABEL_18;
  v29 = StringLiteral_10954/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v26 + 40) = StringLiteral_10954/*"RARITY_TYPE_COMMON"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 40), v29, v8, v28);
  if ( *(_DWORD *)(v26 + 24) <= 2u )
    goto LABEL_18;
  v31 = StringLiteral_10959/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v26 + 48) = StringLiteral_10959/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 48), v31, v8, v30);
  if ( *(_DWORD *)(v26 + 24) <= 3u )
    goto LABEL_18;
  v33 = StringLiteral_10956/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v26 + 56) = StringLiteral_10956/*"RARITY_TYPE_RARE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 56), v33, v8, v32);
  if ( *(_DWORD *)(v26 + 24) <= 4u )
    goto LABEL_18;
  v35 = StringLiteral_10957/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v26 + 64) = StringLiteral_10957/*"RARITY_TYPE_SRARE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 64), v35, v8, v34);
  if ( *(_DWORD *)(v26 + 24) <= 5u )
    goto LABEL_18;
  v37 = StringLiteral_10958/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v26 + 72) = StringLiteral_10958/*"RARITY_TYPE_SSRARE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 72), v37, v8, v36);
  v38 = Rarity_TypeInfo->static_fields;
  v38->rarityType = (struct System_String_array *)v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v38->rarityType, v26, v39, v40);
}


void Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  __int64 v2; // x2
  Rarity_c *v4; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_4C261FF & 1) == 0 )
  {
    sub_1C2D490(&Rarity_TypeInfo);
    byte_4C261FF = 1;
  }
  v4 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v4 = Rarity_TypeInfo;
  }
  designCardFileList = v4->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1C2D6EC(v4, method);
  if ( LODWORD(designCardFileList->max_length) <= rarityId )
    sub_1C2D6F4(v4, method, v2);
  return designCardFileList->m_Items[rarityId];
}


int32_t Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  Rarity_c *v8; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4C261FB & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    byte_4C261FB = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0);
  if ( result <= 0 )
  {
    v8 = Rarity_TypeInfo;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v8 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v8->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_1C2D6EC(v8, v6);
    if ( LODWORD(frameTypeImageTable->max_length) <= rarityId )
      sub_1C2D6F4(v8, v6, v7);
    return frameTypeImageTable->m_Items[rarityId];
  }
  return result;
}


System_String_o *Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = rarity;
  if ( (byte_4C261FC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22941/*"rarity"*/);
    sub_1C2D490(&StringLiteral_16106/*"_0"*/);
    byte_4C261FC = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63496112(
           (System_String_o *)StringLiteral_22941/*"rarity"*/,
           v2,
           (System_String_o *)StringLiteral_16106/*"_0"*/,
           0);
}


System_String_o *Rarity__getIcon_40221568(
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
  if ( (byte_4C261FD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22941/*"rarity"*/);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_16106/*"_0"*/);
    byte_4C261FD = 1;
  }
  v16 = 0;
  if ( exceedCount < 1 )
  {
    v15 = System_Int32__ToString((int32_t)&v17, 0);
    return System_String__Concat_63496112(
             (System_String_o *)StringLiteral_22941/*"rarity"*/,
             v15,
             (System_String_o *)StringLiteral_16106/*"_0"*/,
             0);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
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
      sub_1C2D6EC(RarityIcon, v10);
    }
    v16 = ServantLvDetailMaster__GetRarityIcon(v11, actualRarity, lv, (int32_t)RarityIcon, 0, 0);
    v12 = System_Int32__ToString((int32_t)&v17, 0);
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    return System_String__Concat_63498116(
             (System_String_o *)StringLiteral_22941/*"rarity"*/,
             v12,
             (System_String_o *)StringLiteral_16105/*"_"*/,
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
  __int64 v2; // x2
  Rarity_c *v5; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v7; // x19

  if ( (byte_4C26200 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26200 = 1;
  }
  if ( (unsigned int)(rarityId - 1) > 4 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v5 = Rarity_TypeInfo;
  }
  rarityType = v5->static_fields->rarityType;
  if ( !rarityType )
    sub_1C2D6EC(v5, method);
  if ( LODWORD(rarityType->max_length) <= rarityId )
    sub_1C2D6F4(v5, method, v2);
  v7 = rarityType->m_Items[rarityId];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v7, 0);
}


int32_t Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_C43424[rarityId - 1];
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
  System_String_o *Icon_40221568; // x22
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t RarityIcon; // w23
  int32_t v15; // w20

  if ( (byte_4C261FE & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    byte_4C261FE = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_40221568 = Rarity__getIcon_40221568(rarity, exceedCount, lv, actualRarity, *(const MethodInfo **)&actualRarity);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
    {
LABEL_19:
      sub_1C2D6EC(Master_object, v13);
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
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_40221568, 0);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_40221568, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}