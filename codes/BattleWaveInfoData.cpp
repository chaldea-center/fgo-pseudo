void BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleWaveInfoData_SaveData_o *BattleWaveInfoData__GetSaveData(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  int max_length; // w21
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v8; // x0
  __int64 *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Int32_array *v16; // x12
  __int64 v17; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v19; // x8
  int32_t *m_Items; // x12
  __int64 v21; // x13
  int v22; // w21
  struct DropInfo_array *dropInfos; // x8
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  unsigned int v31; // w24
  struct DropInfo_array *v32; // x8
  _DWORD *v33; // x26
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x23
  _DWORD *v41; // x0
  int v42; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  unsigned int v57; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v58; // x8
  _DWORD *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x23
  _DWORD *v67; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct System_String_array *mySvtInfos; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  struct System_Int32_array *firstSortieWaves; // x1
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  struct System_Int32_array *LastSortieWaves; // x1
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  struct System_String_o *bgData; // x1
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  struct System_String_o *battleDataRelated; // x1
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  __int64 v126; // x0

  if ( (byte_4D3047F & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo);
    sub_1C93AD4(&DropInfo_SaveData___TypeInfo);
    sub_1C93AD4(&BattleWaveInfoData_SaveData_TypeInfo);
    byte_4D3047F = 1;
  }
  v3 = sub_1C93D20(BattleWaveInfoData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_44;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.wave;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSkillChargeNum, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    max_length = 0;
  }
  else
  {
    equipSkillChargeNum = this->fields.equipSkillChargeNum;
    if ( !equipSkillChargeNum )
      goto LABEL_44;
    max_length = equipSkillChargeNum->max_length;
  }
  v8 = sub_1C93B7C(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v3 + 24) = v8;
  v9 = (__int64 *)(v3 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), v8, v10, v11, v12, v13, v14, v15);
  if ( max_length >= 1 )
  {
    v16 = this->fields.equipSkillChargeNum;
    if ( !v16 )
      goto LABEL_44;
    v17 = *v9;
    max_length_low = LODWORD(v16->max_length);
    v19 = 0;
    m_Items = v16->m_Items;
    v21 = *v9 + 32;
    do
    {
      if ( v19 >= max_length_low )
        goto LABEL_45;
      if ( !v17 )
        goto LABEL_44;
      if ( v19 >= *(unsigned int *)(v17 + 24) )
LABEL_45:
        sub_1C93D34(IsNullOrEmpty);
      *(_DWORD *)(v21 + 4 * v19) = m_Items[v19];
      ++v19;
    }
    while ( max_length != v19 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v22 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v22 = dropInfos->max_length;
  }
  v24 = sub_1C93B7C(DropInfo_SaveData___TypeInfo, (unsigned int)v22);
  *(_QWORD *)(v3 + 32) = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v24, v25, v26, v27, v28, v29, v30);
  if ( v22 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      v32 = this->fields.dropInfos;
      if ( !v32 )
        break;
      if ( v31 >= LODWORD(v32->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v32->m_Items[v31];
      if ( !IsNullOrEmpty )
        break;
      v33 = *(_DWORD **)(v3 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0);
      if ( !v33 )
        break;
      v40 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C93C10(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v126 = sub_1C93D50(IsNullOrEmpty);
          sub_1C93BFC(v126, 0);
        }
      }
      if ( v31 >= v33[6] )
        goto LABEL_45;
      v41 = &v33[2 * v31];
      *((_QWORD *)v41 + 4) = v40;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 8), v40, v34, v35, v36, v37, v38, v39);
      if ( v22 == ++v31 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1C93D2C(IsNullOrEmpty, v5);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v42 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v42 = battleItemInfos->max_length;
  }
  v44 = sub_1C93B7C(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v42);
  *(_QWORD *)(v3 + 40) = v44;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 40), v44, v45, v46, v47, v48, v49, v50);
  if ( v42 >= 1 )
  {
    v57 = 0;
    do
    {
      v58 = this->fields.battleItemInfos;
      if ( !v58 )
        goto LABEL_44;
      if ( v57 >= LODWORD(v58->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v58->m_Items[v57];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v59 = *(_DWORD **)(v3 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v5);
      if ( !v59 )
        goto LABEL_44;
      v66 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C93C10(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v57 >= v59[6] )
        goto LABEL_45;
      v67 = &v59[2 * v57];
      *((_QWORD *)v67 + 4) = v66;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 8), v66, v60, v61, v62, v63, v64, v65);
    }
    while ( v42 != ++v57 );
  }
  *(_DWORD *)(v3 + 48) = this->fields.star;
  enemySvtInfos = this->fields.enemySvtInfos;
  *(_QWORD *)(v3 + 56) = enemySvtInfos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 56), (int32_t)enemySvtInfos, v51, v52, v53, v54, v55, v56);
  battleFlag = this->fields.battleFlag;
  *(_QWORD *)(v3 + 64) = battleFlag;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 64), (int32_t)battleFlag, v70, v71, v72, v73, v74, v75);
  fieldEnvironmentData = this->fields.fieldEnvironmentData;
  *(_QWORD *)(v3 + 72) = fieldEnvironmentData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 72), (int32_t)fieldEnvironmentData, v77, v78, v79, v80, v81, v82);
  battleMissionFlag = this->fields.battleMissionFlag;
  *(_QWORD *)(v3 + 80) = battleMissionFlag;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 80), (int32_t)battleMissionFlag, v84, v85, v86, v87, v88, v89);
  *(_DWORD *)(v3 + 88) = this->fields.totalStopLimitTurn;
  mySvtInfos = this->fields.mySvtInfos;
  *(_QWORD *)(v3 + 96) = mySvtInfos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 96), (int32_t)mySvtInfos, v91, v92, v93, v94, v95, v96);
  *(_DWORD *)(v3 + 104) = this->fields.startPartyId;
  firstSortieWaves = this->fields.firstSortieWaves;
  *(_QWORD *)(v3 + 112) = firstSortieWaves;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 112), (int32_t)firstSortieWaves, v98, v99, v100, v101, v102, v103);
  *(_DWORD *)(v3 + 120) = this->fields.switchPartyChargeTurn;
  LastSortieWaves = this->fields.LastSortieWaves;
  *(_QWORD *)(v3 + 144) = LastSortieWaves;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 144), (int32_t)LastSortieWaves, v105, v106, v107, v108, v109, v110);
  bgData = this->fields.bgData;
  *(_QWORD *)(v3 + 128) = bgData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 128), (int32_t)bgData, v112, v113, v114, v115, v116, v117);
  battleDataRelated = this->fields.battleDataRelated;
  *(_QWORD *)(v3 + 136) = battleDataRelated;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 136), (int32_t)battleDataRelated, v119, v120, v121, v122, v123, v124);
  return (BattleWaveInfoData_SaveData_o *)v3;
}


void BattleWaveInfoData__SetDataFromSaveData(
        BattleWaveInfoData_o *this,
        BattleWaveInfoData_SaveData_o *saveData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v4; // x20
  struct System_Int32_array *equipSkillChargeNum; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v7; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Int32_array *v15; // x12
  struct System_Int32_array *v16; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v18; // x8
  int32_t *m_Items; // x12
  __int64 v20; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  il2cpp_array_size_t v22; // x22
  __int64 v23; // x0
  unsigned int **p_dropInfos; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  unsigned __int64 v31; // x23
  __int64 v32; // x25
  __int64 v33; // x26
  DropInfo_o *v34; // x22
  struct DropInfo_SaveData_array *v35; // x8
  unsigned int *v36; // x27
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v44; // w21
  __int64 v45; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  unsigned int v59; // w24
  Il2CppObject *v60; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v61; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v62; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v63; // x27
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  Il2CppClass **v70; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  struct System_String_array *mySvtInfos; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  struct System_Int32_array *firstSortieWaves; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  struct System_Int32_array *LastSortieWaves; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  struct System_String_o *bgData; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  struct System_String_o *battleDataRelated; // x1
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  __int64 v128; // x0

  v4 = this;
  if ( (byte_4D3047E & 1) == 0 )
  {
    sub_1C93AD4(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C93AD4(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C93AD4(&DropInfo___TypeInfo);
    sub_1C93AD4(&DropInfo_TypeInfo);
    this = (BattleWaveInfoData_o *)sub_1C93AD4(&int___TypeInfo);
    byte_4D3047E = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  max_length = equipSkillChargeNum->max_length;
  v7 = sub_1C93B7C(int___TypeInfo, (unsigned int)max_length);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.equipSkillChargeNum, v7, v9, v10, v11, v12, v13, v14);
  if ( (int)max_length >= 1 )
  {
    v15 = saveData->fields.equipSkillChargeNum;
    if ( !v15 )
      goto LABEL_34;
    v16 = *p_equipSkillChargeNum;
    max_length_low = LODWORD(v15->max_length);
    v18 = 0;
    m_Items = v15->m_Items;
    v20 = (__int64)(*p_equipSkillChargeNum)->m_Items;
    do
    {
      if ( v18 >= max_length_low )
        goto LABEL_35;
      if ( !v16 )
        goto LABEL_34;
      if ( v18 >= LODWORD(v16->max_length) )
LABEL_35:
        sub_1C93D34(this);
      *(_DWORD *)(v20 + 4 * v18) = m_Items[v18];
      ++v18;
    }
    while ( (unsigned int)max_length != v18 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1C93D2C(this, saveData);
  v22 = dropInfos->max_length;
  v23 = sub_1C93B7C(DropInfo___TypeInfo, (unsigned int)v22);
  v4->fields.dropInfos = (struct DropInfo_array *)v23;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.dropInfos, v23, v25, v26, v27, v28, v29, v30);
  if ( (int)v22 >= 1 )
  {
    v31 = 0;
    v32 = (unsigned int)v22;
    v33 = 8;
    do
    {
      v34 = (DropInfo_o *)sub_1C93D20(DropInfo_TypeInfo);
      DropInfo___ctor(v34, 0);
      v35 = saveData->fields.dropInfos;
      if ( !v35 )
        goto LABEL_34;
      if ( v31 >= LODWORD(v35->max_length) )
        goto LABEL_35;
      if ( !v34 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v34, *(DropInfo_SaveData_o **)((char *)&v35->obj.klass + v33 * 4), 0);
      v36 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C93C10(v34, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
      if ( !this )
      {
LABEL_36:
        v128 = sub_1C93D50(this);
        sub_1C93BFC(v128, 0);
      }
      if ( v31 >= v36[6] )
        goto LABEL_35;
      *(_QWORD *)&v36[v33] = v34;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36[v33], (int32_t)v34, v37, v38, v39, v40, v41, v42);
      ++v31;
      v33 += 2;
    }
    while ( v32 != v31 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v44 = battleItemInfos->max_length;
  v45 = sub_1C93B7C(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v44);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v45;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.battleItemInfos, v45, v47, v48, v49, v50, v51, v52);
  if ( v44 >= 1 )
  {
    v59 = 0;
    do
    {
      v60 = (Il2CppObject *)sub_1C93D20(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v60, 0);
      v61 = saveData->fields.battleItemInfos;
      if ( !v61 )
        goto LABEL_34;
      if ( v59 >= LODWORD(v61->max_length) )
        goto LABEL_35;
      if ( !v60 )
        goto LABEL_34;
      v62 = v61->m_Items[v59];
      if ( !v62 )
        goto LABEL_34;
      v60[1].klass = (Il2CppClass *)v62->fields;
      v63 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C93C10(v60, v63->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v59 >= LODWORD(v63->max_length) )
        goto LABEL_35;
      v70 = &v63->obj.klass + (int)v59;
      v70[4] = (Il2CppClass *)v60;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v70 + 4), (int32_t)v60, v64, v65, v66, v67, v68, v69);
    }
    while ( v44 != ++v59 );
  }
  v4->fields.star = saveData->fields.star;
  enemySvtInfos = saveData->fields.enemySvtInfos;
  v4->fields.enemySvtInfos = enemySvtInfos;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.enemySvtInfos,
    (int32_t)enemySvtInfos,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  battleFlag = saveData->fields.battleFlag;
  v4->fields.battleFlag = battleFlag;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.battleFlag, (int32_t)battleFlag, v73, v74, v75, v76, v77, v78);
  fieldEnvironmentData = saveData->fields.fieldEnvironmentData;
  v4->fields.fieldEnvironmentData = fieldEnvironmentData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.fieldEnvironmentData,
    (int32_t)fieldEnvironmentData,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  battleMissionFlag = saveData->fields.battleMissionFlag;
  v4->fields.battleMissionFlag = battleMissionFlag;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.battleMissionFlag,
    (int32_t)battleMissionFlag,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v4->fields.totalStopLimitTurn = saveData->fields.totalStopLimitTurn;
  mySvtInfos = saveData->fields.mySvtInfos;
  v4->fields.mySvtInfos = mySvtInfos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.mySvtInfos, (int32_t)mySvtInfos, v94, v95, v96, v97, v98, v99);
  v4->fields.startPartyId = saveData->fields.startPartyId;
  firstSortieWaves = saveData->fields.firstSortieWaves;
  v4->fields.firstSortieWaves = firstSortieWaves;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.firstSortieWaves,
    (int32_t)firstSortieWaves,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v4->fields.switchPartyChargeTurn = saveData->fields.switchPartyChargeTurn;
  LastSortieWaves = saveData->fields.LastSortieWaves;
  v4->fields.LastSortieWaves = LastSortieWaves;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.LastSortieWaves,
    (int32_t)LastSortieWaves,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  bgData = saveData->fields.bgData;
  v4->fields.bgData = bgData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.bgData, (int32_t)bgData, v115, v116, v117, v118, v119, v120);
  battleDataRelated = saveData->fields.battleDataRelated;
  v4->fields.battleDataRelated = battleDataRelated;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.battleDataRelated,
    (int32_t)battleDataRelated,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
}


void BattleWaveInfoData__SetWaveInfoData(
        BattleWaveInfoData_o *this,
        BattleData_o *battleData,
        BattleServantData_SaveData_array *enemySaveData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v6; // x19
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  __int64 size; // x22
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  unsigned __int64 v16; // x24
  struct System_Int32_array *equipSkillChargeNum; // x26
  char *v18; // x8
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v20; // x22
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  unsigned __int64 v28; // x24
  __int64 v29; // x26
  unsigned int *dropInfos; // x28
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  BattleWaveInfoData_o *v37; // x25
  int32_t wave; // w24
  BattleWaveInfoData_o *v39; // x22
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x23
  Il2CppObject *v48; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  QuestPhaseEntity_o *questphase_ent; // x23
  __int64 v56; // x22
  __int64 v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v65; // x25
  __int64 v66; // x26
  struct System_String_array *enemySvtInfos; // x28
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  System_String_array *MySvtInfos; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  System_Int32_array *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  System_Int32_array *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_Collections_Generic_Dictionary_int__int__o *BattleValueDict; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  Il2CppObject *SaveData; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  struct System_Int32_array *v109; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *BattleMissionValueDict_k__BackingField; // x1
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *v118; // x0
  System_String_o *StringFromMessagePackTargetData_object; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  struct BattleCommandData_array *fixedCommands; // x1
  System_String_o *v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  __int64 v140; // x0

  v6 = this;
  if ( (byte_4D30480 & 1) == 0 )
  {
    sub_1C93AD4(&BattleWaveInfoData_BattleDataSaveData_TypeInfo);
    sub_1C93AD4(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C93AD4(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C93AD4(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
    sub_1C93AD4(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___);
    sub_1C93AD4(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
    sub_1C93AD4(&Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
    sub_1C93AD4(&DropInfo___TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C93AD4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    this = (BattleWaveInfoData_o *)sub_1C93AD4(&string___TypeInfo);
    byte_4D30480 = 1;
  }
  if ( !battleData )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)BattleData__getDispWaveCount(battleData, 0);
  v6->fields.wave = (int)this;
  v6->fields.turn = battleData->fields.totalTurnCount + 1;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_51;
  size = (unsigned int)masterSkillInfo->fields._size;
  v9 = sub_1C93B7C(int___TypeInfo, (unsigned int)size);
  v6->fields.equipSkillChargeNum = (struct System_Int32_array *)v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.equipSkillChargeNum, v9, v10, v11, v12, v13, v14, v15);
  if ( (int)size >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v6->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v16,
                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        break;
      this = (BattleWaveInfoData_o *)((__int64 (__fastcall *)(BattleWaveInfoData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                       this,
                                       *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
      if ( !equipSkillChargeNum )
        break;
      if ( v16 >= LODWORD(equipSkillChargeNum->max_length) )
        goto LABEL_52;
      v18 = (char *)equipSkillChargeNum + 4 * v16++;
      *((_DWORD *)v18 + 8) = (_DWORD)this;
      if ( size == v16 )
        goto LABEL_12;
    }
LABEL_51:
    sub_1C93D2C(this, battleData);
  }
LABEL_12:
  this = (BattleWaveInfoData_o *)BasicHelper__IsNullOrEmpty(
                                   (System_Collections_ICollection_o *)battleData->fields.droplist,
                                   0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    droplist = battleData->fields.droplist;
    if ( !droplist )
      goto LABEL_51;
    v20 = (unsigned int)droplist->fields._size;
    v21 = sub_1C93B7C(DropInfo___TypeInfo, (unsigned int)v20);
    v6->fields.dropInfos = (struct DropInfo_array *)v21;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.dropInfos, v21, v22, v23, v24, v25, v26, v27);
    if ( (int)v20 >= 1 )
    {
      v28 = 0;
      v29 = 8;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_51;
        dropInfos = (unsigned int *)v6->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v28,
                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_51;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0);
        if ( !dropInfos )
          goto LABEL_51;
        v37 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1C93C10(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_53;
        }
        if ( v28 >= dropInfos[6] )
          goto LABEL_52;
        *(_QWORD *)&dropInfos[v29] = v37;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&dropInfos[v29], (int32_t)v37, v31, v32, v33, v34, v35, v36);
        ++v28;
        v29 += 2;
      }
      while ( v20 != v28 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_51;
  wave = this->fields.wave;
  v39 = this;
  v40 = sub_1C93B7C(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v6->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v40;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.battleItemInfos, v40, v41, v42, v43, v44, v45, v46);
  if ( wave >= 1 )
  {
    battleItemInfos = v6->fields.battleItemInfos;
    v48 = (Il2CppObject *)sub_1C93D20(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v48, 0);
    if ( !v48 )
      goto LABEL_51;
    v48[1].klass = *(Il2CppClass **)&v39->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_51;
    this = (BattleWaveInfoData_o *)sub_1C93C10(v48, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_53:
      v140 = sub_1C93D50(this);
      sub_1C93BFC(v140, 0);
    }
    if ( !LODWORD(battleItemInfos->max_length) )
LABEL_52:
      sub_1C93D34(this);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v48;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)battleItemInfos->m_Items, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  }
  v6->fields.star = battleData->fields.totalCriticalStars;
  questphase_ent = battleData->fields.questphase_ent;
  v56 = sub_1C93D20(BattleWaveInfoData_BattleDataSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v56, 0);
  if ( !questphase_ent )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)QuestPhaseEntity__IsSaveInterruptionEnemyData(questphase_ent, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !enemySaveData )
      goto LABEL_51;
    v57 = sub_1C93B7C(string___TypeInfo, LODWORD(enemySaveData->max_length));
    v6->fields.enemySvtInfos = (struct System_String_array *)v57;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.enemySvtInfos, v57, v58, v59, v60, v61, v62, v63);
    max_length = enemySaveData->max_length;
    if ( (int)max_length >= 1 )
    {
      v65 = 0;
      v66 = 32;
      while ( v65 < (unsigned int)max_length )
      {
        enemySvtInfos = v6->fields.enemySvtInfos;
        this = (BattleWaveInfoData_o *)BattleUtility__GetStringFromMessagePackTargetData_object_(
                                         *(Il2CppObject **)((char *)&enemySaveData->obj.klass + v66),
                                         (const MethodInfo_3195D50 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
        if ( !enemySvtInfos )
          goto LABEL_51;
        if ( v65 >= LODWORD(enemySvtInfos->max_length) )
          break;
        *(Il2CppClass **)((char *)&enemySvtInfos->obj.klass + v66) = (Il2CppClass *)this;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)((char *)enemySvtInfos + v66),
          (int32_t)this,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
        LODWORD(max_length) = enemySaveData->max_length;
        ++v65;
        v66 += 8;
        if ( (__int64)v65 >= (int)max_length )
          goto LABEL_39;
      }
      goto LABEL_52;
    }
  }
LABEL_39:
  if ( QuestPhaseEntity__IsWaveSetupSwitchParty(questphase_ent, 0) )
  {
    MySvtInfos = BattleData__get_MySvtInfos(battleData, 0);
    v6->fields.mySvtInfos = MySvtInfos;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v6->fields.mySvtInfos,
      (int32_t)MySvtInfos,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    v6->fields.startPartyId = battleData->fields._SelectedPartyIndex_k__BackingField + 1;
    this = (BattleWaveInfoData_o *)battleData->fields._FirstSortieWaves_k__BackingField;
    if ( !this )
      goto LABEL_51;
    v81 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)this,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    v6->fields.firstSortieWaves = v81;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.firstSortieWaves, (int32_t)v81, v82, v83, v84, v85, v86, v87);
    v6->fields.switchPartyChargeTurn = battleData->fields._SwitchPartyChargeTurn_k__BackingField;
    this = (BattleWaveInfoData_o *)battleData->fields._LastSortieWaves_k__BackingField;
    if ( !this )
      goto LABEL_51;
    v88 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)this,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    v6->fields.LastSortieWaves = v88;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.LastSortieWaves, (int32_t)v88, v89, v90, v91, v92, v93, v94);
  }
  BattleValueDict = BattleData__GetBattleValueDict(battleData, 0);
  v6->fields.battleFlag = BattleValueDict;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v6->fields.battleFlag,
    (int32_t)BattleValueDict,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this = (BattleWaveInfoData_o *)battleData->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_51;
  SaveData = (Il2CppObject *)BattleFieldEnvironmentData__GetSaveData((BattleFieldEnvironmentData_o *)this, 0);
  this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                   SaveData,
                                   (const MethodInfo_3196FE8 *)Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
  if ( !this )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_51;
  v109 = this->fields.equipSkillChargeNum;
  v6->fields.fieldEnvironmentData = (struct System_String_o *)v109;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v6->fields.fieldEnvironmentData,
    (int32_t)v109,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  BattleMissionValueDict_k__BackingField = battleData->fields._BattleMissionValueDict_k__BackingField;
  v6->fields.battleMissionFlag = BattleMissionValueDict_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v6->fields.battleMissionFlag,
    (int32_t)BattleMissionValueDict_k__BackingField,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  v6->fields.totalStopLimitTurn = battleData->fields.totalStopLimitTurnCount;
  perf = battleData->fields.perf;
  if ( !perf )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)perf->fields.bgPerf;
  if ( !this )
    goto LABEL_51;
  v118 = (Il2CppObject *)BattlePerformanceBg__getSaveData((BattlePerformanceBg_o *)this, 0);
  StringFromMessagePackTargetData_object = BattleUtility__GetStringFromMessagePackTargetData_object_(
                                             v118,
                                             (const MethodInfo_3195D50 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___);
  v6->fields.bgData = StringFromMessagePackTargetData_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v6->fields.bgData,
    (int32_t)StringFromMessagePackTargetData_object,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  if ( !v56 )
    goto LABEL_51;
  fixedCommands = battleData->fields.fixedCommands;
  *(_QWORD *)(v56 + 16) = fixedCommands;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v56 + 16), (int32_t)fixedCommands, v126, v127, v128, v129, v130, v131);
  v133 = BattleUtility__GetStringFromMessagePackTargetData_object_(
           (Il2CppObject *)v56,
           (const MethodInfo_3195D50 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
  v6->fields.battleDataRelated = v133;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v6->fields.battleDataRelated,
    (int32_t)v133,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
}


void BattleWaveInfoData_BattleDataSaveData___ctor(
        BattleWaveInfoData_BattleDataSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleWaveInfoData_BattleDataSaveData__SetData(
        BattleWaveInfoData_BattleDataSaveData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  BattleWaveInfoData_BattleDataSaveData_o *v10; // x20
  struct BattleCommandData_array *FixedCommands; // x1
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0

  v10 = this;
  if ( (byte_4D30482 & 1) == 0 )
  {
    this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_1C93AD4(&Method_System_Array_Empty_BattleCommandData___);
    byte_4D30482 = 1;
  }
  FixedCommands = v10->fields.FixedCommands;
  if ( !FixedCommands )
  {
    v12 = Method_System_Array_Empty_BattleCommandData___;
    v13 = *((_QWORD *)Method_System_Array_Empty_BattleCommandData___ + 7);
    if ( !v13 )
    {
      sub_1C69BC4(Method_System_Array_Empty_BattleCommandData___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    this = *(BattleWaveInfoData_BattleDataSaveData_o **)(v12[7] + 16LL);
    if ( (*((_BYTE *)this + 309) & 1) == 0 )
      this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_1C69B68(inited);
    FixedCommands = (struct BattleCommandData_array *)**((_QWORD **)this + 23);
  }
  if ( !data )
    sub_1C93D2C(this, FixedCommands);
  data->fields.fixedCommands = FixedCommands;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&data->fields.fixedCommands,
    (int32_t)FixedCommands,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleWaveInfoData_BattleItemInfo___ctor(BattleWaveInfoData_BattleItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleWaveInfoData_BattleItemInfo_SaveData_o *BattleWaveInfoData_BattleItemInfo__GetSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D30481 & 1) == 0 )
  {
    sub_1C93AD4(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
    byte_4D30481 = 1;
  }
  v3 = sub_1C93D20(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  *(BattleWaveInfoData_BattleItemInfo_Fields *)(v3 + 16) = this->fields;
  return (BattleWaveInfoData_BattleItemInfo_SaveData_o *)v3;
}


void BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        BattleWaveInfoData_BattleItemInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1C93D2C(this, 0);
  this->fields = (BattleWaveInfoData_BattleItemInfo_Fields)saveData->fields;
}


void BattleWaveInfoData_BattleItemInfo_SaveData___ctor(
        BattleWaveInfoData_BattleItemInfo_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleWaveInfoData_SaveData___ctor(BattleWaveInfoData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}