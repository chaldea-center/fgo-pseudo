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
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x19
  __int64 v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  struct Rarity_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x19
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  struct Rarity_StaticFields *v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x0
  __int64 v127; // x0
  System_RuntimeFieldHandle_o v128; // 0:w1.4

  if ( (byte_41860F1 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, v1);
    sub_B2C35C(&Rarity_TypeInfo, v2);
    sub_B2C35C(&string___TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301,
      v4);
    sub_B2C35C(&StringLiteral_17451/*"class_b_"*/, v5);
    sub_B2C35C(&StringLiteral_11018/*"RARITY_TYPE_SSRARE"*/, v6);
    sub_B2C35C(&StringLiteral_11017/*"RARITY_TYPE_SRARE"*/, v7);
    sub_B2C35C(&StringLiteral_11015/*"RARITY_TYPE_NONE"*/, v8);
    sub_B2C35C(&StringLiteral_11016/*"RARITY_TYPE_RARE"*/, v9);
    sub_B2C35C(&StringLiteral_11014/*"RARITY_TYPE_COMMON"*/, v10);
    sub_B2C35C(&StringLiteral_11019/*"RARITY_TYPE_UNCOMMON"*/, v11);
    sub_B2C35C(&StringLiteral_17454/*"class_g_"*/, v12);
    sub_B2C35C(&StringLiteral_17455/*"class_n_"*/, v13);
    sub_B2C35C(&StringLiteral_17456/*"class_s_"*/, v14);
    byte_41860F1 = 1;
  }
  v15 = (System_Array_o *)sub_B2C374(int___TypeInfo, 6LL);
  v128.fields.value = Field__PrivateImplementationDetails__E21A6F698E635086E28EBB14EDC7838F22DB359A0D1A989690BA55DDA2096301;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v15, v128, 0LL);
  static_fields = (BattleServantConfConponent_o *)Rarity_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v15;
  sub_B2C2F8(static_fields, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  v23 = sub_B2C374(string___TypeInfo, 6LL);
  if ( !v23 )
    goto LABEL_68;
  v31 = (System_Int32_array **)v23;
  v32 = StringLiteral_17455/*"class_n_"*/;
  if ( StringLiteral_17455/*"class_n_"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_17455/*"class_n_"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v33 = (System_Int32_array **)StringLiteral_17455/*"class_n_"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !*((_DWORD *)v31 + 6) )
    goto LABEL_66;
  v31[4] = (System_Int32_array *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 4), v33, v25, v26, v27, v28, v29, v30);
  v32 = StringLiteral_17451/*"class_b_"*/;
  if ( StringLiteral_17451/*"class_b_"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_17451/*"class_b_"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v40 = (System_Int32_array **)StringLiteral_17451/*"class_b_"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( *((_DWORD *)v31 + 6) <= 1u )
    goto LABEL_66;
  v31[5] = (System_Int32_array *)v40;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 5), v40, v34, v35, v36, v37, v38, v39);
  v32 = StringLiteral_17451/*"class_b_"*/;
  if ( StringLiteral_17451/*"class_b_"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_17451/*"class_b_"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v47 = (System_Int32_array **)StringLiteral_17451/*"class_b_"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( *((_DWORD *)v31 + 6) <= 2u )
    goto LABEL_66;
  v31[6] = (System_Int32_array *)v47;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 6), v47, v41, v42, v43, v44, v45, v46);
  v32 = StringLiteral_17456/*"class_s_"*/;
  if ( StringLiteral_17456/*"class_s_"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_17456/*"class_s_"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v54 = (System_Int32_array **)StringLiteral_17456/*"class_s_"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( *((_DWORD *)v31 + 6) <= 3u )
    goto LABEL_66;
  v31[7] = (System_Int32_array *)v54;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 7), v54, v48, v49, v50, v51, v52, v53);
  v32 = StringLiteral_17454/*"class_g_"*/;
  if ( StringLiteral_17454/*"class_g_"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_17454/*"class_g_"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v61 = (System_Int32_array **)StringLiteral_17454/*"class_g_"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( *((_DWORD *)v31 + 6) <= 4u )
    goto LABEL_66;
  v31[8] = (System_Int32_array *)v61;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 8), v61, v55, v56, v57, v58, v59, v60);
  v32 = StringLiteral_17454/*"class_g_"*/;
  if ( StringLiteral_17454/*"class_g_"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_17454/*"class_g_"*/, *(_QWORD *)&(*v31)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v68 = (System_Int32_array **)StringLiteral_17454/*"class_g_"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( *((_DWORD *)v31 + 6) <= 5u )
    goto LABEL_66;
  v31[9] = (System_Int32_array *)v68;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 9), v68, v62, v63, v64, v65, v66, v67);
  v69 = Rarity_TypeInfo->static_fields;
  v69->designCardFileList = (struct System_String_array *)v31;
  sub_B2C2F8((BattleServantConfConponent_o *)&v69->designCardFileList, v31, v70, v71, v72, v73, v74, v75);
  v23 = sub_B2C374(string___TypeInfo, 6LL);
  if ( !v23 )
LABEL_68:
    sub_B2C434(v23, v24);
  v82 = (System_Int32_array **)v23;
  v32 = StringLiteral_11015/*"RARITY_TYPE_NONE"*/;
  if ( StringLiteral_11015/*"RARITY_TYPE_NONE"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_11015/*"RARITY_TYPE_NONE"*/, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v83 = (System_Int32_array **)StringLiteral_11015/*"RARITY_TYPE_NONE"*/;
  }
  else
  {
    v83 = 0LL;
  }
  if ( !*((_DWORD *)v82 + 6) )
    goto LABEL_66;
  v82[4] = (System_Int32_array *)v83;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 4), v83, v76, v77, v78, v79, v80, v81);
  v32 = StringLiteral_11014/*"RARITY_TYPE_COMMON"*/;
  if ( StringLiteral_11014/*"RARITY_TYPE_COMMON"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_11014/*"RARITY_TYPE_COMMON"*/, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v90 = (System_Int32_array **)StringLiteral_11014/*"RARITY_TYPE_COMMON"*/;
  }
  else
  {
    v90 = 0LL;
  }
  if ( *((_DWORD *)v82 + 6) <= 1u )
    goto LABEL_66;
  v82[5] = (System_Int32_array *)v90;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 5), v90, v84, v85, v86, v87, v88, v89);
  v32 = StringLiteral_11019/*"RARITY_TYPE_UNCOMMON"*/;
  if ( StringLiteral_11019/*"RARITY_TYPE_UNCOMMON"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_11019/*"RARITY_TYPE_UNCOMMON"*/, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v97 = (System_Int32_array **)StringLiteral_11019/*"RARITY_TYPE_UNCOMMON"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( *((_DWORD *)v82 + 6) <= 2u )
    goto LABEL_66;
  v82[6] = (System_Int32_array *)v97;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 6), v97, v91, v92, v93, v94, v95, v96);
  v32 = StringLiteral_11016/*"RARITY_TYPE_RARE"*/;
  if ( StringLiteral_11016/*"RARITY_TYPE_RARE"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_11016/*"RARITY_TYPE_RARE"*/, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v104 = (System_Int32_array **)StringLiteral_11016/*"RARITY_TYPE_RARE"*/;
  }
  else
  {
    v104 = 0LL;
  }
  if ( *((_DWORD *)v82 + 6) <= 3u )
    goto LABEL_66;
  v82[7] = (System_Int32_array *)v104;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 7), v104, v98, v99, v100, v101, v102, v103);
  v32 = StringLiteral_11017/*"RARITY_TYPE_SRARE"*/;
  if ( StringLiteral_11017/*"RARITY_TYPE_SRARE"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_11017/*"RARITY_TYPE_SRARE"*/, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !v32 )
      goto LABEL_67;
    v111 = (System_Int32_array **)StringLiteral_11017/*"RARITY_TYPE_SRARE"*/;
  }
  else
  {
    v111 = 0LL;
  }
  if ( *((_DWORD *)v82 + 6) <= 4u )
    goto LABEL_66;
  v82[8] = (System_Int32_array *)v111;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 8), v111, v105, v106, v107, v108, v109, v110);
  v32 = StringLiteral_11018/*"RARITY_TYPE_SSRARE"*/;
  if ( StringLiteral_11018/*"RARITY_TYPE_SSRARE"*/ )
  {
    v32 = sub_B2C41C(StringLiteral_11018/*"RARITY_TYPE_SSRARE"*/, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( v32 )
    {
      v118 = (System_Int32_array **)StringLiteral_11018/*"RARITY_TYPE_SSRARE"*/;
      goto LABEL_64;
    }
LABEL_67:
    v127 = sub_B2C454();
    sub_B2C400(v127, 0LL);
  }
  v118 = 0LL;
LABEL_64:
  if ( *((_DWORD *)v82 + 6) <= 5u )
  {
LABEL_66:
    v126 = sub_B2C460(v32);
    sub_B2C400(v126, 0LL);
  }
  v82[9] = (System_Int32_array *)v118;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 9), v118, v112, v113, v114, v115, v116, v117);
  v119 = Rarity_TypeInfo->static_fields;
  v119->rarityType = (struct System_String_array *)v82;
  sub_B2C2F8((BattleServantConfConponent_o *)&v119->rarityType, v82, v120, v121, v122, v123, v124, v125);
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

  if ( (byte_41860EF & 1) == 0 )
  {
    sub_B2C35C(&Rarity_TypeInfo, method);
    byte_41860EF = 1;
  }
  v3 = Rarity_TypeInfo;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v3 = Rarity_TypeInfo;
  }
  designCardFileList = v3->static_fields->designCardFileList;
  if ( !designCardFileList )
    sub_B2C434(v3, method);
  if ( designCardFileList->max_length <= rarityId )
  {
    v6 = sub_B2C460(v3);
    sub_B2C400(v6, 0LL);
  }
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
  __int64 v10; // x0

  if ( (byte_41860EB & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&classId);
    sub_B2C35C(&Rarity_TypeInfo, v5);
    byte_41860EB = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  result = AtlasManager__GetFrameId(classId, 0LL);
  if ( result <= 0 )
  {
    v8 = Rarity_TypeInfo;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      v8 = Rarity_TypeInfo;
    }
    frameTypeImageTable = v8->static_fields->frameTypeImageTable;
    if ( !frameTypeImageTable )
      sub_B2C434(v8, v7);
    if ( frameTypeImageTable->max_length <= rarityId )
    {
      v10 = sub_B2C460(v8);
      sub_B2C400(v10, 0LL);
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
  if ( (byte_41860EC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21703/*"rarity"*/, method);
    sub_B2C35C(&StringLiteral_15906/*"_0"*/, v2);
    byte_41860EC = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_44307816(
           (System_String_o *)StringLiteral_21703/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_15906/*"_0"*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Rarity__getIcon_21889892(
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
  __int64 v14; // x1
  ServantLvDetailMaster_o *v15; // x22
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v21 = rarity;
  if ( (byte_41860ED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, *(_QWORD *)&exceedCount);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_21703/*"rarity"*/, v9);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v10);
    sub_B2C35C(&StringLiteral_15906/*"_0"*/, v11);
    byte_41860ED = 1;
  }
  v20 = 0;
  if ( exceedCount < 1 )
  {
    v19 = System_Int32__ToString((int32_t)&v21, 0LL);
    return System_String__Concat_44307816(
             (System_String_o *)StringLiteral_21703/*"rarity"*/,
             v19,
             (System_String_o *)StringLiteral_15906/*"_0"*/,
             0LL);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantExceedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
    RarityIcon = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Master_WarQuestSelectionMaster
      || (v15 = (ServantLvDetailMaster_o *)RarityIcon,
          RarityIcon = (WarQuestSelectionMaster_o *)ServantExceedMaster__GetRarityIcon(
                                                      Master_WarQuestSelectionMaster,
                                                      rarity,
                                                      exceedCount,
                                                      1,
                                                      0LL),
          v20 = (int)RarityIcon,
          !v15) )
    {
      sub_B2C434(RarityIcon, v14);
    }
    v20 = ServantLvDetailMaster__GetRarityIcon(v15, rarity, lv, (int32_t)RarityIcon, 0LL);
    v16 = System_Int32__ToString((int32_t)&v21, 0LL);
    v17 = System_Int32__ToString((int32_t)&v20, 0LL);
    return System_String__Concat_44308944(
             (System_String_o *)StringLiteral_21703/*"rarity"*/,
             v16,
             (System_String_o *)StringLiteral_15905/*"_"*/,
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
  Rarity_c *v5; // x0
  struct System_String_array *rarityType; // x8
  System_String_o *v7; // x19
  __int64 v9; // x0

  if ( (byte_41860F0 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&Rarity_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_41860F0 = 1;
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
    sub_B2C434(v5, method);
  if ( rarityType->max_length <= rarityId )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
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
    return dword_31A0320[rarityId - 1];
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
  System_String_o *Icon_21889892; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  int32_t RarityIcon; // w23
  int32_t v17; // w0
  AtlasManager_c *v18; // x8

  if ( (byte_41860EE & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&rarity);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantExceedMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Rarity_TypeInfo, v12);
    byte_41860EE = 1;
  }
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  Icon_21889892 = Rarity__getIcon_21889892(rarity, exceedCount, lv, *(const MethodInfo **)&lv);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v15);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantExceedMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  RarityIcon = ServantExceedMaster__GetRarityIcon(
                 (ServantExceedMaster_o *)Master_WarQuestSelectionMaster,
                 rarity,
                 exceedCount,
                 0,
                 0LL);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  v17 = ServantLvDetailMaster__GetRarityIcon(
          (ServantLvDetailMaster_o *)Master_WarQuestSelectionMaster,
          rarity,
          lv,
          RarityIcon,
          0LL);
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
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)AtlasManager__SetEventSprite(sprite, Icon_21889892, 0LL);
  if ( !sprite )
    goto LABEL_24;
LABEL_19:
  UISprite__set_spriteName(sprite, Icon_21889892, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}