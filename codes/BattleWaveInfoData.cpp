void __fastcall BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_SaveData_o *__fastcall BattleWaveInfoData__GetSaveData(
        BattleWaveInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v8; // x1
  int max_length; // w21
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v11; // x0
  __int64 *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  struct System_Int32_array *v16; // x12
  __int64 v17; // x9
  unsigned __int64 v18; // x10
  unsigned __int64 v19; // x8
  int32_t *v20; // x12
  __int64 v21; // x13
  int v22; // w21
  struct DropInfo_array *dropInfos; // x8
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  il2cpp_array_size_t v27; // w24
  struct DropInfo_array *v28; // x8
  _DWORD *v29; // x26
  const MethodInfo *v30; // x3
  __int64 v31; // x23
  _DWORD *v32; // x0
  int v33; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  il2cpp_array_size_t v39; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v40; // x8
  _DWORD *v41; // x26
  const MethodInfo *v42; // x3
  __int64 v43; // x23
  _DWORD *v44; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v56; // x0

  if ( (byte_4B01ACE & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v3);
    sub_1BC3008(&DropInfo_SaveData___TypeInfo, v4);
    sub_1BC3008(&BattleWaveInfoData_SaveData_TypeInfo, v5);
    byte_4B01ACE = 1;
  }
  v6 = sub_1BC3254(BattleWaveInfoData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_44;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&this->fields.wave;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSkillChargeNum, 0LL);
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
  v11 = sub_1BC30B0(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v6 + 24) = v11;
  v12 = (__int64 *)(v6 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 24), v11, v13, v14);
  if ( max_length >= 1 )
  {
    v16 = this->fields.equipSkillChargeNum;
    if ( !v16 )
      goto LABEL_44;
    v17 = *v12;
    v18 = v16->max_length;
    v19 = 0LL;
    v20 = &v16->m_Items[1];
    v21 = *v12 + 32;
    do
    {
      if ( v19 >= v18 )
        goto LABEL_45;
      if ( !v17 )
        goto LABEL_44;
      if ( v19 >= *(unsigned int *)(v17 + 24) )
LABEL_45:
        sub_1BC326C(IsNullOrEmpty, v8, v15);
      *(_DWORD *)(v21 + 4 * v19) = v20[v19];
      ++v19;
    }
    while ( max_length != v19 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0LL);
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
  v24 = sub_1BC30B0(DropInfo_SaveData___TypeInfo, (unsigned int)v22);
  *(_QWORD *)(v6 + 32) = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 32), v24, v25, v26);
  if ( v22 >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = this->fields.dropInfos;
      if ( !v28 )
        break;
      if ( v27 >= v28->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v28->m_Items[v27];
      if ( !IsNullOrEmpty )
        break;
      v29 = *(_DWORD **)(v6 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v29 )
        break;
      v31 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1BC3144(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v56 = sub_1BC3288(IsNullOrEmpty);
          sub_1BC3130(v56, 0LL);
        }
      }
      if ( v27 >= v29[6] )
        goto LABEL_45;
      v32 = &v29[2 * v27];
      *((_QWORD *)v32 + 4) = v31;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 8), v31, v15, v30);
      if ( v22 == ++v27 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1BC3264(IsNullOrEmpty, v8);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v33 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v33 = battleItemInfos->max_length;
  }
  v35 = sub_1BC30B0(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v33);
  *(_QWORD *)(v6 + 40) = v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 40), v35, v36, v37);
  if ( v33 >= 1 )
  {
    v39 = 0;
    do
    {
      v40 = this->fields.battleItemInfos;
      if ( !v40 )
        goto LABEL_44;
      if ( v39 >= v40->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v40->m_Items[v39];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v41 = *(_DWORD **)(v6 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v8);
      if ( !v41 )
        goto LABEL_44;
      v43 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1BC3144(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v39 >= v41[6] )
        goto LABEL_45;
      v44 = &v41[2 * v39];
      *((_QWORD *)v44 + 4) = v43;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v44 + 8), v43, v15, v42);
    }
    while ( v33 != ++v39 );
  }
  *(_DWORD *)(v6 + 48) = this->fields.star;
  enemySvtInfos = this->fields.enemySvtInfos;
  *(_QWORD *)(v6 + 56) = enemySvtInfos;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 56), (int32_t)enemySvtInfos, v15, v38);
  battleFlag = this->fields.battleFlag;
  *(_QWORD *)(v6 + 64) = battleFlag;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 64), (int32_t)battleFlag, v47, v48);
  fieldEnvironmentData = this->fields.fieldEnvironmentData;
  *(_QWORD *)(v6 + 72) = fieldEnvironmentData;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 72), (int32_t)fieldEnvironmentData, v50, v51);
  battleMissionFlag = this->fields.battleMissionFlag;
  *(_QWORD *)(v6 + 80) = battleMissionFlag;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 80), (int32_t)battleMissionFlag, v53, v54);
  return (BattleWaveInfoData_SaveData_o *)v6;
}


void __fastcall BattleWaveInfoData__SetDataFromSaveData(
        BattleWaveInfoData_o *this,
        BattleWaveInfoData_SaveData_o *saveData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v10; // x21
  __int64 v11; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  struct System_Int32_array *v16; // x12
  struct System_Int32_array *v17; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v19; // x8
  int32_t *v20; // x12
  __int64 v21; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v23; // x22
  __int64 v24; // x0
  unsigned int **p_dropInfos; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  unsigned __int64 v28; // x23
  __int64 v29; // x25
  __int64 v30; // x26
  DropInfo_o *v31; // x22
  struct DropInfo_SaveData_array *v32; // x8
  unsigned int *v33; // x27
  const MethodInfo *v34; // x3
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v36; // w21
  __int64 v37; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  il2cpp_array_size_t v43; // w24
  Il2CppObject *v44; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v45; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v46; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v47; // x27
  const MethodInfo *v48; // x3
  Il2CppClass **v49; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *battleMissionFlag; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x0

  v4 = this;
  if ( (byte_4B01ACD & 1) == 0 )
  {
    sub_1BC3008(&BattleWaveInfoData_BattleItemInfo___TypeInfo, saveData);
    sub_1BC3008(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1BC3008(&DropInfo___TypeInfo, v6);
    sub_1BC3008(&DropInfo_TypeInfo, v7);
    this = (BattleWaveInfoData_o *)sub_1BC3008(&int___TypeInfo, v8);
    byte_4B01ACD = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v10 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v11 = sub_1BC30B0(int___TypeInfo, (unsigned int)v10);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v11;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.equipSkillChargeNum, v11, v13, v14);
  if ( (int)v10 >= 1 )
  {
    v16 = saveData->fields.equipSkillChargeNum;
    if ( !v16 )
      goto LABEL_34;
    v17 = *p_equipSkillChargeNum;
    max_length = v16->max_length;
    v19 = 0LL;
    v20 = &v16->m_Items[1];
    v21 = (__int64)&(*p_equipSkillChargeNum)->m_Items[1];
    do
    {
      if ( v19 >= max_length )
        goto LABEL_35;
      if ( !v17 )
        goto LABEL_34;
      if ( v19 >= v17->max_length )
LABEL_35:
        sub_1BC326C(this, saveData, v15);
      *(_DWORD *)(v21 + 4 * v19) = v20[v19];
      ++v19;
    }
    while ( (unsigned int)v10 != v19 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1BC3264(this, saveData);
  v23 = *(_QWORD *)&dropInfos->max_length;
  v24 = sub_1BC30B0(DropInfo___TypeInfo, (unsigned int)v23);
  v4->fields.dropInfos = (struct DropInfo_array *)v24;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.dropInfos, v24, v26, v27);
  if ( (int)v23 >= 1 )
  {
    v28 = 0LL;
    v29 = (unsigned int)v23;
    v30 = 8LL;
    do
    {
      v31 = (DropInfo_o *)sub_1BC3254(DropInfo_TypeInfo);
      DropInfo___ctor(v31, 0LL);
      v32 = saveData->fields.dropInfos;
      if ( !v32 )
        goto LABEL_34;
      if ( v28 >= v32->max_length )
        goto LABEL_35;
      if ( !v31 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v31, *(DropInfo_SaveData_o **)((char *)&v32->obj.klass + v30 * 4), 0LL);
      v33 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1BC3144(v31, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
      if ( !this )
      {
LABEL_36:
        v60 = sub_1BC3288(this);
        sub_1BC3130(v60, 0LL);
      }
      if ( v28 >= v33[6] )
        goto LABEL_35;
      *(_QWORD *)&v33[v30] = v31;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v33[v30], (int32_t)v31, v15, v34);
      ++v28;
      v30 += 2LL;
    }
    while ( v29 != v28 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v36 = battleItemInfos->max_length;
  v37 = sub_1BC30B0(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v36);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v37;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.battleItemInfos, v37, v39, v40);
  if ( v36 >= 1 )
  {
    v43 = 0;
    do
    {
      v44 = (Il2CppObject *)sub_1BC3254(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v44, 0LL);
      v45 = saveData->fields.battleItemInfos;
      if ( !v45 )
        goto LABEL_34;
      if ( v43 >= v45->max_length )
        goto LABEL_35;
      if ( !v44 )
        goto LABEL_34;
      v46 = v45->m_Items[v43];
      if ( !v46 )
        goto LABEL_34;
      v44[1].klass = (Il2CppClass *)v46->fields;
      v47 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1BC3144(v44, v47->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v43 >= v47->max_length )
        goto LABEL_35;
      v49 = &v47->obj.klass + (int)v43;
      v49[4] = (Il2CppClass *)v44;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v44, v15, v48);
    }
    while ( v36 != ++v43 );
  }
  v4->fields.star = saveData->fields.star;
  enemySvtInfos = saveData->fields.enemySvtInfos;
  v4->fields.enemySvtInfos = enemySvtInfos;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.enemySvtInfos, (int32_t)enemySvtInfos, v41, v42);
  battleFlag = saveData->fields.battleFlag;
  v4->fields.battleFlag = battleFlag;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.battleFlag, (int32_t)battleFlag, v52, v53);
  fieldEnvironmentData = saveData->fields.fieldEnvironmentData;
  v4->fields.fieldEnvironmentData = fieldEnvironmentData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.fieldEnvironmentData, (int32_t)fieldEnvironmentData, v55, v56);
  battleMissionFlag = saveData->fields.battleMissionFlag;
  v4->fields.battleMissionFlag = battleMissionFlag;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.battleMissionFlag, (int32_t)battleMissionFlag, v58, v59);
}


void __fastcall BattleWaveInfoData__SetWaveInfoData(
        BattleWaveInfoData_o *this,
        BattleData_o *battleData,
        BattleServantData_SaveData_array *enemySaveData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  __int64 size; // x22
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  unsigned __int64 v23; // x24
  struct System_Int32_array *equipSkillChargeNum; // x26
  __int64 v25; // x2
  char *v26; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v28; // x22
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  unsigned __int64 v32; // x24
  __int64 v33; // x26
  unsigned int *dropInfos; // x28
  const MethodInfo *v35; // x3
  BattleWaveInfoData_o *v36; // x25
  int32_t wave; // w24
  BattleWaveInfoData_o *v38; // x22
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x23
  Il2CppObject *v43; // x24
  const MethodInfo *v44; // x3
  __int64 v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x8
  unsigned __int64 v49; // x23
  __int64 v50; // x24
  struct System_String_array *enemySvtInfos; // x26
  const MethodInfo *v52; // x3
  struct System_Int32_array *v53; // x1
  System_Collections_Generic_Dictionary_int__int__o *BattleValueDict; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *SaveData; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Int32_array *v60; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *BattleMissionValueDict_k__BackingField; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x0

  v6 = this;
  if ( (byte_4B01ACF & 1) == 0 )
  {
    sub_1BC3008(&BattleWaveInfoData_BattleItemInfo___TypeInfo, battleData);
    sub_1BC3008(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v7);
    sub_1BC3008(&Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___, v8);
    sub_1BC3008(&Method_ByteCompressor_ImportMiniMessagePack_BattleServantData_SaveData___, v9);
    sub_1BC3008(&DropInfo___TypeInfo, v10);
    sub_1BC3008(&int___TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v15);
    sub_1BC3008(&Method_SingletonTemplate_BattleItemData__get_Instance__, v16);
    this = (BattleWaveInfoData_o *)sub_1BC3008(&string___TypeInfo, v17);
    byte_4B01ACF = 1;
  }
  if ( !battleData )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)BattleData__getDispWaveCount(battleData, 0LL);
  v6->fields.wave = (int)this;
  v6->fields.turn = battleData->fields.totalTurnCount + 1;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_47;
  size = (unsigned int)masterSkillInfo->fields._size;
  v20 = sub_1BC30B0(int___TypeInfo, (unsigned int)size);
  v6->fields.equipSkillChargeNum = (struct System_Int32_array *)v20;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.equipSkillChargeNum, v20, v21, v22);
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v6->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v23,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v23 >= equipSkillChargeNum->max_length )
        goto LABEL_48;
      v26 = (char *)equipSkillChargeNum + 4 * v23++;
      *((_DWORD *)v26 + 8) = this->fields.battleItemInfos;
      if ( size == v23 )
        goto LABEL_12;
    }
LABEL_47:
    sub_1BC3264(this, battleData);
  }
LABEL_12:
  this = (BattleWaveInfoData_o *)BasicHelper__IsNullOrEmpty(
                                   (System_Collections_ICollection_o *)battleData->fields.droplist,
                                   0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    droplist = battleData->fields.droplist;
    if ( !droplist )
      goto LABEL_47;
    v28 = (unsigned int)droplist->fields._size;
    v29 = sub_1BC30B0(DropInfo___TypeInfo, (unsigned int)v28);
    v6->fields.dropInfos = (struct DropInfo_array *)v29;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.dropInfos, v29, v30, v31);
    if ( (int)v28 >= 1 )
    {
      v32 = 0LL;
      v33 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_47;
        dropInfos = (unsigned int *)v6->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v32,
                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_47;
        v36 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1BC3144(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_49;
        }
        if ( v32 >= dropInfos[6] )
          goto LABEL_48;
        *(_QWORD *)&dropInfos[v33] = v36;
        sub_1BC2FAC((CGThumbnailListItem_o *)&dropInfos[v33], (int32_t)v36, v25, v35);
        ++v32;
        v33 += 2LL;
      }
      while ( v28 != v32 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_47;
  wave = this->fields.wave;
  v38 = this;
  v39 = sub_1BC30B0(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v6->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v39;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.battleItemInfos, v39, v40, v41);
  if ( wave >= 1 )
  {
    battleItemInfos = v6->fields.battleItemInfos;
    v43 = (Il2CppObject *)sub_1BC3254(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v43, 0LL);
    if ( !v43 )
      goto LABEL_47;
    v43[1].klass = *(Il2CppClass **)&v38->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_47;
    this = (BattleWaveInfoData_o *)sub_1BC3144(v43, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_49:
      v64 = sub_1BC3288(this);
      sub_1BC3130(v64, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_48:
      sub_1BC326C(this, battleData, v25);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v43;
    sub_1BC2FAC((CGThumbnailListItem_o *)battleItemInfos->m_Items, (int32_t)v43, v25, v44);
  }
  v6->fields.star = battleData->fields.totalCriticalStars;
  this = (BattleWaveInfoData_o *)battleData->fields.questphase_ent;
  if ( !this )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)QuestPhaseEntity__IsSaveInterruptionEnemyData((QuestPhaseEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !enemySaveData )
      goto LABEL_47;
    v45 = sub_1BC30B0(string___TypeInfo, enemySaveData->max_length);
    v6->fields.enemySvtInfos = (struct System_String_array *)v45;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.enemySvtInfos, v45, v46, v47);
    v48 = *(_QWORD *)&enemySaveData->max_length;
    if ( (int)v48 >= 1 )
    {
      v49 = 0LL;
      v50 = 32LL;
      while ( v49 < (unsigned int)v48 )
      {
        enemySvtInfos = v6->fields.enemySvtInfos;
        this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                         *(Il2CppObject **)((char *)&enemySaveData->obj.klass + v50),
                                         (const MethodInfo_2FF4518 *)Method_ByteCompressor_ImportMiniMessagePack_BattleServantData_SaveData___);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0LL);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0LL);
        if ( !this || !enemySvtInfos )
          goto LABEL_47;
        if ( v49 >= enemySvtInfos->max_length )
          goto LABEL_48;
        v53 = this->fields.equipSkillChargeNum;
        *(Il2CppClass **)((char *)&enemySvtInfos->obj.klass + v50) = (Il2CppClass *)v53;
        sub_1BC2FAC((CGThumbnailListItem_o *)((char *)enemySvtInfos + v50), (int32_t)v53, v25, v52);
        LODWORD(v48) = enemySaveData->max_length;
        ++v49;
        v50 += 8LL;
        if ( (__int64)v49 >= (int)v48 )
          goto LABEL_42;
      }
      goto LABEL_48;
    }
  }
LABEL_42:
  BattleValueDict = BattleData__GetBattleValueDict(battleData, 0LL);
  v6->fields.battleFlag = BattleValueDict;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.battleFlag, (int32_t)BattleValueDict, v55, v56);
  this = (BattleWaveInfoData_o *)battleData->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_47;
  SaveData = (Il2CppObject *)BattleFieldEnvironmentData__GetSaveData((BattleFieldEnvironmentData_o *)this, 0LL);
  this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                   SaveData,
                                   (const MethodInfo_2FF4518 *)Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
  if ( !this )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  v60 = this->fields.equipSkillChargeNum;
  v6->fields.fieldEnvironmentData = (struct System_String_o *)v60;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.fieldEnvironmentData, (int32_t)v60, v58, v59);
  BattleMissionValueDict_k__BackingField = battleData->fields._BattleMissionValueDict_k__BackingField;
  v6->fields.battleMissionFlag = BattleMissionValueDict_k__BackingField;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&v6->fields.battleMissionFlag,
    (int32_t)BattleMissionValueDict_k__BackingField,
    v62,
    v63);
}


void __fastcall BattleWaveInfoData_BattleItemInfo___ctor(
        BattleWaveInfoData_BattleItemInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_BattleItemInfo_SaveData_o *__fastcall BattleWaveInfoData_BattleItemInfo__GetSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_4B01AD0 & 1) == 0 )
  {
    sub_1BC3008(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method);
    byte_4B01AD0 = 1;
  }
  v3 = sub_1BC3254(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1BC3264(v4, v5);
  result = (BattleWaveInfoData_BattleItemInfo_SaveData_o *)v3;
  *(BattleWaveInfoData_BattleItemInfo_Fields *)(v3 + 16) = this->fields;
  return result;
}


void __fastcall BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        BattleWaveInfoData_BattleItemInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1BC3264(this, 0LL);
  this->fields = (BattleWaveInfoData_BattleItemInfo_Fields)saveData->fields;
}


void __fastcall BattleWaveInfoData_BattleItemInfo_SaveData___ctor(
        BattleWaveInfoData_BattleItemInfo_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleWaveInfoData_SaveData___ctor(BattleWaveInfoData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}