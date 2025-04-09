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
  struct System_Int32_array *v15; // x12
  __int64 v16; // x9
  unsigned __int64 v17; // x10
  unsigned __int64 v18; // x8
  int32_t *v19; // x12
  __int64 v20; // x13
  int v21; // w21
  struct DropInfo_array *dropInfos; // x8
  __int64 v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  il2cpp_array_size_t v26; // w24
  struct DropInfo_array *v27; // x8
  _DWORD *v28; // x26
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x23
  _DWORD *v32; // x0
  int v33; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  il2cpp_array_size_t v40; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v41; // x8
  _DWORD *v42; // x26
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x23
  _DWORD *v46; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v55; // x0

  if ( (byte_49BA95A & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v3);
    sub_1B4CF90(&DropInfo_SaveData___TypeInfo, v4);
    sub_1B4CF90(&BattleWaveInfoData_SaveData_TypeInfo, v5);
    byte_49BA95A = 1;
  }
  v6 = sub_1B4D1DC(BattleWaveInfoData_SaveData_TypeInfo);
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
  v11 = sub_1B4D038(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v6 + 24) = v11;
  v12 = (__int64 *)(v6 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 24), v11, v13, v14);
  if ( max_length >= 1 )
  {
    v15 = this->fields.equipSkillChargeNum;
    if ( !v15 )
      goto LABEL_44;
    v16 = *v12;
    v17 = v15->max_length;
    v18 = 0LL;
    v19 = &v15->m_Items[1];
    v20 = *v12 + 32;
    do
    {
      if ( v18 >= v17 )
        goto LABEL_45;
      if ( !v16 )
        goto LABEL_44;
      if ( v18 >= *(unsigned int *)(v16 + 24) )
LABEL_45:
        sub_1B4D1F4(IsNullOrEmpty, v8);
      *(_DWORD *)(v20 + 4 * v18) = v19[v18];
      ++v18;
    }
    while ( max_length != v18 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v21 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v21 = dropInfos->max_length;
  }
  v23 = sub_1B4D038(DropInfo_SaveData___TypeInfo, (unsigned int)v21);
  *(_QWORD *)(v6 + 32) = v23;
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 32), v23, v24, v25);
  if ( v21 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = this->fields.dropInfos;
      if ( !v27 )
        break;
      if ( v26 >= v27->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v27->m_Items[v26];
      if ( !IsNullOrEmpty )
        break;
      v28 = *(_DWORD **)(v6 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v28 )
        break;
      v31 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1B4D0CC(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v55 = sub_1B4D210(IsNullOrEmpty);
          sub_1B4D0B8(v55, 0LL);
        }
      }
      if ( v26 >= v28[6] )
        goto LABEL_45;
      v32 = &v28[2 * v26];
      *((_QWORD *)v32 + 4) = v31;
      sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 8), v31, v29, v30);
      if ( v21 == ++v26 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1B4D1EC(IsNullOrEmpty, v8);
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
  v35 = sub_1B4D038(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v33);
  *(_QWORD *)(v6 + 40) = v35;
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 40), v35, v36, v37);
  if ( v33 >= 1 )
  {
    v40 = 0;
    do
    {
      v41 = this->fields.battleItemInfos;
      if ( !v41 )
        goto LABEL_44;
      if ( v40 >= v41->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v41->m_Items[v40];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v42 = *(_DWORD **)(v6 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v8);
      if ( !v42 )
        goto LABEL_44;
      v45 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1B4D0CC(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v40 >= v42[6] )
        goto LABEL_45;
      v46 = &v42[2 * v40];
      *((_QWORD *)v46 + 4) = v45;
      sub_1B4CF34((CGThumbnailListItem_o *)(v46 + 8), v45, v43, v44);
    }
    while ( v33 != ++v40 );
  }
  *(_DWORD *)(v6 + 48) = this->fields.star;
  enemySvtInfos = this->fields.enemySvtInfos;
  *(_QWORD *)(v6 + 56) = enemySvtInfos;
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 56), (int32_t)enemySvtInfos, v38, v39);
  battleFlag = this->fields.battleFlag;
  *(_QWORD *)(v6 + 64) = battleFlag;
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 64), (int32_t)battleFlag, v49, v50);
  fieldEnvironmentData = this->fields.fieldEnvironmentData;
  *(_QWORD *)(v6 + 72) = fieldEnvironmentData;
  sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 72), (int32_t)fieldEnvironmentData, v52, v53);
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
  struct System_Int32_array *v15; // x12
  struct System_Int32_array *v16; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v18; // x8
  int32_t *v19; // x12
  __int64 v20; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v22; // x22
  __int64 v23; // x0
  unsigned int **p_dropInfos; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned __int64 v27; // x23
  __int64 v28; // x25
  __int64 v29; // x26
  DropInfo_o *v30; // x22
  struct DropInfo_SaveData_array *v31; // x8
  unsigned int *v32; // x27
  int32_t v33; // w2
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
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppClass **v50; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_String_o *fieldEnvironmentData; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x0

  v4 = this;
  if ( (byte_49BA959 & 1) == 0 )
  {
    sub_1B4CF90(&BattleWaveInfoData_BattleItemInfo___TypeInfo, saveData);
    sub_1B4CF90(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1B4CF90(&DropInfo___TypeInfo, v6);
    sub_1B4CF90(&DropInfo_TypeInfo, v7);
    this = (BattleWaveInfoData_o *)sub_1B4CF90(&int___TypeInfo, v8);
    byte_49BA959 = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v10 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v11 = sub_1B4D038(int___TypeInfo, (unsigned int)v10);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v11;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.equipSkillChargeNum, v11, v13, v14);
  if ( (int)v10 >= 1 )
  {
    v15 = saveData->fields.equipSkillChargeNum;
    if ( !v15 )
      goto LABEL_34;
    v16 = *p_equipSkillChargeNum;
    max_length = v15->max_length;
    v18 = 0LL;
    v19 = &v15->m_Items[1];
    v20 = (__int64)&(*p_equipSkillChargeNum)->m_Items[1];
    do
    {
      if ( v18 >= max_length )
        goto LABEL_35;
      if ( !v16 )
        goto LABEL_34;
      if ( v18 >= v16->max_length )
LABEL_35:
        sub_1B4D1F4(this, saveData);
      *(_DWORD *)(v20 + 4 * v18) = v19[v18];
      ++v18;
    }
    while ( (unsigned int)v10 != v18 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1B4D1EC(this, saveData);
  v22 = *(_QWORD *)&dropInfos->max_length;
  v23 = sub_1B4D038(DropInfo___TypeInfo, (unsigned int)v22);
  v4->fields.dropInfos = (struct DropInfo_array *)v23;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.dropInfos, v23, v25, v26);
  if ( (int)v22 >= 1 )
  {
    v27 = 0LL;
    v28 = (unsigned int)v22;
    v29 = 8LL;
    do
    {
      v30 = (DropInfo_o *)sub_1B4D1DC(DropInfo_TypeInfo);
      DropInfo___ctor(v30, 0LL);
      v31 = saveData->fields.dropInfos;
      if ( !v31 )
        goto LABEL_34;
      if ( v27 >= v31->max_length )
        goto LABEL_35;
      if ( !v30 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v30, *(DropInfo_SaveData_o **)((char *)&v31->obj.klass + v29 * 4), 0LL);
      v32 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1B4D0CC(v30, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
      if ( !this )
      {
LABEL_36:
        v58 = sub_1B4D210(this);
        sub_1B4D0B8(v58, 0LL);
      }
      if ( v27 >= v32[6] )
        goto LABEL_35;
      *(_QWORD *)&v32[v29] = v30;
      sub_1B4CF34((CGThumbnailListItem_o *)&v32[v29], (int32_t)v30, v33, v34);
      ++v27;
      v29 += 2LL;
    }
    while ( v28 != v27 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v36 = battleItemInfos->max_length;
  v37 = sub_1B4D038(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v36);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v37;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.battleItemInfos, v37, v39, v40);
  if ( v36 >= 1 )
  {
    v43 = 0;
    do
    {
      v44 = (Il2CppObject *)sub_1B4D1DC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
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
      this = (BattleWaveInfoData_o *)sub_1B4D0CC(v44, v47->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v43 >= v47->max_length )
        goto LABEL_35;
      v50 = &v47->obj.klass + (int)v43;
      v50[4] = (Il2CppClass *)v44;
      sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v44, v48, v49);
    }
    while ( v36 != ++v43 );
  }
  v4->fields.star = saveData->fields.star;
  enemySvtInfos = saveData->fields.enemySvtInfos;
  v4->fields.enemySvtInfos = enemySvtInfos;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.enemySvtInfos, (int32_t)enemySvtInfos, v41, v42);
  battleFlag = saveData->fields.battleFlag;
  v4->fields.battleFlag = battleFlag;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.battleFlag, (int32_t)battleFlag, v53, v54);
  fieldEnvironmentData = saveData->fields.fieldEnvironmentData;
  v4->fields.fieldEnvironmentData = fieldEnvironmentData;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.fieldEnvironmentData, (int32_t)fieldEnvironmentData, v56, v57);
}


void __fastcall BattleWaveInfoData__SetWaveInfoData(
        BattleWaveInfoData_o *this,
        BattleData_o *battleData,
        BattleServantData_SaveData_array *enemySaveData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v6; // x19
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
  char *v25; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v27; // x22
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  unsigned __int64 v31; // x24
  __int64 v32; // x26
  unsigned int *dropInfos; // x28
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  BattleWaveInfoData_o *v36; // x25
  int32_t wave; // w24
  BattleWaveInfoData_o *v38; // x22
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x23
  Il2CppObject *v43; // x24
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x8
  unsigned __int64 v50; // x23
  __int64 v51; // x24
  struct System_String_array *enemySvtInfos; // x26
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Int32_array *v55; // x1
  System_Collections_Generic_Dictionary_int__int__o *BattleValueDict; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *SaveData; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Int32_array *v62; // x1
  __int64 v63; // x0

  v6 = this;
  if ( (byte_49BA95B & 1) == 0 )
  {
    sub_1B4CF90(&BattleWaveInfoData_BattleItemInfo___TypeInfo, battleData);
    sub_1B4CF90(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v7);
    sub_1B4CF90(&Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___, v8);
    sub_1B4CF90(&Method_ByteCompressor_ImportMiniMessagePack_BattleServantData_SaveData___, v9);
    sub_1B4CF90(&DropInfo___TypeInfo, v10);
    sub_1B4CF90(&int___TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v15);
    sub_1B4CF90(&Method_SingletonTemplate_BattleItemData__get_Instance__, v16);
    this = (BattleWaveInfoData_o *)sub_1B4CF90(&string___TypeInfo, v17);
    byte_49BA95B = 1;
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
  v20 = sub_1B4D038(int___TypeInfo, (unsigned int)size);
  v6->fields.equipSkillChargeNum = (struct System_Int32_array *)v20;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.equipSkillChargeNum, v20, v21, v22);
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
                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v23 >= equipSkillChargeNum->max_length )
        goto LABEL_48;
      v25 = (char *)equipSkillChargeNum + 4 * v23++;
      *((_DWORD *)v25 + 8) = this->fields.battleItemInfos;
      if ( size == v23 )
        goto LABEL_12;
    }
LABEL_47:
    sub_1B4D1EC(this, battleData);
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
    v27 = (unsigned int)droplist->fields._size;
    v28 = sub_1B4D038(DropInfo___TypeInfo, (unsigned int)v27);
    v6->fields.dropInfos = (struct DropInfo_array *)v28;
    sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.dropInfos, v28, v29, v30);
    if ( (int)v27 >= 1 )
    {
      v31 = 0LL;
      v32 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_47;
        dropInfos = (unsigned int *)v6->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v31,
                                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_47;
        v36 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1B4D0CC(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_49;
        }
        if ( v31 >= dropInfos[6] )
          goto LABEL_48;
        *(_QWORD *)&dropInfos[v32] = v36;
        sub_1B4CF34((CGThumbnailListItem_o *)&dropInfos[v32], (int32_t)v36, v34, v35);
        ++v31;
        v32 += 2LL;
      }
      while ( v27 != v31 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_47;
  wave = this->fields.wave;
  v38 = this;
  v39 = sub_1B4D038(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v6->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v39;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.battleItemInfos, v39, v40, v41);
  if ( wave >= 1 )
  {
    battleItemInfos = v6->fields.battleItemInfos;
    v43 = (Il2CppObject *)sub_1B4D1DC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v43, 0LL);
    if ( !v43 )
      goto LABEL_47;
    v43[1].klass = *(Il2CppClass **)&v38->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_47;
    this = (BattleWaveInfoData_o *)sub_1B4D0CC(v43, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_49:
      v63 = sub_1B4D210(this);
      sub_1B4D0B8(v63, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_48:
      sub_1B4D1F4(this, battleData);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v43;
    sub_1B4CF34((CGThumbnailListItem_o *)battleItemInfos->m_Items, (int32_t)v43, v44, v45);
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
    v46 = sub_1B4D038(string___TypeInfo, enemySaveData->max_length);
    v6->fields.enemySvtInfos = (struct System_String_array *)v46;
    sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.enemySvtInfos, v46, v47, v48);
    v49 = *(_QWORD *)&enemySaveData->max_length;
    if ( (int)v49 >= 1 )
    {
      v50 = 0LL;
      v51 = 32LL;
      while ( v50 < (unsigned int)v49 )
      {
        enemySvtInfos = v6->fields.enemySvtInfos;
        this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                         *(Il2CppObject **)((char *)&enemySaveData->obj.klass + v51),
                                         (const MethodInfo_2EF4438 *)Method_ByteCompressor_ImportMiniMessagePack_BattleServantData_SaveData___);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0LL);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0LL);
        if ( !this || !enemySvtInfos )
          goto LABEL_47;
        if ( v50 >= enemySvtInfos->max_length )
          goto LABEL_48;
        v55 = this->fields.equipSkillChargeNum;
        *(Il2CppClass **)((char *)&enemySvtInfos->obj.klass + v51) = (Il2CppClass *)v55;
        sub_1B4CF34((CGThumbnailListItem_o *)((char *)enemySvtInfos + v51), (int32_t)v55, v53, v54);
        LODWORD(v49) = enemySaveData->max_length;
        ++v50;
        v51 += 8LL;
        if ( (__int64)v50 >= (int)v49 )
          goto LABEL_42;
      }
      goto LABEL_48;
    }
  }
LABEL_42:
  BattleValueDict = BattleData__GetBattleValueDict(battleData, 0LL);
  v6->fields.battleFlag = BattleValueDict;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.battleFlag, (int32_t)BattleValueDict, v57, v58);
  this = (BattleWaveInfoData_o *)battleData->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_47;
  SaveData = (Il2CppObject *)BattleFieldEnvironmentData__GetSaveData((BattleFieldEnvironmentData_o *)this, 0LL);
  this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                   SaveData,
                                   (const MethodInfo_2EF4438 *)Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
  if ( !this )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  v62 = this->fields.equipSkillChargeNum;
  v6->fields.fieldEnvironmentData = (struct System_String_o *)v62;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.fieldEnvironmentData, (int32_t)v62, v60, v61);
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

  if ( (byte_49BA95C & 1) == 0 )
  {
    sub_1B4CF90(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method);
    byte_49BA95C = 1;
  }
  v3 = sub_1B4D1DC(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B4D1EC(v4, v5);
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
    sub_1B4D1EC(this, 0LL);
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