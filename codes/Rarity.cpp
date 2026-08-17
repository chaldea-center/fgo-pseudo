void Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x19
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  struct Rarity_StaticFields *static_fields; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x19
  int32_t v69; // w1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  int32_t v76; // w1
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  int32_t v83; // w1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int32_t v90; // w1
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t v97; // w1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  int32_t v104; // w1
  struct Rarity_StaticFields *v105; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7

  if ( (byte_596F6C2 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301);
    sub_2213A60(&StringLiteral_18784/*"class_b_"*/);
    sub_2213A60(&StringLiteral_11442/*"RARITY_TYPE_SSRARE"*/);
    sub_2213A60(&StringLiteral_11441/*"RARITY_TYPE_SRARE"*/);
    sub_2213A60(&StringLiteral_11439/*"RARITY_TYPE_NONE"*/);
    sub_2213A60(&StringLiteral_11440/*"RARITY_TYPE_RARE"*/);
    sub_2213A60(&StringLiteral_11438/*"RARITY_TYPE_COMMON"*/);
    sub_2213A60(&StringLiteral_11443/*"RARITY_TYPE_UNCOMMON"*/);
    sub_2213A60(&StringLiteral_18788/*"class_g_"*/);
    sub_2213A60(&StringLiteral_18789/*"class_n_"*/);
    sub_2213A60(&StringLiteral_18790/*"class_s_"*/);
    byte_596F6C2 = 1;
  }
  v1 = (System_Array_o *)sub_2213B20(int___TypeInfo, 6);
  v2.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v1, v2, 0);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_2213B20(string___TypeInfo, 6);
  if ( !v10 )
    goto LABEL_19;
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_18;
  v19 = StringLiteral_18789/*"class_n_"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_18789/*"class_n_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), v19, v12, v13, v14, v15, v16, v17);
  if ( (*(_DWORD *)(v18 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_18;
  v26 = StringLiteral_18784/*"class_b_"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_18784/*"class_b_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_18;
  v33 = StringLiteral_18784/*"class_b_"*/;
  *(_QWORD *)(v18 + 48) = StringLiteral_18784/*"class_b_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 48), v33, v27, v28, v29, v30, v31, v32);
  if ( (*(_DWORD *)(v18 + 24) & 0xFFFFFFFC) == 0
    || (v40 = StringLiteral_18790/*"class_s_"*/,
        *(_QWORD *)(v18 + 56) = StringLiteral_18790/*"class_s_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 56), v40, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v18 + 24) <= 4u)
    || (v47 = StringLiteral_18788/*"class_g_"*/,
        *(_QWORD *)(v18 + 64) = StringLiteral_18788/*"class_g_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 64), v47, v41, v42, v43, v44, v45, v46),
        *(_DWORD *)(v18 + 24) <= 5u) )
  {
LABEL_18:
    sub_2213CE4(v10);
  }
  v54 = StringLiteral_18788/*"class_g_"*/;
  *(_QWORD *)(v18 + 72) = StringLiteral_18788/*"class_g_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 72), v54, v48, v49, v50, v51, v52, v53);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->designCardFileList, v18, v56, v57, v58, v59, v60, v61);
  v10 = sub_2213B20(string___TypeInfo, 6);
  if ( !v10 )
LABEL_19:
    sub_2213CDC(v10, v11);
  v68 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_18;
  v69 = StringLiteral_11439/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_11439/*"RARITY_TYPE_NONE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), v69, v62, v63, v64, v65, v66, v67);
  if ( (*(_DWORD *)(v68 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_18;
  v76 = StringLiteral_11438/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v68 + 40) = StringLiteral_11438/*"RARITY_TYPE_COMMON"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 40), v76, v70, v71, v72, v73, v74, v75);
  if ( *(_DWORD *)(v68 + 24) <= 2u )
    goto LABEL_18;
  v83 = StringLiteral_11443/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v68 + 48) = StringLiteral_11443/*"RARITY_TYPE_UNCOMMON"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 48), v83, v77, v78, v79, v80, v81, v82);
  if ( (*(_DWORD *)(v68 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_18;
  v90 = StringLiteral_11440/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v68 + 56) = StringLiteral_11440/*"RARITY_TYPE_RARE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 56), v90, v84, v85, v86, v87, v88, v89);
  if ( *(_DWORD *)(v68 + 24) <= 4u )
    goto LABEL_18;
  v97 = StringLiteral_11441/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v68 + 64) = StringLiteral_11441/*"RARITY_TYPE_SRARE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 64), v97, v91, v92, v93, v94, v95, v96);
  if ( *(_DWORD *)(v68 + 24) <= 5u )
    goto LABEL_18;
  v104 = StringLiteral_11442/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v68 + 72) = StringLiteral_11442/*"RARITY_TYPE_SSRARE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 72), v104, v98, v99, v100, v101, v102, v103);
  v105 = Rarity_TypeInfo->static_fields;
  v105->rarityType = (struct System_String_array *)v68;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v105->rarityType, v68, v106, v107, v108, v109, v110, v111);
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

  if ( (byte_596F6C0 & 1) == 0 )
  {
    sub_2213A60(&Rarity_TypeInfo);
    byte_596F6C0 = 1;
  }
  v4 = Rarity_TypeInfo;
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, method, v2);
    v4 = Rarity_TypeInfo;
  }
  designCardFileList = v4->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_2213CDC(v4, method);
  if ( LODWORD(designCardFileList->max_length) <= rarityId )
    sub_2213CE4(v4);
  return designCardFileList->m_Items[rarityId];
}


// local variable allocation has failed, the output may be wrong!
int32_t Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  Rarity_c *v8; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_596F6BC & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    byte_596F6BC = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&classId, method);
  result = AtlasManager__GetFrameId(classId, 0);
  if ( result <= 0 )
  {
    v8 = Rarity_TypeInfo;
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v6, v7);
      v8 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v8->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_2213CDC(v8, v6);
    if ( LODWORD(frameTypeImageTable->max_length) <= rarityId )
      sub_2213CE4(v8);
    return frameTypeImageTable->m_Items[rarityId];
  }
  return result;
}


System_String_o *Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = rarity;
  if ( (byte_596F6BD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24157/*"rarity"*/);
    sub_2213A60(&StringLiteral_16747/*"_0"*/);
    byte_596F6BD = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_75694928(
           (System_String_o *)StringLiteral_24157/*"rarity"*/,
           v2,
           (System_String_o *)StringLiteral_16747/*"_0"*/,
           0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Rarity__getIcon_47404732(
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
  if ( (byte_596F6BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_24157/*"rarity"*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_16747/*"_0"*/);
    byte_596F6BE = 1;
  }
  v16 = 0;
  if ( exceedCount < 1 )
  {
    v15 = System_Int32__ToString((int32_t)&v17, 0);
    return System_String__Concat_75694928(
             (System_String_o *)StringLiteral_24157/*"rarity"*/,
             v15,
             (System_String_o *)StringLiteral_16747/*"_0"*/,
             0);
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&exceedCount, *(_QWORD *)&lv);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_object
      || (v11 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (Il2CppObject *)ServantExceedMaster__GetRarityIcon(
                                         (ServantExceedMaster_o *)Master_object,
                                         actualRarity,
                                         exceedCount,
                                         1,
                                         0,
                                         0),
          v16 = (int)RarityIcon,
          !v11) )
    {
      sub_2213CDC(RarityIcon, v10);
    }
    v16 = ServantLvDetailMaster__GetRarityIcon(v11, actualRarity, lv, (int32_t)RarityIcon, 0, 0);
    v12 = System_Int32__ToString((int32_t)&v17, 0);
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    return System_String__Concat_75696856(
             (System_String_o *)StringLiteral_24157/*"rarity"*/,
             v12,
             (System_String_o *)StringLiteral_16746/*"_"*/,
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

  if ( (byte_596F6C1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F6C1 = 1;
  }
  if ( (unsigned int)(rarityId - 6) < 0xFFFFFFFB )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = Rarity_TypeInfo;
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, method, v2);
    v5 = Rarity_TypeInfo;
  }
  rarityType = v5->static_fields->rarityType;
  if ( !rarityType )
    sub_2213CDC(v5, method);
  if ( LODWORD(rarityType->max_length) <= rarityId )
    sub_2213CE4(v5);
  v7 = rarityType->m_Items[rarityId];
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  return LocalizationManager__Get(v7, 0);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *Icon_47404732; // x22
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  int32_t RarityIcon; // w23

  if ( (byte_596F6BF & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    byte_596F6BF = 1;
  }
  if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, *(_QWORD *)&rarity, *(_QWORD *)&exceedCount);
  Icon_47404732 = Rarity__getIcon_47404732(rarity, exceedCount, lv, actualRarity, *(const MethodInfo **)&actualRarity);
  if ( exceedCount < 1 )
    goto LABEL_21;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_object )
    goto LABEL_18;
  RarityIcon = ServantExceedMaster__GetRarityIcon(
                 (ServantExceedMaster_o *)Master_object,
                 actualRarity,
                 exceedCount,
                 0,
                 0,
                 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( ServantLvDetailMaster__GetRarityIcon(
         (ServantLvDetailMaster_o *)Master_object,
         actualRarity,
         lv,
         RarityIcon,
         0,
         0) < 3 )
  {
LABEL_21:
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
    AtlasManager__SetCommon(sprite, 0);
    if ( sprite )
      goto LABEL_14;
LABEL_18:
    sub_2213CDC(Master_object, v15);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  Master_object = (Il2CppObject *)AtlasManager__SetEventSprite(sprite, Icon_47404732, 0);
  if ( !sprite )
    goto LABEL_18;
LABEL_14:
  UISprite__set_spriteName(sprite, Icon_47404732, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}