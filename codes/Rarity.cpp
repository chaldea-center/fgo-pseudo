void __fastcall Rarity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Array_o *v29; // x0
  struct System_Int32_array *v30; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x19
  int64_t v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x1
  struct Rarity_StaticFields *static_fields; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x19
  int64_t v96; // x1
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x1
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x1
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x1
  struct Rarity_StaticFields *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  System_RuntimeFieldHandle_o v139; // 0:w1.4

  if ( (byte_4B151EC & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, v1, v2);
    sub_1BCA7E0(&Rarity_TypeInfo, v3, v4);
    sub_1BCA7E0(&string___TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
      v7,
      v8);
    sub_1BCA7E0(&StringLiteral_18175/*"class_b_"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11093/*"RARITY_TYPE_SSRARE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11092/*"RARITY_TYPE_SRARE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11090/*"RARITY_TYPE_NONE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11091/*"RARITY_TYPE_RARE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11089/*"RARITY_TYPE_COMMON"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11094/*"RARITY_TYPE_UNCOMMON"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_18179/*"class_g_"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_18180/*"class_n_"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_18181/*"class_s_"*/, v27, v28);
    byte_4B151EC = 1;
  }
  v29 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 6LL);
  v139.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v30 = (struct System_Int32_array *)v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v29, v139, 0LL);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v30;
  sub_1BCA784((PartyOrganizationUtility_o *)Rarity_TypeInfo->static_fields, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = sub_1BCA888(string___TypeInfo, 6LL);
  if ( !v37 )
    goto LABEL_19;
  v45 = v37;
  if ( !*(_DWORD *)(v37 + 24) )
    goto LABEL_18;
  v46 = StringLiteral_18180/*"class_n_"*/;
  *(_QWORD *)(v37 + 32) = StringLiteral_18180/*"class_n_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), v46, v39, v40, v41, v42, v43, v44);
  if ( *(_DWORD *)(v45 + 24) <= 1u )
    goto LABEL_18;
  v53 = StringLiteral_18175/*"class_b_"*/;
  *(_QWORD *)(v45 + 40) = StringLiteral_18175/*"class_b_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 40), v53, v47, v48, v49, v50, v51, v52);
  if ( *(_DWORD *)(v45 + 24) <= 2u )
    goto LABEL_18;
  v60 = StringLiteral_18175/*"class_b_"*/;
  *(_QWORD *)(v45 + 48) = StringLiteral_18175/*"class_b_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 48), v60, v54, v55, v56, v57, v58, v59);
  if ( *(_DWORD *)(v45 + 24) <= 3u
    || (v67 = StringLiteral_18181/*"class_s_"*/,
        *(_QWORD *)(v45 + 56) = StringLiteral_18181/*"class_s_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 56), v67, v61, v62, v63, v64, v65, v66),
        *(_DWORD *)(v45 + 24) <= 4u)
    || (v74 = StringLiteral_18179/*"class_g_"*/,
        *(_QWORD *)(v45 + 64) = StringLiteral_18179/*"class_g_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 64), v74, v68, v69, v70, v71, v72, v73),
        *(_DWORD *)(v45 + 24) <= 5u) )
  {
LABEL_18:
    sub_1BCAA44(v37, v38);
  }
  v81 = StringLiteral_18179/*"class_g_"*/;
  *(_QWORD *)(v45 + 72) = StringLiteral_18179/*"class_g_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 72), v81, v75, v76, v77, v78, v79, v80);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->designCardFileList, v45, v83, v84, v85, v86, v87, v88);
  v37 = sub_1BCA888(string___TypeInfo, 6LL);
  if ( !v37 )
LABEL_19:
    sub_1BCAA3C(v37, v38);
  v95 = v37;
  if ( !*(_DWORD *)(v37 + 24) )
    goto LABEL_18;
  v96 = StringLiteral_11090/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v37 + 32) = StringLiteral_11090/*"RARITY_TYPE_NONE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), v96, v89, v90, v91, v92, v93, v94);
  if ( *(_DWORD *)(v95 + 24) <= 1u )
    goto LABEL_18;
  v103 = StringLiteral_11089/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v95 + 40) = StringLiteral_11089/*"RARITY_TYPE_COMMON"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 40), v103, v97, v98, v99, v100, v101, v102);
  if ( *(_DWORD *)(v95 + 24) <= 2u )
    goto LABEL_18;
  v110 = StringLiteral_11094/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v95 + 48) = StringLiteral_11094/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 48), v110, v104, v105, v106, v107, v108, v109);
  if ( *(_DWORD *)(v95 + 24) <= 3u )
    goto LABEL_18;
  v117 = StringLiteral_11091/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v95 + 56) = StringLiteral_11091/*"RARITY_TYPE_RARE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 56), v117, v111, v112, v113, v114, v115, v116);
  if ( *(_DWORD *)(v95 + 24) <= 4u )
    goto LABEL_18;
  v124 = StringLiteral_11092/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v95 + 64) = StringLiteral_11092/*"RARITY_TYPE_SRARE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 64), v124, v118, v119, v120, v121, v122, v123);
  if ( *(_DWORD *)(v95 + 24) <= 5u )
    goto LABEL_18;
  v131 = StringLiteral_11093/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v95 + 72) = StringLiteral_11093/*"RARITY_TYPE_SSRARE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 72), v131, v125, v126, v127, v128, v129, v130);
  v132 = Rarity_TypeInfo->static_fields;
  v132->rarityType = (struct System_String_array *)v95;
  sub_1BCA784((PartyOrganizationUtility_o *)&v132->rarityType, v95, v133, v134, v135, v136, v137, v138);
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

  if ( (byte_4B151EA & 1) == 0 )
  {
    sub_1BCA7E0(&Rarity_TypeInfo, method, v2);
    byte_4B151EA = 1;
  }
  v4 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, method);
    v4 = Rarity_TypeInfo;
  }
  designCardFileList = v4->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1BCAA3C(v4, method);
  if ( designCardFileList->max_length <= rarityId )
    sub_1BCAA44(v4, method);
  return designCardFileList->m_Items[rarityId];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t result; // w0
  __int64 v8; // x1
  Rarity_c *v9; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4B151E6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&classId, method);
    sub_1BCA7E0(&Rarity_TypeInfo, v5, v6);
    byte_4B151E6 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&classId);
  result = AtlasManager__GetFrameId(classId, 0LL);
  if ( result <= 0 )
  {
    v9 = Rarity_TypeInfo;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v8);
      v9 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v9->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_1BCAA3C(v9, v8);
    if ( frameTypeImageTable->max_length <= rarityId )
      sub_1BCAA44(v9, v8);
    return frameTypeImageTable->m_Items[rarityId + 1];
  }
  return result;
}


System_String_o *__fastcall Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = rarity;
  if ( (byte_4B151E7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23030/*"rarity"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_16291/*"_0"*/, v3, v4);
    byte_4B151E7 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62412480(
           (System_String_o *)StringLiteral_23030/*"rarity"*/,
           v5,
           (System_String_o *)StringLiteral_16291/*"_0"*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Rarity__getIcon_38416824(
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x23
  Il2CppObject *RarityIcon; // x0
  __int64 v19; // x1
  ServantLvDetailMaster_o *v20; // x22
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v24; // x0
  int32_t v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  v26 = rarity;
  if ( (byte_4B151E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&exceedCount, *(_QWORD *)&lv);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_23030/*"rarity"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16291/*"_0"*/, v15, v16);
    byte_4B151E8 = 1;
  }
  v25 = 0;
  if ( exceedCount < 1 )
  {
    v24 = System_Int32__ToString((int32_t)&v26, 0LL);
    return System_String__Concat_62412480(
             (System_String_o *)StringLiteral_23030/*"rarity"*/,
             v24,
             (System_String_o *)StringLiteral_16291/*"_0"*/,
             0LL);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&exceedCount);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_object
      || (v20 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (Il2CppObject *)ServantExceedMaster__GetRarityIcon(
                                         (ServantExceedMaster_o *)Master_object,
                                         rarity,
                                         exceedCount,
                                         1,
                                         0LL),
          !v20) )
    {
      sub_1BCAA3C(RarityIcon, v19);
    }
    v25 = ServantLvDetailMaster__GetRarityIcon(v20, rarity, lv, (int32_t)RarityIcon, 0LL);
    v21 = System_Int32__ToString((int32_t)&v26, 0LL);
    v22 = System_Int32__ToString((int32_t)&v25, 0LL);
    return System_String__Concat_62414484(
             (System_String_o *)StringLiteral_23030/*"rarity"*/,
             v21,
             (System_String_o *)StringLiteral_16290/*"_"*/,
             v22,
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Rarity_c *v9; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v11; // x19

  if ( (byte_4B151EB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Rarity_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B151EB = 1;
  }
  if ( (unsigned int)(rarityId - 1) > 4 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v9 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, method);
    v9 = Rarity_TypeInfo;
  }
  rarityType = v9->static_fields->rarityType;
  if ( !rarityType )
    sub_1BCAA3C(v9, method);
  if ( rarityType->max_length <= rarityId )
    sub_1BCAA44(v9, method);
  v11 = rarityType->m_Items[rarityId];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get(v11, 0LL);
}


int32_t __fastcall Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_C0D368[rarityId - 1];
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  System_String_o *Icon_38416824; // x22
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  int32_t RarityIcon; // w23
  __int64 v22; // x1
  int32_t v23; // w20

  if ( (byte_4B151E9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&rarity, *(_QWORD *)&exceedCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExceedMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Rarity_TypeInfo, v15, v16);
    byte_4B151E9 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, *(_QWORD *)&rarity);
  Icon_38416824 = Rarity__getIcon_38416824(rarity, exceedCount, lv, *(const MethodInfo **)&lv);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         rarity,
                         exceedCount,
                         0,
                         0LL),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0LL) )
    {
LABEL_19:
      sub_1BCAA3C(Master_object, v20);
    }
    v23 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Master_object, rarity, lv, RarityIcon, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
    if ( v23 >= 3 )
    {
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_38416824, 0LL);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0LL);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_38416824, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}