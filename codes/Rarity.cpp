void Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x19
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  struct Rarity_StaticFields *static_fields; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  __int64 v68; // x19
  int32_t v69; // w1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int32_t v83; // w1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  int32_t v104; // w1
  struct Rarity_StaticFields *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7

  if ( (byte_4D2B74C & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301);
    sub_1C94098(&StringLiteral_18083/*"class_b_"*/);
    sub_1C94098(&StringLiteral_11006/*"RARITY_TYPE_SSRARE"*/);
    sub_1C94098(&StringLiteral_11005/*"RARITY_TYPE_SRARE"*/);
    sub_1C94098(&StringLiteral_11003/*"RARITY_TYPE_NONE"*/);
    sub_1C94098(&StringLiteral_11004/*"RARITY_TYPE_RARE"*/);
    sub_1C94098(&StringLiteral_11002/*"RARITY_TYPE_COMMON"*/);
    sub_1C94098(&StringLiteral_11007/*"RARITY_TYPE_UNCOMMON"*/);
    sub_1C94098(&StringLiteral_18087/*"class_g_"*/);
    sub_1C94098(&StringLiteral_18088/*"class_n_"*/);
    sub_1C94098(&StringLiteral_18089/*"class_s_"*/);
    byte_4D2B74C = 1;
  }
  v1 = (System_Array_o *)sub_1C94140(int___TypeInfo, 6);
  v2.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v1, v2, 0);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_1C94140(string___TypeInfo, 6);
  if ( !v10 )
    goto LABEL_19;
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_18;
  v19 = StringLiteral_18088/*"class_n_"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_18088/*"class_n_"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 32), v19, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_18;
  v26 = StringLiteral_18083/*"class_b_"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_18083/*"class_b_"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_18;
  v33 = StringLiteral_18083/*"class_b_"*/;
  *(_QWORD *)(v18 + 48) = StringLiteral_18083/*"class_b_"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 48), v33, v27, v28, v29, v30, v31, v32);
  if ( *(_DWORD *)(v18 + 24) <= 3u
    || (v40 = StringLiteral_18089/*"class_s_"*/,
        *(_QWORD *)(v18 + 56) = StringLiteral_18089/*"class_s_"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 56), v40, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v18 + 24) <= 4u)
    || (v47 = StringLiteral_18087/*"class_g_"*/,
        *(_QWORD *)(v18 + 64) = StringLiteral_18087/*"class_g_"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 64), v47, v41, v42, v43, v44, v45, v46),
        *(_DWORD *)(v18 + 24) <= 5u) )
  {
LABEL_18:
    sub_1C942F8(v10);
  }
  v54 = StringLiteral_18087/*"class_g_"*/;
  *(_QWORD *)(v18 + 72) = StringLiteral_18087/*"class_g_"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 72), v54, v48, v49, v50, v51, v52, v53);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->designCardFileList, v18, v56, v57, v58, v59, v60, v61);
  v10 = sub_1C94140(string___TypeInfo, 6);
  if ( !v10 )
LABEL_19:
    sub_1C942F0(v10, v11);
  v68 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_18;
  v69 = StringLiteral_11003/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_11003/*"RARITY_TYPE_NONE"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 32), v69, v62, v63, v64, v65, v66, v67);
  if ( *(_DWORD *)(v68 + 24) <= 1u )
    goto LABEL_18;
  v76 = StringLiteral_11002/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v68 + 40) = StringLiteral_11002/*"RARITY_TYPE_COMMON"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 40), v76, v70, v71, v72, v73, v74, v75);
  if ( *(_DWORD *)(v68 + 24) <= 2u )
    goto LABEL_18;
  v83 = StringLiteral_11007/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v68 + 48) = StringLiteral_11007/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 48), v83, v77, v78, v79, v80, v81, v82);
  if ( *(_DWORD *)(v68 + 24) <= 3u )
    goto LABEL_18;
  v90 = StringLiteral_11004/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v68 + 56) = StringLiteral_11004/*"RARITY_TYPE_RARE"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 56), v90, v84, v85, v86, v87, v88, v89);
  if ( *(_DWORD *)(v68 + 24) <= 4u )
    goto LABEL_18;
  v97 = StringLiteral_11005/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v68 + 64) = StringLiteral_11005/*"RARITY_TYPE_SRARE"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 64), v97, v91, v92, v93, v94, v95, v96);
  if ( *(_DWORD *)(v68 + 24) <= 5u )
    goto LABEL_18;
  v104 = StringLiteral_11006/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v68 + 72) = StringLiteral_11006/*"RARITY_TYPE_SSRARE"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 72), v104, v98, v99, v100, v101, v102, v103);
  v105 = Rarity_TypeInfo->static_fields;
  v105->rarityType = (struct System_String_array *)v68;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v105->rarityType, v68, v106, v107, v108, v109, v110, v111);
}


void Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v3; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_4D2B74A & 1) == 0 )
  {
    sub_1C94098(&Rarity_TypeInfo);
    byte_4D2B74A = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1C942F0(v3, method);
  if ( LODWORD(designCardFileList->max_length) <= rarityId )
    sub_1C942F8(v3);
  return designCardFileList->m_Items[rarityId];
}


int32_t Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v6; // x1
  Rarity_c *v7; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4D2B746 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    byte_4D2B746 = 1;
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
      sub_1C942F0(v7, v6);
    if ( LODWORD(frameTypeImageTable->max_length) <= rarityId )
      sub_1C942F8(v7);
    return frameTypeImageTable->m_Items[rarityId];
  }
  return result;
}


System_String_o *Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = rarity;
  if ( (byte_4D2B747 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23187/*"rarity"*/);
    sub_1C94098(&StringLiteral_16164/*"_0"*/);
    byte_4D2B747 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_64456008(
           (System_String_o *)StringLiteral_23187/*"rarity"*/,
           v2,
           (System_String_o *)StringLiteral_16164/*"_0"*/,
           0);
}


System_String_o *Rarity__getIcon_41192068(
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
  if ( (byte_4D2B748 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&StringLiteral_23187/*"rarity"*/);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    sub_1C94098(&StringLiteral_16164/*"_0"*/);
    byte_4D2B748 = 1;
  }
  v16 = 0;
  if ( exceedCount < 1 )
  {
    v15 = System_Int32__ToString((int32_t)&v17, 0);
    return System_String__Concat_64456008(
             (System_String_o *)StringLiteral_23187/*"rarity"*/,
             v15,
             (System_String_o *)StringLiteral_16164/*"_0"*/,
             0);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
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
      sub_1C942F0(RarityIcon, v10);
    }
    v16 = ServantLvDetailMaster__GetRarityIcon(v11, actualRarity, lv, (int32_t)RarityIcon, 0, 0);
    v12 = System_Int32__ToString((int32_t)&v17, 0);
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    return System_String__Concat_64458012(
             (System_String_o *)StringLiteral_23187/*"rarity"*/,
             v12,
             (System_String_o *)StringLiteral_16163/*"_"*/,
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

  if ( (byte_4D2B74B & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B74B = 1;
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
    sub_1C942F0(v4, method);
  if ( LODWORD(rarityType->max_length) <= rarityId )
    sub_1C942F8(v4);
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
    return dword_D33620[rarityId - 1];
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
  System_String_o *Icon_41192068; // x22
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t RarityIcon; // w23
  int32_t v15; // w20

  if ( (byte_4D2B749 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    byte_4D2B749 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_41192068 = Rarity__getIcon_41192068(rarity, exceedCount, lv, actualRarity, *(const MethodInfo **)&actualRarity);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         actualRarity,
                         exceedCount,
                         0,
                         0,
                         0),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0) )
    {
LABEL_19:
      sub_1C942F0(Master_object, v13);
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
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_41192068, 0);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_41192068, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}