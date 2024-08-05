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
  int32_t v18; // w3
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x19
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct Rarity_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x19
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  struct Rarity_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_RuntimeFieldHandle_o v65; // 0:w1.4

  if ( (byte_49FD547 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, v1);
    sub_1B64870(&Rarity_TypeInfo, v2);
    sub_1B64870(&string___TypeInfo, v3);
    sub_1B64870(
      &Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
      v4);
    sub_1B64870(&StringLiteral_17925/*"class_b_"*/, v5);
    sub_1B64870(&StringLiteral_10906/*"RARITY_TYPE_SSRARE"*/, v6);
    sub_1B64870(&StringLiteral_10905/*"RARITY_TYPE_SRARE"*/, v7);
    sub_1B64870(&StringLiteral_10903/*"RARITY_TYPE_NONE"*/, v8);
    sub_1B64870(&StringLiteral_10904/*"RARITY_TYPE_RARE"*/, v9);
    sub_1B64870(&StringLiteral_10902/*"RARITY_TYPE_COMMON"*/, v10);
    sub_1B64870(&StringLiteral_10907/*"RARITY_TYPE_UNCOMMON"*/, v11);
    sub_1B64870(&StringLiteral_17929/*"class_g_"*/, v12);
    sub_1B64870(&StringLiteral_17930/*"class_n_"*/, v13);
    sub_1B64870(&StringLiteral_17931/*"class_s_"*/, v14);
    byte_49FD547 = 1;
  }
  v15 = (System_Array_o *)sub_1B64918(int___TypeInfo, 6LL);
  v65.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v16 = (struct System_Int32_array *)v15;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v15, v65, 0LL);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v16, v17, v18);
  v19 = sub_1B64918(string___TypeInfo, 6LL);
  if ( !v19 )
    goto LABEL_19;
  v23 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_18;
  v24 = StringLiteral_17930/*"class_n_"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_17930/*"class_n_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 32), v24, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_18;
  v27 = StringLiteral_17925/*"class_b_"*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_17925/*"class_b_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 40), v27, v25, v26);
  if ( *(_DWORD *)(v23 + 24) <= 2u )
    goto LABEL_18;
  v30 = StringLiteral_17925/*"class_b_"*/;
  *(_QWORD *)(v23 + 48) = StringLiteral_17925/*"class_b_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 48), v30, v28, v29);
  if ( *(_DWORD *)(v23 + 24) <= 3u
    || (v33 = StringLiteral_17931/*"class_s_"*/,
        *(_QWORD *)(v23 + 56) = StringLiteral_17931/*"class_s_"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 56), v33, v31, v32),
        *(_DWORD *)(v23 + 24) <= 4u)
    || (v36 = StringLiteral_17929/*"class_g_"*/,
        *(_QWORD *)(v23 + 64) = StringLiteral_17929/*"class_g_"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 64), v36, v34, v35),
        *(_DWORD *)(v23 + 24) <= 5u) )
  {
LABEL_18:
    sub_1B64AD4(v19, v20);
  }
  v39 = StringLiteral_17929/*"class_g_"*/;
  *(_QWORD *)(v23 + 72) = StringLiteral_17929/*"class_g_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 72), v39, v37, v38);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v23;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->designCardFileList, v23, v41, v42);
  v19 = sub_1B64918(string___TypeInfo, 6LL);
  if ( !v19 )
LABEL_19:
    sub_1B64ACC(v19, v20);
  v45 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_18;
  v46 = StringLiteral_10903/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_10903/*"RARITY_TYPE_NONE"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 32), v46, v43, v44);
  if ( *(_DWORD *)(v45 + 24) <= 1u )
    goto LABEL_18;
  v49 = StringLiteral_10902/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v45 + 40) = StringLiteral_10902/*"RARITY_TYPE_COMMON"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 40), v49, v47, v48);
  if ( *(_DWORD *)(v45 + 24) <= 2u )
    goto LABEL_18;
  v52 = StringLiteral_10907/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v45 + 48) = StringLiteral_10907/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 48), v52, v50, v51);
  if ( *(_DWORD *)(v45 + 24) <= 3u )
    goto LABEL_18;
  v55 = StringLiteral_10904/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v45 + 56) = StringLiteral_10904/*"RARITY_TYPE_RARE"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 56), v55, v53, v54);
  if ( *(_DWORD *)(v45 + 24) <= 4u )
    goto LABEL_18;
  v58 = StringLiteral_10905/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v45 + 64) = StringLiteral_10905/*"RARITY_TYPE_SRARE"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 64), v58, v56, v57);
  if ( *(_DWORD *)(v45 + 24) <= 5u )
    goto LABEL_18;
  v61 = StringLiteral_10906/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v45 + 72) = StringLiteral_10906/*"RARITY_TYPE_SSRARE"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 72), v61, v59, v60);
  v62 = Rarity_TypeInfo->static_fields;
  v62->rarityType = (struct System_String_array *)v45;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v62->rarityType, v45, v63, v64);
}


void __fastcall Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v3; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_49FD545 & 1) == 0 )
  {
    sub_1B64870(&Rarity_TypeInfo, method);
    byte_49FD545 = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1B64ACC(v3, method);
  if ( designCardFileList->max_length <= rarityId )
    sub_1B64AD4(v3, method);
  return designCardFileList->m_Items[rarityId];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t result; // w0
  __int64 v7; // x1
  Rarity_c *v8; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_49FD541 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&classId);
    sub_1B64870(&Rarity_TypeInfo, v5);
    byte_49FD541 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0LL);
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
      sub_1B64ACC(v8, v7);
    if ( frameTypeImageTable->max_length <= rarityId )
      sub_1B64AD4(v8, v7);
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
  if ( (byte_49FD542 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22696/*"rarity"*/, method);
    sub_1B64870(&StringLiteral_16057/*"_0"*/, v2);
    byte_49FD542 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_61394836(
           (System_String_o *)StringLiteral_22696/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_16057/*"_0"*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Rarity__getIcon_37394352(
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x23
  Il2CppObject *RarityIcon; // x0
  __int64 v14; // x1
  ServantLvDetailMaster_o *v15; // x22
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  v21 = rarity;
  if ( (byte_49FD543 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&exceedCount);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v7);
    sub_1B64870(&DataManager_TypeInfo, v8);
    sub_1B64870(&StringLiteral_22696/*"rarity"*/, v9);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v10);
    sub_1B64870(&StringLiteral_16057/*"_0"*/, v11);
    byte_49FD543 = 1;
  }
  v20 = 0;
  if ( exceedCount < 1 )
  {
    v19 = System_Int32__ToString((int32_t)&v21, 0LL);
    return System_String__Concat_61394836(
             (System_String_o *)StringLiteral_22696/*"rarity"*/,
             v19,
             (System_String_o *)StringLiteral_16057/*"_0"*/,
             0LL);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_object
      || (v15 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (Il2CppObject *)ServantExceedMaster__GetRarityIcon(
                                         (ServantExceedMaster_o *)Master_object,
                                         rarity,
                                         exceedCount,
                                         1,
                                         0LL),
          !v15) )
    {
      sub_1B64ACC(RarityIcon, v14);
    }
    v20 = ServantLvDetailMaster__GetRarityIcon(v15, rarity, lv, (int32_t)RarityIcon, 0LL);
    v16 = System_Int32__ToString((int32_t)&v21, 0LL);
    v17 = System_Int32__ToString((int32_t)&v20, 0LL);
    return System_String__Concat_61396840(
             (System_String_o *)StringLiteral_22696/*"rarity"*/,
             v16,
             (System_String_o *)StringLiteral_16056/*"_"*/,
             v17,
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
  __int64 v3; // x1
  __int64 v4; // x1
  Rarity_c *v6; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v8; // x19

  if ( (byte_49FD546 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&Rarity_TypeInfo, v3);
    sub_1B64870(&StringLiteral_1/*""*/, v4);
    byte_49FD546 = 1;
  }
  if ( (unsigned int)(rarityId - 1) > 4 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v6 = Rarity_TypeInfo;
  }
  rarityType = v6->static_fields->rarityType;
  if ( !rarityType )
    sub_1B64ACC(v6, method);
  if ( rarityType->max_length <= rarityId )
    sub_1B64AD4(v6, method);
  v8 = rarityType->m_Items[rarityId];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v8, 0LL);
}


int32_t __fastcall Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_BDD5D0[rarityId - 1];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Rarity__setRarityIcon(
        UISprite_o *sprite,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *Icon_37394352; // x22
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  int32_t RarityIcon; // w23
  int32_t v17; // w20

  if ( (byte_49FD544 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&rarity);
    sub_1B64870(&Method_DataManager_GetMaster_ServantExceedMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v10);
    sub_1B64870(&DataManager_TypeInfo, v11);
    sub_1B64870(&Rarity_TypeInfo, v12);
    byte_49FD544 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_37394352 = Rarity__getIcon_37394352(rarity, exceedCount, lv, *(const MethodInfo **)&lv);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         rarity,
                         exceedCount,
                         0,
                         0LL),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0LL) )
    {
LABEL_19:
      sub_1B64ACC(Master_object, v15);
    }
    v17 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Master_object, rarity, lv, RarityIcon, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v17 >= 3 )
    {
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_37394352, 0LL);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0LL);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_37394352, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}