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
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  struct System_Int32_array *v13; // x12
  __int64 v14; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v16; // x8
  int32_t *m_Items; // x12
  __int64 v18; // x13
  int v19; // w21
  struct DropInfo_array *dropInfos; // x8
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  unsigned int v24; // w24
  struct DropInfo_array *v25; // x8
  _DWORD *v26; // x26
  const MethodInfo *v27; // x3
  __int64 v28; // x23
  _DWORD *v29; // x0
  int v30; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  unsigned int v36; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v37; // x8
  _DWORD *v38; // x26
  const MethodInfo *v39; // x3
  __int64 v40; // x23
  _DWORD *v41; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_String_array *mySvtInfos; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Int32_array *firstSortieWaves; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_String_o *bgData; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_String_o *battleDataRelated; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v65; // x0

  if ( (byte_4C26D6C & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo);
    sub_1C2D490(&DropInfo_SaveData___TypeInfo);
    sub_1C2D490(&BattleWaveInfoData_SaveData_TypeInfo);
    byte_4C26D6C = 1;
  }
  v3 = sub_1C2D6DC(BattleWaveInfoData_SaveData_TypeInfo);
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
  v8 = sub_1C2D538(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v3 + 24) = v8;
  v9 = (__int64 *)(v3 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), v8, v10, v11);
  if ( max_length >= 1 )
  {
    v13 = this->fields.equipSkillChargeNum;
    if ( !v13 )
      goto LABEL_44;
    v14 = *v9;
    max_length_low = LODWORD(v13->max_length);
    v16 = 0;
    m_Items = v13->m_Items;
    v18 = *v9 + 32;
    do
    {
      if ( v16 >= max_length_low )
        goto LABEL_45;
      if ( !v14 )
        goto LABEL_44;
      if ( v16 >= *(unsigned int *)(v14 + 24) )
LABEL_45:
        sub_1C2D6F4(IsNullOrEmpty, v5, v12);
      *(_DWORD *)(v18 + 4 * v16) = m_Items[v16];
      ++v16;
    }
    while ( max_length != v16 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v19 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v19 = dropInfos->max_length;
  }
  v21 = sub_1C2D538(DropInfo_SaveData___TypeInfo, (unsigned int)v19);
  *(_QWORD *)(v3 + 32) = v21;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v21, v22, v23);
  if ( v19 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = this->fields.dropInfos;
      if ( !v25 )
        break;
      if ( v24 >= LODWORD(v25->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v25->m_Items[v24];
      if ( !IsNullOrEmpty )
        break;
      v26 = *(_DWORD **)(v3 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0);
      if ( !v26 )
        break;
      v28 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C2D5CC(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v65 = sub_1C2D710(IsNullOrEmpty);
          sub_1C2D5B8(v65, 0);
        }
      }
      if ( v24 >= v26[6] )
        goto LABEL_45;
      v29 = &v26[2 * v24];
      *((_QWORD *)v29 + 4) = v28;
      sub_1C2D434((CGThumbnailListItem_o *)(v29 + 8), v28, v12, v27);
      if ( v19 == ++v24 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1C2D6EC(IsNullOrEmpty, v5);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v30 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v30 = battleItemInfos->max_length;
  }
  v32 = sub_1C2D538(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v30);
  *(_QWORD *)(v3 + 40) = v32;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), v32, v33, v34);
  if ( v30 >= 1 )
  {
    v36 = 0;
    do
    {
      v37 = this->fields.battleItemInfos;
      if ( !v37 )
        goto LABEL_44;
      if ( v36 >= LODWORD(v37->max_length) )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v37->m_Items[v36];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v38 = *(_DWORD **)(v3 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v5);
      if ( !v38 )
        goto LABEL_44;
      v40 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C2D5CC(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v36 >= v38[6] )
        goto LABEL_45;
      v41 = &v38[2 * v36];
      *((_QWORD *)v41 + 4) = v40;
      sub_1C2D434((CGThumbnailListItem_o *)(v41 + 8), v40, v12, v39);
    }
    while ( v30 != ++v36 );
  }
  *(_DWORD *)(v3 + 48) = this->fields.star;
  enemySvtInfos = this->fields.enemySvtInfos;
  *(_QWORD *)(v3 + 56) = enemySvtInfos;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 56), (int32_t)enemySvtInfos, v12, v35);
  battleFlag = this->fields.battleFlag;
  *(_QWORD *)(v3 + 64) = battleFlag;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 64), (int32_t)battleFlag, v44, v45);
  fieldEnvironmentData = this->fields.fieldEnvironmentData;
  *(_QWORD *)(v3 + 72) = fieldEnvironmentData;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 72), (int32_t)fieldEnvironmentData, v47, v48);
  battleMissionFlag = this->fields.battleMissionFlag;
  *(_QWORD *)(v3 + 80) = battleMissionFlag;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 80), (int32_t)battleMissionFlag, v50, v51);
  *(_DWORD *)(v3 + 88) = this->fields.totalStopLimitTurn;
  mySvtInfos = this->fields.mySvtInfos;
  *(_QWORD *)(v3 + 96) = mySvtInfos;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 96), (int32_t)mySvtInfos, v53, v54);
  *(_DWORD *)(v3 + 104) = this->fields.startPartyId;
  firstSortieWaves = this->fields.firstSortieWaves;
  *(_QWORD *)(v3 + 112) = firstSortieWaves;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 112), (int32_t)firstSortieWaves, v56, v57);
  *(_DWORD *)(v3 + 120) = this->fields.switchPartyChargeTurn;
  bgData = this->fields.bgData;
  *(_QWORD *)(v3 + 128) = bgData;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 128), (int32_t)bgData, v59, v60);
  battleDataRelated = this->fields.battleDataRelated;
  *(_QWORD *)(v3 + 136) = battleDataRelated;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 136), (int32_t)battleDataRelated, v62, v63);
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
  __int64 v11; // x2
  struct System_Int32_array *v12; // x12
  struct System_Int32_array *v13; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v15; // x8
  int32_t *m_Items; // x12
  __int64 v17; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  il2cpp_array_size_t v19; // x22
  __int64 v20; // x0
  unsigned int **p_dropInfos; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  unsigned __int64 v24; // x23
  __int64 v25; // x25
  __int64 v26; // x26
  DropInfo_o *v27; // x22
  struct DropInfo_SaveData_array *v28; // x8
  unsigned int *v29; // x27
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
  const MethodInfo *v44; // x3
  Il2CppClass **v45; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_String_array *mySvtInfos; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Int32_array *firstSortieWaves; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_String_o *bgData; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_String_o *battleDataRelated; // x1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x0

  v4 = this;
  if ( (byte_4C26D6B & 1) == 0 )
  {
    sub_1C2D490(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C2D490(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C2D490(&DropInfo___TypeInfo);
    sub_1C2D490(&DropInfo_TypeInfo);
    this = (BattleWaveInfoData_o *)sub_1C2D490(&int___TypeInfo);
    byte_4C26D6B = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  max_length = equipSkillChargeNum->max_length;
  v7 = sub_1C2D538(int___TypeInfo, (unsigned int)max_length);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.equipSkillChargeNum, v7, v9, v10);
  if ( (int)max_length >= 1 )
  {
    v12 = saveData->fields.equipSkillChargeNum;
    if ( !v12 )
      goto LABEL_34;
    v13 = *p_equipSkillChargeNum;
    max_length_low = LODWORD(v12->max_length);
    v15 = 0;
    m_Items = v12->m_Items;
    v17 = (__int64)(*p_equipSkillChargeNum)->m_Items;
    do
    {
      if ( v15 >= max_length_low )
        goto LABEL_35;
      if ( !v13 )
        goto LABEL_34;
      if ( v15 >= LODWORD(v13->max_length) )
LABEL_35:
        sub_1C2D6F4(this, saveData, v11);
      *(_DWORD *)(v17 + 4 * v15) = m_Items[v15];
      ++v15;
    }
    while ( (unsigned int)max_length != v15 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1C2D6EC(this, saveData);
  v19 = dropInfos->max_length;
  v20 = sub_1C2D538(DropInfo___TypeInfo, (unsigned int)v19);
  v4->fields.dropInfos = (struct DropInfo_array *)v20;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.dropInfos, v20, v22, v23);
  if ( (int)v19 >= 1 )
  {
    v24 = 0;
    v25 = (unsigned int)v19;
    v26 = 8;
    do
    {
      v27 = (DropInfo_o *)sub_1C2D6DC(DropInfo_TypeInfo);
      DropInfo___ctor(v27, 0);
      v28 = saveData->fields.dropInfos;
      if ( !v28 )
        goto LABEL_34;
      if ( v24 >= LODWORD(v28->max_length) )
        goto LABEL_35;
      if ( !v27 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v27, *(DropInfo_SaveData_o **)((char *)&v28->obj.klass + v26 * 4), 0);
      v29 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C2D5CC(v27, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
      if ( !this )
      {
LABEL_36:
        v68 = sub_1C2D710(this);
        sub_1C2D5B8(v68, 0);
      }
      if ( v24 >= v29[6] )
        goto LABEL_35;
      *(_QWORD *)&v29[v26] = v27;
      sub_1C2D434((CGThumbnailListItem_o *)&v29[v26], (int32_t)v27, v11, v30);
      ++v24;
      v26 += 2;
    }
    while ( v25 != v24 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v32 = battleItemInfos->max_length;
  v33 = sub_1C2D538(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v32);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v33;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.battleItemInfos, v33, v35, v36);
  if ( v32 >= 1 )
  {
    v39 = 0;
    do
    {
      v40 = (Il2CppObject *)sub_1C2D6DC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
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
      this = (BattleWaveInfoData_o *)sub_1C2D5CC(v40, v43->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v39 >= LODWORD(v43->max_length) )
        goto LABEL_35;
      v45 = &v43->obj.klass + (int)v39;
      v45[4] = (Il2CppClass *)v40;
      sub_1C2D434((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v40, v11, v44);
    }
    while ( v32 != ++v39 );
  }
  v4->fields.star = saveData->fields.star;
  enemySvtInfos = saveData->fields.enemySvtInfos;
  v4->fields.enemySvtInfos = enemySvtInfos;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.enemySvtInfos, (int32_t)enemySvtInfos, v37, v38);
  battleFlag = saveData->fields.battleFlag;
  v4->fields.battleFlag = battleFlag;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.battleFlag, (int32_t)battleFlag, v48, v49);
  fieldEnvironmentData = saveData->fields.fieldEnvironmentData;
  v4->fields.fieldEnvironmentData = fieldEnvironmentData;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.fieldEnvironmentData, (int32_t)fieldEnvironmentData, v51, v52);
  battleMissionFlag = saveData->fields.battleMissionFlag;
  v4->fields.battleMissionFlag = battleMissionFlag;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.battleMissionFlag, (int32_t)battleMissionFlag, v54, v55);
  v4->fields.totalStopLimitTurn = saveData->fields.totalStopLimitTurn;
  mySvtInfos = saveData->fields.mySvtInfos;
  v4->fields.mySvtInfos = mySvtInfos;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.mySvtInfos, (int32_t)mySvtInfos, v57, v58);
  v4->fields.startPartyId = saveData->fields.startPartyId;
  firstSortieWaves = saveData->fields.firstSortieWaves;
  v4->fields.firstSortieWaves = firstSortieWaves;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.firstSortieWaves, (int32_t)firstSortieWaves, v60, v61);
  v4->fields.switchPartyChargeTurn = saveData->fields.switchPartyChargeTurn;
  bgData = saveData->fields.bgData;
  v4->fields.bgData = bgData;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.bgData, (int32_t)bgData, v63, v64);
  battleDataRelated = saveData->fields.battleDataRelated;
  v4->fields.battleDataRelated = battleDataRelated;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.battleDataRelated, (int32_t)battleDataRelated, v66, v67);
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
  __int64 v14; // x2
  char *v15; // x8
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v17; // x22
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  unsigned __int64 v21; // x24
  __int64 v22; // x26
  unsigned int *dropInfos; // x28
  const MethodInfo *v24; // x3
  BattleWaveInfoData_o *v25; // x25
  int32_t wave; // w24
  BattleWaveInfoData_o *v27; // x22
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x23
  Il2CppObject *v32; // x24
  const MethodInfo *v33; // x3
  QuestPhaseEntity_o *questphase_ent; // x23
  __int64 v35; // x22
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v40; // x25
  __int64 v41; // x26
  struct System_String_array *enemySvtInfos; // x28
  const MethodInfo *v43; // x3
  System_String_array *MySvtInfos; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Int32_array *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_Dictionary_int__int__o *BattleValueDict; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *SaveData; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Int32_array *v56; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *BattleMissionValueDict_k__BackingField; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *v61; // x0
  System_String_o *StringFromMessagePackTargetData_object; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct BattleCommandData_array *fixedCommands; // x1
  System_String_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x0

  v6 = this;
  if ( (byte_4C26D6D & 1) == 0 )
  {
    sub_1C2D490(&BattleWaveInfoData_BattleDataSaveData_TypeInfo);
    sub_1C2D490(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C2D490(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C2D490(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
    sub_1C2D490(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___);
    sub_1C2D490(&Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
    sub_1C2D490(&Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
    sub_1C2D490(&DropInfo___TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C2D490(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    this = (BattleWaveInfoData_o *)sub_1C2D490(&string___TypeInfo);
    byte_4C26D6D = 1;
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
  v9 = sub_1C2D538(int___TypeInfo, (unsigned int)size);
  v6->fields.equipSkillChargeNum = (struct System_Int32_array *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.equipSkillChargeNum, v9, v10, v11);
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
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_50;
      this = (BattleWaveInfoData_o *)((__int64 (__fastcall *)(BattleWaveInfoData_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                                       this,
                                       *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
      if ( !equipSkillChargeNum )
        goto LABEL_50;
      if ( v12 >= LODWORD(equipSkillChargeNum->max_length) )
        goto LABEL_51;
      v15 = (char *)equipSkillChargeNum + 4 * v12++;
      *((_DWORD *)v15 + 8) = (_DWORD)this;
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
    v17 = (unsigned int)droplist->fields._size;
    v18 = sub_1C2D538(DropInfo___TypeInfo, (unsigned int)v17);
    v6->fields.dropInfos = (struct DropInfo_array *)v18;
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.dropInfos, v18, v19, v20);
    if ( (int)v17 >= 1 )
    {
      v21 = 0;
      v22 = 8;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_50;
        dropInfos = (unsigned int *)v6->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v21,
                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_50;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0);
        if ( !dropInfos )
          goto LABEL_50;
        v25 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1C2D5CC(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_52;
        }
        if ( v21 >= dropInfos[6] )
          goto LABEL_51;
        *(_QWORD *)&dropInfos[v22] = v25;
        sub_1C2D434((CGThumbnailListItem_o *)&dropInfos[v22], (int32_t)v25, v14, v24);
        ++v21;
        v22 += 2;
      }
      while ( v17 != v21 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_50;
  wave = this->fields.wave;
  v27 = this;
  v28 = sub_1C2D538(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v6->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.battleItemInfos, v28, v29, v30);
  if ( wave >= 1 )
  {
    battleItemInfos = v6->fields.battleItemInfos;
    v32 = (Il2CppObject *)sub_1C2D6DC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v32, 0);
    if ( !v32 )
      goto LABEL_50;
    v32[1].klass = *(Il2CppClass **)&v27->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_50;
    this = (BattleWaveInfoData_o *)sub_1C2D5CC(v32, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_52:
      v71 = sub_1C2D710(this);
      sub_1C2D5B8(v71, 0);
    }
    if ( !LODWORD(battleItemInfos->max_length) )
LABEL_51:
      sub_1C2D6F4(this, battleData, v14);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v32;
    sub_1C2D434((CGThumbnailListItem_o *)battleItemInfos->m_Items, (int32_t)v32, v14, v33);
  }
  v6->fields.star = battleData->fields.totalCriticalStars;
  questphase_ent = battleData->fields.questphase_ent;
  v35 = sub_1C2D6DC(BattleWaveInfoData_BattleDataSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0);
  if ( !questphase_ent )
    goto LABEL_50;
  this = (BattleWaveInfoData_o *)QuestPhaseEntity__IsSaveInterruptionEnemyData(questphase_ent, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !enemySaveData )
      goto LABEL_50;
    v36 = sub_1C2D538(string___TypeInfo, LODWORD(enemySaveData->max_length));
    v6->fields.enemySvtInfos = (struct System_String_array *)v36;
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.enemySvtInfos, v36, v37, v38);
    max_length = enemySaveData->max_length;
    if ( (int)max_length >= 1 )
    {
      v40 = 0;
      v41 = 32;
      while ( v40 < (unsigned int)max_length )
      {
        enemySvtInfos = v6->fields.enemySvtInfos;
        this = (BattleWaveInfoData_o *)BattleUtility__GetStringFromMessagePackTargetData_object_(
                                         *(Il2CppObject **)((char *)&enemySaveData->obj.klass + v41),
                                         (const MethodInfo_30BFF64 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleServantData_SaveData___);
        if ( !enemySvtInfos )
          goto LABEL_50;
        if ( v40 >= LODWORD(enemySvtInfos->max_length) )
          break;
        *(Il2CppClass **)((char *)&enemySvtInfos->obj.klass + v41) = (Il2CppClass *)this;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)enemySvtInfos + v41), (int32_t)this, v14, v43);
        LODWORD(max_length) = enemySaveData->max_length;
        ++v40;
        v41 += 8;
        if ( (__int64)v40 >= (int)max_length )
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
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.mySvtInfos, (int32_t)MySvtInfos, v45, v46);
    v6->fields.startPartyId = battleData->fields._SelectedPartyIndex_k__BackingField + 1;
    this = (BattleWaveInfoData_o *)battleData->fields._FirstSortieWaves_k__BackingField;
    if ( !this )
      goto LABEL_50;
    v47 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)this,
            (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    v6->fields.firstSortieWaves = v47;
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.firstSortieWaves, (int32_t)v47, v48, v49);
    v6->fields.switchPartyChargeTurn = battleData->fields._SwitchPartyChargeTurn_k__BackingField;
  }
  BattleValueDict = BattleData__GetBattleValueDict(battleData, 0);
  v6->fields.battleFlag = BattleValueDict;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.battleFlag, (int32_t)BattleValueDict, v51, v52);
  this = (BattleWaveInfoData_o *)battleData->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_50;
  SaveData = (Il2CppObject *)BattleFieldEnvironmentData__GetSaveData((BattleFieldEnvironmentData_o *)this, 0);
  this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                   SaveData,
                                   (const MethodInfo_30C1004 *)Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
  if ( !this )
    goto LABEL_50;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_50;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0);
  if ( !this )
    goto LABEL_50;
  v56 = this->fields.equipSkillChargeNum;
  v6->fields.fieldEnvironmentData = (struct System_String_o *)v56;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.fieldEnvironmentData, (int32_t)v56, v54, v55);
  BattleMissionValueDict_k__BackingField = battleData->fields._BattleMissionValueDict_k__BackingField;
  v6->fields.battleMissionFlag = BattleMissionValueDict_k__BackingField;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&v6->fields.battleMissionFlag,
    (int32_t)BattleMissionValueDict_k__BackingField,
    v58,
    v59);
  v6->fields.totalStopLimitTurn = battleData->fields.totalStopLimitTurnCount;
  perf = battleData->fields.perf;
  if ( !perf
    || (this = (BattleWaveInfoData_o *)perf->fields.bgPerf) == 0
    || (v61 = (Il2CppObject *)BattlePerformanceBg__getSaveData((BattlePerformanceBg_o *)this, 0),
        StringFromMessagePackTargetData_object = BattleUtility__GetStringFromMessagePackTargetData_object_(
                                                   v61,
                                                   (const MethodInfo_30BFF64 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattlePerformanceBg_SaveData___),
        v6->fields.bgData = StringFromMessagePackTargetData_object,
        sub_1C2D434(
          (CGThumbnailListItem_o *)&v6->fields.bgData,
          (int32_t)StringFromMessagePackTargetData_object,
          v63,
          v64),
        !v35) )
  {
LABEL_50:
    sub_1C2D6EC(this, battleData);
  }
  fixedCommands = battleData->fields.fixedCommands;
  *(_QWORD *)(v35 + 16) = fixedCommands;
  sub_1C2D434((CGThumbnailListItem_o *)(v35 + 16), (int32_t)fixedCommands, v65, v66);
  v68 = BattleUtility__GetStringFromMessagePackTargetData_object_(
          (Il2CppObject *)v35,
          (const MethodInfo_30BFF64 *)Method_BattleUtility_GetStringFromMessagePackTargetData_BattleWaveInfoData_BattleDataSaveData___);
  v6->fields.battleDataRelated = v68;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.battleDataRelated, (int32_t)v68, v69, v70);
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
  if ( (byte_4C26D6F & 1) == 0 )
  {
    this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_1C2D490(&Method_System_Array_Empty_BattleCommandData___);
    byte_4C26D6F = 1;
  }
  FixedCommands = (Il2CppClass *)v6->fields.FixedCommands;
  if ( !FixedCommands )
  {
    v8 = Method_System_Array_Empty_BattleCommandData___;
    v9 = *((_QWORD *)Method_System_Array_Empty_BattleCommandData___ + 7);
    if ( !v9 )
    {
      sub_1C7DC00(Method_System_Array_Empty_BattleCommandData___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    this = *(BattleWaveInfoData_BattleDataSaveData_o **)(v8[7] + 16LL);
    if ( (BYTE5(this[12].fields.FixedCommands) & 1) == 0 )
      this = (BattleWaveInfoData_BattleDataSaveData_o *)sub_1C7DBA4(inited);
    FixedCommands = this[7].fields.FixedCommands->obj.klass;
  }
  if ( !data )
    sub_1C2D6EC(this, FixedCommands);
  data->fields.fixedCommands = (struct BattleCommandData_array *)FixedCommands;
  sub_1C2D434((CGThumbnailListItem_o *)&data->fields.fixedCommands, (int32_t)FixedCommands, (int32_t)method, v3);
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

  if ( (byte_4C26D6E & 1) == 0 )
  {
    sub_1C2D490(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
    byte_4C26D6E = 1;
  }
  v3 = sub_1C2D6DC(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
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
    sub_1C2D6EC(this, 0);
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