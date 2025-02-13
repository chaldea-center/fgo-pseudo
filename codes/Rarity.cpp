void __fastcall Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  struct System_Int32_array *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x19
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  struct Rarity_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x19
  int64_t v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x1
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x1
  struct Rarity_StaticFields *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_RuntimeFieldHandle_o v111; // 0:w1.4

  if ( (byte_4BDB521 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301);
    sub_1C21E38(&StringLiteral_18297/*"class_b_"*/);
    sub_1C21E38(&StringLiteral_11170/*"RARITY_TYPE_SSRARE"*/);
    sub_1C21E38(&StringLiteral_11169/*"RARITY_TYPE_SRARE"*/);
    sub_1C21E38(&StringLiteral_11167/*"RARITY_TYPE_NONE"*/);
    sub_1C21E38(&StringLiteral_11168/*"RARITY_TYPE_RARE"*/);
    sub_1C21E38(&StringLiteral_11166/*"RARITY_TYPE_COMMON"*/);
    sub_1C21E38(&StringLiteral_11171/*"RARITY_TYPE_UNCOMMON"*/);
    sub_1C21E38(&StringLiteral_18301/*"class_g_"*/);
    sub_1C21E38(&StringLiteral_18302/*"class_n_"*/);
    sub_1C21E38(&StringLiteral_18303/*"class_s_"*/);
    byte_4BDB521 = 1;
  }
  v1 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 6LL);
  v111.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v2 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v1, v111, 0LL);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v2;
  sub_1C21DDC((PartyOrganizationUtility_o *)Rarity_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
  v9 = sub_1C21EE0(string___TypeInfo, 6LL);
  if ( !v9 )
    goto LABEL_19;
  v17 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_18;
  v18 = StringLiteral_18302/*"class_n_"*/;
  *(_QWORD *)(v9 + 32) = StringLiteral_18302/*"class_n_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), v18, v11, v12, v13, v14, v15, v16);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_18;
  v25 = StringLiteral_18297/*"class_b_"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_18297/*"class_b_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 40), v25, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v17 + 24) <= 2u )
    goto LABEL_18;
  v32 = StringLiteral_18297/*"class_b_"*/;
  *(_QWORD *)(v17 + 48) = StringLiteral_18297/*"class_b_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 48), v32, v26, v27, v28, v29, v30, v31);
  if ( *(_DWORD *)(v17 + 24) <= 3u
    || (v39 = StringLiteral_18303/*"class_s_"*/,
        *(_QWORD *)(v17 + 56) = StringLiteral_18303/*"class_s_"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 56), v39, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v17 + 24) <= 4u)
    || (v46 = StringLiteral_18301/*"class_g_"*/,
        *(_QWORD *)(v17 + 64) = StringLiteral_18301/*"class_g_"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 64), v46, v40, v41, v42, v43, v44, v45),
        *(_DWORD *)(v17 + 24) <= 5u) )
  {
LABEL_18:
    sub_1C2209C(v9, v10);
  }
  v53 = StringLiteral_18301/*"class_g_"*/;
  *(_QWORD *)(v17 + 72) = StringLiteral_18301/*"class_g_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 72), v53, v47, v48, v49, v50, v51, v52);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->designCardFileList, v17, v55, v56, v57, v58, v59, v60);
  v9 = sub_1C21EE0(string___TypeInfo, 6LL);
  if ( !v9 )
LABEL_19:
    sub_1C22094(v9, v10);
  v67 = v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_18;
  v68 = StringLiteral_11167/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v9 + 32) = StringLiteral_11167/*"RARITY_TYPE_NONE"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), v68, v61, v62, v63, v64, v65, v66);
  if ( *(_DWORD *)(v67 + 24) <= 1u )
    goto LABEL_18;
  v75 = StringLiteral_11166/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v67 + 40) = StringLiteral_11166/*"RARITY_TYPE_COMMON"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 40), v75, v69, v70, v71, v72, v73, v74);
  if ( *(_DWORD *)(v67 + 24) <= 2u )
    goto LABEL_18;
  v82 = StringLiteral_11171/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v67 + 48) = StringLiteral_11171/*"RARITY_TYPE_UNCOMMON"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 48), v82, v76, v77, v78, v79, v80, v81);
  if ( *(_DWORD *)(v67 + 24) <= 3u )
    goto LABEL_18;
  v89 = StringLiteral_11168/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v67 + 56) = StringLiteral_11168/*"RARITY_TYPE_RARE"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 56), v89, v83, v84, v85, v86, v87, v88);
  if ( *(_DWORD *)(v67 + 24) <= 4u )
    goto LABEL_18;
  v96 = StringLiteral_11169/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v67 + 64) = StringLiteral_11169/*"RARITY_TYPE_SRARE"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 64), v96, v90, v91, v92, v93, v94, v95);
  if ( *(_DWORD *)(v67 + 24) <= 5u )
    goto LABEL_18;
  v103 = StringLiteral_11170/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v67 + 72) = StringLiteral_11170/*"RARITY_TYPE_SSRARE"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 72), v103, v97, v98, v99, v100, v101, v102);
  v104 = Rarity_TypeInfo->static_fields;
  v104->rarityType = (struct System_String_array *)v67;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v104->rarityType, v67, v105, v106, v107, v108, v109, v110);
}


void __fastcall Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v3; // x0
  struct System_String_array *designCardFileList; // x8

  if ( (byte_4BDB51F & 1) == 0 )
  {
    sub_1C21E38(&Rarity_TypeInfo);
    byte_4BDB51F = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_1C22094(v3, method);
  if ( designCardFileList->max_length <= rarityId )
    sub_1C2209C(v3, method);
  return designCardFileList->m_Items[rarityId];
}


int32_t __fastcall Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v6; // x1
  Rarity_c *v7; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_4BDB51B & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    byte_4BDB51B = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0LL);
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
      sub_1C22094(v7, v6);
    if ( frameTypeImageTable->max_length <= rarityId )
      sub_1C2209C(v7, v6);
    return frameTypeImageTable->m_Items[rarityId + 1];
  }
  return result;
}


System_String_o *__fastcall Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = rarity;
  if ( (byte_4BDB51C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23200/*"rarity"*/);
    sub_1C21E38(&StringLiteral_16400/*"_0"*/);
    byte_4BDB51C = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_63126736(
           (System_String_o *)StringLiteral_23200/*"rarity"*/,
           v2,
           (System_String_o *)StringLiteral_16400/*"_0"*/,
           0LL);
}


System_String_o *__fastcall Rarity__getIcon_38945792(
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  Il2CppObject *RarityIcon; // x0
  __int64 v9; // x1
  ServantLvDetailMaster_o *v10; // x22
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = rarity;
  if ( (byte_4BDB51D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23200/*"rarity"*/);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_16400/*"_0"*/);
    byte_4BDB51D = 1;
  }
  v15 = 0;
  if ( exceedCount < 1 )
  {
    v14 = System_Int32__ToString((int32_t)&v16, 0LL);
    return System_String__Concat_63126736(
             (System_String_o *)StringLiteral_23200/*"rarity"*/,
             v14,
             (System_String_o *)StringLiteral_16400/*"_0"*/,
             0LL);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_object
      || (v10 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (Il2CppObject *)ServantExceedMaster__GetRarityIcon(
                                         (ServantExceedMaster_o *)Master_object,
                                         rarity,
                                         exceedCount,
                                         1,
                                         0LL),
          !v10) )
    {
      sub_1C22094(RarityIcon, v9);
    }
    v15 = ServantLvDetailMaster__GetRarityIcon(v10, rarity, lv, (int32_t)RarityIcon, 0LL);
    v11 = System_Int32__ToString((int32_t)&v16, 0LL);
    v12 = System_Int32__ToString((int32_t)&v15, 0LL);
    return System_String__Concat_63128740(
             (System_String_o *)StringLiteral_23200/*"rarity"*/,
             v11,
             (System_String_o *)StringLiteral_16399/*"_"*/,
             v12,
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
  Rarity_c *v4; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v6; // x19

  if ( (byte_4BDB520 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB520 = 1;
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
    sub_1C22094(v4, method);
  if ( rarityType->max_length <= rarityId )
    sub_1C2209C(v4, method);
  v6 = rarityType->m_Items[rarityId];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v6, 0LL);
}


int32_t __fastcall Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_C39250[rarityId - 1];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Rarity__setRarityIcon(
        UISprite_o *sprite,
        int32_t rarity,
        int32_t exceedCount,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *Icon_38945792; // x22
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  int32_t RarityIcon; // w23
  int32_t v13; // w20

  if ( (byte_4BDB51E & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    byte_4BDB51E = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_38945792 = Rarity__getIcon_38945792(rarity, exceedCount, lv, *(const MethodInfo **)&lv);
  if ( exceedCount < 1 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !Master_object
      || (RarityIcon = ServantExceedMaster__GetRarityIcon(
                         (ServantExceedMaster_o *)Master_object,
                         rarity,
                         exceedCount,
                         0,
                         0LL),
          (Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___)) == 0LL) )
    {
LABEL_19:
      sub_1C22094(Master_object, v11);
    }
    v13 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)Master_object, rarity, lv, RarityIcon, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v13 >= 3 )
    {
      Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_38945792, 0LL);
      goto LABEL_17;
    }
  }
  AtlasManager__SetCommon(sprite, 0LL);
LABEL_17:
  if ( !sprite )
    goto LABEL_19;
  UISprite__set_spriteName(sprite, Icon_38945792, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}