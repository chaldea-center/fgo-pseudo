void BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleWaveInfoData_SaveData_o *BattleWaveInfoData__GetSaveData(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 IsNullOrEmpty; // x0
  int max_length; // w21
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v7; // x0
  __int64 *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Int32_array *v11; // x12
  __int64 v12; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v14; // x8
  int32_t *m_Items; // x12
  __int64 v16; // x13
  int v17; // w21
  struct DropInfo_array *dropInfos; // x8
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  unsigned int v22; // w24
  struct DropInfo_array *v23; // x8
  _DWORD *v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x23
  _DWORD *v28; // x0
  int v29; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  unsigned int v37; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v38; // x8
  _DWORD *v39; // x26
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x23
  _DWORD *v43; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_String_array *mySvtInfos; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Int32_array *firstSortieWaves; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_String_o *bgData; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_String_o *battleDataRelated; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v67; // x0

  if ( (byte_4C42A34 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo);
    sub_1C37058(&DropInfo_SaveData___TypeInfo);
    sub_1C37058(&BattleWaveInfoData_SaveData_TypeInfo);
    byte_4C42A34 = 1;
  }
  v3 = sub_1C372A4(BattleWaveInfoData_SaveData_TypeInfo);
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
  v7 = sub_1C37100(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v3 + 24) = v7;
  v8 = (__int64 *)(v3 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), v7, v9, v10);
  if ( max_length >= 1 )
  {
    v11 = this->fields.equipSkillChargeNum;
    if ( !v11 )
      goto LABEL_44;
    v12 = *v8;
    max_length_low = LODWORD(v11->max_length);
    v14 = 0;
    m_Items = v11->m_Items;
    v16 = *v8 + 32;
    do
    {
      if ( v14 >= max_length_low )
        goto LABEL_45;
      if ( !v12 )
        goto LABEL_44;
      if ( v14 >= *(unsigned int *)(v12 + 24) )
LABEL_45:
        sub_1C372BC(IsNullOrEmpty);
      *(_DWORD *)(v16 + 4 * v14) = m_Items[v14];
      ++v14;
    }
    while ( max_length != v14 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v17 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v17 = dropInfos->max_length;
  }
  v19 = sub_1C37100(DropInfo_SaveData___TypeInfo, (unsigned int)v17);
  *(_QWORD *)(v3 + 32) = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v19, v20, v21);
  if ( v17 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = this->fields.dropInfos;
      if ( !v23 )
        break;
      if ( v22 >= LODWORD(v23->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v23->m_Items[v22];
      if ( !IsNullOrEmpty )
        break;
      v24 = *(_DWORD **)(v3 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0);
      if ( !v24 )
        break;
      v27 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C37194(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v67 = sub_1C372D8(IsNullOrEmpty);
          sub_1C37180(v67, 0);
        }
      }
      if ( v22 >= v24[6] )
        goto LABEL_45;
      v28 = &v24[2 * v22];
      *((_QWORD *)v28 + 4) = v27;
      sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 8), v27, v25, v26);
      if ( v17 == ++v22 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1C372B4(IsNullOrEmpty);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v29 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v29 = battleItemInfos->max_length;
  }
  v31 = sub_1C37100(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v29);
  *(_QWORD *)(v3 + 40) = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), v31, v32, v33);
  if ( v29 >= 1 )
  {
    v37 = 0;
    do
    {
      v38 = this->fields.battleItemInfos;
      if ( !v38 )
        goto LABEL_44;
      if ( v37 >= LODWORD(v38->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v38->m_Items[v37];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v39 = *(_DWORD **)(v3 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v34);
      if ( !v39 )
        goto LABEL_44;
      v42 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C37194(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v37 >= v39[6] )
        goto LABEL_45;
      v43 = &v39[2 * v37];
      *((_QWORD *)v43 + 4) = v42;
      sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 8), v42, v40, v41);
    }
    while ( v29 != ++v37 );
  }
  *(_DWORD *)(v3 + 48) = this->fields.star;
  enemySvtInfos = this->fields.enemySvtInfos;
  *(_QWORD *)(v3 + 56) = enemySvtInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 56), (int32_t)enemySvtInfos, v35, v36);
  battleFlag = this->fields.battleFlag;
  *(_QWORD *)(v3 + 64) = battleFlag;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 64), (int32_t)battleFlag, v46, v47);
  fieldEnvironmentData = this->fields.fieldEnvironmentData;
  *(_QWORD *)(v3 + 72) = fieldEnvironmentData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 72), (int32_t)fieldEnvironmentData, v49, v50);
  battleMissionFlag = this->fields.battleMissionFlag;
  *(_QWORD *)(v3 + 80) = battleMissionFlag;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 80), (int32_t)battleMissionFlag, v52, v53);
  *(_DWORD *)(v3 + 88) = this->fields.totalStopLimitTurn;
  mySvtInfos = this->fields.mySvtInfos;
  *(_QWORD *)(v3 + 96) = mySvtInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 96), (int32_t)mySvtInfos, v55, v56);
  *(_DWORD *)(v3 + 104) = this->fields.startPartyId;
  firstSortieWaves = this->fields.firstSortieWaves;
  *(_QWORD *)(v3 + 112) = firstSortieWaves;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 112), (int32_t)firstSortieWaves, v58, v59);
  *(_DWORD *)(v3 + 120) = this->fields.switchPartyChargeTurn;
  bgData = this->fields.bgData;
  *(_QWORD *)(v3 + 128) = bgData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 128), (int32_t)bgData, v61, v62);
  battleDataRelated = this->fields.battleDataRelated;
  *(_QWORD *)(v3 + 136) = battleDataRelated;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 136), (int32_t)battleDataRelated, v64, v65);
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
  const MethodInfo *v10; // x3
  struct System_Int32_array *v11; // x12
  struct System_Int32_array *v12; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v14; // x8
  int32_t *m_Items; // x12
  __int64 v16; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  il2cpp_array_size_t v18; // x22
  __int64 v19; // x0
  unsigned int **p_dropInfos; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  unsigned __int64 v23; // x23
  __int64 v24; // x25
  __int64 v25; // x26
  DropInfo_o *v26; // x22
  struct DropInfo_SaveData_array *v27; // x8
  unsigned int *v28; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v32; // w21
  __int64 v33; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  unsigned int v39; // w24
  Il2CppObject *v40; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v41; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v42; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v43; // x27
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppClass **v46; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_String_array *mySvtInfos; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Int32_array *firstSortieWaves; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_String_o *bgData; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_String_o *battleDataRelated; // x1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x0

  v4 = this;
  if ( (byte_4C42A33 & 1) == 0 )
  {
    sub_1C37058(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C37058(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C37058(&DropInfo___TypeInfo);
    sub_1C37058(&DropInfo_TypeInfo);
    this = (BattleWaveInfoData_o *)sub_1C37058(&int___TypeInfo);
    byte_4C42A33 = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  max_length = equipSkillChargeNum->max_length;
  v7 = sub_1C37100(int___TypeInfo, (unsigned int)max_length);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.equipSkillChargeNum, v7, v9, v10);
  if ( (int)max_length >= 1 )
  {
    v11 = saveData->fields.equipSkillChargeNum;
    if ( !v11 )
      goto LABEL_34;
    v12 = *p_equipSkillChargeNum;
    max_length_low = LODWORD(v11->max_length);
    v14 = 0;
    m_Items = v11->m_Items;
    v16 = (__int64)(*p_equipSkillChargeNum)->m_Items;
    do
    {
      if ( v14 >= max_length_low )
        goto LABEL_35;
      if ( !v12 )
        goto LABEL_34;
      if ( v14 >= LODWORD(v12->max_length) )
LABEL_35:
        sub_1C372BC(this);
      *(_DWORD *)(v16 + 4 * v14) = m_Items[v14];
      ++v14;
    }
    while ( (unsigned int)max_length != v14 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1C372B4(this);
  v18 = dropInfos->max_length;
  v19 = sub_1C37100(DropInfo___TypeInfo, (unsigned int)v18);
  v4->fields.dropInfos = (struct DropInfo_array *)v19;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.dropInfos, v19, v21, v22);
  if ( (int)v18 >= 1 )
  {
    v23 = 0;
    v24 = (unsigned int)v18;
    v25 = 8;
    do
    {
      v26 = (DropInfo_o *)sub_1C372A4(DropInfo_TypeInfo);
      DropInfo___ctor(v26, 0);
      v27 = saveData->fields.dropInfos;
      if ( !v27 )
        goto LABEL_34;
      if ( v23 >= LODWORD(v27->max_length) )
        goto LABEL_35;
      if ( !v26 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v26, *(DropInfo_SaveData_o **)((char *)&v27->obj.klass + v25 * 4), 0);
      v28 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C37194(v26, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
      if ( !this )
      {
LABEL_36:
        v69 = sub_1C372D8(this);
        sub_1C37180(v69, 0);
      }
      if ( v23 >= v28[6] )
        goto LABEL_35;
      *(_QWORD *)&v28[v25] = v26;
      sub_1C36FFC((CGThumbnailListItem_o *)&v28[v25], (int32_t)v26, v29, v30);
      ++v23;
      v25 += 2;
    }
    while ( v24 != v23 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v32 = battleItemInfos->max_length;
  v33 = sub_1C37100(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v32);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v33;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.battleItemInfos, v33, v35, v36);
  if ( v32 >= 1 )
  {
    v39 = 0;
    do
    {
      v40 = (Il2CppObject *)sub_1C372A4(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v40, 0);
      v41 = saveData->fields.battleItemInfos;
      if ( !v41 )
        goto LABEL_34;
      if ( v39 >= LODWORD(v41->max_length) )
        goto LABEL_35;
      if ( !v40 )
        goto LABEL_34;
      v42 = v41->m_Items[v39];
      if ( !v42 )
        goto LABEL_34;
      v40[1].klass = (Il2CppClass *)v42->fields;
      v43 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C37194(v40, v43->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v39 >= LODWORD(v43->max_length) )
        goto LABEL_35;
      v46 = &v43->obj.klass + (int)v39;
      v46[4] = (Il2CppClass *)v40;
      sub_1C36FFC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v40, v44, v45);
    }
    while ( v32 != ++v39 );
  }
  v4->fields.star = saveData->fields.star;
  enemySvtInfos = saveData->fields.enemySvtInfos;
  v4->fields.enemySvtInfos = enemySvtInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.enemySvtInfos, (int32_t)enemySvtInfos, v37, v38);
  battleFlag = saveData->fields.battleFlag;
  v4->fields.battleFlag = battleFlag;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.battleFlag, (int32_t)battleFlag, v49, v50);
  fieldEnvironmentData = saveData->fields.fieldEnvironmentData;
  v4->fields.fieldEnvironmentData = fieldEnvironmentData;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.fieldEnvironmentData, (int32_t)fieldEnvironmentData, v52, v53);
  battleMissionFlag = saveData->fields.battleMissionFlag;
  v4->fields.battleMissionFlag = battleMissionFlag;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.battleMissionFlag, (int32_t)battleMissionFlag, v55, v56);
  v4->fields.totalStopLimitTurn = saveData->fields.totalStopLimitTurn;
  mySvtInfos = saveData->fields.mySvtInfos;
  v4->fields.mySvtInfos = mySvtInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.mySvtInfos, (int32_t)mySvtInfos, v58, v59);
  v4->fields.startPartyId = saveData->fields.startPartyId;
  firstSortieWaves = saveData->fields.firstSortieWaves;
  v4->fields.firstSortieWaves = firstSortieWaves;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.firstSortieWaves, (int32_t)firstSortieWaves, v61, v62);
  v4->fields.switchPartyChargeTurn = saveData->fields.switchPartyChargeTurn;
  bgData = saveData->fields.bgData;
  v4->fields.bgData = bgData;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.bgData, (int32_t)bgData, v64, v65);
  battleDataRelated = saveData->fields.battleDataRelated;
  v4->fields.battleDataRelated = battleDataRelated;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.battleDataRelated, (int32_t)battleDataRelated, v67, v68);
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
  const MethodInfo *v11; // x3
  unsigned __int64 v12; // x24
  struct System_Int32_array *equipSkillChargeNum; // x26
  char *v14; // x8
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v16; // x22
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned __int64 v20; // x24
  __int64 v21; // x26
  unsigned int *dropInfos; // x28
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleWaveInfoData_o *v25; // x25
  int32_t wave; // w24
  BattleWaveInfoData_o *v27; // x22
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x23
  Il2CppObject *v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  QuestPhaseEntity_o *questphase_ent; // x23
  __int64 v36; // x22
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v41; // x25
  __int64 v42; // x26
  struct System_String_array *enemySvtInfos; // x28
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_String_array *MySvtInfos; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Int32_array *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_Dictionary_int__int__o *BattleValueDict; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *SaveData; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Int32_array *v58; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *BattleMissionValueDict_k__BackingField; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *v63; // x0
  System_String_o *StringFromMessagePackTargetData_object; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct BattleCommandData_array *fixedCommands; // x1
  System_String_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x0

  v6 = this;
  if ( (byte_4C42A35 & 1) == 0 )
  {
    sub_1C37058(&BattleWaveInfoData_BattleDataSaveData_TypeInfo);
    sub_1C37058(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C37058(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C37058(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
    sub_1C37058(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___);
    sub_1C37058(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
    sub_1C37058(&Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
    sub_1C37058(&DropInfo___TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C37058(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    this = (BattleWaveInfoData_o *)sub_1C37058(&string___TypeInfo);
    byte_4C42A35 = 1;
  }
  if ( !battleData )
    goto LABEL_50;
  this = (BattleWaveInfoData_o *)BattleData__getDispWaveCount(battleData, 0);
  v6->fields.wave = (int)this;
  v6->fields.turn = battleData->fields.totalTurnCount + 1;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_50;
  size = (unsigned int)masterSkillInfo->fields._size;
  v9 = sub_1C37100(int___TypeInfo, (unsigned int)size);
  v6->fields.equipSkillChargeNum = (struct System_Int32_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.equipSkillChargeNum, v9, v10, v11);
  if ( (int)size >= 1 )
  {
    v12 = 0;
    do
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        goto LABEL_50;
      equipSkillChargeNum = v6->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v12,
                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_50;
      this = (BattleWaveInfoData_o *)((__int64 (__fastcall *)(BattleWaveInfoData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                       this,
                                       *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
      if ( !equipSkillChargeNum )
        goto LABEL_50;
      if ( v12 >= LODWORD(equipSkillChargeNum->max_length) )
        goto LABEL_51;
      v14 = (char *)equipSkillChargeNum + 4 * v12++;
      *((_DWORD *)v14 + 8) = (_DWORD)this;
    }
    while ( size != v12 );
  }
  this = (BattleWaveInfoData_o *)BasicHelper__IsNullOrEmpty(
                                   (System_Collections_ICollection_o *)battleData->fields.droplist,
                                   0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    droplist = battleData->fields.droplist;
    if ( !droplist )
      goto LABEL_50;
    v16 = (unsigned int)droplist->fields._size;
    v17 = sub_1C37100(DropInfo___TypeInfo, (unsigned int)v16);
    v6->fields.dropInfos = (struct DropInfo_array *)v17;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.dropInfos, v17, v18, v19);
    if ( (int)v16 >= 1 )
    {
      v20 = 0;
      v21 = 8;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_50;
        dropInfos = (unsigned int *)v6->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v20,
                                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_50;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0);
        if ( !dropInfos )
          goto LABEL_50;
        v25 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1C37194(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_52;
        }
        if ( v20 >= dropInfos[6] )
          goto LABEL_51;
        *(_QWORD *)&dropInfos[v21] = v25;
        sub_1C36FFC((CGThumbnailListItem_o *)&dropInfos[v21], (int32_t)v25, v23, v24);
        ++v20;
        v21 += 2;
      }
      while ( v16 != v20 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_50;
  wave = this->fields.wave;
  v27 = this;
  v28 = sub_1C37100(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v6->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.battleItemInfos, v28, v29, v30);
  if ( wave >= 1 )
  {
    battleItemInfos = v6->fields.battleItemInfos;
    v32 = (Il2CppObject *)sub_1C372A4(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v32, 0);
    if ( !v32 )
      goto LABEL_50;
    v32[1].klass = *(Il2CppClass **)&v27->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_50;
    this = (BattleWaveInfoData_o *)sub_1C37194(v32, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_52:
      v73 = sub_1C372D8(this);
      sub_1C37180(v73, 0);
    }
    if ( !LODWORD(battleItemInfos->max_length) )
LABEL_51:
      sub_1C372BC(this);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v32;
    sub_1C36FFC((CGThumbnailListItem_o *)battleItemInfos->m_Items, (int32_t)v32, v33, v34);
  }
  v6->fields.star = battleData->fields.totalCriticalStars;
  questphase_ent = battleData->fields.questphase_ent;
  v36 = sub_1C372A4(BattleWaveInfoData_BattleDataSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0);
  if ( !questphase_ent )
    goto LABEL_50;
  this = (BattleWaveInfoData_o *)QuestPhaseEntity__IsSaveInterruptionEnemyData(questphase_ent, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !enemySaveData )
      goto LABEL_50;
    v37 = sub_1C37100(string___TypeInfo, LODWORD(enemySaveData->max_length));
    v6->fields.enemySvtInfos = (struct System_String_array *)v37;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.enemySvtInfos, v37, v38, v39);
    max_length = enemySaveData->max_length;
    if ( (int)max_length >= 1 )
    {
      v41 = 0;
      v42 = 32;
      while ( v41 < (unsigned int)max_length )
      {
        enemySvtInfos = v6->fields.enemySvtInfos;
        this = (BattleWaveInfoData_o *)BattleUtility__GetStringFromMessagePackTargetData_object_(
                                         *(Il2CppObject **)((char *)&enemySaveData->obj.klass + v42),
                                         (const MethodInfo_30D926C *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
        if ( !enemySvtInfos )
          goto LABEL_50;
        if ( v41 >= LODWORD(enemySvtInfos->max_length) )
          break;
        *(Il2CppClass **)((char *)&enemySvtInfos->obj.klass + v42) = (Il2CppClass *)this;
        sub_1C36FFC((CGThumbnailListItem_o *)((char *)enemySvtInfos + v42), (int32_t)this, v44, v45);
        LODWORD(max_length) = enemySaveData->max_length;
        ++v41;
        v42 += 8;
        if ( (__int64)v41 >= (int)max_length )
          goto LABEL_39;
      }
      goto LABEL_51;
    }
  }
LABEL_39:
  if ( QuestPhaseEntity__IsWaveSetupSwitchParty(questphase_ent, 0) )
  {
    MySvtInfos = BattleData__get_MySvtInfos(battleData, 0);
    v6->fields.mySvtInfos = MySvtInfos;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.mySvtInfos, (int32_t)MySvtInfos, v47, v48);
    v6->fields.startPartyId = battleData->fields._SelectedPartyIndex_k__BackingField + 1;
    this = (BattleWaveInfoData_o *)battleData->fields._FirstSortieWaves_k__BackingField;
    if ( !this )
      goto LABEL_50;
    v49 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)this,
            (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v6->fields.firstSortieWaves = v49;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.firstSortieWaves, (int32_t)v49, v50, v51);
    v6->fields.switchPartyChargeTurn = battleData->fields._SwitchPartyChargeTurn_k__BackingField;
  }
  BattleValueDict = BattleData__GetBattleValueDict(battleData, 0);
  v6->fields.battleFlag = BattleValueDict;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.battleFlag, (int32_t)BattleValueDict, v53, v54);
  this = (BattleWaveInfoData_o *)battleData->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_50;
  SaveData = (Il2CppObject *)BattleFieldEnvironmentData__GetSaveData((BattleFieldEnvironmentData_o *)this, 0);
  this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                   SaveData,
                                   (const MethodInfo_30DA30C *)Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
  if ( !this )
    goto LABEL_50;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_50;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_50;
  v58 = this->fields.equipSkillChargeNum;
  v6->fields.fieldEnvironmentData = (struct System_String_o *)v58;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.fieldEnvironmentData, (int32_t)v58, v56, v57);
  BattleMissionValueDict_k__BackingField = battleData->fields._BattleMissionValueDict_k__BackingField;
  v6->fields.battleMissionFlag = BattleMissionValueDict_k__BackingField;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&v6->fields.battleMissionFlag,
    (int32_t)BattleMissionValueDict_k__BackingField,
    v60,
    v61);
  v6->fields.totalStopLimitTurn = battleData->fields.totalStopLimitTurnCount;
  perf = battleData->fields.perf;
  if ( !perf
    || (this = (BattleWaveInfoData_o *)perf->fields.bgPerf) == 0
    || (v63 = (Il2CppObject *)BattlePerformanceBg__getSaveData((BattlePerformanceBg_o *)this, 0),
        StringFromMessagePackTargetData_object = BattleUtility__GetStringFromMessagePackTargetData_object_(
                                                   v63,
                                                   (const MethodInfo_30D926C *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___),
        v6->fields.bgData = StringFromMessagePackTargetData_object,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&v6->fields.bgData,
          (int32_t)StringFromMessagePackTargetData_object,
          v65,
          v66),
        !v36) )
  {
LABEL_50:
    sub_1C372B4(this);
  }
  fixedCommands = battleData->fields.fixedCommands;
  *(_QWORD *)(v36 + 16) = fixedCommands;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 16), (int32_t)fixedCommands, v67, v68);
  v70 = BattleUtility__GetStringFromMessagePackTargetData_object_(
          (Il2CppObject *)v36,
          (const MethodInfo_30D926C *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
  v6->fields.battleDataRelated = v70;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.battleDataRelated, (int32_t)v70, v71, v72);
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
  const MethodInfo *v3; // x3
  long double inited; // q0
  BattleWaveInfoData_BattleDataSaveData_o *v6; // x20
  Il2CppClass *FixedCommands; // x1
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0

  v6 = this;
  if ( (byte_4C42A37 & 1) == 0 )
  {
    this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_1C37058(&Method_System_Array_Empty_BattleCommandData___);
    byte_4C42A37 = 1;
  }
  FixedCommands = (Il2CppClass *)v6->fields.FixedCommands;
  if ( !FixedCommands )
  {
    v8 = Method_System_Array_Empty_BattleCommandData___;
    v9 = *((_QWORD *)Method_System_Array_Empty_BattleCommandData___ + 7);
    if ( !v9 )
    {
      sub_1C877C8(Method_System_Array_Empty_BattleCommandData___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    this = *(BattleWaveInfoData_BattleDataSaveData_o **)(v8[7] + 16LL);
    if ( (BYTE5(this[12].fields.FixedCommands) & 1) == 0 )
      this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_1C8776C(inited);
    FixedCommands = this[7].fields.FixedCommands->obj.klass;
  }
  if ( !data )
    sub_1C372B4(this);
  data->fields.fixedCommands = (struct BattleCommandData_array *)FixedCommands;
  sub_1C36FFC((CGThumbnailListItem_o *)&data->fields.fixedCommands, (int32_t)FixedCommands, (int32_t)method, v3);
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
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_4C42A36 & 1) == 0 )
  {
    sub_1C37058(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
    byte_4C42A36 = 1;
  }
  v3 = sub_1C372A4(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C372B4(v4);
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
    sub_1C372B4(this);
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