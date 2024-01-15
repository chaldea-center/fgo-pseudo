void __fastcall Rarity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
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
  __int64 v15; // x1
  System_Array_o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  __int64 v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x19
  __int64 v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct Rarity_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x2
  __int64 v68; // x0
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x19
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct Rarity_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_RuntimeFieldHandle_o v107; // 0:w1.4

  if ( (byte_40F829A & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, v1);
    sub_B16FFC(&Rarity_TypeInfo, v3);
    sub_B16FFC(&string___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
      v5);
    sub_B16FFC(&StringLiteral_17385/*"class_b_"*/, v6);
    sub_B16FFC(&StringLiteral_10982/*"RARITY_TYPE_SSRARE"*/, v7);
    sub_B16FFC(&StringLiteral_10981/*"RARITY_TYPE_SRARE"*/, v8);
    sub_B16FFC(&StringLiteral_10979/*"RARITY_TYPE_NONE"*/, v9);
    sub_B16FFC(&StringLiteral_10980/*"RARITY_TYPE_RARE"*/, v10);
    sub_B16FFC(&StringLiteral_10978/*"RARITY_TYPE_COMMON"*/, v11);
    sub_B16FFC(&StringLiteral_10983/*"RARITY_TYPE_UNCOMMON"*/, v12);
    sub_B16FFC(&StringLiteral_17388/*"class_g_"*/, v13);
    sub_B16FFC(&StringLiteral_17389/*"class_n_"*/, v14);
    sub_B16FFC(&StringLiteral_17390/*"class_s_"*/, v15);
    byte_40F829A = 1;
  }
  v16 = (System_Array_o *)sub_B17014(int___TypeInfo, 6LL, v2);
  v107.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v16, v107, 0LL);
  static_fields = (BattleServantConfConponent_o *)Rarity_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B16F98(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v25 = sub_B17014(string___TypeInfo, 6LL, v24);
  if ( !v25 )
    goto LABEL_68;
  v32 = (System_Int32_array **)v25;
  v33 = StringLiteral_17389/*"class_n_"*/;
  if ( StringLiteral_17389/*"class_n_"*/ )
  {
    v33 = sub_B170BC(StringLiteral_17389/*"class_n_"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_17389/*"class_n_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( !*((_DWORD *)v32 + 6) )
    goto LABEL_66;
  v32[4] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 4), v34, v26, v27, v28, v29, v30, v31);
  v33 = StringLiteral_17385/*"class_b_"*/;
  if ( StringLiteral_17385/*"class_b_"*/ )
  {
    v33 = sub_B170BC(StringLiteral_17385/*"class_b_"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_17385/*"class_b_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v32 + 6) <= 1u )
    goto LABEL_66;
  v32[5] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 5), v34, v26, v35, v36, v37, v38, v39);
  v33 = StringLiteral_17385/*"class_b_"*/;
  if ( StringLiteral_17385/*"class_b_"*/ )
  {
    v33 = sub_B170BC(StringLiteral_17385/*"class_b_"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_17385/*"class_b_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v32 + 6) <= 2u )
    goto LABEL_66;
  v32[6] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 6), v34, v26, v40, v41, v42, v43, v44);
  v33 = StringLiteral_17390/*"class_s_"*/;
  if ( StringLiteral_17390/*"class_s_"*/ )
  {
    v33 = sub_B170BC(StringLiteral_17390/*"class_s_"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_17390/*"class_s_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v32 + 6) <= 3u )
    goto LABEL_66;
  v32[7] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 7), v34, v26, v45, v46, v47, v48, v49);
  v33 = StringLiteral_17388/*"class_g_"*/;
  if ( StringLiteral_17388/*"class_g_"*/ )
  {
    v33 = sub_B170BC(StringLiteral_17388/*"class_g_"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_17388/*"class_g_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v32 + 6) <= 4u )
    goto LABEL_66;
  v32[8] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 8), v34, v26, v50, v51, v52, v53, v54);
  v33 = StringLiteral_17388/*"class_g_"*/;
  if ( StringLiteral_17388/*"class_g_"*/ )
  {
    v33 = sub_B170BC(StringLiteral_17388/*"class_g_"*/, *(_QWORD *)&(*v32)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_17388/*"class_g_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v32 + 6) <= 5u )
    goto LABEL_66;
  v32[9] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v32 + 9), v34, v26, v55, v56, v57, v58, v59);
  v60 = Rarity_TypeInfo->static_fields;
  v60->designCardFileList = (struct System_String_array *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v60->designCardFileList, v32, v61, v62, v63, v64, v65, v66);
  v68 = sub_B17014(string___TypeInfo, 6LL, v67);
  if ( !v68 )
LABEL_68:
    sub_B170D4();
  v74 = (System_Int32_array **)v68;
  v33 = StringLiteral_10979/*"RARITY_TYPE_NONE"*/;
  if ( StringLiteral_10979/*"RARITY_TYPE_NONE"*/ )
  {
    v33 = sub_B170BC(StringLiteral_10979/*"RARITY_TYPE_NONE"*/, *(_QWORD *)&(*v74)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_10979/*"RARITY_TYPE_NONE"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( !*((_DWORD *)v74 + 6) )
    goto LABEL_66;
  v74[4] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v74 + 4), v34, v26, v69, v70, v71, v72, v73);
  v33 = StringLiteral_10978/*"RARITY_TYPE_COMMON"*/;
  if ( StringLiteral_10978/*"RARITY_TYPE_COMMON"*/ )
  {
    v33 = sub_B170BC(StringLiteral_10978/*"RARITY_TYPE_COMMON"*/, *(_QWORD *)&(*v74)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_10978/*"RARITY_TYPE_COMMON"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v74 + 6) <= 1u )
    goto LABEL_66;
  v74[5] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v74 + 5), v34, v26, v75, v76, v77, v78, v79);
  v33 = StringLiteral_10983/*"RARITY_TYPE_UNCOMMON"*/;
  if ( StringLiteral_10983/*"RARITY_TYPE_UNCOMMON"*/ )
  {
    v33 = sub_B170BC(StringLiteral_10983/*"RARITY_TYPE_UNCOMMON"*/, *(_QWORD *)&(*v74)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_10983/*"RARITY_TYPE_UNCOMMON"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v74 + 6) <= 2u )
    goto LABEL_66;
  v74[6] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v74 + 6), v34, v26, v80, v81, v82, v83, v84);
  v33 = StringLiteral_10980/*"RARITY_TYPE_RARE"*/;
  if ( StringLiteral_10980/*"RARITY_TYPE_RARE"*/ )
  {
    v33 = sub_B170BC(StringLiteral_10980/*"RARITY_TYPE_RARE"*/, *(_QWORD *)&(*v74)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_10980/*"RARITY_TYPE_RARE"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v74 + 6) <= 3u )
    goto LABEL_66;
  v74[7] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v74 + 7), v34, v26, v85, v86, v87, v88, v89);
  v33 = StringLiteral_10981/*"RARITY_TYPE_SRARE"*/;
  if ( StringLiteral_10981/*"RARITY_TYPE_SRARE"*/ )
  {
    v33 = sub_B170BC(StringLiteral_10981/*"RARITY_TYPE_SRARE"*/, *(_QWORD *)&(*v74)->m_Items[9]);
    if ( !v33 )
      goto LABEL_67;
    v34 = (System_Int32_array **)StringLiteral_10981/*"RARITY_TYPE_SRARE"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v74 + 6) <= 4u )
    goto LABEL_66;
  v74[8] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v74 + 8), v34, v26, v90, v91, v92, v93, v94);
  v33 = StringLiteral_10982/*"RARITY_TYPE_SSRARE"*/;
  if ( StringLiteral_10982/*"RARITY_TYPE_SSRARE"*/ )
  {
    v33 = sub_B170BC(StringLiteral_10982/*"RARITY_TYPE_SSRARE"*/, *(_QWORD *)&(*v74)->m_Items[9]);
    if ( v33 )
    {
      v34 = (System_Int32_array **)StringLiteral_10982/*"RARITY_TYPE_SSRARE"*/;
      goto LABEL_64;
    }
LABEL_67:
    sub_B170F4(v33);
    sub_B170A0();
  }
  v34 = 0LL;
LABEL_64:
  if ( *((_DWORD *)v74 + 6) <= 5u )
  {
LABEL_66:
    sub_B17100(v33, v34, v26);
    sub_B170A0();
  }
  v74[9] = (System_Int32_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)(v74 + 9), v34, v26, v95, v96, v97, v98, v99);
  v100 = Rarity_TypeInfo->static_fields;
  v100->rarityType = (struct System_String_array *)v74;
  sub_B16F98((BattleServantConfConponent_o *)&v100->rarityType, v74, v101, v102, v103, v104, v105, v106);
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

  if ( (byte_40F8298 & 1) == 0 )
  {
    sub_B16FFC(&Rarity_TypeInfo, method);
    byte_40F8298 = 1;
  }
  v4 = Rarity_TypeInfo;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v4 = Rarity_TypeInfo;
  }
  designCardFileList = v4->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_B170D4();
  if ( designCardFileList->max_length <= rarityId )
  {
    sub_B17100(v4, method, v2);
    sub_B170A0();
  }
  return designCardFileList->m_Items[rarityId];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t result; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  Rarity_c *v9; // x0
  struct System_Int32_array *frameTypeImageTable; // x8

  if ( (byte_40F8294 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&classId);
    sub_B16FFC(&Rarity_TypeInfo, v5);
    byte_40F8294 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0LL);
  if ( result <= 0 )
  {
    v9 = Rarity_TypeInfo;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v9 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v9->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_B170D4();
    if ( frameTypeImageTable->max_length <= rarityId )
    {
      sub_B17100(v9, v7, v8);
      sub_B170A0();
    }
    return frameTypeImageTable->m_Items[rarityId + 1];
  }
  return result;
}


System_String_o *__fastcall Rarity__getIcon(int32_t rarity, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = rarity;
  if ( (byte_40F8295 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21611/*"rarity"*/, method);
    sub_B16FFC(&StringLiteral_15843/*"_0"*/, v2);
    byte_40F8295 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_43746016(
           (System_String_o *)StringLiteral_21611/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_15843/*"_0"*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Rarity__getIcon_21544656(
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
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x23
  WarQuestSelectionMaster_o *v13; // x0
  ServantLvDetailMaster_o *v14; // x22
  int RarityIcon; // w0
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v21 = rarity;
  if ( (byte_40F8296 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&exceedCount);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_21611/*"rarity"*/, v9);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v10);
    sub_B16FFC(&StringLiteral_15843/*"_0"*/, v11);
    byte_40F8296 = 1;
  }
  v20 = 0;
  if ( exceedCount < 1 )
  {
    v19 = System_Int32__ToString((int32_t)&v21, 0LL);
    return System_String__Concat_43746016(
             (System_String_o *)StringLiteral_21611/*"rarity"*/,
             v19,
             (System_String_o *)StringLiteral_15843/*"_0"*/,
             0LL);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    v13 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_WarQuestSelectionMaster
      || (v14 = (ServantLvDetailMaster_o *)v13,
          RarityIcon = ServantExceedMaster__GetRarityIcon(Master_WarQuestSelectionMaster, rarity, exceedCount, 1, 0LL),
          v20 = RarityIcon,
          !v14) )
    {
      sub_B170D4();
    }
    v20 = ServantLvDetailMaster__GetRarityIcon(v14, rarity, lv, RarityIcon, 0LL);
    v16 = System_Int32__ToString((int32_t)&v21, 0LL);
    v17 = System_Int32__ToString((int32_t)&v20, 0LL);
    return System_String__Concat_43747144(
             (System_String_o *)StringLiteral_21611/*"rarity"*/,
             v16,
             (System_String_o *)StringLiteral_15842/*"_"*/,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Rarity_c *v6; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v8; // x19

  if ( (byte_40F8299 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&Rarity_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F8299 = 1;
  }
  if ( (unsigned int)(rarityId - 1) > 4 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = Rarity_TypeInfo;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v6 = Rarity_TypeInfo;
  }
  rarityType = v6->static_fields->rarityType;
  if ( !rarityType )
    sub_B170D4();
  if ( rarityType->max_length <= rarityId )
  {
    sub_B17100(v6, method, v2);
    sub_B170A0();
  }
  v8 = rarityType->m_Items[rarityId];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v8, 0LL);
}


int32_t __fastcall Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_3133D60[rarityId - 1];
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
  System_String_o *Icon_21544656; // x20
  ServantExceedMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t RarityIcon; // w23
  ServantLvDetailMaster_o *v16; // x0
  int32_t v17; // w0
  AtlasManager_c *v18; // x8

  if ( (byte_40F8297 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&rarity);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Rarity_TypeInfo, v12);
    byte_40F8297 = 1;
  }
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_21544656 = Rarity__getIcon_21544656(rarity, exceedCount, lv, *(const MethodInfo **)&lv);
  if ( exceedCount <= 0 )
  {
    v18 = AtlasManager_TypeInfo;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_18;
LABEL_16:
    if ( !v18->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v18);
LABEL_18:
    AtlasManager__SetCommon(sprite, 0LL);
    if ( sprite )
      goto LABEL_19;
LABEL_24:
    sub_B170D4();
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  RarityIcon = ServantExceedMaster__GetRarityIcon(Master_WarQuestSelectionMaster, rarity, exceedCount, 0, 0LL);
  v16 = (ServantLvDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !v16 )
    goto LABEL_24;
  v17 = ServantLvDetailMaster__GetRarityIcon(v16, rarity, lv, RarityIcon, 0LL);
  v18 = AtlasManager_TypeInfo;
  if ( v17 < 3 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      goto LABEL_18;
    goto LABEL_16;
  }
  if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  AtlasManager__SetEventSprite(sprite, Icon_21544656, 0LL);
  if ( !sprite )
    goto LABEL_24;
LABEL_19:
  UISprite__set_spriteName(sprite, Icon_21544656, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}