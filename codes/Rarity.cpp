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
  System_Array_o *v15; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x19
  __int64 v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  struct Rarity_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x19
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x1
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x1
  struct Rarity_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x0
  __int64 v126; // x0
  System_RuntimeFieldHandle_o v127; // 0:w1.4

  if ( (byte_4212EFC & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, v1);
    sub_B0D8A4(&Rarity_TypeInfo, v2);
    sub_B0D8A4(&string___TypeInfo, v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
      v4);
    sub_B0D8A4(&StringLiteral_17507/*"class_b_"*/, v5);
    sub_B0D8A4(&StringLiteral_11045/*"RARITY_TYPE_SSRARE"*/, v6);
    sub_B0D8A4(&StringLiteral_11044/*"RARITY_TYPE_SRARE"*/, v7);
    sub_B0D8A4(&StringLiteral_11042/*"RARITY_TYPE_NONE"*/, v8);
    sub_B0D8A4(&StringLiteral_11043/*"RARITY_TYPE_RARE"*/, v9);
    sub_B0D8A4(&StringLiteral_11041/*"RARITY_TYPE_COMMON"*/, v10);
    sub_B0D8A4(&StringLiteral_11046/*"RARITY_TYPE_UNCOMMON"*/, v11);
    sub_B0D8A4(&StringLiteral_17510/*"class_g_"*/, v12);
    sub_B0D8A4(&StringLiteral_17511/*"class_n_"*/, v13);
    sub_B0D8A4(&StringLiteral_17512/*"class_s_"*/, v14);
    byte_4212EFC = 1;
  }
  v15 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 6LL);
  v127.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v15, v127, 0LL);
  static_fields = (BattleServantConfConponent_o *)Rarity_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v15;
  sub_B0D840(static_fields, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  v23 = sub_B0D8BC(string___TypeInfo, 6LL);
  if ( !v23 )
    goto LABEL_68;
  v30 = (System_Int32_array **)v23;
  v31 = StringLiteral_17511/*"class_n_"*/;
  if ( StringLiteral_17511/*"class_n_"*/ )
  {
    v31 = sub_B0D964(StringLiteral_17511/*"class_n_"*/, *(_QWORD *)&(*v30)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v32 = (System_Int32_array **)StringLiteral_17511/*"class_n_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !*((_DWORD *)v30 + 6) )
    goto LABEL_66;
  v30[4] = (System_Int32_array *)v32;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 4), v32, v24, v25, v26, v27, v28, v29);
  v31 = StringLiteral_17507/*"class_b_"*/;
  if ( StringLiteral_17507/*"class_b_"*/ )
  {
    v31 = sub_B0D964(StringLiteral_17507/*"class_b_"*/, *(_QWORD *)&(*v30)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v39 = (System_Int32_array **)StringLiteral_17507/*"class_b_"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( *((_DWORD *)v30 + 6) <= 1u )
    goto LABEL_66;
  v30[5] = (System_Int32_array *)v39;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 5), v39, v33, v34, v35, v36, v37, v38);
  v31 = StringLiteral_17507/*"class_b_"*/;
  if ( StringLiteral_17507/*"class_b_"*/ )
  {
    v31 = sub_B0D964(StringLiteral_17507/*"class_b_"*/, *(_QWORD *)&(*v30)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v46 = (System_Int32_array **)StringLiteral_17507/*"class_b_"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( *((_DWORD *)v30 + 6) <= 2u )
    goto LABEL_66;
  v30[6] = (System_Int32_array *)v46;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 6), v46, v40, v41, v42, v43, v44, v45);
  v31 = StringLiteral_17512/*"class_s_"*/;
  if ( StringLiteral_17512/*"class_s_"*/ )
  {
    v31 = sub_B0D964(StringLiteral_17512/*"class_s_"*/, *(_QWORD *)&(*v30)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v53 = (System_Int32_array **)StringLiteral_17512/*"class_s_"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( *((_DWORD *)v30 + 6) <= 3u )
    goto LABEL_66;
  v30[7] = (System_Int32_array *)v53;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 7), v53, v47, v48, v49, v50, v51, v52);
  v31 = StringLiteral_17510/*"class_g_"*/;
  if ( StringLiteral_17510/*"class_g_"*/ )
  {
    v31 = sub_B0D964(StringLiteral_17510/*"class_g_"*/, *(_QWORD *)&(*v30)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v60 = (System_Int32_array **)StringLiteral_17510/*"class_g_"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( *((_DWORD *)v30 + 6) <= 4u )
    goto LABEL_66;
  v30[8] = (System_Int32_array *)v60;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 8), v60, v54, v55, v56, v57, v58, v59);
  v31 = StringLiteral_17510/*"class_g_"*/;
  if ( StringLiteral_17510/*"class_g_"*/ )
  {
    v31 = sub_B0D964(StringLiteral_17510/*"class_g_"*/, *(_QWORD *)&(*v30)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v67 = (System_Int32_array **)StringLiteral_17510/*"class_g_"*/;
  }
  else
  {
    v67 = 0LL;
  }
  if ( *((_DWORD *)v30 + 6) <= 5u )
    goto LABEL_66;
  v30[9] = (System_Int32_array *)v67;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 9), v67, v61, v62, v63, v64, v65, v66);
  v68 = Rarity_TypeInfo->static_fields;
  v68->designCardFileList = (struct System_String_array *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v68->designCardFileList, v30, v69, v70, v71, v72, v73, v74);
  v23 = sub_B0D8BC(string___TypeInfo, 6LL);
  if ( !v23 )
LABEL_68:
    sub_B0D97C(v23);
  v81 = (System_Int32_array **)v23;
  v31 = StringLiteral_11042/*"RARITY_TYPE_NONE"*/;
  if ( StringLiteral_11042/*"RARITY_TYPE_NONE"*/ )
  {
    v31 = sub_B0D964(StringLiteral_11042/*"RARITY_TYPE_NONE"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v82 = (System_Int32_array **)StringLiteral_11042/*"RARITY_TYPE_NONE"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( !*((_DWORD *)v81 + 6) )
    goto LABEL_66;
  v81[4] = (System_Int32_array *)v82;
  sub_B0D840((BattleServantConfConponent_o *)(v81 + 4), v82, v75, v76, v77, v78, v79, v80);
  v31 = StringLiteral_11041/*"RARITY_TYPE_COMMON"*/;
  if ( StringLiteral_11041/*"RARITY_TYPE_COMMON"*/ )
  {
    v31 = sub_B0D964(StringLiteral_11041/*"RARITY_TYPE_COMMON"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v89 = (System_Int32_array **)StringLiteral_11041/*"RARITY_TYPE_COMMON"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 1u )
    goto LABEL_66;
  v81[5] = (System_Int32_array *)v89;
  sub_B0D840((BattleServantConfConponent_o *)(v81 + 5), v89, v83, v84, v85, v86, v87, v88);
  v31 = StringLiteral_11046/*"RARITY_TYPE_UNCOMMON"*/;
  if ( StringLiteral_11046/*"RARITY_TYPE_UNCOMMON"*/ )
  {
    v31 = sub_B0D964(StringLiteral_11046/*"RARITY_TYPE_UNCOMMON"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v96 = (System_Int32_array **)StringLiteral_11046/*"RARITY_TYPE_UNCOMMON"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 2u )
    goto LABEL_66;
  v81[6] = (System_Int32_array *)v96;
  sub_B0D840((BattleServantConfConponent_o *)(v81 + 6), v96, v90, v91, v92, v93, v94, v95);
  v31 = StringLiteral_11043/*"RARITY_TYPE_RARE"*/;
  if ( StringLiteral_11043/*"RARITY_TYPE_RARE"*/ )
  {
    v31 = sub_B0D964(StringLiteral_11043/*"RARITY_TYPE_RARE"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v103 = (System_Int32_array **)StringLiteral_11043/*"RARITY_TYPE_RARE"*/;
  }
  else
  {
    v103 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 3u )
    goto LABEL_66;
  v81[7] = (System_Int32_array *)v103;
  sub_B0D840((BattleServantConfConponent_o *)(v81 + 7), v103, v97, v98, v99, v100, v101, v102);
  v31 = StringLiteral_11044/*"RARITY_TYPE_SRARE"*/;
  if ( StringLiteral_11044/*"RARITY_TYPE_SRARE"*/ )
  {
    v31 = sub_B0D964(StringLiteral_11044/*"RARITY_TYPE_SRARE"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( !v31 )
      goto LABEL_67;
    v110 = (System_Int32_array **)StringLiteral_11044/*"RARITY_TYPE_SRARE"*/;
  }
  else
  {
    v110 = 0LL;
  }
  if ( *((_DWORD *)v81 + 6) <= 4u )
    goto LABEL_66;
  v81[8] = (System_Int32_array *)v110;
  sub_B0D840((BattleServantConfConponent_o *)(v81 + 8), v110, v104, v105, v106, v107, v108, v109);
  v31 = StringLiteral_11045/*"RARITY_TYPE_SSRARE"*/;
  if ( StringLiteral_11045/*"RARITY_TYPE_SSRARE"*/ )
  {
    v31 = sub_B0D964(StringLiteral_11045/*"RARITY_TYPE_SSRARE"*/, *(_QWORD *)&(*v81)->m_Items[9]);
    if ( v31 )
    {
      v117 = (System_Int32_array **)StringLiteral_11045/*"RARITY_TYPE_SSRARE"*/;
      goto LABEL_64;
    }
LABEL_67:
    v126 = sub_B0D99C();
    sub_B0D948(v126, 0LL);
  }
  v117 = 0LL;
LABEL_64:
  if ( *((_DWORD *)v81 + 6) <= 5u )
  {
LABEL_66:
    v125 = sub_B0D9A8(v31);
    sub_B0D948(v125, 0LL);
  }
  v81[9] = (System_Int32_array *)v117;
  sub_B0D840((BattleServantConfConponent_o *)(v81 + 9), v117, v111, v112, v113, v114, v115, v116);
  v118 = Rarity_TypeInfo->static_fields;
  v118->rarityType = (struct System_String_array *)v81;
  sub_B0D840((BattleServantConfConponent_o *)&v118->rarityType, v81, v119, v120, v121, v122, v123, v124);
}


void __fastcall Rarity___ctor(Rarity_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Rarity__getDesignCardPrefix(int32_t rarityId, const MethodInfo *method)
{
  Rarity_c *v3; // x0
  struct System_String_array *designCardFileList; // x8
  __int64 v6; // x0

  if ( (byte_4212EFA & 1) == 0 )
  {
    sub_B0D8A4(&Rarity_TypeInfo, method);
    byte_4212EFA = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_B0D97C(v3);
  if ( designCardFileList->max_length <= rarityId )
  {
    v6 = sub_B0D9A8(v3);
    sub_B0D948(v6, 0LL);
  }
  return designCardFileList->m_Items[rarityId];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall Rarity__getFrameTypeImage(int32_t rarityId, int32_t classId, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t result; // w0
  Rarity_c *v7; // x0
  struct System_Int32_array *frameTypeImageTable; // x8
  __int64 v9; // x0

  if ( (byte_4212EF6 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&classId);
    sub_B0D8A4(&Rarity_TypeInfo, v5);
    byte_4212EF6 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0LL);
  if ( result <= 0 )
  {
    v7 = Rarity_TypeInfo;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v7 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v7->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_B0D97C(v7);
    if ( frameTypeImageTable->max_length <= rarityId )
    {
      v9 = sub_B0D9A8(v7);
      sub_B0D948(v9, 0LL);
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
  if ( (byte_4212EF7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21773/*"rarity"*/, method);
    sub_B0D8A4(&StringLiteral_15953/*"_0"*/, v2);
    byte_4212EF7 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_43852188(
           (System_String_o *)StringLiteral_21773/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_15953/*"_0"*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Rarity__getIcon_21504332(
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
  WarQuestSelectionMaster_o *RarityIcon; // x0
  ServantLvDetailMaster_o *v14; // x22
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  System_String_o *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = rarity;
  if ( (byte_4212EF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&exceedCount);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_21773/*"rarity"*/, v9);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v10);
    sub_B0D8A4(&StringLiteral_15953/*"_0"*/, v11);
    byte_4212EF8 = 1;
  }
  v19 = 0;
  if ( exceedCount < 1 )
  {
    v18 = System_Int32__ToString((int32_t)&v20, 0LL);
    return System_String__Concat_43852188(
             (System_String_o *)StringLiteral_21773/*"rarity"*/,
             v18,
             (System_String_o *)StringLiteral_15953/*"_0"*/,
             0LL);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_WarQuestSelectionMaster
      || (v14 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (WarQuestSelectionMaster_o *)ServantExceedMaster__GetRarityIcon(
                                                      Master_WarQuestSelectionMaster,
                                                      rarity,
                                                      exceedCount,
                                                      1,
                                                      0LL),
          v19 = (int)RarityIcon,
          !v14) )
    {
      sub_B0D97C(RarityIcon);
    }
    v19 = ServantLvDetailMaster__GetRarityIcon(v14, rarity, lv, (int32_t)RarityIcon, 0LL);
    v15 = System_Int32__ToString((int32_t)&v20, 0LL);
    v16 = System_Int32__ToString((int32_t)&v19, 0LL);
    return System_String__Concat_43853316(
             (System_String_o *)StringLiteral_21773/*"rarity"*/,
             v15,
             (System_String_o *)StringLiteral_15952/*"_"*/,
             v16,
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
  Rarity_c *v5; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v7; // x19
  __int64 v9; // x0

  if ( (byte_4212EFB & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&Rarity_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4212EFB = 1;
  }
  if ( (unsigned int)(rarityId - 1) > 4 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = Rarity_TypeInfo;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v5 = Rarity_TypeInfo;
  }
  rarityType = v5->static_fields->rarityType;
  if ( !rarityType )
    sub_B0D97C(v5);
  if ( rarityType->max_length <= rarityId )
  {
    v9 = sub_B0D9A8(v5);
    sub_B0D948(v9, 0LL);
  }
  v7 = rarityType->m_Items[rarityId];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v7, 0LL);
}


int32_t __fastcall Rarity__getUpperColorRarity(int32_t rarityId, const MethodInfo *method)
{
  if ( (unsigned int)(rarityId - 1) > 4 )
    return 1;
  else
    return dword_3202530[rarityId - 1];
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
  System_String_o *Icon_21504332; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t RarityIcon; // w23
  int32_t v16; // w0
  AtlasManager_c *v17; // x8

  if ( (byte_4212EF9 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&rarity);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantExceedMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Rarity_TypeInfo, v12);
    byte_4212EF9 = 1;
  }
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_21504332 = Rarity__getIcon_21504332(rarity, exceedCount, lv, *(const MethodInfo **)&lv);
  if ( exceedCount <= 0 )
  {
    v17 = AtlasManager_TypeInfo;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_18;
LABEL_16:
    if ( !v17->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v17);
LABEL_18:
    AtlasManager__SetCommon(sprite, 0LL);
    if ( sprite )
      goto LABEL_19;
LABEL_24:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  RarityIcon = ServantExceedMaster__GetRarityIcon(
                 (ServantExceedMaster_o *)Master_WarQuestSelectionMaster,
                 rarity,
                 exceedCount,
                 0,
                 0LL);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  v16 = ServantLvDetailMaster__GetRarityIcon(
          (ServantLvDetailMaster_o *)Master_WarQuestSelectionMaster,
          rarity,
          lv,
          RarityIcon,
          0LL);
  v17 = AtlasManager_TypeInfo;
  if ( v16 < 3 )
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
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)AtlasManager__SetEventSprite(sprite, Icon_21504332, 0LL);
  if ( !sprite )
    goto LABEL_24;
LABEL_19:
  UISprite__set_spriteName(sprite, Icon_21504332, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}