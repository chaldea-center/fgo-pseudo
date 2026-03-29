void Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x19
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  struct Rarity_StaticFields *static_fields; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x19
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  int32_t v74; // w1
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t v81; // w1
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  int32_t v88; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  int32_t v95; // w1
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  int32_t v102; // w1
  struct Rarity_StaticFields *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7

  if ( (byte_4D2F8F5 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301);
    sub_1C93AD4(&StringLiteral_18131/*"class_b_"*/);
    sub_1C93AD4(&StringLiteral_11044/*"RARITY_TYPE_SSRARE"*/);
    sub_1C93AD4(&StringLiteral_11043/*"RARITY_TYPE_SRARE"*/);
    sub_1C93AD4(&StringLiteral_11041/*"RARITY_TYPE_NONE"*/);
    sub_1C93AD4(&StringLiteral_11042/*"RARITY_TYPE_RARE"*/);
    sub_1C93AD4(&StringLiteral_11040/*"RARITY_TYPE_COMMON"*/);
    sub_1C93AD4(&StringLiteral_11045/*"RARITY_TYPE_UNCOMMON"*/);
    sub_1C93AD4(&StringLiteral_18135/*"class_g_"*/);
    sub_1C93AD4(&StringLiteral_18136/*"class_n_"*/);
    sub_1C93AD4(&StringLiteral_18137/*"class_s_"*/);
    byte_4D2F8F5 = 1;
  }
  v1 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v1,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
    0);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = (struct System_Int32_array *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = sub_1C93B7C(string___TypeInfo, 6);
  if ( !v8 )
    goto LABEL_19;
  v16 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_18;
  v17 = StringLiteral_18136/*"class_n_"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_18136/*"class_n_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 32), v17, v10, v11, v12, v13, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_18;
  v24 = StringLiteral_18131/*"class_b_"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_18131/*"class_b_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 40), v24, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_18;
  v31 = StringLiteral_18131/*"class_b_"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_18131/*"class_b_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 48), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v16 + 24) <= 3u
    || (v38 = StringLiteral_18137/*"class_s_"*/,
        *(_QWORD *)(v16 + 56) = StringLiteral_18137/*"class_s_"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 56), v38, v32, v33, v34, v35, v36, v37),
        *(_DWORD *)(v16 + 24) <= 4u)
    || (v45 = StringLiteral_18135/*"class_g_"*/,
        *(_QWORD *)(v16 + 64) = StringLiteral_18135/*"class_g_"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 64), v45, v39, v40, v41, v42, v43, v44),
        *(_DWORD *)(v16 + 24) <= 5u) )
  {
LABEL_18:
    sub_1C93D34(v8);
  }
  v52 = StringLiteral_18135/*"class_g_"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_18135/*"class_g_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 72), v52, v46, v47, v48, v49, v50, v51);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->designCardFileList, v16, v54, v55, v56, v57, v58, v59);
  v8 = sub_1C93B7C(string___TypeInfo, 6);
  if ( !v8 )
LABEL_19:
    sub_1C93D2C(v8, v9);
  v66 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_18;
  v67 = StringLiteral_11041/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_11041/*"RARITY_TYPE_NONE"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 32), v67, v60, v61, v62, v63, v64, v65);
  if ( *(_DWORD *)(v66 + 24) <= 1u )
    goto LABEL_18;
  v74 = StringLiteral_11040/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v66 + 40) = StringLiteral_11040/*"RARITY_TYPE_COMMON"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 40), v74, v68, v69, v70, v71, v72, v73);
  if ( *(_DWORD *)(v66 + 24) <= 2u )
    goto LABEL_18;
  v81 = StringLiteral_11045/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v66 + 48) = StringLiteral_11045/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 48), v81, v75, v76, v77, v78, v79, v80);
  if ( *(_DWORD *)(v66 + 24) <= 3u )
    goto LABEL_18;
  v88 = StringLiteral_11042/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v66 + 56) = StringLiteral_11042/*"RARITY_TYPE_RARE"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 56), v88, v82, v83, v84, v85, v86, v87);
  if ( *(_DWORD *)(v66 + 24) <= 4u )
    goto LABEL_18;
  v95 = StringLiteral_11043/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v66 + 64) = StringLiteral_11043/*"RARITY_TYPE_SRARE"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 64), v95, v89, v90, v91, v92, v93, v94);
  if ( *(_DWORD *)(v66 + 24) <= 5u )
    goto LABEL_18;
  v102 = StringLiteral_11044/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v66 + 72) = StringLiteral_11044/*"RARITY_TYPE_SSRARE"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 72), v102, v96, v97, v98, v99, v100, v101);
  v103 = Rarity_TypeInfo->static_fields;
  v103->rarityType = (struct System_String_array *)v66;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v103->rarityType, v66, v104, v105, v106, v107, v108, v109);
}


void Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v3; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_4D2F8F3 & 1) == 0 )
  {
    sub_1C93AD4(&Rarity_TypeInfo);
    byte_4D2F8F3 = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1C93D2C(v3, method);
  if ( LODWORD(designCardFileList->max_length) <= rarityId )
    sub_1C93D34(v3);
  return designCardFileList->m_Items[rarityId];
}


int32_t Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v6; // x1
  Rarity_c *v7; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4D2F8EF & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    byte_4D2F8EF = 1;
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
      sub_1C93D2C(v7, v6);
    if ( LODWORD(frameTypeImageTable->max_length) <= rarityId )
      sub_1C93D34(v7);
    return frameTypeImageTable->m_Items[rarityId];
  }
  return result;
}


System_String_o *Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = rarity;
  if ( (byte_4D2F8F0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23247/*"rarity"*/);
    sub_1C93AD4(&StringLiteral_16208/*"_0"*/);
    byte_4D2F8F0 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_64463988(
           (System_String_o *)StringLiteral_23247/*"rarity"*/,
           v2,
           (System_String_o *)StringLiteral_16208/*"_0"*/,
           0);
}


System_String_o *Rarity__getIcon_41156280(
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
  if ( (byte_4D2F8F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_23247/*"rarity"*/);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    sub_1C93AD4(&StringLiteral_16208/*"_0"*/);
    byte_4D2F8F1 = 1;
  }
  v16 = 0;
  if ( exceedCount < 1 )
  {
    v15 = System_Int32__ToString((int32_t)&v17, 0);
    return System_String__Concat_64463988(
             (System_String_o *)StringLiteral_23247/*"rarity"*/,
             v15,
             (System_String_o *)StringLiteral_16208/*"_0"*/,
             0);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
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
      sub_1C93D2C(RarityIcon, v10);
    }
    v16 = ServantLvDetailMaster__GetRarityIcon(v11, actualRarity, lv, (int32_t)RarityIcon, 0, 0);
    v12 = System_Int32__ToString((int32_t)&v17, 0);
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    return System_String__Concat_64465992(
             (System_String_o *)StringLiteral_23247/*"rarity"*/,
             v12,
             (System_String_o *)StringLiteral_16207/*"_"*/,
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

  if ( (byte_4D2F8F4 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F8F4 = 1;
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
    sub_1C93D2C(v4, method);
  if ( LODWORD(rarityType->max_length) <= rarityId )
    sub_1C93D34(v4);
  v6 = rarityType->m_Items[rarityId];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0);
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
  System_String_o *Icon_41156280; // x22
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t RarityIcon; // w23
  int32_t v15; // w20

  if ( (byte_4D2F8F2 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    byte_4D2F8F2 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_41156280 = Rarity__getIcon_41156280(rarity, exceedCount, lv, actualRarity, *(const MethodInfo **)&actualRarity);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
    {
LABEL_19:
      sub_1C93D2C(Master_object, v13);
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
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_41156280, 0);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_41156280, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}