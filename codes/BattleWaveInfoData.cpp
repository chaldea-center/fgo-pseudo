void BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleWaveInfoData_SaveData_o *BattleWaveInfoData__GetSaveData(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  System_Collections_ICollection_o *equipSkillChargeNum; // x0
  int max_length; // w21
  struct System_Int32_array *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Int32_array *v17; // x12
  __int64 v18; // x9
  __int64 max_length_low; // x10
  unsigned __int64 v20; // x8
  int32_t *m_Items; // x12
  __int64 v22; // x13
  int v23; // w21
  struct DropInfo_array *dropInfos; // x8
  __int64 v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  unsigned int v32; // w24
  __int64 v33; // x25
  struct DropInfo_array *v34; // x8
  _DWORD *v35; // x26
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x23
  __int64 v43; // x1
  int v44; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  unsigned int v59; // w24
  __int64 v60; // x25
  struct BattleWaveInfoData_BattleItemInfo_array *v61; // x8
  _DWORD *v62; // x26
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x23
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct System_String_o *fieldEnvironmentData; // x1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct System_String_array *mySvtInfos; // x1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  struct System_Int32_array *firstSortieWaves; // x1
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  struct System_Int32_array *LastSortieWaves; // x1
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  struct System_String_o *bgData; // x1
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  struct System_String_o *battleDataRelated; // x1
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  __int64 v128; // x0

  if ( (byte_597029F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo);
    sub_2213A60(&DropInfo_SaveData___TypeInfo);
    sub_2213A60(&BattleWaveInfoData_SaveData_TypeInfo);
    byte_597029F = 1;
  }
  v3 = sub_2213CCC(BattleWaveInfoData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_44;
  equipSkillChargeNum = (System_Collections_ICollection_o *)this->fields.equipSkillChargeNum;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.wave;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(equipSkillChargeNum, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    max_length = 0;
  }
  else
  {
    v8 = this->fields.equipSkillChargeNum;
    if ( !v8 )
      goto LABEL_44;
    max_length = v8->max_length;
  }
  v9 = sub_2213B20(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v3 + 24) = v9;
  v10 = (__int64 *)(v3 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), v9, v11, v12, v13, v14, v15, v16);
  if ( max_length >= 1 )
  {
    v17 = this->fields.equipSkillChargeNum;
    if ( !v17 )
      goto LABEL_44;
    v18 = *v10;
    max_length_low = LODWORD(v17->max_length);
    v20 = 0;
    m_Items = v17->m_Items;
    v22 = *v10 + 32;
    do
    {
      if ( max_length_low == v20 )
        goto LABEL_45;
      if ( !v18 )
        goto LABEL_44;
      if ( v20 >= *(unsigned int *)(v18 + 24) )
LABEL_45:
        sub_2213CE4(IsNullOrEmpty);
      *(_DWORD *)(v22 + 4 * v20) = m_Items[v20];
      ++v20;
    }
    while ( max_length != v20 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v23 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v23 = dropInfos->max_length;
  }
  v25 = sub_2213B20(DropInfo_SaveData___TypeInfo, (unsigned int)v23);
  *(_QWORD *)(v3 + 32) = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v25, v26, v27, v28, v29, v30, v31);
  if ( v23 >= 1 )
  {
    v32 = 0;
    v33 = 8;
    while ( 1 )
    {
      v34 = this->fields.dropInfos;
      if ( !v34 )
        break;
      if ( v32 >= LODWORD(v34->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = *(__int64 *)((char *)&v34->obj.klass + v33 * 4);
      if ( !IsNullOrEmpty )
        break;
      v35 = *(_DWORD **)(v3 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0);
      if ( !v35 )
        break;
      v42 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_2213BB4(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v128 = sub_2213D00(IsNullOrEmpty, v43);
          sub_2213BA0(v128, 0);
        }
      }
      if ( v32 >= v35[6] )
        goto LABEL_45;
      *(_QWORD *)&v35[v33] = v42;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35[v33], v42, v36, v37, v38, v39, v40, v41);
      ++v32;
      v33 += 2;
      if ( v23 == v32 )
        goto LABEL_29;
    }
LABEL_44:
    sub_2213CDC(IsNullOrEmpty, v5);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v44 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v44 = battleItemInfos->max_length;
  }
  v46 = sub_2213B20(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v44);
  *(_QWORD *)(v3 + 40) = v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), v46, v47, v48, v49, v50, v51, v52);
  if ( v44 >= 1 )
  {
    v59 = 0;
    v60 = 8;
    do
    {
      v61 = this->fields.battleItemInfos;
      if ( !v61 )
        goto LABEL_44;
      if ( v59 >= LODWORD(v61->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = *(__int64 *)((char *)&v61->obj.klass + v60 * 4);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v62 = *(_DWORD **)(v3 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v5);
      if ( !v62 )
        goto LABEL_44;
      v69 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_2213BB4(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v59 >= v62[6] )
        goto LABEL_45;
      *(_QWORD *)&v62[v60] = v69;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v62[v60], v69, v63, v64, v65, v66, v67, v68);
      ++v59;
      v60 += 2;
    }
    while ( v44 != v59 );
  }
  enemySvtInfos = this->fields.enemySvtInfos;
  *(_DWORD *)(v3 + 48) = this->fields.star;
  *(_QWORD *)(v3 + 56) = enemySvtInfos;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), (int32_t)enemySvtInfos, v53, v54, v55, v56, v57, v58);
  battleFlag = this->fields.battleFlag;
  *(_QWORD *)(v3 + 64) = battleFlag;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 64), (int32_t)battleFlag, v72, v73, v74, v75, v76, v77);
  fieldEnvironmentData = this->fields.fieldEnvironmentData;
  *(_QWORD *)(v3 + 72) = fieldEnvironmentData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 72),
    (int32_t)fieldEnvironmentData,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  battleMissionFlag = this->fields.battleMissionFlag;
  *(_QWORD *)(v3 + 80) = battleMissionFlag;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 80), (int32_t)battleMissionFlag, v86, v87, v88, v89, v90, v91);
  mySvtInfos = this->fields.mySvtInfos;
  *(_DWORD *)(v3 + 88) = this->fields.totalStopLimitTurn;
  *(_QWORD *)(v3 + 96) = mySvtInfos;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 96), (int32_t)mySvtInfos, v93, v94, v95, v96, v97, v98);
  firstSortieWaves = this->fields.firstSortieWaves;
  *(_DWORD *)(v3 + 104) = this->fields.startPartyId;
  *(_QWORD *)(v3 + 112) = firstSortieWaves;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 112),
    (int32_t)firstSortieWaves,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  LastSortieWaves = this->fields.LastSortieWaves;
  *(_DWORD *)(v3 + 120) = this->fields.switchPartyChargeTurn;
  *(_QWORD *)(v3 + 144) = LastSortieWaves;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 144),
    (int32_t)LastSortieWaves,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  bgData = this->fields.bgData;
  *(_QWORD *)(v3 + 152) = *(_QWORD *)&this->fields.playerEntryTotalCount;
  *(_QWORD *)(v3 + 128) = bgData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 128), (int32_t)bgData, v114, v115, v116, v117, v118, v119);
  battleDataRelated = this->fields.battleDataRelated;
  *(_QWORD *)(v3 + 136) = battleDataRelated;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 136),
    (int32_t)battleDataRelated,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Int32_array *v15; // x12
  struct System_Int32_array *v16; // x9
  __int64 max_length_low; // x10
  unsigned __int64 v18; // x8
  int32_t *m_Items; // x12
  __int64 v20; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  il2cpp_array_size_t v22; // x22
  __int64 v23; // x0
  unsigned int **p_dropInfos; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  unsigned __int64 v31; // x23
  __int64 v32; // x25
  __int64 v33; // x26
  DropInfo_o *v34; // x22
  struct DropInfo_SaveData_array *v35; // x8
  unsigned int *v36; // x27
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v45; // w21
  __int64 v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  unsigned int v59; // w24
  __int64 v60; // x26
  Il2CppObject *v61; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v62; // x8
  __int64 v63; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v64; // x27
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct System_String_o *fieldEnvironmentData; // x1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct System_String_array *mySvtInfos; // x1
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  struct System_Int32_array *firstSortieWaves; // x1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  struct System_Int32_array *LastSortieWaves; // x1
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  struct System_String_o *bgData; // x1
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  struct System_String_o *battleDataRelated; // x1
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  __int64 v128; // x0

  v4 = this;
  if ( (byte_597029E & 1) == 0 )
  {
    sub_2213A60(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_2213A60(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_2213A60(&DropInfo___TypeInfo);
    sub_2213A60(&DropInfo_TypeInfo);
    this = (BattleWaveInfoData_o *)sub_2213A60(&int___TypeInfo);
    byte_597029E = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  max_length = equipSkillChargeNum->max_length;
  v7 = sub_2213B20(int___TypeInfo, (unsigned int)max_length);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.equipSkillChargeNum, v7, v9, v10, v11, v12, v13, v14);
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
      if ( max_length_low == v18 )
        goto LABEL_35;
      if ( !v16 )
        goto LABEL_34;
      if ( v18 >= LODWORD(v16->max_length) )
LABEL_35:
        sub_2213CE4(this);
      *(_DWORD *)(v20 + 4 * v18) = m_Items[v18];
      ++v18;
    }
    while ( (unsigned int)max_length != v18 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_2213CDC(this, saveData);
  v22 = dropInfos->max_length;
  v23 = sub_2213B20(DropInfo___TypeInfo, (unsigned int)v22);
  v4->fields.dropInfos = (struct DropInfo_array *)v23;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.dropInfos, v23, v25, v26, v27, v28, v29, v30);
  if ( (int)v22 >= 1 )
  {
    v31 = 0;
    v32 = (unsigned int)v22;
    v33 = 8;
    do
    {
      v34 = (DropInfo_o *)sub_2213CCC(DropInfo_TypeInfo);
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
      this = (BattleWaveInfoData_o *)sub_2213BB4(v34, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
      if ( !this )
      {
LABEL_36:
        v128 = sub_2213D00(this, v37);
        sub_2213BA0(v128, 0);
      }
      if ( v31 >= v36[6] )
        goto LABEL_35;
      *(_QWORD *)&v36[v33] = v34;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36[v33], (int32_t)v34, v38, v39, v40, v41, v42, v43);
      ++v31;
      v33 += 2;
    }
    while ( v32 != v31 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v45 = battleItemInfos->max_length;
  v46 = sub_2213B20(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v45);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.battleItemInfos, v46, v47, v48, v49, v50, v51, v52);
  if ( v45 >= 1 )
  {
    v59 = 0;
    v60 = 32;
    do
    {
      v61 = (Il2CppObject *)sub_2213CCC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v61, 0);
      v62 = saveData->fields.battleItemInfos;
      if ( !v62 )
        goto LABEL_34;
      if ( v59 >= LODWORD(v62->max_length) )
        goto LABEL_35;
      if ( !v61 )
        goto LABEL_34;
      v63 = *(__int64 *)((char *)&v62->obj.klass + v60);
      if ( !v63 )
        goto LABEL_34;
      v64 = v4->fields.battleItemInfos;
      v61[1].klass = *(Il2CppClass **)(v63 + 16);
      if ( !v64 )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_2213BB4(v61, v64->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v59 >= LODWORD(v64->max_length) )
        goto LABEL_35;
      *(Il2CppClass **)((char *)&v64->obj.klass + v60) = (Il2CppClass *)v61;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v64 + v60), (int32_t)v61, v65, v66, v67, v68, v69, v70);
      ++v59;
      v60 += 8;
    }
    while ( v45 != v59 );
  }
  enemySvtInfos = saveData->fields.enemySvtInfos;
  v4->fields.star = saveData->fields.star;
  v4->fields.enemySvtInfos = enemySvtInfos;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.enemySvtInfos,
    (int32_t)enemySvtInfos,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  battleFlag = saveData->fields.battleFlag;
  v4->fields.battleFlag = battleFlag;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.battleFlag,
    (int32_t)battleFlag,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  fieldEnvironmentData = saveData->fields.fieldEnvironmentData;
  v4->fields.fieldEnvironmentData = fieldEnvironmentData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.fieldEnvironmentData,
    (int32_t)fieldEnvironmentData,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  battleMissionFlag = saveData->fields.battleMissionFlag;
  v4->fields.battleMissionFlag = battleMissionFlag;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.battleMissionFlag,
    (int32_t)battleMissionFlag,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  mySvtInfos = saveData->fields.mySvtInfos;
  v4->fields.totalStopLimitTurn = saveData->fields.totalStopLimitTurn;
  v4->fields.mySvtInfos = mySvtInfos;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.mySvtInfos,
    (int32_t)mySvtInfos,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  firstSortieWaves = saveData->fields.firstSortieWaves;
  v4->fields.startPartyId = saveData->fields.startPartyId;
  v4->fields.firstSortieWaves = firstSortieWaves;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.firstSortieWaves,
    (int32_t)firstSortieWaves,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  LastSortieWaves = saveData->fields.LastSortieWaves;
  v4->fields.switchPartyChargeTurn = saveData->fields.switchPartyChargeTurn;
  v4->fields.LastSortieWaves = LastSortieWaves;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.LastSortieWaves,
    (int32_t)LastSortieWaves,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  bgData = saveData->fields.bgData;
  *(_QWORD *)&v4->fields.playerEntryTotalCount = *(_QWORD *)&saveData->fields.playerEntryTotalCount;
  v4->fields.bgData = bgData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.bgData,
    (int32_t)bgData,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  battleDataRelated = saveData->fields.battleDataRelated;
  v4->fields.battleDataRelated = battleDataRelated;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.battleDataRelated,
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
  int v8; // w9
  __int64 size; // x22
  __int64 v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  unsigned __int64 v17; // x24
  struct System_Int32_array *equipSkillChargeNum; // x26
  char *v19; // x8
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v21; // x22
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  unsigned __int64 v29; // x24
  __int64 v30; // x27
  unsigned int *dropInfos; // x28
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  BattleWaveInfoData_o *v38; // x25
  __int64 v39; // x1
  BattleWaveInfoData_o *v40; // x22
  int32_t wave; // w24
  __int64 v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x23
  Il2CppObject *v50; // x24
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  QuestPhaseEntity_o *questphase_ent; // x23
  BattleWaveInfoData_BattleDataSaveData_c *v58; // x0
  __int64 v59; // x22
  __int64 v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v68; // x25
  __int64 v69; // x27
  struct System_String_array *enemySvtInfos; // x28
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_String_array *MySvtInfos; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_Int32_array *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Int32_array *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  System_Collections_Generic_Dictionary_int__int__o *BattleValueDict; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  Il2CppObject *SaveData; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  struct System_Int32_array *v112; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *BattleMissionValueDict_k__BackingField; // x1
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *v121; // x0
  System_String_o *StringFromMessagePackTargetData_object; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  struct BattleCommandData_array *fixedCommands; // x1
  System_Int32_array *AddedEntryCondUniqueIds; // x0
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  System_String_o *v143; // x0
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  __int64 v150; // x0

  v6 = this;
  if ( (byte_59702A0 & 1) == 0 )
  {
    sub_2213A60(&BattleWaveInfoData_BattleDataSaveData_TypeInfo);
    sub_2213A60(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_2213A60(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_2213A60(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
    sub_2213A60(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___);
    sub_2213A60(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
    sub_2213A60(&Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
    sub_2213A60(&DropInfo___TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_2213A60(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    this = (BattleWaveInfoData_o *)sub_2213A60(&string___TypeInfo);
    byte_59702A0 = 1;
  }
  if ( !battleData )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)BattleData__getDispWaveCount(battleData, 0);
  masterSkillInfo = battleData->fields.masterSkillInfo;
  v8 = battleData->fields.totalTurnCount + 1;
  v6->fields.wave = (int)this;
  v6->fields.turn = v8;
  if ( !masterSkillInfo )
    goto LABEL_51;
  size = (unsigned int)masterSkillInfo->fields._size;
  v10 = sub_2213B20(int___TypeInfo, (unsigned int)size);
  v6->fields.equipSkillChargeNum = (struct System_Int32_array *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.equipSkillChargeNum, v10, v11, v12, v13, v14, v15, v16);
  if ( (int)size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v6->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v17,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        break;
      this = (BattleWaveInfoData_o *)((__int64 (__fastcall *)(BattleWaveInfoData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                       this,
                                       *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
      if ( !equipSkillChargeNum )
        break;
      if ( v17 >= LODWORD(equipSkillChargeNum->max_length) )
        goto LABEL_52;
      v19 = (char *)equipSkillChargeNum + 4 * v17++;
      *((_DWORD *)v19 + 8) = (_DWORD)this;
      if ( size == v17 )
        goto LABEL_12;
    }
LABEL_51:
    sub_2213CDC(this, battleData);
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
    v21 = (unsigned int)droplist->fields._size;
    v22 = sub_2213B20(DropInfo___TypeInfo, (unsigned int)v21);
    v6->fields.dropInfos = (struct DropInfo_array *)v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.dropInfos, v22, v23, v24, v25, v26, v27, v28);
    if ( (int)v21 >= 1 )
    {
      v29 = 0;
      v30 = 8;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_51;
        dropInfos = (unsigned int *)v6->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v29,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_51;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0);
        if ( !dropInfos )
          goto LABEL_51;
        v38 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_2213BB4(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_53;
        }
        if ( v29 >= dropInfos[6] )
          goto LABEL_52;
        *(_QWORD *)&dropInfos[v30] = v38;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&dropInfos[v30], (int32_t)v38, v32, v33, v34, v35, v36, v37);
        ++v29;
        v30 += 2;
      }
      while ( v21 != v29 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_51;
  v40 = this;
  wave = this->fields.wave;
  v42 = sub_2213B20(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v6->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.battleItemInfos, v42, v43, v44, v45, v46, v47, v48);
  if ( wave >= 1 )
  {
    battleItemInfos = v6->fields.battleItemInfos;
    v50 = (Il2CppObject *)sub_2213CCC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v50, 0);
    if ( !v50 )
      goto LABEL_51;
    v50[1].klass = *(Il2CppClass **)&v40->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_51;
    this = (BattleWaveInfoData_o *)sub_2213BB4(v50, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_53:
      v150 = sub_2213D00(this, v39);
      sub_2213BA0(v150, 0);
    }
    if ( !LODWORD(battleItemInfos->max_length) )
LABEL_52:
      sub_2213CE4(this);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v50;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)battleItemInfos->m_Items,
      (int32_t)v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  questphase_ent = battleData->fields.questphase_ent;
  v58 = BattleWaveInfoData_BattleDataSaveData_TypeInfo;
  v6->fields.star = battleData->fields.totalCriticalStars;
  v59 = sub_2213CCC(v58);
  System_Object___ctor((Il2CppObject *)v59, 0);
  if ( !questphase_ent )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)QuestPhaseEntity__IsSaveInterruptionEnemyData(questphase_ent, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !enemySaveData )
      goto LABEL_51;
    v60 = sub_2213B20(string___TypeInfo, LODWORD(enemySaveData->max_length));
    v6->fields.enemySvtInfos = (struct System_String_array *)v60;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.enemySvtInfos, v60, v61, v62, v63, v64, v65, v66);
    max_length = enemySaveData->max_length;
    if ( (int)max_length >= 1 )
    {
      v68 = 0;
      v69 = 32;
      while ( v68 < (unsigned int)max_length )
      {
        enemySvtInfos = v6->fields.enemySvtInfos;
        this = (BattleWaveInfoData_o *)BattleUtility__GetStringFromMessagePackTargetData_object_(
                                         *(Il2CppObject **)((char *)&enemySaveData->obj.klass + v69),
                                         (const MethodInfo_3817D98 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
        if ( !enemySvtInfos )
          goto LABEL_51;
        if ( v68 >= LODWORD(enemySvtInfos->max_length) )
          break;
        *(Il2CppClass **)((char *)&enemySvtInfos->obj.klass + v69) = (Il2CppClass *)this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)((char *)enemySvtInfos + v69),
          (int32_t)this,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
        LODWORD(max_length) = enemySaveData->max_length;
        ++v68;
        v69 += 8;
        if ( (__int64)v68 >= (int)max_length )
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.mySvtInfos,
      (int32_t)MySvtInfos,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    this = (BattleWaveInfoData_o *)battleData->fields._FirstSortieWaves_k__BackingField;
    v6->fields.startPartyId = battleData->fields._SelectedPartyIndex_k__BackingField + 1;
    if ( !this )
      goto LABEL_51;
    v84 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)this,
            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    v6->fields.firstSortieWaves = v84;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.firstSortieWaves,
      (int32_t)v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    this = (BattleWaveInfoData_o *)battleData->fields._LastSortieWaves_k__BackingField;
    v6->fields.switchPartyChargeTurn = battleData->fields._SwitchPartyChargeTurn_k__BackingField;
    if ( !this )
      goto LABEL_51;
    v91 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)this,
            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    v6->fields.LastSortieWaves = v91;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.LastSortieWaves,
      (int32_t)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
  }
  BattleValueDict = BattleData__GetBattleValueDict(battleData, 0);
  v6->fields.battleFlag = BattleValueDict;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.battleFlag,
    (int32_t)BattleValueDict,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this = (BattleWaveInfoData_o *)battleData->fields._FieldEnvData_k__BackingField;
  *(_QWORD *)&v6->fields.playerEntryTotalCount = *(_QWORD *)&battleData->fields._PlayerEntryTotalCount_k__BackingField;
  if ( !this )
    goto LABEL_51;
  SaveData = (Il2CppObject *)BattleFieldEnvironmentData__GetSaveData((BattleFieldEnvironmentData_o *)this, 0);
  this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                   SaveData,
                                   (const MethodInfo_381C19C *)Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
  if ( !this )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_51;
  v112 = this->fields.equipSkillChargeNum;
  v6->fields.fieldEnvironmentData = (struct System_String_o *)v112;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.fieldEnvironmentData,
    (int32_t)v112,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  BattleMissionValueDict_k__BackingField = battleData->fields._BattleMissionValueDict_k__BackingField;
  v6->fields.battleMissionFlag = BattleMissionValueDict_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.battleMissionFlag,
    (int32_t)BattleMissionValueDict_k__BackingField,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  perf = battleData->fields.perf;
  v6->fields.totalStopLimitTurn = battleData->fields.totalStopLimitTurnCount;
  if ( !perf )
    goto LABEL_51;
  this = (BattleWaveInfoData_o *)perf->fields.bgPerf;
  if ( !this )
    goto LABEL_51;
  v121 = (Il2CppObject *)BattlePerformanceBg__getSaveData((BattlePerformanceBg_o *)this, 0);
  StringFromMessagePackTargetData_object = BattleUtility__GetStringFromMessagePackTargetData_object_(
                                             v121,
                                             (const MethodInfo_3817D98 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___);
  v6->fields.bgData = StringFromMessagePackTargetData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.bgData,
    (int32_t)StringFromMessagePackTargetData_object,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  if ( !v59 )
    goto LABEL_51;
  fixedCommands = battleData->fields.fixedCommands;
  *(_QWORD *)(v59 + 16) = fixedCommands;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v59 + 16),
    (int32_t)fixedCommands,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  AddedEntryCondUniqueIds = BattleData__GetAddedEntryCondUniqueIds(battleData, 0);
  *(_QWORD *)(v59 + 24) = AddedEntryCondUniqueIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v59 + 24),
    (int32_t)AddedEntryCondUniqueIds,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  v143 = BattleUtility__GetStringFromMessagePackTargetData_object_(
           (Il2CppObject *)v59,
           (const MethodInfo_3817D98 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
  v6->fields.battleDataRelated = v143;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.battleDataRelated,
    (int32_t)v143,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  BattleWaveInfoData_BattleDataSaveData_o *v10; // x20
  Il2CppClass *FixedCommands; // x1
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0

  v10 = this;
  if ( (byte_59702A2 & 1) == 0 )
  {
    this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_2213A60(&Method_System_Array_Empty_BattleCommandData___);
    byte_59702A2 = 1;
  }
  FixedCommands = (Il2CppClass *)v10->fields.FixedCommands;
  if ( !FixedCommands )
  {
    v12 = Method_System_Array_Empty_BattleCommandData___;
    v13 = *((_QWORD *)Method_System_Array_Empty_BattleCommandData___ + 7);
    if ( !v13 )
    {
      sub_224B964(Method_System_Array_Empty_BattleCommandData___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v8);
    if ( !*(_DWORD *)(v14 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, FixedCommands);
    this = *(BattleWaveInfoData_BattleDataSaveData_o **)(v12[7] + 16LL);
    if ( (*(_WORD *)((_BYTE *)&this[9].fields.FixedCommands + 5) & 1) == 0 )
      this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_224B908(v8);
    FixedCommands = this[5].fields.addedEntryCondUniqueIds->obj.klass;
  }
  if ( !data )
    sub_2213CDC(this, FixedCommands);
  data->fields.fixedCommands = (struct BattleCommandData_array *)FixedCommands;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&data->fields.fixedCommands,
    (int32_t)FixedCommands,
    (System_String_o *)method,
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
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_59702A1 & 1) == 0 )
  {
    sub_2213A60(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
    byte_59702A1 = 1;
  }
  v3 = sub_2213CCC(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  result = (BattleWaveInfoData_BattleItemInfo_SaveData_o *)v3;
  *(BattleWaveInfoData_BattleItemInfo_Fields *)(v3 + 16) = this->fields;
  return result;
}


void BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        BattleWaveInfoData_BattleItemInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_2213CDC(this, 0);
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