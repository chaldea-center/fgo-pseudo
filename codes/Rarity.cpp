void Rarity___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x19
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  struct Rarity_StaticFields *static_fields; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x19
  int32_t v67; // w1
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  int32_t v74; // w1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  int32_t v81; // w1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  int32_t v88; // w1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  int32_t v95; // w1
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  int32_t v102; // w1
  struct Rarity_StaticFields *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7

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
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v1,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
    0);
  Rarity_TypeInfo->static_fields->frameTypeImageTable = (struct System_Int32_array *)v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)Rarity_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = sub_2213B20(string___TypeInfo, 6);
  if ( !v8 )
    goto LABEL_19;
  v16 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_18;
  v17 = StringLiteral_18789/*"class_n_"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_18789/*"class_n_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), v17, v10, v11, v12, v13, v14, v15);
  if ( (*(_DWORD *)(v16 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_18;
  v24 = StringLiteral_18784/*"class_b_"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_18784/*"class_b_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 40), v24, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_18;
  v31 = StringLiteral_18784/*"class_b_"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_18784/*"class_b_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 48), v31, v25, v26, v27, v28, v29, v30);
  if ( (*(_DWORD *)(v16 + 24) & 0xFFFFFFFC) == 0
    || (v38 = StringLiteral_18790/*"class_s_"*/,
        *(_QWORD *)(v16 + 56) = StringLiteral_18790/*"class_s_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 56), v38, v32, v33, v34, v35, v36, v37),
        *(_DWORD *)(v16 + 24) <= 4u)
    || (v45 = StringLiteral_18788/*"class_g_"*/,
        *(_QWORD *)(v16 + 64) = StringLiteral_18788/*"class_g_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 64), v45, v39, v40, v41, v42, v43, v44),
        *(_DWORD *)(v16 + 24) <= 5u) )
  {
LABEL_18:
    sub_2213CE4(v8);
  }
  v52 = StringLiteral_18788/*"class_g_"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_18788/*"class_g_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 72), v52, v46, v47, v48, v49, v50, v51);
  static_fields = Rarity_TypeInfo->static_fields;
  static_fields->designCardFileList = (struct System_String_array *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->designCardFileList, v16, v54, v55, v56, v57, v58, v59);
  v8 = sub_2213B20(string___TypeInfo, 6);
  if ( !v8 )
LABEL_19:
    sub_2213CDC(v8, v9);
  v66 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_18;
  v67 = StringLiteral_11439/*"RARITY_TYPE_NONE"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_11439/*"RARITY_TYPE_NONE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), v67, v60, v61, v62, v63, v64, v65);
  if ( (*(_DWORD *)(v66 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_18;
  v74 = StringLiteral_11438/*"RARITY_TYPE_COMMON"*/;
  *(_QWORD *)(v66 + 40) = StringLiteral_11438/*"RARITY_TYPE_COMMON"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 40), v74, v68, v69, v70, v71, v72, v73);
  if ( *(_DWORD *)(v66 + 24) <= 2u )
    goto LABEL_18;
  v81 = StringLiteral_11443/*"RARITY_TYPE_UNCOMMON"*/;
  *(_QWORD *)(v66 + 48) = StringLiteral_11443/*"RARITY_TYPE_UNCOMMON"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 48), v81, v75, v76, v77, v78, v79, v80);
  if ( (*(_DWORD *)(v66 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_18;
  v88 = StringLiteral_11440/*"RARITY_TYPE_RARE"*/;
  *(_QWORD *)(v66 + 56) = StringLiteral_11440/*"RARITY_TYPE_RARE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 56), v88, v82, v83, v84, v85, v86, v87);
  if ( *(_DWORD *)(v66 + 24) <= 4u )
    goto LABEL_18;
  v95 = StringLiteral_11441/*"RARITY_TYPE_SRARE"*/;
  *(_QWORD *)(v66 + 64) = StringLiteral_11441/*"RARITY_TYPE_SRARE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 64), v95, v89, v90, v91, v92, v93, v94);
  if ( *(_DWORD *)(v66 + 24) <= 5u )
    goto LABEL_18;
  v102 = StringLiteral_11442/*"RARITY_TYPE_SSRARE"*/;
  *(_QWORD *)(v66 + 72) = StringLiteral_11442/*"RARITY_TYPE_SSRARE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 72), v102, v96, v97, v98, v99, v100, v101);
  v103 = Rarity_TypeInfo->static_fields;
  v103->rarityType = (struct System_String_array *)v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v103->rarityType, v66, v104, v105, v106, v107, v108, v109);
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